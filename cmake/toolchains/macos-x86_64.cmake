# 64-bit Intel macOS with Apple clang, built on a Mac.
#
# x86_64 on every Mac, Apple silicon included, where it runs through Rosetta 2.
# Netplay is lockstep, so every build has to compute the same floats: the other
# lanes are all x86_64 SSE, while an arm64 build fuses multiply-adds by default
# and links a different libm, and would desync against them.
#
# CMAKE_SYSTEM_NAME is not set: the host is a Mac either way, and on Apple
# silicon CMAKE_OSX_ARCHITECTURES is what selects the other architecture.
# cmake/platforms/macos.cmake tells FFmpeg's configure the same thing.
#
#   xcode-select --install
#   brew install cmake ninja

if(NOT CMAKE_HOST_APPLE)
    message(FATAL_ERROR "macos-x86_64.cmake builds on a Mac; there is no cross lane to macOS.")
endif()

set(CMAKE_OSX_ARCHITECTURES x86_64 CACHE STRING "")

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# -mmmx matches every other lane.
set(CMAKE_C_FLAGS_INIT   "-mmmx")
set(CMAKE_CXX_FLAGS_INIT "-mmmx")
