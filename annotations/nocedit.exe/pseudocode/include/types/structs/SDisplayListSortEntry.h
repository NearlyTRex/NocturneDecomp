#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: SDisplayListSortEntry
// Ghidra size: 0x8 (8 bytes)
typedef struct SDisplayListSortEntry {
    struct CDemonActor* actor; // 0x0
    float distance_sq; // 0x4
} SDisplayListSortEntry;

