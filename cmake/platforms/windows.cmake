# 64-bit Windows: the two mingw lanes (libstdc++ and gcc's runtime DLLs) and the
# clang-cl lane (Microsoft runtime, linked statically). SDL's video and audio
# backends are GDI/Direct3D and WASAPI/DirectSound, system DLLs resolved by name,
# so there is no backend check and no soname workaround.
# The contract every platform file follows is in cmake/platforms/README.md.

set(NOCTURNE_PLATFORM_SHIM_EXCLUDE "/win32/winsock_posix\\.c$")
# ws2_32 backs winsock_win32.c. The rest are what the kernel32 shim reaches for
# once its POSIX arms give way to the Win32 ones: winmm for the multimedia timer,
# version for the module queries.
set(NOCTURNE_PLATFORM_LIBRARIES ws2_32 winmm version)
# No -lm: the Windows runtimes have the math functions in the CRT, and there is
# no separate libm to ask for. Threading is FFmpeg's own w32threads over
# kernel32, so nothing is named for it either. bcrypt is avutil's: it is where
# BCryptGenRandom lives, which is how av_get_random_seed seeds itself here.
set(NOCTURNE_FFMPEG_SYSTEM_LIBRARIES bcrypt)
# The launchers are bash scripts that exec a binary named `nocturne`.
set(NOCTURNE_PLATFORM_LAUNCHERS OFF)
set(NOCTURNE_PACKAGE_FORMAT "zip")

if(MSVC)
    # The STL that ships with current MSVC refuses any clang older than its own
    # bundled one; the distro clang-cl of the Linux cross lane is one major
    # behind. Microsoft documents this macro as the opt-out.
    if(CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19)
        add_compile_definitions(_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH)
    endif()

    set(NOCTURNE_FFMPEG_TARGET_OS "win64")
    # FFmpeg's msvc toolchain speaks cl.exe's flag syntax, and -MT matches the
    # static C runtime the rest of the exe links. The compiler and linker are
    # the ones CMake already found, and the target and sysroot flags the
    # toolchain file gave CMake are handed on.
    #
    # Built natively, the tools go by name, with their directory put on
    # configure's PATH by the wrapper below: configure expands them unquoted,
    # and the install is under "C:/Program Files". Flags are spelled with a
    # dash, which clang-cl and lld-link both take, because MSYS rewrites an
    # argument starting with a slash into a path (/DWIN32 becomes
    # C:/msys64/DWIN32) on its way to them.
    #
    # configure recognises lib.exe by its banner and drives it with /OUT:; it
    # does not recognise llvm-lib, and would call it with ar's "rc". llvm-ar
    # writes the COFF archives lld-link reads.
    set(_ff_cc "${CMAKE_C_COMPILER}")
    set(_ff_cxx "${CMAKE_CXX_COMPILER}")
    set(_ff_ld "${CMAKE_LINKER}")
    if(NOT CMAKE_CROSSCOMPILING)
        get_filename_component(NOCTURNE_FFMPEG_TOOL_DIR "${CMAKE_C_COMPILER}" DIRECTORY)
        get_filename_component(_ff_cc "${_ff_cc}" NAME)
        get_filename_component(_ff_cxx "${_ff_cxx}" NAME)
        get_filename_component(_ff_ld "${_ff_ld}" NAME)
    endif()
    separate_arguments(_ff_cflags NATIVE_COMMAND "${CMAKE_C_FLAGS}")
    separate_arguments(_ff_ldflags NATIVE_COMMAND "${CMAKE_EXE_LINKER_FLAGS}")
    set(NOCTURNE_FFMPEG_EXTRA_ARGS
        --toolchain=msvc
        --cc=${_ff_cc} --cxx=${_ff_cxx} --ld=${_ff_ld}
        --ar=llvm-ar --nm=llvm-nm
        --extra-cflags=-MT)
    foreach(_flag IN LISTS _ff_cflags)
        string(REGEX REPLACE "^/" "-" _flag "${_flag}")
        list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS --extra-cflags=${_flag})
    endforeach()
    foreach(_flag IN LISTS _ff_ldflags)
        string(REGEX REPLACE "^/" "-" _flag "${_flag}")
        list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS --extra-ldflags=${_flag})
    endforeach()
    if(CMAKE_CROSSCOMPILING)
        list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS --enable-cross-compile)
    endif()
else()
    set(NOCTURNE_FFMPEG_TARGET_OS "mingw32")
    set(NOCTURNE_FFMPEG_EXTRA_ARGS --cc=clang --ld=clang)
    if(CMAKE_CROSSCOMPILING)
        # configure builds and runs small probe programs to decide what the
        # target supports. Cross-compiling, it cannot run them, so
        # --enable-cross-compile switches it to compile-only probes. The target
        # triple has to reach clang through --extra-cflags as well: --cc names
        # the driver but not what it should aim at, and a bare `clang` would
        # happily probe the host.
        #
        # ar/nm/ranlib come from binutils-mingw-w64, pulled in alongside the
        # compiler. They are named explicitly because the host's own would
        # produce archives with the wrong object format.
        list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS
            --enable-cross-compile
            --cross-prefix=${NOCTURNE_WIN_TRIPLE}-
            --ar=${NOCTURNE_WIN_TRIPLE}-ar
            --nm=${NOCTURNE_WIN_TRIPLE}-nm
            --ranlib=${NOCTURNE_WIN_TRIPLE}-ranlib
            --extra-cflags=--target=${NOCTURNE_WIN_TRIPLE}
            --extra-ldflags=--target=${NOCTURNE_WIN_TRIPLE})
    endif()
endif()

# Building natively, configure cannot run off its shebang. CMake substitutes
# <SOURCE_DIR> and <INSTALL_DIR> as native Windows paths (C:/...), and configure
# is a POSIX script that reads a --prefix of that shape as a relative path with a
# stray colon. The wrapper runs them through cygpath first.
if(NOT CMAKE_CROSSCOMPILING)
    set(NOCTURNE_FFMPEG_CONFIGURE_WRAPPER
        ${CMAKE_COMMAND} -E env "NOCTURNE_TOOL_DIR=${NOCTURNE_FFMPEG_TOOL_DIR}"
        sh "${CMAKE_SOURCE_DIR}/cmake/ffmpeg_configure_msys2.sh")
endif()

# The gcc C++ runtime DLLs, on the two mingw lanes. Cross-compiling they come
# out of the Debian sysroot, which no Windows machine has, so they have to travel
# with whatever was built. Building natively under MSYS2 they are already
# installed and on PATH inside that shell — but only inside it, so they are
# staged there too and an output directory means the same thing on both lanes: a
# folder that runs. The compiler driver names each one, because a DLL from a
# different gcc runtime than the one linked lacks exports the exe imports and
# Windows refuses to start it. The clang-cl lane links the Microsoft runtime
# statically and has none. Sets <out> to the absolute paths found.
function(nocturne_windows_runtime_dlls out)
    set(_found "")
    set(_rt_dlls "")
    if(MINGW)
        set(_rt_dlls libstdc++-6.dll libwinpthread-1.dll libgcc_s_seh-1.dll)
    endif()
    separate_arguments(_rt_driver_flags NATIVE_COMMAND "${CMAKE_CXX_FLAGS}")
    foreach(_rt_dll IN LISTS _rt_dlls)
        execute_process(
            COMMAND "${CMAKE_CXX_COMPILER}" ${_rt_driver_flags}
                    "-print-file-name=${_rt_dll}"
            OUTPUT_VARIABLE _rt_src
            OUTPUT_STRIP_TRAILING_WHITESPACE)
        # The driver echoes the bare name back when it finds nothing. MSYS2
        # keeps the DLLs beside clang in /ucrt64/bin, off its library path.
        if(NOT IS_ABSOLUTE "${_rt_src}" AND NOT CMAKE_CROSSCOMPILING)
            get_filename_component(_rt_bindir "${CMAKE_CXX_COMPILER}" DIRECTORY)
            set(_rt_src "${_rt_bindir}/${_rt_dll}")
        endif()
        if(IS_ABSOLUTE "${_rt_src}" AND EXISTS "${_rt_src}")
            list(APPEND _found "${_rt_src}")
        else()
            message(STATUS "windows lane: ${_rt_dll} not found — copy it "
                           "beside the exe by hand if the build does not "
                           "start on a machine without the toolchain")
        endif()
    endforeach()
    set(${out} "${_found}" PARENT_SCOPE)
endfunction()

function(nocturne_platform_finalize target)
    # SDL2 and SDL2_ttf are built shared, and a PE resolves its imports from the
    # directory the exe sits in. Put them there so the build output is something
    # that runs when copied to a Windows machine, rather than something that
    # needs a DLL hunt first. FFmpeg is static, so it needs nothing staged.
    add_custom_command(TARGET ${target} POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "$<TARGET_FILE:SDL2::SDL2>" "$<TARGET_FILE:SDL2_ttf::SDL2_ttf>"
                "$<TARGET_FILE_DIR:${target}>"
        COMMENT "Staging SDL DLLs beside ${target}.exe"
        VERBATIM)
    nocturne_package_runtime("$<TARGET_FILE:SDL2::SDL2>" "$<TARGET_FILE:SDL2_ttf::SDL2_ttf>")

    nocturne_windows_runtime_dlls(_rt_dlls)
    foreach(_rt_src IN LISTS _rt_dlls)
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                    "${_rt_src}" "$<TARGET_FILE_DIR:${target}>"
            VERBATIM)
        nocturne_package_runtime("${_rt_src}")
    endforeach()

    # Runs after the staging above: POST_BUILD commands run in order.
    add_custom_command(TARGET ${target} POST_BUILD
        COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/scripts/Python/check_pe_imports.py"
                "$<TARGET_FILE:${target}>"
        COMMENT "Checking ${target}.exe's imports against the staged DLLs"
        VERBATIM)
endfunction()
