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

nocturne_test_suite(shims_win32
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
