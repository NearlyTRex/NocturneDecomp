// =============================================================================
// SHIM INITIALIZATION - Master init for all Win32 API shims
// =============================================================================
//
// Wires up all global function pointers to their cross-platform shim
// implementations. Must be called before the program's WinMain entry point.
//

#include "core/shim_init.h"

#include <SDL.h>

static void shims_configure_sdl(void) {
    // Opt out of the X11 _NET_WM_PING protocol so the WM doesn't show a
    // "Window not responding" dialog during long synchronous operations
    // (asset load, scene init, etc) when we can't pump events.
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_PING, "0");
}

void shims_init_all(void) {
    shims_configure_sdl();
    shims_init_kernel32();
    shims_init_user32();
    shims_init_wingdi();
    shims_init_mmsystem();
    shims_init_advapi32();
    shims_init_winsock();
    shims_init_ddraw();
    shims_init_dsound();
}
