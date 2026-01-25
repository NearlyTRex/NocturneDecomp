#pragma once

// Forward declarations
struct CDemonCubeTriangle;
struct SVoxelGrid;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CDemonCube
// Ghidra size: 0x34 (52 bytes)
typedef struct CDemonCube {
    struct SVoxelGrid* voxel_buffer1; // 0x0
    struct SVoxelGrid* voxel_buffer2; // 0x4
    CVector3f min_bounds; // 0x8
    CVector3f max_bounds; // 0x14
    int vertex_count; // 0x20
    struct CVector3f* vertex_buffer; // 0x24
    int triangle_count; // 0x28
    struct CDemonCubeTriangle* triangle_buffer; // 0x2c
    void* ground_type_memory; // 0x30
} CDemonCube;

