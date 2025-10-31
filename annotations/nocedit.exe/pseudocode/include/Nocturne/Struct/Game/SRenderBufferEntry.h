#pragma once

// Structure: SRenderBufferEntry
// Ghidra size: 0x118 (280 bytes)
typedef struct SRenderBufferEntry {
    int vertex_count; // 0x0
    SRenderVertex vertices[4]; // 0x4
    SMRGLTextureBasic* texture_data[18]; // 0xc4
    int alpha_value; // 0x10c
    int blend_mode; // 0x110
    int min_z_value; // 0x114
} SRenderBufferEntry;

