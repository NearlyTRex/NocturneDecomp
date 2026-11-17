#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1510000
// =============================================================================

// CBitFont*
CBitFont* g_MediumFont = {};
CBitFont* g_TinyFont = {};
CBitFont* g_ThemeFont = {};
CBitFont* g_SmallEditorFont = {};
CBitFont* g_CBitFont_PTR_01511cc8 = {};
CBitFont* g_MicroFont = {};
CBitFont* g_CBitFont_PTR_01511cd0 = {};

// CDemonActorType
CDemonActorType g_CActorDestinationClassInfo = {};

// CDemonFilter[4]
CDemonFilter CDemonFilter_ARRAY_01511078[4] = {};

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
CVector3f g_CVector3f_0151082c = {};
CVector3f g_StaticColorVector = {};

// CVector3f[16]
CVector3f g_ClipStageMaxYBuffer[16] = {};
CVector3f g_ClipStageMinYBuffer[16] = {};
CVector3f g_ClipStageMaxXBuffer[16] = {};
CVector3f g_ClipStageMinXBuffer[16] = {};
CVector3f g_ClipStageMinZBuffer[16] = {};

// CWinFont*
CWinFont* g_CWinFont_PTR_01511cd4 = {};
CWinFont* g_CWinFont_PTR_01511cd8 = {};
CWinFont* g_CWinFont_PTR_01511cdc = {};
CWinFont* g_CWinFont_PTR_01511ce0 = {};

// SCameraViewportState
SCameraViewportState g_SavedCameraState = {};

// float
float g_FLOAT_01510850 = {};
float g_FLOAT_01510858 = {};
float g_FLOAT_0151085c = {};
float g_FLOAT_01510864 = {};
float g_FLOAT_01510868 = {};
float g_FLOAT_01510870 = {};
float g_FLOAT_01510ce8 = {};
float g_FLOAT_01510cf0 = {};
float g_FLOAT_01510cf4 = {};
float g_FLOAT_01510cfc = {};
float g_FLOAT_01510d00 = {};
float g_FLOAT_01510d08 = {};
float g_FLOAT_01510da8 = {};
float g_FLOAT_01510db0 = {};
float g_FLOAT_01510db4 = {};
float g_FLOAT_01510dbc = {};
float g_FLOAT_01510dc0 = {};
float g_FLOAT_01510dc8 = {};

// int
int g_CoronaVisibilityEnabled = {};
int g_CoronaTargetX = {};
int g_CoronaTargetY = {};
int g_CoronaTargetDepth = {};
int g_INT_0151084c = {};
int g_INT_01510910 = {};
int g_INT_01510b5c = {};
int g_INT_01510dac = {};
int g_INT_01510db8 = {};
int g_INT_01510dc4 = {};

// uchar
uchar g_UCHAR_01510838 = {};
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

