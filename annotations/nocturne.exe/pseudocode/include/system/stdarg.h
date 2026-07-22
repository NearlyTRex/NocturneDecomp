#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDARG - System Header
// =============================================================================

// Structure: va_list_t
#pragma pack(push, 1)
typedef struct va_list_t {
    char* value[(sizeof(__builtin_va_list) + sizeof(char*) - 1) / sizeof(char*)];
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
// the whole __builtin_va_list into value[] (one char* on i386 SysV,
// a 24-byte __va_list_tag[1] on x86-64 SysV -- va_list_t is sized to
// fit). Consumers memcpy value[] back into a real va_list for glibc.
#define VA_START_T(ap, last) do { \
    __builtin_va_list _va_start_tmp; \
    __builtin_va_start(_va_start_tmp, (last)); \
    __builtin_memcpy(&(ap).value[0], &_va_start_tmp, sizeof(__builtin_va_list)); \
    __builtin_va_end(_va_start_tmp); \
} while(0)
#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)

