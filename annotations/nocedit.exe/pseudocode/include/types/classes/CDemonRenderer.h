#pragma once

// Forward declarations
struct SRenderVertex;

// Dependencies
#include "system/basetypes.h"

// Structure: CDemonRenderer
// Ghidra size: 0x24 (36 bytes)
typedef struct CDemonRenderer {
    struct SRenderVertex* vertex_buffer_ptr; // 0x0
    int face_count; // 0x4
    int projection_mode; // 0x8
    int plane_culling_enabled; // 0xc
    int face_capture_enabled; // 0x10
    int alpha_mask; // 0x14
    int advanced_culling_enabled; // 0x18
    int texture_capture_enabled; // 0x1c
    int field_32; // 0x20
} CDemonRenderer;

