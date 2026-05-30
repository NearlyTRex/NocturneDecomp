#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SVPHHeader
// Ghidra size: 0x36 (54 bytes)
#pragma pack(push, 1)
typedef struct SVPHHeader {
    short unk1; // 0x0
    int bone_count; // 0x2
    char unk2[48]; // 0x6
} SVPHHeader;
#pragma pack(pop)

