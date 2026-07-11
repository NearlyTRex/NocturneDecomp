#pragma once

// =============================================================================
// INTRINSICS - Ghidra Decompiler Intrinsic Definitions
// =============================================================================
// This header provides definitions for Ghidra's decompiler intrinsics
// to allow decompiled code to compile without modification.
//
// These intrinsics appear in Ghidra's decompiled output for operations
// that don't map cleanly to standard C operators, such as:
// - Overflow/underflow detection (CARRY, SCARRY, BORROW, SBORROW)
// - Value concatenation (CONCAT)
// - Math operations (ROUND, TRUNC, ABS, SQRT)
// - MMX SIMD operations (paddb, pmulhw, psllw, etc.)

#include <stdint.h>
#include <string.h>
#include <math.h>

// =============================================================================
// CARRY - Unsigned carry (addition overflow)
// =============================================================================
// CARRY(a, b) returns 1 if (a + b) would overflow unsigned

#define CARRY1(a, b) ((uint8_t)(a) + (uint8_t)(b) < (uint8_t)(a))
#define CARRY2(a, b) ((uint16_t)(a) + (uint16_t)(b) < (uint16_t)(a))
#define CARRY4(a, b) ((uint32_t)(a) + (uint32_t)(b) < (uint32_t)(a))
#define CARRY8(a, b) ((uint64_t)(a) + (uint64_t)(b) < (uint64_t)(a))

// =============================================================================
// SCARRY - Signed carry (addition overflow)
// =============================================================================
// SCARRY(a, b) returns 1 if (a + b) would overflow signed

#define SCARRY1(a, b) \
    ((((int8_t)(a) ^ (int8_t)(b)) >= 0) && \
     (((int8_t)(a) ^ ((int8_t)(a) + (int8_t)(b))) < 0))
#define SCARRY2(a, b) \
    ((((int16_t)(a) ^ (int16_t)(b)) >= 0) && \
     (((int16_t)(a) ^ ((int16_t)(a) + (int16_t)(b))) < 0))
#define SCARRY4(a, b) \
    ((((int32_t)(a) ^ (int32_t)(b)) >= 0) && \
     (((int32_t)(a) ^ ((int32_t)(a) + (int32_t)(b))) < 0))
#define SCARRY8(a, b) \
    ((((int64_t)(a) ^ (int64_t)(b)) >= 0) && \
     (((int64_t)(a) ^ ((int64_t)(a) + (int64_t)(b))) < 0))

// =============================================================================
// BORROW - Unsigned borrow (subtraction underflow)
// =============================================================================
// BORROW(a, b) returns 1 if (a - b) would underflow unsigned

#define BORROW1(a, b) ((uint8_t)(a) < (uint8_t)(b))
#define BORROW2(a, b) ((uint16_t)(a) < (uint16_t)(b))
#define BORROW4(a, b) ((uint32_t)(a) < (uint32_t)(b))
#define BORROW8(a, b) ((uint64_t)(a) < (uint64_t)(b))

// =============================================================================
// SBORROW - Signed borrow (subtraction overflow)
// =============================================================================
// SBORROW(a, b) returns 1 if (a - b) would overflow signed
// Overflow occurs when signs of a and b differ, and sign of result differs from a

#define SBORROW1(a, b) \
    ((((int8_t)(a) ^ (int8_t)(b)) < 0) && \
     (((int8_t)(a) ^ (int8_t)((uint8_t)(a) - (uint8_t)(b))) < 0))
#define SBORROW2(a, b) \
    ((((int16_t)(a) ^ (int16_t)(b)) < 0) && \
     (((int16_t)(a) ^ (int16_t)((uint16_t)(a) - (uint16_t)(b))) < 0))
#define SBORROW4(a, b) \
    ((((int32_t)(a) ^ (int32_t)(b)) < 0) && \
     (((int32_t)(a) ^ (int32_t)((uint32_t)(a) - (uint32_t)(b))) < 0))
#define SBORROW8(a, b) \
    ((((int64_t)(a) ^ (int64_t)(b)) < 0) && \
     (((int64_t)(a) ^ (int64_t)((uint64_t)(a) - (uint64_t)(b))) < 0))

// =============================================================================
// CONCAT - Concatenate values into larger type
// =============================================================================
// CONCATxy(hi, lo) concatenates x-byte hi value with y-byte lo value

#define CONCAT11(hi, lo) (((uint16_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT12(hi, lo) (((uint32_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT21(hi, lo) (((uint32_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT13(hi, lo) (((uint32_t)(hi) << 24) | ((uint32_t)(lo)))
#define CONCAT22(hi, lo) (((uint32_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT31(hi, lo) (((uint32_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT14(hi, lo) (((uint64_t)(hi) << 32) | ((uint32_t)(lo)))
#define CONCAT23(hi, lo) (((uint64_t)(hi) << 24) | ((uint32_t)(lo)))
#define CONCAT32(hi, lo) (((uint64_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT41(hi, lo) (((uint64_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT15(hi, lo) (((uint64_t)(hi) << 40) | ((uint64_t)(lo)))
#define CONCAT24(hi, lo) (((uint64_t)(hi) << 32) | ((uint32_t)(lo)))
#define CONCAT33(hi, lo) (((uint64_t)(hi) << 24) | ((uint32_t)(lo)))
#define CONCAT42(hi, lo) (((uint64_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT51(hi, lo) (((uint64_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT16(hi, lo) (((uint64_t)(hi) << 48) | ((uint64_t)(lo)))
#define CONCAT25(hi, lo) (((uint64_t)(hi) << 40) | ((uint64_t)(lo)))
#define CONCAT34(hi, lo) (((uint64_t)(hi) << 32) | ((uint32_t)(lo)))
#define CONCAT43(hi, lo) (((uint64_t)(hi) << 24) | ((uint32_t)(lo)))
#define CONCAT52(hi, lo) (((uint64_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT61(hi, lo) (((uint64_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT17(hi, lo) (((uint64_t)(hi) << 56) | ((uint64_t)(lo)))
#define CONCAT26(hi, lo) (((uint64_t)(hi) << 48) | ((uint64_t)(lo)))
#define CONCAT35(hi, lo) (((uint64_t)(hi) << 40) | ((uint64_t)(lo)))
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | ((uint32_t)(lo)))
#define CONCAT53(hi, lo) (((uint64_t)(hi) << 24) | ((uint32_t)(lo)))
#define CONCAT62(hi, lo) (((uint64_t)(hi) << 16) | ((uint16_t)(lo)))
#define CONCAT71(hi, lo) (((uint64_t)(hi) << 8) | ((uint8_t)(lo)))
#define CONCAT18(hi, lo) (((uint64_t)(hi) << 64) | ((uint64_t)(lo)))
#define CONCAT19(hi, lo) (((uint64_t)(hi) << 72) | ((uint64_t)(lo)))
#define CONCAT28(hi, lo) (((uint64_t)(hi) << 64) | ((uint64_t)(lo)))
#define CONCAT64(hi, lo) (((uint64_t)(hi) << 32) | ((uint32_t)(lo)))

// =============================================================================
// Bitcast Helpers (FPU double/float reconstruction)
// =============================================================================
// Ghidra splits x87 FSTP operations into two 32-bit stack writes, then
// reconstructs them as (double)CONCAT44(hi, lo). A C (double) cast does a
// numeric conversion (int->float), not a bit reinterpretation. These helpers
// use memcpy to correctly reinterpret the assembled bit pattern.

static inline double __BITCAST_DOUBLE(uint64_t bits) {
    double result;
    memcpy(&result, &bits, sizeof(result));
    return result;
}

static inline float __BITCAST_FLOAT(uint32_t bits) {
    float result;
    memcpy(&result, &bits, sizeof(result));
    return result;
}

// Reverse bitcast: float/double -> integer bit pattern
// Used when Ghidra emits SUBxx(dVar, offset) where dVar is a double/float.
// The SUB macro uses >> which is invalid on floating-point types.

static inline uint64_t __BITCAST_UINT64(double val) {
    uint64_t bits;
    memcpy(&bits, &val, sizeof(bits));
    return bits;
}

static inline uint32_t __BITCAST_UINT32(float val) {
    uint32_t bits;
    memcpy(&bits, &val, sizeof(bits));
    return bits;
}

// =============================================================================
// SUB - Subpiece/Truncation (extract bytes from larger value)
// =============================================================================
// SUBxy(val) extracts the low y bytes from an x-byte value
// SUBxy(val, offset) extracts y bytes starting at byte offset

// Helper macros for optional offset argument
#define _SUB_GET_MACRO(_1, _2, NAME, ...) NAME

#define _SUB41_1(x) ((uint8_t)(x))
#define _SUB41_2(x, off) ((uint8_t)((x) >> ((off) * 8)))
#define SUB41(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB41_2, _SUB41_1)(__VA_ARGS__)
#define _SUB42_1(x) ((uint16_t)(x))
#define _SUB42_2(x, off) ((uint16_t)((x) >> ((off) * 8)))
#define SUB42(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB42_2, _SUB42_1)(__VA_ARGS__)
#define _SUB82_1(x) ((uint16_t)(x))
#define _SUB82_2(x, off) ((uint16_t)((x) >> ((off) * 8)))
#define SUB82(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB82_2, _SUB82_1)(__VA_ARGS__)
#define _SUB84_1(x) ((uint32_t)(x))
#define _SUB84_2(x, off) ((uint32_t)((x) >> ((off) * 8)))
#define SUB84(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB84_2, _SUB84_1)(__VA_ARGS__)
#define _SUB86_1(x) ((uint64_t)(x))
#define _SUB86_2(x, off) ((uint64_t)((x) >> ((off) * 8)))
#define SUB86(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB86_2, _SUB86_1)(__VA_ARGS__)
#define _SUB104_1(x) ((uint32_t)(x))
#define _SUB104_2(x, off) ((uint32_t)((x) >> ((off) * 8)))
#define SUB104(...) _SUB_GET_MACRO(__VA_ARGS__, _SUB104_2, _SUB104_1)(__VA_ARGS__)

// =============================================================================
// ZEXT - Zero Extension (widen value to larger type)
// =============================================================================
// ZEXTxy(val) zero-extends an x-byte value to a y-byte value

#define ZEXT14(x) ((uint32_t)(uint8_t)(x))
#define ZEXT48(x) ((uint64_t)(uint32_t)(x))

// =============================================================================
// FPU Intrinsics (x87 floating-point operations)
// =============================================================================
// These map x87 FPU instructions to standard C math functions

#ifndef f2xm1
#define f2xm1(x) (pow(2.0, (x)) - 1.0)
#endif
#ifndef fabs
#define fabs(x) fabs(x)
#endif
#ifndef fcos
#define fcos(x) cos(x)
#endif
#ifndef fpatan
#define fpatan(y, x) atan2(y, x)
#endif
#ifndef fptan
#define fptan(x) tan(x)
#endif
#ifndef fscale
#define fscale(y, x) ldexp(y, x)
#endif
#ifndef fsin
#define fsin(x) sin(x)
#endif
#ifndef fsqrt
#define fsqrt(x) sqrt(x)
#endif

// =============================================================================
// MMX Intrinsics (SIMD packed integer operations)
// =============================================================================
// These wrap mmintrin.h functions with Ghidra's assembly mnemonic names.
// Ghidra uses uint64_t/ulonglong for MMX values, so we cast to __m64.

#ifdef __MMX__
#include <mmintrin.h>

// Two-operand MMX intrinsics
#define paddb(a, b) (uint64_t)_mm_add_pi8((__m64)(a), (__m64)(b))
#define paddw(a, b) (uint64_t)_mm_add_pi16((__m64)(a), (__m64)(b))
#define paddd(a, b) (uint64_t)_mm_add_pi32((__m64)(a), (__m64)(b))
#define paddsb(a, b) (uint64_t)_mm_adds_pi8((__m64)(a), (__m64)(b))
#define paddsw(a, b) (uint64_t)_mm_adds_pi16((__m64)(a), (__m64)(b))
#define paddusb(a, b) (uint64_t)_mm_adds_pu8((__m64)(a), (__m64)(b))
#define paddusw(a, b) (uint64_t)_mm_adds_pu16((__m64)(a), (__m64)(b))
#define psubb(a, b) (uint64_t)_mm_sub_pi8((__m64)(a), (__m64)(b))
#define psubw(a, b) (uint64_t)_mm_sub_pi16((__m64)(a), (__m64)(b))
#define psubd(a, b) (uint64_t)_mm_sub_pi32((__m64)(a), (__m64)(b))
#define psubsb(a, b) (uint64_t)_mm_subs_pi8((__m64)(a), (__m64)(b))
#define psubsw(a, b) (uint64_t)_mm_subs_pi16((__m64)(a), (__m64)(b))
#define psubusb(a, b) (uint64_t)_mm_subs_pu8((__m64)(a), (__m64)(b))
#define psubusw(a, b) (uint64_t)_mm_subs_pu16((__m64)(a), (__m64)(b))
#define pmullw(a, b) (uint64_t)_mm_mullo_pi16((__m64)(a), (__m64)(b))
#define pmulhw(a, b) (uint64_t)_mm_mulhi_pi16((__m64)(a), (__m64)(b))
#define pmaddwd(a, b) (uint64_t)_mm_madd_pi16((__m64)(a), (__m64)(b))
#define pand(a, b) (uint64_t)_mm_and_si64((__m64)(a), (__m64)(b))
#define pandn(a, b) (uint64_t)_mm_andnot_si64((__m64)(a), (__m64)(b))
#define por(a, b) (uint64_t)_mm_or_si64((__m64)(a), (__m64)(b))
#define pxor(a, b) (uint64_t)_mm_xor_si64((__m64)(a), (__m64)(b))
#define pcmpeqb(a, b) (uint64_t)_mm_cmpeq_pi8((__m64)(a), (__m64)(b))
#define pcmpeqw(a, b) (uint64_t)_mm_cmpeq_pi16((__m64)(a), (__m64)(b))
#define pcmpeqd(a, b) (uint64_t)_mm_cmpeq_pi32((__m64)(a), (__m64)(b))
#define pcmpgtb(a, b) (uint64_t)_mm_cmpgt_pi8((__m64)(a), (__m64)(b))
#define pcmpgtw(a, b) (uint64_t)_mm_cmpgt_pi16((__m64)(a), (__m64)(b))
#define pcmpgtd(a, b) (uint64_t)_mm_cmpgt_pi32((__m64)(a), (__m64)(b))
#define packsswb(a, b) (uint64_t)_mm_packs_pi16((__m64)(a), (__m64)(b))
#define packssdw(a, b) (uint64_t)_mm_packs_pi32((__m64)(a), (__m64)(b))
#define packuswb(a, b) (uint64_t)_mm_packs_pu16((__m64)(a), (__m64)(b))
#define punpckhbw(a, b) (uint64_t)_mm_unpackhi_pi8((__m64)(a), (__m64)(b))
#define punpckhwd(a, b) (uint64_t)_mm_unpackhi_pi16((__m64)(a), (__m64)(b))
#define punpckhdq(a, b) (uint64_t)_mm_unpackhi_pi32((__m64)(a), (__m64)(b))
#define punpcklbw(a, b) (uint64_t)_mm_unpacklo_pi8((__m64)(a), (__m64)(b))
#define punpcklwd(a, b) (uint64_t)_mm_unpacklo_pi16((__m64)(a), (__m64)(b))
#define punpckldq(a, b) (uint64_t)_mm_unpacklo_pi32((__m64)(a), (__m64)(b))

// Shift MMX intrinsics (value, count)
#define psllw(a, count) (uint64_t)_mm_slli_pi16((__m64)(a), (count))
#define pslld(a, count) (uint64_t)_mm_slli_pi32((__m64)(a), (count))
#define psllq(a, count) (uint64_t)_mm_slli_si64((__m64)(a), (count))
#define psrlw(a, count) (uint64_t)_mm_srli_pi16((__m64)(a), (count))
#define psrld(a, count) (uint64_t)_mm_srli_pi32((__m64)(a), (count))
#define psrlq(a, count) (uint64_t)_mm_srli_si64((__m64)(a), (count))
#define psraw(a, count) (uint64_t)_mm_srai_pi16((__m64)(a), (count))
#define psrad(a, count) (uint64_t)_mm_srai_pi32((__m64)(a), (count))

// MMX state
#define emms() _mm_empty()

#endif // __MMX__

// =============================================================================
// CPUID Intrinsics (CPU identification)
// =============================================================================
// These wrap the CPUID instruction. Ghidra emits these when decompiling
// CPU detection code. Each returns a pointer to a static 4-element array
// containing EAX, EBX, ECX, EDX values from CPUID.
//
// Note: The returned pointer points to static storage that is overwritten
// by subsequent calls. Copy the values if you need to preserve them.

#if defined(_MSC_VER)
#include <intrin.h>
static inline int* _cpuid_intrinsic(int leaf) {
    static int _cpuid_regs[4];
    __cpuid(_cpuid_regs, leaf);
    return _cpuid_regs;
}
#elif defined(__GNUC__) || defined(__clang__)
// Save and undef register-named calling convention macros that clash
// with variable names in clang/gcc's cpuid.h (e.g. __edx)
#pragma push_macro("__eax")
#pragma push_macro("__ebx")
#pragma push_macro("__ecx")
#pragma push_macro("__edx")
#undef __eax
#undef __ebx
#undef __ecx
#undef __edx
#include <cpuid.h>
#pragma pop_macro("__eax")
#pragma pop_macro("__ebx")
#pragma pop_macro("__ecx")
#pragma pop_macro("__edx")
static inline int* _cpuid_intrinsic(int leaf) {
    static int _cpuid_regs[4];
    __cpuid(leaf, _cpuid_regs[0], _cpuid_regs[1], _cpuid_regs[2], _cpuid_regs[3]);
    return _cpuid_regs;
}
#else
// Fallback for compilers without CPUID intrinsics
static inline int* _cpuid_intrinsic(int leaf) {
    static int _cpuid_regs[4] = {0, 0, 0, 0};
    return _cpuid_regs;
}
#endif

// CPUID leaf 0 - vendor string and max leaf
#define cpuid_basic_info(x) _cpuid_intrinsic(x)
// CPUID leaf 1 - version and feature info
#define cpuid_Version_info(x) _cpuid_intrinsic(x)
// CPUID leaf 2 - cache/TLB info
#define cpuid_Cache_params(x) _cpuid_intrinsic(x)
// CPUID leaf 3 - processor serial number
#define cpuid_Serial_number(x) _cpuid_intrinsic(x)
// CPUID leaf 4 - deterministic cache params
#define cpuid_Deterministic_cache(x) _cpuid_intrinsic(x)
// CPUID leaf 5 - MONITOR/MWAIT features
#define cpuid_Monitor_mwait(x) _cpuid_intrinsic(x)
// CPUID leaf 6 - thermal and power management
#define cpuid_Thermal_power(x) _cpuid_intrinsic(x)
// CPUID leaf 7 - extended features
#define cpuid_Extended_features(x) _cpuid_intrinsic(x)

// =============================================================================
// Math Intrinsics
// =============================================================================

#ifndef ROUND
// Matches Watcom's `crt_math.c_round` (FUN_005fe6b0): the asm sets the FPU
// rounding-control bits to 11 (round-toward-zero) before FRNDINT, so the
// function actually TRUNCATES toward zero — despite the name. Every Ghidra
// `ROUND(...)` in the decompile maps back to a call to that function (or to
// FIST applied to its already-integer result), so truncate semantics is the
// faithful match. NaN/inf/out-of-range -> INT_MIN per Watcom FIST behavior.
static inline int ROUND(double x) {
    if (x != x || x >= 2147483647.5 || x < -2147483648.5) return (int)0x80000000;
    return (int)x;
}
#endif

#ifndef TRUNC
#define TRUNC(x) ((int)(x))
#endif

#ifndef ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif

#ifndef SQRT
#define SQRT(x) sqrt(x)
#endif

#ifndef NAN
#define NAN(x) isnan(x)
#endif

#ifndef INF
#define INF(x) isinf(x)
#endif

#ifndef FLOOR
#define FLOOR(x) floor(x)
#endif

#ifndef CEIL
#define CEIL(x) ceil(x)
#endif

// =============================================================================
// Synchronization Intrinsics
// =============================================================================
// No-op stubs for single-threaded decompilation analysis

#ifndef LOCK
#define LOCK(x) (void)(x)
#endif

#ifndef UNLOCK
#define UNLOCK(x) (void)(x)
#endif

// =============================================================================
// ADJ - Offset Pointer Adjustment
// =============================================================================
// ADJ(ptr) is used by Ghidra to convert an offset pointer back to its base type.
// An offset pointer is a pointer that points into the middle of a structure
// (e.g., a pointer to a field at offset 0x158 within a larger struct).
//
// In Ghidra's decompiled output, offset pointer typedefs like CAmmo_ptr_158
// represent "a pointer that is 0x158 bytes into a CAmmo struct".
// ADJ(ptr) adjusts this back to point to the base of the containing struct.
//
// The adjusted pointer structs have:
//   operator->()  - returns the subobject type pointer (for direct field access)
//   adj()         - returns the base class pointer (used by ADJ)
//
// Usage: ADJ(pCVar2)->field_name  accesses base class fields
//        pCVar2->field_name        accesses subobject fields

template<typename T>
inline typename T::base_type* ADJ(const T& ptr) { return ptr.adj(); }
