#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLTextureLod.h"
#include "types/structs/SMorphPart.h"

// Structure: CMorphModel
// Ghidra size: 0x608 (1544 bytes)
typedef struct CMorphModel {
    int part_count; // 0x0
    SMorphPart parts[5]; // 0x4
    int num_points; // 0x54
    void* points; // 0x58
    int num_faces; // 0x5c
    void* faces; // 0x60
    int num_textures; // 0x64
    SMRGLTextureLod textures[20]; // 0x68
} CMorphModel;

