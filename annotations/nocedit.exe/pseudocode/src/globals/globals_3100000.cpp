#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3100000
// =============================================================================

// CCmdParse
CCmdParse CCmdParse_0310aa4c = {};
CCmdParse CCmdParse_0310cb74 = {};

// CDemonActorType
CDemonActorType g_CScatClassInfo = {};

// CEdScrollBar
CEdScrollBar g_ScriptEditorVScrollBar = {};
CEdScrollBar g_ScriptEditorHScrollBar = {};

// CPickList
CPickList g_ScriptPickList = {};

// CScript
CScript g_CScriptInstance = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_CursorBlinkTimer = {};

// char[100]
char g_ScriptTempBuffer[100] = {};

// char[1023]
char g_ScriptEditorStatusText[1023] = {};

// char[104]
char g_ScriptFindText[104] = {};

// char[10][1024]
char g_ScriptSubtitleLines[10][1024] = {};

// char[2048]
char g_ScriptSyntaxErrorMessage[2048] = {};
char g_ScriptLineBuffer[2048] = {};
char g_ScriptErrorBuffer[2048] = {};

// char[4096]
char g_ScriptFormatBuffer[4096] = {};

// float
float g_ScriptTimeScale = {};

// int
int g_QuantizeCurrentLineNumber = {};
int g_PreviousLetterboxMode = {};
int g_ScriptEventsEnabled = {};
int g_ScriptInputFlag = {};
int g_ScriptLoopWarningShown = {};
int g_ActorLookedUpByVariable = {};
int g_CurrentEditingColumn = {};
int g_CurrentEditingLine = {};
int g_SelectionAnchorColumn = {};
int g_SelectionAnchorLine = {};

// int[18]
int g_ScatIndices[18] = {};

