cmake_minimum_required(VERSION 2.6)
project(SFML_test)

set(CMAKE_MODULE_PATH "${SFML_test_SOURCE_DIR}/cmake")
set(SFML_STATIC true)
find_package(SFML REQUIRED COMPONENTS System Audio)
include_directories(${SFML_INCLUDE_DIR})

add_executable(SFML_test main.cpp)
target_link_libraries(SFML_test ${SFML_LIBRARY})
