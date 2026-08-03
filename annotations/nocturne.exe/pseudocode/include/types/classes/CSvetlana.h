#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CSvetlana
// Ghidra size: 0x950c0 (610496 bytes)
#pragma pack(push, 1)
typedef struct CSvetlana {
    CHero base; // 0x0
    int blades_drawn; // 0x1fa3c
    int attack_hand; // 0x1fa40
    CCloth cape_cloth; // 0x1fa44
    CCloth hair_cloth; // 0x5a574
    uint sfx_handle; // 0x950a4
    CVector3f head_euler_angles; // 0x950a8
    float head_blend_weight; // 0x950b4
    int part_indices[2]; // 0x950b8
} CSvetlana;
#pragma pack(pop)

