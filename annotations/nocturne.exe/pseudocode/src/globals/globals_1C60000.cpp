#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C60000
// =============================================================================

// CCrater[20]
CCrater g_CraterPool[20] = {};

// CGunFlame[500]
CGunFlame g_GunFlamePool[500] = {};

// CLightningBolt[10]
CLightningBolt g_LightningBoltPool[10] = {};

// CPopcorn[256]
CPopcorn g_PopcornPool[256] = {};

// CRainDrop[256]
CRainDrop g_RainDropPool[256] = {};

// CShell[50]
CShell g_ShellPool[50] = {};

// CTrail[100]
CTrail g_TrailPool[100] = {};

// int
int g_CraterAllocIndex = {};
int g_GunFlameAllocIndex = {};
int g_LightningBoltAllocIndex = {};
int g_TrailAllocIndex = {};
int g_ShellAllocIndex = {};
int g_PopcornAllocIndex = {};
int g_RainDropAllocIndex = {};

