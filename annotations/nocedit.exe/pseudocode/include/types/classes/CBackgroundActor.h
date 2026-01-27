#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBackgroundActor
// Ghidra size: 0x2dc (732 bytes)
typedef struct CBackgroundActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int collide_with_me; // 0x2d4
    int ground_type; // 0x2d8
} CBackgroundActor;

