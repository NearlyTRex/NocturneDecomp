#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CKeyActor
// Ghidra size: 0x314 (788 bytes)
#pragma pack(push, 1)
typedef struct CKeyActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int key_mask; // 0x2cc
    float rotation_angle; // 0x2d0
    CDemonGlobe globe; // 0x2d4
} CKeyActor;
#pragma pack(pop)

