#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SChatOutMessage.h"
#include "types/structs/SSimFrame.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F90000
// =============================================================================

// SChatOutMessage[50]
extern SChatOutMessage g_ChatOutMessages[50];

// SSimFrame[512]
extern SSimFrame g_SimFrameHistory[512];

// int
extern int g_ChatOutCount;
extern int INT_02f9c0bc;
extern int g_SimFrameCount;

