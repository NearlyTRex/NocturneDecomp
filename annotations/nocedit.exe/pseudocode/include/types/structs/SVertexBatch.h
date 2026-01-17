#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"

// Structure: SVertexBatch
// Ghidra size: 0x1c (28 bytes)
typedef struct SVertexBatch {
    int primitive_type; // 0x0
    int render_queue_index; // 0x4
    int vertex_count; // 0x8
    CVector3i vertex_buffer; // 0xc
    void** field_24; // 0x18
} SVertexBatch;

