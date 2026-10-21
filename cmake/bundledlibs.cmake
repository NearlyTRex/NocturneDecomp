# -----------------------------------------------------------------------------
# bundledlibs.cmake — build SDL2, SDL2_ttf, and FFmpeg from source for the exe
# lane. What differs per operating system comes from the platform file
# (cmake/platforms/README.md): FFmpeg's target OS, extra configure arguments and
# system libraries, and the check that SDL found the backends it needs.
#
# Why source instead of apt: it makes every lane reproducible and identical, and
# avoids depending on whichever SDL the host happens to have (this host, for
# instance, ships only a source-built SDL3, so `pkg_check_modules(sdl2 REQUIRED)`
# there would fail configure).
#
# This module reproduces the variable contract that pkg_check_modules() set:
#   SDL2_INCLUDE_DIRS / SDL2_CFLAGS_OTHER / SDL2_LIBRARIES
#   SDL2TTF_INCLUDE_DIRS / SDL2TTF_CFLAGS_OTHER / SDL2TTF_LIBRARIES
#   FFMPEG_INCLUDE_DIRS / FFMPEG_CFLAGS_OTHER / FFMPEG_LIBRARIES
# so the rest of CMakeLists.txt consumes them unchanged.
#
# The CMake sub-builds (SDL2 / SDL2_ttf) inherit the target from the toolchain's
# CMAKE_C/CXX_FLAGS_INIT. FFmpeg (autotools, not CMake) has to be told, through
# cmake/ffmpeg.cmake and the platform file's NOCTURNE_FFMPEG_* variables.
# -----------------------------------------------------------------------------

include(FetchContent)

# Pin to the versions Ubuntu 24.04 shipped, so behavior matches the apt path
# this replaces (SDL 2.30.0, SDL_ttf 2.22.0). FFmpeg's pin is in ffmpeg.cmake.
set(NOCTURNE_SDL2_TAG     "release-2.30.0" CACHE STRING "SDL2 git tag")
set(NOCTURNE_SDL2TTF_TAG  "release-2.22.0" CACHE STRING "SDL2_ttf git tag")

# ----------------------------------------------------------------------------
# SDL2 (shared). Backends (X11/Wayland/PulseAudio/ALSA/PipeWire) are dlopen'd
# at runtime, so the libraries are not linked — but SDL compiles a backend only
# when its -dev HEADERS are found at configure time, and silently drops it
# otherwise. Without them the result has only the offscreen/dummy drivers: no
# window and no sound. The check after FetchContent_MakeAvailable enforces it.
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

message(STATUS "bundledlibs: fetching SDL2 ${NOCTURNE_SDL2_TAG} + SDL2_ttf ${NOCTURNE_SDL2TTF_TAG} for ${NOCTURNE_PLATFORM} (first configure clones + builds; cached after)")

# SDL_ttf's vendored freetype still opens with cmake_minimum_required(VERSION 3.0).
# That is a declaration about *freetype's* compatibility floor, not about the CMake
# we run: declaring 3.0 asks CMake to set every policy in that subtree to its
# 2014-era OLD behavior, and it is that emulation which is going away. Hence a
# deprecation warning on every configure from CMake 3.27 onward.
#
# We cannot fix it at the source — FetchContent re-clones the tree, so an in-place
# patch is undone by the next clean build. Upstream freetype master has since moved
# to `cmake_minimum_required(VERSION 3.12...3.31.0)`, but SDL_ttf still pins the old
# submodule commit: release-2.24.0 points at the same freetype (12c5e620) as the
# 2.22.0 we build, so bumping the tag would not help. Revisit when a later SDL_ttf
# updates external/freetype.
#
# Two separate things are needed, because they solve different problems:
#
#   CMAKE_WARN_DEPRECATED=OFF   silences the diagnostic. Cosmetic only.
#   CMAKE_POLICY_VERSION_MINIMUM  raises the floor CMake actually applies. This is
#                               load-bearing on CMake >= 4.0, where support for
#                               declared minimums below 3.5 was *removed* and the
#                               warning became a hard configure error — at which
#                               point suppressing warnings saves nothing.
#
# The variable arrived in CMake 3.31, so set it only where it exists; on older
# CMake the low floor is still honored and the suppression above is enough.
if(DEFINED CMAKE_WARN_DEPRECATED)
    set(_noc_warn_deprecated_saved "${CMAKE_WARN_DEPRECATED}")
    set(_noc_warn_deprecated_was_set TRUE)
else()
    set(_noc_warn_deprecated_was_set FALSE)
endif()
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)

set(_noc_policy_min_applied FALSE)
if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.31" AND NOT DEFINED CMAKE_POLICY_VERSION_MINIMUM)
    set(CMAKE_POLICY_VERSION_MINIMUM 3.5)
    set(_noc_policy_min_applied TRUE)
endif()

FetchContent_MakeAvailable(sdl2 sdl2_ttf)

if(COMMAND nocturne_platform_check_sdl)
    # SDL_config.h itself is written at generate time, after this runs; the
    # intermediate carries the same #defines and exists by the end of configure.
    set(_sdl_config_h "${sdl2_BINARY_DIR}/SDL_config.h.intermediate")
    if(NOT EXISTS "${_sdl_config_h}")
        message(FATAL_ERROR "bundledlibs: ${_sdl_config_h} not found")
    endif()
    nocturne_platform_check_sdl("${_sdl_config_h}" "${sdl2_BINARY_DIR}")
endif()

if(_noc_policy_min_applied)
    unset(CMAKE_POLICY_VERSION_MINIMUM)
endif()
if(_noc_warn_deprecated_was_set)
    set(CMAKE_WARN_DEPRECATED "${_noc_warn_deprecated_saved}" CACHE BOOL "" FORCE)
else()
    unset(CMAKE_WARN_DEPRECATED CACHE)
endif()

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
# FFmpeg, through the module the recreation shares. The platform file supplies
# the target OS and everything that names a compiler, cross prefix or flag.
# ----------------------------------------------------------------------------
include("${CMAKE_CURRENT_LIST_DIR}/ffmpeg.cmake")
nocturne_add_ffmpeg(ffmpeg_ext
    PREFIX "${CMAKE_BINARY_DIR}/ffmpeg"
    TARGET_OS ${NOCTURNE_FFMPEG_TARGET_OS}
    EXTRA_ARGS ${NOCTURNE_FFMPEG_EXTRA_ARGS}
    CONFIGURE_WRAPPER ${NOCTURNE_FFMPEG_CONFIGURE_WRAPPER}
    SYSTEM_LIBRARIES ${NOCTURNE_FFMPEG_SYSTEM_LIBRARIES})
set(FFMPEG_INCLUDE_DIRS "${ffmpeg_ext_INCLUDE_DIR}")
set(FFMPEG_CFLAGS_OTHER "")
set(FFMPEG_LIBRARIES ${ffmpeg_ext_LIBRARIES})

# Re-exported to CMakeLists so it can add_dependencies() the consuming targets
# on ffmpeg_ext (headers must exist before the shim TU compiles).
set(NOCTURNE_FFMPEG_DEP ffmpeg_ext)
