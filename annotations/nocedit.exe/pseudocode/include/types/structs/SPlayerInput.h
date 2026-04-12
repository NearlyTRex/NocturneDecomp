#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SPlayerActionState.h"

// Structure: SPlayerInput
// Ghidra size: 0x2c (44 bytes)
#pragma pack(push, 1)
typedef struct SPlayerInput {
    SPlayerActionState action_state; // 0x0
    float strafe_speed; // 0x20
    float turn_speed; // 0x24
    float look_up_down_speed; // 0x28
} SPlayerInput;
#pragma pack(pop)

