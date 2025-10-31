#pragma once

// Structure: SInputFace
// Ghidra size: 0x12 (18 bytes)
typedef struct SInputFace {
    STrianglePackedIndices vertex_indices; // 0x0
    ushort u_coord_0; // 0x6
    ushort u_coord_1; // 0x8
    ushort u_coord_2; // 0xa
    ushort v_coord_0; // 0xc
    ushort v_coord_1; // 0xe
    ushort v_coord_2; // 0x10
} SInputFace;

