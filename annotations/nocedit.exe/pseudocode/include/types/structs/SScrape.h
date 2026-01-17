#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SScrape
// Ghidra size: 0x34 (52 bytes)
typedef struct SScrape {
    CVector3f local_position; // 0x0
    CVector3f transformed_position; // 0xc
    CVector3f previous_position; // 0x18
    float raytrace_intersection; // 0x24
    CVector3f raytrace_normal; // 0x28
} SScrape;

