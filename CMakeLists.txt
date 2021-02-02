cmake_minimum_required(VERSION 3.0)
project(casserts C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH true)

if (NOT TARGET casserts)
    add_custom_target(casserts)

    # Install
    install(FILES casserts.h DESTINATION include)
endif ()

