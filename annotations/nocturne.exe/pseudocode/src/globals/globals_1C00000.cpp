#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C00000
// =============================================================================

// CCharacter*[50]
CCharacter* g_GunFlameCandidates[50] = {};

// CDemonActorType
CDemonActorType g_CFilmReelClassInfo = {};
CDemonActorType g_CFilmProjectorClassInfo = {};

// CEventList
CEventList g_CEventList_01c03a10 = {};

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

// CMatrix3x3i
CMatrix3x3i g_TransformMatrix = {};

// CSmokeParticle[2048]
CSmokeParticle g_SmokeParticlePool[2048] = {};

// CVector3i
CVector3i g_BillboardCameraRight = {};
CVector3i g_BillboardCameraUp = {};

// DWORD
DWORD g_JoyXPos = {};
DWORD g_JoyYPos = {};
DWORD g_JoyRPos = {};
DWORD g_JoyZPos = {};
DWORD g_JoyButtons = {};

// MainScanlineFunc*
MainScanlineFunc* g_ScanlineRenderFunc = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_BillboardPrimitive = {};

// SMRGLTextureBasic[20]
SMRGLTextureBasic g_GunFlameTextures[20] = {};

// SProjectionParams
SProjectionParams g_Projection = {};

// SRGBColorPalette*
SRGBColorPalette* g_CurrentPalette = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_RedBitPosition = {};
_BIT_INTEGER32 g_RedDitherShift = {};
_BIT_INTEGER32 g_GreenBitPosition = {};
_BIT_INTEGER32 g_GreenDitherShift = {};
_BIT_INTEGER32 g_BlueBitPosition = {};
_BIT_INTEGER32 g_BlueDitherShift = {};
_BIT_INTEGER32 g_RenderStateFlags = {};

// _MMX_INTEGER
_MMX_INTEGER g_SavedMMX0 = {};
_MMX_INTEGER g_SavedMMX1 = {};
_MMX_INTEGER g_SavedMMX2 = {};
_MMX_INTEGER g_SavedMMX3 = {};
_MMX_INTEGER g_SavedMMX4 = {};
_MMX_INTEGER g_SavedMMX5 = {};
_MMX_INTEGER g_SavedMMX6 = {};
_MMX_INTEGER g_SavedMMX7 = {};

// char[256]
char g_EventErrorMessageBuffer[256] = {};

// char[4952]
char g_KeyboardState[4952] = {};

// int
int g_RedScaleFactor = {};
int g_GreenScaleFactor = {};
int g_BlueScaleFactor = {};
int g_ClipLeft = {};
int g_ClipTop = {};
int g_ClipRight = {};
int g_ClipBottom = {};
int g_ViewportWidth = {};
int g_ViewportHeight = {};
int g_ActiveRenderColor = {};
int g_CurrentLightingValue = {};
int g_AdvancedClippingEnabled = {};
int g_TextureBits = {};
int g_UseExternalRenderer = {};
int g_INT_01c038f4 = {};
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
int g_EventDryRun = {};
int g_TextureAnimCounter2 = {};
int g_TextureAnimCounter1 = {};
int g_GunFlameCandidateCount = {};
int g_FlameCanCount = {};
int g_SmokeParticleAllocIndex = {};

// uchar*
uchar* g_CurrentTextureData = {};
uchar* g_CurrentTextureOpacityData = {};

// uchar[768]
uchar g_SourcePaletteData[768] = {};
uchar g_DefaultPalette[768] = {};

// uint[256]
uint g_Hardware32BitPalette[256] = {};

// uint[3]
uint g_ShellBounceSoundHandles[3] = {};

// uint[GAME_RECIPROCAL_TABLE_SIZE]
uint g_ReciprocalLookupTable[GAME_RECIPROCAL_TABLE_SIZE] = {};

// ulong
ulong g_SolidColorMode = {};

// ushort[256]
ushort g_Hardware16BitPalette[256] = {};

