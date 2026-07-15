#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// SETLOCAL - System Header
// =============================================================================

// Structure: _XCPT_ACTION
#pragma pack(push, 1)
typedef struct _XCPT_ACTION {
    uint XcptNum;
    int SigNum;
    void* XcptAction;
} _XCPT_ACTION;
#pragma pack(pop)

