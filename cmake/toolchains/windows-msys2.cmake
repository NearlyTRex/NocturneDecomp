# Native 64-bit Windows build, run on Windows under MSYS2.
#
# The counterpart to windows-x86_64.cmake, which targets the same platform from
# a Linux host. Both produce nocturne.exe and both compile the same shim code;
# they differ only in where the toolchain comes from. This one is what a person
# who cloned the repository on Windows uses.
#
# CMAKE_SYSTEM_NAME is deliberately not set. Setting it would put CMake into
# cross-compiling mode, which is wrong here and would also flip the
# CMAKE_CROSSCOMPILING branches in bundledlibs.cmake to the cross ones --
# FFmpeg would be told --enable-cross-compile and handed a cross prefix that
# does not exist in this environment.
#
# Environment: UCRT64, not CLANG64 or MINGW64. UCRT64's clang links libstdc++,
# which is the same C++ runtime the Linux-hosted cross lane produces, so the
# two Windows binaries agree on standard-library behaviour. CLANG64 would give
# libc++ instead and quietly make them different builds. MINGW64 is the older
# msvcrt environment.
#
#   pacman -S --needed mingw-w64-ucrt-x86_64-clang \
#                      mingw-w64-ucrt-x86_64-cmake \
#                      mingw-w64-ucrt-x86_64-ninja \
#                      mingw-w64-ucrt-x86_64-python \
#                      git make diffutils pkgconf
#
# make/diffutils/pkgconf are the MSYS2-side packages FFmpeg's autotools build
# needs; everything else is the ucrt64-side toolchain.

if(NOT CMAKE_HOST_WIN32)
    message(FATAL_ERROR
        "windows-msys2.cmake is for building ON Windows under MSYS2.\n"
        "To produce a Windows binary from Linux, use the cross lane instead:\n"
        "    cmake --preset exe-windows-x86_64\n"
        "See docs/building.md.")
endif()

if(NOT DEFINED ENV{MSYSTEM})
    message(FATAL_ERROR
        "MSYSTEM is unset -- this does not look like an MSYS2 shell.\n"
        "Open the UCRT64 shell (ucrt64.exe) and configure from there. A plain\n"
        "cmd.exe or PowerShell has neither the toolchain nor the sh that\n"
        "FFmpeg's configure needs.")
endif()

if(NOT "$ENV{MSYSTEM}" STREQUAL "UCRT64")
    # Not fatal: another environment may well work. But the C++ runtime is the
    # thing that differs, and a mismatch there is worth saying out loud rather
    # than discovering through a behavioural difference later.
    message(WARNING
        "MSYSTEM is $ENV{MSYSTEM}, not UCRT64. The lane is written against "
        "UCRT64 (clang + libstdc++ + UCRT); CLANG64 substitutes libc++ and "
        "MINGW64 the older msvcrt.")
endif()

set(CMAKE_SYSTEM_PROCESSOR x86_64)

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# No --target and no sysroot: the compiler is already aimed at this platform.
# -mmmx matches every other lane. -fasm-blocks is absent for the same reason it
# is absent from the cross lane -- neither the exe nor the check source list
# contains an __asm block.
set(_NOCTURNE_TARGET_FLAGS "-mmmx")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")
