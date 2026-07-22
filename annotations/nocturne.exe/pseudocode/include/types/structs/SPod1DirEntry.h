#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPod1DirEntry
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SPod1DirEntry {
    char filename[32]; // 0x0
    uint size; // 0x20
    uint offset; // 0x24
} SPod1DirEntry;
#pragma pack(pop)

