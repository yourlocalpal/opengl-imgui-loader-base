#include<iostream>          // Include the input/output stream library
#include<glad/glad.h>       // Include the glad library for OpenGL function definitions
#include<GLFW/glfw3.h>      // Include the GLFW library for window management
#include "imgui.h"

int main()
{
	glfwInit();                 // Initialize GLFW version 3.3 

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);      // Set the major version of the OpenGL context to 3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);      // Set the minor version of the OpenGL context to 3
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);    // Set the OpenGL profile to the core profile

	GLFWwindow* window = glfwCreateWindow(800, 800, "Loader", NULL, NULL);   // Create a window with a specific size and title
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;    // Print an error message if window creation fails
		glfwTerminate();    // Terminate GLFW
		return -1;          // Exit the program with an error code
	}

	glfwMakeContextCurrent(window);    // Make the newly created window the current context

	gladLoadGL();    // Load the OpenGL function pointers using glad

	glViewport(0, 0, 800, 800);    // Set the viewport size

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);    // Set the clear color to a dark blue
	glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer
	glfwSwapBuffers(window);    // Swap the front and back buffers to update the window

	while (!glfwWindowShouldClose(window))    // Loop until the window should be closed
	{
		glfwPollEvents();    // Process events
	}

	glfwDestroyWindow(window);    // Destroy the window
	glfwTerminate();    // Terminate GLFW
	return 0;    // Exit the program with a success code
}
