// =============================================================================
// WINDOW MODE — windowed / fullscreen / borderless
// =============================================================================
// See window_mode.h for what this is and why the setting lives in the game's
// own INI rather than a side file.

#include "gl/window_mode.h"
#include "shim_config.h"
#include "core/debug_log.h"
#include <SDL.h>

// Reaches engine_ini_cpp_getProfileInteger / _writeProfileString, which operate
// on the engine's g_CIniInstance.
#include "nocturne.h"

#include <cstdio>
#include <string>

// Defined in shims/crt.cpp — the same '\\'->'/' + case-insensitive resolution
// the CRT _fopen shim applies, so the probe below looks at the file the engine
// will actually open.
std::string watcom_resolve_fs_path(const char *path);

namespace {

// Same path inivar.cpp uses. Kept as a non-const buffer because the engine's
// INI accessors take char* rather than const char*.
char kIniPath[] = ".\\system\\nocturne.ini";
char kIniSection[] = "Graphics";
char kIniKey[] = "windowMode";

int  s_mode = NOCTURNE_WINDOW_MODE_WINDOWED;
bool s_loaded = false;

// The window the ddraw shim last handed us, so a mode change from the menu can
// take effect without waiting for the next SetDisplayMode.
SDL_Window *s_window = nullptr;

int clamp_mode(int mode) {
    if (mode < 0 || mode >= NOCTURNE_WINDOW_MODE_COUNT) {
        return NOCTURNE_WINDOW_MODE_WINDOWED;
    }
    return mode;
}

} // namespace

extern "C" int nocturne_window_mode_get(void) {
    if (!s_loaded) {
        // CIni::getProfileString has NO initialised-guard: if it cannot open the
        // file it calls displayErrorAndQuit("Unable to open input") and takes the
        // process with it. This runs from the ddraw shim during startup, so
        // check the file is really there first rather than trusting init order.
        std::string resolved = watcom_resolve_fs_path(kIniPath);
        FILE *probe = fopen(resolved.c_str(), "rb");
        if (probe != nullptr) {
            fclose(probe);
            s_mode = clamp_mode(engine_ini_cpp_getProfileInteger_FUN_004fb9a0(
                kIniSection, kIniKey, NOCTURNE_WINDOW_MODE_WINDOWED, kIniPath));
        } else {
            s_mode = NOCTURNE_WINDOW_MODE_WINDOWED;
            DLOG_EX("window", "no %s yet; defaulting to windowed", kIniPath);
        }
        s_loaded = true;
        DLOG_EX("window", "loaded windowMode=%d (%s)", s_mode,
                nocturne_window_mode_name(s_mode));
    }
    return s_mode;
}

extern "C" void nocturne_window_mode_set(int mode) {
    mode = clamp_mode(mode);
    s_mode = mode;
    s_loaded = true;

    char value[16];
    snprintf(value, sizeof(value), "%d", mode);
    engine_ini_cpp_writeProfileString_FUN_004fba40(kIniSection, kIniKey, value, kIniPath);

    DLOG_EX("window", "set windowMode=%d (%s)", mode, nocturne_window_mode_name(mode));
    nocturne_window_mode_apply(s_window);
}

extern "C" int nocturne_window_mode_cycle(void) {
    int next = (nocturne_window_mode_get() + 1) % NOCTURNE_WINDOW_MODE_COUNT;
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

    DLOG_EX("window", "apply mode=%d (%s) flags 0x%x -> 0x%x",
            mode, nocturne_window_mode_name(mode), cur, want);
    SDL_SetWindowFullscreen(window, want);
    if (want == 0) {
        SDL_SetWindowBordered(window, SDL_TRUE);
    }
}

extern "C" void nocturne_window_set_size(int width, int height) {
    if (s_window == nullptr || width <= 0 || height <= 0) return;
    if (nocturne_window_mode_get() != NOCTURNE_WINDOW_MODE_WINDOWED) {
        // Fullscreen/borderless own the window size; the presenter will scale
        // the render into whatever the display gave us.
        return;
    }

    // Idempotent, because callers re-assert rather than track. ddraw's
    // SetDisplayMode sizes the window to the RENDER resolution, which is right
    // for a mission but throws away the menu's larger window; the menu therefore
    // calls this every frame to win the size back on return. Without the early
    // out that would be an SDL_SetWindowSize (and a resize event) per frame.
    int cur_w = 0, cur_h = 0;
    SDL_GetWindowSize(s_window, &cur_w, &cur_h);
    if (cur_w == width && cur_h == height) return;

    DLOG_EX("window", "resize window %dx%d -> %dx%d (render resolution unchanged)",
            cur_w, cur_h, width, height);
    SDL_SetWindowSize(s_window, width, height);
    SDL_SetWindowPosition(s_window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
}
