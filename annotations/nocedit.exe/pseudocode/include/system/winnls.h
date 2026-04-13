#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINNLS - System Header
// =============================================================================

// Structure: _cpinfo
typedef struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
} _cpinfo;

