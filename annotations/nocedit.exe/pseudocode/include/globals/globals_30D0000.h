#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30D0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CPendulumClassInfo;
extern CDemonActorType g_CPlatformClassInfo;

// SMRGLHeaderPrimitive
extern SMRGLHeaderPrimitive DAT_030d4fd0;

// char[101][100]
extern char g_PathfindingVisited[101][100];

// char[65536]
extern char g_FileIOBuffer[65536];

