#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D60000
// =============================================================================

// CBulletTrail*
CBulletTrail* g_BulletTrailActiveListHead = {};

// CBulletTrail[10]
CBulletTrail g_BulletTrailPool[10] = {};

// CCrater*
CCrater* g_CraterActiveListHead = {};

// CCrater[20]
CCrater g_CraterPool[20] = {};

// CExplosion*
CExplosion* g_ExplosionActiveListHead = {};

// CExplosion[10]
CExplosion g_ExplosionPool[10] = {};

// CFireball[64]
CFireball g_FireballPool[64] = {};

// CGlassParticle*
CGlassParticle* g_CFireEffectGlassParticlesEnd = {};

// CGunFlame[500]
CGunFlame g_GunFlamePool[500] = {};

// CLaserBeam[64]
CLaserBeam g_LaserBeamPool[64] = {};

// CRock*
CRock* g_CFireEffectRocksEnd = {};

// CRock[64]
CRock g_RockPool[64] = {};

// CToss[20]
CToss g_TossPool[20] = {};

// int
int INT_02d655a8 = {};
int g_ExplosionPoolIndex = {};
int INT_02d6c6a0 = {};

