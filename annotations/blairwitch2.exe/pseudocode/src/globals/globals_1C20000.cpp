#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C20000
// =============================================================================

// CBitFont*
CBitFont* g_EditorFont = {};

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
CVector3f g_CVector3f_01c21e74 = {};
CVector3f g_CVector3f_01c225dc = {};

// CVector3f[16]
CVector3f g_ClipBuffer1Vertices[16] = {};
CVector3f g_ClipBuffer2Vertices[16] = {};
CVector3f g_ClipBuffer3Vertices[16] = {};
CVector3f g_ClipBuffer4Vertices[16] = {};
CVector3f g_ClipBuffer5Vertices[16] = {};

// CVector3i
CVector3i g_DebugCubeBasePoint = {};

// SWindow[5]
SWindow g_SWindow_ARRAY_01c255a0[5] = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_MouseButtonFlags = {};

// byte
byte g_BYTE_01c21e80 = {};

// char*
char* g_ClipboardBackupText = {};

// char[1024]
char g_CHAR_ARRAY_01c225f0[1024] = {};
char g_CHAR_ARRAY_01c229f0[1024] = {};
char g_CHAR_ARRAY_01c22df0[1024] = {};
char g_CHAR_ARRAY_01c231f0[1024] = {};
char g_CHAR_ARRAY_01c23df0[1024] = {};
char g_CHAR_ARRAY_01c241f0[1024] = {};
char g_TempStringBuffer[1024] = {};

// char[2048]
char g_ConfirmationMessageBuffer[2048] = {};

// char[4000]
char g_TextWrapBuffer[4000] = {};

// float
float g_FLOAT_01c21e88 = {};
float g_FLOAT_01c21e90 = {};
float g_FLOAT_01c21e94 = {};
float g_FLOAT_01c21e9c = {};
float g_FLOAT_01c21ea0 = {};
float g_FLOAT_01c21ea8 = {};
float g_FLOAT_01c22320 = {};
float g_FLOAT_01c22328 = {};
float g_FLOAT_01c2232c = {};
float g_FLOAT_01c22334 = {};
float g_FLOAT_01c22338 = {};
float g_FLOAT_01c22340 = {};

// float[2000]
float g_EnemyVictimCandidateDistances[2000] = {};

// int
int g_INT_01c21e64 = {};
int g_ClipInputVertexCount = {};
int g_ClipBuffer1VertexCount = {};
int g_ClipBuffer2VertexCount = {};
int g_ClipBuffer3VertexCount = {};
int g_ClipBuffer4VertexCount = {};
int g_ClipBuffer5VertexCount = {};
int g_ClipOutputVertexCount = {};
int g_WindowStackCount = {};
int g_EditorFontMaxCharWidth = {};
int g_INT_01c25f7c = {};
int g_INT_01c25f80 = {};
int g_INT_01c25f84 = {};
int g_WindowContentColor = {};
int g_INT_01c2638c = {};
int g_INT_01c26390 = {};
int g_TitleBarColor = {};
int g_TitleBarFillColor = {};
int g_WindowFontColor = {};
int g_WarningTextColor = {};
int g_ErrorTextColor = {};
int g_SelectionColor = {};
int g_TextColor = {};
int g_INT_01c263b0 = {};
int g_StatusTextColor = {};
int g_WindowStatusTextColor = {};
int g_DialogTextColor = {};
int g_ActiveItemTextColor = {};
int g_ProgressBarBackgroundColor = {};
int g_ProgressBarFillColor = {};
int g_ProgressBarBorderColor = {};
int g_INT_01c263d0 = {};
int g_AxisLabelTextColor = {};
int g_EnabledTextColor = {};
int g_DisabledTextColor = {};
int g_INT_01c263e0 = {};
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

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArray[GAME_SCREEN_MAX_HEIGHT] = {};

// void*
void* g_ActiveControl = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

