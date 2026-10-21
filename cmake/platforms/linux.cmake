# Linux: an ELF executable that finds its SDL shared objects through $ORIGIN,
# with SDL's X11/Wayland video and PulseAudio/ALSA/PipeWire audio backends.
# The contract every platform file follows is in cmake/platforms/README.md.

set(NOCTURNE_PLATFORM_SHIM_EXCLUDE "/win32/winsock_win32\\.c$")
set(NOCTURNE_FFMPEG_TARGET_OS "linux")
set(NOCTURNE_FFMPEG_SYSTEM_LIBRARIES m pthread)
set(NOCTURNE_PLATFORM_LAUNCHERS ON)

# The Debian multiarch directory of the target, which CMake works out from the
# compiler; distributions without one fall back to the plain triple.
if(CMAKE_LIBRARY_ARCHITECTURE)
    set(_noc_multiarch "${CMAKE_LIBRARY_ARCHITECTURE}")
else()
    set(_noc_multiarch "${CMAKE_SYSTEM_PROCESSOR}-linux-gnu")
endif()

# Building for another architecture than the host's: FFmpeg's configure cannot
# run what it compiles, and has to be handed the same clang and target.
if(NOT CMAKE_SYSTEM_PROCESSOR STREQUAL CMAKE_HOST_SYSTEM_PROCESSOR)
    set(_noc_cross_flags "--target=${_noc_multiarch}")
    if(CMAKE_SYSROOT)
        string(APPEND _noc_cross_flags " --sysroot=${CMAKE_SYSROOT}")
    endif()
    set(NOCTURNE_FFMPEG_EXTRA_ARGS --enable-cross-compile
        --cc=${CMAKE_C_COMPILER} --ld=${CMAKE_C_COMPILER}
        "--extra-cflags=${_noc_cross_flags}"
        "--extra-ldflags=${_noc_cross_flags} -fuse-ld=lld")
endif()

# An SDL with no display or audio backend still configures, builds and runs:
# it opens an invisible offscreen window and plays into the dummy device. Fail
# here instead of shipping that. SDL compiles a backend only when its -dev
# headers are present at configure time, and silently drops it otherwise.
function(nocturne_platform_check_sdl sdl_config_h sdl_binary_dir)
    file(STRINGS "${sdl_config_h}" _sdl_drivers
         REGEX "^#define SDL_(VIDEO|AUDIO)_DRIVER_(X11|WAYLAND|PULSEAUDIO|ALSA|PIPEWIRE) 1")
    if(NOT _sdl_drivers MATCHES "VIDEO_DRIVER_(X11|WAYLAND)")
        message(FATAL_ERROR "bundledlibs: SDL2 was configured without an X11 or Wayland "
            "video driver, so the game would open no window. Install the headers "
            "(libx11-dev libxext-dev libxcursor-dev libxi-dev libxfixes-dev "
            "libxrandr-dev libxss-dev libwayland-dev libxkbcommon-dev "
            "wayland-protocols libegl-dev libdecor-0-dev) and delete ${sdl_binary_dir}.")
    endif()
    if(NOT _sdl_drivers MATCHES "AUDIO_DRIVER_(PULSEAUDIO|ALSA|PIPEWIRE)")
        message(FATAL_ERROR "bundledlibs: SDL2 was configured without a PulseAudio, "
            "ALSA or PipeWire audio driver, so the game would play no sound. Install "
            "the headers (libpulse-dev libasound2-dev) and delete ${sdl_binary_dir}.")
    endif()
endfunction()

# Runtime dlopen compat shim. SDL2's X11 and ALSA/Pulse backends dlopen the
# UNVERSIONED soname (libX11.so, libpulse.so, ...), which ships in the -dev
# packages rather than the runtime ones. Where they are missing the dlopen fails
# and SDL silently falls back to the headless "offscreen" video driver: no
# window. Recreate the unversioned symlinks in a build-local dir and put that
# dir on LD_LIBRARY_PATH (via the launchers) so the dlopens resolve with no
# system change. A desktop host usually has them already, in which case this
# just reproduces what is there.
function(nocturne_platform_after_dependencies)
    set(_sdl_compat_dir "${CMAKE_BINARY_DIR}/sdl-compat")
    file(MAKE_DIRECTORY "${_sdl_compat_dir}")
    set(_runtime_libdir "/usr/lib/${_noc_multiarch}")
    foreach(_soname X11 Xext Xcursor Xi Xfixes Xrandr Xss pulse asound)
        file(GLOB _versioned "${_runtime_libdir}/lib${_soname}.so.[0-9]*")
        if(_versioned)
            list(SORT _versioned)
            list(GET _versioned 0 _target)   # soname (e.g. libX11.so.6) sorts before libX11.so.6.4.0
            file(CREATE_LINK "${_target}" "${_sdl_compat_dir}/lib${_soname}.so" SYMBOLIC)
        else()
            message(STATUS "bundledlibs: no ${_noc_multiarch} runtime lib for "
                           "lib${_soname}.so (backend will be unavailable)")
        endif()
    endforeach()
endfunction()

function(nocturne_platform_finalize target)
    # SDL2 and SDL2_ttf are built here as shared objects, and the link records
    # their absolute paths inside the build tree. That is right for running from
    # build/, and useless once the binary is copied anywhere else -- a release
    # archive would carry a runpath naming a directory on the machine that built
    # it. $ORIGIN is appended rather than replacing it, so the build tree keeps
    # working and an archive that ships the .so beside the binary finds them there.
    target_link_options(${target} PRIVATE "-Wl,-rpath,$ORIGIN")
    # Shipped under the soname the binary records, not the versioned file name.
    nocturne_package_runtime("$<TARGET_SONAME_FILE:SDL2::SDL2>"
                             "$<TARGET_SONAME_FILE:SDL2_ttf::SDL2_ttf>")
endfunction()
