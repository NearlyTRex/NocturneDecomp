# FFmpeg, static, with every external library and autodetected feature off, for
# both builds that decode the shipped AVIs: the decomp's mci_video shim and the
# recreation's movie adapter. One version and one switch list, so the two decode
# the same way. FFmpeg configures with autotools, so it is an ExternalProject,
# and nothing here needs a -dev package or nasm.
#
#   nocturne_add_ffmpeg(<target>
#       PREFIX <dir>               where it is fetched, built and installed
#       TARGET_OS <os>             configure's --target-os
#       [ARCH <arch>]              configure's --arch; default the target CMake
#                                  builds for (CMAKE_OSX_ARCHITECTURES on a Mac)
#       [EXTRA_ARGS <arg>...]      compiler, cross prefix and flags for the target
#       [CONFIGURE_WRAPPER <cmd>...]  runs configure; given the source and install
#                                  directories first, then the arguments
#       [SYSTEM_LIBRARIES <lib>...])  what the static libraries need at link time
#
# Defines the ExternalProject <target>, and in the caller's scope
# <target>_INCLUDE_DIR and <target>_LIBRARIES (the static libraries in link
# order, then the system ones).

include_guard(GLOBAL)
include(ExternalProject)

set(NOCTURNE_FFMPEG_TAG "n6.1.1" CACHE STRING "FFmpeg git tag")

function(nocturne_add_ffmpeg target)
    cmake_parse_arguments(PARSE_ARGV 1 ARG "" "PREFIX;TARGET_OS;ARCH"
                          "EXTRA_ARGS;CONFIGURE_WRAPPER;SYSTEM_LIBRARIES")
    set(_install "${ARG_PREFIX}/install")

    if(NOT ARG_ARCH)
        if(CMAKE_OSX_ARCHITECTURES)
            list(GET CMAKE_OSX_ARCHITECTURES 0 ARG_ARCH)
        else()
            set(ARG_ARCH "${CMAKE_SYSTEM_PROCESSOR}")
        endif()
    endif()
    # Windows and Apple spell them their own way.
    string(TOLOWER "${ARG_ARCH}" ARG_ARCH)
    if(ARG_ARCH MATCHES "^(amd64|x64)$")
        set(ARG_ARCH x86_64)
    elseif(ARG_ARCH STREQUAL "arm64")
        set(ARG_ARCH aarch64)
    endif()

    # Static link order: dependents before dependencies, avutil last. libavcodec
    # pulls libswresample (the opus decoder's swr_* calls), so it comes first too.
    set(_libraries "")
    foreach(_name avformat avcodec swscale swresample avutil)
        list(APPEND _libraries "${_install}/lib/lib${_name}.a")
    endforeach()

    set(_args
        --arch=${ARG_ARCH} --target-os=${ARG_TARGET_OS}
        --enable-static --disable-shared --enable-pic
        --disable-programs --disable-doc --disable-network --disable-debug
        --disable-x86asm
        --disable-zlib --disable-bzlib --disable-lzma --disable-iconv
        --disable-libxcb --disable-sdl2 --disable-autodetect
        ${ARG_EXTRA_ARGS})
    if(ARG_CONFIGURE_WRAPPER)
        set(_configure ${ARG_CONFIGURE_WRAPPER} <SOURCE_DIR> <INSTALL_DIR> ${_args})
    else()
        set(_configure <SOURCE_DIR>/configure --prefix=<INSTALL_DIR> ${_args})
    endif()

    include(ProcessorCount)
    ProcessorCount(_jobs)
    if(_jobs EQUAL 0)
        set(_jobs 1)
    endif()

    ExternalProject_Add(${target}
        GIT_REPOSITORY https://github.com/FFmpeg/FFmpeg.git
        GIT_TAG        ${NOCTURNE_FFMPEG_TAG}
        GIT_SHALLOW    TRUE
        # The tag is pinned, so there is nothing to update; an update step would
        # otherwise run on every build and take configure, build and install with it.
        UPDATE_DISCONNECTED TRUE
        PREFIX         "${ARG_PREFIX}"
        INSTALL_DIR    "${_install}"
        CONFIGURE_COMMAND ${_configure}
        BUILD_COMMAND   make -j${_jobs}
        INSTALL_COMMAND make install
        BUILD_IN_SOURCE 1
        BUILD_BYPRODUCTS ${_libraries})

    # The install tree exists only after the build; the include directory has to
    # exist at configure for the targets that name it.
    file(MAKE_DIRECTORY "${_install}/include")
    set(${target}_INCLUDE_DIR "${_install}/include" PARENT_SCOPE)
    set(${target}_LIBRARIES ${_libraries} ${ARG_SYSTEM_LIBRARIES} PARENT_SCOPE)
endfunction()
