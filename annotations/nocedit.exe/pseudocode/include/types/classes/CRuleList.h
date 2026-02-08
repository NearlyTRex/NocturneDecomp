#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CRuleList
// Ghidra size: 0x3ec (1004 bytes)
typedef struct CRuleList {
    int list_size; // 0x0
    char conditions[5][100]; // 0x4
    char events[5][100]; // 0x1f8
} CRuleList;

