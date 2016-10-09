cmake_minimum_required(VERSION 3.6)

#############################  DiagonalDifference #############################

project(DiagonalDifference)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Domains/Algorithms/Warmup/DiagonalDifference.c)
add_executable(DiagonalDifference ${SOURCE_FILES})

################################## PlusMinus ##################################

project(PlusMinus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Domains/Algorithms/Warmup/PlusMinus.c)
add_executable(PlusMinus ${SOURCE_FILES})