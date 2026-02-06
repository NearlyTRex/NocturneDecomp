#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SClothVertex
// Ghidra size: 0x11c (284 bytes)
typedef struct SClothVertex {
    CVector3f position; // 0x0
    CVector3f force; // 0xc
    CVector3f velocity; // 0x18
    CVector3f secondary_velocity; // 0x24
    int connected_count; // 0x30
    int connected_indices[16]; // 0x34
    int locked; // 0x74
    float rest_lengths[16]; // 0x78
    int body_collision; // 0xb8
    int floor_collision; // 0xbc
    CVector3f offset_pos; // 0xc0
    CVector3f prev_position; // 0xcc
    char bone_indices[4]; // 0xd8
    int bone_influence_count; // 0xdc
    int primary_bone_index; // 0xe0
    char unk2[8]; // 0xe4
    CVector3f bone_positions[3]; // 0xec
    float bone_weights[3]; // 0x110
} SClothVertex;

