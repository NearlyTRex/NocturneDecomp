#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SProjectedVertex.h"

// Structure: SRenderVertex
// Ghidra size: 0x30 (48 bytes)
typedef struct SRenderVertex {
    SProjectedVertex projected_vertex; // 0x0
    int u; // 0x18
    int v; // 0x1c
    int z; // 0x20
    int r; // 0x24
    int g; // 0x28
    int fog; // 0x2c
} SRenderVertex;

