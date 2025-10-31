#pragma once

// Structure: SVoxelCubeMetadata
// Ghidra size: 0x58 (88 bytes)
typedef struct SVoxelCubeMetadata {
    int triangle_count; // 0x0
    CDemonTriangle* triangle_list; // 0x4
    int field_8; // 0x8
    CDemonPart* part_ptr; // 0xc
    int field_16; // 0x10
    uint voxel_data[16]; // 0x14
    uchar* triangle_flags; // 0x54
} SVoxelCubeMetadata;

