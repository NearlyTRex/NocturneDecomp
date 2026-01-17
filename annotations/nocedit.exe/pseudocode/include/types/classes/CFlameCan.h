#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CFlameCan
// Ghidra size: 0x5e8 (1512 bytes)
typedef struct CFlameCan {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[376]; // 0x15c
    int on_fire; // 0x2d4
    float time_to_explode; // 0x2d8
    int on_fire_condition; // 0x2dc
    char field_736[776]; // 0x2e0
} CFlameCan;

