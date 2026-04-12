#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SVertexData
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SVertexData {
    CVector3f vertex; // 0x0
    float u; // 0xc
    float v; // 0x10
} SVertexData;
#pragma pack(pop)

