#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C50000
// =============================================================================

// CCharacter*[50]
CCharacter* g_GunFlameCandidates[50] = {};

// CDemonActorType
CDemonActorType g_CFilmReelClassInfo = {};
CDemonActorType g_CFilmProjectorClassInfo = {};

// CEventList
CEventList g_CEventList_01c51d80 = {};

// CFireEffect
CFireEffect g_CFireEffect_01c57074 = {};

// CFlameCan*[150]
CFlameCan* g_FlameCans[150] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_FireEffectFlamingStakeModel = {};
CKeyFramedModelInstance g_FireEffectFireballModel = {};
CKeyFramedModelInstance g_FireEffectFireballSmallModel = {};
CKeyFramedModelInstance g_FireEffectFireballGreenModel = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c576a8 = {};
CKeyFramedModelInstance g_FireEffectGunFlashModel = {};

// CKeyFramedModelInstance[5]
CKeyFramedModelInstance g_CFireEffectDebrisModels[5] = {};

// CSmokeParticle[2048]
CSmokeParticle g_SmokeParticlePool[2048] = {};

// CVector3i
CVector3i g_BillboardCameraRight = {};
CVector3i g_BillboardCameraUp = {};

// DWORD
DWORD g_JoyRPos = {};
DWORD g_JoyButtons = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_BillboardPrimitive = {};

// SMRGLTextureBasic[20]
SMRGLTextureBasic g_GunFlameTextures[20] = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_RenderStateFlags = {};

// char[256]
char g_EventErrorMessageBuffer[256] = {};

// char[4952]
char g_KeyboardState[4952] = {};

// int
int g_INT_01c50940 = {};
int g_INT_01c50944 = {};
int g_INT_01c50948 = {};
int g_INT_01c5094c = {};
int g_PerspectiveReciprocal = {};
int g_JoyXPos = {};
int g_JoyYPos = {};
int g_JoyZPos = {};
int g_JoystickPresent = {};
int g_JoyWantUAxis = {};
int g_JoyWantRAxis = {};
int g_JoystickHasPOV = {};
int g_JoyPOVDirection = {};
int g_MMXSupported = {};
int g_CPUModel = {};
int g_CalibratedCPUSpeed = {};
int g_BlendMode = {};
int g_ProcessorType = {};
int g_VertexPreprocessMode = {};
int g_SolidRedComponent = {};
int g_SolidGreenComponent = {};
int g_SolidBlueComponent = {};
int g_RelativeX = {};
int g_RelativeY = {};
int g_RelativeZ = {};
int g_CameraOriginX = {};
int g_CameraOriginY = {};
int g_CameraOriginZ = {};
int g_CameraRotationPitch = {};
int g_CameraRotationYaw = {};
int g_CameraRotationRoll = {};
int g_LightDirectionX = {};
int g_LightDirectionY = {};
int g_LightDirectionZ = {};
int g_INT_01c51d5c = {};
int g_INT_01c51d60 = {};
int g_INT_01c51d64 = {};
int g_INT_01c51d68 = {};
int g_INT_01c51d6c = {};
int g_INT_01c51d70 = {};
int g_INT_01c51d74 = {};
int g_INT_01c51d78 = {};
int g_INT_01c51d7c = {};
int g_EventDryRun = {};
int g_TextureAnimCounter2 = {};
int g_TextureAnimCounter1 = {};
int g_GunFlameCandidateCount = {};
int g_FlameCanCount = {};
int g_SmokeParticleAllocIndex = {};

// uchar*
uchar* g_CurrentTextureData = {};
uchar* g_CurrentTextureOpacityData = {};

// uint[3]
uint g_ShellBounceSoundHandles[3] = {};

// ulong
ulong g_SolidColorMode = {};

