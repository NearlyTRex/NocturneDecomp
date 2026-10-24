// =============================================================================
// CONTROLLER TUNING IN NOCTURNE.INI — implementation
// =============================================================================
//
// See pad_tuning.h.

#include "game/pad_tuning.h"
#include "shim_config.h"
#include "core/ini_setting.h"

#include <cmath>

namespace {

// Beside the game's own input settings.
const char kIniSection[] = "Control";

NocturnePadTuning s_tuning;
bool s_loaded = false;

// A percentage from the INI, its default the macro's fraction.
float read_percent(const char *key, float fallback, int low, int high) {
    int percent = nocturne_ini_get_int(kIniSection, key, (int)std::lround(fallback * 100.0f));
    if (percent < low)  percent = low;
    if (percent > high) percent = high;
    return (float)percent / 100.0f;
}

} // namespace

extern "C" const NocturnePadTuning *nocturne_pad_tuning(void) {
    if (!s_loaded) {
        s_tuning.stick_deadzone = read_percent("padDeadzone", NOCTURNE_PAD_STICK_DEADZONE, 5, 40);
        s_tuning.turn_rate = read_percent("padTurnRate", NOCTURNE_PAD_TURN_RATE, 5, 100);
        s_tuning.look_rate = read_percent("padLookRate", NOCTURNE_PAD_LOOK_RATE, 5, 100);
        s_tuning.invert_look =
            nocturne_ini_get_int(kIniSection, "invertPadYAxis", NOCTURNE_PAD_INVERT_LOOK) != 0;
        s_loaded = true;
    }
    return &s_tuning;
}

extern "C" void nocturne_pad_tuning_reload(void) {
    s_loaded = false;
}
