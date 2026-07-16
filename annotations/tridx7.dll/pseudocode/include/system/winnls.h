#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINNLS - System Header
// =============================================================================

// Typedef: LCTYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD LCTYPE;

// Typedef: LPCPINFO
// pointer to _cpinfo
typedef struct _cpinfo* LPCPINFO;

// Structure: _cpinfo
typedef struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
} _cpinfo;

