cmake_minimum_required(VERSION 3.18.1)

project("native_est")

add_library(
        native_est
        SHARED
        native-lib.cpp)

find_library(
        log-lib
        log)

message("begin to find main libraries")

add_library(LIB_RUN SHARED IMPORTED)
set_target_properties(LIB_RUN PROPERTIES IMPORTED_LOCATION /home/jehan/AndroidStudioProjects/native_est/app/src/main/cpp/lib/librun.so)
include_directories( /home/jehan/AndroidStudioProjects/native_est/app/src/main/cpp/include/ )

add_library( main
        SHARED
        /home/jehan/AndroidStudioProjects/native_est/app/src/main/cpp/main.cpp )

target_link_libraries(
        native_est
        main
        LIB_RUN
        ${log-lib}
)
target_link_libraries(
        native_est
        ${log-lib})