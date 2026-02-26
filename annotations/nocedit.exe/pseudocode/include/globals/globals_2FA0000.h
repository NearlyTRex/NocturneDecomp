#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/unions/UNetPacket.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2FA0000
// =============================================================================

// UNetPacket
extern UNetPacket g_NetworkReceivePacket;

// char*[500]
extern char* g_MessageKeys[500];
extern char* g_MessageTexts[500];

// char[500][128]
extern char g_MessageKeyStorage[500][128];

// int
extern int g_MessageCount;
extern int g_LocalizationLoaded;
extern int g_LocalizedStringCount;

