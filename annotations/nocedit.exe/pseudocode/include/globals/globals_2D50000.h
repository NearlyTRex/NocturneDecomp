#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CGlassParticle.h"
#include "types/classes/CMuzzleFlash.h"
#include "types/classes/CSpark.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D50000
// =============================================================================

// CGlassParticle[256]
extern CGlassParticle g_GlassParticlePool[256];

// CMuzzleFlash[20]
extern CMuzzleFlash g_MuzzleFlashPool[20];

// CSpark[256]
extern CSpark g_SparkPool[256];

// int
extern int g_SparkAllocIndex;
extern int g_MuzzleFlashAllocIndex;
extern int g_GlassParticleAllocIndex;

