# The entry points are static; the function pointers in the globals are the
# interface. builtin_dll is stubbed: the real registry would pull in the whole
# renderer tree, and what is under test is the loader, not which renderers exist.
#
# On Windows, GetComputerNameA reaches the game's own winsock shim (there is no
# POSIX gethostname to take instead), and that in turn needs Winsock itself.
set(_win32_platform_subjects)
set(_win32_platform_libraries)
if(WIN32)
    set(_win32_platform_subjects
        shims/win32/winsock.cpp shims/win32/winsock_win32.c shims/net/net_config.cpp)
    set(_win32_platform_libraries ws2_32)
endif()

nocturne_test_suite(shims_win32
    SUBJECTS
        shims/win32/kernel32.cpp
        shims/core/file_search.cpp
        shims/watcom/path.cpp
        src/globals/globals_610000.cpp
        ${_win32_platform_subjects}
    SUPPORT
        builtin_dll_support.cpp
    LIBRARIES ${_win32_platform_libraries}
)
