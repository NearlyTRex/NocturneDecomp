# EXPERIMENT: native 64-bit Linux toolchain (no -m32 / no multilib).
# Mirrors linux-i686.cmake but drops the 32-bit target flags and points
# pkg-config at the amd64 multiarch path. Used to probe what breaks when the
# decomp is compiled without multilib.

set(CMAKE_SYSTEM_NAME       Linux)
set(CMAKE_SYSTEM_PROCESSOR  x86_64)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# Drop -m32; keep -mmmx/-fasm-blocks so we see only multilib-related breakage
# rather than masking it behind missing-flag errors.
set(_NOCTURNE_TARGET_FLAGS "-mmmx -fasm-blocks")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)

set(ENV{PKG_CONFIG_LIBDIR} "/usr/lib/x86_64-linux-gnu/pkgconfig:/usr/share/pkgconfig")
