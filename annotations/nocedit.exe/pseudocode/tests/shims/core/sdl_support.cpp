// =============================================================================
// SDL SUPPORT — see sdl_support.h
// =============================================================================

#include "sdl_support.h"

#include <SDL.h>
#include <cstring>

namespace sdl_support {

Stand stand;

namespace {
int g_window_marker = 0;
} // namespace

SDL_Window *window() {
    return (SDL_Window *)&g_window_marker;
}

} // namespace sdl_support

using sdl_support::stand;

extern "C" {

Uint32 sdl_support_SDL_WasInit(Uint32 flags) {
    return stand.audio_up ? flags : 0;
}

const char *sdl_support_SDL_GetCurrentAudioDriver(void) {
    return stand.driver;
}

SDL_Surface *sdl_support_SDL_CreateRGBSurfaceWithFormat(Uint32 flags, int width, int height,
                                                        int depth, Uint32 format) {
    if (stand.surface_fails) {
        SDL_SetError("stand");
        return nullptr;
    }
    return SDL_CreateRGBSurfaceWithFormat(flags, width, height, depth, format);
}

void sdl_support_SDL_SetWindowIcon(SDL_Window *window, SDL_Surface *icon) {
    stand.icon_window = window;
    stand.icon_width = icon->w;
    std::memcpy(&stand.first_pixel, icon->pixels, sizeof(stand.first_pixel));
}

} // extern "C"
