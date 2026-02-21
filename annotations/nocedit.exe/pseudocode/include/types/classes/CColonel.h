#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CColonel
// Ghidra size: 0x1fbec (130028 bytes)
typedef struct CColonel {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    int unk; // 0x1fbd8
    CVector3f head_look_euler; // 0x1fbdc
    float head_look_blend_weight; // 0x1fbe8
} CColonel;

