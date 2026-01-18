#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CE0000
// =============================================================================

extern CVector3f g_DebugCubeBasePoint;
extern CVector3f g_FloorRayDirection;
extern CVector3f g_ClipInputVertices[16];
extern CVector3f g_ClipBuffer1Vertices[16];
extern CVector3f g_ClipBuffer2Vertices[16];
extern CVector3f g_ClipBuffer3Vertices[16];
extern CVector3f g_ClipBuffer4Vertices[16];
extern CVector3f g_ClipBuffer5Vertices[16];
extern CVector3f g_ClipOutputVertices[16];
extern CDemonTriangle g_ClippedTriangleBuffer[8];
extern CDemonActorType g_CDynamiteClassInfo;

