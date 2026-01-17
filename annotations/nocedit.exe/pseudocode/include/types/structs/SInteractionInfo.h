#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SInteractionInfo
// Ghidra size: 0x20 (32 bytes)
typedef struct SInteractionInfo {
    int can_interact; // 0x0
    int reference_data; // 0x4
    float distance_min; // 0x8
    float distance_max; // 0xc
    float yaw_min; // 0x10
    float yaw_max; // 0x14
    float pitch_min; // 0x18
    float pitch_max; // 0x1c
} SInteractionInfo;

