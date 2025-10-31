#pragma once

// Structure: CSmokeParticle
// Ghidra size: 0x2c (44 bytes)
typedef struct CSmokeParticle {
    int active; // 0x0
    CVector3f position; // 0x4
    float vertical_accel; // 0x10
    float drag_factor; // 0x14
    float age; // 0x18
    CVector3f wind_influence; // 0x1c
    int field_40; // 0x28
} CSmokeParticle;

