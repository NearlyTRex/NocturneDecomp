#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CCrate
// Ghidra size: 0x2fc (764 bytes)
typedef struct CCrate {
    CDemonActor base; // 0x0
    char* model_name; // 0x158
    char unk1[384]; // 0x15c
    int last_platform; // 0x2dc
    char unk2[28]; // 0x2e0
} CCrate;

