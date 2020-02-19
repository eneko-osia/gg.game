# cmake version check
cmake_minimum_required(VERSION 3.16.0 FATAL_ERROR)

# project
project(gg.game VERSION 0.0.1 LANGUAGES CXX)

# add gg.libs
add_subdirectory("deps/gg.libs")

# add game
add_subdirectory("src/game")
