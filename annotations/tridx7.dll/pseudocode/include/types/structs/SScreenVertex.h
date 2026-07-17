#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SScreenVertex
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SScreenVertex {
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    float rhw; // 0xc
    DWORD diffuse; // 0x10
    DWORD specular; // 0x14
    float u; // 0x18
    float v; // 0x1c
} SScreenVertex;
#pragma pack(pop)

