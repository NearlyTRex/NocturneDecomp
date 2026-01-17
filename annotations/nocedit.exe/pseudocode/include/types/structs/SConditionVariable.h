#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SConditionVariable
// Ghidra size: 0x8 (8 bytes)
typedef struct SConditionVariable {
    struct SConditionVariable* next; // 0x0
    uint name_hash; // 0x4
} SConditionVariable;

