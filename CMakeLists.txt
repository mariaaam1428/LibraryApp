cmake_minimum_required(VERSION 3.19)
project(library C)

set(CMAKE_C_STANDARD 99)

add_executable(library main.c Stack.c Stack)