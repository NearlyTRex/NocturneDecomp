// =============================================================================
// WINDOW ICON
// =============================================================================
// See window_icon.h for where the pixels come from and why they are generated
// rather than checked in.

#include "core/window_icon.h"
#include "core/debug_log.h"
#include <SDL.h>
#include <cstring>

// Either header defines NOCTURNE_ICON_WIDTH / _HEIGHT, plus NOCTURNE_ICON_RGBA
// when the width is non-zero. The committed one is the default; the generated
// one appears in the build tree only under -DNOCTURNE_ICON_FROM_EXE=ON, and
// CMake selects it by defining that macro here too.
#ifdef NOCTURNE_ICON_FROM_EXE
#include "nocturne_icon.h"
#else
#include "core/window_icon_moon.h"
#endif

extern "C" void nocturne_apply_window_icon(SDL_Window *window) {
#if NOCTURNE_ICON_WIDTH > 0
    if (!window) return;

    // SDL_PIXELFORMAT_RGBA32 is the byte-order-correct alias on both
    // endiannesses, which is what the generator emits.
    SDL_Surface *icon = SDL_CreateRGBSurfaceWithFormat(
        0, NOCTURNE_ICON_WIDTH, NOCTURNE_ICON_HEIGHT, 32, SDL_PIXELFORMAT_RGBA32);
    if (!icon) {
        DLOG("render", "window icon: surface failed: %s", SDL_GetError());
        return;
    }

    // Copy row by row rather than in one block: SDL is free to pad its pitch,
    // and only the first row would land correctly if it did.
    const int row_bytes = NOCTURNE_ICON_WIDTH * 4;
    for (int y = 0; y < NOCTURNE_ICON_HEIGHT; ++y) {
        std::memcpy((unsigned char *)icon->pixels + (size_t)y * icon->pitch,
                    NOCTURNE_ICON_RGBA + (size_t)y * row_bytes,
                    (size_t)row_bytes);
    }

    SDL_SetWindowIcon(window, icon);
    SDL_FreeSurface(icon);
    DLOG("render", "window icon: %dx%d applied",
         NOCTURNE_ICON_WIDTH, NOCTURNE_ICON_HEIGHT);
#else
    (void)window;
#endif
}
