# The GL helpers beside the renderer, run against the renderer suite's recorder
# rather than a driver; and the window mode and resolution list the presenter
# works to, on SDL's dummy video driver, their ini settings through a stand-in
# for the engine's CIni.
nocturne_test_suite(shims_gl
    EXCLUDE "/test_gl_(api|api_missing|present|pixels_gles)\\.cpp$"
    SUBJECTS
        shims/gl/gl_program.cpp
        shims/gl/gl_blit.cpp
        shims/gl/resolution.cpp
        shims/gl/window_mode.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        ../renderer/gl_recorder.cpp
        ini_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)

# The pixel helpers as an ES build has them, where a read comes back as RGBA
# bytes for gl_pixels.h to convert.
nocturne_test_suite(shims_gl_gles
    TESTS test_gl_pixels_gles.cpp
    SUPPORT ../renderer/gl_recorder.cpp
    DEFINITIONS NOCTURNE_GLES=1
    LIBRARIES ${SDL2_LIBRARIES}
)

# The loader itself, which fills the table the recorder stands in for above, so
# a suite of its own. Its one call to the driver is renamed in this directory's
# build of it, for proc_address_support.cpp to answer: no context, and no SDL.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/gl/gl_api.cpp"
    PROPERTIES COMPILE_DEFINITIONS "SDL_GL_GetProcAddress=proc_address_support_get")

nocturne_test_suite(shims_gl_api
    TESTS test_gl_api.cpp test_gl_api_missing.cpp
    SUBJECTS
        shims/gl/gl_api.cpp
    SUPPORT
        proc_address_support.cpp
)

# The presenter, its GL calls to the recorder and its SDL ones renamed in this
# directory's build of it, for sdl_gl_support.cpp to answer: no window, context
# or driver.
set(_presenter_sdl
    SDL_GL_SetAttribute SDL_GL_CreateContext SDL_GL_MakeCurrent SDL_GL_DeleteContext
    SDL_GL_SetSwapInterval SDL_GL_GetDrawableSize SDL_GL_SwapWindow SDL_GetWindowSize
    SDL_GetError SDL_GetPerformanceCounter)
list(TRANSFORM _presenter_sdl REPLACE "^(.+)$" "\\1=sdl_gl_support_\\1")
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/gl/gl_present.cpp"
    PROPERTIES COMPILE_DEFINITIONS "${_presenter_sdl}")

nocturne_test_suite(shims_gl_present
    TESTS test_gl_present.cpp
    SUBJECTS
        shims/gl/gl_present.cpp
        shims/gl/gl_blit.cpp
        shims/gl/gl_program.cpp
    SUPPORT
        ../renderer/gl_recorder.cpp
        sdl_gl_support.cpp
)
