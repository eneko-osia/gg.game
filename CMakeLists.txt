# cmake version check
cmake_minimum_required(VERSION 3.12.0 FATAL_ERROR)

# project
project(gg.game VERSION 0.0.1 LANGUAGES CXX)

# add game
add_subdirectory("src/game")
