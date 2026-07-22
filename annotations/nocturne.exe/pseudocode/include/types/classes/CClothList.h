#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"

// Structure: CClothList
// Ghidra size: 0x1bc (444 bytes)
#pragma pack(push, 1)
typedef struct CClothList {
    int count; // 0x0
    char filenames[10][40]; // 0x4
    struct CCloth* cloths[10]; // 0x194
} CClothList;
#pragma pack(pop)

