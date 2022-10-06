cmake_minimum_required(VERSION 2.8.11)
project(learn_godot)

set(CMAKE_CXX_STANDARD 11)

# # CMake to help local projects find the build dir
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../build/lib")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../build/lib")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../build")
# set(HEADER_COPY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../build/include")
# 
# # Copy header files to the output directory so they can be used
# # by other projects in development.
# file(
#         COPY ${CMAKE_CURRENT_SOURCE_DIR}/revolve
#         DESTINATION ${HEADER_COPY_DIR}
#         FILES_MATCHING PATTERN "*.h"
# )

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/godot-headers/
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/bin
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/include/core/
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/include/bin/
    ${CMAKE_CURRENT_SOURCE_DIR}/godot-cpp/build/include/gen
)

set(GDEXAMPLE_NAME 
    src/gdexample.cpp
    src/gdlibrary.cpp
)

add_library(gdexample SHARED ${GDEXAMPLE_NAME})

# install stuff
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})

install(
    TARGETS gdexample
    DESTINATION bin
)
