#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SActionKeyBindings.h"

// Structure: SPlayerControl
// Ghidra size: 0x2c (44 bytes)
typedef struct SPlayerControl {
    SActionKeyBindings action_bindings; // 0x0
    float strafe_speed; // 0x20
    float turn_speed; // 0x24
    float look_up_down_speed; // 0x28
} SPlayerControl;

