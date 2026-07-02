# -----------------------------------------------------------------------------
# bundledlibs.cmake — build SDL2, SDL2_ttf, and FFmpeg from source for the exe
# lane, on BOTH the 32-bit (linux-i686) and native 64-bit (linux-x86_64) targets.
#
# Why source instead of apt: the Ubuntu `libsdl2-dev:i386` / `libavcodec-dev:i386`
# packages drag in a conflicting i386 `-dev` chain that apt resolves by REMOVING
# the amd64 desktop, so the 32-bit lane must build from source. We build the
# 64-bit lane the same way rather than off system pkg-config: it makes the two
# lanes reproducible and identical, and avoids depending on whichever SDL the
# host happens to have (this host, for instance, ships only a source-built SDL3,
# so `pkg_check_modules(sdl2 REQUIRED)` there would fail configure).
#
# This module reproduces the variable contract that pkg_check_modules() set:
#   SDL2_INCLUDE_DIRS / SDL2_CFLAGS_OTHER / SDL2_LIBRARIES
#   SDL2TTF_INCLUDE_DIRS / SDL2TTF_CFLAGS_OTHER / SDL2TTF_LIBRARIES
#   FFMPEG_INCLUDE_DIRS / FFMPEG_CFLAGS_OTHER / FFMPEG_LIBRARIES
# so the rest of CMakeLists.txt consumes them unchanged.
#
# Target arch is inherited automatically for the CMake sub-builds (SDL2 /
# SDL2_ttf): the linux-i686 toolchain puts -m32 in CMAKE_C/CXX_FLAGS_INIT and
# the linux-x86_64 toolchain omits it, so each FetchContent sub-build compiles
# for the right word size. FFmpeg (autotools, not CMake) gets the arch passed
# explicitly below, keyed off CMAKE_SYSTEM_PROCESSOR.
# -----------------------------------------------------------------------------

include(FetchContent)
include(ExternalProject)

# Arch split: the x86_64 toolchain sets CMAKE_SYSTEM_PROCESSOR=x86_64, the i686
# one sets i686. Everything arch-specific below keys off this one flag.
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(_noc_arch64    TRUE)
    set(_noc_multiarch "x86_64-linux-gnu")
    set(_noc_ff_arch   "x86_64")
else()
    set(_noc_arch64    FALSE)
    set(_noc_multiarch "i386-linux-gnu")
    set(_noc_ff_arch   "x86_32")
endif()

# Pin to the versions Ubuntu 24.04 shipped, so behavior matches the apt path
# this replaces (SDL 2.30.0, SDL_ttf 2.22.0, FFmpeg 6.1.1).
set(NOCTURNE_SDL2_TAG     "release-2.30.0" CACHE STRING "SDL2 git tag")
set(NOCTURNE_SDL2TTF_TAG  "release-2.22.0" CACHE STRING "SDL2_ttf git tag")
set(NOCTURNE_FFMPEG_TAG   "n6.1.1"         CACHE STRING "FFmpeg git tag")

# ----------------------------------------------------------------------------
# SDL2 (shared). Backends (X11/Wayland/GL/PulseAudio/ALSA) are dlopen'd at
# runtime, so no -dev packages are needed at build time.
# ----------------------------------------------------------------------------
set(SDL_SHARED ON  CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST   OFF CACHE BOOL "" FORCE)
set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
# Optional input/IME backends that need build-time -dev HEADERS (libudev.h,
# dbus/dbus.h, ibus). We never install those -dev packages (multilib hazard on
# the 32-bit lane), and these features — joystick hotplug, dbus screensaver/IME
# — are unused by this render/audio harness. Force them off so the from-source
# SDL2 build doesn't depend on those headers being present on the host.
set(SDL_LIBUDEV OFF CACHE BOOL "" FORCE)
set(SDL_DBUS    OFF CACHE BOOL "" FORCE)
set(SDL_IBUS    OFF CACHE BOOL "" FORCE)
set(SDL_HIDAPI  OFF CACHE BOOL "" FORCE)
FetchContent_Declare(sdl2
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG        ${NOCTURNE_SDL2_TAG}
    GIT_SHALLOW    TRUE)

# ----------------------------------------------------------------------------
# SDL2_ttf (shared, vendored freetype + harfbuzz — built static inside the
# subproject so we don't need libfreetype-dev either).
# ----------------------------------------------------------------------------
set(SDL2TTF_VENDORED ON  CACHE BOOL "" FORCE)
set(SDL2TTF_SAMPLES  OFF CACHE BOOL "" FORCE)
set(SDL2TTF_INSTALL  OFF CACHE BOOL "" FORCE)
FetchContent_Declare(sdl2_ttf
    GIT_REPOSITORY https://github.com/libsdl-org/SDL_ttf.git
    GIT_TAG        ${NOCTURNE_SDL2TTF_TAG}
    GIT_SHALLOW    TRUE)

message(STATUS "bundledlibs: fetching SDL2 ${NOCTURNE_SDL2_TAG} + SDL2_ttf ${NOCTURNE_SDL2TTF_TAG} for ${_noc_multiarch} (first configure clones + builds; cached after)")
FetchContent_MakeAvailable(sdl2 sdl2_ttf)

# ----------------------------------------------------------------------------
# Runtime dlopen compat shim.
# SDL2's X11 and ALSA/Pulse backends dlopen the UNVERSIONED soname (libX11.so,
# libpulse.so, ...). On the 32-bit lane the unversioned symlinks ship only in
# the -dev:i386 packages we deliberately don't install (multilib hazard), so
# the dlopen fails and SDL silently falls back to the headless "offscreen" video
# driver → no window. Recreate the unversioned symlinks in a build-local dir and
# put that dir on LD_LIBRARY_PATH (via the launchers) so the dlopens resolve
# with no system change. On the 64-bit lane the host desktop usually already has
# the unversioned symlinks, but recreating them from the arch's runtime libdir
# is harmless and keeps both lanes identical.
#
# The dir is named "i386-compat" on both lanes because the run/debug launcher
# templates check for that literal path; the name is cosmetic (it just holds
# symlinks), so it is left arch-neutral-by-name to avoid forking the launchers.
set(_sdl_compat_dir "${CMAKE_BINARY_DIR}/i386-compat")
file(MAKE_DIRECTORY "${_sdl_compat_dir}")
set(_runtime_libdir "/usr/lib/${_noc_multiarch}")
foreach(_soname X11 Xext Xcursor Xi Xfixes Xrandr Xss pulse asound)
    file(GLOB _versioned "${_runtime_libdir}/lib${_soname}.so.[0-9]*")
    if(_versioned)
        list(SORT _versioned)
        list(GET _versioned 0 _target)   # soname (e.g. libX11.so.6) sorts before libX11.so.6.4.0
        file(CREATE_LINK "${_target}" "${_sdl_compat_dir}/lib${_soname}.so" SYMBOLIC)
    else()
        message(STATUS "bundledlibs: no ${_noc_multiarch} runtime lib for lib${_soname}.so (backend will be unavailable)")
    endif()
endforeach()

# The shims include <SDL.h> / <SDL_ttf.h> (no SDL2/ prefix), and SDL2's headers
# live across the source tree plus a generated-config dir. Forward the targets'
# INTERFACE_INCLUDE_DIRECTORIES so the shim OBJECT library — which only gets
# include dirs, not linked libraries — resolves them. (The final exe links
# SDL2_LIBRARIES below, which carries the same usage requirements.)
set(SDL2_INCLUDE_DIRS    "$<TARGET_PROPERTY:SDL2::SDL2,INTERFACE_INCLUDE_DIRECTORIES>")
set(SDL2_CFLAGS_OTHER    "")
set(SDL2_LIBRARIES       SDL2::SDL2)
set(SDL2TTF_INCLUDE_DIRS "$<TARGET_PROPERTY:SDL2_ttf::SDL2_ttf,INTERFACE_INCLUDE_DIRECTORIES>")
set(SDL2TTF_CFLAGS_OTHER "")
set(SDL2TTF_LIBRARIES    SDL2_ttf::SDL2_ttf)

# ----------------------------------------------------------------------------
# FFmpeg (static, autotools). Every external codec/library dependency is
# disabled so the static libs need only libc/libm — nothing here pulls a -dev
# package. Built once via ExternalProject and cached; rebuilds only when
# NOCTURNE_FFMPEG_TAG changes. x86asm stays disabled on both lanes so no
# nasm/yasm is required (the codecs this harness decodes don't need it).
# ----------------------------------------------------------------------------
set(_ff_root    "${CMAKE_BINARY_DIR}/ffmpeg")
set(_ff_install "${_ff_root}/install")
set(_ff_libdir  "${_ff_install}/lib")

# Base configure args shared by both arches; --arch is keyed off the target.
set(_ff_configure
    <SOURCE_DIR>/configure
    --prefix=<INSTALL_DIR>
    --cc=clang --ld=clang
    --arch=${_noc_ff_arch} --target-os=linux
    --enable-static --disable-shared --enable-pic
    --disable-programs --disable-doc --disable-network --disable-debug
    --disable-x86asm
    --disable-zlib --disable-bzlib --disable-lzma --disable-iconv
    --disable-libxcb --disable-sdl2 --disable-autodetect)
# The 32-bit lane cross-compiles with -m32; the native 64-bit lane needs no
# arch flag (clang defaults to the host word size).
if(NOT _noc_arch64)
    list(APPEND _ff_configure --extra-cflags=-m32 --extra-ldflags=-m32)
endif()

ExternalProject_Add(ffmpeg_ext
    GIT_REPOSITORY https://github.com/FFmpeg/FFmpeg.git
    GIT_TAG        ${NOCTURNE_FFMPEG_TAG}
    GIT_SHALLOW    TRUE
    PREFIX         "${_ff_root}"
    INSTALL_DIR    "${_ff_install}"
    CONFIGURE_COMMAND ${_ff_configure}
    BUILD_COMMAND   make -j
    INSTALL_COMMAND make install
    BUILD_IN_SOURCE 1
    BUILD_BYPRODUCTS
        "${_ff_libdir}/libavformat.a"
        "${_ff_libdir}/libavcodec.a"
        "${_ff_libdir}/libswscale.a"
        "${_ff_libdir}/libswresample.a"
        "${_ff_libdir}/libavutil.a")

# ExternalProject builds at build time, so the install tree doesn't exist at
# configure. Pre-create the include dir so target_include_directories doesn't
# warn, and express the link set as plain paths + an explicit build-order dep.
file(MAKE_DIRECTORY "${_ff_install}/include")
set(FFMPEG_INCLUDE_DIRS "${_ff_install}/include")
set(FFMPEG_CFLAGS_OTHER "")
# Static link order: dependents before dependencies; avutil last. libavcodec
# pulls libswresample (e.g. the opus decoder's swr_* calls), so it must appear
# before avutil too. -lm for the math FFmpeg uses; pthread for its threading.
set(FFMPEG_LIBRARIES
    "${_ff_libdir}/libavformat.a"
    "${_ff_libdir}/libavcodec.a"
    "${_ff_libdir}/libswscale.a"
    "${_ff_libdir}/libswresample.a"
    "${_ff_libdir}/libavutil.a"
    m pthread)

# Re-exported to CMakeLists so it can add_dependencies() the consuming targets
# on ffmpeg_ext (headers must exist before the shim TU compiles).
set(NOCTURNE_FFMPEG_DEP ffmpeg_ext)
