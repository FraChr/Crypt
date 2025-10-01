cmake_minimum_required(VERSION 4.0)
project(crypt)

set(CMAKE_CXX_STANDARD 26)

add_executable(crypt main.cpp
        Start.cpp
        Start.h
        ArgumentsHandler/ArgumentsHandler.cpp
        ArgumentsHandler/ArgumentsHandler.h)
