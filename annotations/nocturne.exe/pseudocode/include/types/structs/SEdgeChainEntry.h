#pragma once

// Forward declarations
struct SExpandedEdge;

// Dependencies
#include "system/basetypes.h"

// Structure: SEdgeChainEntry
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SEdgeChainEntry {
    int edge_count; // 0x0
    struct SExpandedEdge* edges; // 0x4
} SEdgeChainEntry;
#pragma pack(pop)

