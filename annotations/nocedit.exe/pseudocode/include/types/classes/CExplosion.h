#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CExplosion
// Ghidra size: 0x1c (28 bytes)
typedef struct CExplosion {
    CVector3f position; // 0x0
    float lifetime; // 0xc
    float scale; // 0x10
    int damage_amount; // 0x14
    int flip_flag; // 0x18
} CExplosion;

