#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CLadder
// Ghidra size: 0x300 (768 bytes)
typedef struct CLadder {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    CVector3f ladder_size; // 0x2d4
    struct CDemonActor* master_actor; // 0x2e0
    char unk1[24]; // 0x2e4
    int ground_type; // 0x2fc
} CLadder;

