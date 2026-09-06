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
# Who owns the window's pixels. ON (default) creates a GL context and presents
# the 2D back buffer as a textured quad, which is what lets a decompiled 3D
# renderer DLL composite into the same framebuffer. OFF selects the legacy
# SDL_Renderer path with no GL context at all (see NOCTURNE_GL_PRESENT in
# shims/shim_config.h) — useful as a control when deciding whether a rendering
# artifact comes from the GL layer or from the engine itself.
#
# Defined only on the shim targets, so toggling it rebuilds ~100 files rather
# than the whole decompiled tree (shim_config.h reaches every TU via nocturne.h).
option(NOCTURNE_GL_PRESENT "Present through OpenGL (OFF = legacy SDL_Renderer)" ON)

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

# -----------------------------------------------------------------------------
# tridx7.dll — the decompiled DirectX 7 renderer, compiled into the same binary.
#
# It keeps its OWN include tree on purpose. Both programs export a
# system/ddraw.h declaring the same type names with different signatures
# (DDSURFACEDESC vs DDSURFACEDESC2, and 9 other methods), and they never
# exchange DirectDraw objects — the DLL boundary is APIDLLinit(HWND, bridge)
# plus plain data. So the two DirectDraw implementations stay independent
# rather than being unified in the generator.
# -----------------------------------------------------------------------------
set(NOCTURNE_TRIDX7_DIR "${CMAKE_SOURCE_DIR}/annotations/tridx7.dll/pseudocode"
    CACHE PATH "Root of the exported tridx7.dll pseudocode tree")
set(NOCTURNE_TRIDX7_SRC_ROOT    "${NOCTURNE_TRIDX7_DIR}/src")
set(NOCTURNE_TRIDX7_INCLUDE_DIR "${NOCTURNE_TRIDX7_DIR}/include")
set(NOCTURNE_TRIDX7_SHIMS_DIR   "${NOCTURNE_TRIDX7_DIR}/shims")
set(NOCTURNE_MAIN_DIR     "${NOCTURNE_PSEUDOCODE_DIR}/main")
set(NOCTURNE_CHECKS_DIR   "${NOCTURNE_PSEUDOCODE_DIR}/checks")

find_package(Python3 REQUIRED COMPONENTS Interpreter)

# SDL2 / SDL2_ttf / FFmpeg — consumed by the DirectDraw/DirectSound/kernel32
# and mci_video shims. Required only when linking the exe; the check-linux
# preset skips the shims.
#
# Both lanes (32-bit i686 and native 64-bit x86_64) build these from source via
# cmake/bundledlibs.cmake. The Ubuntu `*-dev:i386` packages drag in a
# conflicting i386 -dev chain that apt resolves by removing the amd64 desktop,
# so the 32-bit lane can't use them; we build the 64-bit lane the same way so
# both lanes are reproducible and don't depend on whatever SDL the host has.
# The source build sets the same SDL2_*/SDL2TTF_*/FFMPEG_* variables pkg-config
# did, so the rest of this file is unchanged.
set(NOCTURNE_FFMPEG_DEP "")
if(NOCTURNE_BUILD_EXE)
    include("${CMAKE_SOURCE_DIR}/cmake/bundledlibs.cmake")
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

# tridx7.dll source lists — a second collector pass over its own tree.
# Scope is src/dll + src/globals only: src/crt is signature-only (the DLL's CRT
# bodies are never compiled, the shims supply those functions), and src/dll
# references no crt_* symbol at all, so excluding it leaves nothing undefined.
set(NOCTURNE_TRIDX7_GEN_DIR "${CMAKE_BINARY_DIR}/generated_tridx7")
file(MAKE_DIRECTORY "${NOCTURNE_TRIDX7_GEN_DIR}")

execute_process(
    COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_SOURCE_DIR}/cmake/collect_sources.py"
            --src-root     "${NOCTURNE_TRIDX7_SRC_ROOT}"
            --out-dir      "${NOCTURNE_TRIDX7_GEN_DIR}"
            --modules-file "${NOCTURNE_TRIDX7_GEN_DIR}/modules.txt"
            --exclude-module crt
    RESULT_VARIABLE _tridx7_rc
    OUTPUT_VARIABLE _tridx7_out
    ERROR_VARIABLE  _tridx7_err
)
if(NOT _tridx7_rc EQUAL 0)
    message(FATAL_ERROR "collect_sources.py (tridx7) failed:\n${_tridx7_out}${_tridx7_err}")
endif()
string(STRIP "${_tridx7_out}" _tridx7_out_stripped)
string(REPLACE "\n" ";" _tridx7_lines "${_tridx7_out_stripped}")
foreach(_line IN LISTS _tridx7_lines)
    string(STRIP "${_line}" _line_stripped)
    if(_line_stripped)
        message(STATUS "tridx7 ${_line_stripped}")
    endif()
endforeach()

file(STRINGS "${NOCTURNE_TRIDX7_GEN_DIR}/modules.txt" NOCTURNE_TRIDX7_MODULES)

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
    # Ghidra splitting one reused register into two locals and leaving one
    # uninitialized (fix_compilation.md §13) — an error because the garbage it
    # feeds downstream surfaces far from its cause. Deliberately not the broader
    # -Wuninitialized, which also fires on in_ST0/in_ST1 x87 phantoms (a missing
    # CUSTOM_STORAGE signature in Ghidra, not a code defect).
    -Werror=sometimes-uninitialized
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
            -fno-sanitize=function,shift,signed-integer-overflow,alignment
            -fwrapv
            -fno-omit-frame-pointer
            -fno-sanitize-recover=all)
        # -fno-sanitize=function: vtable dispatch type mismatches (normal C++ covariance)
        # -fno-sanitize=shift: fixed-point math left-shifts negative values pervasively
        # -fno-sanitize=signed-integer-overflow + -fwrapv: Watcom-compiled arithmetic
        #   assumes x86 two's-complement wrap (e.g. INT_MIN - N), pervasive in the binary
        # -fno-sanitize=alignment: structs are #pragma pack(1) to preserve the 32-bit
        #   Watcom layout, so 8-byte pointer fields land at 4-mod-8 offsets at 64-bit;
        #   misaligned scalar/pointer access is benign on x86-64 and pervasive/intentional
        message(STATUS "AddressSanitizer + UBSan enabled (function-type, shift, signed-overflow, and alignment checks disabled)")
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

    # -------------------------------------------------------------------------
    # tridx7 modules — the decompiled DX7 renderer plus its GL-backed DirectDraw.
    #
    # Compiled against tridx7's include tree ONLY. nocedit's include dir is
    # deliberately absent: both trees define IDirectDrawSurface & friends with
    # different method signatures, and a TU that saw both would be an ODR
    # violation waiting to misbehave.
    #
    # Include order matters. tridx7's shims dir comes first so its nocturne.h
    # picks up tridx7's own shim_config.h stub rather than nocedit's full one;
    # nocedit's shims dir follows only so gl_ddraw.cpp can reach gl_api.h /
    # gl_present.h, which are program-agnostic and pull in no DirectX headers.
    # -------------------------------------------------------------------------
    set(_tridx7_libs "")
    foreach(_module IN LISTS NOCTURNE_TRIDX7_MODULES)
        file(STRINGS "${NOCTURNE_TRIDX7_GEN_DIR}/sources_${_module}.txt" _sources)
        if(_sources)
            set_source_files_properties(${_sources} PROPERTIES LANGUAGE CXX)
            add_library(nocturne_tridx7_${_module} OBJECT ${_sources})
            target_include_directories(nocturne_tridx7_${_module} PRIVATE
                "${NOCTURNE_TRIDX7_SHIMS_DIR}" "${NOCTURNE_TRIDX7_INCLUDE_DIR}")
            target_compile_options(nocturne_tridx7_${_module} PRIVATE
                ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_COMMON_WARNINGS}
                ${NOCTURNE_SANITIZE_FLAGS})
            target_compile_features(nocturne_tridx7_${_module} PRIVATE cxx_std_11)

            # The renderer's two ddraw.dll imports carry the same C++ mangled
            # name as the exe's own SDL-backed DirectDrawCreate, because both
            # take a `struct IDirectDraw *` at global scope. Renaming them for
            # this module only — the declaration in tridx7's ddraw.h and the
            # definition in gl_ddraw.cpp are both compiled here, so they move
            # together and the exe's shim keeps the unprefixed name.
            target_compile_definitions(nocturne_tridx7_${_module} PRIVATE
                DirectDrawCreate=tridx7_DirectDrawCreate
                DirectDrawEnumerateExA=tridx7_DirectDrawEnumerateExA)

            list(APPEND _tridx7_libs nocturne_tridx7_${_module})
        endif()
    endforeach()

    # The GL-backed DirectDraw/Direct3D implementation the renderer talks to.
    # Same include order and the same import renaming as the sources above.
    file(GLOB _tridx7_shim_sources CONFIGURE_DEPENDS
        "${NOCTURNE_TRIDX7_SHIMS_DIR}/*.cpp"
    )
    if(_tridx7_shim_sources)
        set_source_files_properties(${_tridx7_shim_sources} PROPERTIES LANGUAGE CXX)
        add_library(nocturne_tridx7_shims OBJECT ${_tridx7_shim_sources})
        target_include_directories(nocturne_tridx7_shims PRIVATE
            "${NOCTURNE_TRIDX7_SHIMS_DIR}" "${NOCTURNE_TRIDX7_INCLUDE_DIR}"
            "${NOCTURNE_SHIMS_DIR}"
            ${SDL2_INCLUDE_DIRS})
        target_compile_options(nocturne_tridx7_shims PRIVATE
            ${NOCTURNE_ARCH_FLAGS} ${NOCTURNE_COMMON_WARNINGS}
            ${NOCTURNE_SANITIZE_FLAGS} ${SDL2_CFLAGS_OTHER})
        target_compile_features(nocturne_tridx7_shims PRIVATE cxx_std_17)
        target_compile_definitions(nocturne_tridx7_shims PRIVATE
            DirectDrawCreate=tridx7_DirectDrawCreate
            DirectDrawEnumerateExA=tridx7_DirectDrawEnumerateExA)
        if(NOT NOCTURNE_GL_PRESENT)
            target_compile_definitions(nocturne_tridx7_shims PRIVATE NOCTURNE_GL_PRESENT=0)
        endif()
        if(TARGET sdl_headers_copy)
            add_dependencies(nocturne_tridx7_shims sdl_headers_copy)
        endif()
        list(APPEND _tridx7_libs nocturne_tridx7_shims)
    endif()

    list(LENGTH _tridx7_libs _tridx7_lib_count)
    message(STATUS "tridx7: ${_tridx7_lib_count} object libraries")

    # RECURSE: the shims are grouped into subdirectories by responsibility.
    # Legacy-platform emulation, deleted wholesale once the engine no longer
    # speaks these APIs: win32/ (kernel32, user32, wingdi, mmsystem, winsock,
    # MCI, and the shim_init that wires them), directx/ (DirectDraw,
    # DirectSound), watcom/ (Watcom C++ runtime and CRT bridge). Ours, and
    # permanent: core/, gl/, renderer/, net/, game/, debug/, config/. A flat
    # glob would drop every one of them from the build silently — nothing
    # references a shim source by name, so the first symptom would be a link
    # error far from the cause. Only shim_config.h stays at the root, because
    # the generated nocturne.h includes it by bare name.
    file(GLOB_RECURSE _shim_sources CONFIGURE_DEPENDS
        "${NOCTURNE_SHIMS_DIR}/*.cpp"
        "${NOCTURNE_SHIMS_DIR}/*.c"
    )
    # shims/tests/ is built by the nocturne_tests target instead. Every test
    # file defines a main(), so leaving them in here would collide with the
    # game's at link time.
    list(FILTER _shim_sources EXCLUDE REGEX "/shims/tests/")
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
    if(NOT NOCTURNE_GL_PRESENT)
        target_compile_definitions(nocturne_shims PRIVATE NOCTURNE_GL_PRESENT=0)
    endif()

    # FFmpeg is built by ExternalProject at build time; its headers must exist
    # before the shim TU that includes them compiles.
    if(NOCTURNE_FFMPEG_DEP)
        add_dependencies(nocturne_shims ${NOCTURNE_FFMPEG_DEP})
    endif()
    # SDL2's public headers (SDL.h, ...) are copied from the source tree into the
    # build tree by SDL2's `sdl_headers_copy` custom target. The shim TUs that
    # `#include <SDL.h>` must wait for that copy — otherwise the compile races
    # the copy (the ordering is only incidentally correct on a full build, and
    # building the shims target alone loses the race). Present on both the source
    # -built lanes (bundledlibs.cmake); absent if SDL came from the system.
    if(TARGET sdl_headers_copy)
        add_dependencies(nocturne_shims sdl_headers_copy)
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
    foreach(_lib IN LISTS _tridx7_libs)
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

# =============================================================================
# Target: nocturne_tests  (ctest)
# =============================================================================
#
# Unit tests for the parts of the renderer that decide something: how a draw's
# render flags become pipeline state, how a vertex is converted, how a texture
# is decoded. Those files take no GL and read no global, so a test needs neither
# a context nor a window and runs anywhere.
#
# Built for the host rather than with NOCTURNE_ARCH_FLAGS. What is under test is
# arithmetic on explicit widths, identical on both lanes, and building it -m32
# would put the tests behind the multilib toolchain for no coverage.
# Test sources, minus the support files a test links rather than runs. Anything
# named gl_recorder/*_support is infrastructure and defines no main().
file(GLOB_RECURSE _test_sources CONFIGURE_DEPENDS "${NOCTURNE_SHIMS_DIR}/tests/*.cpp")
list(FILTER _test_sources EXCLUDE REGEX "/(gl_recorder|.*_support)\\.cpp$")
if(_test_sources)
    enable_testing()
    # The pure renderer sources under test. Named rather than globbed: a file
    # that reaches GL or a global does not belong here, and having to add it by
    # hand is the point at which that gets noticed.
    set(_test_subjects
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_state.cpp"
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_vertex.cpp"
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_texture.cpp"
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_batch.cpp"
        # Reaches the filesystem but nothing else — no GL, no globals, no engine
        # state. Its answer is a function of the path and what is on disk, which
        # is what makes it testable against a directory a test builds itself.
        "${NOCTURNE_SHIMS_DIR}/watcom/path.cpp"
    )
    # The GL-facing sources, for the suites that test ORDER rather than answers.
    # These reach the driver, so they are deliberately outside the list above —
    # they are testable only because the renderer reaches GL through one table of
    # function pointers, which gl_recorder.cpp fills with recording stubs. It
    # also defines that table, so gl_api.cpp (and with it SDL) stays out of the
    # link. A suite opts in by being named test_*_sequence.
    set(_test_subjects_gl
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_gl.cpp"
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_device.cpp"
        "${NOCTURNE_SHIMS_DIR}/renderer/trigl_exports.cpp"
        "${NOCTURNE_SHIMS_DIR}/tests/renderer/gl_recorder.cpp"
        "${NOCTURNE_SHIMS_DIR}/tests/renderer/gl_present_support.cpp"
        "${NOCTURNE_SHIMS_DIR}/tests/renderer/golden_trace_support.cpp"
    )
    foreach(_test_src IN LISTS _test_sources)
        get_filename_component(_test_name "${_test_src}" NAME_WE)
        set(_subjects ${_test_subjects})
        if(_test_name MATCHES "_sequence$")
            list(APPEND _subjects ${_test_subjects_gl})
        endif()
        add_executable(${_test_name} EXCLUDE_FROM_ALL "${_test_src}" ${_subjects})
        target_include_directories(${_test_name} PRIVATE
            "${NOCTURNE_SHIMS_DIR}" "${NOCTURNE_SHIMS_DIR}/tests"
            "${NOCTURNE_INCLUDE_DIR}" ${SDL2_INCLUDE_DIRS})
        target_compile_features(${_test_name} PRIVATE cxx_std_17)
        target_compile_options(${_test_name} PRIVATE ${NOCTURNE_COMMON_WARNINGS})
        # Where a test's recorded expectations live. A golden file is only useful
        # if it is read from the source tree and can be regenerated in place, so
        # a changed one shows up as a reviewable diff rather than as a rebuilt
        # copy nobody sees.
        target_compile_definitions(${_test_name} PRIVATE
            NOCTURNE_TEST_DATA_DIR="${NOCTURNE_SHIMS_DIR}/tests/renderer/golden")
        add_test(NAME ${_test_name} COMMAND ${_test_name})
        list(APPEND _test_targets ${_test_name})
    endforeach()
    # `ctest` only runs what is already built, and the tests are EXCLUDE_FROM_ALL
    # so an ordinary build does not pay for them. This target builds them all.
    add_custom_target(nocturne_tests DEPENDS ${_test_targets})
    list(LENGTH _test_targets _test_count)
    message(STATUS "nocturne_tests: ${_test_count} test binaries")
endif()
