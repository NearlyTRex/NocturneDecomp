#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C00000
// =============================================================================

// CCharacter*[50]
CCharacter* g_CCharacter_PTR_ARRAY_01c09e0c[50] = {};

// CDemonActorType
CDemonActorType g_CFilmReelActorType_01c08c8c = {};
CDemonActorType g_CFilmProjectorActorType_01c08cc8 = {};

// CEventList
CEventList g_CEventList_01c03a10 = {};

// CFireEffect
CFireEffect g_CFireEffect_01c08d04 = {};

// CFlameCan*[150]
CFlameCan* g_CFlameCan_PTR_ARRAY_01c09ed8[150] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08d48 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08ec4 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09040 = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c091bc = {};
CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09338 = {};

// CKeyFramedModelInstance[5]
CKeyFramedModelInstance g_CKeyFramedModelInstance_ARRAY_01c094bc[5] = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrix = {};

// CSmokeParticle[2048]
CSmokeParticle g_CSmokeParticle_ARRAY_01c0a140[2048] = {};

// CVector3i
CVector3i g_CVector3i_01c08d08 = {};
CVector3i g_CVector3i_01c08d14 = {};

// DWORD
DWORD g_DWORD_01c038f8 = {};
DWORD g_DWORD_01c038fc = {};
DWORD g_DWORD_01c03900 = {};
DWORD g_DWORD_01c03904 = {};
DWORD g_DWORD_01c03908 = {};

// MainScanlineFunc*
MainScanlineFunc* g_ScanlineRenderFunc = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_SMRGLPrimitiveQuadIndex_01c08d20 = {};

// SMRGLTextureBasic[20]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_01c09c28[20] = {};

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
_MMX_INTEGER g_MMX_INTEGER_01c03958 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03960 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03968 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03970 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03978 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03980 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03988 = {};
_MMX_INTEGER g_MMX_INTEGER_01c03990 = {};

// char[256]
char g_CHAR_ARRAY_01c08b60[256] = {};

// char[4952]
char g_CHAR_ARRAY_01c02598[4952] = {};

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
int g_INT_01c0390c = {};
int g_INT_01c03910 = {};
int g_INT_01c03914 = {};
int g_INT_01c0391c = {};
int g_INT_01c03920 = {};
int g_MMXSupported = {};
int g_INT_01c0394c = {};
int g_INT_01c03950 = {};
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
int g_INT_01c039d0 = {};
int g_INT_01c039d4 = {};
int g_INT_01c039d8 = {};
int g_INT_01c039dc = {};
int g_INT_01c039e0 = {};
int g_INT_01c039e4 = {};
int g_INT_01c08b5c = {};
int g_INT_01c094b4 = {};
int g_INT_01c094b8 = {};
int g_INT_01c09e08 = {};
int g_INT_01c09ed4 = {};
int g_INT_01c0a13c = {};

// uchar*
uchar* g_CurrentTextureData = {};
uchar* g_CurrentTextureOpacityData = {};

// uchar[768]
uchar g_SourcePaletteData[768] = {};
uchar g_DefaultPalette[768] = {};

// uint[256]
uint g_Hardware32BitPalette[256] = {};

// uint[3]
uint g_UINT_ARRAY_01c0a130[3] = {};

// uint[GAME_RECIPROCAL_TABLE_SIZE]
uint g_ReciprocalLookupTable[GAME_RECIPROCAL_TABLE_SIZE] = {};

// ulong
ulong g_SolidColorMode = {};

// ushort[256]
ushort g_Hardware16BitPalette[256] = {};

