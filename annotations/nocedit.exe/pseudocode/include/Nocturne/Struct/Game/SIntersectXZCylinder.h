#pragma once

// Structure: SIntersectXZCylinder
// Ghidra size: 0x5c (92 bytes)
typedef struct SIntersectXZCylinder {
    float max_distance; // 0x0
    float push_z; // 0x4
    int flags; // 0x8
    float push_x; // 0xc
    float center_x; // 0x10
    float center_z; // 0x14
    float normal_x; // 0x18
    float normal_z; // 0x1c
    float radius; // 0x20
    float bottom_y; // 0x24
    float top_y; // 0x28
    float inner_radius; // 0x2c
    float outer_radius; // 0x30
    float axis_direction_x; // 0x34
    float axis_direction_z; // 0x38
    float edge_x1; // 0x3c
    float edge_z1; // 0x40
    float edge_x2; // 0x44
    float edge_z2; // 0x48
    float param_t; // 0x4c
    float param_clamped; // 0x50
    float intersect_x; // 0x54
    float intersect_z; // 0x58
} SIntersectXZCylinder;

