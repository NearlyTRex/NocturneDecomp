#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLHeaderExtended.h"

// Structure: SMRGLVertexBlock
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct SMRGLVertexBlock {
    SMRGLHeaderExtended base; // 0x0
    CVector3i vertices[1]; // 0xc
} SMRGLVertexBlock;
#pragma pack(pop)

