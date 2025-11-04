#pragma once

// Structure: CDeformableModelInstance
// Ghidra size: 0x22b4 (8884 bytes)
typedef struct CDeformableModelInstance {
    CMotionController motion_controller; // 0x0
    float scale_factor; // 0x54
    CVector3f transformed_vertices[100]; // 0x58
    int field_1288; // 0x508
    int field_1292; // 0x50c
    float rest_pose_data[100]; // 0x510
    int field_1696; // 0x6a0
    CVector3f root_position; // 0x6a4
    CQuaternion4f bone_rotations[100]; // 0x6b0
    float current_pose_data[100]; // 0xcf0
    CMatrix3x4f bone_world_matrices[100]; // 0xe80
    int part_visibility_flags[30]; // 0x2140
    int texture_set_indices[30]; // 0x21b8
    int field_8752; // 0x2230
    int field_8756; // 0x2234
    char field_8760[24]; // 0x2238
    int field_8784; // 0x2250
    char field_8788[12]; // 0x2254
    char field_8800[80]; // 0x2260
    CDeformableModel* model_ptr; // 0x22b0
} CDeformableModelInstance;

