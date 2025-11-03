#pragma once

// Structure: CDeformableModel
// Ghidra size: 0x9000 (36864 bytes)
typedef struct CDeformableModel {
    int num_lods; // 0x0
    SLod lod_info[5]; // 0x4
    int vertex_count[5]; // 0x2c
    SVert* vertex_data_ptr[5]; // 0x40
    int tri_count[5]; // 0x54
    int cap_tri_count[5]; // 0x68
    SInputFace* tri_data_ptr[5]; // 0x7c
    int* index_data_ptr[5]; // 0x90
    int* cap_index_ptr[5]; // 0xa4
    int num_texture_sets; // 0xb8
    int num_textures; // 0xbc
    STextureSet texture_sets[5]; // 0xc0
    int num_parts; // 0x7140
    SPart parts[30]; // 0x7144
    CVector3f model_scale; // 0x7c84
    CVector3f vertex_pool[100]; // 0x7c90
    CBoundingBox3D bbox_pool[100]; // 0x8140
    char field_35488[12]; // 0x8aa0
    int bone_flags[100]; // 0x8aac
    int bone_to_part_map[100]; // 0x8c3c
    int farthest_child_bone[100]; // 0x8dcc
    char model_name[80]; // 0x8f5c
    CSkeleton* skeleton_ptr; // 0x8fac
    char model_identifier[80]; // 0x8fb0
} CDeformableModel;

