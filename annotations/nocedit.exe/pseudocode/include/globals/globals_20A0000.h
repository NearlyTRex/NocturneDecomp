#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CFilterFx.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x20A0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CActorDestinationClassInfo;

// CDemonFilter[4]
extern CDemonFilter CDemonFilter_ARRAY_020a4ad8[4];

// CDemonFilter[8]
extern CDemonFilter CDemonFilter_ARRAY_020a4878[8];

// CFilterCache
extern CFilterCache g_CFilterCacheInstance;

// CFilterFx
extern CFilterFx g_CFilterFXInstance;

// uchar[6291656]
extern uchar g_ShadowRestoreBuffer[6291656];

