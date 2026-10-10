#pragma once

// =============================================================================
// DIRECTDRAW — what the shim exposes beyond the COM interfaces
// =============================================================================
//
// ddraw.cpp implements DirectDraw for the engine through its COM vtables; the
// engine never needs a header for it. This is for the shims that need to reach
// its state directly.

struct SDL_Renderer;

#ifdef __cplusplus
extern "C" {
#endif

// The SDL renderer the primary surface presents through, or null while GL owns
// the window. Read by the front-buffer dump (debug/dump.cpp).
struct SDL_Renderer *nocturne_ddraw_present_renderer(void);

#ifdef __cplusplus
}
#endif
