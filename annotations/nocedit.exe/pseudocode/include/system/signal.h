#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// SIGNAL - System Header
// =============================================================================

// Function Definition: SIGNAL_HANDLER_FUNC
typedef void SIGNAL_HANDLER_FUNC(int param0);

// Typedef: SIGNAL_HANDLER
// pointer to SIGNAL_HANDLER_FUNC
typedef SIGNAL_HANDLER_FUNC* SIGNAL_HANDLER;

// Typedef: SIGNAL_HANDLER_TYPE
// Signed Integer (compiler-specific size)
typedef int SIGNAL_HANDLER_TYPE;

// Structure: SignalHandlerEntry
typedef struct SignalHandlerEntry {
    int flags;
    SIGNAL_HANDLER_TYPE type;
} SignalHandlerEntry;

