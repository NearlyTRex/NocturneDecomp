#pragma once

// Structure: SCollisionInfo
// Ghidra size: 0x28 (40 bytes)
typedef struct SCollisionInfo {
    int ray_type; // 0x0
    float field_4; // 0x4
    float field_8; // 0x8
    float field_12; // 0xc
    float field_16; // 0x10
    float cylinder_bottom_y; // 0x14
    float cylinder_top_y; // 0x18
    float cylinder_radius; // 0x1c
    void* result_ptr; // 0x20
    void* field_36; // 0x24
} SCollisionInfo;

