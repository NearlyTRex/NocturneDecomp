#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFlameCan
// Ghidra size: 0x5e8 (1512 bytes)
typedef struct CFlameCan {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int on_fire; // 0x2d4
    float time_to_explode; // 0x2d8
    int on_fire_condition; // 0x2dc
    char unk[776]; // 0x2e0
} CFlameCan;

