#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// D3D - System Header
// =============================================================================

// Typedef: D3DVALUE
// Compiler-defined 'float' IEEE 754 floating-point type (32-bit / 4-byte format, aligned-length is 4-bytes)
typedef float D3DVALUE;

// Structure: D3DVECTOR
#pragma pack(push, 1)
typedef struct D3DVECTOR {
    D3DVALUE x;
    D3DVALUE y;
    D3DVALUE z;
} D3DVECTOR;
#pragma pack(pop)

// Typedef: LPD3DVECTOR
// pointer to D3DVECTOR
typedef struct D3DVECTOR* LPD3DVECTOR;

