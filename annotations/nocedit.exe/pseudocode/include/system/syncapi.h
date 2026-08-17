#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/watcom.h"
#include "system/winbase.h"
#include "system/winnt.h"

// =============================================================================
// SYNCAPI - System Header
// =============================================================================

// Forward declarations
struct ThreadData;

// Function Definition: DELETE_CRITICAL_SECTION_FUNC
typedef void DELETE_CRITICAL_SECTION_FUNC(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: ENTER_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void ENTER_CRITICAL_SECTION_BY_INDEX_FUNC(int file_index);

// Function Definition: ENTER_CRITICAL_SECTION_FUNC
typedef void ENTER_CRITICAL_SECTION_FUNC(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: ENTER_THREAD_CRITICAL_SECTION_FUNC
typedef void ENTER_THREAD_CRITICAL_SECTION_FUNC(void);

// Function Definition: EXCEPTION_CLEANUP_FUNC
typedef void EXCEPTION_CLEANUP_FUNC(int action);

// Function Definition: EXIT_CRITICAL_SECTION_BY_INDEX_FUNC
typedef void EXIT_CRITICAL_SECTION_BY_INDEX_FUNC(int file_index);

// Function Definition: EXIT_CRITICAL_SECTION_FUNC
typedef void EXIT_CRITICAL_SECTION_FUNC(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: EXIT_THREAD_CRITICAL_SECTION_FUNC
typedef void EXIT_THREAD_CRITICAL_SECTION_FUNC(void);

// Function Definition: GET_TLS_FUNC
typedef struct ThreadData* GET_TLS_FUNC(void);

// Function Definition: INITIALIZE_CRITICAL_SECTION_FUNC
typedef void INITIALIZE_CRITICAL_SECTION_FUNC(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: LEAVE_CRITICAL_SECTION_FUNC
typedef void LEAVE_CRITICAL_SECTION_FUNC(LPCRITICAL_SECTION lpCriticalSection);

