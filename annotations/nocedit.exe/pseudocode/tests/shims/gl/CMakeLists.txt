# The GL helpers beside the renderer, run against the renderer suite's recorder
# rather than a driver.
nocturne_test_suite(shims_gl
    SUBJECTS
        shims/gl/gl_program.cpp
    SUPPORT
        ../renderer/gl_recorder.cpp
)
