#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEditorTools.h"
#include "types/structs/SWindow.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CF0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CElephantGunClassInfo;
extern CDemonActorType g_CEmitterClassInfo;
extern CDemonActorType g_CEnemyClassInfo;

// CEditorTools
extern CEditorTools g_CEditorToolsInstance;

// HWND
extern HWND g_DialogParentWindow;

// SWindow[5]
extern SWindow g_WindowStack[5];

// char[1024]
extern char g_YesNoDialogBuffer[1024];
extern char g_DialogMessageBuffer_02cf0930[1024];
extern char g_TempStringBuffer[1024];

// char[200]
extern char g_TextWrapBuffer[200];

// uchar[32768]
extern uchar g_ColorCubeLookup[32768];

// uint*[1024]
extern uint* g_ZBufferScanlineArray[1024];

// void*[1024]
extern void* g_ScreenBufferArray[1024];

