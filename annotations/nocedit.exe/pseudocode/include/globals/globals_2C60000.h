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

// CDemonActorType
extern CDemonActorType g_CDraculaBrideClassInfo;

// CDemonRenderer
extern CDemonRenderer g_CDemonRendererInstance;

// SEdgeData[16]
extern SEdgeData g_EdgeInterpolationArray[16];

// SEdgeTableEntry[40]
extern SEdgeTableEntry g_GlobalEdgeTable[40];

// SFace[5000]
extern SFace g_CapturedFaces[5000];

// SFreaky[6]
extern SFreaky SFreaky_ARRAY_02c6d0c0[6];

// int[16]
extern int g_VertexIndexBuffer[16];

