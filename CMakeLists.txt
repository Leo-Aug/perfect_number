cmake_minimum_required(VERSION 3.15)
project(perfect_number C)

set(CMAKE_C_STANDARD 99)

add_executable(perfect_number main.c perfect_number_decide.c)