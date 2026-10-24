# -----------------------------------------------------------------------------
# Build options, and ccache. Included first, from the top-level CMakeLists.txt.
# -----------------------------------------------------------------------------

option(NOCTURNE_BUILD_CHECK "Build syntax-only verification target" ON)
option(NOCTURNE_BUILD_EXE   "Build full linked executable"          OFF)
option(NOCTURNE_ASAN
    "Enable AddressSanitizer + UBSan on the exe build"
    OFF)
# Clang source-based coverage over the shims and the tests. Only the shims are
# instrumented in the exe, so the decompiled modules compile exactly as in a
# normal build and share its ccache. The exe is never run; it is an object so a
# shim no test links still counts, as unrun (see "Coverage" in docs/testing.md).
option(NOCTURNE_COVERAGE "Instrument the exe and the tests for coverage" OFF)
set(NOCTURNE_COVERAGE_FLAGS "")
if(NOCTURNE_COVERAGE)
    # NOCTURNE_COVERAGE_BUILD lets code that leaves through _exit write the
    # profile first, as the normal exit path would.
    set(NOCTURNE_COVERAGE_FLAGS -fprofile-instr-generate -fcoverage-mapping
        -DNOCTURNE_COVERAGE_BUILD=1)
endif()
# clang-tidy over the shims as they compile, and only over them. The
# exe-linux-x86_64 presets turn it on.
option(NOCTURNE_SHIMS_TIDY "Run clang-tidy over the shims as they compile" OFF)
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

# OpenGL ES 3.0 instead of desktop 3.3 core, for the targets that have only ES
# (UWP and Xbox through ANGLE, most consoles and Arm boards). Same frames; see
# shims/gl/gl_api.h. A platform file can also set it in
# NOCTURNE_PLATFORM_DEFINITIONS. Shim targets only, as above.
option(NOCTURNE_GLES "Ask for OpenGL ES 3.0 instead of desktop GL 3.3 core" OFF)

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
        # Clang stamps each precompiled header with the time it was built, so a
        # rebuilt nocturne.h PCH never matches the last one and every file that
        # includes it misses the cache. Without the stamp the PCH is
        # reproducible. ccache must also be told to accept PCH use at all; see
        # "ccache" in docs/building.md.
        add_compile_options(
            "$<$<OR:$<COMPILE_LANG_AND_ID:C,Clang>,$<COMPILE_LANG_AND_ID:CXX,Clang>>:-Xclang=-fno-pch-timestamp>")
    else()
        message(STATUS "ccache: not found (install with apt/brew for faster rebuilds)")
    endif()
endif()
