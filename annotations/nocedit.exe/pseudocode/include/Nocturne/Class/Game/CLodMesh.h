#pragma once

// Structure: CLodMesh
// Ghidra size: 0x74 (116 bytes)
typedef struct CLodMesh {
    int vertex_count; // 0x0
    CLodVert* vertex_data; // 0x4
    int tri_count; // 0x8
    CLodFace* tri_data; // 0xc
    int submesh_count; // 0x10
    SLodSubmesh* submesh_data; // 0x14
    int active_attribute_count; // 0x18
    int sort_attribute_count; // 0x1c
    int reserved_attribute_count; // 0x20
    int attribute_enabled_flags[4]; // 0x24
    CLodMesh* next_lod; // 0x34
    FILE* precompute_file; // 0x38
    int max_vertex_count; // 0x3c
    int max_tri_count; // 0x40
    int edge_count; // 0x44
    CLodEdge* edges_ptr; // 0x48
    int lod_level_count; // 0x4c
    CLodEdge* lod_levels_ptr; // 0x50
    SSpatialGrid* spatial_grid_ptr; // 0x54
    int* spatial_grid_data; // 0x58
    int sample_point_count; // 0x5c
    SLodSamplePoint* sample_points_ptr; // 0x60
    CVector3f center_offset; // 0x64
    float scale_factor; // 0x70
} CLodMesh;

