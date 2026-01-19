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

// CDemonActorType
extern CDemonActorType g_CFilmReelClassInfo;
extern CDemonActorType g_CFilmProjectorClassInfo;

// CFireEffect
extern CFireEffect g_CFireEffectInstance;

// CKeyFramedModelInstance
extern CKeyFramedModelInstance g_FireEffectFlamingStakeModel;
extern CKeyFramedModelInstance g_FireEffectFireballModel;
extern CKeyFramedModelInstance g_FireEffectFireballSmallModel;
extern CKeyFramedModelInstance g_FireEffectFireballGreenModel;
extern CKeyFramedModelInstance g_FireEffectGunFlashModel;

// CKeyFramedModelInstance[5]
extern CKeyFramedModelInstance g_CFireEffectDebrisModels[5];

// CSmokeParticle[2048]
extern CSmokeParticle g_SmokeParticlePool[2048];

// CVector3i
extern CVector3i g_BillboardCameraRight;
extern CVector3i g_BillboardCameraUp;

// SMRGLPrimitiveQuadIndex
extern SMRGLPrimitiveQuadIndex g_BillboardPrimitive;

// SMRGLTextureBasic[20]
extern SMRGLTextureBasic g_GunFlameTextures[20];

// SVersionControlSession
extern SVersionControlSession g_VersionControlSession;

// char[256]
extern char g_CurrentFilename[256];

// char[264]
extern char g_VersionControlDirectory[264];

// char[32]
extern char g_WorkingDirectoryPath[32];

