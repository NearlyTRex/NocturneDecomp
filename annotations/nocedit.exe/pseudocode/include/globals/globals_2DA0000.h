#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CFootstep.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DA0000
// =============================================================================

// CBloodPool[32]
extern CBloodPool g_BloodPools[32];

// CFootstep[1000]
extern CFootstep g_Footsteps[1000];

// int
extern int g_BloodPoolIndex;
extern int g_BloodPoolCount;
extern int g_FootstepIndex;
extern int g_FootstepCount;

