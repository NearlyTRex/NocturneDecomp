#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SClothVertex
// Ghidra size: 0x11c (284 bytes)
typedef struct SClothVertex {
    char unk1[236]; // 0x0
    CVector3f unk2[3]; // 0xec
    char unk3[12]; // 0x110
} SClothVertex;

