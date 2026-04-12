#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SShapeEditorPolygon
// Ghidra size: 0x184 (388 bytes)
#pragma pack(push, 1)
typedef struct SShapeEditorPolygon {
    uint polygon_type; // 0x0
    char texture_name[80]; // 0x4
    char lightmap_name[80]; // 0x54
    uint vertex_indices_count; // 0xa4
    CVector3f normal; // 0xa8
    float plane_distance; // 0xb4
    uint vertex_indices[16]; // 0xb8
    float uv_u[16]; // 0xf8
    float uv_v[16]; // 0x138
    uint part_assignment; // 0x178
    uint material_id; // 0x17c
    uint material_id_backup; // 0x180
} SShapeEditorPolygon;
#pragma pack(pop)

