#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CLocation
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct CLocation {
    CVector3f position; // 0x0
    int area_id; // 0xc
} CLocation;
#pragma pack(pop)

