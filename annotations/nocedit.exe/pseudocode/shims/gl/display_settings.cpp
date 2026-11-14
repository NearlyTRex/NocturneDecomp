// =============================================================================
// DISPLAY SETTINGS — implementation
// =============================================================================
//
// See display_settings.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h.

#include "gl/display_settings.h"

#include "core/ini_setting.h"
#include "gl/window_mode.h"
#include "shim_config.h"

#include <SDL.h>
#include <algorithm>
#include <cstdio>
#include <vector>

namespace {

// Same section the window mode uses.
const char kIniSection[] = "Graphics";
const char kDisplayKey[] = "displayIndex";
const char kSizeKey[] = "fullscreenSize";
const char kRefreshKey[] = "refreshRate";
const char kVsyncKey[] = "vsync";

const int kVsyncOn = 1;
const int kVsyncStates = 2;

// One ini integer, read on first use.
struct Setting {
    const char *key;
    int fallback;
    int value;
    bool loaded;

    int get() {
#if NOCTURNE_AUTHENTIC_MENU
        return fallback;
#else
        if (!loaded) {
            value = nocturne_ini_get_int(kIniSection, key, fallback);
            loaded = true;
        }
        return value;
#endif
    }

    int set(int next) {
        value = next;
        loaded = true;
        nocturne_ini_set_int(kIniSection, key, next);
        return next;
    }
};

Setting s_display = {kDisplayKey, 0, 0, false};
Setting s_size = {kSizeKey, NOCTURNE_FULLSCREEN_SIZE_GAME, 0, false};
Setting s_refresh = {kRefreshKey, 0, 0, false};
Setting s_vsync = {kVsyncKey, kVsyncOn, 0, false};

int display_count() {
    const int count = SDL_GetNumVideoDisplays();
    return count > 0 ? count : 1;
}

// A mode SDL cannot describe stays zeroed, which matches no size.
SDL_DisplayMode display_mode(int display, int index) {
    SDL_DisplayMode mode = {};
    SDL_GetDisplayMode(display, index, &mode);
    return mode;
}

// 0, which is SDL's choice, then the rates the display offers at a size,
// ascending, each once. A mode of unknown rate is SDL's choice too.
std::vector<int> refresh_choices(int display, int width, int height) {
    std::vector<int> rates = {0};
    const int modes = SDL_GetNumDisplayModes(display);
    for (int i = 0; i < modes; ++i) {
        const SDL_DisplayMode mode = display_mode(display, i);
        if (mode.w == width && mode.h == height)
            rates.push_back(mode.refresh_rate);
    }
    std::sort(rates.begin(), rates.end());
    rates.erase(std::unique(rates.begin(), rates.end()), rates.end());
    return rates;
}

bool display_has_size(int display, int width, int height) {
    const int modes = SDL_GetNumDisplayModes(display);
    for (int i = 0; i < modes; ++i) {
        const SDL_DisplayMode mode = display_mode(display, i);
        if (mode.w == width && mode.h == height)
            return true;
    }
    return false;
}

} // namespace

extern "C" int nocturne_display_index(void) {
    const int saved = s_display.get();
    // Unsigned, so a negative index is out of range too.
    return (unsigned)saved < (unsigned)display_count() ? saved : 0;
}

extern "C" int nocturne_display_index_cycle(int step) {
    return s_display.set(nocturne_ini_cycle(nocturne_display_index(), step, display_count()));
}

extern "C" const char *nocturne_display_label(int index) {
    static char label[96];
    const char *name = SDL_GetDisplayName(index);
    if (name != nullptr)
        std::snprintf(label, sizeof(label), "%d (%s)", index + 1, name);
    else
        std::snprintf(label, sizeof(label), "%d", index + 1);
    return label;
}

extern "C" int nocturne_fullscreen_size_get(void) {
    const int saved = s_size.get();
    return saved == NOCTURNE_FULLSCREEN_SIZE_DESKTOP ? saved : NOCTURNE_FULLSCREEN_SIZE_GAME;
}

extern "C" int nocturne_fullscreen_size_cycle(int step) {
    return s_size.set(
        nocturne_ini_cycle(nocturne_fullscreen_size_get(), step, NOCTURNE_FULLSCREEN_SIZE_COUNT));
}

extern "C" const char *nocturne_fullscreen_size_name(int size) {
    return size == NOCTURNE_FULLSCREEN_SIZE_DESKTOP ? "Desktop" : "Game";
}

extern "C" int nocturne_refresh_rate_get(void) {
    const int saved = s_refresh.get();
    return saved > 0 ? saved : 0;
}

extern "C" int nocturne_refresh_rate_cycle(int step, int width, int height) {
    const std::vector<int> choices = refresh_choices(nocturne_display_index(), width, height);
    const auto at = std::find(choices.begin(), choices.end(), nocturne_refresh_rate_get());
    const int current = at == choices.end() ? 0 : (int)(at - choices.begin());
    return s_refresh.set(choices[(size_t)nocturne_ini_cycle(current, step, (int)choices.size())]);
}

extern "C" const char *nocturne_refresh_rate_label(int hz) {
    static char label[32];
    if (hz <= 0)
        return "Auto";
    std::snprintf(label, sizeof(label), "%d Hz", hz);
    return label;
}

extern "C" int nocturne_vsync_get(void) {
    return s_vsync.get() != 0 ? 1 : 0;
}

extern "C" int nocturne_vsync_cycle(int step) {
    return s_vsync.set(nocturne_ini_cycle(nocturne_vsync_get(), step, kVsyncStates));
}

extern "C" int nocturne_display_fullscreen_mode(int width, int height, void *out) {
    const int size = nocturne_fullscreen_size_get();
    const int hz = nocturne_refresh_rate_get();
    if (size == NOCTURNE_FULLSCREEN_SIZE_GAME && hz == 0)
        return 0;
    const int display = nocturne_display_index();
    SDL_DisplayMode desktop = {};
    if (size == NOCTURNE_FULLSCREEN_SIZE_DESKTOP) {
        if (SDL_GetDesktopDisplayMode(display, &desktop) != 0)
            return 0;
        if (hz == 0) {
            *(SDL_DisplayMode *)out = desktop;
            return 1;
        }
        width = desktop.w;
        height = desktop.h;
    }
    SDL_DisplayMode want = {};
    want.w = width;
    want.h = height;
    want.refresh_rate = hz;
    // None at all only for a size larger than the display has.
    SDL_DisplayMode closest = {};
    if (SDL_GetClosestDisplayMode(display, &want, &closest) == nullptr)
        return 0;
    *(SDL_DisplayMode *)out = closest;
    return 1;
}

extern "C" int nocturne_display_offers(int width, int height) {
    const int display = nocturne_display_index();
    SDL_DisplayMode desktop = {};
    if (SDL_GetDesktopDisplayMode(display, &desktop) != 0)
        return 1;
    if (width > desktop.w || height > desktop.h)
        return 0;
    if (nocturne_window_mode_get() == NOCTURNE_WINDOW_MODE_FULLSCREEN &&
        nocturne_fullscreen_size_get() == NOCTURNE_FULLSCREEN_SIZE_GAME)
        return display_has_size(display, width, height) ? 1 : 0;
    return 1;
}
