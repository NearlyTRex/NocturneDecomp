#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CKeyActor
// Ghidra size: 0x31c (796 bytes)
typedef struct CKeyActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int key_mask; // 0x2d4
    char unk[68]; // 0x2d8
} CKeyActor;

