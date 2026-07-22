#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CFootstep
// Ghidra size: 0x40 (64 bytes)
#pragma pack(push, 1)
typedef struct CFootstep {
    int expired; // 0x0
    int blood_type; // 0x4
    CVector3f corners[4]; // 0x8
    int alpha; // 0x38
    int is_bloody; // 0x3c
} CFootstep;
#pragma pack(pop)

