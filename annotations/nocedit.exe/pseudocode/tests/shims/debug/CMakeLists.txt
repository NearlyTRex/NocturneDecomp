# The debug shims that read the game rather than drive it: the game's globals,
# the engine's console and the HUD's text are stood in for by debug_support.cpp,
# and the frame-rate overlay's clock is renamed in this directory's build of it
# for the stand to answer.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/debug/perf_overlay.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "SDL_GetPerformanceCounter=debug_support_SDL_GetPerformanceCounter;SDL_GetPerformanceFrequency=debug_support_SDL_GetPerformanceFrequency")

nocturne_test_suite(shims_debug
    EXCLUDE "/test_dump\\.cpp$"
    SUBJECTS
        shims/debug/focus_trace.cpp
        shims/debug/net_trace.cpp
        shims/debug/perf_overlay.cpp
        shims/debug/sound_report.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        debug_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)

# The dump tools, a suite of their own since debug_support.cpp stands in for
# one of them. The game state and the decompiled calls are dump_support.cpp's,
# and the two SDL read-back calls are renamed in this directory's build of
# dump.cpp for it to answer.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/debug/dump.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "SDL_GetRendererOutputSize=dump_support_SDL_GetRendererOutputSize;SDL_RenderReadPixels=dump_support_SDL_RenderReadPixels")

nocturne_test_suite(shims_debug_dump
    TESTS test_dump.cpp
    SUBJECTS
        shims/debug/dump.cpp
    SUPPORT
        dump_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)
