# Cross-compile to native 64-bit Windows with clang targeting the mingw-w64
# sysroot. Produces nocturne.exe; no Wine, no MSYS2, no Visual Studio.
#
# x86_64 and not i686 on purpose. include/system/basetypes.h defines __stdcall
# and __fastcall to nothing, which is how the decompiled sources compile at all
# on a SysV host. On 32-bit Windows those keywords select a real, different ABI,
# so blanking them there would silently mis-call anything declared with one. On
# x86_64 Windows there is a single calling convention and the keywords are
# already ignored, so the definitions cost nothing. This also matches the
# default Linux lane (exe-linux-x86_64).
#
# clang is used rather than x86_64-w64-mingw32-g++ so diagnostics and warning
# flags stay identical to the Linux lanes -- the same -Werror set has to mean
# the same thing on both. The gcc cross is still required as a dependency
# because it supplies the target libstdc++ and libgcc that clang links against;
# set NOCTURNE_WIN_COMPILER=gcc to drive it directly as a cross-check.

set(CMAKE_SYSTEM_NAME       Windows)
set(CMAKE_SYSTEM_PROCESSOR  x86_64)

# Cached so it survives into the main CMakeLists scope, where bundledlibs.cmake
# needs it to name FFmpeg's cross prefix and binutils.
set(NOCTURNE_WIN_TRIPLE "x86_64-w64-mingw32" CACHE STRING "mingw-w64 target triple")
set(NOCTURNE_WIN_SYSROOT "/usr/${NOCTURNE_WIN_TRIPLE}"
    CACHE PATH "mingw-w64 sysroot (headers + import libraries)")

# Fail at configure with the fix, rather than 6000 files later with a missing
# <windows.h>. A plain `git clone` user never reaches this: nothing outside the
# win-* presets loads this file, and the Linux presets never probe for mingw.
if(NOT EXISTS "${NOCTURNE_WIN_SYSROOT}/include/windows.h")
    message(FATAL_ERROR
        "mingw-w64 sysroot not found at ${NOCTURNE_WIN_SYSROOT}.\n"
        "The Windows lane is opt-in and needs a cross toolchain:\n"
        "    sudo apt install g++-mingw-w64-x86-64 lld\n"
        "(Fedora: mingw64-gcc-c++ / Arch: mingw-w64-gcc / macOS: brew install mingw-w64)\n"
        "No other preset requires it -- the Linux builds are unaffected.")
endif()

set(NOCTURNE_WIN_COMPILER "clang" CACHE STRING
    "Compiler driving the Windows lane: clang only")
set_property(CACHE NOCTURNE_WIN_COMPILER PROPERTY STRINGS clang)

# clang is not a preference here, it is the only option. The warning set in
# cmake/compile_flags.cmake is clang's: -Wno-everything has no gcc equivalent, and
# -Werror=sometimes-uninitialized makes gcc stop with "no option
# -Wsometimes-uninitialized". Driving x86_64-w64-mingw32-g++ would mean
# reworking that set, and it is load bearing -- the sometimes-uninitialized
# error is what catches Ghidra splitting a reused register into two locals
# (docs/decompiler-artifacts.md §13). The gcc cross is still a required
# dependency: it supplies the target libstdc++ and libgcc clang links against.
if(NOT NOCTURNE_WIN_COMPILER STREQUAL "clang")
    message(FATAL_ERROR
        "NOCTURNE_WIN_COMPILER=${NOCTURNE_WIN_COMPILER} is not supported; "
        "the Windows lane is clang-only. See the note in this file.")
endif()

if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER   clang)
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# Debian ships gcc's win32 and posix threading models side by side. Clang's
# MinGW driver picks the gcc runtime itself, ignoring --gcc-install-dir, and
# takes the win32 one. That model has real std::thread and std::mutex from gcc
# 13 on, which is what shims/win32/kernel32.cpp builds its sync primitives on.
# The runtime DLLs staged beside the exe are found through the same driver, so
# they always match what was linked.
set(_NOCTURNE_TARGET_FLAGS "--target=${NOCTURNE_WIN_TRIPLE}")

set(CMAKE_C_FLAGS_INIT   "${_NOCTURNE_TARGET_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS}")

# Linked with lld, not the mingw binutils ld. clang compiles thread_local to
# native PE TLS, whose accesses carry each variable's offset into the TLS block
# as an IMAGE_REL_AMD64_SECREL fixup. GNU ld 2.41 resolves those and also emits
# a base relocation for each, so when Windows loads the exe away from its
# preferred base (ASLR, always) it adds the load delta to every TLS offset and
# the first thread-local access faults. Loaded at the preferred base, as wine
# does, nothing is relocated and the bug cannot show. lld emits no base
# relocation for a SECREL. gcc-built code is unaffected: gcc on mingw uses
# emulated TLS.
find_program(NOCTURNE_LLD ld.lld)
if(NOT NOCTURNE_LLD)
    message(FATAL_ERROR
        "ld.lld not found. The Windows lane links with lld:\n"
        "    sudo apt install lld\n"
        "See the note in cmake/toolchains/windows-x86_64.cmake for why.")
endif()
set(CMAKE_EXE_LINKER_FLAGS_INIT    "${_NOCTURNE_TARGET_FLAGS} -fuse-ld=lld")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "${_NOCTURNE_TARGET_FLAGS} -fuse-ld=lld")

set(CMAKE_RC_COMPILER "${NOCTURNE_WIN_TRIPLE}-windres")

# The unit tests are Windows executables too; with wine installed, ctest runs
# them through it, so the shims' _WIN32 paths are exercised against a Windows
# C runtime rather than only compiled. Without wine the tests still build.
find_program(NOCTURNE_WINE wine)
if(NOCTURNE_WINE AND NOT DEFINED CMAKE_CROSSCOMPILING_EMULATOR)
    set(CMAKE_CROSSCOMPILING_EMULATOR "${NOCTURNE_WINE}")
endif()

set(CMAKE_FIND_ROOT_PATH "${NOCTURNE_WIN_SYSROOT}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# The host's .pc files describe host libraries; none of them are linkable here.
# bundledlibs.cmake builds SDL2/SDL2_ttf/FFmpeg from source for this target, so
# nothing should be resolving through pkg-config in the first place.
set(ENV{PKG_CONFIG_LIBDIR} "${NOCTURNE_WIN_SYSROOT}/lib/pkgconfig")
