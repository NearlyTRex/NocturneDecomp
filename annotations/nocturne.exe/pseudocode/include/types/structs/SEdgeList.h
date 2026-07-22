#pragma once

// Forward declarations
struct SEdge;

// Dependencies
#include "system/basetypes.h"

// Structure: SEdgeList
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SEdgeList {
    struct SEdge* edge_data; // 0x0
    int edge_count; // 0x4
} SEdgeList;
#pragma pack(pop)

