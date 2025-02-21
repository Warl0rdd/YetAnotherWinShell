cmake_minimum_required(VERSION 3.10)
project(YetAnotherWinShell C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(YetAnotherWinShell YetAnotherWinShell/main.c YetAnotherWinShell/utils/ascii_art.c)