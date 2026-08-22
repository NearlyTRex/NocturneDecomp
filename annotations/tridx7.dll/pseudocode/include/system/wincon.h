#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINCON - System Header
// =============================================================================

// Function Definition: PHANDLER_ROUTINE_FUNC
typedef BOOL PHANDLER_ROUTINE_FUNC(DWORD CtrlType);

// Typedef: PHANDLER_ROUTINE
// pointer to PHANDLER_ROUTINE_FUNC
typedef PHANDLER_ROUTINE_FUNC* PHANDLER_ROUTINE;

