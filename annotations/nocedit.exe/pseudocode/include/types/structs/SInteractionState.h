#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SInteractionState
// Ghidra size: 0x2c (44 bytes)
typedef struct SInteractionState {
    int primary_action; // 0x0
    int unk1; // 0x4
    int secondary_action; // 0x8
    float action_multiplier; // 0xc
    int stop_flag; // 0x10
    int unk2; // 0x14
    int unk3; // 0x18
    int unk4; // 0x1c
    int unk5; // 0x20
    float timer_value; // 0x24
    int unk6; // 0x28
} SInteractionState;

