#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CSmokeParticle.h"
#include "types/funcdefs/MainScanlineFunc.h"
#include "types/structs/SProjectionParams.h"

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

// CSmokeParticle[2048]
extern CSmokeParticle g_CSmokeParticle_ARRAY_01c0a140[2048];

// MainScanlineFunc*
extern MainScanlineFunc* g_ScanlineRenderFunc;

// SProjectionParams
extern SProjectionParams g_Projection;

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
extern int g_UseExternalRenderer;
extern int g_MMXSupported;
extern int g_VertexPreprocessMode;
extern int g_SolidRedComponent;
extern int g_SolidGreenComponent;
extern int g_SolidBlueComponent;

// uchar[768]
extern uchar g_SourcePaletteData[768];
extern uchar g_DefaultPalette[768];

// uint[1600]
extern uint g_ReciprocalLookupTable[1600];

// ulong
extern ulong g_SolidColorMode;

