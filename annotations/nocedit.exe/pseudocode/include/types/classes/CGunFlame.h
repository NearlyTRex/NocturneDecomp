#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CGunFlame
// Ghidra size: 0x24 (36 bytes)
typedef struct CGunFlame {
    float lifetime; // 0x0
    CVector3f position; // 0x4
    CVector3f velocity; // 0x10
    float anim_frame; // 0x1c
    int flame_type; // 0x20
} CGunFlame;

