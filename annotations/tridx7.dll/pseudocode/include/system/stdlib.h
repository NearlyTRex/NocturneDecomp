#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDLIB - System Header
// =============================================================================

// Structure: _CRT_DOUBLE
typedef struct _CRT_DOUBLE {
    double x;
} _CRT_DOUBLE;

// Structure: _CRT_FLOAT
typedef struct _CRT_FLOAT {
    float f;
} _CRT_FLOAT;

// Structure: _LDBL12
#pragma pack(push, 4)
typedef struct _LDBL12 {
    uchar ld12[12];
} __attribute__((aligned(1))) _LDBL12;
#pragma pack(pop)

// Structure: _LDOUBLE
#pragma pack(push, 1)
typedef struct _LDOUBLE {
    byte ld[10]; // 80-bit x87 long double
} _LDOUBLE;
#pragma pack(pop)

