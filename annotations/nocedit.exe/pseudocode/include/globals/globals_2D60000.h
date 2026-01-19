#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBulletTrail.h"
#include "types/classes/CCrater.h"
#include "types/classes/CExplosion.h"
#include "types/classes/CFireball.h"
#include "types/classes/CGunFlame.h"
#include "types/classes/CLaserBeam.h"
#include "types/classes/CRock.h"
#include "types/classes/CToss.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D60000
// =============================================================================

// CBulletTrail[10]
extern CBulletTrail g_BulletTrailPool[10];

// CCrater[20]
extern CCrater g_CraterPool[20];

// CExplosion[10]
extern CExplosion g_ExplosionPool[10];

// CFireball[64]
extern CFireball g_FireballPool[64];

// CGunFlame[500]
extern CGunFlame g_GunFlamePool[500];

// CLaserBeam[64]
extern CLaserBeam g_LaserBeamPool[64];

// CRock[64]
extern CRock g_RockPool[64];

// CToss[20]
extern CToss g_TossPool[20];

