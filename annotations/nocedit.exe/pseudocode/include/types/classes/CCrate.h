#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CCrate
// Ghidra size: 0x2fc (764 bytes)
typedef struct CCrate {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
    int unk2; // 0x2d8
    struct CDemonActor* last_platform; // 0x2dc
    char unk3[28]; // 0x2e0
} CCrate;

