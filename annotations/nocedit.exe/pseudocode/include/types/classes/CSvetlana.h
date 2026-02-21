#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CSvetlana
// Ghidra size: 0x9f8d8 (653528 bytes)
typedef struct CSvetlana {
    CHero base; // 0x0
    int blades_drawn; // 0x1fbd4
    int attack_hand; // 0x1fbd8
    CCloth cape_cloth; // 0x1fbdc
    CCloth hair_cloth; // 0x5fa4c
    uint sfx_handle; // 0x9f8bc
    CVector3f head_euler_angles; // 0x9f8c0
    float head_blend_weight; // 0x9f8cc
    int part_l_blade; // 0x9f8d0
    int part_r_blade; // 0x9f8d4
} CSvetlana;

