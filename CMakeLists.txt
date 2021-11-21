cmake_minimum_required(VERSION 3.17)
project(NQueensProblem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -pedantic-errors")

set(SOURCE_FILES
        main.cpp
        ChessBoard.h
        ChessBoard.cpp
        )

add_executable(NQueensProblem main.cpp ChessBoard.cpp)
