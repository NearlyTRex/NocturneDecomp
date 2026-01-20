#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x30E0000
// =============================================================================

// CDemonPod
CDemonPod g_CDemonPodInstance = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SoftwareEdgeBuffer[16] = {};
SSoftwareEdge g_SoftwareEdgeTable[16] = {};

// int
int g_SoftwareEdgeCount = {};
int g_SoftwareMinScanline = {};
int g_SoftwareMaxScanline = {};
int g_RenderedTriangleCount = {};
int g_ActiveEdgeCount = {};
int g_MinScanline = {};
int g_MaxScanline = {};

