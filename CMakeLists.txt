cmake_minimum_required(VERSION 3.25)

set(current_project "temp_exec")
project(${current_project})
include_directories(modules)
add_subdirectory(modules)
add_subdirectory(samples)
