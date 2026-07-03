cmake_minimum_required(VERSION 4.3.4)

project(klist)

set (INCLUDE
    include/klist.h
    include/types.h
)

set (SOURCES
    src/klist.c
)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include/)

add_library(klist STATIC ${SOURCES} ${INCLUDE})
