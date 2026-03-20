#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CE0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CDynamiteClassInfo;

// CDemonTriangle[8]
extern CDemonTriangle g_ClippedTriangleBuffer[8];

// CVector3f
extern CVector3f g_DebugCubeBasePoint;
extern CVector3f g_FloorRayDirection;
extern CVector3f CVector3f_02ceed24;

// CVector3f[16]
extern CVector3f g_ClipInputVertices[16];
extern CVector3f g_ClipBuffer1Vertices[16];
extern CVector3f g_ClipBuffer2Vertices[16];
extern CVector3f g_ClipBuffer3Vertices[16];
extern CVector3f g_ClipBuffer4Vertices[16];
extern CVector3f g_ClipBuffer5Vertices[16];
extern CVector3f g_ClipOutputVertices[16];

// byte
extern byte g_FloorCacheValid;

// char[1024]
extern char g_MessageFormatBuffer[1024];
extern char g_DialogMessageBuffer_02cef130[1024];
extern char g_ErrorMessageBuffer_02cef530[1024];
extern char g_StatusMessageBuffer[1024];

// char[2048]
extern char g_ConfirmationMessageBuffer[2048];

// int
extern int INT_02cee5ac;
extern int g_ClipInputVertexCount;
extern int g_ClipBuffer1VertexCount;
extern int g_ClipBuffer2VertexCount;
extern int g_ClipBuffer3VertexCount;
extern int g_ClipBuffer4VertexCount;
extern int g_ClipBuffer5VertexCount;
extern int g_ClipOutputVertexCount;

