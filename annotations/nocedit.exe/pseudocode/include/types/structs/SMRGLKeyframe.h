#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLHeaderBasic.h"
#include "types/structs/SMRGLHeaderExtended.h"

// Structure: SMRGLKeyframe
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SMRGLKeyframe {
    SMRGLHeaderExtended header; // 0x0
    SMRGLHeaderBasic vertex_header; // 0xc
    CVector3i vertices[0]; // 0x14
} SMRGLKeyframe;
#pragma pack(pop)

