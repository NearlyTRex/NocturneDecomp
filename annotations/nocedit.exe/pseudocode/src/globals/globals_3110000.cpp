#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3110000
// =============================================================================

// CBitFont*
CBitFont* g_ScriptEditorFont = {};

// CDemonActorType
CDemonActorType g_CSentinelClassInfo = {};

// CDemonSet
CDemonSet g_CDemonSetInstance = {};

// char[16385]
char g_CurrentLineBuffer[16385] = {};

// int
int g_SelectionStartColumn = {};
int g_SelectionStartLine = {};
int g_SelectionEndColumn = {};
int g_SelectionEndLine = {};
int g_ScriptEditorLeft = {};
int g_ScriptEditorTop = {};
int g_ScriptEditorRight = {};
int g_ScriptEditorBottom = {};
int g_ScriptTextAreaLeft = {};
int g_ScriptTextAreaTop = {};
int g_ScriptTextAreaRight = {};
int g_ScriptTextAreaBottom = {};
int g_ScriptStatusBarX = {};
int g_ScriptStatusBarY = {};
int g_ScriptStatusBarRight = {};
int g_ScriptStatusBarBottom = {};
int g_ScriptEditorCharWidth = {};
int g_ScriptEditorLineHeight = {};

// int[12]
int g_SentinelIndices[12] = {};

