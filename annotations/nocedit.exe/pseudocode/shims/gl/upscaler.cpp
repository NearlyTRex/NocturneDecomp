// =============================================================================
// UPSCALER — implementation
// =============================================================================
//
// See upscaler.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.

#include "gl/upscaler.h"

#include "core/ini_setting.h"
#include "shim_config.h"

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

// Same section the window mode option uses.
const char kIniSection[] = "Graphics";
const char kModeKey[] = "upscaler";
const char kSharpnessKey[] = "fsrSharpness";

const int kSharpnessSteps = NOCTURNE_UPSCALER_SHARPNESS_MAX / NOCTURNE_UPSCALER_SHARPNESS_STEP + 1;

int s_mode = NOCTURNE_UPSCALER_STANDARD;
bool s_mode_loaded = false;
int s_sharpness = NOCTURNE_UPSCALER_SHARPNESS_DEFAULT;
bool s_sharpness_loaded = false;

// A negative value is a large unsigned one, so one comparison bounds both ends.
int clamp_mode(int mode) {
    if ((unsigned)mode >= (unsigned)NOCTURNE_UPSCALER_COUNT)
        return NOCTURNE_UPSCALER_STANDARD;
    return mode;
}

int clamp_sharpness(int percent) {
    if ((unsigned)percent > (unsigned)NOCTURNE_UPSCALER_SHARPNESS_MAX)
        return NOCTURNE_UPSCALER_SHARPNESS_DEFAULT;
    return percent;
}

} // namespace

extern "C" int nocturne_upscaler_get(void) {
    if (!s_mode_loaded) {
        s_mode =
            clamp_mode(nocturne_ini_get_int(kIniSection, kModeKey, NOCTURNE_UPSCALER_STANDARD));
        s_mode_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_upscaler_cycle(int step) {
    s_mode = nocturne_ini_cycle(nocturne_upscaler_get(), step, NOCTURNE_UPSCALER_COUNT);
    nocturne_ini_set_int(kIniSection, kModeKey, s_mode);
    return s_mode;
}

extern "C" const char *nocturne_upscaler_name(int mode) {
    return mode == NOCTURNE_UPSCALER_FSR ? "FSR" : "Standard";
}

extern "C" int nocturne_upscaler_sharpness_get(void) {
    if (!s_sharpness_loaded) {
        s_sharpness = clamp_sharpness(
            nocturne_ini_get_int(kIniSection, kSharpnessKey, NOCTURNE_UPSCALER_SHARPNESS_DEFAULT));
        s_sharpness_loaded = true;
    }
    return s_sharpness;
}

extern "C" int nocturne_upscaler_sharpness_cycle(int step) {
    const int index = nocturne_upscaler_sharpness_get() / NOCTURNE_UPSCALER_SHARPNESS_STEP;
    s_sharpness =
        nocturne_ini_cycle(index, step, kSharpnessSteps) * NOCTURNE_UPSCALER_SHARPNESS_STEP;
    nocturne_ini_set_int(kIniSection, kSharpnessKey, s_sharpness);
    return s_sharpness;
}

#else

extern "C" int nocturne_upscaler_get(void) {
    return NOCTURNE_UPSCALER_STANDARD;
}
extern "C" int nocturne_upscaler_cycle(int) {
    return NOCTURNE_UPSCALER_STANDARD;
}
extern "C" const char *nocturne_upscaler_name(int) {
    return "Standard";
}
extern "C" int nocturne_upscaler_sharpness_get(void) {
    return NOCTURNE_UPSCALER_SHARPNESS_DEFAULT;
}
extern "C" int nocturne_upscaler_sharpness_cycle(int) {
    return NOCTURNE_UPSCALER_SHARPNESS_DEFAULT;
}

#endif // !NOCTURNE_AUTHENTIC_MENU
