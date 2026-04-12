#pragma once

// Forward declarations
struct CDeformableModel;
struct CVector3i;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SPartInstanceData.h"
#include "types/structs/SPose.h"

// Structure: CDeformableModelInstance
// Ghidra size: 0x22b4 (8884 bytes)
#pragma pack(push, 1)
typedef struct CDeformableModelInstance {
    CMotionController motion_controller; // 0x0
    float scale_factor; // 0x54
    CVector3f transformed_vertices[100]; // 0x58
    CVector3f scaled_model_dimensions; // 0x508
    float rest_pose_data[100]; // 0x514
    SPose bone_transform; // 0x6a4
    SPartInstanceData part_data; // 0x2140
    int cached_skinned_lod_index; // 0x2230
    struct CVector3i* skinned_vertices_buffer; // 0x2234
    CBoundingBox3D bounding_box; // 0x2238
    int bone_update_mode; // 0x2250, 0=simple_flat,1=hierarchical_accum,2=hierarchical_restpose
    CVector3f accumulated_root_motion; // 0x2254
    char model_name[80]; // 0x2260
    struct CDeformableModel* model_ptr; // 0x22b0
} CDeformableModelInstance;
#pragma pack(pop)

