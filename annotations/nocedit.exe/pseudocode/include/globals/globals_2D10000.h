#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CSmokeParticle.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLPrimitiveQuadIndex.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SVersionControlSession.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D10000
// =============================================================================

extern SVersionControlSession g_VersionControlSession;
extern CDemonActorType g_CFilmReelClassInfo;
extern CDemonActorType g_CFilmProjectorClassInfo;
extern CFireEffect g_CFireEffectInstance;
extern CVector3i g_BillboardCameraRight;
extern CVector3i g_BillboardCameraUp;
extern SMRGLPrimitiveQuadIndex g_BillboardPrimitive;
extern CKeyFramedModelInstance g_FireEffectFlamingStakeModel;
extern CKeyFramedModelInstance g_FireEffectFireballModel;
extern CKeyFramedModelInstance g_FireEffectFireballSmallModel;
extern CKeyFramedModelInstance g_FireEffectFireballGreenModel;
extern CKeyFramedModelInstance g_FireEffectGunFlashModel;
extern CKeyFramedModelInstance g_CFireEffectDebrisModels[5];
extern SMRGLTextureBasic g_GunFlameTextures[20];
extern CSmokeParticle g_SmokeParticlePool[2048];

