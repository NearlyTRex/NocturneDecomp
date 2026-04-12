#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINNLS - System Header
// =============================================================================

// Structure: _cpinfo
#pragma pack(push, 1)
typedef struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
} __attribute__((aligned(4))) _cpinfo;
#pragma pack(pop)

