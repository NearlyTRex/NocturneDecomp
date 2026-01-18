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

extern CDemonActorType g_CActorDestinationClassInfo;
extern CDemonFilter CDemonFilter_ARRAY_020a4878[8];
extern CDemonFilter CDemonFilter_ARRAY_020a4ad8[4];
extern CFilterCache g_CFilterCacheInstance;
extern CFilterFx g_CFilterFXInstance;

