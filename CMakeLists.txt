cmake_minimum_required(VERSION 3.5)

project(Randomizer2000_run LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_custom_target(Randomizer2000.h)

add_executable(Randomizer2000_run main.cpp)
