#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CMirror.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CGlass
// Ghidra size: 0xb40 (2880 bytes)
typedef struct CGlass {
    CDemonActor base; // 0x0
    CVector3f glass_size; // 0x158
    SMRGLTextureBasic glass_texture; // 0x164
    int opacity; // 0x17c
    int shattered; // 0x180
    char break_event[100]; // 0x184
    int mirror_flag; // 0x1e8
    CMirror mirror; // 0x1ec
    char breakable_condition[100]; // 0x30c
    int background_flag; // 0x370
    SMRGLTextureBasic broken_texture; // 0x374
    CVector3f broken_vertices[25]; // 0x38c
    char field_1208[500]; // 0x4b8
    SMRGLPrimitiveQuad broken_quads[16]; // 0x6ac
    int field_2860; // 0xb2c
    int field_2864; // 0xb30
    int broken_vertex_count; // 0xb34
    int broken_polygon_count; // 0xb38
    int field_2876; // 0xb3c
} CGlass;

