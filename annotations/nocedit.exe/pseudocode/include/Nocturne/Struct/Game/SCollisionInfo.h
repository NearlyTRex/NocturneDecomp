#pragma once

// Structure: SCollisionInfo
// Ghidra size: 0x28 (40 bytes)
typedef struct SCollisionInfo {
    int ray_type; // 0x0
    float field_4; // 0x4
    float field_8; // 0x8
    float field_12; // 0xc
    float field_16; // 0x10
    float field_20; // 0x14
    float cylinder_bottom_y; // 0x18
    float cylinder_top_y; // 0x1c
    float cylinder_radius_sq; // 0x20
    void* result_ptr; // 0x24
} SCollisionInfo;

