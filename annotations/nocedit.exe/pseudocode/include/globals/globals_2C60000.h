#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonRenderer.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SEdgeTableEntry.h"
#include "types/structs/SFace.h"
#include "types/structs/SFreaky.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C60000
// =============================================================================

extern SEdgeData g_EdgeInterpolationArray[16];
extern CDemonActorType g_CDraculaBrideClassInfo;
extern SFreaky SFreaky_ARRAY_02c6d0c0[6];
extern SEdgeTableEntry g_GlobalEdgeTable[40];
extern CDemonRenderer g_CDemonRendererInstance;
extern int g_VertexIndexBuffer[16];
extern SFace g_CapturedFaces[5000];

