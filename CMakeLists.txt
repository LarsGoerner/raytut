cmake_minimum_required(VERSION 3.20)
set(APP_NAME raytut)

project(${APP_NAME}_proj
        VERSION 1.0.0
        LANGUAGES C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

# Adding Raylib
include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
        raylib
        GIT_REPOSITORY "http://github.com/raysan5/raylib.git"
        GIT_TAG "5.0"
        GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(raylib)

add_executable(${APP_NAME}
        src/main.c
)

target_link_libraries(${APP_NAME} PRIVATE raylib)