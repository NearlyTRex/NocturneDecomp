#pragma once

// Structure: SBoneData
// Ghidra size: 0x84 (132 bytes)
typedef struct SBoneData {
    char name[32]; // 0x0
    int field_32; // 0x20
    int parent_index; // 0x24
    char field_40[44]; // 0x28
    CMatrix3x4f matrix; // 0x54
} SBoneData;

