#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SEpdHeader
// Ghidra size: 0x110 (272 bytes)
#pragma pack(push, 1)
typedef struct SEpdHeader {
    byte header_data[4]; // 0x0
    char description[256]; // 0x4
    int file_count; // 0x104
    byte unk1[8]; // 0x108
} SEpdHeader;
#pragma pack(pop)

