#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"

// Structure: CCourseFrame
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct CCourseFrame {
    CVector3f pos; // 0x0
    CQuaternion4f orient; // 0xc
} CCourseFrame;
#pragma pack(pop)

