#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CMirror.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CGlass
// Ghidra size: 0xb38 (2872 bytes)
#pragma pack(push, 1)
typedef struct CGlass {
    CDemonActor base; // 0x0
    CVector3f glass_size; // 0x150
    SMRGLTextureBasic glass_texture; // 0x15c
    int opacity; // 0x174
    int shattered; // 0x178
    char break_event[100]; // 0x17c
    int mirror_flag; // 0x1e0
    CMirror mirror; // 0x1e4
    char breakable_condition[100]; // 0x304
    int background_flag; // 0x368
    SMRGLTextureBasic broken_texture; // 0x36c
    CVector3f broken_vertices[25]; // 0x384
    CVector3i render_vertices[25]; // 0x4b0
    int texture_u[25]; // 0x5dc
    int texture_v[25]; // 0x640
    SMRGLPrimitiveQuad broken_quads[16]; // 0x6a4
    int grid_cols; // 0xb24
    int grid_rows; // 0xb28
    int broken_vertex_count; // 0xb2c
    int broken_polygon_count; // 0xb30
    int pending_background_render; // 0xb34
} CGlass;
#pragma pack(pop)

