#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SChainVertex
// Ghidra size: 0x24 (36 bytes)
typedef struct SChainVertex {
    CVector3f position; // 0x0
    CVector3f velocity; // 0xc
    CVector3f prev_position; // 0x18
} SChainVertex;

