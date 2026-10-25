// =============================================================================
// SHIM INITIALIZATION - Master init for the legacy-platform API shims
// =============================================================================
//
// Wires up all global function pointers to their cross-platform shim
// implementations. Must be called before the program's WinMain entry point.
//
// Covers both emulation directories: win32/ and directx/. Every entry here is
// scaffolding for an API the shipped binary imports, so this list shrinks as
// the engine stops speaking them, and the last removal retires this file.
//

#include "win32/shim_init.h"

#include <SDL.h>

static void shims_configure_sdl(void) {
    // Opt out of the X11 _NET_WM_PING protocol so the WM doesn't show a
    // "Window not responding" dialog during long synchronous operations
    // (asset load, scene init, etc) when we can't pump events.
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_PING, "0");

    // On a scaled Windows display, draw at the monitor's own pixels rather than
    // be stretched by Windows, which blurs the picture and can leave its last
    // column short of the screen's edge. Window sizes stay in scaled points, so
    // a window is the size it would be unscaled; the presenter already works in
    // drawable pixels. Other platforms ignore it.
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_SCALING, "1");
}

void shims_init_all(void) {
    shims_configure_sdl();

    // win32/
    shims_init_kernel32();
    shims_init_user32();
    shims_init_wingdi();
    shims_init_mmsystem();
    shims_init_advapi32();
    shims_init_winsock();

    // directx/
    shims_init_ddraw();
    shims_init_dsound();
}
