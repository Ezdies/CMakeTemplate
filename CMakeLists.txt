cmake_minimum_required(VERSION 3.22)

project(testProject)

add_executable(main main.cpp)
target_compile_options(main PRIVATE -Wall -Wextra -pedantic)

