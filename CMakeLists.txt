cmake_minimum_required(VERSION 3.10)

# Project information
project(MosqueAsciiArt VERSION 1.0.0 DESCRIPTION "A program that shows hello world ASCII art.")

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(hello main.cpp)

# Pass version information to the program
target_compile_definitions(hello PRIVATE 
    PROJECT_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
    PROJECT_VERSION_MINOR=${PROJECT_VERSION_MINOR}
    PROJECT_VERSION_PATCH=${PROJECT_VERSION_PATCH}
)

# Install target
install(TARGETS hello DESTINATION /usr/bin)

# Set package metadata
set(CPACK_PACKAGE_NAME "hello")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_CONTACT "spam@marufabbasi.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A simple program that displays a hello world ASCII art.")
set(CPACK_PACKAGE_VENDOR "Maruf Abbasi")
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "hello")

# Debian-specific package information
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Maruf Abbasi spam@marufabbasi.com")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.27)")
set(CPACK_DEBIAN_PACKAGE_SECTION "utils")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "A simple program that displays a hello worldASCII art.")


# Specify package generator
set(CPACK_GENERATOR "DEB")

# Finalizing CPack settings
include(CPack)