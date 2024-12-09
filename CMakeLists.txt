cmake_minimum_required(VERSION 3.29)
project(HeaderFiles)

set(CMAKE_CXX_STANDARD 20)

add_executable(HeaderFiles main.cpp
        calculate.cpp
        calculate.h)
