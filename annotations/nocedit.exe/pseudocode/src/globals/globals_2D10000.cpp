#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D10000
// =============================================================================

// CDemonActorType
CDemonActorType g_CFilmReelClassInfo = {};
CDemonActorType g_CFilmProjectorClassInfo = {};

// CFireEffect
CFireEffect g_CFireEffectInstance = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_FireEffectFlamingStakeModel = {};
CKeyFramedModelInstance g_FireEffectFireballModel = {};
CKeyFramedModelInstance g_FireEffectFireballSmallModel = {};
CKeyFramedModelInstance g_FireEffectFireballGreenModel = {};
CKeyFramedModelInstance g_FireEffectGunFlashModel = {};

// CKeyFramedModelInstance[5]
CKeyFramedModelInstance g_CFireEffectDebrisModels[5] = {};

// CSmokeParticle[2048]
CSmokeParticle g_SmokeParticlePool[2048] = {};

// CVector3i
CVector3i g_BillboardCameraRight = {};
CVector3i g_BillboardCameraUp = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_BillboardPrimitive = {};

// SMRGLTextureBasic[20]
SMRGLTextureBasic g_GunFlameTextures[20] = {};

// SVersionControlSession
SVersionControlSession g_VersionControlSession = {};

// char[256]
char g_CurrentFilename[256] = {};

// char[264]
char g_VersionControlDirectory[264] = {};

// char[32]
char g_WorkingDirectoryPath[32] = {};

