#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SShapeEditorPolygon.h"
#include "types/structs/SVertexData.h"

// Structure: CDSEModel
// Ghidra size: 0x1f20dc (2040028 bytes)
#pragma pack(push, 1)
typedef struct CDSEModel {
    int vertex_count; // 0x0
    SVertexData vertices[5000]; // 0x4
    int polygon_count; // 0x186a4
    SShapeEditorPolygon polygons[5000]; // 0x186a8
    char model_name[20]; // 0x1f20c8
} CDSEModel;
#pragma pack(pop)

