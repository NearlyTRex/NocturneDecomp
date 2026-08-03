#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBulletTrail.h"
#include "types/classes/CExplosion.h"
#include "types/classes/CFireball.h"
#include "types/classes/CLaserBeam.h"
#include "types/classes/CRock.h"
#include "types/classes/CToss.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1C50000
// =============================================================================

// CBulletTrail[10]
extern CBulletTrail g_CBulletTrail_ARRAY_01c58c90[10];

// CExplosion[10]
extern CExplosion g_CExplosion_ARRAY_01c5d708[10];

// CFireball[64]
extern CFireball g_CFireball_ARRAY_01c58dfc[64];

// CLaserBeam[64]
extern CLaserBeam g_CLaserBeam_ARRAY_01c5c704[64];

// CRock[64]
extern CRock g_CRock_ARRAY_01c5b500[64];

// CToss[20]
extern CToss g_CToss_ARRAY_01c5d824[20];

