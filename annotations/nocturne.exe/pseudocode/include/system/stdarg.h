#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDARG - System Header (default)
// =============================================================================
// Emitted because this program has no va_list_t data type of its own, yet
// crt.h unconditionally depends on it. Mirrors the analyzed-program stdarg.h.

// Structure: va_list_t
#pragma pack(push, 1)
typedef struct va_list_t {
    char* value[(sizeof(__builtin_va_list) + sizeof(char*) - 1) / sizeof(char*)];
} va_list_t;
#pragma pack(pop)

// Variadic argument macros for va_list_t. Delegate to the compiler
// intrinsics so the first-arg position is correct even under ASan's
// shadow-stack parameter relocation; consumers memcpy value[] back into a
// real va_list for glibc.
#define VA_START_T(ap, last) do { \
    __builtin_va_list _va_start_tmp; \
    __builtin_va_start(_va_start_tmp, (last)); \
    __builtin_memcpy(&(ap).value[0], &_va_start_tmp, sizeof(__builtin_va_list)); \
    __builtin_va_end(_va_start_tmp); \
} while(0)
#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)

