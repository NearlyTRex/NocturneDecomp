# macOS: a Mach-O executable that finds its SDL dylibs beside it through
# @executable_path. SDL's Cocoa video and CoreAudio backends are system
# frameworks, always present, so there is no backend check.
# The contract every platform file follows is in cmake/platforms/README.md.

set(NOCTURNE_PLATFORM_SHIM_EXCLUDE "/win32/winsock_win32\\.c$")
set(NOCTURNE_FFMPEG_TARGET_OS "darwin")
set(NOCTURNE_FFMPEG_SYSTEM_LIBRARIES m pthread)
set(NOCTURNE_PLATFORM_LAUNCHERS ON)

# FFmpeg is told the architecture CMake builds for, which on an Apple silicon
# host building x86_64 is a cross build: configure cannot run what it probes.
set(NOCTURNE_FFMPEG_EXTRA_ARGS --cc=clang --ld=clang)
foreach(_arch IN LISTS CMAKE_OSX_ARCHITECTURES)
    list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS
        "--extra-cflags=-arch ${_arch}" "--extra-ldflags=-arch ${_arch}")
endforeach()
if(CMAKE_OSX_ARCHITECTURES AND NOT CMAKE_OSX_ARCHITECTURES STREQUAL CMAKE_HOST_SYSTEM_PROCESSOR)
    list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS --enable-cross-compile)
endif()

function(nocturne_platform_finalize target)
    # The dylibs are copied beside the binary in a release archive, as the .so
    # files are on Linux; the build-tree paths the link records stay first.
    target_link_options(${target} PRIVATE "-Wl,-rpath,@executable_path")
    nocturne_package_runtime("$<TARGET_SONAME_FILE:SDL2::SDL2>"
                             "$<TARGET_SONAME_FILE:SDL2_ttf::SDL2_ttf>")
endfunction()
