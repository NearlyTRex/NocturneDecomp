# macOS with Apple clang, built on a Mac, for either architecture: arm64 for
# Apple silicon, x86_64 for Intel Macs. The preset sets CMAKE_OSX_ARCHITECTURES
# and Apple's clang builds the other one from either host with -arch alone;
# cmake/platforms/macos.cmake tells FFmpeg's configure the same thing. One
# architecture per build, not a universal binary: FFmpeg's configure targets one.
#
# CMAKE_SYSTEM_NAME is not set: the host is a Mac either way.
#
#   xcode-select --install
#   brew install cmake ninja

if(NOT CMAKE_HOST_APPLE)
    message(FATAL_ERROR "macos.cmake builds on a Mac; there is no cross lane to macOS.")
endif()

if(NOT CMAKE_OSX_ARCHITECTURES)
    set(CMAKE_OSX_ARCHITECTURES "${CMAKE_HOST_SYSTEM_PROCESSOR}" CACHE STRING "")
endif()

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()
