# -----------------------------------------------------------------------------
# Platform. Everything that differs per target operating system comes from one
# file; see cmake/platforms/README.md for what it may set. A port kept outside
# this repository names its own file with NOCTURNE_PLATFORM_FILE.
# -----------------------------------------------------------------------------
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(_noc_default_platform windows)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(_noc_default_platform macos)
else()
    set(_noc_default_platform linux)
endif()
set(NOCTURNE_PLATFORM "${_noc_default_platform}" CACHE STRING
    "Platform file under cmake/platforms/ (linux, windows, macos)")
set(NOCTURNE_PLATFORM_FILE "${CMAKE_SOURCE_DIR}/cmake/platforms/${NOCTURNE_PLATFORM}.cmake"
    CACHE FILEPATH "Platform file to include; point it outside the tree for an out-of-tree port")
if(NOT EXISTS "${NOCTURNE_PLATFORM_FILE}")
    message(FATAL_ERROR "No platform file at ${NOCTURNE_PLATFORM_FILE}. "
                        "See cmake/platforms/README.md.")
endif()
set(NOCTURNE_PLATFORM_SHIM_EXCLUDE "")
set(NOCTURNE_PLATFORM_SOURCES "")
set(NOCTURNE_PLATFORM_INCLUDE_DIRS "")
set(NOCTURNE_PLATFORM_DEFINITIONS "")
set(NOCTURNE_PLATFORM_LIBRARIES "")
set(NOCTURNE_PLATFORM_LAUNCHERS OFF)
set(NOCTURNE_PLATFORM_SDL_MAIN OFF)
set(NOCTURNE_LAUNCHER_EXE "nocturne")
set(NOCTURNE_DEPENDENCIES_FILE "${CMAKE_SOURCE_DIR}/cmake/bundledlibs.cmake")
set(NOCTURNE_FFMPEG_EXTRA_ARGS "")
set(NOCTURNE_FFMPEG_CONFIGURE_WRAPPER "")
set(NOCTURNE_FFMPEG_SYSTEM_LIBRARIES "")
set(NOCTURNE_PACKAGE_FORMAT "tar.gz")
# Files a release archive ships beside the binary; see "The release manifest" in
# cmake/platforms/README.md. Generator expressions are resolved when it is written.
function(nocturne_package_runtime)
    set_property(GLOBAL APPEND PROPERTY NOCTURNE_PACKAGE_RUNTIME ${ARGN})
endfunction()
# An application bundle the archive ships whole, in place of the bare binary.
function(nocturne_package_bundle dir)
    set_property(GLOBAL PROPERTY NOCTURNE_PACKAGE_BUNDLE "${dir}")
endfunction()
include("${NOCTURNE_PLATFORM_FILE}")
message(STATUS "platform: ${NOCTURNE_PLATFORM_FILE}")

# SDL2 / SDL2_ttf / FFmpeg — consumed by the DirectDraw/DirectSound/kernel32
# and mci_video shims. Required only when linking the exe; the check presets
# skip the shims.
#
# Built from source via cmake/bundledlibs.cmake by default rather than taken from
# system pkg-config, so a build does not depend on whichever SDL the host happens
# to have. Any dependencies file sets the same SDL2_*/SDL2TTF_*/FFMPEG_*
# variables, so the rest of the build is unchanged.
set(NOCTURNE_FFMPEG_DEP "")
if(NOCTURNE_BUILD_EXE)
    include("${NOCTURNE_DEPENDENCIES_FILE}")
    if(COMMAND nocturne_platform_after_dependencies)
        nocturne_platform_after_dependencies()
    endif()
endif()
