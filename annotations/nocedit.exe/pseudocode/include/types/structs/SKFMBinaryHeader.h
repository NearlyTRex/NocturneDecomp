#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SKFMBinaryHeader
// Ghidra size: 0x1c (28 bytes)
typedef struct SKFMBinaryHeader {
    int version; // 0x0
    int vertexCount; // 0x4
    int polyCount; // 0x8
    int textureCount; // 0xc
    int partCount; // 0x10
    int frameCount; // 0x14
    int hasCollisionData; // 0x18
} SKFMBinaryHeader;

