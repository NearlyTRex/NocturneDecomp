#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/watcom.h"
#include "system/winnt.h"

// =============================================================================
// SYNCAPI - System Header
// =============================================================================

// Forward declarations
struct ThreadData;

// Function Definition: ENTER_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void (*ENTER_CRITICAL_SECTION_BY_INDEX_FUNC)(int file_index);

// Function Definition: ENTER_CRITICAL_SECTION_FUNC
typedef void (*ENTER_CRITICAL_SECTION_FUNC)(LPCRITICAL_SECTION param0);

// Function Definition: ENTER_THREAD_CRITICAL_SECTION_FUNC
typedef void (*ENTER_THREAD_CRITICAL_SECTION_FUNC)(void);

// Function Definition: EXCEPTION_CLEANUP_FUNC
typedef void (*EXCEPTION_CLEANUP_FUNC)(int action);

// Function Definition: EXIT_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void (*EXIT_CRITICAL_SECTION_BY_INDEX_FUNC)(int file_index);

// Function Definition: EXIT_CRITICAL_SECTION_FUNC
typedef void (*EXIT_CRITICAL_SECTION_FUNC)(LPCRITICAL_SECTION param0);

// Function Definition: EXIT_THREAD_CRITICAL_SECTION_FUNC
typedef void (*EXIT_THREAD_CRITICAL_SECTION_FUNC)(void);

// Function Definition: GET_TLS_FUNC
typedef struct ThreadData* (*GET_TLS_FUNC)(void);

