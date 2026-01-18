#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonPod.h"
#include "types/structs/SSoftwareEdge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30E0000
// =============================================================================

extern CDemonPod g_CDemonPodInstance;
extern SSoftwareEdge g_SoftwareEdgeBuffer[16];
extern SSoftwareEdge g_SoftwareEdgeTable[16];

