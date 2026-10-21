# Native 64-bit Linux with clang, the default lane. pkg-config is pointed at the
# amd64 multiarch path so no i386 package is ever picked up.

set(CMAKE_SYSTEM_NAME       Linux)
set(CMAKE_SYSTEM_PROCESSOR  x86_64)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# -fasm-blocks is absent for the same reason as on the Windows lanes: the
# __asm bodies live only in .byval variants the source collector never selects.
set(_NOCTURNE_TARGET_FLAGS "-mmmx")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)

set(ENV{PKG_CONFIG_LIBDIR} "/usr/lib/x86_64-linux-gnu/pkgconfig:/usr/share/pkgconfig")
