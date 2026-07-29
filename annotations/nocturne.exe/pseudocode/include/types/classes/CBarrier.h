#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CBarrier
// Ghidra size: 0x228 (552 bytes)
#pragma pack(push, 1)
typedef struct CBarrier {
    CDemonActor base; // 0x0
    CVector3f size; // 0x150
    int add_to_path_grid; // 0x15c
    char effect_class_name_list[200]; // 0x160
} CBarrier;
#pragma pack(pop)

