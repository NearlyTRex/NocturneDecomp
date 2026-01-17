#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// SIGNAL - System Header
// =============================================================================

// Function Definition: SIGNAL_HANDLER_FUNC
typedef void (*SIGNAL_HANDLER_FUNC)(int param0);

// Typedef: SIGNAL_HANDLER
// pointer to SIGNAL_HANDLER_FUNC
typedef SIGNAL_HANDLER_FUNC* SIGNAL_HANDLER;

// Structure: SignalHandlerEntry
typedef struct SignalHandlerEntry {
    int flags;
    SIGNAL_HANDLER handler;
} SignalHandlerEntry;

