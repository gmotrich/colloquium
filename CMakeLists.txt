cmake_minimum_required(VERSION 3.24)
project(colloquium)

set(CMAKE_CXX_STANDARD 17)

add_executable(colloquium main.cpp modules/RationalNumber/impl/RationalNumber.cpp modules/RationalNumber/api/RationalNumber.h)
