#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x14B0000
// =============================================================================

// CBitFont*
CBitFont* g_MediumFont = {};
CBitFont* g_TinyFont = {};
CBitFont* g_ThemeFont = {};
CBitFont* g_SmallEditorFont = {};
CBitFont* g_CBitFont_PTR_014b9908 = {};
CBitFont* g_MicroFont = {};

// CDemonActorType
CDemonActorType g_CActorDestinationClassInfo = {};

// CDemonFilter[4]
CDemonFilter g_CDemonFilter_ARRAY_014b8cb8[4] = {};

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
CVector3f g_DownwardRayDirection = {};
CVector3f g_StaticColorVector = {};

// CVector3f[16]
CVector3f g_CubeInputTriangleBuffer[16] = {};
CVector3f g_ClipStageMaxYBuffer[16] = {};
CVector3f g_ClipStageMinYBuffer[16] = {};
CVector3f g_ClipStageMaxXBuffer[16] = {};
CVector3f g_ClipStageMinXBuffer[16] = {};
CVector3f g_ClipStageMinZBuffer[16] = {};
CVector3f g_CubeClippedTriangleBuffer[16] = {};

// CWinFont*
CWinFont* g_CWinFont_PTR_014b9910 = {};
CWinFont* g_CWinFont_PTR_014b9914 = {};
CWinFont* g_CWinFont_PTR_014b9918 = {};
CWinFont* g_CWinFont_PTR_014b991c = {};

// char*
char* g_CoronaLightingTextureData = {};

// float
float g_FLOAT_014b89e8 = {};
float g_FLOAT_014b89f0 = {};
float g_FLOAT_014b89f4 = {};
float g_FLOAT_014b89fc = {};
float g_FLOAT_014b8a00 = {};
float g_FLOAT_014b8a08 = {};

// int
int g_FlatShadingLightLevel = {};
int g_CoronaVisibilityEnabled = {};
int g_CoronaTargetX = {};
int g_CoronaTargetY = {};
int g_CoronaTargetDepth = {};
int g_INT_014b848c = {};
int g_INT_014b8550 = {};
int g_INT_014b8614 = {};
int g_INT_014b86d8 = {};
int g_INT_014b879c = {};
int g_INT_014b8860 = {};
int g_INT_014b8924 = {};
int g_INT_014b89ec = {};
int g_INT_014b89f8 = {};
int g_INT_014b8a04 = {};

// int[240]
int g_CoronaLeftIntensity[240] = {};
int g_CoronaRightIntensity[240] = {};

// uchar
uchar g_DownwardRayInitialized = {};
uchar g_ColorConstantsInitialized = {};

// uchar[6291656]
uchar g_ShadowRestoreBuffer[6291656] = {};

// uint[3]
uint g_TempTriangleIndices[3] = {};

