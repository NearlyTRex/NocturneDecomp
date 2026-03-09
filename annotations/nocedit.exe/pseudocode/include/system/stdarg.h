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

// Variadic argument macros for va_list_t
// Ghidra produces uncompilable va_list_t initialization patterns in variadic
// functions. These macros provide compilable equivalents.
#define VA_START_T(ap, last) do { (ap).value[0] = (char*)(&(last) + 1); } while(0)
#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)

