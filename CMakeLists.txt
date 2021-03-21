cmake_minimum_required(VERSION 3.17)
project(FreeLancePattern C)

set(CMAKE_C_STANDARD 99)
add_library(API STATIC simpleClient.c API/flcliapi.c)
link_libraries("-lczmq")
link_libraries("-lzmq")
add_executable(FreeLancePattern simpleClient.c)