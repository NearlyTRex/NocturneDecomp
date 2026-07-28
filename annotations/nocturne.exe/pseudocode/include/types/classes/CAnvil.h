#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CAnvil
// Ghidra size: 0x33c (828 bytes)
#pragma pack(push, 1)
typedef struct CAnvil {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    char drop_condition[100]; // 0x2cc
    float drop_height; // 0x330
    int triggered; // 0x334
    float yvel; // 0x338
} CAnvil;
#pragma pack(pop)

