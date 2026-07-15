#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// SIGNAL - System Header
// =============================================================================

// Function Definition: _sigfn_t
typedef void _sigfn_t(int sig);

// Typedef: _sigfn
// pointer to _sigfn_t
typedef _sigfn_t* _sigfn;

