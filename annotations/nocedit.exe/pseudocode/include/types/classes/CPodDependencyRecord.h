#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPodDependencyRecord
// Ghidra size: 0x108 (264 bytes)
#pragma pack(push, 1)
typedef struct CPodDependencyRecord {
    char filename[256]; // 0x0
    int mount_order; // 0x100
    int is_required; // 0x104
} CPodDependencyRecord;
#pragma pack(pop)

