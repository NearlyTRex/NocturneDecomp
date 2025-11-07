#pragma once

// Structure: CLodMesh
// Ghidra size: 0x74 (116 bytes)
typedef struct CLodMesh {
    int vertex_count; // 0x0
    SLodVert* vertex_data; // 0x4
    int tri_count; // 0x8
    SLodTriangle* triangle_data; // 0xc
    int submesh_count; // 0x10
    void* submesh_data; // 0x14
    int field_24; // 0x18
    int field_28; // 0x1c
    int field_32; // 0x20
    char field_36[16]; // 0x24
    CLodMesh* next_lod; // 0x34
    FILE* field_56; // 0x38
    int max_vertex_count; // 0x3c
    int max_tri_count; // 0x40
    int edge_count; // 0x44
    SLodEdge* edges_ptr; // 0x48
    int lod_level_count; // 0x4c
    void* lod_levels_ptr; // 0x50
    void* field_84; // 0x54
    void* field_88; // 0x58
    int sample_point_count; // 0x5c
    void* sample_points_ptr; // 0x60
    CVector3f center_offset; // 0x64
    float scale_factor; // 0x70
} CLodMesh;

