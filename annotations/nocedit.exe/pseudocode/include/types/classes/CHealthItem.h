#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CHealthItem
// Ghidra size: 0x2dc (732 bytes)
typedef struct CHealthItem {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[376]; // 0x15c
    int use_count; // 0x2d4
    float hp_restored; // 0x2d8
} CHealthItem;

