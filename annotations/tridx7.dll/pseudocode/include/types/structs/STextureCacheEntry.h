#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STextureCacheEntry
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct STextureCacheEntry {
    int slot; // 0x0
    char name[64]; // 0x4
    int lru_stamp; // 0x44
} STextureCacheEntry;
#pragma pack(pop)

