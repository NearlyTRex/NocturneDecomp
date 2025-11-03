#pragma once

// Structure: CDeformableModelInstance
// Ghidra size: 0x22b4 (8884 bytes)
typedef struct CDeformableModelInstance {
    CMotionController motion_controller; // 0x0
    float scale_factor; // 0x54
    CVector3f transformed_vertices[100]; // 0x58
    char field_1288[7224]; // 0x508
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

