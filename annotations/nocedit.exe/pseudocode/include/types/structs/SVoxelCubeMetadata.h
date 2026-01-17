#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonPart.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SSurfacePlane.h"

// Structure: SVoxelCubeMetadata
// Ghidra size: 0x58 (88 bytes)
typedef struct SVoxelCubeMetadata {
    int triangle_count; // 0x0
    struct CDemonTriangle* triangle_list; // 0x4
    int field_8; // 0x8
    struct CDemonPart* part_ptr; // 0xc
    int field_16; // 0x10
    uint voxel_data[16]; // 0x14
    uchar* triangle_flags; // 0x54
} SVoxelCubeMetadata;

