# 32-bit Linux toolchain using clang/clang++ (-m32).
# Matches compiler_config.py so syntax-check and full build stay in sync.

set(CMAKE_SYSTEM_NAME       Linux)
set(CMAKE_SYSTEM_PROCESSOR  i686)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

set(_NOCTURNE_TARGET_FLAGS "-m32 -mmmx -fasm-blocks")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS_INIT    "-m32")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "-m32")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)

# Pin pkg-config to the i386 multiarch path so pkg_check_modules resolves to
# the 32-bit .pc files (e.g. libsdl2-dev:i386's sdl2.pc), which carry the
# correct arch-specific include dir for headers like SDL2/_real_SDL_config.h.
# Without this, pkg-config picks the amd64 sdl2.pc and clang can't find the
# dispatch header for the 32-bit build.
set(ENV{PKG_CONFIG_LIBDIR} "/usr/lib/i386-linux-gnu/pkgconfig:/usr/share/pkgconfig")
