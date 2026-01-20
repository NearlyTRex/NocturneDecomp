#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D20000
// =============================================================================

// CBulletHole[256]
CBulletHole g_BulletHolePool[256] = {};

// CStake[256]
CStake g_StakePool[256] = {};

// int
int g_BulletHoleActiveCount = {};
int g_BulletHoleAllocIndex = {};
int g_StakeActiveCount = {};
int g_StakeAllocIndex = {};

