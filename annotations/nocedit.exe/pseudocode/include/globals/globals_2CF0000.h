#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEditorTools.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SWindow.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CF0000
// =============================================================================

// CBitFont*
extern CBitFont* g_EditorFont;

// CDemonActorType
extern CDemonActorType g_CElephantGunClassInfo;
extern CDemonActorType g_CEmitterClassInfo;
extern CDemonActorType g_CEnemyClassInfo;

// CEditorTools
extern CEditorTools g_CEditorToolsInstance;

// CVector3f
extern CVector3f g_EmitterTarget;

// HWND
extern HWND g_DialogParentWindow;

// SWindow[5]
extern SWindow g_WindowStack[5];

// UOrientationVector
extern UOrientationVector UNION_UOrientationVector_02cf2b6c;

// _BIT_INTEGER
extern _BIT_INTEGER g_MouseButtonFlags;

// char*
extern char* g_ClipboardBackupText;

// char[1024]
extern char g_YesNoDialogBuffer[1024];
extern char g_DialogMessageBuffer_02cf0930[1024];
extern char g_TempStringBuffer[1024];

// char[200]
extern char g_TextWrapBuffer[200];

// int
extern int g_WindowStackCount;
extern int g_FontCharacterHeight;
extern int g_FontCharacterWidth;
extern int g_MouseCursorType;
extern int INT_02cf2a78;
extern int g_WindowBorderColor1;
extern int g_WindowBorderColor2;
extern int g_TitleBarColor;
extern int g_WindowFillColor;
extern int g_WindowFontColor;
extern int INT_02cf2a94;
extern int g_SelectionColor;
extern int g_TextColor;
extern int g_CursorColor;
extern int g_StatusTextColor;
extern int g_WindowStatusTextColor;
extern int INT_02cf2aac;
extern int g_ButtonColor;
extern int g_ProgressBarBackgroundColor;
extern int g_ProgressBarFillColor;
extern int g_ProgressBarBorderColor;
extern int g_ProgressBarTextColor;
extern int g_AxisLabelTextColor;
extern int g_EnabledTextColor;
extern int g_BackgroundColor1;
extern int g_SelectionHighlightColor;
extern int g_HighlightColor1;
extern int g_HighlightColor2;
extern int g_ShadowColor;
extern int g_ShadowHighlightColor;
extern int g_ButtonFaceColor;
extern int g_UITextColor;
extern int g_InsetColor;
extern int g_HighlightColor;
extern int g_BackgroundColor2;
extern int g_LastClickTimestamp;
extern int g_LastClickItemIndex;
extern int g_ScrollAction;
extern int g_ScrollTimer;
extern int g_ScrollDelay;
extern int g_DragStartMouseX;
extern int g_DragStartMouseY;
extern int g_DragStartScrollPos;
extern int g_DragStartThumbPos;
extern int g_SlewTargetMode;
extern int g_GlobalDeltaTimeInt;
extern int g_AnimationTimerValue;
extern int g_MouseX;
extern int g_MouseY;

// uchar[32768]
extern uchar g_ColorCubeLookup[32768];

// uint*[1200]
extern uint* g_ZBufferScanlineArray[1200];

// undefined4
extern undefined4 DAT_02cf2bf4;
extern undefined4 DAT_02cf2bf8;
extern undefined4 DAT_02cf4b30;
extern undefined4 DAT_02cf4b34;
extern undefined4 DAT_02cf4b38;

// void*
extern void* g_ActiveControl;

// void*[1200]
extern void* g_ScreenBufferArray[1200];

