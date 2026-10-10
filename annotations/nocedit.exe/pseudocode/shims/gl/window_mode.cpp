// =============================================================================
// WINDOW MODE — windowed / fullscreen / borderless
// =============================================================================
// See window_mode.h for what this is and why the setting lives in the game's
// own INI rather than a side file.

#include "gl/window_mode.h"
#include "shim_config.h"
#include "core/debug_log.h"
#include "core/ini_setting.h"
#include <SDL.h>

#include "nocturne.h"

namespace {

const char kIniSection[] = "Graphics";
const char kIniKey[] = "windowMode";

int  s_mode = NOCTURNE_WINDOW_MODE_WINDOWED;
bool s_loaded = false;

// The window the ddraw shim last handed us, so a mode change from the menu can
// take effect without waiting for the next SetDisplayMode.
SDL_Window *s_window = nullptr;

// The size the window is meant to be, which is the resolution the player chose
// and not the resolution the engine happens to be rendering at. The two part
// company constantly: the front end, the opening movie and the Options screen
// all run at 640x480 whatever the game is set to, and a mission runs at the
// selected resolution. Sizing the window from the render resolution therefore
// makes it jump every time the engine crosses one of those boundaries. Held
// here so SetDisplayMode has something to size against instead.
int s_pref_width  = 0;
int s_pref_height = 0;

int clamp_mode(int mode) {
    if (mode < 0 || mode >= NOCTURNE_WINDOW_MODE_COUNT) {
        return NOCTURNE_WINDOW_MODE_WINDOWED;
    }
    return mode;
}

// Push the remembered size onto the window. Windowed mode only — fullscreen
// asks the display for a mode and borderless takes the desktop, so writing a
// size there would either provoke a mode change or be discarded.
//
// Idempotent, because callers re-assert rather than track: SetDisplayMode
// pushes the preferred size back on every mode change, and the Options screen
// calls this once a frame. Without the early out that would be an
// SDL_SetWindowSize, and a resize event, per frame.
void apply_pref_size() {
    if (s_window == nullptr) return;
    if (s_pref_width <= 0 || s_pref_height <= 0) return;

    int cur_w = 0, cur_h = 0;
    SDL_GetWindowSize(s_window, &cur_w, &cur_h);
    if (cur_w == s_pref_width && cur_h == s_pref_height) return;

    DLOG("render", "resize window %dx%d -> %dx%d (render resolution unchanged)",
            cur_w, cur_h, s_pref_width, s_pref_height);
    SDL_SetWindowSize(s_window, s_pref_width, s_pref_height);
    SDL_SetWindowPosition(s_window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
}

} // namespace

extern "C" int nocturne_window_mode_get(void) {
#if NOCTURNE_AUTHENTIC_WINDOW_MODE
    // DDSCL_FULLSCREEN | DDSCL_EXCLUSIVE is the only mode the shipped game has.
    return NOCTURNE_WINDOW_MODE_FULLSCREEN;
#endif
    if (!s_loaded) {
        // Runs from the ddraw shim during startup, before anything has written
        // the ini (see core/ini_setting.h).
        if (nocturne_ini_exists() == 0) {
            DLOG("render", "no %s yet; defaulting to windowed", NOCTURNE_INI_PATH);
        }
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kIniKey,
                                                 NOCTURNE_WINDOW_MODE_WINDOWED));
        s_loaded = true;
        DLOG("render", "loaded windowMode=%d (%s)", s_mode,
                nocturne_window_mode_name(s_mode));
    }
    return s_mode;
}

extern "C" void nocturne_window_mode_set(int mode) {
    mode = clamp_mode(mode);
    s_mode = mode;
    s_loaded = true;

    nocturne_ini_set_int(kIniSection, kIniKey, mode);

    DLOG("render", "set windowMode=%d (%s)", mode, nocturne_window_mode_name(mode));
    nocturne_window_mode_apply(s_window);
}

extern "C" int nocturne_window_mode_cycle(int step) {
    int next = nocturne_ini_cycle(nocturne_window_mode_get(), step, NOCTURNE_WINDOW_MODE_COUNT);
    nocturne_window_mode_set(next);
    return next;
}

extern "C" const char *nocturne_window_mode_name(int mode) {
    switch (clamp_mode(mode)) {
    case NOCTURNE_WINDOW_MODE_FULLSCREEN: return "Fullscreen";
    case NOCTURNE_WINDOW_MODE_BORDERLESS: return "Borderless";
    default:                              return "Windowed";
    }
}

extern "C" void nocturne_window_mode_apply(SDL_Window *window) {
    if (window == nullptr) return;
    s_window = window;

    const int mode = nocturne_window_mode_get();

    // Real fullscreen asks the display for a mode matching the window size;
    // the presenter letterboxes the game's logical size into whatever it
    // actually gets, so a refused mode degrades to a scaled picture rather
    // than a broken one. Borderless is desktop-sized with no decorations.
    Uint32 want = 0;
    if (mode == NOCTURNE_WINDOW_MODE_FULLSCREEN) {
        want = SDL_WINDOW_FULLSCREEN;
    } else if (mode == NOCTURNE_WINDOW_MODE_BORDERLESS) {
        want = SDL_WINDOW_FULLSCREEN_DESKTOP;
    }

    // Idempotent. This is re-asserted from several engine paths per mode change
    // (SetDisplayMode, RestoreDisplayMode), and toggling SDL's fullscreen state
    // when it is already correct makes the window visibly churn — and on some
    // window managers it can leave the pre-fullscreen size behind.
    // SDL_WINDOW_FULLSCREEN_DESKTOP contains the FULLSCREEN bit, so mask with
    // the wider value to tell the two apart.
    const Uint32 cur = SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP;
    if (cur == want) return;

    DLOG("render", "apply mode=%d (%s) flags 0x%x -> 0x%x",
            mode, nocturne_window_mode_name(mode), cur, want);
    // Switching straight between exclusive and desktop fullscreen asks the
    // backend to change the display mode and the window geometry while the
    // window stays fullscreen, which not every video driver or window manager
    // completes. Leave fullscreen first so the new kind starts from a window.
    if (cur != 0 && want != 0) {
        SDL_SetWindowFullscreen(window, 0);
    }
    SDL_SetWindowFullscreen(window, want);
    if (want == 0) {
        SDL_SetWindowBordered(window, SDL_TRUE);
        // SDL restores the size it was at before it went fullscreen, and that
        // is not necessarily the resolution the player has chosen: a
        // resolution change made while borderless or fullscreen was up is
        // recorded and not applied, because those modes own the window size.
        // Re-assert it, so windowed comes back at the current choice rather
        // than the one that happened to be in force when it left.
        apply_pref_size();
    }

    int win_w = 0, win_h = 0, draw_w = 0, draw_h = 0;
    SDL_DisplayMode display_mode = {};
    SDL_GetWindowSize(window, &win_w, &win_h);
    SDL_GL_GetDrawableSize(window, &draw_w, &draw_h);
    SDL_GetCurrentDisplayMode(SDL_GetWindowDisplayIndex(window), &display_mode);
    DLOG("render", "applied mode=%d: window %dx%d drawable %dx%d display %dx%d",
            mode, win_w, win_h, draw_w, draw_h, display_mode.w, display_mode.h);
}

extern "C" int nocturne_window_preferred_size(int *width, int *height) {
    if (s_pref_width <= 0 || s_pref_height <= 0) return 0;
    if (width  != nullptr) *width  = s_pref_width;
    if (height != nullptr) *height = s_pref_height;
    return 1;
}

extern "C" void nocturne_window_set_size(int width, int height) {
    if (width <= 0 || height <= 0) return;
    // Recorded even when it cannot be applied yet. This runs before the window
    // exists, and it runs while fullscreen owns the size; either way it is the
    // size windowed mode should come back to.
    s_pref_width  = width;
    s_pref_height = height;

    if (nocturne_window_mode_get() != NOCTURNE_WINDOW_MODE_WINDOWED) {
        // Fullscreen/borderless own the window size; the presenter will scale
        // the render into whatever the display gave us. The size is applied
        // when the window next becomes windowed.
        return;
    }
    apply_pref_size();
}
