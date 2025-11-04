#pragma once

// Structure: SPoseData
// Ghidra size: 0x64c (1612 bytes)
typedef struct SPoseData {
    CVector3f root_position; // 0x0
    CQuaternion4f bone_rotations[100]; // 0xc
} SPoseData;

