# opengl-imgui-loader-base
Uses openGL to load the interface and render the imgui interface

![imgui](https://github.com/yourlocalpal/opengl-imgui-loader-base/assets/118146578/f47948cd-f1de-4cc1-a445-b4f92634ec69)

Commit 2: ImGui renders in the openGL window. Base loader completed.

# Explanation:

GLFW: GLFW is a library that provides a platform-independent API for window management and input handling. It offers functions like glfwInit(), glfwCreateWindow(), and glfwMakeContextCurrent() to initialize GLFW, create a window, and set the window as the current OpenGL context.

OpenGL: OpenGL is a graphics API used for rendering 2D and 3D graphics. It provides functions like glViewport(), glClearColor(), and glClear() to set the viewport size, define the clear color, and clear the color buffer, respectively. OpenGL is responsible for loading the necessary OpenGL function pointers using gladLoadGL().

ImGui: ImGui (Immediate Mode Graphical User Interface) is a lightweight library that allows you to create user interfaces within an OpenGL application. It acts as a layer on top of GLFW and OpenGL, providing a simple and efficient way to create UI elements and handle user input. ImGui integrates with GLFW for window and input management and uses OpenGL to render UI elements within the OpenGL context created by GLFW.
