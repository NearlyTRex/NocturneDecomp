#pragma once

// Structure: CDemonGlobe
// Ghidra size: 0x40 (64 bytes)
typedef struct CDemonGlobe {
    CColor3i color; // 0x0
    int linear_radius_scaled; // 0xc
    int quadratic_radius_scaled; // 0x10
    int falloff_value; // 0x14
    float radius_squared; // 0x18
    int intensity; // 0x1c
    int corona_mode; // 0x20
    CVector3f position; // 0x24
    float radius; // 0x30
    float inverse_radius; // 0x34
    float inverse_radius_squared; // 0x38
    int intensity_multiplier; // 0x3c
} CDemonGlobe;

