cmake_minimum_required(VERSION 3.20)

# -----------------------------------------------------------------------------
# NocturneDecomp build
#
# Two top-level targets:
#   nocturne_check   Per-file -fsyntax-only pass. Reproduces the 100%
#                    compilation milestone. Fast, no codegen, no link.
#   nocturne         Full codegen + link into the game executable.
#                    Entry point comes from src/main/main.cpp; the decompiled
#                    src/entry/entry.c and src/crt/* are NOT included (we
#                    link against a modern C/C++ runtime via the shims).
#
# Pick one or both:
#   cmake -B build -DNOCTURNE_BUILD_CHECK=ON -DNOCTURNE_BUILD_EXE=ON \
#         --toolchain cmake/toolchains/linux-i686.cmake
#   cmake --build build --target nocturne_check
#   cmake --build build --target nocturne
# -----------------------------------------------------------------------------

project(NocturneDecomp LANGUAGES C CXX)

option(NOCTURNE_BUILD_CHECK "Build syntax-only verification target" ON)
option(NOCTURNE_BUILD_EXE   "Build full linked executable"          OFF)
option(NOCTURNE_ASAN
    "Enable AddressSanitizer + UBSan on the exe build (requires 32-bit sanitizer runtime)"
    OFF)
option(NOCTURNE_USE_CCACHE
    "Route the compiler through ccache if available"
    ON)

# ccache — survives re-exports and branch switches. Auto-enabled when found.
if(NOCTURNE_USE_CCACHE)
    find_program(CCACHE_PROGRAM ccache)
    if(CCACHE_PROGRAM)
        message(STATUS "ccache: ${CCACHE_PROGRAM}")
        set(CMAKE_C_COMPILER_LAUNCHER   "${CCACHE_PROGRAM}")
        set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
    else()
        message(STATUS "ccache: not found (install with apt/brew for faster rebuilds)")
    endif()
endif()

set(NOCTURNE_PSEUDOCODE_DIR "${CMAKE_SOURCE_DIR}/annotations/nocedit.exe/pseudocode"
    CACHE PATH "Root of the exported pseudocode tree")
set(NOCTURNE_SKIP_LIST "${CMAKE_SOURCE_DIR}/cmake/skip_list.txt"
    CACHE FILEPATH "Skip list consumed by cmake/collect_sources.py")

set(NOCTURNE_SRC_ROOT     "${NOCTURNE_PSEUDOCODE_DIR}/src")
set(NOCTURNE_INCLUDE_DIR  "${NOCTURNE_PSEUDOCODE_DIR}/include")
set(NOCTURNE_SHIMS_DIR    "${NOCTURNE_PSEUDOCODE_DIR}/shims")
set(NOCTURNE_MAIN_DIR     "${NOCTURNE_PSEUDOCODE_DIR}/main")
set(NOCTURNE_CHECKS_DIR   "${NOCTURNE_PSEUDOCODE_DIR}/checks")

find_package(Python3 REQUIRED COMPONENTS Interpreter)

# SDL2 / SDL2_ttf / FFmpeg — consumed by the DirectDraw/DirectSound/kernel32
# and mci_video shims. Required only when linking the exe; the check-linux
# preset skips the shims.
#
# 32-bit (i686) lane: build these from source (cmake/i386libs.cmake). The
# Ubuntu `*-dev:i386` packages drag in a conflicting i386 -dev chain that apt
# resolves by removing the amd64 desktop, so we avoid them entirely. Source
# builds set the same SDL2_*/SDL2TTF_*/FFMPEG_* variables pkg-config did.
#
# Native 64-bit (x86_64) experiment lane: the amd64 -dev packages are not
# multi-arch-conflicting, so pkg-config off the system is fine there.
set(NOCTURNE_FFMPEG_DEP "")
if(NOCTURNE_BUILD_EXE)
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
        find_package(PkgConfig REQUIRED)
        pkg_check_modules(SDL2    REQUIRED sdl2)
        pkg_check_modules(SDL2TTF REQUIRED SDL2_ttf)
        pkg_check_modules(FFMPEG REQUIRED libavformat libavcodec libavutil libswscale)
    else()
        include("${CMAKE_SOURCE_DIR}/cmake/i386libs.cmake")
    endif()
endif()

# -----------------------------------------------------------------------------
# Per-module source lists (priority-resolved) generated at configure time.
# Re-running cmake regenerates the lists; adding a new .keep/.mmx/.byval
# variant requires a reconfigure.
# -----------------------------------------------------------------------------
set(NOCTURNE_GEN_DIR "${CMAKE_BINARY_DIR}/generated")
file(MAKE_DIRECTORY "${NOCTURNE_GEN_DIR}")

# Entry/ is always replaced by the hand-written pseudocode/main/ module.
# Crt/ is excluded — we link against a modern C/C++ runtime.
set(_collect_excludes --exclude-module entry --exclude-module crt)

message(STATUS "Collecting Nocturne sources (priority: .keep > .cpp/.c; .mmx/.byval/.chunked are reference-only, skipped)")
execute_process(
    COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_SOURCE_DIR}/cmake/collect_sources.py"
            --src-root   "${NOCTURNE_SRC_ROOT}"
            --module     "${NOCTURNE_MAIN_DIR}"
            --module     "${NOCTURNE_CHECKS_DIR}"
            --out-dir    "${NOCTURNE_GEN_DIR}"
            --skip-list  "${NOCTURNE_SKIP_LIST}"
            --modules-file "${NOCTURNE_GEN_DIR}/modules.txt"
            ${_collect_excludes}
    RESULT_VARIABLE _collect_rc
    OUTPUT_VARIABLE _collect_out
    ERROR_VARIABLE  _collect_err
)
if(NOT _collect_rc EQUAL 0)
    message(FATAL_ERROR "collect_sources.py failed:\n${_collect_out}${_collect_err}")
endif()
# Emit the per-module file counts as individual STATUS lines so CMake
# prefixes each with `-- ` instead of leaving the tail of a multi-line
# message unprefixed and offset.
string(STRIP "${_collect_out}" _collect_out_stripped)
string(REPLACE "\n" ";" _collect_lines "${_collect_out_stripped}")
foreach(_line IN LISTS _collect_lines)
    string(STRIP "${_line}" _line_stripped)
    if(_line_stripped)
        message(STATUS "${_line_stripped}")
    endif()
endforeach()

file(STRINGS "${NOCTURNE_GEN_DIR}/modules.txt" NOCTURNE_MODULES)

# Re-run cmake if the skip list changes.
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${NOCTURNE_SKIP_LIST}"
    "${CMAKE_SOURCE_DIR}/cmake/collect_sources.py"
)

# -----------------------------------------------------------------------------
# Warning set — mirrors compiler_config.py so the two pipelines agree on
# what counts as an error.
# -----------------------------------------------------------------------------
set(NOCTURNE_COMMON_WARNINGS
    -Wno-everything
    -Warray-bounds
    -Wformat
    -Wformat-overflow
    -Werror=format
    -Werror=format-overflow
    -Wno-format-security
    -Wno-format-extra-args
    -Wincompatible-pointer-types
    -Wint-conversion
    -Wreturn-type
    -Wtautological-compare
)

# Target arch flag. The decomp is natively 32-bit (-m32, matches the original
# binary's pointer width / struct layout), selected by the linux-i686 toolchain.
# The linux-x86_64 toolchain (CMAKE_SYSTEM_PROCESSOR x86_64) builds native 64-bit
# with no multilib — leave this empty there so no -m32 leaks onto the command
# line. Used by both the syntax-check command and the exe target options below.
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(NOCTURNE_ARCH_FLAGS "")
else()
    set(NOCTURNE_ARCH_FLAGS -m32)
endif()

set(NOCTURNE_INCLUDE_FLAGS
    -I "${NOCTURNE_INCLUDE_DIR}"
    -I "${NOCTURNE_SHIMS_DIR}"
)

# -----------------------------------------------------------------------------
# Target: nocturne_check  (per-file -fsyntax-only)
# Produces a stamp per successfully checked file so incremental re-runs only
# touch changed files. This is the drop-in for the existing verification path.
# -----------------------------------------------------------------------------
if(NOCTURNE_BUILD_CHECK)
    set(_stamp_dir "${CMAKE_BINARY_DIR}/check_stamps")
    file(MAKE_DIRECTORY "${_stamp_dir}")
    set(_all_stamps "")

    foreach(_module IN LISTS NOCTURNE_MODULES)
        file(STRINGS "${NOCTURNE_GEN_DIR}/sources_${_module}.txt" _sources)
        foreach(_src IN LISTS _sources)
            # Relative path from pseudocode/ so modules outside src/ (main,
            # checks) produce stable stamp names too.
            file(RELATIVE_PATH _rel "${NOCTURNE_PSEUDOCODE_DIR}" "${_src}")
            string(REPLACE "/" "_" _stamp_name "${_rel}")
            string(REPLACE "." "_" _stamp_name "${_stamp_name}")
            set(_stamp "${_stamp_dir}/${_stamp_name}.stamp")

            # Always use clang++ / -std=gnu++11 — matches compiler_config.py
            # (the decompiled .c files include C++ headers like <cctype>).
            add_custom_command(
                OUTPUT  "${_stamp}"
                COMMAND "${CMAKE_CXX_COMPILER}"
                        ${NOCTURNE_ARCH_FLAGS} -fsyntax-only -std=gnu++11
                        -x c++
                        ${NOCTURNE_COMMON_WARNINGS}
                        ${NOCTURNE_INCLUDE_FLAGS}
                        "${_src}"
                COMMAND "${CMAKE_COMMAND}" -E touch "${_stamp}"
                DEPENDS "${_src}"
                COMMENT "syntax ${_rel}"
                VERBATIM
            )
            list(APPEND _all_stamps "${_stamp}")
        endforeach()
    endforeach()

    add_custom_target(nocturne_check DEPENDS ${_all_stamps})
    message(STATUS "nocturne_check: ${_module} modules, "
                   "${CMAKE_BINARY_DIR}/check_stamps/")
endif()

# -----------------------------------------------------------------------------
# Target: nocturne  (full linked executable)
# One OBJECT library per module plus the shims and our main.cpp.
# -----------------------------------------------------------------------------
if(NOCTURNE_BUILD_EXE)
    # Sanitizer flags (applied to compile AND link for every exe-side target).
    # Empty list when disabled — keeps the option a single toggle.
    set(NOCTURNE_SANITIZE_FLAGS "")
    if(NOCTURNE_ASAN)
        list(APPEND NOCTURNE_SANITIZE_FLAGS
            -fsanitize=address,undefined
            -fno-sanitize=function,shift,signed-integer-overflow
            -fwrapv
            -fno-omit-frame-pointer
            -fno-sanitize-recover=all)
        # -fno-sanitize=function: vtable dispatch type mismatches (normal C++ covariance)
        # -fno-sanitize=shift: fixed-point math left-shifts negative values pervasively
        # -fno-sanitize=signed-integer-overflow + -fwrapv: Watcom-compiled arithmetic
        #   assumes x86 two's-complement wrap (e.g. INT_MIN - N), pervasive in the binary
        message(STATUS "AddressSanitizer + UBSan enabled (function-type, shift, and signed-overflow checks disabled)")
    endif()

    # PCH: every decompiled TU opens with #include "nocturne.h", which pulls in
    # the full type/global/prototype tree. Precompiling it once and REUSE_FROM
    # across every module OBJECT library cuts full-rebuild cost dramatically.
    set(_pch_source "")
    set(_module_libs "")
    foreach(_module IN LISTS NOCTURNE_MODULES)
        file(STRINGS "${NOCTURNE_GEN_DIR}/sources_${_module}.txt" _sources)
        if(_sources)
            set_source_files_properties(${_sources} PROPERTIES LANGUAGE CXX)
            add_library(nocturne_${_module} OBJECT ${_sources})
            target_include_directories(nocturne_${_module} PRIVATE
                "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}")
            target_compile_options(nocturne_${_module} PRIVATE
                ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_COMMON_WARNINGS}
                ${NOCTURNE_SANITIZE_FLAGS})
            target_compile_features(nocturne_${_module} PRIVATE cxx_std_17)

            # Performance: the per-pixel software span rasterizers
            # (render{MMXPerspective,PerspectiveCorrect}Scanline{16,32}) are the
            # renderer's hot inner loops. At the Debug build's -O0 they dominate
            # framerate — e.g. the flashlight volumetric halo blends ~19 near
            # screen-filling additive quads/frame here. Build just these files at
            # -O2 so the rest of the tree stays -O0/debuggable. Output is
            # bit-identical: -fwrapv (global) preserves signed-overflow wrap, and
            # -fno-strict-aliasing keeps the decompiler's pervasive pointer
            # type-punning (framebuffer/z reads, packed-channel casts) valid that
            # -O2 would otherwise miscompile. -g and ASan still apply.
            foreach(_src IN LISTS _sources)
                if(_src MATCHES "Scanline(16|32)_FUN_")
                    # SKIP_PRECOMPILE_HEADERS: the shared PCH is built at -O0, so a
                    # file at -O2 can't REUSE_FROM it (__OPTIMIZE__ mismatch). These
                    # few files just re-include nocturne.h directly.
                    set_source_files_properties("${_src}" PROPERTIES
                        COMPILE_OPTIONS "-O2;-fno-strict-aliasing"
                        SKIP_PRECOMPILE_HEADERS ON)
                endif()
            endforeach()

            if(_pch_source STREQUAL "")
                target_precompile_headers(nocturne_${_module} PRIVATE
                    "${NOCTURNE_INCLUDE_DIR}/nocturne.h")
                set(_pch_source nocturne_${_module})
            else()
                target_precompile_headers(nocturne_${_module}
                    REUSE_FROM ${_pch_source})
            endif()

            list(APPEND _module_libs nocturne_${_module})
        endif()
    endforeach()

    file(GLOB _shim_sources CONFIGURE_DEPENDS
        "${NOCTURNE_SHIMS_DIR}/*.cpp"
        "${NOCTURNE_SHIMS_DIR}/*.c"
    )
    set_source_files_properties(${_shim_sources} PROPERTIES LANGUAGE CXX)
    add_library(nocturne_shims OBJECT ${_shim_sources})
    target_include_directories(nocturne_shims PRIVATE
        "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}"
        ${SDL2_INCLUDE_DIRS} ${SDL2TTF_INCLUDE_DIRS} ${FFMPEG_INCLUDE_DIRS})
    target_compile_options(nocturne_shims PRIVATE
        ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_COMMON_WARNINGS}
        ${NOCTURNE_SANITIZE_FLAGS}
        ${SDL2_CFLAGS_OTHER} ${SDL2TTF_CFLAGS_OTHER} ${FFMPEG_CFLAGS_OTHER})
    target_compile_features(nocturne_shims PRIVATE cxx_std_17)

    # FFmpeg (i686 lane) is built by ExternalProject at build time; its headers
    # must exist before the shim TU that includes them compiles.
    if(NOCTURNE_FFMPEG_DEP)
        add_dependencies(nocturne_shims ${NOCTURNE_FFMPEG_DEP})
    endif()

    add_executable(nocturne)
    target_compile_features(nocturne PRIVATE cxx_std_17)
    target_include_directories(nocturne PRIVATE
        "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}"
        ${SDL2_INCLUDE_DIRS} ${SDL2TTF_INCLUDE_DIRS} ${FFMPEG_INCLUDE_DIRS})
    target_compile_options(nocturne PRIVATE
        ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_COMMON_WARNINGS}
        ${NOCTURNE_SANITIZE_FLAGS}
        ${SDL2_CFLAGS_OTHER} ${SDL2TTF_CFLAGS_OTHER} ${FFMPEG_CFLAGS_OTHER})
    # -no-pie: ffmpeg's 32-bit inline asm (e.g. lpc_init.o) emits absolute
    # R_386_32 relocations into .text that aren't PIC-safe even with ffmpeg's
    # --enable-pic. In a PIE those become runtime text relocations (DT_TEXTREL),
    # which ld warns about; linking non-PIE resolves them at link time instead.
    target_link_options(nocturne PRIVATE ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_SANITIZE_FLAGS} -no-pie)

    foreach(_lib IN LISTS _module_libs)
        target_link_libraries(nocturne PRIVATE ${_lib})
    endforeach()
    target_link_libraries(nocturne PRIVATE nocturne_shims
        ${SDL2_LIBRARIES} ${SDL2TTF_LIBRARIES} ${FFMPEG_LIBRARIES})

    # -------------------------------------------------------------------------
    # run.sh — launcher that sets sanitizer-friendly env defaults (symbolizer
    # path, UBSan stack traces, LSan off) and execs the built binary. Drops
    # next to the exe so `./run.sh` just works from any build preset.
    # -------------------------------------------------------------------------
    find_program(LLVM_SYMBOLIZER_PATH
        NAMES llvm-symbolizer llvm-symbolizer-18 llvm-symbolizer-17
              llvm-symbolizer-16 llvm-symbolizer-15 llvm-symbolizer-14)
    if(LLVM_SYMBOLIZER_PATH)
        message(STATUS "llvm-symbolizer: ${LLVM_SYMBOLIZER_PATH}")
    else()
        message(STATUS "llvm-symbolizer: not found — sanitizer reports will "
                       "show raw addresses. Install via apt/brew for readable "
                       "stack traces.")
        set(LLVM_SYMBOLIZER_PATH "")
    endif()

    # Best-effort preset name for the "not built" hint in the script.
    if(DEFINED ENV{CMAKE_PRESET_NAME})
        set(NOCTURNE_PRESET_NAME "$ENV{CMAKE_PRESET_NAME}")
    else()
        get_filename_component(NOCTURNE_PRESET_NAME "${CMAKE_BINARY_DIR}" NAME)
    endif()

    configure_file(
        "${CMAKE_SOURCE_DIR}/cmake/run_nocturne.sh.in"
        "${CMAKE_BINARY_DIR}/run.sh"
        @ONLY
        FILE_PERMISSIONS
            OWNER_READ OWNER_WRITE OWNER_EXECUTE
            GROUP_READ GROUP_EXECUTE
            WORLD_READ WORLD_EXECUTE
    )
    configure_file(
        "${CMAKE_SOURCE_DIR}/cmake/debug_nocturne.sh.in"
        "${CMAKE_BINARY_DIR}/debug.sh"
        @ONLY
        FILE_PERMISSIONS
            OWNER_READ OWNER_WRITE OWNER_EXECUTE
            GROUP_READ GROUP_EXECUTE
            WORLD_READ WORLD_EXECUTE
    )
endif()
