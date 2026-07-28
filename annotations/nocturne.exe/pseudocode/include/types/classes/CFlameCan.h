#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFlameCan
// Ghidra size: 0x5d8 (1496 bytes)
#pragma pack(push, 1)
typedef struct CFlameCan {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int on_fire; // 0x2cc
    float time_to_explode; // 0x2d0
    char on_fire_condition[100]; // 0x2d4
    CFlame flame; // 0x338
    int is_visible; // 0x5d4
} CFlameCan;
#pragma pack(pop)

