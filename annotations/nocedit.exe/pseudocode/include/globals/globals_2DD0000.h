#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFileManager.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DD0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CLeverClassInfo;
extern CDemonActorType g_CLightGunClassInfo;
extern CDemonActorType g_CLightConeClassInfo;

// CDemonFileManager
extern CDemonFileManager g_CDemonFileManagerInstance;

// CVector3i
extern CVector3i g_CachedViewPosition;
extern CVector3i g_NormalizedViewVector;

// char[512]
extern char g_ErrorMessageBuffer_02dd3130[512];

