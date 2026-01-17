#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CGlassParticle.h"
#include "types/classes/CMuzzleFlash.h"
#include "types/classes/CSpark.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D50000
// =============================================================================

extern CSpark g_SparkPool[256];
extern CMuzzleFlash g_MuzzleFlashPool[20];
extern CGlassParticle g_GlassParticlePool[256];

