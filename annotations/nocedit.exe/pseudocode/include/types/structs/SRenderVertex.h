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
    int light; // 0x20
    int color; // 0x24
    int fog; // 0x28
    float w_recip; // 0x2c
} SRenderVertex;

