#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonPod.h"
#include "types/classes/CProceduralTexture.h"
#include "types/structs/SSoftwareEdge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30E0000
// =============================================================================

// CDemonPod
extern CDemonPod g_CDemonPodInstance;

// CProceduralTexture
extern CProceduralTexture g_CProceduralTextureInstance;

// SSoftwareEdge[16]
extern SSoftwareEdge g_SoftwareEdgeBuffer[16];
extern SSoftwareEdge g_SoftwareEdgeTable[16];

// int
extern int g_SoftwareEdgeCount;
extern int g_SoftwareMinScanline;
extern int g_SoftwareMaxScanline;
extern int g_RenderedTriangleCount;
extern int g_ActiveEdgeCount;
extern int g_MinScanline;
extern int g_MaxScanline;

