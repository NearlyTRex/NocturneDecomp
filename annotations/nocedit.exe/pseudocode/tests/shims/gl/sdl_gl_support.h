#pragma once

// =============================================================================
// SDL GL SUPPORT — the context, window and swap the presenter asks SDL for
// =============================================================================
//
// This directory's build of gl_present.cpp calls these in place of SDL's
// (CMakeLists.txt beside this), so the presenter runs with no driver: its GL
// calls go to the recorder, which loading the API installs. A test sets what
// SDL and the driver answer and reads back what they were asked.

#include <string>
#include <vector>

struct SDL_Window;

namespace sdl_gl {

struct Stand {
    bool create_fails = false;                   // SDL_GL_CreateContext
    bool make_current_fails = false;             // SDL_GL_MakeCurrent
    bool load_fails = false;                     // nocturne_gl_load_api
    bool adaptive_vsync = true;                  // SDL_GL_SetSwapInterval(-1) succeeds
    const char *version = "4.6.0 NVIDIA 595.84"; // GL_VERSION, or null

    int window_width = 640; // SDL_GetWindowSize
    int window_height = 480;
    int drawable_width = 640; // SDL_GL_GetDrawableSize
    int drawable_height = 480;

    int contexts = 0; // made and not deleted
    int swaps = 0;
    unsigned long long counter = 0;   // SDL_GetPerformanceCounter
    unsigned long long swap_cost = 0; // what each swap advances it by
    std::vector<int> intervals;       // asked of SDL_GL_SetSwapInterval

    void reset() {
        *this = Stand();
    }
};

extern Stand stand;

// A window to hand the presenter: never dereferenced.
SDL_Window *window();

} // namespace sdl_gl
