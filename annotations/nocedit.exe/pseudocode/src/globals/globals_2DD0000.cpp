#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DD0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CLeverClassInfo = {};
CDemonActorType g_CLightGunClassInfo = {};
CDemonActorType g_CLightConeClassInfo = {};

// CDemonFileManager
CDemonFileManager g_CDemonFileManagerInstance = {};

// CVector3i
CVector3i g_CachedViewPosition = {};
CVector3i g_NormalizedViewVector = {};

// char[4096]
char g_ErrorMessageBuffer_02dd3130[4096] = {};

// int
int g_LightDirectionX2 = {};
int g_LightDirectionY2 = {};
int g_LightDirectionZ2 = {};

