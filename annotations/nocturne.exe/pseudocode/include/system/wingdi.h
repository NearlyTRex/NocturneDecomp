#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINGDI - System Header
// =============================================================================

// Typedef: HDC
// pointer to HDC__
typedef struct HDC__* HDC;

// Structure: HDC__
typedef struct HDC__ {
    int unused;
} HDC__;

// Typedef: HGDIOBJ
// pointer to void
typedef void* HGDIOBJ;

// Typedef: HGLOBAL
// pointer to void
typedef HANDLE HGLOBAL;

// Structure: tagRECT
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} tagRECT;

// Typedef: RECT
typedef tagRECT RECT;

