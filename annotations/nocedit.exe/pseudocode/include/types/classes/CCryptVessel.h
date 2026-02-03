#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CCryptVessel
// Ghidra size: 0x7f4 (2036 bytes)
typedef struct CCryptVessel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int unk2; // 0x2d4
    int prey; // 0x2d8
    int neutral; // 0x2dc
    char destroyed_event[100]; // 0x2e0
    char win_event[100]; // 0x344
    char start_loc[4]; // 0x3a8
    char end_loc[4]; // 0x3ac
    float eat_distance; // 0x3b0
    int visual_type; // 0x3b4
    int state; // 0x3b8
    float timer; // 0x3bc
    char unk3[1076]; // 0x3c0
} CCryptVessel;

