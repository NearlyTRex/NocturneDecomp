#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CZThumb
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct CZThumb {
    int width; // 0x0
    int height; // 0x4
    CVector3f camera_position; // 0x8
    CVector3f look_at_position; // 0x14
    float projection_scale; // 0x20
    void* zbuffer_data; // 0x24
} CZThumb;
#pragma pack(pop)

