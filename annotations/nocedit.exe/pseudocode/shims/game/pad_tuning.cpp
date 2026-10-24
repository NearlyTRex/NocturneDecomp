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

// The percentage settings: key and range, in NOCTURNE_PAD_SETTING_* order.
struct Range {
    const char *key;
    int low;
    int high;
};
const Range kRanges[] = {
    {"padDeadzone", 5, 40},
    {"padTurnRate", 5, 100},
    {"padLookRate", 5, 100},
};
const char kInvertKey[] = "invertPadYAxis";
const int kStep = 5;

int percent_of(float fraction) { return (int)std::lround(fraction * 100.0f); }

// A percentage from the INI, its default the macro's fraction.
float read_percent(int setting, float fallback) {
    const Range &range = kRanges[setting];
    int percent = nocturne_ini_get_int(kIniSection, range.key, percent_of(fallback));
    if (percent < range.low)  percent = range.low;
    if (percent > range.high) percent = range.high;
    return (float)percent / 100.0f;
}

} // namespace

extern "C" const NocturnePadTuning *nocturne_pad_tuning(void) {
    if (!s_loaded) {
        s_tuning.stick_deadzone =
            read_percent(NOCTURNE_PAD_SETTING_DEADZONE, NOCTURNE_PAD_STICK_DEADZONE);
        s_tuning.turn_rate = read_percent(NOCTURNE_PAD_SETTING_TURN, NOCTURNE_PAD_TURN_RATE);
        s_tuning.look_rate = read_percent(NOCTURNE_PAD_SETTING_LOOK, NOCTURNE_PAD_LOOK_RATE);
        s_tuning.invert_look =
            nocturne_ini_get_int(kIniSection, kInvertKey, NOCTURNE_PAD_INVERT_LOOK) != 0;
        s_loaded = true;
    }
    return &s_tuning;
}

extern "C" void nocturne_pad_tuning_reload(void) {
    s_loaded = false;
}

extern "C" int nocturne_pad_tuning_value(int setting) {
    const NocturnePadTuning *tuning = nocturne_pad_tuning();
    switch (setting) {
    case NOCTURNE_PAD_SETTING_DEADZONE: return percent_of(tuning->stick_deadzone);
    case NOCTURNE_PAD_SETTING_TURN:     return percent_of(tuning->turn_rate);
    case NOCTURNE_PAD_SETTING_LOOK:     return percent_of(tuning->look_rate);
    default:                            return tuning->invert_look;
    }
}

extern "C" void nocturne_pad_tuning_step(int setting, int direction) {
    if (setting == NOCTURNE_PAD_SETTING_INVERT) {
        nocturne_ini_set_int(kIniSection, kInvertKey, nocturne_pad_tuning_value(setting) == 0);
    }
    else {
        const Range &range = kRanges[setting];
        int percent = nocturne_pad_tuning_value(setting) + ((direction < 0) ? -kStep : kStep);
        if (percent > range.high) percent = range.low;
        if (percent < range.low)  percent = range.high;
        nocturne_ini_set_int(kIniSection, range.key, percent);
    }
    nocturne_pad_tuning_reload();
}
