#pragma once

// Forward declarations
struct CSkeleton;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SLod.h"
#include "types/structs/SPart.h"
#include "types/structs/STextureSet.h"
#include "types/structs/SVert.h"

// Structure: CDeformableModel
// Ghidra size: 0x2ac0 (10944 bytes)
#pragma pack(push, 1)
typedef struct CDeformableModel {
    int num_lods; // 0x0
    SLod lod_info[5]; // 0x4
    int vertex_count[5]; // 0x2c
    struct SVert* vertex_data_ptr[5]; // 0x40
    int tri_count[5]; // 0x54
    int cap_tri_count[5]; // 0x68
    struct SInputFace* tri_data_ptr[5]; // 0x7c
    int* index_data_ptr[5]; // 0x90
    int* cap_index_ptr[5]; // 0xa4
    int num_texture_sets; // 0xb8
    int num_textures; // 0xbc
    STextureSet texture_sets[5]; // 0xc0
    int num_parts; // 0xc00
    SPart parts[30]; // 0xc04
    CVector3f model_scale; // 0x1744
    CVector3f vertex_pool[100]; // 0x1750
    CBoundingBox3D bbox_pool[100]; // 0x1c00
    char dead[12]; // 0x2560
    int bone_flags[100]; // 0x256c
    int bone_to_part_map[100]; // 0x26fc
    int farthest_child_bone[100]; // 0x288c
    char model_name[80]; // 0x2a1c
    struct CSkeleton* skeleton_ptr; // 0x2a6c
    char model_filename[80]; // 0x2a70
} CDeformableModel;
#pragma pack(pop)

