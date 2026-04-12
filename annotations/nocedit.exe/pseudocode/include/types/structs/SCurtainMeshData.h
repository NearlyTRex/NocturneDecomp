#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLPrimitiveQuad.h"

// Structure: SCurtainMeshData
// Ghidra size: 0x493ec (300012 bytes)
#pragma pack(push, 1)
typedef struct SCurtainMeshData {
    float inv_delta_time; // 0x0
    int grid_cols; // 0x4
    int grid_rows; // 0x8
    int vertex_positions_fixed[3000]; // 0xc
    SMRGLPrimitiveQuad front_faces[2000]; // 0x2eec
    SMRGLPrimitiveQuad back_faces[2000]; // 0x2616c
} SCurtainMeshData;
#pragma pack(pop)

