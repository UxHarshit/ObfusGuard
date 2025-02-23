cmake_minimum_required(VERSION 3.26)
project(CTProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(CTProject main.cpp
        Obfuscater/Obuscate.hpp)
