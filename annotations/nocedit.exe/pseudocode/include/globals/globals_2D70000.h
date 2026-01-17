#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CShell.h"
#include "types/classes/CTrail.h"
#include "types/structs/SHardwareEdge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D70000
// =============================================================================

extern CLightningBolt g_LightningBoltPool[10];
extern CTrail g_TrailPool[100];
extern CShell g_ShellPool[50];
extern CPopcorn g_PopcornPool[256];
extern CRainDrop g_RainDropPool[256];
extern SHardwareEdge g_HardwareEdgeTable[16];

