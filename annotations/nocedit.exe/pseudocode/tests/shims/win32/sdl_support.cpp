// =============================================================================
// SDL SUPPORT — see sdl_support.h
// =============================================================================
//
// The presenter and the game's own state stood in for: the SDL shims under test
// reach them, and neither is what these tests are asking about.

#include "sdl_support.h"

#include "core/window_icon.h"
#include "debug/focus_trace.h"
#include "game/gamepad.h"
#include "game/movie_audio.h"
#include "gl/gl_present.h"

namespace sdl_support {

Stand stand;

} // namespace sdl_support

using sdl_support::stand;

extern "C" {

int nocturne_gl_is_active(void) {
    return stand.gl_active;
}

void nocturne_gl_present_framebuffer(const void *pixels, int width, int height, int, int bpp) {
    ++stand.presents;
    stand.present_first_byte = *(const unsigned char *)pixels;
    stand.present_width = width;
    stand.present_height = height;
    stand.present_bpp = bpp;
}

float nocturne_movie_audio_gain(void) {
    return stand.movie_gain;
}

// DirectDraw's, which shim_init links and no case here sets a mode through.
int nocturne_gl_init(struct SDL_Window *) {
    return stand.gl_active;
}
void nocturne_gl_set_logical_size(int, int) {}
void nocturne_window_mode_apply(struct SDL_Window *) {}
int nocturne_window_preferred_size(int *, int *) {
    return 0;
}
int g_nocturne_fixed_display = 0;

void nocturne_gl_window_to_logical(int window_x, int window_y, int *out_x, int *out_y) {
    *out_x = window_x / stand.logical_scale;
    *out_y = window_y / stand.logical_scale;
}

void nocturne_apply_window_icon(struct SDL_Window *) {
    ++stand.icons;
}
void nocturne_gamepad_pump(void) {
    ++stand.gamepad_pumps;
}

int g_nocturne_focus_trace_active = 0;
void nocturne_focus_trace_arm(void) {
    ++stand.focus_arms;
}

} // extern "C"
