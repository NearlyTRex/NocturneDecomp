#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MISC - System Header
// =============================================================================

// Function Definition: FARPROC
typedef int FARPROC(void);

// Function Definition: PHANDLER_ROUTINE
typedef BOOL PHANDLER_ROUTINE(DWORD CtrlType);

