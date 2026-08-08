#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CSmokeParticle.h"
#include "types/funcdefs/MainScanlineFunc.h"
#include "types/structs/SProjectionParams.h"
#include "types/structs/SRGBColorPalette.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1C00000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CFilmReelActorType_01c08c8c;
extern CDemonActorType g_CFilmProjectorActorType_01c08cc8;

// CFireEffect
extern CFireEffect g_CFireEffect_01c08d04;

// CKeyFramedModelInstance
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08d48;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c08ec4;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09040;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c091bc;
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_01c09338;

// CKeyFramedModelInstance[5]
extern CKeyFramedModelInstance g_CKeyFramedModelInstance_ARRAY_01c094bc[5];

// CMatrix3x3i
extern CMatrix3x3i g_TransformMatrix;

// CSmokeParticle[2048]
extern CSmokeParticle g_CSmokeParticle_ARRAY_01c0a140[2048];

// MainScanlineFunc*
extern MainScanlineFunc* g_ScanlineRenderFunc;

// SProjectionParams
extern SProjectionParams g_Projection;

// SRGBColorPalette*
extern SRGBColorPalette* g_CurrentPalette;

// _BIT_INTEGER32
extern _BIT_INTEGER32 g_RedBitPosition;
extern _BIT_INTEGER32 g_RedDitherShift;
extern _BIT_INTEGER32 g_GreenBitPosition;
extern _BIT_INTEGER32 g_GreenDitherShift;
extern _BIT_INTEGER32 g_BlueBitPosition;
extern _BIT_INTEGER32 g_BlueDitherShift;
extern _BIT_INTEGER32 g_RenderStateFlags;

// int
extern int g_RedScaleFactor;
extern int g_GreenScaleFactor;
extern int g_BlueScaleFactor;
extern int g_ClipLeft;
extern int g_ClipTop;
extern int g_ClipRight;
extern int g_ClipBottom;
extern int g_ViewportWidth;
extern int g_ViewportHeight;
extern int g_ActiveRenderColor;
extern int g_CurrentLightingValue;
extern int g_AdvancedClippingEnabled;
extern int g_TextureBits;
extern int g_UseExternalRenderer;
extern int g_MMXSupported;
extern int g_BlendMode;
extern int g_ProcessorType;
extern int g_VertexPreprocessMode;
extern int g_SolidRedComponent;
extern int g_SolidGreenComponent;
extern int g_SolidBlueComponent;
extern int g_RelativeX;
extern int g_RelativeY;
extern int g_RelativeZ;
extern int g_CameraOriginX;
extern int g_CameraOriginY;
extern int g_CameraOriginZ;

// uchar*
extern uchar* g_CurrentTextureData;
extern uchar* g_CurrentTextureOpacityData;

// uchar[768]
extern uchar g_SourcePaletteData[768];
extern uchar g_DefaultPalette[768];

// uint[1600]
extern uint g_ReciprocalLookupTable[1600];

// uint[256]
extern uint g_Hardware32BitPalette[256];

// ulong
extern ulong g_SolidColorMode;

// ushort[256]
extern ushort g_Hardware16BitPalette[256];

