#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D50000
// =============================================================================

// CGlassParticle[256]
CGlassParticle g_GlassParticlePool[256] = {};

// CMuzzleFlash[20]
CMuzzleFlash g_MuzzleFlashPool[20] = {};

// CSpark[256]
CSpark g_SparkPool[256] = {};

// CStake*
CStake* g_StakeActiveListHead = {};

// int
int g_SparkActiveCount = {};
int g_GlassParticleNextIndex = {};

