# The entry points are static; the function pointers in the globals are the
# interface. builtin_dll is stubbed: the real registry would pull in the whole
# renderer tree, and what is under test is the loader, not which renderers exist.
nocturne_test_suite(shims_win32
    SUBJECTS
        shims/win32/kernel32.cpp
        shims/core/file_search.cpp
        src/globals/globals_610000.cpp
    SUPPORT
        builtin_dll_support.cpp
)
