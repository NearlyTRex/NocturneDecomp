# The pure renderer: flags to pipeline state, vertex conversion, texture decode.
# No GL and no globals, so no context or window.
set(_trigl_pure
    shims/renderer/trigl_state.cpp
    shims/renderer/trigl_vertex.cpp
    shims/renderer/trigl_texture.cpp
    shims/renderer/trigl_batch.cpp
)

nocturne_test_suite(shims_renderer
    EXCLUDE "_sequence\\.cpp$"
    SUBJECTS ${_trigl_pure}
)

# Suites that test ORDER rather than answers. The renderer reaches GL through
# one table of function pointers, which gl_recorder.cpp defines and fills with
# recording stubs, so gl_api.cpp (and SDL) stay out of the link. A test opts in
# by being named test_*_sequence.cpp.
nocturne_test_suite(shims_renderer_gl
    TESTS test_*_sequence.cpp
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
