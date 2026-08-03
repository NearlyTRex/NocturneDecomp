#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CCrater.h"
#include "types/classes/CGunFlame.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CShell.h"
#include "types/classes/CTrail.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1C60000
// =============================================================================

// CCrater[20]
extern CCrater g_CCrater_ARRAY_01c625f8[20];

// CGunFlame[500]
extern CGunFlame g_CGunFlame_ARRAY_01c62ebc[500];

// CLightningBolt[10]
extern CLightningBolt g_CLightningBolt_ARRAY_01c67510[10];

// CPopcorn[256]
extern CPopcorn g_CPopcorn_ARRAY_01c69614[256];

// CRainDrop[256]
extern CRainDrop g_CRainDrop_ARRAY_01c6ce18[256];

// CShell[50]
extern CShell g_CShell_ARRAY_01c684e0[50];

// CTrail[100]
extern CTrail g_CTrail_ARRAY_01c676cc[100];

