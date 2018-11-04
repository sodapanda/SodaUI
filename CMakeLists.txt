cmake_minimum_required(VERSION 3.7)

project(sodaui)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${sodaui_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(OpenGL REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
                    ${SDL2_IMAGE_INCLUDE_DIR}
                    ${SDL2_TTF_INCLUDE_DIR}
                    ${OPENGL_INCLUDE_DIRS})

add_executable(sodaui main.cpp)

target_link_libraries(sodaui ${SDL2_LIBRARY}
                             ${SDL2_IMAGE_LIBRARIES}
                             ${SDL2_TTF_LIBRARIES}
                             ${OPENGL_LIBRARIES})