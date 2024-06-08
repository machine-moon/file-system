cmake_minimum_required(VERSION 3.10)
project(filesystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories (if any)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable
add_executable(fs src/main.cpp)

