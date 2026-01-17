#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SInteractionState
// Ghidra size: 0x2c (44 bytes)
typedef struct SInteractionState {
    int primary_action; // 0x0
    int field_4; // 0x4
    int secondary_action; // 0x8
    float action_multiplier; // 0xc
    int stop_flag; // 0x10
    int field_20; // 0x14
    int field_24; // 0x18
    int field_28; // 0x1c
    int field_32; // 0x20
    float timer_value; // 0x24
    int field_40; // 0x28
} SInteractionState;

