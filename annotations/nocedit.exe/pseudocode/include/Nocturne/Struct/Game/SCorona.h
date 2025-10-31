#pragma once

// Structure: SCorona
// Ghidra size: 0x13384 (78724 bytes)
typedef struct SCorona {
    int unknown; // 0x0
    int row_min_x[240]; // 0x4
    int row_max_x[240]; // 0x3c4
    char intensity[240][320]; // 0x784
} SCorona;

