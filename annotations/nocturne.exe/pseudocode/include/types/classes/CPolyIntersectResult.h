#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CClippedPoly.h"

// Structure: CPolyIntersectResult
// Ghidra size: 0x148 (328 bytes)
#pragma pack(push, 1)
typedef struct CPolyIntersectResult {
    CClippedPoly poly1; // 0x0
    CClippedPoly poly2; // 0xa4
} CPolyIntersectResult;
#pragma pack(pop)

