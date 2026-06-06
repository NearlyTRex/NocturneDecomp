#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLVertex.h"

// Structure: SS3DFaceMatch
// Ghidra size: 0x3c (60 bytes)
#pragma pack(push, 1)
typedef struct SS3DFaceMatch {
    int unk1; // 0x0
    int edge_count; // 0x4
    int part_index; // 0x8
    int match_index; // 0xc
    int unk2; // 0x10
    int texture_index; // 0x14
    SMRGLVertex vertices[3]; // 0x18
} SS3DFaceMatch;
#pragma pack(pop)

