#pragma once

// Structure: SFog
// Ghidra size: 0x24 (36 bytes)
typedef struct SFog {
    CColor3i color_index; // 0x0
    CVector3f scroll; // 0xc
    float height_threshold; // 0x18
    float density_multiplier; // 0x1c
    float reserved; // 0x20
} SFog;

