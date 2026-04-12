#pragma once

// Forward declarations
struct CCheckOutItem;

// Dependencies
#include "system/basetypes.h"

// Structure: CCheckOutList
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct CCheckOutList {
    int count; // 0x0
    struct CCheckOutItem* items; // 0x4
} CCheckOutList;
#pragma pack(pop)

