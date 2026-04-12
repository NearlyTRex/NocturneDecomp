#pragma once

// Forward declarations
struct SMRGLTextureBasic;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CTrail
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct CTrail {
    CVector3f position; // 0x0
    float size; // 0xc
    float lifetime; // 0x10
    float current_alpha; // 0x14
    float initial_lifetime; // 0x18
    float initial_alpha; // 0x1c
    struct SMRGLTextureBasic* texture_ptr; // 0x20
} CTrail;
#pragma pack(pop)

