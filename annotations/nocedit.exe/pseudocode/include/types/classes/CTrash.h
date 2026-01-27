#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTrash
// Ghidra size: 0x328 (808 bytes)
typedef struct CTrash {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    CVector3f home_pos; // 0x2d4
    char unk[72]; // 0x2e0
} CTrash;

