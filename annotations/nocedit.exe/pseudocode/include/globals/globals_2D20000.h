#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBulletHole.h"
#include "types/classes/CStake.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D20000
// =============================================================================

// CBulletHole[256]
extern CBulletHole g_BulletHolePool[256];

// CStake[256]
extern CStake g_StakePool[256];

// int
extern int g_BulletHoleActiveCount;
extern int g_BulletHoleAllocIndex;
extern int g_StakeActiveCount;
extern int g_StakeAllocIndex;

