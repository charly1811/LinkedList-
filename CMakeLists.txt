cmake_minimum_required(VERSION 3.4)
project(LinkdedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp lib/Node.h lib/Node.h lib/Iterator.h lib/LinkedList.h)
add_executable(LinkedList ${SOURCE_FILES})