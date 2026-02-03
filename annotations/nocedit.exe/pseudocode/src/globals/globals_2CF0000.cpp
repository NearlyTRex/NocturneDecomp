#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CF0000
// =============================================================================

// CBitFont*
CBitFont* g_EditorFont = {};

// CDemonActorType
CDemonActorType g_CElephantGunClassInfo = {};
CDemonActorType g_CEmitterClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};

// CEdButton*
CEdButton* g_ActiveButton = {};

// CEditorTools
CEditorTools g_CEditorToolsInstance = {};

// CEditorTools*
CEditorTools* g_CUserInterfacePtr = {};

// CVector3f
CVector3f CVector3f_02cf2b60 = {};

// HWND
HWND g_DialogParentWindow = {};

// SWindow[5]
SWindow g_WindowStack[5] = {};

// char*
char* g_ClipboardBackupText = {};

// char[1024]
char g_YesNoDialogBuffer[1024] = {};
char g_DialogMessageBuffer_02cf0930[1024] = {};
char g_TempStringBuffer[1024] = {};

// char[200]
char g_TextWrapBuffer[200] = {};

// int
int g_WindowStackCount = {};
int g_FontCharacterHeight = {};
int g_FontCharacterWidth = {};
int g_MouseCursorType = {};
int g_WindowBorderColor1 = {};
int g_WindowBorderColor2 = {};
int g_TitleBarColor = {};
int g_WindowFillColor = {};
int g_WindowFontColor = {};
int g_SelectionColor = {};
int g_TextColor = {};
int g_CursorColor = {};
int g_StatusTextColor = {};
int g_WindowStatusTextColor = {};
int g_ButtonColor = {};
int g_ProgressBarBackgroundColor = {};
int g_ProgressBarFillColor = {};
int g_ProgressBarBorderColor = {};
int g_ProgressBarTextColor = {};
int g_AxisLabelTextColor = {};
int g_EnabledTextColor = {};
int g_BackgroundColor1 = {};
int g_SelectionHighlightColor = {};
int g_HighlightColor1 = {};
int g_HighlightColor2 = {};
int g_ShadowColor = {};
int g_ShadowHighlightColor = {};
int g_ButtonFaceColor = {};
int g_UITextColor = {};
int g_InsetColor = {};
int g_HighlightColor = {};
int g_BackgroundColor2 = {};
int g_LastClickTimestamp = {};
int g_LastClickItemIndex = {};
int g_ScrollAction = {};
int g_ScrollTimer = {};
int g_ScrollDelay = {};
int g_DragStartMouseX = {};
int g_DragStartMouseY = {};
int g_DragStartScrollPos = {};
int g_DragStartThumbPos = {};
int INT_02cf2b5c = {};
int g_GlobalDeltaTimeInt = {};
int g_AnimationTimerValue = {};
int g_MouseX = {};
int g_MouseY = {};

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uint
uint g_MouseButtonFlags = {};

// uint*[1200]
uint* g_ZBufferScanlineArray[1200] = {};

// undefined4
undefined4 DAT_02cf2a78 = {};
undefined4 DAT_02cf2aac = {};
undefined4 DAT_02cf2b6c = {};
undefined4 DAT_02cf2b70 = {};
undefined4 DAT_02cf2b74 = {};
undefined4 DAT_02cf2b78 = {};
undefined4 DAT_02cf2bf4 = {};
undefined4 DAT_02cf2bf8 = {};
undefined4 DAT_02cf4b30 = {};
undefined4 DAT_02cf4b34 = {};
undefined4 DAT_02cf4b38 = {};

// void*[1200]
void* g_ScreenBufferArray[1200] = {};

