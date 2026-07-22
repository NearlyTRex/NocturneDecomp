#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SVPHVertexLink
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SVPHVertexLink {
    int bone_slots[4]; // 0x0
    int bone_index; // 0x10
    float weight; // 0x14
    char unk[8]; // 0x18
} SVPHVertexLink;
#pragma pack(pop)

