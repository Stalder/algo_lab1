cmake_minimum_required(VERSION 3.17)
project(sort)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(sort_run ${SOURCE_FILES})

include_directories(sort_lib)
add_subdirectory(sort_lib)

target_link_libraries(sort_run sort_lib)

add_subdirectory(sort_tests)
