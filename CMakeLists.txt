cmake_minimum_required(VERSION 3.22)
project(AOC2023 C)

set(CMAKE_C_STANDARD 99)
add_executable(Day1 day1.c)

add_executable(Day2 day2.c day2_input)

add_executable(Day3 day3.c)

add_executable(Day4 day4.c)

add_executable(Day5 day5.c)

add_executable(Day6 day6.c)

add_executable(Day7 day7.c)

add_executable(Day8 day8.c)

add_executable(Day9 day9.c)

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})

add_executable(Day10 day10.c)

target_link_libraries(Day10 ${CURSES_LIBRARIES})

add_executable(Day11 day11.c)
