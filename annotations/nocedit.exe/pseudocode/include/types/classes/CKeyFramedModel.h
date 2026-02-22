#pragma once

// Forward declarations
struct CDemonTriangle;
struct CVector3i;
struct SMRGLPrimitiveQuad;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelPart.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SMRGLTextureLod.h"

// Structure: CKeyFramedModel
// Ghidra size: 0x56d8 (22232 bytes)
typedef struct CKeyFramedModel {
    char model_filename[256]; // 0x0
    int frame_count; // 0x100
    int vertex_count; // 0x104, max=2000
    struct CVector3i* vertex_normal_list; // 0x108
    struct CVector3i* vertex_list; // 0x10c
    int poly_count; // 0x110, max=2000
    struct SMRGLPrimitiveQuad* poly_vert_list; // 0x114
    int* poly_texture_index_list; // 0x118
    uchar* env_map_opac_list; // 0x11c
    int texture_count; // 0x120, max=300
    SMRGLTextureLod texture_list[300]; // 0x124
    int part_count; // 0x5584, max=30
    CKeyFramedModelPart part_list[30]; // 0x5588
    CVector3f bounds_min; // 0x5678
    CVector3f bounds_max; // 0x5684
    struct CVector3f* frame_bounds; // 0x5690
    int collision_triangle_count; // 0x5694
    struct CDemonTriangle* collision_triangle_list; // 0x5698
    int transparent_pixel_flag; // 0x569c
    int disable_backface_culling; // 0x56a0
    CVector3f transform_vector; // 0x56a4
    CMatrix3x3f rotation_matrix_workspace; // 0x56b0
    int padding; // 0x56d4
} CKeyFramedModel;

