# FFmpeg decodes the shipped AVIs (Indeo 5, Microsoft Video 1, Cinepak, PCM) for the movie
# adapter, built by the module the decomp lane shares, so both decode with one version and one
# set of switches. The tree sits under _deps so it is cached with the other dependencies.

include("${CMAKE_CURRENT_LIST_DIR}/../../cmake/ffmpeg.cmake")

nocturne_add_ffmpeg(ffmpeg_ext
    PREFIX "${FETCHCONTENT_BASE_DIR}/ffmpeg"
    TARGET_OS linux
    EXTRA_ARGS --cc=clang --ld=clang
    SYSTEM_LIBRARIES m pthread)

add_library(nocturne_ffmpeg INTERFACE)
target_include_directories(nocturne_ffmpeg SYSTEM INTERFACE "${ffmpeg_ext_INCLUDE_DIR}")
target_link_libraries(nocturne_ffmpeg INTERFACE ${ffmpeg_ext_LIBRARIES})
add_dependencies(nocturne_ffmpeg ffmpeg_ext)
