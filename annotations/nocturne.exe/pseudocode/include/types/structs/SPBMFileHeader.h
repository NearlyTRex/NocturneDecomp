#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPBMFileHeader
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct SPBMFileHeader {
    char magic[4]; // 0x0
    int width; // 0x4
    int height; // 0x8
    int reserved1; // 0xc
    int reserved2; // 0x10
    int right_max; // 0x14
    int bottom_max; // 0x18
} SPBMFileHeader;
#pragma pack(pop)

