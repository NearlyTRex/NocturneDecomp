#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/funcdefs/FileSearchHandler.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C10000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CZombieDogClassInfo;
extern CDemonActorType g_CDoorClassInfo;

// FileSearchHandler*[5]
extern FileSearchHandler* g_SearchHandlers[5];

// char[72]
extern char g_PolyDataConversionBuffer[72];

