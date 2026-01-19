#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D10000
// =============================================================================

SVersionControlSession g_VersionControlSession;
CDemonActorType g_CFilmReelClassInfo;
CDemonActorType g_CFilmProjectorClassInfo;
CFireEffect g_CFireEffectInstance;
CVector3i g_BillboardCameraRight;
CVector3i g_BillboardCameraUp;
SMRGLPrimitiveQuadIndex g_BillboardPrimitive;
CKeyFramedModelInstance g_FireEffectFlamingStakeModel;
CKeyFramedModelInstance g_FireEffectFireballModel;
CKeyFramedModelInstance g_FireEffectFireballSmallModel;
CKeyFramedModelInstance g_FireEffectFireballGreenModel;
CKeyFramedModelInstance g_FireEffectGunFlashModel;
CKeyFramedModelInstance g_CFireEffectDebrisModels[5] = {};
SMRGLTextureBasic g_GunFlameTextures[20] = {};
CSmokeParticle g_SmokeParticlePool[2048] = {};

