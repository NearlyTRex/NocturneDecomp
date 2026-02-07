#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDARG - System Header
// =============================================================================

// Structure: va_list_t
typedef struct va_list_t {
    char* value[1];
} va_list_t;

