#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonSet.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3110000
// =============================================================================

// CBitFont*
extern CBitFont* g_ScriptEditorFont;

// CDemonActorType
extern CDemonActorType g_CSentinelClassInfo;

// CDemonSet
extern CDemonSet g_CDemonSetInstance;

// char[16385]
extern char g_CurrentLineBuffer[16385];

// int
extern int g_SelectionStartColumn;
extern int g_SelectionStartLine;
extern int g_SelectionEndColumn;
extern int g_SelectionEndLine;
extern int g_ScriptEditorLeft;
extern int g_ScriptEditorTop;
extern int g_ScriptEditorRight;
extern int g_ScriptEditorBottom;
extern int g_ScriptTextAreaLeft;
extern int g_ScriptTextAreaTop;
extern int g_ScriptTextAreaRight;
extern int g_ScriptTextAreaBottom;
extern int g_ScriptStatusBarX;
extern int g_ScriptStatusBarY;
extern int g_ScriptStatusBarRight;
extern int g_ScriptStatusBarBottom;
extern int g_ScriptEditorCharWidth;
extern int g_ScriptEditorLineHeight;
extern int INT_0311420c;
extern int INT_03114210;
extern int INT_03114214;
extern int INT_03114218;
extern int INT_0311421c;
extern int INT_03114220;
extern int INT_03114224;
extern int INT_03114228;
extern int INT_0311422c;
extern int INT_03114230;
extern int INT_03114234;
extern int INT_03114238;

