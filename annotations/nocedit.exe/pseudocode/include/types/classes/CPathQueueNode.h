#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPathQueueNode
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct CPathQueueNode {
    int x; // 0x0
    int cost; // 0x4
    int z; // 0x8
} CPathQueueNode;
#pragma pack(pop)

