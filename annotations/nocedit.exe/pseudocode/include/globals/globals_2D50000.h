#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CGlassParticle.h"
#include "types/classes/CMuzzleFlash.h"
#include "types/classes/CSpark.h"
#include "types/classes/CStake.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D50000
// =============================================================================

// CGlassParticle[256]
extern CGlassParticle g_GlassParticlePool[256];

// CMuzzleFlash[20]
extern CMuzzleFlash g_MuzzleFlashPool[20];

// CSpark[256]
extern CSpark g_SparkPool[256];

// CStake*
extern CStake* g_StakeActiveListHead;

// int
extern int g_SparkActiveCount;
extern int g_GlassParticleNextIndex;

