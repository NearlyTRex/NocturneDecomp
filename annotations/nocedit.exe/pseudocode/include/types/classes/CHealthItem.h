#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CHealthItem
// Ghidra size: 0x2dc (732 bytes)
#pragma pack(push, 1)
typedef struct CHealthItem {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int use_count; // 0x2d4
    float hp_restored; // 0x2d8
} CHealthItem;
#pragma pack(pop)

