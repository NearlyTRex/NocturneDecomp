#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CEdCheck.h"
#include "types/classes/CEdScrollBar.h"
#include "types/classes/CNetGame.h"
#include "types/enums/EConnectionStatus.h"
#include "types/structs/SChatHistory.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F70000
// =============================================================================

// CActorPropertyList
extern CActorPropertyList g_MsnEditPropertyList;

// CEdCheck
extern CEdCheck g_CEdCheckInstance;

// CEdScrollBar
extern CEdScrollBar DAT_02f797e4;

// CNetGame
extern CNetGame g_CNetGameInstance;

// EConnectionStatus
extern EConnectionStatus g_ConnectionStatus;

// SChatHistory[400]
extern SChatHistory g_ChatHistory[400];

// char[256]
extern char g_ChatMessageBuffer[256];

// float
extern float FLOAT_02f7c540;
extern float FLOAT_02f7c630;

// int
extern int g_DisableMouseHitOnBarrier;
extern int INT_02f7c52c;
extern int INT_02f7c530;
extern int INT_02f7c634;
extern int g_LastPingTime;
extern int g_RemoteSyncStage;
extern int INT_02f7c8c4;
extern int g_ChatHistoryCount;

// uint
extern uint g_CurrentGameTime;
extern uint UINT_02f7c8c8;

// undefined1
extern undefined1 DAT_02f79818;

// undefined4
extern undefined4 DAT_02f797e0;
extern undefined4 DAT_02f7c528;
extern undefined4 DAT_02f7c538;
extern undefined4 DAT_02f7c53c;

