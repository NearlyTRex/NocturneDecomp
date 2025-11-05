#pragma once

// Structure: SBoneTransformData
// Ghidra size: 0x1a9c (6812 bytes)
typedef struct SBoneTransformData {
    CVector3f root_position; // 0x0
    CQuaternion4f bone_rotations[100]; // 0xc
    float current_pose_data[100]; // 0x64c
    CMatrix3x4f bone_world_matrices[100]; // 0x7dc
} SBoneTransformData;

