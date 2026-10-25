#pragma once

// =============================================================================
// DIRECTX SUPPORT — the presenter, window-mode and window calls the DirectX
// shims make
// =============================================================================
//
// What they answer, and what they were handed. A test sets the answers it
// needs and reads back the rest; reset() puts both back. The game's window,
// which user32 makes in the game, is the test's to make.

struct SDL_Window;

namespace directx_support {

struct Stand {
    int gl_init = 0;       // what nocturne_gl_init answers; it then is active
    int gl_active = 0;     // nocturne_gl_is_active
    int logical_width = 0; // nocturne_gl_set_logical_size
    int logical_height = 0;
    int preferred_width = 0; // nocturne_window_preferred_size; 0 for none
    int preferred_height = 0;
    int mode_applies = 0; // nocturne_window_mode_apply

    // nocturne_gl_present_framebuffer
    int presents = 0;
    int present_width = 0;
    int present_bpp = 0;
    unsigned present_first_pixel = 0; // its first four bytes

    void reset() {
        *this = Stand();
    }
};

extern Stand stand;

} // namespace directx_support

extern SDL_Window *g_sdlWindow;
extern bool g_sdlWindowReadyToShow;
