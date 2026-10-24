# -----------------------------------------------------------------------------
# The shim library, nocturne_shims: everything under pseudocode/shims/, less
# what the platform file excludes, plus its own sources. Only with
# NOCTURNE_BUILD_EXE.
# -----------------------------------------------------------------------------

# RECURSE: the shims are grouped into subdirectories by responsibility.
# Legacy-platform emulation, deleted wholesale once the engine no longer
# speaks these APIs: win32/ (kernel32, user32, wingdi, mmsystem, winsock,
# MCI, and the shim_init that wires them), directx/ (DirectDraw,
# DirectSound), watcom/ (Watcom C++ runtime and CRT bridge). Ours, and
# permanent: core/, gl/, renderer/, net/, game/, debug/, config/. A flat
# glob would drop every one of them from the build silently — nothing
# references a shim source by name, so the first symptom would be a link
# error far from the cause. Only shim_config.h stays at the root, because
# the generated nocturne.h includes it by bare name.
file(GLOB_RECURSE _shim_sources CONFIGURE_DEPENDS
    "${NOCTURNE_SHIMS_DIR}/*.cpp"
    "${NOCTURNE_SHIMS_DIR}/*.c"
)
# The platform file drops what does not belong on it, which includes picking
# one socket backend: winsock_posix.c over BSD sockets, winsock_win32.c over
# Winsock. Both define the same eighteen nocturne_socket_* entry points that
# winsock.cpp calls, so compiling both is a duplicate-symbol link error
# rather than a preference.
foreach(_exclude IN LISTS NOCTURNE_PLATFORM_SHIM_EXCLUDE)
    list(FILTER _shim_sources EXCLUDE REGEX "${_exclude}")
endforeach()
list(APPEND _shim_sources ${NOCTURNE_PLATFORM_SOURCES})
set_source_files_properties(${_shim_sources} PROPERTIES LANGUAGE CXX)

include("${CMAKE_SOURCE_DIR}/cmake/window_icon.cmake")

add_library(nocturne_shims OBJECT ${_shim_sources})
# NOCTURNE_GEN_DIR unconditionally: shims/core/version.cpp reads the
# generated version header whether or not the icon was extracted.
target_include_directories(nocturne_shims PRIVATE
    "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}" "${NOCTURNE_GEN_DIR}"
    ${SDL2_INCLUDE_DIRS} ${SDL2TTF_INCLUDE_DIRS} ${FFMPEG_INCLUDE_DIRS}
    ${NOCTURNE_PLATFORM_INCLUDE_DIRS})
target_compile_definitions(nocturne_shims PRIVATE ${NOCTURNE_PLATFORM_DEFINITIONS})
add_dependencies(nocturne_shims nocturne_version)
# Tells shims/core/version.cpp the generated header is on its include path.
# Without it that file falls back to placeholder strings, which is what the
# export tool's standalone shim compile check gets — it has no build tree.
target_compile_definitions(nocturne_shims PRIVATE NOCTURNE_VERSION_GENERATED=1)
if(TARGET nocturne_icon)
    add_dependencies(nocturne_shims nocturne_icon)
    target_compile_definitions(nocturne_shims PRIVATE NOCTURNE_ICON_FROM_EXE=1)
endif()
target_compile_options(nocturne_shims PRIVATE
    ${NOCTURNE_COMMON_WARNINGS}
    ${NOCTURNE_SANITIZE_FLAGS}
    ${NOCTURNE_COVERAGE_FLAGS}
    ${SDL2_CFLAGS_OTHER} ${SDL2TTF_CFLAGS_OTHER} ${FFMPEG_CFLAGS_OTHER})
target_compile_features(nocturne_shims PRIVATE cxx_std_17)
if(NOCTURNE_GLES)
    target_compile_definitions(nocturne_shims PRIVATE NOCTURNE_GLES=1)
endif()
if(NOT NOCTURNE_GL_PRESENT)
    target_compile_definitions(nocturne_shims PRIVATE NOCTURNE_GL_PRESENT=0)
endif()

# clang-tidy over each shim as it compiles, with shims/.clang-tidy, whose
# findings are errors. Only this target: the decompiled modules are their
# own targets and never see it.
if(NOCTURNE_SHIMS_TIDY)
    find_program(NOCTURNE_CLANG_TIDY NAMES clang-tidy)
    if(NOT NOCTURNE_CLANG_TIDY)
        message(FATAL_ERROR "NOCTURNE_SHIMS_TIDY is ON but clang-tidy is not on PATH")
    endif()
    set_target_properties(nocturne_shims PROPERTIES
        C_CLANG_TIDY "${NOCTURNE_CLANG_TIDY}"
        CXX_CLANG_TIDY "${NOCTURNE_CLANG_TIDY}")
endif()

# FFmpeg is built by ExternalProject at build time; its headers must exist
# before the shim TU that includes them compiles.
if(NOCTURNE_FFMPEG_DEP)
    add_dependencies(nocturne_shims ${NOCTURNE_FFMPEG_DEP})
endif()
# SDL2's public headers (SDL.h, ...) are copied from the source tree into the
# build tree by SDL2's `sdl_headers_copy` custom target. The shim TUs that
# `#include <SDL.h>` must wait for that copy — otherwise the compile races
# the copy (the ordering is only incidentally correct on a full build, and
# building the shims target alone loses the race). Present on both the source
# -built lanes (bundledlibs.cmake); absent if SDL came from the system.
if(TARGET sdl_headers_copy)
    add_dependencies(nocturne_shims sdl_headers_copy)
endif()
