# 64-bit Arm Linux with clang: a Raspberry Pi 4 or 5, an Arm server or laptop,
# or the GitHub ubuntu-24.04-arm runner. Native on an aarch64 host; on any other
# host clang cross-compiles with --target, which needs the aarch64 C and C++
# libraries and every -dev package SDL's backends want, in the target's
# multiarch directory or a sysroot (NOCTURNE_LINUX_SYSROOT).

set(CMAKE_SYSTEM_NAME       Linux)
set(CMAKE_SYSTEM_PROCESSOR  aarch64)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

if(NOT CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "^(aarch64|arm64)$")
    set(_NOCTURNE_TARGET_FLAGS "--target=aarch64-linux-gnu")
    set(NOCTURNE_LINUX_SYSROOT "" CACHE PATH "Sysroot for the aarch64 cross build")
    if(NOCTURNE_LINUX_SYSROOT)
        set(CMAKE_SYSROOT "${NOCTURNE_LINUX_SYSROOT}")
    endif()
    set(CMAKE_C_FLAGS_INIT             "${_NOCTURNE_TARGET_FLAGS}")
    set(CMAKE_CXX_FLAGS_INIT           "${_NOCTURNE_TARGET_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS_INIT    "${_NOCTURNE_TARGET_FLAGS} -fuse-ld=lld")
    set(CMAKE_SHARED_LINKER_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS} -fuse-ld=lld")
endif()

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)

set(ENV{PKG_CONFIG_LIBDIR} "/usr/lib/aarch64-linux-gnu/pkgconfig:/usr/share/pkgconfig")
