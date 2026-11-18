#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D00000
// =============================================================================

// SChatOutMessage[50]
SChatOutMessage g_ChatOutMessages[50] = {};

// SSimFrame[512]
SSimFrame g_SimFrameHistory[512] = {};

// int
int g_ChatOutCount = {};
int g_ChatOutSequence = {};
int g_SimFrameCount = {};

