#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SEpdDirEntry
// Ghidra size: 0x50 (80 bytes)
#pragma pack(push, 1)
typedef struct SEpdDirEntry {
    char filename[64]; // 0x0
    uint size; // 0x40
    uint offset; // 0x44
    uint unk1; // 0x48
    uint checksum; // 0x4c
} SEpdDirEntry;
#pragma pack(pop)

