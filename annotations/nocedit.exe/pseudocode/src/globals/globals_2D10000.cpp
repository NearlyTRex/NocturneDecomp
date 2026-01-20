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

// char[256]
char g_CurrentFilenameBuffer[256] = {};

// char[264]
char g_VersionControlDirectory[264] = {};

// char[32]
char g_WorkingDirectoryPath[32] = {};

// int
int g_PodCreationTime = {};
int g_AuditOperationType = {};
int g_CurrentFileTimestamp = {};
int g_CurrentFileSize = {};
int g_CurrentFileOffset = {};
int g_CurrentFileCompressedSize = {};
int g_AuditRecordCount = {};
int g_SmokeParticleAllocIndex = {};

// undefined4
undefined4 DAT_02d13560 = {};
undefined4 DAT_02d13564 = {};
undefined4 DAT_02d13eb4 = {};
undefined4 DAT_02d13eb8 = {};
undefined4 DAT_02d13f80 = {};
undefined4 DAT_02d13f84 = {};
undefined4 DAT_02d13f88 = {};
undefined4 DAT_02d141e0 = {};

