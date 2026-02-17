#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"

// Structure: CBloodParticle
// Ghidra size: 0x40 (64 bytes)
typedef struct CBloodParticle {
    CParticle base; // 0x0
    int blood_type; // 0x38
    int texture_index; // 0x3c
} CBloodParticle;

