#pragma once

// Structure: SMirrorReflection
// Ghidra size: 0x94 (148 bytes)
typedef struct SMirrorReflection {
    CVector3f corner1; // 0x0
    CVector3f corner2; // 0xc
    CVector3f corner3; // 0x18
    CVector3f corner4; // 0x24
    CMatrix3x4f mirror_transform_matrix; // 0x30
    CVector3i camera_origin; // 0x60
    float projection_scale; // 0x6c
    CMatrix3x3f reflection_matrix; // 0x70
} SMirrorReflection;

