#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C30000
// =============================================================================

// CBitFont*
CBitFont* g_CBitFont_PTR_01c3eb50 = {};

// CDemonActor*[2000]
CDemonActor* g_EnemyVictimCandidates[2000] = {};

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
CVector3f g_CVector3f_01c3d430 = {};
CVector3f g_CVector3f_01c3db98 = {};

// CVector3f[16]
CVector3f g_ClipBuffer1Vertices[16] = {};
CVector3f g_ClipBuffer2Vertices[16] = {};
CVector3f g_ClipBuffer3Vertices[16] = {};
CVector3f g_ClipBuffer4Vertices[16] = {};
CVector3f g_ClipBuffer5Vertices[16] = {};

// CVector3i
CVector3i g_DebugCubeBasePoint = {};

// SWindow[5]
SWindow g_SWindow_ARRAY_01c3eb60[5] = {};

// byte
byte g_BYTE_01c3d43c = {};

// char*
char* g_ClipboardBackupText = {};

// char[4000]
char g_TextWrapBuffer[4000] = {};

// float
float g_FLOAT_01c3d444 = {};
float g_FLOAT_01c3d44c = {};
float g_FLOAT_01c3d450 = {};
float g_FLOAT_01c3d458 = {};
float g_FLOAT_01c3d45c = {};
float g_FLOAT_01c3d464 = {};
float g_FLOAT_01c3d8dc = {};
float g_FLOAT_01c3d8e4 = {};
float g_FLOAT_01c3d8e8 = {};
float g_FLOAT_01c3d8f0 = {};
float g_FLOAT_01c3d8f4 = {};
float g_FLOAT_01c3d8fc = {};

// int
int g_INT_01c3d420 = {};
int g_ClipInputVertexCount = {};
int g_ClipBuffer1VertexCount = {};
int g_ClipBuffer2VertexCount = {};
int g_ClipBuffer3VertexCount = {};
int g_ClipBuffer4VertexCount = {};
int g_ClipBuffer5VertexCount = {};
int g_ClipOutputVertexCount = {};
int g_WindowStackCount = {};
int g_EditorFontMaxCharWidth = {};
int g_INT_01c3f53c = {};
int g_INT_01c3f540 = {};
int g_INT_01c3f544 = {};
int g_WindowContentColor = {};
int g_INT_01c3f54c = {};
int g_INT_01c3f550 = {};
int g_TitleBarColor = {};
int g_TitleBarFillColor = {};
int g_WindowFontColor = {};
int g_WarningTextColor = {};
int g_ErrorTextColor = {};
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
int g_INT_01c3f590 = {};
int g_AxisLabelTextColor = {};
int g_EnabledTextColor = {};
int g_DisabledTextColor = {};
int g_INT_01c3f5a0 = {};
int g_ConfirmedSelectionColor = {};
int g_PickListSeparatorColor = {};
int g_ShadowColor = {};
int g_ScrollBarHighlightColor = {};
int g_ButtonFaceColor = {};
int g_UITextColor = {};
int g_InsetColor = {};
int g_HighlightColor = {};
int g_BorderBackgroundColor = {};
int g_LastClickTimestamp = {};
int g_LastClickItemIndex = {};
int g_ScrollAction = {};
int g_ScrollTimer = {};
int g_ScrollDelay = {};
int g_DragStartMouseX = {};
int g_DragStartMouseY = {};
int g_DragStartScrollPos = {};
int g_DragStartThumbPos = {};

// void*
void* g_ActiveControl = {};

