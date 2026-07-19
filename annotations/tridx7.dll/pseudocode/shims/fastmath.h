#pragma once

// =============================================================================
// FAST MATH — bit-trick float approximations inlined by the original binary
// =============================================================================
// Watcom inlined an exponent-halving square-root approximation at several sites
// in dll/dx7.cpp. The asm reinterprets the float's 4 bytes as an int, shifts,
// adds a bias, and reinterprets the result back as a float:
//
//     MOV EDX, [x]                    ; read the float's BITS as an int
//     SAR EDX, 0x1                    ; halve the exponent (and mantissa)
//     ADD EDX, [g_FlyModeDepthBias]   ; runtime bias correction
//     MOV [t], EDX
//     FLD float ptr [t]               ; reinterpret those bits AS A FLOAT
//
// Ghidra models both reinterpretations as *numeric* conversions and emits
//
//     (float)(((int)x >> 1) + g_FlyModeDepthBias)
//
// which is simply wrong: `(int)x` truncates the value instead of reading the
// bit pattern, so e.g. x = 4.0f yields 2 rather than 0x40400000. See
// prompts/fix_compilation.md §21 for the same artifact around nocedit.exe's
// g_FastSqrtMagic / g_FastInvSqrtMagic.
//
// Unlike nocedit.exe, tridx7.dll has no standalone fastSqrt helper to call, so
// the operation is expressed here once instead of being re-derived at each call
// site with raw __BITCAST_* intrinsics.
//
// NOTE ON THE NAME: `bits >> 1` halves the exponent, which is the classic
// fast-square-root shape, and the added constant is the usual mantissa/exponent
// correction. Here that correction is a *runtime* global (g_FlyModeDepthBias,
// loaded from fly.ini) rather than the textbook literal, so the accuracy — and
// whether it approximates sqrt at all — depends on what the ini supplies. The
// caller passes the bias; this helper deliberately does not read the global.

#include "system/intrinsics.h"

// bitcast_float((bitcast_int(x) >> 1) + bias)
//
// The shift is arithmetic (SAR) on the signed bit pattern, matching the asm.
static inline float fastSqrtBiased(float x, int bias)
{
    return __BITCAST_FLOAT((uint32_t)(((int)__BITCAST_UINT32(x) >> 1) + bias));
}
