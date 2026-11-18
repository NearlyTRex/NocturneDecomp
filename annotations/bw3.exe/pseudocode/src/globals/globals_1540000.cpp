#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1540000
// =============================================================================

// CBitFont*
CBitFont* g_MediumFont = {};
CBitFont* g_TinyFont = {};
CBitFont* g_CBitFont_PTR_01549aa8 = {};
CBitFont* g_CBitFont_PTR_01549aac = {};
CBitFont* g_CBitFont_PTR_01549ab0 = {};
CBitFont* g_SmallEditorFont = {};
CBitFont* g_CBitFont_PTR_01549ab8 = {};
CBitFont* g_MicroFont = {};
CBitFont* g_CBitFont_PTR_01549ac0 = {};

// CDemonActorType
CDemonActorType g_CDemnfolkClassInfo = {};
CDemonActorType g_CActorDestinationClassInfo = {};
CDemonActorType g_CDiseaseClassInfo = {};

// CDemonFilter[4]
CDemonFilter CDemonFilter_ARRAY_01548e60[4] = {};

// CDemonFilter[8]
CDemonFilter g_PlayerFilterPool[8] = {};

// CDemonGlobe*
CDemonGlobe* g_CurrentGlobe = {};

// CDemonLight*
CDemonLight* g_CurrentShadowLight = {};

// CFilterCache
CFilterCache g_CFilterCacheInstance = {};

// CFilterFX
CFilterFX g_CFilterFXInstance = {};

// CVector3f
CVector3f g_CVector3f_015485dc = {};
CVector3f g_StaticColorVector = {};

// CVector3f[16]
CVector3f g_ClipStageMaxYBuffer[16] = {};
CVector3f g_ClipStageMinYBuffer[16] = {};
CVector3f g_ClipStageMaxXBuffer[16] = {};
CVector3f g_ClipStageMinXBuffer[16] = {};
CVector3f g_ClipStageMinZBuffer[16] = {};

// CWinFont*
CWinFont* g_CWinFont_PTR_01549ac4 = {};
CWinFont* g_CWinFont_PTR_01549ac8 = {};
CWinFont* g_CWinFont_PTR_01549acc = {};
CWinFont* g_CWinFont_PTR_01549ad0 = {};

// SCameraViewportState
SCameraViewportState g_SavedCameraState = {};

// char*
char* g_CoronaLightingTextureData = {};

// float
float g_FLOAT_01548600 = {};
float g_FLOAT_01548608 = {};
float g_FLOAT_0154860c = {};
float g_FLOAT_01548614 = {};
float g_FLOAT_01548618 = {};
float g_FLOAT_01548620 = {};
float g_FLOAT_01548a98 = {};
float g_FLOAT_01548aa0 = {};
float g_FLOAT_01548aa4 = {};
float g_FLOAT_01548aac = {};
float g_FLOAT_01548ab0 = {};
float g_FLOAT_01548ab8 = {};
float g_FLOAT_01548b58 = {};
float g_FLOAT_01548b60 = {};
float g_FLOAT_01548b64 = {};
float g_FLOAT_01548b6c = {};
float g_FLOAT_01548b70 = {};
float g_FLOAT_01548b78 = {};

// int
int g_FlatShadingLightLevel = {};
int g_CoronaVisibilityEnabled = {};
int g_CoronaTargetX = {};
int g_CoronaTargetY = {};
int g_CoronaTargetDepth = {};
int g_INT_015485fc = {};
int g_INT_015486c0 = {};
int g_INT_0154890c = {};
int g_INT_01548b5c = {};
int g_INT_01548b68 = {};
int g_INT_01548b74 = {};

// int[240]
int g_CoronaLeftIntensity[240] = {};
int g_CoronaRightIntensity[240] = {};

// uchar
uchar g_UCHAR_015485e8 = {};
uchar g_ColorConstantsInitialized = {};

// uchar[6291656]
uchar g_ShadowRestoreBuffer[6291656] = {};

// uint
uint g_CubeClipStage2Count = {};
uint g_CubeClipStage3Count = {};
uint g_CubeClipStage5Count = {};
uint g_CubeClippedTriangleCount = {};

// uint[3]
uint g_TempTriangleIndices[3] = {};

