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
extern CEdScrollBar g_MsnEditPropertyScrollBar;

// CNetGame
extern CNetGame g_CNetGameInstance;

// EConnectionStatus
extern EConnectionStatus g_ConnectionStatus;

// SChatHistory[400]
extern SChatHistory g_ChatHistory[400];

// char[1024]
extern char g_MsnEditPropertyValueBuffer[1024];
extern char g_MsnEditPropertyFormatBuffer[1024];

// char[256]
extern char g_ChatMessageBuffer[256];

// float
extern float FLOAT_02f7c540;
extern float FLOAT_02f7c630;

// int
extern int INT_02f797e0;
extern int g_DisableMouseHitOnBarrier;
extern int INT_02f7c528;
extern int g_SelectedMotionPropertyIndex;
extern int g_MotionPropertyEditState;
extern int INT_02f7c538;
extern int INT_02f7c53c;
extern int INT_02f7c634;
extern int g_LastPingTime;
extern int g_RemoteSyncStage;
extern int INT_02f7c8c4;
extern int g_ChatHistoryCount;

// uchar
extern uchar g_MsnEditPropertyScrollBarInitGuard;

// uint
extern uint g_CurrentGameTime;
extern uint UINT_02f7c8c8;

