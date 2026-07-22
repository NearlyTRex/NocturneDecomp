#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SCoronaLightEntry.h"

// Structure: SCoronaLightCache
// Ghidra size: 0x99c24 (629796 bytes)
#pragma pack(push, 1)
typedef struct SCoronaLightCache {
    int count; // 0x0
    SCoronaLightEntry entries[8]; // 0x4
} SCoronaLightCache;
#pragma pack(pop)

