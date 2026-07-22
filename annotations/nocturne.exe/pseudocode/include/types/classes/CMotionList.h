#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMotion.h"

// Structure: CMotionList
// Ghidra size: 0x28508 (165128 bytes)
#pragma pack(push, 1)
typedef struct CMotionList {
    int state_count; // 0x0
    char state_names[80][30]; // 0x4
    int motion_count; // 0x964
    SMotion motions[120]; // 0x968
} CMotionList;
#pragma pack(pop)

