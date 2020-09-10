cmake_minimum_required(VERSION 3.15)
project(tetris)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(lib)
include_directories(lib/googletest/include)
include_directories(lib/googlemock/include)

add_executable(tetris main.cpp Tests/ClassName.h Tests/Test.cpp)
target_link_libraries(tetris gtest gtest_main)