#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/STriangleVertices.h"

// Structure: CGlassParticle
// Ghidra size: 0x9c (156 bytes)
#pragma pack(push, 1)
typedef struct CGlassParticle {
    CParticle base; // 0x0
    int lifetime; // 0x38
    SMRGLTextureBasic texture; // 0x3c
    CVector3f euler_angles; // 0x54
    CVector3i uv_u_per_vertex; // 0x60
    CVector3i uv_v_per_vertex; // 0x6c
    STriangleVertices triangle_delta; // 0x78
} CGlassParticle;
#pragma pack(pop)

