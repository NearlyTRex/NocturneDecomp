#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CVector3f.h"

// Structure: CMuzzleFlash
// Ghidra size: 0x5c (92 bytes)
#pragma pack(push, 1)
typedef struct CMuzzleFlash {
    int frames_remaining; // 0x0
    CVector3f position; // 0x4
    CVector3f rotation; // 0x10
    CDemonGlobe light; // 0x1c
} CMuzzleFlash;
#pragma pack(pop)

