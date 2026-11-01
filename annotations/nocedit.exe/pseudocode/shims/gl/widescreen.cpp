// =============================================================================
// WIDESCREEN — implementation
// =============================================================================
//
// See widescreen.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.

#include "gl/widescreen.h"

#include "core/ini_setting.h"
#include "shim_config.h"

#include <cmath>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

// Same section the upscaler and window mode use.
const char kIniSection[] = "Graphics";
const char kModeKey[] = "widescreen";

// How far, in scene rows, the focus may drift from the middle of the crop
// before the crop follows; and how fast it closes the rest, per second. A
// frame longer than the cap counts as the cap, so a hitch does not jump.
const float kDeadBand = 16.0f;
const float kEaseRate = 6.0f;
const float kLongestStep = 0.1f;
// How fast a look reaches what the stick asks, and returns, per second.
const float kLookRate = 5.0f;

int s_mode = NOCTURNE_WIDESCREEN_PAN;
bool s_mode_loaded = false;

// The crop's top as tracking places it, in scene rows, and the camera it was
// placed for; how far the player's look moves it from there; and where that
// leaves the crop on screen.
float s_top = 0.0f;
float s_look = 0.0f;
float s_shown = 0.0f;
int s_camera = 0;
bool s_tracking = false;

int clamp_mode(int mode) {
    if ((unsigned)mode >= (unsigned)NOCTURNE_WIDESCREEN_COUNT)
        return NOCTURNE_WIDESCREEN_PAN;
    return mode;
}

// Wider than 4:3, above the 480 lines at which the scene has its own space.
bool reframes(int width, int height) {
    return height > NOCTURNE_SCENE_HEIGHT && width * 3 > height * 4;
}

// Scene rows the screen's width leaves room for.
float visible_rows(int width, int height) {
    return (float)NOCTURNE_SCENE_WIDTH * (float)height / (float)width;
}

float clampf(float value, float low, float high) {
    if (value < low)
        return low;
    return value > high ? high : value;
}

// The crop's top within the scene a `width` x `height` screen shows.
float crop_top(int width, int height) {
    return clampf(s_shown, 0.0f, (float)NOCTURNE_SCENE_HEIGHT - visible_rows(width, height));
}

// The 4:3 column a pillarboxed scene fills.
int column_width(int height) {
    return (int)std::lround((double)height * 4.0 / 3.0);
}

} // namespace

extern "C" int nocturne_widescreen_get(void) {
    if (!s_mode_loaded) {
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kModeKey, NOCTURNE_WIDESCREEN_PAN));
        s_mode_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_widescreen_cycle(int step) {
    s_mode = nocturne_ini_cycle(nocturne_widescreen_get(), step, NOCTURNE_WIDESCREEN_COUNT);
    nocturne_ini_set_int(kIniSection, kModeKey, s_mode);
    return s_mode;
}

extern "C" const char *nocturne_widescreen_name(int mode) {
    static const char *const kNames[NOCTURNE_WIDESCREEN_COUNT] = {"Stretch", "Pillarbox",
                                                                  "Pan & scan"};
    return kNames[clamp_mode(mode)];
}

extern "C" void nocturne_widescreen_track(int width, int height, int camera, int focus_visible,
                                          float focus_y, int cinematic, float look,
                                          float seconds) {
    if (!reframes(width, height))
        return;
    const float rows = visible_rows(width, height);
    const float travel = (float)NOCTURNE_SCENE_HEIGHT - rows;
    const bool cut = !s_tracking || camera != s_camera;
    s_tracking = true;
    s_camera = camera;

    // Centred under the letterbox, and on a cut that loses the focus; held
    // where it is while the focus is out of shot.
    float target = s_top;
    if (cinematic != 0 || (cut && focus_visible == 0))
        target = travel * 0.5f;
    else if (focus_visible != 0)
        target = clampf(focus_y - rows * 0.5f, 0.0f, travel);

    const float step = clampf(seconds, 0.0f, kLongestStep);
    if (cut) {
        // A new shot starts framed, whatever the look was.
        s_top = target;
        s_look = 0.0f;
    } else {
        const float difference = target - s_top;
        const float beyond = std::fabs(difference) - kDeadBand;
        if (beyond > 0.0f)
            s_top += std::copysign(beyond, difference) * (1.0f - std::exp(-kEaseRate * step));
        s_top = clampf(s_top, 0.0f, travel);
        // A full look reaches that edge of the shot from wherever the crop is.
        const float wanted = look >= 0.0f ? look * s_top : look * (travel - s_top);
        s_look += (wanted - s_look) * (1.0f - std::exp(-kLookRate * step));
    }
    s_shown = clampf(s_top - s_look, 0.0f, travel);
}

extern "C" int nocturne_widescreen_reframe(int width, int height, NocturneReframe *out) {
    const int mode = nocturne_widescreen_get();
    if (mode == NOCTURNE_WIDESCREEN_STRETCH || !reframes(width, height))
        return 0;
    if (mode == NOCTURNE_WIDESCREEN_PILLARBOX) {
        const int column = column_width(height);
        *out = NocturneReframe{0, 0, width, height, (width - column) / 2, 0, column, height};
        return 1;
    }
    // Scene rows to target rows.
    const float scale = (float)height / (float)NOCTURNE_SCENE_HEIGHT;
    const int top = (int)std::lround(crop_top(width, height) * scale);
    const int rows = (int)std::lround(visible_rows(width, height) * scale);
    *out = NocturneReframe{0, top, width, rows, 0, 0, width, height};
    return 1;
}

extern "C" int nocturne_widescreen_shown_rows(int width, int height) {
    if (nocturne_widescreen_get() != NOCTURNE_WIDESCREEN_PAN || !reframes(width, height))
        return NOCTURNE_SCENE_HEIGHT;
    return (int)std::lround(visible_rows(width, height));
}

extern "C" void nocturne_widescreen_picture(int width, int height, int *left, int *right) {
    *left = 0;
    *right = width;
    if (nocturne_widescreen_get() != NOCTURNE_WIDESCREEN_PILLARBOX || !reframes(width, height))
        return;
    const int column = column_width(height);
    *left = (width - column) / 2;
    *right = *left + column;
}

extern "C" void nocturne_widescreen_scene_to_screen(int width, int height, int scene_x,
                                                    int scene_y, int *out_x, int *out_y) {
    const int mode = nocturne_widescreen_get();
    if (mode == NOCTURNE_WIDESCREEN_STRETCH || !reframes(width, height)) {
        // The renderer's own stretch.
        *out_x = (scene_x * width) / NOCTURNE_SCENE_WIDTH;
        *out_y = (scene_y * height) / NOCTURNE_SCENE_HEIGHT;
        return;
    }
    if (mode == NOCTURNE_WIDESCREEN_PILLARBOX) {
        const int column = column_width(height);
        *out_x = (width - column) / 2 + (scene_x * column) / NOCTURNE_SCENE_WIDTH;
        *out_y = (scene_y * height) / NOCTURNE_SCENE_HEIGHT;
        return;
    }
    // One scale both ways: the screen's width over the scene's.
    *out_x = (scene_x * width) / NOCTURNE_SCENE_WIDTH;
    *out_y = (int)std::lround(((float)scene_y - crop_top(width, height)) * (float)width /
                              (float)NOCTURNE_SCENE_WIDTH);
}

#else

extern "C" int nocturne_widescreen_get(void) {
    return NOCTURNE_WIDESCREEN_STRETCH;
}
extern "C" int nocturne_widescreen_cycle(int) {
    return NOCTURNE_WIDESCREEN_STRETCH;
}
extern "C" const char *nocturne_widescreen_name(int) {
    return "Stretch";
}
extern "C" void nocturne_widescreen_track(int, int, int, int, float, int, float, float) {}
extern "C" int nocturne_widescreen_reframe(int, int, NocturneReframe *) {
    return 0;
}
extern "C" int nocturne_widescreen_shown_rows(int, int) {
    return NOCTURNE_SCENE_HEIGHT;
}
extern "C" void nocturne_widescreen_picture(int width, int, int *left, int *right) {
    *left = 0;
    *right = width;
}
extern "C" void nocturne_widescreen_scene_to_screen(int width, int height, int scene_x,
                                                    int scene_y, int *out_x, int *out_y) {
    *out_x = (scene_x * width) / NOCTURNE_SCENE_WIDTH;
    *out_y = (scene_y * height) / NOCTURNE_SCENE_HEIGHT;
}

#endif // !NOCTURNE_AUTHENTIC_MENU
