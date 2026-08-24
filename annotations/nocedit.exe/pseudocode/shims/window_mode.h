#pragma once

// =============================================================================
// WINDOW MODE — windowed / fullscreen / borderless
// =============================================================================
//
// An addition, not a reconstruction. The original was DirectDraw exclusive
// fullscreen only: it asks for DDSCL_FULLSCREEN and has no concept of a window
// mode, so there is nothing here to be faithful to. The ddraw shim used to strip
// that flag unconditionally ("force windowed mode for debugging"); this replaces
// the hardcoded strip with a setting.
//
// Persistence rides on the game's own INI rather than a side file. The engine's
// CIni::writeProfileString is a read-modify-write — it streams the existing file
// through a temp copy and replaces or appends a single key — so a key the shim
// adds survives the game's writeIniData, and the game's keys survive ours. That
// makes "[Graphics] windowMode" safe to add from outside inivar.cpp without
// touching the generated globals or needing a new game-side variable.
//
// Note the ordering constraint: the INI accessors run against g_CIniInstance,
// which the engine sets up during startup. Nothing here may be called before
// readIniData has run — nocturne_window_mode_get() loads lazily on first use for
// exactly that reason.

#ifdef __cplusplus
extern "C" {
#endif

enum {
    NOCTURNE_WINDOW_MODE_WINDOWED   = 0,
    NOCTURNE_WINDOW_MODE_FULLSCREEN = 1,  // real mode-setting fullscreen
    NOCTURNE_WINDOW_MODE_BORDERLESS = 2,  // desktop-sized, no decorations
    NOCTURNE_WINDOW_MODE_COUNT      = 3
};

// Current mode, loaded from the INI on first call. Defaults to windowed.
int nocturne_window_mode_get(void);

// Set and persist the mode. Applies immediately if a window exists.
void nocturne_window_mode_set(int mode);

// Advance to the next mode, wrapping. Returns the new mode.
int nocturne_window_mode_cycle(void);

// Display name for a mode ("Windowed" / "Fullscreen" / "Borderless").
const char *nocturne_window_mode_name(int mode);

// Push the current mode onto `window`. Called by the ddraw shim after it sizes
// the window, and again whenever the mode changes. Safe with a null window.
void nocturne_window_mode_apply(struct SDL_Window *window);

// Resize the OS window WITHOUT changing the game's render resolution.
//
// This is what makes the resolution selector do something on the main menu. The
// menu's layout is hardcoded for 640x480 (fixed drawText coordinates; only the
// mouse-sensitivity slider reads g_WindowWidth), so re-rendering it at a larger
// framebuffer would leave it drawn in a corner. Instead the render stays 640x480
// and the presenter scales it to whatever size the window now is. A mission,
// which does go through CGame::setGameRes, still gets a real framebuffer at the
// selected resolution.
//
// No-op while fullscreen or borderless, where the window size is not ours.
void nocturne_window_set_size(int width, int height);

#ifdef __cplusplus
}
#endif
