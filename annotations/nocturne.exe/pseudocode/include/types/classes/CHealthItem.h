#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CHealthItem
// Ghidra size: 0x2d4 (724 bytes)
#pragma pack(push, 1)
typedef struct CHealthItem {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int use_count; // 0x2cc
    float hp_restored; // 0x2d0
} CHealthItem;
#pragma pack(pop)

