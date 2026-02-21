#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFlameCan
// Ghidra size: 0x5e8 (1512 bytes)
typedef struct CFlameCan {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int on_fire; // 0x2d4
    float time_to_explode; // 0x2d8
    char on_fire_condition[100]; // 0x2dc
    CFlame flame; // 0x340
    int is_visible; // 0x5e4
} CFlameCan;

