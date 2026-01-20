#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x20A0000
// =============================================================================

// CBitFont*
CBitFont* g_MediumFont = {};
CBitFont* g_TinyFont = {};
CBitFont* g_ThemeFont = {};
CBitFont* g_SmallEditorFont = {};
CBitFont* g_ConsoleFont = {};
CBitFont* g_MicroFont = {};

// CDemonActorType
CDemonActorType g_CActorDestinationClassInfo = {};

// CDemonFilter[4]
CDemonFilter CDemonFilter_ARRAY_020a4ad8[4] = {};

// CDemonFilter[8]
CDemonFilter CDemonFilter_ARRAY_020a4878[8] = {};

// CDemonLight*
CDemonLight* g_CurrentShadowLight = {};

// CFilterCache
CFilterCache g_CFilterCacheInstance = {};

// CFilterFx
CFilterFx g_CFilterFXInstance = {};

// CWinFont*
CWinFont* g_MediumWinFont = {};
CWinFont* g_TinyWinFont = {};
CWinFont* g_ThemeWinFont = {};
CWinFont* g_DebugWinFont = {};

// uchar[6291656]
uchar g_ShadowRestoreBuffer[6291656] = {};

