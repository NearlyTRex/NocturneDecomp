#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSpatialTreeNode
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SSpatialTreeNode {
    struct SSpatialTreeNode* child1; // 0x0
    struct SSpatialTreeNode* child2; // 0x4
    int children_present; // 0x8
    int part_id; // 0xc
    float plane_normal_x; // 0x10
    float plane_normal_y; // 0x14
    float plane_normal_z; // 0x18
    float plane_distance; // 0x1c
} SSpatialTreeNode;
#pragma pack(pop)

