#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CVector3f.h"

// Structure: SGem
// Ghidra size: 0xb8 (184 bytes)
#pragma pack(push, 1)
typedef struct SGem {
    CColor3f color; // 0x0
    CColor3f hum_color; // 0xc
    CColor3f light; // 0x18
    CVector3f position; // 0x24
    CVector3f rotation; // 0x30
    CDemonTriangle collision_tri_a; // 0x3c
    CDemonTriangle collision_tri_b; // 0x74
    uint sfx_handles[3]; // 0xac
} SGem;
#pragma pack(pop)

