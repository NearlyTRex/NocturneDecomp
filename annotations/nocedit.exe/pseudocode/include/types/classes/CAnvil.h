#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CAnvil
// Ghidra size: 0x344 (836 bytes)
#pragma pack(push, 1)
typedef struct CAnvil {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char drop_condition[100]; // 0x2d4
    float drop_height; // 0x338
    int triggered; // 0x33c
    float yvel; // 0x340
} CAnvil;
#pragma pack(pop)

