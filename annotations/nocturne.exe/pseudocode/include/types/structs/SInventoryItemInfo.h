#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SInventoryItemInfo
// Ghidra size: 0x300 (768 bytes)
#pragma pack(push, 1)
typedef struct SInventoryItemInfo {
    char model_name[256]; // 0x0
    char display_name[256]; // 0x100
    char description[256]; // 0x200
} SInventoryItemInfo;
#pragma pack(pop)

