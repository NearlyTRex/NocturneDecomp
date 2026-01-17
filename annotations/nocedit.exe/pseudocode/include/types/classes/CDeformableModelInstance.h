#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CMotionList.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SBone.h"
#include "types/structs/SBoneTransformData.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SLod.h"
#include "types/structs/SPart.h"
#include "types/structs/STextureSet.h"
#include "types/structs/SVert.h"

// Structure: CDeformableModelInstance
// Ghidra size: 0x22b4 (8884 bytes)
typedef struct CDeformableModelInstance {
    CMotionController motion_controller; // 0x0
    float scale_factor; // 0x54
    CVector3f transformed_vertices[100]; // 0x58
    CVector3f scaled_model_dimensions; // 0x508
    float rest_pose_data[100]; // 0x514
    SBoneTransformData bone_transform; // 0x6a4
    int part_visibility_flags[30]; // 0x2140
    int texture_set_indices[30]; // 0x21b8
    int cached_skinned_lod_index; // 0x2230
    struct CVector3i* skinned_vertices_buffer; // 0x2234
    CBoundingBox3D bounding_box; // 0x2238
    int field_8784; // 0x2250
    CVector3f accumulated_root_motion; // 0x2254
    char model_name[80]; // 0x2260
    struct CDeformableModel* model_ptr; // 0x22b0
} CDeformableModelInstance;

