#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D10000
// =============================================================================

// CCharacter*[50]
CCharacter* g_CharactersOnFire[50] = {};

// CDemonActorType
CDemonActorType g_CFilmReelClassInfo = {};
CDemonActorType g_CFilmProjectorClassInfo = {};

// CFireEffect
CFireEffect g_CFireEffectInstance = {};

// CFlameCan*[150]
CFlameCan* g_FlameCans[150] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_FireEffectFlamingStakeModel = {};
CKeyFramedModelInstance g_FireEffectFireballModel = {};
CKeyFramedModelInstance g_FireEffectFireballSmallModel = {};
CKeyFramedModelInstance g_FireEffectFireballGreenModel = {};
CKeyFramedModelInstance g_FireEffectGunFlashModel = {};

// CKeyFramedModelInstance[5]
CKeyFramedModelInstance g_CFireEffectDebrisModels[5] = {};

// CPodAuditRecord
CPodAuditRecord g_WorkingAuditRecord = {};

// CPodAuditRecord*
CPodAuditRecord* g_AuditRecordsArray = {};

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

// char[264]
char g_VersionControlDirectory[264] = {};

// int
int g_AuditRecordCount = {};
int g_TextureAnimCounter2 = {};
int g_TextureAnimCounter1 = {};
int g_CharactersOnFireCount = {};
int g_FlameCanCount = {};
int g_SmokeParticleAllocIndex = {};

// uint[3]
uint g_ShellBounceSoundHandles[3] = {};

