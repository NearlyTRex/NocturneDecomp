#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F70000
// =============================================================================

// CActorPropertyList
CActorPropertyList g_MsnEditPropertyList = {};

// CEdCheck
CEdCheck g_CEdCheckInstance = {};

// CEdScrollBar
CEdScrollBar g_MsnEditPropertyScrollBar = {};

// CNetGame
CNetGame g_CNetGameInstance = {};

// EConnectionStatus
EConnectionStatus g_ConnectionStatus = {};

// SChatHistory[400]
SChatHistory g_ChatHistory[400] = {};

// char[1024]
char g_MsnEditPropertyValueBuffer[1024] = {};
char g_MsnEditPropertyFormatBuffer[1024] = {};

// char[256]
char g_ChatMessageBuffer[256] = {};

// float
float FLOAT_02f7c540 = {};
float FLOAT_02f7c630 = {};

// int
int g_RandomizeSpeedsChoice = {};
int g_DisableMouseHitOnBarrier = {};
int g_MsnEditHoveredProperty = {};
int g_SelectedMotionPropertyIndex = {};
int g_MotionPropertyEditState = {};
int g_MsnEditMouseOverPanel = {};
int g_MsnEditViewMode = {};
int INT_02f7c634 = {};
int g_LastPingTime = {};
int g_RemoteSyncStage = {};
int g_NetNextPlayerId = {};
int g_ChatHistoryCount = {};

// uchar
uchar g_MsnEditPropertyScrollBarInitGuard = {};

// uint
uint g_CurrentGameTime = {};
uint g_NetLastSimFrameAckTime = {};

