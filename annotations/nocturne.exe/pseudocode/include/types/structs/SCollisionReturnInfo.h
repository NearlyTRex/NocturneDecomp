#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SCollisionReturnInfo
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct SCollisionReturnInfo {
    CVector3f position; // 0x0
    char dead[16]; // 0xc
} SCollisionReturnInfo;
#pragma pack(pop)

