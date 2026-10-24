# The pure renderer: flags to pipeline state, vertex conversion, texture decode.
# No GL and no globals, so no context or window.
set(_trigl_pure
    shims/renderer/trigl_state.cpp
    shims/renderer/trigl_vertex.cpp
    shims/renderer/trigl_texture.cpp
    shims/renderer/trigl_batch.cpp
)

# With the built-in DLL registry, whose one module's exports a stand-in table
# provides: the real one is trigl_exports.cpp, which reaches GL. And the mirror
# pass's field of view, over the engine's viewport stack and projection scale:
# the globals files that define them reach most of the game, so a stand-in
# defines the three.
nocturne_test_suite(shims_renderer
    EXCLUDE "_sequence\\.cpp$"
    SUBJECTS
        ${_trigl_pure}
        shims/renderer/builtin_dll.cpp
        shims/renderer/mirror_projection.cpp
    SUPPORT
        trigl_exports_support.cpp
        viewport_globals_support.cpp
)

# Suites that test ORDER rather than answers. The renderer reaches GL through
# one table of function pointers, which gl_recorder.cpp defines and fills with
# recording stubs, so gl_api.cpp (and SDL) stay out of the link. A test opts in
# by being named test_*_sequence.cpp.
#
# The exports and golden tests include nocturne.h beside the GL table, and on
# Windows <SDL_opengl.h> brings <windows.h>, whose DWORD and friends collide
# with the project's own. The shims never include both, so only these two tests
# are left out there.
set(_renderer_gl_exclude)
if(WIN32)
    set(_renderer_gl_exclude EXCLUDE "test_trigl_(exports|golden)_sequence\\.cpp$")
endif()

nocturne_test_suite(shims_renderer_gl
    TESTS test_*_sequence.cpp
    ${_renderer_gl_exclude}
    SUBJECTS
        ${_trigl_pure}
        shims/gl/gl_program.cpp
        shims/renderer/trigl_gl.cpp
        shims/renderer/trigl_device.cpp
        shims/renderer/trigl_exports.cpp
    SUPPORT
        gl_recorder.cpp
        gl_present_support.cpp
        focus_trace_support.cpp
        golden_trace_support.cpp
    # Read from the source tree so a regenerated trace is a reviewable diff.
    DEFINITIONS
        NOCTURNE_TEST_DATA_DIR="${CMAKE_CURRENT_SOURCE_DIR}/golden"
)
