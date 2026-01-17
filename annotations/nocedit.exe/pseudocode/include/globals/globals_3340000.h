#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CZThumb.h"
#include "types/structs/SRaytraceState.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3340000
// =============================================================================

extern SRaytraceState g_RaytraceStateStack[5];
extern CZThumb g_CZThumbPool[1500];

