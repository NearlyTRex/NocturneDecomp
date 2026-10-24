# 64-bit Windows with clang-cl against the Microsoft C runtime and Windows SDK.
#
# The two mingw lanes link libstdc++ and msvcrt/UCRT through gcc's runtime. This
# one links the Microsoft STL and UCRT, which is what a Visual Studio build, a
# UWP or Xbox build, and most Windows tooling expect. clang-cl rather than cl.exe
# keeps the clang warning set in cmake/compile_flags.cmake meaningful on this lane too.
#
# Two hosts:
#   Windows  Run from a Visual Studio developer prompt (vcvars), with the
#            "C++ Clang tools for Windows" component installed. Nothing else to
#            configure: the environment carries the include and library paths.
#   Linux    Cross-compile with clang-cl and lld-link against a sysroot that
#            xwin splats out of Microsoft's own packages. Downloading them means
#            accepting Microsoft's license, so that step is the developer's:
#              xwin --accept-license splat --output ~/.xwin
#            NOCTURNE_MSVC_SYSROOT points at that directory.
#
# The C runtime is linked statically (/MT), so the exe needs no Visual C++
# redistributable beside it. CMP0091 is defaulted to NEW so the SDL subprojects,
# whose cmake_minimum_required predates it, pick up the same runtime choice
# instead of mixing /MD objects into the link.

set(CMAKE_SYSTEM_PROCESSOR x86_64)
# The release runtime in every configuration: xwin splats no debug CRT unless
# asked, and nothing here wants the debug heap's checks.
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")
set(CMAKE_POLICY_DEFAULT_CMP0091 NEW)

if(CMAKE_HOST_WIN32)
    if(NOT DEFINED CMAKE_C_COMPILER)
        set(CMAKE_C_COMPILER   clang-cl)
    endif()
    if(NOT DEFINED CMAKE_CXX_COMPILER)
        set(CMAKE_CXX_COMPILER clang-cl)
    endif()
    if(NOT DEFINED ENV{VCToolsInstallDir})
        message(FATAL_ERROR
            "VCToolsInstallDir is unset -- this is not a Visual Studio developer "
            "prompt. Open \"x64 Native Tools Command Prompt\" (or run vcvars64.bat) "
            "and configure from there.")
    endif()
else()
    # Cross from Linux. Setting CMAKE_SYSTEM_NAME is what puts CMake into
    # cross-compiling mode; on a Windows host it is left alone, as in
    # windows-msys2.cmake.
    set(CMAKE_SYSTEM_NAME Windows)

    set(NOCTURNE_MSVC_SYSROOT "$ENV{HOME}/.xwin"
        CACHE PATH "xwin splat output: crt/ and sdk/ from Microsoft's packages")
    if(NOT EXISTS "${NOCTURNE_MSVC_SYSROOT}/crt/include/vcruntime.h")
        message(FATAL_ERROR
            "No MSVC sysroot at ${NOCTURNE_MSVC_SYSROOT}.\n"
            "The clang-cl lane needs Microsoft's CRT and Windows SDK. Fetch them with\n"
            "xwin (https://github.com/Jake-Shadle/xwin), which accepts Microsoft's\n"
            "license on your behalf:\n"
            "    xwin --accept-license splat --output ~/.xwin\n"
            "or pass -DNOCTURNE_MSVC_SYSROOT=<dir>.")
    endif()

    foreach(_tool C_COMPILER:clang-cl CXX_COMPILER:clang-cl LINKER:lld-link
                  AR:llvm-lib RC_COMPILER:llvm-rc MT:llvm-mt)
        string(REPLACE ":" ";" _tool "${_tool}")
        list(GET _tool 0 _var)
        list(GET _tool 1 _name)
        if(NOT DEFINED CMAKE_${_var})
            find_program(_found NAMES ${_name} ${_name}-18 REQUIRED NO_CACHE)
            set(CMAKE_${_var} "${_found}")
            unset(_found)
        endif()
    endforeach()

    set(_sysroot "${NOCTURNE_MSVC_SYSROOT}")
    set(_msvc_includes
        "/imsvc${_sysroot}/crt/include"
        "/imsvc${_sysroot}/sdk/include/ucrt"
        "/imsvc${_sysroot}/sdk/include/um"
        "/imsvc${_sysroot}/sdk/include/shared")
    list(JOIN _msvc_includes " " _msvc_includes)
    set(_msvc_libpaths
        "/libpath:${_sysroot}/crt/lib/x86_64"
        "/libpath:${_sysroot}/sdk/lib/um/x86_64"
        "/libpath:${_sysroot}/sdk/lib/ucrt/x86_64")
    list(JOIN _msvc_libpaths " " _msvc_libpaths)

    set(CMAKE_C_FLAGS_INIT   "--target=x86_64-pc-windows-msvc ${_msvc_includes}")
    set(CMAKE_CXX_FLAGS_INIT "--target=x86_64-pc-windows-msvc ${_msvc_includes}")
    # llvm-rc takes plain /I; the SDL and FreeType version resources include
    # <winresrc.h> and <windows.h>.
    set(CMAKE_RC_FLAGS_INIT
        "/I ${_sysroot}/crt/include /I ${_sysroot}/sdk/include/ucrt /I ${_sysroot}/sdk/include/um /I ${_sysroot}/sdk/include/shared")
    set(CMAKE_EXE_LINKER_FLAGS_INIT    "${_msvc_libpaths}")
    set(CMAKE_SHARED_LINKER_FLAGS_INIT "${_msvc_libpaths}")
    set(CMAKE_MODULE_LINKER_FLAGS_INIT "${_msvc_libpaths}")

    set(CMAKE_FIND_ROOT_PATH "${_sysroot}")
    set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
    set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
    set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
endif()
