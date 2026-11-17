#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BC0000
// =============================================================================

// CBitFont*
CBitFont* g_CBitFont_PTR_01bcd070 = {};

// CDemonActorType
CDemonActorType g_CDynamiteClassInfo = {};
CDemonActorType g_CElephantGunClassInfo = {};
CDemonActorType g_CEmitterClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};

// CDemonTriangle[8]
CDemonTriangle g_ClippedTriangleBuffer[8] = {};

// CEditorTools
CEditorTools g_CEditorToolsInstance = {};

// CVector3f
CVector3f g_FloorRayDirection = {};
CVector3f g_CVector3f_01bca0c4 = {};

// CVector3f[16]
CVector3f g_ClipInputVertices[16] = {};
CVector3f g_ClipBuffer1Vertices[16] = {};
CVector3f g_ClipBuffer2Vertices[16] = {};
CVector3f g_ClipBuffer3Vertices[16] = {};
CVector3f g_ClipBuffer4Vertices[16] = {};
CVector3f g_ClipBuffer5Vertices[16] = {};
CVector3f g_ClipOutputVertices[16] = {};

// CVector3i
CVector3i g_DebugCubeBasePoint = {};

// byte
byte g_FloorCacheValid = {};

// char
char g_CHAR_01bcc0d0 = {};

// char*
char* g_ClipboardBackupText = {};

// char[1024]
char g_CHAR_ARRAY_01bca0d0[1024] = {};
char g_CHAR_ARRAY_01bca4d0[1024] = {};
char g_CHAR_ARRAY_01bca8d0[1024] = {};
char g_StatusMessageBuffer[1024] = {};
char g_CHAR_ARRAY_01bcb0d0[1024] = {};
char g_CHAR_ARRAY_01bcb4d0[1024] = {};
char g_CHAR_ARRAY_01bcb8d0[1024] = {};
char g_CHAR_ARRAY_01bcbcd0[1024] = {};
char g_TempStringBuffer[1024] = {};

// char[460]
char g_CHAR_ARRAY_01bcd080[460] = {};

// float[2002]
float g_FLOAT_ARRAY_01bcfe38[2002] = {};

// int
int g_INT_01bc994c = {};
int g_ClipInputVertexCount = {};
int g_ClipBuffer1VertexCount = {};
int g_ClipBuffer2VertexCount = {};
int g_ClipBuffer3VertexCount = {};
int g_ClipBuffer4VertexCount = {};
int g_ClipBuffer5VertexCount = {};
int g_ClipOutputVertexCount = {};
int g_INT_01bcd07c = {};
int g_EditorFontMaxCharWidth = {};
int g_INT_01bcd9bc = {};
int g_MouseCursorType = {};
int g_INT_01bcddc8 = {};
int g_INT_01bcddcc = {};
int g_INT_01bcddd0 = {};
int g_INT_01bcddd4 = {};
int g_INT_01bcddd8 = {};
int g_SelectionColor = {};
int g_TextColor = {};
int g_CursorColor = {};
int g_StatusTextColor = {};
int g_WindowStatusTextColor = {};
int g_DialogTextColor = {};
int g_ActiveItemTextColor = {};
int g_ProgressBarBackgroundColor = {};
int g_ProgressBarFillColor = {};
int g_ProgressBarBorderColor = {};
int g_AxisLabelTextColor = {};
int g_INT_01bcde08 = {};
int g_INT_01bcde0c = {};
int g_INT_01bcde10 = {};
int g_INT_01bcde14 = {};
int g_INT_01bcde18 = {};
int g_LastClickTimestamp = {};
int g_LastClickItemIndex = {};
int g_ScrollAction = {};
int g_ScrollTimer = {};
int g_ScrollDelay = {};
int g_DragStartMouseX = {};
int g_DragStartMouseY = {};
int g_DragStartScrollPos = {};
int g_DragStartThumbPos = {};

// int[2000]
int g_INT_ARRAY_01bcdef8[2000] = {};

// void*
void* g_ActiveControl = {};

