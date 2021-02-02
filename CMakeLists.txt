cmake_minimum_required(VERSION 3.0)
project(romlibrary C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_INSTALL_PREFIX /usr)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH true)

# Install
install(FILES casserts.h DESTINATION include)

