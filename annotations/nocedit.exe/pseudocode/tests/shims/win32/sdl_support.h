#pragma once

// =============================================================================
// SDL SUPPORT — the game-side and presenter calls the SDL shims make
// =============================================================================
//
// What they answer, and what they were handed. A test sets the answers it
// needs and reads back the rest; reset() puts both back.

namespace sdl_support {

struct Stand {
    int gl_active = 0;       // nocturne_gl_is_active
    float movie_gain = 1.0f; // nocturne_movie_audio_gain

    // nocturne_gl_present_framebuffer
    int presents = 0;
    int present_width = 0;
    int present_height = 0;
    int present_bpp = 0;
    int present_first_byte = -1; // of the pixels

    // The window side: what nocturne_gl_window_to_logical scales by, and how
    // often the icon was set, the focus trace armed and the gamepad sampled.
    int logical_scale = 1;
    int icons = 0;
    int focus_arms = 0;
    int gamepad_pumps = 0;

    void reset() {
        *this = Stand();
    }
};

extern Stand stand;

} // namespace sdl_support
