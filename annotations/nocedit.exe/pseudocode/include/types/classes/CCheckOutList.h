#pragma once

// Forward declarations
struct CCheckOutItem;

// Dependencies
#include "system/basetypes.h"

// Structure: CCheckOutList
// Ghidra size: 0x8 (8 bytes)
typedef struct CCheckOutList {
    int count; // 0x0
    struct CCheckOutItem* items; // 0x4
} CCheckOutList;

