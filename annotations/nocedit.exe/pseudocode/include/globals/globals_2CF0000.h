#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SWindow.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CF0000
// =============================================================================

extern SWindow g_WindowStack[5];
extern void* g_ScreenBufferArray[1024];
extern uint* g_ZBufferScanlineArray[1024];

