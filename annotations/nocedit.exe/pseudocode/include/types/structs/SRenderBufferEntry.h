#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLTextureLod.h"
#include "types/structs/SRenderVertex.h"

// Structure: SRenderBufferEntry
// Ghidra size: 0x118 (280 bytes)
#pragma pack(push, 1)
typedef struct SRenderBufferEntry {
    int vertex_count; // 0x0
    SRenderVertex vertices[4]; // 0x4
    SMRGLTextureLod texture_data; // 0xc4
    int alpha_value; // 0x10c
    int blend_mode; // 0x110
    int min_z_value; // 0x114
} SRenderBufferEntry;
#pragma pack(pop)

