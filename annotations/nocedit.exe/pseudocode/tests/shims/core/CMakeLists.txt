# A platform data directory, read when it is asked for from a variable the test
# sets, so a build with one and a build without are both reachable from here;
# and its message box, which message_support.cpp answers.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/path_roots.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "NOCTURNE_DEFAULT_DATA_DIR=getenv(\"NOCTURNE_TEST_DEFAULT_DATA_DIR\");SDL_ShowSimpleMessageBox=message_support_SDL_ShowSimpleMessageBox")

# The version from nocturne_version.h beside this, which names it at run time.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/version.cpp"
    PROPERTIES COMPILE_DEFINITIONS "NOCTURNE_VERSION_GENERATED=1")

nocturne_test_suite(shims_core
    EXCLUDE "/test_(console|ui_scale|menu_font|menu_font_saved|menu_font_negative|os_font|menu_screen|menu_render|audio_backend|window_icon)\\.cpp$"
    SUBJECTS
        # Reaches the filesystem but nothing else; tested against a directory
        # the test builds itself.
        shims/core/file_search.cpp
        # Where each root's copy of the directory is.
        shims/watcom/path.cpp
        # Asks the host, and fills MEMORYSTATUS from any figures it is given.
        shims/core/host_memory.cpp
        # Which directories those are.
        shims/core/path_roots.cpp
        # What the build is called, and what the host can report about itself.
        shims/core/version.cpp
        shims/core/heap_report.cpp
        shims/core/fpu_trap.cpp
        shims/core/crash_report.cpp
    SUPPORT
        version_support.cpp
        message_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)

# The console, the HUD's scaling and the front end's fonts and screens: the
# framebuffer and the engine's text and bitmap routines are ui_support.cpp's,
# and the settings go through a stand-in for the engine's CIni.
nocturne_test_suite(shims_core_ui
    TESTS test_console.cpp test_ui_scale.cpp test_menu_font.cpp test_menu_font_saved.cpp
          test_menu_font_negative.cpp test_os_font.cpp test_menu_screen.cpp
    SUBJECTS
        shims/core/console.cpp
        shims/core/ui_scale.cpp
        shims/core/menu_font.cpp
        shims/core/menu_screen.cpp
        shims/core/os_font.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        ui_support.cpp
        ../gl/ini_support.cpp
)

# How a menu list is drawn and what a key does to it, over text routines and
# keys menu_render_support.cpp stands in for.
nocturne_test_suite(shims_core_menu_render
    TESTS test_menu_render.cpp
    SUBJECTS
        shims/core/menu_render.cpp
    SUPPORT
        menu_render_support.cpp
)

# The audio backend's name and the window icon, their SDL calls renamed in this
# directory's build of them for sdl_support.cpp to answer.
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/audio_backend.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "SDL_WasInit=sdl_support_SDL_WasInit;SDL_GetCurrentAudioDriver=sdl_support_SDL_GetCurrentAudioDriver")
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/window_icon.cpp"
    PROPERTIES COMPILE_DEFINITIONS
        "SDL_CreateRGBSurfaceWithFormat=sdl_support_SDL_CreateRGBSurfaceWithFormat;SDL_SetWindowIcon=sdl_support_SDL_SetWindowIcon")

nocturne_test_suite(shims_core_sdl
    TESTS test_audio_backend.cpp test_window_icon.cpp
    SUBJECTS
        shims/core/audio_backend.cpp
        shims/core/window_icon.cpp
    SUPPORT
        sdl_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)
