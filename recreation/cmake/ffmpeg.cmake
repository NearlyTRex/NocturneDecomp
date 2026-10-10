# FFmpeg decodes the shipped AVIs (Indeo 5, Microsoft Video 1, Cinepak, PCM) for the movie
# adapter. It configures with autotools, so it is an ExternalProject rather than FetchContent,
# built static with the same version and switches as the decomp lane's cmake/bundledlibs.cmake.
# The tree sits under _deps so it is cached with the other dependencies.

include(ExternalProject)

set(_ffmpeg_root "${FETCHCONTENT_BASE_DIR}/ffmpeg")
set(_ffmpeg_install "${_ffmpeg_root}/install")
set(_ffmpeg_libraries avformat avcodec swscale swresample avutil)

set(_ffmpeg_byproducts "")
foreach(_library IN LISTS _ffmpeg_libraries)
    list(APPEND _ffmpeg_byproducts "${_ffmpeg_install}/lib/lib${_library}.a")
endforeach()

ExternalProject_Add(ffmpeg_ext
    GIT_REPOSITORY https://github.com/FFmpeg/FFmpeg.git
    GIT_TAG        n6.1.1
    GIT_SHALLOW    TRUE
    PREFIX         "${_ffmpeg_root}"
    INSTALL_DIR    "${_ffmpeg_install}"
    CONFIGURE_COMMAND <SOURCE_DIR>/configure --prefix=<INSTALL_DIR>
        --cc=clang --ld=clang --arch=x86_64 --target-os=linux
        --enable-static --disable-shared --enable-pic
        --disable-programs --disable-doc --disable-network --disable-debug
        --disable-x86asm
        --disable-zlib --disable-bzlib --disable-lzma --disable-iconv
        --disable-libxcb --disable-sdl2 --disable-autodetect
    BUILD_COMMAND   make -j
    INSTALL_COMMAND make install
    BUILD_IN_SOURCE 1
    BUILD_BYPRODUCTS ${_ffmpeg_byproducts})

# The include directory must exist at configure time for the imported targets below.
file(MAKE_DIRECTORY "${_ffmpeg_install}/include")

add_library(nocturne_ffmpeg INTERFACE)
target_include_directories(nocturne_ffmpeg SYSTEM INTERFACE "${_ffmpeg_install}/include")
target_link_libraries(nocturne_ffmpeg INTERFACE ${_ffmpeg_byproducts} m pthread)
add_dependencies(nocturne_ffmpeg ffmpeg_ext)
