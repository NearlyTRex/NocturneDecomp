#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDARG - System Header
// =============================================================================

// Structure: va_list_t
#pragma pack(push, 1)
typedef struct va_list_t {
    char* value[1];
} va_list_t;
#pragma pack(pop)

// Variadic argument macros for va_list_t
// Ghidra produces uncompilable va_list_t initialization patterns in variadic
// functions. These macros provide compilable equivalents.
//
// An earlier version of VA_START_T used `(char*)(&(last) + 1)` to
// locate the first variadic arg. That works in unsanitized builds
// where parameters live contiguously on the real stack, but under
// AddressSanitizer the compiler copies parameters into a shadow
// stack frame, so `&last` points into the shadow region and `+1`
// walks into ASan-managed zeroed memory. Every vsprintf-style
// callee then reads NULL for every format arg (printed as '(null)').
//
// Delegate to the compiler intrinsic __builtin_va_start so the
// correct position is picked regardless of relocations, then stash
// the resulting pointer into our value[0] slot (on i386 SysV,
// va_list is a char*, so this is size-compatible). Consumers
// memcpy value[0] back into a real va_list when calling glibc.
#define VA_START_T(ap, last) do { \
    __builtin_va_list _va_start_tmp; \
    __builtin_va_start(_va_start_tmp, (last)); \
    __builtin_memcpy(&(ap).value[0], &_va_start_tmp, sizeof(char*)); \
    __builtin_va_end(_va_start_tmp); \
} while(0)
#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)

