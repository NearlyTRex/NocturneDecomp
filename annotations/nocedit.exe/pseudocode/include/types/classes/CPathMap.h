#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// Structure: CPathMap
// Ghidra size: 0x138dc (80092 bytes)
typedef struct CPathMap {
    CVector3f current_position; // 0x0
    CVector3i voxel_coords; // 0xc
    CVector3i dest_voxel_coords; // 0x18
    CVector3i grid_origin; // 0x24
    int height_cache[100][100]; // 0x30
    int height_cache_tags[100][100]; // 0x9c70
    CVector3i cached_voxel_coords; // 0x138b0
    int last_pathfinding_result; // 0x138bc
    CVector3f cached_world_position; // 0x138c0
    CVector3f path_heading; // 0x138cc
    int update_timer; // 0x138d8
} CPathMap;

