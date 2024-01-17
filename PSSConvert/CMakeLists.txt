include_directories(./)
include_directories(../third-party/stb)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

find_package(FFMPEG REQUIRED)

add_executable(PSSConvert
        main.cpp

        converter.h
        converter.cpp
)

target_link_libraries(PSSConvert PUBLIC FFMPEG_LIBRARIES)