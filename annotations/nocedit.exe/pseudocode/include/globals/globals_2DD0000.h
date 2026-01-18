#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFileManager.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DD0000
// =============================================================================

extern CDemonActorType g_CLeverClassInfo;
extern CVector3i g_CachedViewPosition;
extern CVector3i g_NormalizedViewVector;
extern CDemonActorType g_CLightGunClassInfo;
extern CDemonActorType g_CLightConeClassInfo;
extern CDemonFileManager g_CDemonFileManagerInstance;

