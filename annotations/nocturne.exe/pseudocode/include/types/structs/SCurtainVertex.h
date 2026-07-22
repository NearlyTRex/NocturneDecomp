#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SCurtainVertex
// Ghidra size: 0x74 (116 bytes)
#pragma pack(push, 1)
typedef struct SCurtainVertex {
    CVector3f local_position; // 0x0
    CVector3f initial_position; // 0xc
    int texture_u; // 0x18
    int texture_v; // 0x1c
    CVector3f world_position; // 0x20
    CVector3f velocity; // 0x2c
    CVector3f last_world_position; // 0x38
    int neighbor_count; // 0x44
    int neighbor_indices[4]; // 0x48
    float rest_distances[4]; // 0x58
    int is_pinned; // 0x68
    int has_collision; // 0x6c
    int is_corner; // 0x70
} SCurtainVertex;
#pragma pack(pop)

