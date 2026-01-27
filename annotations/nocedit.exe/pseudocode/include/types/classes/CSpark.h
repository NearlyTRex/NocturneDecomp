#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"

// Structure: CSpark
// Ghidra size: 0x4c (76 bytes)
typedef struct CSpark {
    CParticle base; // 0x0
    int intensity_current; // 0x38
    int intensity_target; // 0x3c
    int first_update_flag; // 0x40
    int unk; // 0x44
    int fade_rate; // 0x48
} CSpark;

