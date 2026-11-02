// =============================================================================
// ANTI-ALIASING — implementation
// =============================================================================
//
// See antialias.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.
// The programs are in antialias_shaders.cpp.

#include "gl/antialias.h"

#include "core/ini_setting.h"
#include "shim_config.h"

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

// Same section the window mode and upscaler options use.
const char kIniSection[] = "Graphics";
const char kModeKey[] = "antialias";

int s_mode = NOCTURNE_ANTIALIAS_OFF;
bool s_mode_loaded = false;

// A negative value is a large unsigned one, so one comparison bounds both ends.
int clamp_mode(int mode) {
    if ((unsigned)mode >= (unsigned)NOCTURNE_ANTIALIAS_COUNT)
        return NOCTURNE_ANTIALIAS_OFF;
    return mode;
}

} // namespace

extern "C" int nocturne_antialias_get(void) {
    if (!s_mode_loaded) {
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kModeKey, NOCTURNE_ANTIALIAS_OFF));
        s_mode_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_antialias_cycle(int step) {
    s_mode = nocturne_ini_cycle(nocturne_antialias_get(), step, NOCTURNE_ANTIALIAS_COUNT);
    nocturne_ini_set_int(kIniSection, kModeKey, s_mode);
    return s_mode;
}

extern "C" const char *nocturne_antialias_name(int mode) {
    static const char *const kNames[NOCTURNE_ANTIALIAS_COUNT] = {"Off", "FXAA"};
    return kNames[clamp_mode(mode)];
}

#else

extern "C" int nocturne_antialias_get(void) {
    return NOCTURNE_ANTIALIAS_OFF;
}
extern "C" int nocturne_antialias_cycle(int) {
    return NOCTURNE_ANTIALIAS_OFF;
}
extern "C" const char *nocturne_antialias_name(int) {
    return "Off";
}

#endif // !NOCTURNE_AUTHENTIC_MENU
