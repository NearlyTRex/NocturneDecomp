#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D60000
// =============================================================================

// CBulletTrail[10]
CBulletTrail g_BulletTrailPool[10] = {};

// CCrater[20]
CCrater g_CraterPool[20] = {};

// CExplosion[10]
CExplosion g_ExplosionPool[10] = {};

// CFireball[64]
CFireball g_FireballPool[64] = {};

// CGunFlame[500]
CGunFlame g_GunFlamePool[500] = {};

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
int g_CraterAllocIndex = {};
int g_GunFlameAllocIndex = {};

