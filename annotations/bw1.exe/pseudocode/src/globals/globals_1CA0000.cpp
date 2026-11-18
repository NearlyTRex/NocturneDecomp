#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CA0000
// =============================================================================

// CBulletTrail[10]
CBulletTrail g_BulletTrailPool[10] = {};

// CFireball[64]
CFireball g_FireballPool[64] = {};

// CLaserBeam[64]
CLaserBeam g_LaserBeamPool[64] = {};

// CLeaf[64]
CLeaf CLeaf_ARRAY_01cadb68[64] = {};

// CRock[64]
CRock g_RockPool[64] = {};

// int
int g_INT_01ca9cf0 = {};
int g_FireballAllocIndex = {};
int g_RockAllocIndex = {};
int g_INT_01cadb64 = {};
int g_LaserBeamActiveCount = {};

