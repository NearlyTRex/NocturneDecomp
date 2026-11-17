#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C50000
// =============================================================================

// CBitFont*
CBitFont* g_CBitFont_PTR_01c5b0e0 = {};

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
CVector3f g_CVector3f_01c599cc = {};
CVector3f g_CVector3f_01c59e78 = {};
CVector3f g_CVector3f_01c5a134 = {};

// CVector3f[16]
CVector3f g_ClipBuffer1Vertices[16] = {};
CVector3f g_ClipBuffer2Vertices[16] = {};
CVector3f g_ClipBuffer3Vertices[16] = {};
CVector3f g_ClipBuffer4Vertices[16] = {};
CVector3f g_ClipBuffer5Vertices[16] = {};

// CVector3i
CVector3i g_DebugCubeBasePoint = {};

// SWindow[5]
SWindow g_SWindow_ARRAY_01c5b108[5] = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_MouseButtonFlags = {};

// byte
byte g_BYTE_01c599d8 = {};

// char*
char* g_ClipboardBackupText = {};

// char[4000]
char g_TextWrapBuffer[4000] = {};

// float
float g_FLOAT_01c599e0 = {};
float g_FLOAT_01c599e8 = {};
float g_FLOAT_01c599ec = {};
float g_FLOAT_01c599f4 = {};
float g_FLOAT_01c599f8 = {};
float g_FLOAT_01c59a00 = {};
float g_FLOAT_01c59e84 = {};
float g_FLOAT_01c59e8c = {};
float g_FLOAT_01c59e90 = {};
float g_FLOAT_01c59e98 = {};

// float[2001]
float g_FLOAT_ARRAY_01c5db8c[2001] = {};

// int
int g_INT_01c599bc = {};
int g_INT_01c599dc = {};
int g_INT_01c59aa0 = {};
int g_ClipBuffer2VertexCount = {};
int g_ClipBuffer3VertexCount = {};
int g_INT_01c59cec = {};
int g_ClipBuffer5VertexCount = {};
int g_ClipOutputVertexCount = {};
int g_WindowStackCount = {};
int g_EditorFontMaxCharWidth = {};
int g_INT_01c5bae4 = {};
int g_MouseCursorType = {};
int g_INT_01c5baec = {};
int g_WindowContentColor = {};
int g_WindowBorderHighlightColor = {};
int g_WindowBorderShadowColor = {};
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
int g_INT_01c5bb38 = {};
int g_AxisLabelTextColor = {};
int g_EnabledTextColor = {};
int g_DisabledTextColor = {};
int g_INT_01c5bb48 = {};
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
int g_GlobalDeltaTimeInt = {};
int g_AnimationTimerValue = {};
int g_MouseX = {};
int g_MouseY = {};

// int[2000]
int g_INT_ARRAY_01c5bc4c[2000] = {};

// void*
void* g_ActiveControl = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

