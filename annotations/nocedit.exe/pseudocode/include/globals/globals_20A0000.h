#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CFilterFx.h"
#include "types/classes/CWinFont.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x20A0000
// =============================================================================

// CBitFont*
extern CBitFont* g_MediumFont;
extern CBitFont* g_TinyFont;
extern CBitFont* g_ThemeFont;
extern CBitFont* g_SmallEditorFont;
extern CBitFont* g_ConsoleFont;
extern CBitFont* g_MicroFont;

// CDemonActorType
extern CDemonActorType g_CActorDestinationClassInfo;

// CDemonFilter[4]
extern CDemonFilter CDemonFilter_ARRAY_020a4ad8[4];

// CDemonFilter[8]
extern CDemonFilter CDemonFilter_ARRAY_020a4878[8];

// CDemonLight*
extern CDemonLight* g_CurrentShadowLight;

// CFilterCache
extern CFilterCache g_CFilterCacheInstance;

// CFilterFx
extern CFilterFx g_CFilterFXInstance;

// CWinFont*
extern CWinFont* g_MediumWinFont;
extern CWinFont* g_TinyWinFont;
extern CWinFont* g_ThemeWinFont;
extern CWinFont* g_DebugWinFont;

// uchar[6291656]
extern uchar g_ShadowRestoreBuffer[6291656];

