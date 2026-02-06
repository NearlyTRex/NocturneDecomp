#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SLayerAction
// Ghidra size: 0x38 (56 bytes)
typedef struct SLayerAction {
    int from_bone_index; // 0x0
    int to_bone_index; // 0x4
    char motion_name[32]; // 0x8
    int direction; // 0x28
    int motion_index; // 0x2c
    int frame_count; // 0x30
    float duration; // 0x34
} SLayerAction;

