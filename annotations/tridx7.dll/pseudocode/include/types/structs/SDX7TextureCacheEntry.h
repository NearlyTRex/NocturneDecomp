#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SDX7TextureCacheEntry
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct SDX7TextureCacheEntry {
    int slot; // 0x0
    char name[64]; // 0x4
    int lru_stamp; // 0x44
} SDX7TextureCacheEntry;
#pragma pack(pop)

