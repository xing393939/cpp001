cmake_minimum_required(VERSION 3.0.0)
project(01 VERSION 1)
project(02 VERSION 2)

include(CTest)
enable_testing()

add_executable(01 01_main.cpp)
add_executable(02 02_thread_local.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
