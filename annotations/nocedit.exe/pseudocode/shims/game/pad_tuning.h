#pragma once

// =============================================================================
// CONTROLLER TUNING IN NOCTURNE.INI
// =============================================================================
//
// An addition with no authentic side. How the sticks feel — the deadzone, the
// turn and look speeds, inverted look — is read from [Control] in the game's
// own INI, beside its mouse settings, so a player can change it without a
// rebuild, and a front end that runs before the game can set it by writing the
// file:
//
//   padDeadzone     percent of full deflection, 5..40
//   padTurnRate     full-deflection turn speed, percent of SPlayerInput's
//                   units (25 is the keyboard's), 5..100
//   padLookRate     the same for looking up and down
//   invertPadYAxis  1 to push the stick down to look up
//
// A key that is missing takes its default from shim_config_input.h; a value
// out of range is clamped to it, so a hand-edited file cannot leave the pad
// unusable. Read on first use and kept, until nocturne_pad_tuning_reload. The
// Control Options screen shows and steps them in gamepad mode.

struct NocturnePadTuning {
    float stick_deadzone;
    float turn_rate;
    float look_rate;
    int invert_look;
};

#ifdef __cplusplus
extern "C" {
#endif

// The tuning in effect.
const struct NocturnePadTuning *nocturne_pad_tuning(void);

// Forget what was read, so the next call reads the INI again: for a caller that
// has just written it.
void nocturne_pad_tuning_reload(void);

// The settings as the Control Options screen shows them, in this order.
enum {
    NOCTURNE_PAD_SETTING_DEADZONE,
    NOCTURNE_PAD_SETTING_TURN,
    NOCTURNE_PAD_SETTING_LOOK,
    NOCTURNE_PAD_SETTING_INVERT,
    NOCTURNE_PAD_SETTING_COUNT
};

// A setting's value as its INI key holds it: a percentage, or 0/1 for the
// inverted look.
int nocturne_pad_tuning_value(int setting);

// Step a setting by five in `direction` (-1 or 1), wrapping at the ends of its
// range as the screen's other stepped lines do, or flip the inverted look; then
// write it and read the INI again.
void nocturne_pad_tuning_step(int setting, int direction);

#ifdef __cplusplus
}
#endif
