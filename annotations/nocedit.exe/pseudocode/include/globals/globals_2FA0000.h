#pragma once

// Type dependencies
#include "system/basetypes.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2FA0000
// =============================================================================

// char*[500]
extern char* g_MessageKeys[500];
extern char* g_MessageTexts[500];

// char[1028]
extern char g_NetworkReceiveBuffer[1028];

// char[500][128]
extern char g_MessageKeyStorage[500][128];

