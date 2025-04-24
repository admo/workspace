# https://gcc.gnu.org/wiki/Visibility

cmake_minimum_required(VERSION 3.31)

project(shapes LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_library(foobar SHARED foobar.cpp)

add_library(foo_plain SHARED foo.cpp bar.cpp)

add_library(foo_lto SHARED foo.cpp bar.cpp)
set_target_properties(foo_lto PROPERTIES INTERPROCEDURAL_OPTIMIZATION ON)

add_library(foo_symbol SHARED foo.cpp bar.cpp)
set_target_properties(foo_symbol PROPERTIES CXX_VISIBILITY_PRESET hidden VISIBILITY_INLINES_HIDDEN ON)

add_library(foo_lto_symbol SHARED foo.cpp bar.cpp)
set_target_properties(foo_lto_symbol PROPERTIES INTERPROCEDURAL_OPTIMIZATION ON CXX_VISIBILITY_PRESET hidden VISIBILITY_INLINES_HIDDEN ON)
