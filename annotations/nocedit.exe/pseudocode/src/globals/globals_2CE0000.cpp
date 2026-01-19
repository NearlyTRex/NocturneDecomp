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

// char[1024]
char g_DialogMessageBuffer_02cef130[1024] = {};
char g_StatusMessageBuffer[1024] = {};

// char[2048]
char g_ConfirmationMessageBuffer[2048] = {};

// char[256]
char g_ErrorMessageBuffer_02cef530[256] = {};

// char[512]
char g_MessageFormatBuffer[512] = {};

