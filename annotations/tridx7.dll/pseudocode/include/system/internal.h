#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// INTERNAL - System Header
// =============================================================================

// Structure: LC_ID
#pragma pack(push, 1)
typedef struct LC_ID {
    ushort wLanguage;
    ushort wCountry;
    ushort wCodePage;
} LC_ID;
#pragma pack(pop)

