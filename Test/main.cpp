#include <iostream>
#include <GLFW/glfw3.h>

void ErrorCallback(int error_code, const char* description) {
  std::cout << "Error : " << description << std::endl;
}

int main(int argc, char const *argv[]) {
  std::cout << "Hello from Kernel\n";
  int status = glfwInit();

  if (status == GLFW_FALSE) {
    std::cout << "Failed to initialize GLFW\n";
    glfwTerminate();
  }

  glfwSetErrorCallback(ErrorCallback);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

  GLFWwindow* window = glfwCreateWindow(800, 600, "Test", NULL, NULL);
  if (window == nullptr) {
    
  }

  /* Let's Skip the GLAD for a second */

  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  return 0;
}
