#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SMorphPoint
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SMorphPoint {
    int vertex_index; // 0x0
    CVector3f position; // 0x4
} SMorphPoint;
#pragma pack(pop)

