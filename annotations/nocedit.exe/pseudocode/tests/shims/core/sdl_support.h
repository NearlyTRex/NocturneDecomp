#pragma once

// =============================================================================
// SDL SUPPORT — the SDL answers the audio-backend and window-icon shims ask for
// =============================================================================
//
// This directory's build of audio_backend.cpp and window_icon.cpp calls these
// in place of SDL's (CMakeLists.txt beside this): whether audio is up and its
// driver's name, and the icon's surface and the window it goes on.

struct SDL_Surface;
struct SDL_Window;

namespace sdl_support {

struct Stand {
    int audio_up = 0;
    const char *driver = nullptr;

    int surface_fails = 0;
    SDL_Window *icon_window = nullptr; // the window SDL_SetWindowIcon was handed
    int icon_width = 0;
    unsigned first_pixel = 0; // the icon's top-left pixel as handed over

    void reset() {
        *this = Stand();
    }
};

extern Stand stand;

// A window to hand the icon shim: never dereferenced.
SDL_Window *window();

} // namespace sdl_support
