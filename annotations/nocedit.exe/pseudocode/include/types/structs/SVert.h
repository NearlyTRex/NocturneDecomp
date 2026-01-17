#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SVert
// Ghidra size: 0x34 (52 bytes)
typedef struct SVert {
    uchar num_bone_influences; // 0x0
    uchar bone_indices[3]; // 0x1
    float bone_weights[3]; // 0x4
    CVector3f position; // 0x10
    CVector3f normal; // 0x1c
    CVector3f tangent; // 0x28
} SVert;

