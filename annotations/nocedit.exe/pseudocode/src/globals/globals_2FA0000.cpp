#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2FA0000
// =============================================================================

// UNetPacket
UNetPacket g_NetworkReceivePacket = {};

// char*[500]
char* g_MessageKeys[500] = {};
char* g_MessageTexts[500] = {};

// char[500][128]
char g_MessageKeyStorage[500][128] = {};

// int
int g_MessageCount = {};
int g_LocalizationLoaded = {};
int g_LocalizedStringCount = {};

