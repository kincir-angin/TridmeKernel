cmake_minimum_required(VERSION 3.0.0)
project(Test VERSION 0.1.0)

include(CTest)
include_directories(include)
enable_testing()

add_executable (
  Test
  Test/main.cpp
)

target_link_libraries(Test -lglfw3 -lGL)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)