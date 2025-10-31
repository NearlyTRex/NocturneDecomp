#pragma once

// Structure: SEdgeData
// Ghidra size: 0x48 (72 bytes)
typedef struct SEdgeData {
    int y_start; // 0x0
    int y_end; // 0x4
    int x_current; // 0x8
    int x_delta; // 0xc
    int light_current; // 0x10
    int light_delta; // 0x14
    int u_current; // 0x18
    int u_delta; // 0x1c
    int v_current; // 0x20
    int v_delta; // 0x24
    int z_current; // 0x28
    int z_delta; // 0x2c
    int w_recip_current; // 0x30
    int w_recip_delta; // 0x34
    int color_current; // 0x38
    int color_delta; // 0x3c
    int fog_current; // 0x40
    int fog_delta; // 0x44
} SEdgeData;

