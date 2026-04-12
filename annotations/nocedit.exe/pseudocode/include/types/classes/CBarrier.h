#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CBarrier
// Ghidra size: 0x230 (560 bytes)
#pragma pack(push, 1)
typedef struct CBarrier {
    CDemonActor base; // 0x0
    CVector3f size; // 0x158
    int add_to_path_grid; // 0x164
    char effect_class_name_list[200]; // 0x168
} CBarrier;
#pragma pack(pop)

