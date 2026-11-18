#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C70000
// =============================================================================

// CCharacter*[50]
CCharacter* g_GunFlameCandidates[50] = {};

// CDemonActorType
CDemonActorType g_CFilmReelClassInfo = {};
CDemonActorType g_CDemonActorType_01c73618 = {};

// CFireEffect
CFireEffect g_CFireEffect_01c73654 = {};

// CFlameCan*[150]
CFlameCan* g_FlameCans[150] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_FireEffectFlamingStakeModel = {};
CKeyFramedModelInstance g_FireEffectFireballModel = {};
CKeyFramedModelInstance g_FireEffectFireballSmallModel = {};
CKeyFramedModelInstance g_FireEffectFireballGreenModel = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c73c88 = {};
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

// char[256]
char g_EventErrorMessageBuffer[256] = {};

// int
int g_EventDryRun = {};
int g_TextureAnimCounter2 = {};
int g_TextureAnimCounter1 = {};
int g_GunFlameCandidateCount = {};
int g_FlameCanCount = {};
int g_SmokeParticleAllocIndex = {};

// uint[3]
uint g_ShellBounceSoundHandles[3] = {};

