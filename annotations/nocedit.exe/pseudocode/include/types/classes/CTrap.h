#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CTrap
// Ghidra size: 0x2dc (732 bytes)
typedef struct CTrap {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
    int wolf_in_trap; // 0x2d8
} CTrap;

