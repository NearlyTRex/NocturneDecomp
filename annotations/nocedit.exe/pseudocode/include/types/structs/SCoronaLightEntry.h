#pragma once

// Forward declarations
struct CDemonGlobe;

// Dependencies
#include "system/basetypes.h"

// Structure: SCoronaLightEntry
// Ghidra size: 0x13384 (78724 bytes)
typedef struct SCoronaLightEntry {
    struct CDemonGlobe* globe; // 0x0
    int left_extents[240]; // 0x4
    int right_extents[240]; // 0x3c4
    char lightmap[240][320]; // 0x784
} SCoronaLightEntry;

