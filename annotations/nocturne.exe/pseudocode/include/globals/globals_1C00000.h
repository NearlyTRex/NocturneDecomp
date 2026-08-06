#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CSmokeParticle.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1C00000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CFilmReelActorType_01c08c8c;
extern CDemonActorType g_CFilmProjectorActorType_01c08cc8;

// CFireEffect
extern CFireEffect g_CFireEffect_01c08d04;

// CKeyFramedModelInstance
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08d48;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08ec4;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09040;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c091bc;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09338;

// CKeyFramedModelInstance[5]
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_ARRAY_01c094bc[5];

// CSmokeParticle[2048]
extern CSmokeParticle g_CSmokeParticle_ARRAY_01c0a140[2048];

// uchar[768]
extern uchar g_SourcePaletteData[768];
extern uchar g_DefaultPalette[768];

// uint[1600]
extern uint g_ReciprocalLookupTable[1600];

