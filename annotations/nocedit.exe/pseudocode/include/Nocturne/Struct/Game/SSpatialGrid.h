#pragma once

// Structure: SSpatialGrid
// Ghidra size: 0x4004 (16388 bytes)
typedef struct SSpatialGrid {
    int cell_start_indices[16][16][16]; // 0x0
    int triangle_count; // 0x4000
} SSpatialGrid;

