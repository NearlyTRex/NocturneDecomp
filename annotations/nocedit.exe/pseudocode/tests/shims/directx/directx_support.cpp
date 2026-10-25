// =============================================================================
// DIRECTX SUPPORT — see directx_support.h
// =============================================================================

#include "directx_support.h"

#include "gl/gl_present.h"
#include "gl/window_mode.h"

#include <cstring>

namespace directx_support {

Stand stand;

} // namespace directx_support

using directx_support::stand;

SDL_Window *g_sdlWindow = nullptr;
bool g_sdlWindowReadyToShow = false;

extern "C" {

int nocturne_gl_init(struct SDL_Window *) {
    stand.gl_active = stand.gl_init;
    return stand.gl_init;
}

int nocturne_gl_is_active(void) {
    return stand.gl_active;
}

void nocturne_gl_set_logical_size(int width, int height) {
    stand.logical_width = width;
    stand.logical_height = height;
}

void nocturne_gl_present_framebuffer(const void *pixels, int width, int, int, int bpp) {
    ++stand.presents;
    stand.present_width = width;
    stand.present_bpp = bpp;
    memcpy(&stand.present_first_pixel, pixels, sizeof(stand.present_first_pixel));
}

void nocturne_window_mode_apply(struct SDL_Window *) {
    ++stand.mode_applies;
}

int g_nocturne_fixed_display = 0;

int nocturne_window_preferred_size(int *width, int *height) {
    if (stand.preferred_width == 0)
        return 0;
    *width = stand.preferred_width;
    *height = stand.preferred_height;
    return 1;
}

} // extern "C"
