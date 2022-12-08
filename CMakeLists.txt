cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

project(CCL)

set( SOURCE_FILE SHARED src/main.cc)

add_library(${PROJECT_NAME} ${SOURCE_FILE})

add_executable(ccl_exe src/main.cc)

target_link_libraries(ccl_exe CCL)
