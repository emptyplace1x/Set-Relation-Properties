cmake_minimum_required(VERSION 3.23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(set_relation_properties)

set(SOURCES
    src/main.cpp    
)

add_executable(set_relation_properties ${SOURCES})

target_include_directories(set_relation_properties
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
