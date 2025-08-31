cmake_minimum_required(VERSION 3.106)

project(MouseClicker VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# SDL2
set(SDL2_DIR "${CMAKE_SOURCE_DIR}/external/SDL2")

# 检测架构，自动选择对应的SDL2库路径
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(SDL2_LIB_DIR "${SDL2_DIR}/x86_64-w64-mingw32/lib")
    set(SDL2_BIN_DIR "${SDL2_DIR}/x86_64-w64-mingw32/bin")
else()
    set(SDL2_LIB_DIR "${SDL2_DIR}/i686-w64-mingw32/lib")
    set(SDL2_BIN_DIR "${SDL2_DIR}/i686-w64-mingw32/bin")
endif()

include_directories(${SDL2_DIR}/x86_64-w64-mingw32/include)
link_directories(${SDL2_LIB_DIR})

file(GLOB SOURCES "src/*.cpp")

add_executable(MouseClicker ${SOURCES})
target_link_libraries(MouseClicker SDL2)

# 编译后自动复制SDL2.dll到输出目录
add_custom_command(TARGET MouseClicker POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${SDL2_BIN_DIR}/SDL2.dll
        $<TARGET_FILE_DIR:MouseClicker>)
