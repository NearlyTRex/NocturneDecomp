#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPodDependencyRecord
// Ghidra size: 0x108 (264 bytes)
typedef struct CPodDependencyRecord {
    char filename[256]; // 0x0
    int has_dependencies; // 0x100
    char unknown[4]; // 0x104
} CPodDependencyRecord;

