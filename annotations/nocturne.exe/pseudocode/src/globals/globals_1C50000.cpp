#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C50000
// =============================================================================

// CBulletTrail[10]
CBulletTrail g_BulletTrailPool[10] = {};

// CExplosion[10]
CExplosion g_ExplosionPool[10] = {};

// CFireball[64]
CFireball g_FireballPool[64] = {};

// CLaserBeam[64]
CLaserBeam g_LaserBeamPool[64] = {};

// CRock[64]
CRock g_RockPool[64] = {};

// CToss[20]
CToss g_TossPool[20] = {};

// int
int g_BulletTrailAllocIndex = {};
int g_FireballAllocIndex = {};
int g_RockAllocIndex = {};
int g_LaserBeamActiveCount = {};
int g_ExplosionPoolIndex = {};
int g_TossAllocIndex = {};

