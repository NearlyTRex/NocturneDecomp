# The entry points are static; the function pointers in the globals are the
# interface. builtin_dll is stubbed: the real registry would pull in the whole
# renderer tree, and what is under test is the loader, not which renderers exist.
#
# Winsock has a backend per host: POSIX sockets, or Winsock itself on Windows,
# where GetComputerNameA also reaches it (there is no POSIX gethostname to take
# instead). Its bind reads the network settings, so those come too.
if(WIN32)
    set(_win32_socket_backend shims/win32/winsock_win32.c)
    set(_win32_platform_libraries ws2_32)
else()
    set(_win32_socket_backend shims/win32/winsock_posix.c)
    set(_win32_platform_libraries)
endif()

set(_win32_sdl_tests test_mci_video.cpp test_mmsystem.cpp test_user32.cpp test_wingdi.cpp)

nocturne_test_suite(shims_win32
    EXCLUDE "/(test_mci_video|test_mmsystem|test_user32|test_wingdi)\\.cpp$"
    SUBJECTS
        shims/win32/advapi32.cpp
        shims/win32/kernel32.cpp
        shims/win32/window_message.cpp
        shims/win32/winsock.cpp
        ${_win32_socket_backend}
        shims/net/net_config.cpp
        shims/core/file_search.cpp
        shims/core/host_memory.cpp
        shims/watcom/path.cpp
        src/globals/globals_610000.cpp
    SUPPORT
        builtin_dll_support.cpp
    LIBRARIES ${_win32_platform_libraries}
)

# The shims SDL stands behind, on its dummy drivers: no window or sound device
# is opened. The font is one SDL_ttf's own sources carry, so the text cases do
# not depend on what the machine has installed; on Windows it travels in the
# test bundle beside the tests.
set(_test_font "${sdl2_ttf_SOURCE_DIR}/external/harfbuzz/perf/fonts/Roboto-Regular.ttf")
set_property(GLOBAL APPEND PROPERTY NOCTURNE_TEST_BUNDLE_FILES "${_test_font}")
if(WIN32)
    get_filename_component(_test_font_name "${_test_font}" NAME)
    set(_test_font_define "NOCTURNE_TEST_FONT=\"${_test_font_name}\"")
else()
    set(_test_font_define "NOCTURNE_TEST_FONT=\"${_test_font}\"")
endif()

# FFmpeg is a set of static libraries built by an external project, not a
# target, so this carries its headers, libraries and the build that makes them.
add_library(nocturne_test_ffmpeg INTERFACE)
target_include_directories(nocturne_test_ffmpeg INTERFACE ${FFMPEG_INCLUDE_DIRS})
target_link_libraries(nocturne_test_ffmpeg INTERFACE ${FFMPEG_LIBRARIES})
if(NOCTURNE_FFMPEG_DEP)
    add_dependencies(nocturne_test_ffmpeg ${NOCTURNE_FFMPEG_DEP})
endif()

nocturne_test_suite(shims_win32_sdl
    TESTS ${_win32_sdl_tests}
    SUBJECTS
        shims/win32/mci_video.cpp
        shims/win32/mmsystem.cpp
        shims/win32/user32.cpp
        shims/win32/window_message.cpp
        shims/win32/wingdi.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
        src/globals/globals_610000.cpp
    SUPPORT
        movie_writer.cpp
        sdl_support.cpp
    LIBRARIES ${SDL2_LIBRARIES} ${SDL2TTF_LIBRARIES} nocturne_test_ffmpeg
    DEFINITIONS ${_test_font_define}
)
