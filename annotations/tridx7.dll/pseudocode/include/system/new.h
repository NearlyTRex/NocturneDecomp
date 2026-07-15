#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/crtdefs.h"

// =============================================================================
// NEW - System Header
// =============================================================================

// Function Definition: _PNH_t
typedef int _PNH_t(size_t size);

// Typedef: _PNH
// pointer to _PNH_t
typedef _PNH_t* _PNH;

