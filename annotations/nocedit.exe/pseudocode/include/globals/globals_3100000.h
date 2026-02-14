#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CCmdParse.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEdScrollBar.h"
#include "types/classes/CPickList.h"
#include "types/classes/CScript.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3100000
// =============================================================================

// CCmdParse
extern CCmdParse CCmdParse_0310aa4c;
extern CCmdParse CCmdParse_0310cb74;

// CDemonActorType
extern CDemonActorType g_CScatClassInfo;

// CEdScrollBar
extern CEdScrollBar g_ScriptEditorVScrollBar;
extern CEdScrollBar g_ScriptEditorHScrollBar;

// CPickList
extern CPickList g_ScriptPickList;

// CScript
extern CScript g_CScriptInstance;

// _BIT_INTEGER
extern _BIT_INTEGER g_CursorBlinkTimer;

// char[100]
extern char g_ScriptTempBuffer[100];

// char[1023]
extern char g_ScriptEditorStatusText[1023];

// char[104]
extern char g_ScriptFindText[104];

// char[10][1024]
extern char g_ScriptSubtitleLines[10][1024];

// char[2048]
extern char g_ScriptSyntaxErrorMessage[2048];
extern char g_ScriptLineBuffer[2048];
extern char g_ScriptErrorBuffer[2048];

// char[4096]
extern char g_ScriptFormatBuffer[4096];

// float
extern float g_ScriptTimeScale;

// int
extern int g_QuantizeCurrentLineNumber;
extern int INT_0310615c;
extern int INT_03106160;
extern int INT_03106164;
extern int INT_03106168;
extern int INT_0310616c;
extern int INT_03106170;
extern int INT_03106174;
extern int INT_03106178;
extern int INT_0310617c;
extern int INT_03106180;
extern int INT_03106184;
extern int INT_03106188;
extern int INT_0310618c;
extern int INT_03106190;
extern int INT_03106194;
extern int INT_03106198;
extern int INT_0310619c;
extern int INT_031061a0;
extern int g_PreviousLetterboxMode;
extern int g_ScriptEventsEnabled;
extern int g_ScriptInputFlag;
extern int g_ScriptLoopWarningShown;
extern int g_ActorLookedUpByVariable;
extern int g_CurrentEditingColumn;
extern int g_CurrentEditingLine;
extern int g_SelectionAnchorColumn;
extern int g_SelectionAnchorLine;

