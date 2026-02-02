#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SActionKeyBindings
// Ghidra size: 0x20 (32 bytes)
typedef struct SActionKeyBindings {
    int walk_key; // 0x0
    int backup_key; // 0x4
    int run_key; // 0x8
    int fire_key; // 0xc
    int use_item_key; // 0x10
    int light_key; // 0x14
    int draw_key; // 0x18
    int jump_key; // 0x1c
} SActionKeyBindings;

