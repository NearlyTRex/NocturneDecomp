#pragma once

// Structure: STexturedVertex
// Ghidra size: 0x44 (68 bytes)
typedef struct STexturedVertex {
    char field_0[8]; // 0x0
    int screen_x; // 0x8
    char field_12[4]; // 0xc
    int vertex_red; // 0x10
    char field_20[4]; // 0x14
    int texture_u; // 0x18
    char field_28[4]; // 0x1c
    int texture_v; // 0x20
    char field_36[4]; // 0x24
    int perspective_w; // 0x28
    char field_44[4]; // 0x2c
    int vertex_alpha; // 0x30
    char field_52[4]; // 0x34
    int vertex_green; // 0x38
    char field_60[4]; // 0x3c
    int vertex_blue; // 0x40
} STexturedVertex;

