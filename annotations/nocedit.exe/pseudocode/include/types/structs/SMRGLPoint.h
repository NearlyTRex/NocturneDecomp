#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"

// Structure: SMRGLPoint
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPoint {
    int type; // 0x0
    CVector3i point; // 0x4
} SMRGLPoint;
#pragma pack(pop)

