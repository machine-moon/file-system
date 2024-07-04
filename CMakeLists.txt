cmake_minimum_required(VERSION 3.10)
project(filesystem)

set(EXECUTABLE_NAME fs)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories (if any)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable
add_executable(${EXECUTABLE_NAME} src/main.cpp)

