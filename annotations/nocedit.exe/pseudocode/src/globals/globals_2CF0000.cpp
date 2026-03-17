#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CF0000
// =============================================================================

// CBitFont*
CBitFont* g_EditorFont = {};

// CDemonActor*[2000]
CDemonActor* g_EnemyVictimCandidates[2000] = {};

// CDemonActorType
CDemonActorType g_CElephantGunClassInfo = {};
CDemonActorType g_CEmitterClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};

// CEditorTools
CEditorTools g_CEditorToolsInstance = {};

// CEmitter*
CEmitter* g_EditorSelectedEmitter = {};

// CVector3f
CVector3f g_EmitterTarget = {};

// SWindow[5]
SWindow g_WindowStack[5] = {};

// UOrientationVector
UOrientationVector g_EmitterEditorOrientation = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_MouseButtonFlags = {};

// char*
char* g_ClipboardBackupText = {};

// char[1024]
char g_YesNoDialogBuffer[1024] = {};
char g_DialogMessageBuffer_02cf0930[1024] = {};
char g_TempStringBuffer[1024] = {};

// char[200]
char g_TextWrapBuffer[200] = {};

// float[2000]
float g_EnemyVictimCandidateDistances[2000] = {};

// int
int g_WindowStackCount = {};
int g_FontCharacterHeight = {};
int g_FontCharacterWidth = {};
int g_MouseCursorType = {};
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
int g_ProgressBarTextColor = {};
int g_AxisLabelTextColor = {};
int g_EnabledTextColor = {};
int g_DisabledTextColor = {};
int g_SelectionHighlightColor = {};
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
int g_SlewTargetMode = {};
int g_GlobalDeltaTimeInt = {};
int g_AnimationTimerValue = {};
int g_MouseX = {};
int g_MouseY = {};

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uint*[1200]
uint* g_ZBufferScanlineArray[1200] = {};

// void*
void* g_ActiveControl = {};

// void*[1200]
void* g_ScreenBufferArray[1200] = {};

