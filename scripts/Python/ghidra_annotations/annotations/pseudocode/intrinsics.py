# Intrinsics definitions for pseudocode export
# Defines Ghidra decompiler intrinsics that appear in decompiled output
# This module is the SINGLE SOURCE OF TRUTH for intrinsic definitions

import os
from ghidra_annotations.util import make_dirs
from ghidra_annotations.util.log import log_info


def get_carry_intrinsics():
    """Return dict of CARRY intrinsics (unsigned carry from addition).

    CARRY(a, b) returns 1 if (a + b) would overflow unsigned.
    """
    return {
        1: ("uint8_t", "CARRY1"),
        2: ("uint16_t", "CARRY2"),
        4: ("uint32_t", "CARRY4"),
        8: ("uint64_t", "CARRY8"),
    }


def get_scarry_intrinsics():
    """Return dict of SCARRY intrinsics (signed carry from addition).

    SCARRY(a, b) returns 1 if (a + b) would overflow signed.
    """
    return {
        1: ("int8_t", "uint8_t", "SCARRY1"),
        2: ("int16_t", "uint16_t", "SCARRY2"),
        4: ("int32_t", "uint32_t", "SCARRY4"),
        8: ("int64_t", "uint64_t", "SCARRY8"),
    }


def get_borrow_intrinsics():
    """Return dict of BORROW intrinsics (unsigned borrow from subtraction).

    BORROW(a, b) returns 1 if (a - b) would underflow unsigned.
    """
    return {
        1: ("uint8_t", "BORROW1"),
        2: ("uint16_t", "BORROW2"),
        4: ("uint32_t", "BORROW4"),
        8: ("uint64_t", "BORROW8"),
    }


def get_sborrow_intrinsics():
    """Return dict of SBORROW intrinsics (signed borrow from subtraction).

    SBORROW(a, b) returns 1 if (a - b) would overflow signed.
    """
    return {
        1: ("int8_t", "uint8_t", "SBORROW1"),
        2: ("int16_t", "uint16_t", "SBORROW2"),
        4: ("int32_t", "uint32_t", "SBORROW4"),
        8: ("int64_t", "uint64_t", "SBORROW8"),
    }


def get_concat_intrinsics():
    """Return list of CONCAT intrinsics (concatenate values).

    CONCATxy(hi, lo) concatenates x-byte hi with y-byte lo.
    Returns tuple of (hi_size, lo_size, result_type, lo_type).
    """
    return [
        # (hi_size, lo_size, result_type, lo_type)
        # 2-byte results
        (1, 1, "uint16_t", "uint8_t"),    # CONCAT11
        # 3-byte results (stored in uint32_t)
        (1, 2, "uint32_t", "uint16_t"),   # CONCAT12
        (2, 1, "uint32_t", "uint8_t"),    # CONCAT21
        # 4-byte results
        (1, 3, "uint32_t", "uint32_t"),   # CONCAT13
        (2, 2, "uint32_t", "uint16_t"),   # CONCAT22
        (3, 1, "uint32_t", "uint8_t"),    # CONCAT31
        # 5-byte results (stored in uint64_t)
        (1, 4, "uint64_t", "uint32_t"),   # CONCAT14
        (2, 3, "uint64_t", "uint32_t"),   # CONCAT23
        (3, 2, "uint64_t", "uint16_t"),   # CONCAT32
        (4, 1, "uint64_t", "uint8_t"),    # CONCAT41
        # 6-byte results (stored in uint64_t)
        (1, 5, "uint64_t", "uint64_t"),   # CONCAT15
        (2, 4, "uint64_t", "uint32_t"),   # CONCAT24
        (3, 3, "uint64_t", "uint32_t"),   # CONCAT33
        (4, 2, "uint64_t", "uint16_t"),   # CONCAT42
        (5, 1, "uint64_t", "uint8_t"),    # CONCAT51
        # 7-byte results (stored in uint64_t)
        (1, 6, "uint64_t", "uint64_t"),   # CONCAT16
        (2, 5, "uint64_t", "uint64_t"),   # CONCAT25
        (3, 4, "uint64_t", "uint32_t"),   # CONCAT34
        (4, 3, "uint64_t", "uint32_t"),   # CONCAT43
        (5, 2, "uint64_t", "uint16_t"),   # CONCAT52
        (6, 1, "uint64_t", "uint8_t"),    # CONCAT61
        # 8-byte results
        (1, 7, "uint64_t", "uint64_t"),   # CONCAT17
        (2, 6, "uint64_t", "uint64_t"),   # CONCAT26
        (3, 5, "uint64_t", "uint64_t"),   # CONCAT35
        (4, 4, "uint64_t", "uint32_t"),   # CONCAT44
        (5, 3, "uint64_t", "uint32_t"),   # CONCAT53
        (6, 2, "uint64_t", "uint16_t"),   # CONCAT62
        (7, 1, "uint64_t", "uint8_t"),    # CONCAT71
        # Odd sizes that Ghidra sometimes emits
        (1, 8, "uint64_t", "uint64_t"),   # CONCAT18
        (1, 9, "uint64_t", "uint64_t"),   # CONCAT19
        (2, 8, "uint64_t", "uint64_t"),   # CONCAT28
        (6, 4, "uint64_t", "uint32_t"),   # CONCAT64
    ]


def get_subpiece_intrinsics():
    """Return list of SUB (subpiece/truncation) intrinsics.

    SUBxy(val) extracts the low y bytes from an x-byte value.
    Returns tuple of (input_size, output_size, result_type, mask or None).
    """
    return [
        # (input_size, output_size, result_type, mask)
        (4, 1, "uint8_t", None),          # SUB41 - truncate 4-byte to 1-byte
        (4, 2, "uint16_t", None),         # SUB42 - truncate 4-byte to 2-byte
        (8, 2, "uint16_t", None),         # SUB82 - truncate 8-byte to 2-byte
        (8, 4, "uint32_t", None),         # SUB84 - truncate 8-byte to 4-byte
        (8, 6, "uint64_t", "0xFFFFFFFFFFFFULL"),  # SUB86 - truncate 8-byte to 6-byte
        (10, 4, "uint32_t", None),        # SUB104 - truncate float10 to 4-byte
    ]


def get_fpu_intrinsics():
    """Return dict of FPU intrinsics mapping to standard C math functions.

    These are x87 FPU instructions that Ghidra emits as intrinsics.
    Returns dict of (name, (c_func, num_args)).
    """
    return {
        # Single-argument FPU intrinsics
        "fsin": ("sin", 1),
        "fcos": ("cos", 1),
        "fptan": ("tan", 1),
        "fsqrt": ("sqrt", 1),
        "fabs": ("fabs", 1),
        # Two-argument FPU intrinsics
        "fpatan": ("atan2", 2),  # FPATAN computes atan2(ST(1), ST(0))
        # Two-argument FPU intrinsics (scaling)
        "fscale": ("ldexp", 2),  # FSCALE computes ST(0) * 2^trunc(ST(1))
        # Expression-based FPU intrinsics (num_args=-1 means raw expression with x)
        "f2xm1": ("(pow(2.0, (x)) - 1.0)", -1),  # F2XM1 computes 2^x - 1
    }


def get_zext_intrinsics():
    """Return list of ZEXT (zero-extension) intrinsics.

    ZEXTxy(val) zero-extends an x-byte value to a y-byte value.
    Returns tuple of (input_size, output_size, input_type, output_type).
    """
    return [
        # (input_size, output_size, input_type, output_type)
        (1, 4, "uint8_t", "uint32_t"),   # ZEXT14 - zero-extend 1-byte to 4-byte
        (4, 8, "uint32_t", "uint64_t"),  # ZEXT48 - zero-extend 4-byte to 8-byte
    ]


def get_cpuid_intrinsics():
    """Return list of CPUID intrinsics that Ghidra emits.

    These are functions Ghidra generates for CPUID instruction calls.
    Each returns a pointer to a 4-element array containing EAX, EBX, ECX, EDX.

    Returns list of (ghidra_name, leaf_value, description).
    """
    return [
        ("cpuid_basic_info", 0, "CPUID leaf 0 - vendor string and max leaf"),
        ("cpuid_Version_info", 1, "CPUID leaf 1 - version and feature info"),
        ("cpuid_Cache_params", 2, "CPUID leaf 2 - cache/TLB info"),
        ("cpuid_Serial_number", 3, "CPUID leaf 3 - processor serial number"),
        ("cpuid_Deterministic_cache", 4, "CPUID leaf 4 - deterministic cache params"),
        ("cpuid_Monitor_mwait", 5, "CPUID leaf 5 - MONITOR/MWAIT features"),
        ("cpuid_Thermal_power", 6, "CPUID leaf 6 - thermal and power management"),
        ("cpuid_Extended_features", 7, "CPUID leaf 7 - extended features"),
    ]


def get_mmx_intrinsics():
    """Return dict of MMX intrinsics mapping Ghidra names to mmintrin.h functions.

    These are MMX SIMD instructions that Ghidra emits when decompiling
    code that uses packed integer operations.

    Returns dict of (ghidra_name, (mmintrin_func, description)).
    """
    return {
        # Arithmetic - Add
        "paddb": ("_mm_add_pi8", "packed add bytes"),
        "paddw": ("_mm_add_pi16", "packed add words"),
        "paddd": ("_mm_add_pi32", "packed add doublewords"),
        "paddsb": ("_mm_adds_pi8", "packed add signed saturated bytes"),
        "paddsw": ("_mm_adds_pi16", "packed add signed saturated words"),
        "paddusb": ("_mm_adds_pu8", "packed add unsigned saturated bytes"),
        "paddusw": ("_mm_adds_pu16", "packed add unsigned saturated words"),
        # Arithmetic - Subtract
        "psubb": ("_mm_sub_pi8", "packed subtract bytes"),
        "psubw": ("_mm_sub_pi16", "packed subtract words"),
        "psubd": ("_mm_sub_pi32", "packed subtract doublewords"),
        "psubsb": ("_mm_subs_pi8", "packed subtract signed saturated bytes"),
        "psubsw": ("_mm_subs_pi16", "packed subtract signed saturated words"),
        "psubusb": ("_mm_subs_pu8", "packed subtract unsigned saturated bytes"),
        "psubusw": ("_mm_subs_pu16", "packed subtract unsigned saturated words"),
        # Arithmetic - Multiply
        "pmullw": ("_mm_mullo_pi16", "packed multiply low words"),
        "pmulhw": ("_mm_mulhi_pi16", "packed multiply high words"),
        "pmaddwd": ("_mm_madd_pi16", "packed multiply and add"),
        # Shift - Left
        "psllw": ("_mm_slli_pi16", "packed shift left logical words"),
        "pslld": ("_mm_slli_pi32", "packed shift left logical doublewords"),
        "psllq": ("_mm_slli_si64", "packed shift left logical quadword"),
        # Shift - Right Logical
        "psrlw": ("_mm_srli_pi16", "packed shift right logical words"),
        "psrld": ("_mm_srli_pi32", "packed shift right logical doublewords"),
        "psrlq": ("_mm_srli_si64", "packed shift right logical quadword"),
        # Shift - Right Arithmetic
        "psraw": ("_mm_srai_pi16", "packed shift right arithmetic words"),
        "psrad": ("_mm_srai_pi32", "packed shift right arithmetic doublewords"),
        # Logical
        "pand": ("_mm_and_si64", "packed AND"),
        "pandn": ("_mm_andnot_si64", "packed AND NOT"),
        "por": ("_mm_or_si64", "packed OR"),
        "pxor": ("_mm_xor_si64", "packed XOR"),
        # Comparison
        "pcmpeqb": ("_mm_cmpeq_pi8", "packed compare equal bytes"),
        "pcmpeqw": ("_mm_cmpeq_pi16", "packed compare equal words"),
        "pcmpeqd": ("_mm_cmpeq_pi32", "packed compare equal doublewords"),
        "pcmpgtb": ("_mm_cmpgt_pi8", "packed compare greater than bytes"),
        "pcmpgtw": ("_mm_cmpgt_pi16", "packed compare greater than words"),
        "pcmpgtd": ("_mm_cmpgt_pi32", "packed compare greater than doublewords"),
        # Pack/Unpack
        "packsswb": ("_mm_packs_pi16", "pack signed saturated words to bytes"),
        "packssdw": ("_mm_packs_pi32", "pack signed saturated doublewords to words"),
        "packuswb": ("_mm_packs_pu16", "pack unsigned saturated words to bytes"),
        "punpckhbw": ("_mm_unpackhi_pi8", "unpack high bytes"),
        "punpckhwd": ("_mm_unpackhi_pi16", "unpack high words"),
        "punpckhdq": ("_mm_unpackhi_pi32", "unpack high doublewords"),
        "punpcklbw": ("_mm_unpacklo_pi8", "unpack low bytes"),
        "punpcklwd": ("_mm_unpacklo_pi16", "unpack low words"),
        "punpckldq": ("_mm_unpacklo_pi32", "unpack low doublewords"),
        # Set/Convert
        "emms": ("_mm_empty", "empty MMX state"),
    }


def get_all_intrinsic_names():
    """Return set of all intrinsic names defined.

    Used to check if an identifier in decompiled code is an intrinsic.
    """
    names = set()

    # Carry/borrow intrinsics
    for size in [1, 2, 4, 8]:
        names.add(f"CARRY{size}")
        names.add(f"SCARRY{size}")
        names.add(f"BORROW{size}")
        names.add(f"SBORROW{size}")

    # Concat intrinsics
    for hi, lo, _, _ in get_concat_intrinsics():
        names.add(f"CONCAT{hi}{lo}")

    # Subpiece intrinsics
    for inp, out, _, _ in get_subpiece_intrinsics():
        names.add(f"SUB{inp}{out}")

    # ZEXT intrinsics
    for inp, out, _, _ in get_zext_intrinsics():
        names.add(f"ZEXT{inp}{out}")

    # FPU intrinsics
    names.update(get_fpu_intrinsics().keys())

    # MMX intrinsics
    names.update(get_mmx_intrinsics().keys())

    # CPUID intrinsics
    for name, _, _ in get_cpuid_intrinsics():
        names.add(name)

    # Math intrinsics
    names.update(["ROUND", "TRUNC", "ABS", "SQRT", "NAN", "INF", "FLOOR", "CEIL"])

    # Sync intrinsics
    names.update(["LOCK", "UNLOCK"])

    # Offset pointer intrinsics
    names.add("ADJ")

    return names


def generate_intrinsics_header():
    """Generate the complete intrinsics.h header content.

    Returns:
        String containing the complete header file content.
    """
    lines = []

    # Header
    lines.append("#pragma once")
    lines.append("")
    lines.append("// =============================================================================")
    lines.append("// INTRINSICS - Ghidra Decompiler Intrinsic Definitions")
    lines.append("// =============================================================================")
    lines.append("// This header provides definitions for Ghidra's decompiler intrinsics")
    lines.append("// to allow decompiled code to compile without modification.")
    lines.append("//")
    lines.append("// These intrinsics appear in Ghidra's decompiled output for operations")
    lines.append("// that don't map cleanly to standard C operators, such as:")
    lines.append("// - Overflow/underflow detection (CARRY, SCARRY, BORROW, SBORROW)")
    lines.append("// - Value concatenation (CONCAT)")
    lines.append("// - Math operations (ROUND, TRUNC, ABS, SQRT)")
    lines.append("// - MMX SIMD operations (paddb, pmulhw, psllw, etc.)")
    lines.append("")
    lines.append("#include <stdint.h>")
    lines.append("#include <string.h>")
    lines.append("#include <math.h>")
    lines.append("")

    # CARRY - unsigned addition overflow
    lines.append("// =============================================================================")
    lines.append("// CARRY - Unsigned carry (addition overflow)")
    lines.append("// =============================================================================")
    lines.append("// CARRY(a, b) returns 1 if (a + b) would overflow unsigned")
    lines.append("")
    for size, (utype, name) in sorted(get_carry_intrinsics().items()):
        lines.append(f"#define {name}(a, b) (({utype})(a) + ({utype})(b) < ({utype})(a))")
    lines.append("")

    # SCARRY - signed addition overflow
    lines.append("// =============================================================================")
    lines.append("// SCARRY - Signed carry (addition overflow)")
    lines.append("// =============================================================================")
    lines.append("// SCARRY(a, b) returns 1 if (a + b) would overflow signed")
    lines.append("")
    for size, (stype, utype, name) in sorted(get_scarry_intrinsics().items()):
        lines.append(f"#define {name}(a, b) \\")
        lines.append(f"    (((({stype})(a) ^ ({stype})(b)) >= 0) && \\")
        lines.append(f"     ((({stype})(a) ^ (({stype})(a) + ({stype})(b))) < 0))")
    lines.append("")

    # BORROW - unsigned subtraction underflow
    lines.append("// =============================================================================")
    lines.append("// BORROW - Unsigned borrow (subtraction underflow)")
    lines.append("// =============================================================================")
    lines.append("// BORROW(a, b) returns 1 if (a - b) would underflow unsigned")
    lines.append("")
    for size, (utype, name) in sorted(get_borrow_intrinsics().items()):
        lines.append(f"#define {name}(a, b) (({utype})(a) < ({utype})(b))")
    lines.append("")

    # SBORROW - signed subtraction overflow
    lines.append("// =============================================================================")
    lines.append("// SBORROW - Signed borrow (subtraction overflow)")
    lines.append("// =============================================================================")
    lines.append("// SBORROW(a, b) returns 1 if (a - b) would overflow signed")
    lines.append("// Overflow occurs when signs of a and b differ, and sign of result differs from a")
    lines.append("")
    for size, (stype, utype, name) in sorted(get_sborrow_intrinsics().items()):
        lines.append(f"#define {name}(a, b) \\")
        lines.append(f"    (((({stype})(a) ^ ({stype})(b)) < 0) && \\")
        lines.append(f"     ((({stype})(a) ^ ({stype})(({utype})(a) - ({utype})(b))) < 0))")
    lines.append("")

    # CONCAT - value concatenation
    lines.append("// =============================================================================")
    lines.append("// CONCAT - Concatenate values into larger type")
    lines.append("// =============================================================================")
    lines.append("// CONCATxy(hi, lo) concatenates x-byte hi value with y-byte lo value")
    lines.append("")
    for hi_size, lo_size, result_type, lo_type in get_concat_intrinsics():
        lo_bits = lo_size * 8
        name = f"CONCAT{hi_size}{lo_size}"
        lines.append(f"#define {name}(hi, lo) ((({result_type})(hi) << {lo_bits}) | (({lo_type})(lo)))")
    lines.append("")

    # Bitcast helpers for FPU double/float reconstruction
    lines.append("// =============================================================================")
    lines.append("// Bitcast Helpers (FPU double/float reconstruction)")
    lines.append("// =============================================================================")
    lines.append("// Ghidra splits x87 FSTP operations into two 32-bit stack writes, then")
    lines.append("// reconstructs them as (double)CONCAT44(hi, lo). A C (double) cast does a")
    lines.append("// numeric conversion (int->float), not a bit reinterpretation. These helpers")
    lines.append("// use memcpy to correctly reinterpret the assembled bit pattern.")
    lines.append("")
    lines.append("static inline double __BITCAST_DOUBLE(uint64_t bits) {")
    lines.append("    double result;")
    lines.append("    memcpy(&result, &bits, sizeof(result));")
    lines.append("    return result;")
    lines.append("}")
    lines.append("")
    lines.append("static inline float __BITCAST_FLOAT(uint32_t bits) {")
    lines.append("    float result;")
    lines.append("    memcpy(&result, &bits, sizeof(result));")
    lines.append("    return result;")
    lines.append("}")
    lines.append("")
    lines.append("// Reverse bitcast: float/double -> integer bit pattern")
    lines.append("// Used when Ghidra emits SUBxx(dVar, offset) where dVar is a double/float.")
    lines.append("// The SUB macro uses >> which is invalid on floating-point types.")
    lines.append("")
    lines.append("static inline uint64_t __BITCAST_UINT64(double val) {")
    lines.append("    uint64_t bits;")
    lines.append("    memcpy(&bits, &val, sizeof(bits));")
    lines.append("    return bits;")
    lines.append("}")
    lines.append("")
    lines.append("static inline uint32_t __BITCAST_UINT32(float val) {")
    lines.append("    uint32_t bits;")
    lines.append("    memcpy(&bits, &val, sizeof(bits));")
    lines.append("    return bits;")
    lines.append("}")
    lines.append("")

    # SUB - subpiece/truncation
    lines.append("// =============================================================================")
    lines.append("// SUB - Subpiece/Truncation (extract bytes from larger value)")
    lines.append("// =============================================================================")
    lines.append("// SUBxy(val) extracts the low y bytes from an x-byte value")
    lines.append("// SUBxy(val, offset) extracts y bytes starting at byte offset")
    lines.append("")
    lines.append("// Helper macros for optional offset argument")
    lines.append("#define _SUB_GET_MACRO(_1, _2, NAME, ...) NAME")
    lines.append("")
    for inp_size, out_size, result_type, mask in get_subpiece_intrinsics():
        name = f"SUB{inp_size}{out_size}"
        # One-arg version: extract low bytes
        lines.append(f"#define _{name}_1(x) (({result_type})(x))")
        # Two-arg version: extract bytes at offset
        lines.append(f"#define _{name}_2(x, off) (({result_type})((x) >> ((off) * 8)))")
        # Dispatcher macro
        lines.append(f"#define {name}(...) _SUB_GET_MACRO(__VA_ARGS__, _{name}_2, _{name}_1)(__VA_ARGS__)")
    lines.append("")

    # ZEXT - zero extension
    lines.append("// =============================================================================")
    lines.append("// ZEXT - Zero Extension (widen value to larger type)")
    lines.append("// =============================================================================")
    lines.append("// ZEXTxy(val) zero-extends an x-byte value to a y-byte value")
    lines.append("")
    for inp_size, out_size, inp_type, out_type in get_zext_intrinsics():
        name = f"ZEXT{inp_size}{out_size}"
        lines.append(f"#define {name}(x) (({out_type})({inp_type})(x))")
    lines.append("")

    # FPU intrinsics
    lines.append("// =============================================================================")
    lines.append("// FPU Intrinsics (x87 floating-point operations)")
    lines.append("// =============================================================================")
    lines.append("// These map x87 FPU instructions to standard C math functions")
    lines.append("")
    for fpu_name, (c_func, num_args) in sorted(get_fpu_intrinsics().items()):
        lines.append(f"#ifndef {fpu_name}")
        if num_args == -1:
            # Expression mode: c_func is the full macro body with x as parameter
            lines.append(f"#define {fpu_name}(x) {c_func}")
        elif num_args == 1:
            lines.append(f"#define {fpu_name}(x) {c_func}(x)")
        elif num_args == 2:
            lines.append(f"#define {fpu_name}(y, x) {c_func}(y, x)")
        lines.append(f"#endif")
    lines.append("")

    # MMX intrinsics
    lines.append("// =============================================================================")
    lines.append("// MMX Intrinsics (SIMD packed integer operations)")
    lines.append("// =============================================================================")
    lines.append("// These wrap mmintrin.h functions with Ghidra's assembly mnemonic names.")
    lines.append("// Ghidra uses uint64_t/ulonglong for MMX values, so we cast to __m64.")
    lines.append("")
    lines.append("#ifdef __MMX__")
    lines.append("#include <mmintrin.h>")
    lines.append("")

    # Group MMX intrinsics by category for readability
    mmx = get_mmx_intrinsics()

    # Two-operand intrinsics (most of them)
    two_op = ["paddb", "paddw", "paddd", "paddsb", "paddsw", "paddusb", "paddusw",
              "psubb", "psubw", "psubd", "psubsb", "psubsw", "psubusb", "psubusw",
              "pmullw", "pmulhw", "pmaddwd",
              "pand", "pandn", "por", "pxor",
              "pcmpeqb", "pcmpeqw", "pcmpeqd", "pcmpgtb", "pcmpgtw", "pcmpgtd",
              "packsswb", "packssdw", "packuswb",
              "punpckhbw", "punpckhwd", "punpckhdq",
              "punpcklbw", "punpcklwd", "punpckldq"]

    # Shift intrinsics (value + immediate count)
    shift_op = ["psllw", "pslld", "psllq", "psrlw", "psrld", "psrlq", "psraw", "psrad"]

    lines.append("// Two-operand MMX intrinsics")
    for name in two_op:
        if name in mmx:
            func, desc = mmx[name]
            lines.append(f"#define {name}(a, b) (uint64_t){func}((__m64)(a), (__m64)(b))")
    lines.append("")

    lines.append("// Shift MMX intrinsics (value, count)")
    for name in shift_op:
        if name in mmx:
            func, desc = mmx[name]
            lines.append(f"#define {name}(a, count) (uint64_t){func}((__m64)(a), (count))")
    lines.append("")

    lines.append("// MMX state")
    lines.append("#define emms() _mm_empty()")
    lines.append("")
    lines.append("#endif // __MMX__")
    lines.append("")

    # CPUID intrinsics
    lines.append("// =============================================================================")
    lines.append("// CPUID Intrinsics (CPU identification)")
    lines.append("// =============================================================================")
    lines.append("// These wrap the CPUID instruction. Ghidra emits these when decompiling")
    lines.append("// CPU detection code. Each returns a pointer to a static 4-element array")
    lines.append("// containing EAX, EBX, ECX, EDX values from CPUID.")
    lines.append("//")
    lines.append("// Note: The returned pointer points to static storage that is overwritten")
    lines.append("// by subsequent calls. Copy the values if you need to preserve them.")
    lines.append("")
    lines.append("#if defined(_MSC_VER)")
    lines.append("#include <intrin.h>")
    lines.append("static inline int* _cpuid_intrinsic(int leaf) {")
    lines.append("    static int _cpuid_regs[4];")
    lines.append("    __cpuid(_cpuid_regs, leaf);")
    lines.append("    return _cpuid_regs;")
    lines.append("}")
    lines.append("#elif defined(__GNUC__) || defined(__clang__)")
    lines.append("// Save and undef register-named calling convention macros that clash")
    lines.append("// with variable names in clang/gcc's cpuid.h (e.g. __edx)")
    lines.append("#pragma push_macro(\"__eax\")")
    lines.append("#pragma push_macro(\"__ebx\")")
    lines.append("#pragma push_macro(\"__ecx\")")
    lines.append("#pragma push_macro(\"__edx\")")
    lines.append("#undef __eax")
    lines.append("#undef __ebx")
    lines.append("#undef __ecx")
    lines.append("#undef __edx")
    lines.append("#include <cpuid.h>")
    lines.append("#pragma pop_macro(\"__eax\")")
    lines.append("#pragma pop_macro(\"__ebx\")")
    lines.append("#pragma pop_macro(\"__ecx\")")
    lines.append("#pragma pop_macro(\"__edx\")")
    lines.append("static inline int* _cpuid_intrinsic(int leaf) {")
    lines.append("    static int _cpuid_regs[4];")
    lines.append("    __cpuid(leaf, _cpuid_regs[0], _cpuid_regs[1], _cpuid_regs[2], _cpuid_regs[3]);")
    lines.append("    return _cpuid_regs;")
    lines.append("}")
    lines.append("#else")
    lines.append("// Fallback for compilers without CPUID intrinsics")
    lines.append("static inline int* _cpuid_intrinsic(int leaf) {")
    lines.append("    static int _cpuid_regs[4] = {0, 0, 0, 0};")
    lines.append("    return _cpuid_regs;")
    lines.append("}")
    lines.append("#endif")
    lines.append("")

    # Generate individual CPUID wrapper macros
    for name, leaf, desc in get_cpuid_intrinsics():
        lines.append(f"// {desc}")
        lines.append(f"#define {name}(x) _cpuid_intrinsic(x)")
    lines.append("")

    # Math intrinsics
    lines.append("// =============================================================================")
    lines.append("// Math Intrinsics")
    lines.append("// =============================================================================")
    lines.append("")
    lines.append("#ifndef ROUND")
    lines.append("// Matches Watcom's `crt_math.c_round` (FUN_005fe6b0): the asm sets the FPU")
    lines.append("// rounding-control bits to 11 (round-toward-zero) before FRNDINT, so the")
    lines.append("// function actually TRUNCATES toward zero — despite the name. Every Ghidra")
    lines.append("// `ROUND(...)` in the decompile maps back to a call to that function (or to")
    lines.append("// FIST applied to its already-integer result), so truncate semantics is the")
    lines.append("// faithful match. NaN/inf/out-of-range -> INT_MIN per Watcom FIST behavior.")
    lines.append("static inline int ROUND(double x) {")
    lines.append("    if (x != x || x >= 2147483647.5 || x < -2147483648.5) return (int)0x80000000;")
    lines.append("    return (int)x;")
    lines.append("}")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef TRUNC")
    lines.append("#define TRUNC(x) ((int)(x))")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef ABS")
    lines.append("#define ABS(x) ((x) < 0 ? -(x) : (x))")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef SQRT")
    lines.append("#define SQRT(x) sqrt(x)")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef NAN")
    lines.append("#define NAN(x) isnan(x)")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef INF")
    lines.append("#define INF(x) isinf(x)")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef FLOOR")
    lines.append("#define FLOOR(x) floor(x)")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef CEIL")
    lines.append("#define CEIL(x) ceil(x)")
    lines.append("#endif")
    lines.append("")

    # Sync intrinsics (no-op stubs)
    lines.append("// =============================================================================")
    lines.append("// Synchronization Intrinsics")
    lines.append("// =============================================================================")
    lines.append("// No-op stubs for single-threaded decompilation analysis")
    lines.append("")
    lines.append("#ifndef LOCK")
    lines.append("#define LOCK(x) (void)(x)")
    lines.append("#endif")
    lines.append("")
    lines.append("#ifndef UNLOCK")
    lines.append("#define UNLOCK(x) (void)(x)")
    lines.append("#endif")
    lines.append("")

    # ADJ - Offset pointer adjustment
    lines.append("// =============================================================================")
    lines.append("// ADJ - Offset Pointer Adjustment")
    lines.append("// =============================================================================")
    lines.append("// ADJ(ptr) is used by Ghidra to convert an offset pointer back to its base type.")
    lines.append("// An offset pointer is a pointer that points into the middle of a structure")
    lines.append("// (e.g., a pointer to a field at offset 0x158 within a larger struct).")
    lines.append("//")
    lines.append("// In Ghidra's decompiled output, offset pointer typedefs like CAmmo_ptr_158")
    lines.append("// represent \"a pointer that is 0x158 bytes into a CAmmo struct\".")
    lines.append("// ADJ(ptr) adjusts this back to point to the base of the containing struct.")
    lines.append("//")
    lines.append("// The adjusted pointer structs have:")
    lines.append("//   operator->()  - returns the subobject type pointer (for direct field access)")
    lines.append("//   adj()         - returns the base class pointer (used by ADJ)")
    lines.append("//")
    lines.append("// Usage: ADJ(pCVar2)->field_name  accesses base class fields")
    lines.append("//        pCVar2->field_name        accesses subobject fields")
    lines.append("")
    lines.append("template<typename T>")
    lines.append("inline typename T::base_type* ADJ(const T& ptr) { return ptr.adj(); }")
    lines.append("")

    return "\n".join(lines)


def write_intrinsics_header(pseudocode_dir):
    """Write intrinsics.h to the system directory.

    Args:
        pseudocode_dir: Base directory for headers (include folder)

    Returns:
        Path to the written file, or None if failed.
    """
    system_dir = os.path.join(pseudocode_dir, "system")
    make_dirs(system_dir)

    intrinsics_path = os.path.join(system_dir, "intrinsics.h")
    content = generate_intrinsics_header()

    try:
        with open(intrinsics_path, 'w') as f:
            f.write(content)
        log_info("Generated intrinsics header: %s" % intrinsics_path)
        return intrinsics_path
    except Exception as e:
        log_info("Failed to write intrinsics header: %s" % str(e))
        return None
