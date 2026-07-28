#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CFlame.h"
#include "types/classes/CVector3f.h"

// Structure: SBodyPartFire
// Ghidra size: 0x2a8 (680 bytes)
#pragma pack(push, 1)
typedef struct SBodyPartFire {
    CVector3f local_position; // 0x0
    CFlame flame; // 0xc
} SBodyPartFire;
#pragma pack(pop)

