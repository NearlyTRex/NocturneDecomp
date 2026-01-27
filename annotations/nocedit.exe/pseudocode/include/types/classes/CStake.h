#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"

// Structure: CStake
// Ghidra size: 0x260 (608 bytes)
typedef struct CStake {
    int active; // 0x0
    CBox box; // 0x4
    int unk; // 0x25c
} CStake;

