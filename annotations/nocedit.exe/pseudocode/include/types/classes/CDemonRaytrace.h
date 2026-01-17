#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CDemonCubeTriangle.h"
#include "types/classes/CDemonPart.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SSurfacePlane.h"
#include "types/structs/SVoxelCubeMetadata.h"
#include "types/structs/SVoxelGrid.h"

// Structure: CDemonRaytrace
// Ghidra size: 0x6c (108 bytes)
typedef struct CDemonRaytrace {
    int rendering_mode; // 0x0
    int triangle_count; // 0x4
    struct CDemonTriangle* triangle_list; // 0x8
    uchar* triangle_flags; // 0xc
    CVector3f bbox_min; // 0x10
    CVector3f bbox_max; // 0x1c
    CVector3f cell_size; // 0x28
    CVector3f adjusted_size; // 0x34
    CVector3i grid_coord; // 0x40
    struct SVoxelCubeMetadata* cube_list; // 0x4c
    struct CDemonCube* cube_data; // 0x50
    CVector3i grid_bounds_min; // 0x54
    CVector3i grid_bounds_max; // 0x60
} CDemonRaytrace;

