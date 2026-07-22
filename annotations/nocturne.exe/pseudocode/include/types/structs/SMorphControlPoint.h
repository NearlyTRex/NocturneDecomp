#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SMorphControlPoint
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SMorphControlPoint {
    int vertex_index[2]; // 0x0
    CVector3f position[2]; // 0x8
} SMorphControlPoint;
#pragma pack(pop)

