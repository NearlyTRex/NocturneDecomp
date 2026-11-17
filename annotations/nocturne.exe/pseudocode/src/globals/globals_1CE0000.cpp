#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CE0000
// =============================================================================

// CNetGame
CNetGame g_CNetGameInstance = {};

// SChatHistory[400]
SChatHistory g_ChatHistory[400] = {};

// char[256]
char g_ChatMessageBuffer[256] = {};

// int
int g_LastPingTime = {};
int g_ConnectionStatus = {};
int g_RemoteSyncStage = {};
int g_NetNextPlayerId = {};
int g_ChatHistoryCount = {};

// uint
uint g_CurrentGameTime = {};
uint g_NetLastSimFrameAckTime = {};

