#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3d.h"

// Structure: SSuperOptVertex
// Ghidra size: 0x38 (56 bytes)
typedef struct SSuperOptVertex {
    CVector3d position; // 0x0
    char unk1[24]; // 0x18
    uint flags; // 0x30
    int unk2; // 0x34
} SSuperOptVertex;

