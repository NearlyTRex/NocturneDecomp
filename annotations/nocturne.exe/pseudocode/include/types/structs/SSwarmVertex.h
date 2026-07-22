#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSwarmVertex
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SSwarmVertex {
    int edge_count; // 0x0
    int first_edge_data; // 0x4
    int neighbors[8]; // 0x8
} SSwarmVertex;
#pragma pack(pop)

