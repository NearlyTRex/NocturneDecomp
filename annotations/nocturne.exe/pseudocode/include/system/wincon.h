#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINCON - System Header
// =============================================================================

// Structure: SIOControlBlock
typedef struct SIOControlBlock {
    HANDLE standard_handles[5];
    dword console_mode;
    dword io_flags;
    HANDLE extended_handles[15];
} SIOControlBlock;

