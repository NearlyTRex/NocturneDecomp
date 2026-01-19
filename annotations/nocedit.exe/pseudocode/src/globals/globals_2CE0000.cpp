#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CE0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDynamiteClassInfo = {};

// CDemonTriangle[8]
CDemonTriangle g_ClippedTriangleBuffer[8] = {};

// CVector3f
CVector3f g_DebugCubeBasePoint = {};
CVector3f g_FloorRayDirection = {};

// CVector3f[16]
CVector3f g_ClipInputVertices[16] = {};
CVector3f g_ClipBuffer1Vertices[16] = {};
CVector3f g_ClipBuffer2Vertices[16] = {};
CVector3f g_ClipBuffer3Vertices[16] = {};
CVector3f g_ClipBuffer4Vertices[16] = {};
CVector3f g_ClipBuffer5Vertices[16] = {};
CVector3f g_ClipOutputVertices[16] = {};

