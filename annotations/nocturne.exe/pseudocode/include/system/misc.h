#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MISC - System Header
// =============================================================================

// Forward declarations
struct _EXCEPTION_POINTERS;

// Function Definition: FARPROC
typedef int FARPROC(void);

// Function Definition: PHANDLER_ROUTINE
typedef BOOL PHANDLER_ROUTINE(DWORD CtrlType);

// Function Definition: PTHREAD_START_ROUTINE
typedef DWORD PTHREAD_START_ROUTINE(LPVOID lpThreadParameter);

// Function Definition: PTOP_LEVEL_EXCEPTION_FILTER
typedef LONG PTOP_LEVEL_EXCEPTION_FILTER(struct _EXCEPTION_POINTERS* ExceptionInfo);

// Function Definition: WNDPROC
typedef LRESULT WNDPROC(HWND param, UINT param1, WPARAM param2, LPARAM param3);

