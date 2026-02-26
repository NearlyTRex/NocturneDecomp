#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMouse.h"
#include "types/classes/CPathMap.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2FD0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CNPCClassInfo;
extern CDemonActorType g_CPassengerClassInfo;

// CMouse
extern CMouse g_CMouseInstance;

// CPathMap[12]
extern CPathMap CPathMap_ARRAY_02fd9060[12];

// uchar[768]
extern uchar g_PaletteData[768];

