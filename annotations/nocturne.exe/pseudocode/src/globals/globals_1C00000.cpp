#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C00000
// =============================================================================

// CDemonActorType
CDemonActorType g_CFilmReelActorType_01c08c8c = {};
CDemonActorType g_CFilmProjectorActorType_01c08cc8 = {};

// CFireEffect
CFireEffect g_CFireEffect_01c08d04 = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08d48 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08ec4 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09040 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c091bc = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09338 = {};

// CKeyFramedModelInstance[5]
CKeyFramedModelInstance g_CKeyFramedModelInstance_ARRAY_01c094bc[5] = {};

// CSmokeParticle[2048]
CSmokeParticle g_CSmokeParticle_ARRAY_01c0a140[2048] = {};

// MainScanlineFunc*
MainScanlineFunc* g_ScanlineRenderFunc = {};

// SProjectionParams
SProjectionParams g_Projection = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_RedBitPosition = {};
_BIT_INTEGER32 g_RedDitherShift = {};
_BIT_INTEGER32 g_GreenBitPosition = {};
_BIT_INTEGER32 g_GreenDitherShift = {};
_BIT_INTEGER32 g_BlueBitPosition = {};
_BIT_INTEGER32 g_BlueDitherShift = {};
_BIT_INTEGER32 g_RenderStateFlags = {};

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
int g_UseExternalRenderer = {};
int g_MMXSupported = {};
int g_VertexPreprocessMode = {};
int g_SolidRedComponent = {};
int g_SolidGreenComponent = {};
int g_SolidBlueComponent = {};

// uchar[768]
uchar g_SourcePaletteData[768] = {};
uchar g_DefaultPalette[768] = {};

// uint[1600]
uint g_ReciprocalLookupTable[1600] = {};

// ulong
ulong g_SolidColorMode = {};

