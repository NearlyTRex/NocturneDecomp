# Suspect pattern detection for pseudocode export
# Identifies problematic patterns in decompiled code that may need manual review

import bisect
import json
import os
import re
from collections import defaultdict

from ghidra_annotations.annotations.pseudocode.pass_by_value import BYVALUE_CALLEES

# Safe decompiler intrinsics - these are detected as suspects but do NOT count
# against a function's "clean" status in reports. These intrinsics have valid
# C macro definitions in the intrinsics header and compile successfully.
SAFE_INTRINSICS = frozenset({
    # Offset pointer adjustment
    'ADJ',      # #define ADJ(x) (x) - identity macro
    # Math intrinsics (uppercase Ghidra names)
    'ROUND',    # #define ROUND(x) - valid rounding implementation
    'SQRT',     # #define SQRT(x) sqrt(x)
    'TRUNC',    # #define TRUNC(x) ((int)(x))
    'FLOOR',    # #define FLOOR(x) floor(x)
    'CEIL',     # #define CEIL(x) ceil(x)
    'ABS',      # #define ABS(x) ((x) < 0 ? -(x) : (x))
    # NAN removed: all NAN() occurrences in codebase are FNSTSW artifacts,
    # not legitimate isnan() calls. Caught by nan_function_artifact pattern.
    # FPU intrinsics (x87 mnemonic names -> standard C math)
    'fsin',     # #define fsin(x) sin(x)
    'fcos',     # #define fcos(x) cos(x)
    'fptan',    # #define fptan(x) tan(x)
    'fpatan',   # #define fpatan(y, x) atan2(y, x)
    'fsqrt',    # #define fsqrt(x) sqrt(x)
    'fabs',     # #define fabs(x) fabs(x)
})


SUSPECT_SEVERITY = {
    # Severe: code is essentially unreadable
    'fnstsw_flag_artifact': 'severe',
    'nan_function_artifact': 'severe',
    'badspacebase': 'severe',
    'warning_spacebase': 'severe',
    'warning_max_restarts': 'severe',
    'decompilation_failed': 'severe',
    # Moderate: significant artifacts, partially readable
    'double_reconstruction': 'moderate',
    'concat_reconstruction': 'moderate',
    'sub84_truncation': 'moderate',
    'bare_stack_ref': 'moderate',
    'stack_alignment_array': 'moderate',
    'stack_ref': 'moderate',
    'stack_param': 'moderate',
    'undefined_type': 'moderate',
    'undefined_ptr_cast': 'moderate',
    'extra_output': 'moderate',
    'unaffected_reg': 'moderate',
    'unresolved_funcptr': 'moderate',
    'warning_unmapped_variable': 'moderate',
    'warning_type_propagation': 'moderate',
    'warning_partial_indirect': 'moderate',
    'warning_unable_to_use_type': 'moderate',
    'warning_inlined_function': 'mild',
    'warning_is_inlined': 'mild',
    # Mild: minor issues, code is readable
    'unnamed_param': 'mild',
    'unknown_field': 'mild',
    'undefined_ram': 'mild',
    'unnamed_field': 'mild',
    'unknown_param': 'mild',
    'register_param': 'mild',
    'negative_offset': 'mild',
    'decompiler_intrinsic': 'mild',
    'suspect_float': 'mild',
    'nonstandard_int': 'mild',
    'pointer_cast': 'moderate',
    'displaced_global_access': 'moderate',
    'wrong_global': 'moderate',
    'suspicious_cast': 'moderate',
    'raw_address_constant': 'moderate',
    'unrolled_strcpy': 'moderate',
    'unrolled_memcpy': 'moderate',
    'unrolled_memset': 'moderate',
    'unrolled_strlen': 'moderate',
    'unrolled_strcat': 'moderate',
    'unrolled_strchr': 'moderate',
    'preinc_loop_idiom': 'moderate',
    'missing_cave_copy': 'moderate',
    'fast_sqrt_inline': 'moderate',
    'fast_inv_sqrt_inline': 'moderate',
    'bit_int_float_compare': 'moderate',
    'bitcast_double_pair': 'moderate',
    'bitcast_double': 'moderate',
    'sibling_array_undersized': 'moderate',
    'self_copy_guard': 'moderate',
    'dropped_self_copy': 'moderate',
    'tautological_addr_guard': 'moderate',
    'shadow_pointer_walk': 'moderate',
    'memcpy_oversized_source': 'moderate',
    'dropped_loop_counter': 'moderate',
    'loop_clobbered_constant': 'moderate',
    'primitive_walker_cast': 'moderate',
    'subfield_vector_pun': 'moderate',
    'sign_compare_idiom': 'moderate',
    'carry_arith_idiom': 'moderate',
    'signed_shift_global_idiom': 'moderate',
    'struct_field_overrun': 'moderate',
}


def is_safe_suspect(suspect):
    """Check if a suspect is a safe intrinsic that doesn't affect clean status.

    Args:
        suspect: A suspect dictionary with 'type' and 'match' keys

    Returns:
        True if this suspect is a safe decompiler intrinsic
    """
    return (suspect.get('type') == 'decompiler_intrinsic' and
            suspect.get('match') in SAFE_INTRINSICS)


def has_only_safe_suspects(suspects):
    """Check if all suspects in a list are safe intrinsics.

    A function with only safe suspects is considered "effectively clean"
    for reporting purposes.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        True if the list is empty or contains only safe intrinsics
    """
    if not suspects:
        return True
    return all(is_safe_suspect(s) for s in suspects)


# Patterns that indicate potential issues in decompiled code
# Format: (pattern_string, issue_type, description)
_SUSPECT_PATTERN_DEFS = [
    # Decompilation failed or timed out - no usable output
    (r'Decompilation failed or timed out', 'decompilation_failed', 'Decompilation failed or timed out'),
    # BADSPACEBASE - Ghidra couldn't resolve the stack frame
    (r'\bBADSPACEBASE\b', 'badspacebase', 'Ghidra failed to resolve stack frame'),
    # in_stack_XXXX - Stack parameters that Ghidra couldn't properly identify
    (r'\bin_stack_[0-9a-fA-Fx]+\b', 'stack_param', 'Unresolved stack parameter'),
    # &stack0xXXXX - Direct stack address references
    (r'&stack0x[0-9a-fA-F]+', 'stack_ref', 'Direct stack address reference'),
    # undefined types - Ghidra couldn't determine the type
    (r'\bundefined[0-9]*\s+\w+', 'undefined_type', 'Unresolved type'),
    # Casts to undefined pointer types like (undefined1 *) or (undefined4 *)
    (r'\(undefined[0-9]*\s*\*\)', 'undefined_ptr_cast', 'Cast to undefined pointer type'),
    # Negative array indexing like pCVar[-10].x - usually wrong base type
    (r'\w+\[-\d+\]\.', 'negative_offset', 'Negative struct offset (wrong base type)'),
    # extraout_* - Extra output parameters Ghidra inferred (wrong calling convention)
    (r'\bextraout_[A-Za-z0-9_]+\b', 'extra_output', 'Inferred extra output (wrong calling convention)'),
    # in_* register parameters that look suspicious
    (r'\bin_[A-Z]{2,3}\b', 'register_param', 'Inferred register parameter'),
    # unaff_* - Unaffected register variables
    (r'\bunaff_[A-Z]+\b', 'unaffected_reg', 'Unaffected register variable'),
    # Very small floats that are likely misinterpreted integers (e.g., 9.18355e-41)
    (r'\b\d+\.\d+e-[3-9]\d\b', 'suspect_float', 'Likely misinterpreted integer as float'),
    # Type casts to weird pointer arithmetic. Matches `(TYPE *)(...(int)X...)`
    # where `(int)X` is a pointer-to-int round-trip — X must be a bare
    # identifier (not a function call), so we require `(int)` to be followed
    # by an identifier that does NOT precede an open paren. This avoids
    # false-positives on `(int)ROUND(...)` and similar numeric casts of
    # function results that happen to appear inside a `(TYPE *)(...)` outer
    # paren. `[^)]*` keeps the match within a single parenthesized group.
    # The TYPE allows multi-word forms like `unsigned int *`, `long long *`.
    # `\*+` covers single and double-pointer casts (`(int *)`, `(int **)`) —
    # both shapes appear when Ghidra walks a global array of pointers via
    # byte-offset arithmetic. After `(int)` the operand may be either a bare
    # identifier (`(int)pSVar2`) or a parenthesized expression followed by
    # struct access (`(int)(local_1f4.tri_data)->attribute_indices`); both
    # forms are byte-offset trampolines that should be rewritten as typed
    # field/index access in a .keep.
    (r'\(\w+(?:\s+\w+)*\s*\*+\s*\)\s*\([^)]*\(int\)\s*'
     r'(?:\([^()]*\)\s*(?:->|\.)\s*\w+|\w+)(?!\w|\s*\()',
     'pointer_cast', 'Complex pointer cast'),
    # Primitive-pointer cast on a typed struct-array element address —
    # Ghidra walks the struct field-by-field via `(int *)[N]` / `(uint *)[N]`
    # / `(SIZE_T *)[N]` indexing after losing the struct type for the local.
    # The walker pattern is `LOCAL = (int *)&NAME[IDX];` or
    # `LOCAL = (int *)&NAME->FIELD[IDX];` — an assignment to a primitive-typed
    # local, NOT a `*(int *)&...` bit-cast dereference (which is a different
    # pattern, usually intentional float-bit reinterpretation). The negative
    # lookbehind `(?<!\*)` excludes the dereference form. Fix in a .keep by
    # retyping the LHS local to the struct's element type and using field
    # names instead of `local[1]`/`local[3]`/`local[0x15]` etc.
    # Restricted to pointer-sized primitives (int/uint/SIZE_T/size_t/long);
    # `char *` / `byte *` / `uchar *` are excluded since they often
    # legitimately appear in serialization byte-stream code.
    # The field-access group repeats zero-or-more times so multi-level walks
    # like `(uint *)&array->codes.q[0][i]` are caught, not just single-level
    # `(uint *)&array->field[i]`.
    (r'(?<!\*)\((?:int|uint|SIZE_T|size_t|long|unsigned\s+long|unsigned\s+int)\s*\*\s*\)\s*'
     r'&\s*\w+(?:\s*(?:->|\.)\s*\w+)*\s*\[',
     'primitive_walker_cast',
     'Primitive-pointer cast hiding struct field walk — retype to element type'),
    # _._N_N_ field access patterns (mangled/unknown field names)
    (r'\._\d+_\d+_', 'unknown_field', 'Unknown/mangled field access'),
    # `code *` — Ghidra's placeholder type for unresolved function pointers
    # (e.g. `code *pcVar1;` or `(code **)(...)`). The lookbehind excludes
    # identifiers ending in "code" (search_code, findCode, decodeCode); the
    # explicit `*` avoids false matches on the English word in string
    # literals or struct field names (pCVar->code).
    (r'(?<![A-Za-z0-9_])code\s*\*', 'unresolved_funcptr', 'Unresolved function pointer (vtable lookup failed)'),
    # WARNING: Removing unreachable block
    (r'WARNING:\s*Removing unreachable block', 'warning_unreachable', 'Unreachable code block removed'),
    # WARNING: Could not recover jumptable
    (r'WARNING:\s*Could not recover jumptable', 'warning_jumptable', 'Jump table recovery failed'),
    # WARNING: Treating indirect jump as call
    (r'WARNING:\s*Treating indirect jump as call', 'warning_indirect_jump', 'Indirect jump treated as call'),
    # WARNING: Subroutine does not return
    (r'WARNING:\s*Subroutine does not return', 'warning_noreturn', 'Subroutine marked as non-returning'),
    # WARNING: Globals starting with '_' overlap
    (r'WARNING:\s*Globals starting with', 'warning_overlapping_globals', 'Overlapping global symbols'),
    # WARNING: Type propagation algorithm not settling
    (r'WARNING:\s*Type propagation algorithm not settling', 'warning_type_propagation', 'Type propagation did not converge'),
    # WARNING: Unable to track spacebase fully for stack
    (r'WARNING:\s*Unable to track spacebase fully for stack', 'warning_spacebase', 'Stack frame tracking failed'),
    # WARNING: Exceeded maximum restarts with more pending
    (r'WARNING:\s*Exceeded maximum restarts with more pending', 'warning_max_restarts', 'Decompiler iteration limit exceeded'),
    # WARNING: Restarted to delay deadcode elimination for space:
    (r'WARNING:\s*Restarted to delay deadcode elimination', 'warning_deadcode_restart', 'Deadcode elimination delayed'),
    # WARNING: Instruction at ... overlaps instruction at
    (r'WARNING:\s*Instruction at .* overlaps instruction at', 'warning_overlapping_instructions', 'Overlapping instructions detected'),
    # WARNING: Struct "...": ignoring multiple overlapping fields
    (r'WARNING:\s*Struct .* ignoring multiple overlapping fields', 'warning_struct_overlap', 'Struct has overlapping fields'),
    # uRamXXXX - Undefined RAM references (Ghidra couldn't resolve memory location)
    (r'\b[pu]?uRam[0-9a-fA-F]+\b', 'undefined_ram', 'Undefined RAM reference'),
    # param_N - Ghidra's auto-generated unnamed parameter form. The underscore
    # is mandatory: real struct fields like `this_ptr->param1` are not
    # auto-generated and must not be flagged. (CActorProperty has fields
    # `param1`/`param2`/`param3` that previously matched the optional-underscore
    # form as false positives.)
    (r'\bparam_\d+\b', 'unnamed_param', 'Unnamed function parameter'),
    # p1, p2, etc. - Short generic parameter names in function signatures (need meaningful names)
    # Only match when preceded by a type and * (pointer param) or type name, to avoid matching local vars
    (r'(?:void|int|float|uint|char|double)\s*\*?\s*\bp\d+\b', 'unnamed_param', 'Unnamed function parameter (short form)'),
    # Parameters or variables with "unknown" in the name - flagged for later investigation
    (r'\bunknown_\w+\b', 'unknown_param', 'Parameter/variable named unknown (needs investigation)'),
    # `local_XX` was previously flagged as `unnamed_local` but the project
    # rule is to keep Ghidra-assigned names ("don't rename for style"), so
    # the suspect was pure noise — every kept variable triggered it. Removed.
    # --- Stack alignment / FPU decompiler artifacts (severity indicators) ---
    # FNSTSW flag reconstruction: CONCAT22 with preserved upper bits + shifted flags
    (r'CONCAT22\(.*>>\s*0x10', 'fnstsw_flag_artifact',
     'FNSTSW flag reconstruction (floating-point comparison artifact)'),
    # NAN() function call: FNSTSW comparison artifact (tests FPU unordered bit)
    (r'\bNAN\s*\(', 'nan_function_artifact',
     'NAN() function call (FNSTSW comparison artifact)'),
    # (double)CONCAT44(): double reconstruction from two 32-bit halves
    (r'\(double\)\s*CONCAT44\s*\(', 'double_reconstruction',
     'Double reconstructed from 32-bit halves (stack alignment artifact)'),
    # __BITCAST_DOUBLE(CONCAT44(hi, lo)): two adjacent uint locals being passed
    # as a single double argument. Almost always means Watcom split a `double`
    # local into two 4-byte stack slots and Ghidra modeled them separately.
    # Fixable in a .keep by merging the two uint declarations into one double.
    (r'__BITCAST_DOUBLE\s*\(\s*CONCAT44\s*\(', 'bitcast_double_pair',
     'Two uint locals reconstructed as a double via __BITCAST_DOUBLE(CONCAT44(...)) — fixable by merging into a single double local'),
    # Any other use of the __BITCAST_DOUBLE intrinsic. The macro is a preprocessor
    # hack to bridge Ghidra's split-double representations through compilation —
    # nothing in clean code should reach for it. The CONCAT44 form above has a
    # distinct fix recipe (merge two uints into one double local), so this rule
    # explicitly excludes that shape via negative lookahead. Common remaining
    # shape: `__BITCAST_DOUBLE(0xNNNNNNNNNNNNNNNNULL)` for a hardcoded constant —
    # round-trip the hex bits to a decimal literal and drop the bitcast.
    (r'__BITCAST_DOUBLE\s*\((?!\s*CONCAT44\s*\()', 'bitcast_double',
     '__BITCAST_DOUBLE intrinsic — preprocessor hack to bridge split-double representations. Replace with a typed double or plain decimal literal in a .keep.'),
    # SUB84(): extracting 32-bit value from 64-bit (truncation artifact)
    (r'\bSUB84\s*\(', 'sub84_truncation',
     'SUB84 truncation (extracting 32-bit from 64-bit value)'),
    # Bare stack0xffffff reference without & (hidden negative-offset stack local)
    (r'(?<![&\w])stack0x[0-9a-fA-F]+', 'bare_stack_ref',
     'Bare stack address reference (hidden stack variable)'),
    # StackY_ arrays: oversized aligned stack arrays from stack alignment
    (r'\b\w*StackY_[0-9a-fA-F]+', 'stack_alignment_array',
     'StackY array variable (stack alignment artifact)'),
    # WARNING: Variable defined which should be unmapped
    (r'WARNING:\s*Variable defined which should be unmapped', 'warning_unmapped_variable',
     'Variable defined which should be unmapped'),
    # WARNING: Ignoring partial resolution of indirect
    (r'WARNING:\s*Ignoring partial resolution of indirect', 'warning_partial_indirect',
     'Partial indirect resolution ignored'),
    # WARNING: Inlined function: <name>
    (r'WARNING:\s*Inlined function:', 'warning_inlined_function',
     'Decompiler inlined a function call'),
    # WARNING: This is an inlined function
    (r'WARNING:\s*This is an inlined function', 'warning_is_inlined',
     'Function body is an inlined copy'),
    # WARNING: Unable to use type for symbol
    (r'WARNING:\s*Unable to use type for symbol', 'warning_unable_to_use_type',
     'Ghidra could not apply type to a symbol'),
    # Signed borrow/overflow flag math - Ghidra's spelling of a SIGNED comparison,
    # e.g. `SBORROW4(a,b) != (int)(a-b) < 0` is just signed `a < b` (how JL/JGE read
    # SF^OF). Always reducible to a plain </<=/>/>= comparison in a .keep.
    (r'\b(SBORROW\d*|SCARRY\d*)\b', 'sign_compare_idiom',
     'Signed borrow/overflow flag-math (SBORROW/SCARRY) for a signed comparison; replace with a plain </<=/>/>= operator in a .keep.'),
    # Unsigned CARRY in a comparison context (compared with != / ==) - Ghidra's
    # spelling of an UNSIGNED comparison; reducible to a comparison operator.
    (r'\bCARRY\d*\([^)]*\)\s*[!=]=', 'sign_compare_idiom',
     'Unsigned-carry flag-math (CARRY in a != / == compare) for an unsigned comparison; replace with a comparison operator in a .keep.'),
    # Any OTHER CARRY use is 64-bit arithmetic, NOT a comparison: either multiply-high
    # (`(int)((ulonglong)L >> 0x20) * 2 + (uint)CARRY4(lo,lo)` == `(int)(L >> 0x1f)`)
    # or add-carry (`b = CARRY4(a,d); a = a+d; hi += dhi + (uint)b;` == `b = a+d < a;`).
    # Reducible, but NOT to a comparison - keep the negative-lookahead so compare-context
    # CARRY (handled above) is not double-flagged.
    (r'\bCARRY\d*\([^)]*\)(?!\s*[!=]=)', 'carry_arith_idiom',
     'Carry term in 64-bit arithmetic (multiply-high `(int)(L>>0x1f)` or add-carry `(a+b)<a`), not a comparison; reduce in a .keep.'),
    # Decompiler intrinsics - pseudo-functions and artifacts (not real C)
    # Includes: ROUND(), SQRT(), SUB84, NAN(), fsin, fcos, fptan, ADJ(), etc.
    # NOTE: CONCAT\d+ is intentionally NOT here — it's a counted suspect via
    # identify_concat_reconstruction() (a CONCAT is always a wide-value
    # reconstruction artifact, never legitimate C), not a safe intrinsic.
    (r'\b(ROUND|SQRT|TRUNC|FLOOR|CEIL|ABS|ZEXT|SEXT|SUB\d+|NAN|fsin|fcos|fptan|fpatan|fsqrt|fabs|ADJ)\b', 'decompiler_intrinsic', 'Decompiler intrinsic (not real C)'),
    # CPUID intrinsics - Ghidra's representation of CPUID instruction
    (r'\bcpuid_\w+\b', 'cpuid_intrinsic', 'CPUID intrinsic (CPU detection)'),
    # builtin_* - Ghidra builtin functions
    (r'\bbuiltin_\w+\b', 'builtin_function', 'Ghidra builtin function'),
    # Non-standard integer sizes (int3, uint5, uint7, byte3, etc.) - unusual bit manipulation
    (r'\b(u?int[3567]|byte[23])\b', 'nonstandard_int', 'Non-standard integer size (decompiler artifact)'),
    # Unknown sized types (unkbyte10, unkuint10, etc.)
    (r'\bunk(byte|u?int)\d*\b', 'unknown_type', 'Unknown/unresolved type'),
    # Segment register inputs (in_FS, in_GS) - unusual code patterns, TLS access
    (r'\bin_(FS|GS)\b', 'segment_register', 'Segment register input (TLS or unusual code)'),
    # FPU register inputs (in_ST0-7) - FPU calling convention issues
    (r'\bin_ST[0-7]\b', 'fpu_register_input', 'FPU register input (calling convention issue)'),
    # EFLAGS bit inputs (in_CF, in_ZF, etc.) - CPU flag manipulation, often CPUID/detection code
    (r'\bin_(CF|PF|AF|ZF|SF|TF|IF|DF|OF|NT|RF|VM|AC|VIF|VIP|ID)\b', 'eflags_input', 'EFLAGS bit input (CPU detection or flag manipulation)'),
    # Unresolved register references (register0xNNNN) - Ghidra couldn't map to named register
    (r'\bregister0x[0-9a-fA-F]+\b', 'unresolved_register', 'Unresolved register reference'),
    # DAT_XXXXXXXX - Undefined global data references
    (r'\bDAT_[0-9a-fA-F]{8}\b', 'undefined_data', 'Undefined global data reference'),
    # field_0xNN - Auto-generated struct field names (unnamed fields)
    (r'\bfield_0x[0-9a-fA-F]+\b', 'unnamed_field', 'Auto-generated struct field name'),
]

# Pre-compiled patterns for performance (compiled once at module load)
SUSPECT_PATTERNS = [
    (re.compile(pattern), issue_type, description)
    for pattern, issue_type, description in _SUSPECT_PATTERN_DEFS
]


def identify_suspect_lines(decompiled_code):
    """Identify suspect patterns in decompiled code.

    Args:
        decompiled_code: The decompiled C code as a string

    Returns:
        A list of suspect dictionaries with line, type, match, text, and description
    """
    suspects = []
    lines = decompiled_code.split('\n')
    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped:
            continue
        is_comment = line_stripped.startswith('//') or line_stripped.startswith('/*')
        is_warning_comment = is_comment and 'WARNING:' in line_stripped
        if is_comment and not is_warning_comment:
            continue
        for compiled_pattern, issue_type, description in SUSPECT_PATTERNS:
            if is_comment and not issue_type.startswith('warning_'):
                continue
            for match in compiled_pattern.finditer(line):
                suspects.append({
                    'line': line_num,
                    'type': issue_type,
                    'match': match.group(),
                    'text': line_stripped,
                    'description': description,
                    'severity': SUSPECT_SEVERITY.get(issue_type, 'mild'),
                })
    return suspects


def identify_assembly_suspects(assembly_code, func_calls=None):
    """Identify suspect patterns in assembly code.

    Currently detects:
    - MMX instructions (MOVQ, EMMS, etc.) which indicate SIMD code that
      may not decompile cleanly
    - CPU detection instructions (CPUID, PUSHFD, POPFD) which indicate
      CPU feature detection code that may have unusual decompilation
    - By-value struct passing: detected by checking if the function calls
      any known by-value callee (clipAndDrawLine2D, clipAndDrawLine3D,
      calculateMainDataSize, CSfxSlot_mix)

    Args:
        assembly_code: The assembly code as a string
        func_calls: Optional list of called function dicts with 'name' keys

    Returns:
        A list of suspect dictionaries with line, type, match, text, and description
    """
    suspects = []

    if not assembly_code:
        return suspects

    # MMX instruction patterns
    mmx_pattern = re.compile(
        r'\b(MOVQ|MOVD|PACKSSWB|PACKSSDW|PACKUSWB|PUNPCKHBW|PUNPCKHWD|PUNPCKHDQ|'
        r'PUNPCKLBW|PUNPCKLWD|PUNPCKLDQ|PADDB|PADDW|PADDD|PADDSB|PADDSW|PADDUSB|'
        r'PADDUSW|PSUBB|PSUBW|PSUBD|PSUBSB|PSUBSW|PSUBUSB|PSUBUSW|PMULLW|PMULHW|'
        r'PMADDWD|PCMPEQB|PCMPEQW|PCMPEQD|PCMPGTB|PCMPGTW|PCMPGTD|PAND|PANDN|'
        r'POR|PXOR|PSLLW|PSLLD|PSLLQ|PSRLW|PSRLD|PSRLQ|PSRAW|PSRAD|EMMS)\b',
        re.IGNORECASE
    )

    # MM register pattern (MM0-MM7)
    mm_reg_pattern = re.compile(r'\bMM[0-7]\b', re.IGNORECASE)

    # CPU detection instruction patterns (CPUID, EFLAGS manipulation)
    cpuid_pattern = re.compile(r'\bCPUID\b', re.IGNORECASE)
    eflags_pattern = re.compile(r'\b(PUSHFD?|POPFD?|LAHF|SAHF)\b', re.IGNORECASE)

    lines = assembly_code.split('\n')
    mmx_found = False
    first_mmx_line = None
    mmx_instructions = set()

    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped or line_stripped.startswith(';'):
            continue

        # Check for MMX instructions
        mmx_match = mmx_pattern.search(line)
        if mmx_match:
            mmx_found = True
            mmx_instructions.add(mmx_match.group(1).upper())
            if first_mmx_line is None:
                first_mmx_line = line_num

        # Also check for MM register usage
        if mm_reg_pattern.search(line) and not mmx_found:
            mmx_found = True
            if first_mmx_line is None:
                first_mmx_line = line_num

    # Add a single suspect for MMX usage (not one per instruction)
    if mmx_found:
        suspects.append({
            'line': first_mmx_line or 1,
            'type': 'mmx_assembly',
            'match': ', '.join(sorted(mmx_instructions)[:5]) if mmx_instructions else 'MMX',
            'text': 'Function uses MMX instructions',
            'description': 'MMX/SIMD assembly - may not decompile to clean C code'
        })

    # Check for CPUID instructions (CPU feature detection)
    cpuid_found = False
    eflags_manip = False
    first_cpuid_line = None

    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped or line_stripped.startswith(';'):
            continue

        if cpuid_pattern.search(line):
            cpuid_found = True
            if first_cpuid_line is None:
                first_cpuid_line = line_num

        if eflags_pattern.search(line):
            eflags_manip = True

    # Add suspect for CPUID usage
    if cpuid_found:
        desc = 'CPU detection code using CPUID'
        if eflags_manip:
            desc += ' with EFLAGS manipulation'
        suspects.append({
            'line': first_cpuid_line or 1,
            'type': 'cpuid_assembly',
            'match': 'CPUID',
            'text': 'Function uses CPUID instruction',
            'description': desc + ' - expected unusual decompilation patterns'
        })

    # Check for by-value struct passing by matching called function addresses
    # against BYVALUE_CALLEES (pass_by_value.py).
    if func_calls:
        matched_callees = []
        for call in func_calls:
            addr = call.get('addr', '').lower().lstrip('0') or '0'
            if addr in BYVALUE_CALLEES:
                matched_callees.append(BYVALUE_CALLEES[addr])
        if matched_callees:
            suspects.append({
                'line': 1,
                'type': 'byvalue_struct_passing',
                'match': ', '.join(sorted(set(matched_callees))),
                'text': 'Function calls by-value struct passing functions',
                'description': 'Calls %s - decompiler cannot recognize by-value pattern' % ', '.join(sorted(set(matched_callees)))
            })

    return suspects


# SIB addressing pattern: [REG*SCALE + 0xADDRESS] in assembly
# Captures: (1) scale factor and (2) hex displacement address
# Matches patterns like: [EAX*0x8 + 0x3342b48], [EBX*0x4 + 0x2d01924]
_SIB_PATTERN = re.compile(
    r'\[\w+\*(?:0x)?([0-9a-fA-F]+)\s*\+\s*(?:0x)?([0-9a-fA-F]{6,8})\]'
)


def build_global_interval_map(globals_list):
    """Build a sorted interval map from a globals list for displaced access detection.

    Args:
        globals_list: List of global dicts with 'name', 'address', 'size', and 'type' keys.
                      Typically from extract_globals_and_constants().

    Returns:
        A sorted list of (start_addr_int, end_addr_int, name, type) tuples.
    """
    intervals = []
    for g in globals_list:
        name = g.get('name', '')
        addr_str = g.get('address', '')
        size = g.get('size', 0)
        gtype = g.get('type', '')
        if not addr_str or size <= 0:
            continue
        try:
            addr_int = int(addr_str.replace('0x', ''), 16)
        except (ValueError, AttributeError):
            continue
        intervals.append((addr_int, addr_int + size, name, gtype))

    intervals.sort()
    return intervals


def _find_global_at(addr_int, global_interval_map):
    """Find which global (if any) contains the given address.

    Returns (name, type, start_addr) or None.
    """
    # Binary search for the interval that might contain addr_int
    starts = [iv[0] for iv in global_interval_map]
    idx = bisect.bisect_right(starts, addr_int) - 1
    if idx < 0:
        return None
    start, end, name, gtype = global_interval_map[idx]
    if start <= addr_int < end:
        return (name, gtype, start)
    return None


def _find_global_in_range(low, high, global_interval_map, exclude_name=None):
    """Find a global that starts within (low, high] exclusive of low.

    Returns (name, type, start_addr) or None.
    """
    starts = [iv[0] for iv in global_interval_map]
    # Find first global starting after low
    idx = bisect.bisect_right(starts, low)
    while idx < len(global_interval_map):
        start = global_interval_map[idx][0]
        if start > high:
            break
        name = global_interval_map[idx][2]
        if name != exclude_name:
            return (name, global_interval_map[idx][3], start)
        idx += 1
    return None


def identify_displaced_global_access(assembly_code, global_interval_map=None):
    """Detect compiler-displaced scaled index addressing in assembly.

    When the compiler optimizes scaled index addressing (e.g. [EAX*8 + base]),
    it may fold a register increment into the displacement, shifting the base
    address by one scale factor. If this shifted address lands inside an
    adjacent global's memory range, Ghidra misresolves the access through
    the wrong global.

    Detection: scan assembly for [REG*SCALE + DISP] patterns where:
    1. DISP falls inside global A's range (but NOT at A's start address,
       since that would be a normal array access into A)
    2. A different global B starts within (DISP, DISP+SCALE] — meaning the
       scaled access crosses from A into B's territory

    Args:
        assembly_code: The assembly code as a string
        global_interval_map: Sorted interval map from build_global_interval_map().
                             If None, detection is skipped.

    Returns:
        A list of suspect dictionaries
    """
    suspects = []

    if not assembly_code or not global_interval_map:
        return suspects

    lines = assembly_code.split('\n')
    seen = set()  # Deduplicate by (address, displacement)

    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped or line_stripped.startswith(';'):
            continue

        # Extract instruction address if present (format: "INSTR ... ; 0xADDR")
        instr_addr = ''
        semi_idx = line.rfind(';')
        if semi_idx >= 0:
            addr_part = line[semi_idx + 1:].strip().split()[0] if line[semi_idx + 1:].strip() else ''
            if addr_part and all(c in '0123456789abcdefABCDEF' for c in addr_part):
                instr_addr = addr_part

        for m in _SIB_PATTERN.finditer(line):
            scale_str, disp_str = m.group(1), m.group(2)
            try:
                scale = int(scale_str, 16)
                disp = int(disp_str, 16)
            except ValueError:
                continue

            # Skip tiny scales (not array indexing) or unreasonable ones
            if scale < 2 or scale > 64:
                continue

            dedup_key = (instr_addr, disp)
            if dedup_key in seen:
                continue

            # Check: does disp fall inside global A (but NOT at its start)?
            containing = _find_global_at(disp, global_interval_map)
            if containing is None:
                continue

            container_name, container_type, container_start = containing

            # Look up the interval to get the size of the containing global
            starts = [iv[0] for iv in global_interval_map]
            c_idx = bisect.bisect_right(starts, disp) - 1
            container_end = global_interval_map[c_idx][1]
            container_size = container_end - container_start

            # If disp is at the start of a global that is large enough for the
            # scale factor, this is a normal array access (e.g. [EAX*4 + g_Array])
            if disp == container_start and container_size >= scale * 2:
                continue

            # Check: is there a different global B starting within (disp, disp+scale]?
            # This means the access crosses from A into B's territory
            target = _find_global_in_range(disp, disp + scale, global_interval_map, container_name)

            if target is None:
                continue

            target_name, target_type, target_start = target

            # Skip if the target is a sub-element of the container
            # (e.g. g_Array[1] inside g_Array, or DAT_ inside a named global)
            if (target_name.startswith(container_name + '[') or
                    target_name.startswith(container_name + '.')):
                continue
            # Skip DAT_ targets that are inside the container's range
            # (these are unnamed sub-references, not real separate globals)
            if target_name.startswith('DAT_') and target_start < container_start + container_size:
                continue
            # Skip switch table data (not real globals)
            if (container_name.startswith('switchdata') or
                    container_name.startswith('PTR_case') or
                    target_name.startswith('switchdata') or
                    target_name.startswith('PTR_case')):
                continue

            seen.add(dedup_key)

            suspects.append({
                'line': line_num,
                'type': 'displaced_global_access',
                'match': '0x%x' % disp,
                'text': line_stripped,
                'description': (
                    'Compiler displaced index base: [reg*%d + 0x%x] lands in %s '
                    'but intended target is %s at 0x%x (displaced by %d bytes)'
                    % (scale, disp, container_name,
                       target_name, target_start, target_start - disp)),
                'severity': SUSPECT_SEVERITY.get('displaced_global_access', 'moderate'),
                'displaced_from': container_name,
                'intended_global': target_name,
                'displacement': '0x%x' % disp,
                'scale': scale,
                'instruction_address': instr_addr,
            })

    return suspects


# Canonical Watcom base-shift shape: (&g_Scalar)[idx]
# Ghidra emits this when SIB addressing like [REG*S + &scalar] resolves its
# base to a scalar global that sits immediately before the real array. The
# intent is g_Array[idx] where g_Array starts at &g_Scalar + sizeof(g_Scalar).
_WRONG_GLOBAL_RE = re.compile(
    r'\(\s*&\s*(g_[A-Za-z_][A-Za-z0-9_]*)\s*\)\s*\['
)

# Byte-offset variant: *(type *)(&g_Scalar + expr) or *(type *)(&g_Scalar - expr)
# Same root cause as _WRONG_GLOBAL_RE but with byte-level arithmetic rather
# than a scaled index, so the cast names an explicit element type.
_SUSPICIOUS_CAST_RE = re.compile(
    r'\*\s*\(\s*[\w\s*]+?\s*\*\s*\)'              # *(int *) / *(char *) / *(code *) etc.
    r'\s*\(\s*&\s*(g_[A-Za-z_][A-Za-z0-9_]*)\s*[+\-]'
)

# Raw hex literal with at least 6 hex digits (>= 0x100000 = 1 MiB). Smaller
# constants are almost always numeric values, not addresses.
_RAW_ADDR_RE = re.compile(r'\b0x([0-9a-fA-F]{6,})\b')


def _find_neighbor_after(addr_int, global_interval_map):
    """Find the global whose interval begins at or just after addr_int.

    For wrong_global / suspicious_cast, the likely real target of the access
    is the global that sits immediately after the flagged scalar in memory.

    Returns (name, type, start_addr) or None.
    """
    if not global_interval_map:
        return None
    starts = [iv[0] for iv in global_interval_map]
    idx = bisect.bisect_left(starts, addr_int + 1)
    if idx >= len(global_interval_map):
        return None
    start, _end, name, gtype = global_interval_map[idx]
    return (name, gtype, start)


def identify_wrong_global_suspects(decompiled_code, func_globals=None, global_interval_map=None):
    """Detect Watcom base-shift mis-resolutions of the form (&g_Scalar)[idx].

    Watcom 1-based indexing emits `[REG*S + base]` where base is placed
    `sizeof(element)` bytes before the real array. Ghidra's decompiler resolves
    that base to whatever scalar global sits at that address — typically the
    count variable or control field right before the real array. In the C
    output this manifests as `(&g_ScalarNeighbor)[idx]`, a dead giveaway:
    taking the address of a scalar and indexing into it only makes sense when
    the real target is the array immediately following that scalar.

    Args:
        decompiled_code: The decompiled C pseudocode string.
        func_globals: Unused; kept for signature compatibility with callers.
        global_interval_map: Sorted (start, end, name, type) intervals from
            build_global_interval_map(). If provided, the suspect description
            names the likely real target (the neighbor global).

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects

    name_to_addr = {}
    if global_interval_map:
        for start, _end, name, _gtype in global_interval_map:
            name_to_addr.setdefault(name, start)

    seen = set()
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('#') or stripped.startswith('/*'):
            continue
        for m in _WRONG_GLOBAL_RE.finditer(line):
            name = m.group(1)
            key = (name, line_no)
            if key in seen:
                continue
            seen.add(key)

            desc = 'Scalar global %s accessed via (&%s)[idx] — Watcom base-shift: the real target is likely the array following this scalar in memory.' % (name, name)
            addr = name_to_addr.get(name)
            if addr is not None:
                neighbor = _find_neighbor_after(addr, global_interval_map)
                if neighbor and neighbor[0] != name:
                    desc += ' Likely true target: %s (at 0x%08x, +%d bytes).' % (
                        neighbor[0], neighbor[2], neighbor[2] - addr)

            suspects.append({
                'line': line_no,
                'type': 'wrong_global',
                'match': name,
                'text': stripped,
                'description': desc,
                'severity': SUSPECT_SEVERITY.get('wrong_global', 'moderate'),
            })

    return suspects


def identify_suspicious_cast_suspects(decompiled_code, global_interval_map=None):
    """Detect Watcom base-shift accesses of the form *(T *)(&g_Scalar +/- expr).

    Same root cause as the wrong_global `(&g_Scalar)[idx]` pattern, but with a
    byte-offset arithmetic shape rather than a scaled index. The cast names the
    element type explicitly because the compiler couldn't hide the stride in a
    SIB scale factor (e.g. stride not a power of two, or a byte-level table).

    Args:
        decompiled_code: The decompiled C pseudocode string.
        global_interval_map: Sorted interval map for naming the likely real
            target (the global immediately following the scalar).

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects

    name_to_addr = {}
    if global_interval_map:
        for start, _end, name, _gtype in global_interval_map:
            name_to_addr.setdefault(name, start)

    seen = set()
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('#') or stripped.startswith('/*'):
            continue
        for m in _SUSPICIOUS_CAST_RE.finditer(line):
            name = m.group(1)
            key = (name, line_no)
            if key in seen:
                continue
            seen.add(key)

            desc = 'Cast-and-add on &%s — Watcom base-shift: the real target is likely the array following this scalar in memory.' % name
            addr = name_to_addr.get(name)
            if addr is not None:
                neighbor = _find_neighbor_after(addr, global_interval_map)
                if neighbor and neighbor[0] != name:
                    desc += ' Likely true target: %s (at 0x%08x, +%d bytes).' % (
                        neighbor[0], neighbor[2], neighbor[2] - addr)

            suspects.append({
                'line': line_no,
                'type': 'suspicious_cast',
                'match': name,
                'text': stripped,
                'description': desc,
                'severity': SUSPECT_SEVERITY.get('suspicious_cast', 'moderate'),
            })

    return suspects


def identify_raw_address_constant_suspects(decompiled_code, address_interval_map=None):
    """Detect raw hex literals that match the address of a known global or string.

    When the Ghidra decompiler loses the symbolic reference to a string or
    data symbol, it emits the raw address as a hex constant. At runtime
    these addresses point nowhere in the relinked binary, causing SEGV the
    moment the value is dereferenced.

    Canonical example (engine/ini.cpp caller):
        engine_ini_cpp_CIniFile_ctor(&ini, ".\\system\\nocturne.ini", 0x63169a);
        # 0x63169a is the address of the string "Editor" in the original
        # binary. The call should pass the literal "Editor".

    Args:
        decompiled_code: The decompiled C pseudocode string.
        address_interval_map: Sorted (start, end, name, type) intervals
            covering BOTH globals and constants (strings). Built by
            combining globals_list + constants_list before calling
            build_global_interval_map(). Required for the detector to run.

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code or not address_interval_map:
        return suspects

    seen = set()
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.strip()
        if (stripped.startswith('//') or stripped.startswith('#') or
                stripped.startswith('/*') or stripped.startswith('*')):
            continue
        # case labels in a switch can legitimately contain large hex values
        # when Ghidra fails to reconstruct the switch (jump targets into
        # .text). Those are not dropped-symbol references.
        if stripped.startswith('case '):
            continue

        for m in _RAW_ADDR_RE.finditer(line):
            try:
                addr = int(m.group(1), 16)
            except ValueError:
                continue
            # Skip very low values (unlikely to be real addresses in this
            # binary's layout) and absurdly high ones (likely bitmasks).
            if addr < 0x400000 or addr >= 0x10000000:
                continue
            # Skip values that are almost certainly numeric constants rather
            # than addresses: powers of 2 (single bit set — 0x1000000 etc.
            # used as fixed-point UV scalars or shift positions) and full
            # all-ones bitmasks (0xff, 0xffff, 0xffffff). These collide with
            # globals in the binary's address range only by coincidence.
            if (addr & (addr - 1)) == 0:
                continue
            n = addr
            while n & 1:
                n >>= 1
            if n == 0:
                continue
            # Skip near-power-of-two thresholds (2^N - K for small K). These
            # are bit-width counter limits like 0xfffffe = (1<<24) - 2 or
            # 0x7ffffe = (1<<23) - 2, used as "near rollover" comparison
            # constants. They collide with the global-address range only
            # because they're the same magnitude as some pool's base.
            if any(((addr + k) & (addr + k - 1)) == 0 for k in (1, 2, 3, 4)):
                continue
            # Skip channel-replicated byte patterns like 0xfcfcfc (RGB box-
            # filter mask for `(p & 0xfcfcfc) >> 2` averaging), 0xfefefe
            # (sub-byte rounding masks), 0x010101 (channel broadcast), etc.
            # The same byte across all 3 (or 4) bytes is a bit-trick fingerprint
            # for per-channel arithmetic, never a pointer.
            b0 = addr & 0xff
            b1 = (addr >> 8) & 0xff
            b2 = (addr >> 16) & 0xff
            b3 = (addr >> 24) & 0xff
            if b3 == 0 and b0 == b1 == b2 and b0 != 0:
                continue
            if b0 == b1 == b2 == b3 and b0 != 0:
                continue
            # Skip MB-aligned values (low 20 bits zero) — these are memory-
            # size thresholds (`< 60MB`, `< 16MB`) used in capability
            # checks. Real symbol addresses in this binary are not 1MB-
            # aligned (image base 0x400000 is, but no code/data symbol
            # lands at that bit-pattern). A literal whose low 20 bits are
            # all zero is virtually always a size constant that happens
            # to fall inside a large pool's interval by coincidence.
            if (addr & 0xfffff) == 0:
                continue
            # Skip saturated-channel color constants: every byte is
            # either 0x00 or 0xff. These are RGB transparency / chroma-
            # key colors (0xff00ff = magenta, 0xffff00 = yellow, etc.),
            # not pointers — real symbol addresses don't have this
            # extreme byte pattern.
            if all(b in (0x00, 0xff) for b in (b0, b1, b2, b3)):
                continue

            hit = _find_global_at(addr, address_interval_map)
            if hit is None:
                continue

            gname, gtype, gstart = hit
            key = (line_no, m.start())
            if key in seen:
                continue
            seen.add(key)

            offset = addr - gstart
            offset_note = '' if offset == 0 else ' (+%d bytes into)' % offset
            desc = ('Raw hex literal 0x%x matches address of %s%s (type %s). '
                    'The decompiler dropped the symbolic reference — this is a '
                    'pointer bit-pattern baked in as a constant and will SEGV '
                    'when dereferenced in the relinked binary.' % (
                        addr, gname, offset_note, gtype or 'unknown'))

            suspects.append({
                'line': line_no,
                'type': 'raw_address_constant',
                'match': '0x%x' % addr,
                'text': stripped[:200],
                'description': desc,
                'severity': SUSPECT_SEVERITY.get('raw_address_constant', 'moderate'),
            })

    return suspects


def _looks_like_pointer_address(addr):
    """Heuristic: does this integer look like a baked-in symbol address?

    Mirrors the numeric-constant exclusions in
    identify_raw_address_constant_suspects so the two detectors agree on what
    counts as a pointer-shaped literal vs. a coincidental numeric constant
    (powers of two, channel masks, MB-aligned size thresholds, etc.). Used by
    identify_raw_address_in_local, which has NO global interval map and so must
    decide pointer-ness from the bit pattern alone.
    """
    if addr < 0x400000 or addr >= 0x10000000:
        return False
    # Powers of two (single bit set) — fixed-point UV scalars / shift bases.
    if (addr & (addr - 1)) == 0:
        return False
    n = addr
    while n & 1:
        n >>= 1
    if n == 0:
        return False
    # Near-power-of-two thresholds (2^N - K) — bit-width rollover limits.
    if any(((addr + k) & (addr + k - 1)) == 0 for k in (1, 2, 3, 4)):
        return False
    b0 = addr & 0xff
    b1 = (addr >> 8) & 0xff
    b2 = (addr >> 16) & 0xff
    b3 = (addr >> 24) & 0xff
    # Channel-replicated byte patterns (0xfcfcfc, 0x010101) — per-channel masks.
    if b3 == 0 and b0 == b1 == b2 and b0 != 0:
        return False
    if b0 == b1 == b2 == b3 and b0 != 0:
        return False
    # MB-aligned values (low 20 bits zero) — memory-size thresholds.
    if (addr & 0xfffff) == 0:
        return False
    # Saturated-channel colors (every byte 0x00 or 0xff) — chroma keys.
    if all(b in (0x00, 0xff) for b in (b0, b1, b2, b3)):
        return False
    # Low 16 bits all set (0xNNffff) — 16.16 fixed-point max/clamp limits
    # (0xfeffff ≈ 254.998 used as a UV ceiling) and low-word saturation masks.
    # Real symbol addresses don't sit one byte below a 64K boundary.
    if (addr & 0xffff) == 0xffff:
        return False
    return True


# A bare local assigned a raw hex literal: `iVar5 = 0x3f95dfc;`. LHS is a plain
# identifier (no `->`, `.`, `[`, `*`) so struct-field / global-array stores
# don't match. The constant has >= 6 hex digits (>= 0x100000) to skip small
# numeric literals before the value-range filter even runs.
_INT_ADDR_ASSIGN_RE = re.compile(
    r"^\s*([A-Za-z_]\w*)\s*=\s*0x([0-9a-fA-F]{6,})\s*;\s*$")


def identify_raw_address_in_local(decompiled_code):
    """Detect a raw pointer-range address assigned to a bare local.

    The companion identify_raw_address_constant_suspects only catches a raw
    address baked *inline* into a pointer expression (e.g.
    `*(float *)((int)g_Global + off)` or a call argument), and it needs the
    Ghidra global interval map to confirm the literal hits a known symbol.

    This detector catches the complementary shape that needs NO global map:
    Watcom/Ghidra hoists an address into a bare local as its own statement.

        iVar5 = 0x3f95dfc;       // data: &g_WeatherParticlePositions[0].y, later
                                 //   dereferenced via *(float *)(iVar5 + 4)  (§11)
        iVar4 = 0x5b9c61;        // code: a return-address tracking dead store
                                 //   (an address inside .text, never read)   (§14)

    A bare local assigned a pointer-range hex constant is never legitimate
    source — real code uses symbolic globals/pointers, not magic addresses.
    The pointer-ness is decided from the bit pattern alone (via
    _looks_like_pointer_address), so the detector is source-text-only and fires
    in test_suspects.sh as well as the full export. Two remediation paths:
      - Data address (in a global/string range), usually dereferenced or passed
        as a pointer: recover the symbol from the .asm and replace with
        symbolic global/array indexing (§11).
      - Code address (inside .text), a dead store left by return-address
        tracking: delete the assignment (§14).
    The LHS is a bare identifier (no `->`, `.`, `[`, `*`), so struct-field /
    global-array stores never match. The numeric filter drops powers of two,
    channel/color masks, MB-aligned size thresholds, and 16.16 clamp limits
    (0xNNffff) that fall in the address range by coincidence.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts (type raw_address_constant), located at the
        constant-assignment line.
    """
    suspects = []
    if not decompiled_code:
        return suspects

    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.strip()
        if (stripped.startswith('//') or stripped.startswith('#') or
                stripped.startswith('/*') or stripped.startswith('*')):
            continue
        m = _INT_ADDR_ASSIGN_RE.match(line)
        if not m:
            continue
        try:
            addr = int(m.group(2), 16)
        except ValueError:
            continue
        if not _looks_like_pointer_address(addr):
            continue
        ident = m.group(1)
        suspects.append({
            'line': line_no,
            'type': 'raw_address_constant',
            'match': '0x%x' % addr,
            'text': stripped[:200],
            'description': (
                'Raw hex address 0x%x assigned to bare local `%s`. The '
                'decompiler dropped a symbolic reference — either a data-symbol '
                'pointer (recover the symbol from the .asm and replace `%s` '
                'with symbolic global/array indexing, §11) or a dead '
                'code-address store from return-address tracking (delete it, '
                '§14). Magic addresses do not survive the relink.' % (
                    addr, ident, ident)),
            'severity': SUSPECT_SEVERITY.get('raw_address_constant', 'moderate'),
        })

    return suspects


# Watcom's loop-unrolled strcpy copies 2 bytes per iteration and checks for
# null termination in the middle of the body. The distinguishing line is
# a null-check that exits the loop, immediately after `*<dst> = <byte_var>;`
# — normal code never exits on null right after a byte store. The exit can be
# a plain `break;`, an inline `return ...;`, or a `{ ... }` block with a
# terminal inside (Watcom sometimes emits the divergent branch both ways).
_UNROLLED_BYTE_STORE_RE = re.compile(
    r"^\s*\*?(\w+)(?:\[\d+\])?\s*=\s*(\w+)\s*;\s*$")
# Cast-wrapped destination form: `(*(char (*) [N])dst)[0] = cVar;`. Watcom
# emits this when the destination local is typed as a fixed-size char array
# (e.g. g_MessageKeyStorage[i] : char[128]). Group 2 still captures the byte
# source var so the null-break cross-check remains the same.
_UNROLLED_CASTED_BYTE_STORE_RE = re.compile(
    r"^\s*\(\s*\*.*\)\s*\[\d+\]\s*=\s*(\w+)\s*;\s*$")
# Struct-field destination form: `obj->field[N] = cVar;` / `obj->field = cVar;` /
# `obj.field = cVar;` / `(obj->field).array[N] = cVar;`. The destination starts
# with either a bare identifier or a parenthesized `ident(->field|.field)*`
# chain (optionally `*`/`&`-prefixed), then has at least one trailing `->`,
# `.`, or `[...]` accessor. Used by Watcom when the destination is a struct
# field rather than a bare local pointer/array (e.g. `this_ptr->filename[0] =
# cVar1;` or `(pCVar2->base).actor_name[0] = cVar1;`). Group 1 captures the
# byte source var.
_UNROLLED_STRUCT_BYTE_STORE_RE = re.compile(
    r"^\s*(?:\*\s*)?"
    r"(?:\(\s*[*&]?\s*\w+(?:->\w+|\.\w+)*\s*\)|\w+)"
    r"(?:->\w+|\.\w+|\[[^\]]+\])+"
    r"\s*=\s*(\w+)\s*;\s*$")
_UNROLLED_NULL_BREAK_RE = re.compile(
    r"^\s*if\s*\(\s*(\w+)\s*==\s*'\\0'\s*\)\s*break\s*;\s*$")
_UNROLLED_NULL_RETURN_RE = re.compile(
    r"^\s*if\s*\(\s*(\w+)\s*==\s*'\\0'\s*\)\s*return\b[^;]*;\s*$")
_UNROLLED_NULL_BLOCK_RE = re.compile(
    r"^\s*if\s*\(\s*(\w+)\s*==\s*'\\0'\s*\)\s*\{\s*$")
_UNROLLED_TERMINAL_RE = re.compile(
    r"^\s*(?:break|return\b[^;]*|continue|goto\s+\w+)\s*;\s*$")
_UNROLLED_DO_RE = re.compile(r"^\s*do\s*\{?\s*$")
_UNROLLED_WHILE_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\w+\s*!=\s*'\\0'\s*\)\s*;\s*$")
# A loop-invariant capture (`tmp = ident;`) that Watcom sometimes hoists
# between the byte store and the null-break inside an unrolled strcpy, e.g.
# `pacVar6 = pacVar3;` (buildMasterTextureList sort) or `pcVar4 = local_12c;`
# (CTextureList::load). LHS and RHS are both bare identifiers — NOT a byte
# store (`*dst`/`dst[1]`), pointer advance (`p = p + 2`), or comparison.
_UNROLLED_INTERLEAVED_ASSIGN_RE = re.compile(r"^\s*\w+\s*=\s*\w+\s*;\s*$")


def identify_unrolled_strcpy_loops(decompiled_code):
    """Detect Watcom's loop-unrolled byte-by-byte strcpy artifacts.

    The canonical shape is a do-while copying 2 bytes per iteration:
        do {
            cVar1 = *src;
            *dst = cVar1;
            if (cVar1 == '\\0') break;
            cVar2 = src[1];
            src = src + 2;
            dst[1] = cVar2;
            dst = dst + 2;
        } while (cVar2 != '\\0');

    These should be replaced with `strcpy(dst, src);` in a .keep.

    The match anchor is the `if (<var> == '\\0') break;` line that sits
    immediately after a byte store — a combination specific to this pattern.
    The detector then confirms by looking for the `do {` opener above and
    the `} while (<var> != '\\0')` closer below.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected loop (located at the
        loop's `do {` line so the user can jump straight to it).
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 1):
        # Require `*dst = cVar;` followed by a null-check that exits the loop.
        # The destination may be a plain `*name` / `name[N]` or a cast-wrapped
        # `(*(char (*) [N])name)[N]` — both forms route the byte var into the
        # 2nd capture group so the null-break cross-check is identical.
        store_m = _UNROLLED_BYTE_STORE_RE.match(lines[i])
        if store_m:
            byte_var = store_m.group(2)
        else:
            store_m = _UNROLLED_CASTED_BYTE_STORE_RE.match(lines[i])
            if store_m:
                byte_var = store_m.group(1)
            else:
                store_m = _UNROLLED_STRUCT_BYTE_STORE_RE.match(lines[i])
                if not store_m:
                    continue
                byte_var = store_m.group(1)
        # The null-break normally sits immediately after the byte store, but
        # Watcom sometimes hoists a loop-invariant capture (`tmp = ident;`)
        # between them. Tolerate one such intervening simple assignment.
        null_idx = i + 1
        if (null_idx < n
                and not _UNROLLED_NULL_BREAK_RE.match(lines[null_idx])
                and not _UNROLLED_NULL_RETURN_RE.match(lines[null_idx])
                and not _UNROLLED_NULL_BLOCK_RE.match(lines[null_idx])
                and _UNROLLED_INTERLEAVED_ASSIGN_RE.match(lines[null_idx])):
            null_idx = i + 2
        if null_idx >= n:
            continue
        null_m = (_UNROLLED_NULL_BREAK_RE.match(lines[null_idx]) or
                  _UNROLLED_NULL_RETURN_RE.match(lines[null_idx]) or
                  _UNROLLED_NULL_BLOCK_RE.match(lines[null_idx]))
        if not null_m or byte_var != null_m.group(1):
            continue
        # For the block form, require a terminal statement inside the block.
        if _UNROLLED_NULL_BLOCK_RE.match(lines[null_idx]):
            if null_idx + 1 >= n or not _UNROLLED_TERMINAL_RE.match(
                    lines[null_idx + 1]):
                continue
        # Look upward for the `do {` header
        loop_start = None
        for back in range(1, 8):
            if i - back < 0:
                break
            if _UNROLLED_DO_RE.match(lines[i - back]):
                loop_start = i - back
                break
        if loop_start is None:
            continue
        # Look downward for the `} while (<var> != '\0');` closer
        loop_end = None
        for fwd in range(2, 14):
            if i + fwd >= n:
                break
            if _UNROLLED_WHILE_RE.match(lines[i + fwd]):
                loop_end = i + fwd
                break
        if loop_end is None:
            continue
        suspects.append({
            'line': loop_start + 1,
            'type': 'unrolled_strcpy',
            'match': 'do {',
            'text': lines[loop_start].strip()[:120],
            'description': (
                'Watcom loop-unrolled strcpy (2-byte-at-a-time do-while '
                'with mid-body null check). Replace the whole loop with '
                'strcpy() in a .keep.'),
            'severity': 'moderate',
        })
    return suspects


# Watcom's loop-unrolled memcpy copies N dwords (or words/bytes) per
# iteration inside a countdown for loop. The tell-tale combination is a
# countdown header plus the `((uint)<bool> * -2 + 1)` arithmetic, which is
# Watcom's direction-select idiom for REP MOVSD emulation.
# Countdown for-loop header with optional initializer. Watcom emits both
# `for (var = N; var != 0; var = var + -1)` and `for (; var != 0; var = var
# + -1)` — the latter when N was already in `var` from earlier code.
# Tolerates float-mistyped counters (`var != 0.0`, `var = (float)((int)var
# + -1)`) — Ghidra sometimes unifies an int REP MOVSD count with a nearby
# float into one variable, but the decrement idiom still confirms it.
_UNROLLED_MEMCPY_FOR_RE = re.compile(
    r"^\s*for\s*\(\s*(?:(\w+)\s*=\s*[^;]+?)?\s*;\s*[^;]*?(\w+)\s*!=\s*0(?:\.0+)?f?\s*;\s*"
    r"\2\s*=\s*[^;]*?\b\2\b\s*(?:\+\s*-?1|-\s*1)[^;]*?\)\s*\{?\s*$")
# Pointer-deref store. RHS may be `*src` (Watcom typed-pair lowering) or a
# field/expr like `(p->field).x` (Ghidra rendering when src walks a struct).
# The strong signal is the direction idiom; the store check just rejects
# loops that don't store through a pointer.
_UNROLLED_MEMCPY_STORE_RE = re.compile(
    r"^\s*\*\s*(?:\(\s*\w+\s*\*\s*\)\s*)?\w+\s*=\s*.+;\s*$")
# The `(uint)bVar * -2 + 1` direction trick — very specific to Watcom's
# REP MOVSD lowering. `* -8 + 4` is the dword-scaled variant.
_UNROLLED_MEMCPY_DIR_RE = re.compile(
    r"\(\s*uint\s*\)\s*\w+\s*\*\s*-?\d+\s*\+\s*\d+")
# Typed-pair memcpy: paired `*ptr = *src;` deref store and `ptr = ptr + 1;`
# typed-pointer increment. This is Watcom's no-direction-idiom variant of
# REP MOVSD lowering — emitted when type info lets Ghidra render typed
# pointer math. A countdown loop with both signals is unambiguously a
# memcpy.
_UNROLLED_MEMCPY_TYPED_STORE_RE = re.compile(
    r"^\s*\*\s*\w+\s*=\s*\*\s*\w+\s*;\s*$")
_UNROLLED_MEMCPY_TYPED_INC_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*1\s*;\s*$")


# Watcom's other inline-memcpy lowering: a dword countdown over `N >> 2`
# followed by a byte countdown over `N & 3` for the trailing 0..3 bytes.
# Together the pair copies exactly N bytes. Both halves over the same `N`
# expression is an unambiguous fingerprint — generic countdown loops don't
# come paired this way.
_UNROLLED_MEMCPY_DWORD_FOR_RE = re.compile(
    r"^\s*for\s*\(\s*(\w+)\s*=\s*(.+?)\s*>>\s*2\s*;\s*\1\s*!=\s*0\s*;\s*"
    r"\1\s*=\s*\1\s*(?:\+\s*-?1|-\s*1)\s*\)\s*\{?\s*$")
_UNROLLED_MEMCPY_BYTE_FOR_RE = re.compile(
    r"^\s*for\s*\(\s*(\w+)\s*=\s*(.+?)\s*&\s*3\s*;\s*\1\s*!=\s*0\s*;\s*"
    r"\1\s*=\s*\1\s*(?:\+\s*-?1|-\s*1)\s*\)\s*\{?\s*$")


def identify_unrolled_memcpy_dword_byte_split(decompiled_code):
    """Detect Watcom's REP MOVSD + trailing-byte-copy memcpy lowering.

    Canonical shape (no direction idiom — plain +4 / +1 advances):
        for (X = N >> 2; X != 0; X = X - 1) {
            *(uint *)dst = *(uint *)src;
            src = src + 4;
            dst = dst + 4;
        }
        for (Y = N & 3; Y != 0; Y = Y - 1) {
            *dst = *src;
            src = src + 1;
            dst = dst + 1;
        }

    Together the two loops copy exactly N bytes (N/4 dwords + N%4 bytes).
    The shared `N` expression between the `>> 2` and `& 3` headers is the
    smoking gun — generic countdown loops aren't paired this way.

    The existing `identify_unrolled_memcpy_loops` detector requires the
    `(uint)bVar * -8 + 4` direction idiom that Watcom emits for some
    REP MOVSD lowerings; this detector covers the simpler shape that
    omits the direction idiom (e.g. CConsole_scrollUp_FUN_00441a80).
    When either loop body *does* have the direction idiom, the existing
    detector handles it and this one stays quiet to avoid double-counting.

    Replace both loops with `memcpy(dst, src, N)` in a .keep.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per matched loop pair (located at
        the dword loop's `for` header so the user can jump to it).
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 1):
        m_dword = _UNROLLED_MEMCPY_DWORD_FOR_RE.match(lines[i])
        if not m_dword:
            continue
        # Find the dword loop's close brace within ~7 lines.
        close = None
        for fwd in range(1, 8):
            if i + fwd >= n:
                break
            if lines[i + fwd].strip().startswith('}'):
                close = i + fwd
                break
        if close is None:
            continue
        # Skip blank lines, then the next statement should be the byte
        # countdown header over the same expression with `& 3`.
        next_idx = close + 1
        while next_idx < n and lines[next_idx].strip() == '':
            next_idx += 1
        if next_idx >= n:
            continue
        m_byte = _UNROLLED_MEMCPY_BYTE_FOR_RE.match(lines[next_idx])
        if not m_byte:
            continue
        # Confirm both for-loops use the same N expression.
        if m_dword.group(2).strip() != m_byte.group(2).strip():
            continue
        # Find the byte loop's close brace; needed for the body scan below.
        byte_close = None
        for fwd in range(1, 8):
            if next_idx + fwd >= n:
                break
            if lines[next_idx + fwd].strip().startswith('}'):
                byte_close = next_idx + fwd
                break
        if byte_close is None:
            continue
        # If either body uses the `(uint)bVar * -8 + 4` direction idiom,
        # the existing identify_unrolled_memcpy_loops detector already
        # flags both halves — skip to avoid duplicate diagnostics.
        bodies = lines[i + 1:close] + lines[next_idx + 1:byte_close]
        if any(_UNROLLED_MEMCPY_DIR_RE.search(b) for b in bodies):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_memcpy',
            'match': 'for (X = N >> 2; ...) { } for (Y = N & 3; ...)',
            'text': lines[i].strip()[:120],
            'description': (
                'Watcom loop-unrolled memcpy (REP MOVSD + trailing-byte tail: '
                'dword countdown over N >> 2 followed by byte countdown '
                'over N & 3). Replace both loops with memcpy(dst, src, N) '
                'in a .keep.'),
            'severity': 'moderate',
        })
    return suspects


def identify_unrolled_memcpy_loops(decompiled_code):
    """Detect Watcom's loop-unrolled memcpy artifacts.

    Canonical shape:
        for (iVar = N; iVar != 0; iVar = iVar + -1) {
            *(uint *)dst = *(uint *)src;
            src = src + ((uint)bVar * -2 + 1) * 4;
            dst = dst + (uint)bVar * -8 + 4;
        }

    These should be replaced with `memcpy(dst, src, N);` (or `memmove` if
    direction bool can be 1) in a .keep.

    Detection requires all three pieces (countdown for, typed store, and
    the `(uint)bool` direction idiom) to be confident the loop is a memcpy
    and not a generic "do N times" countdown.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected loop.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 2):
        if not _UNROLLED_MEMCPY_FOR_RE.match(lines[i]):
            continue
        # Walk up to 7 lines forward looking for the matching close brace
        # and one of two memcpy fingerprints:
        #
        # 1. The Watcom direction-bool idiom (`(uint)bool * -2 + 1`,
        #    `* -8 + 4`) — emitted when Ghidra can't recover type info, so
        #    the body uses byte-arithmetic walks. Unique fingerprint.
        # 2. Typed-pair: `*ptr = *src;` + `ptr = ptr + 1;` — emitted when
        #    Ghidra recovers types, so the body uses typed pointer math.
        #    Both signals together rule out generic countdown loops.
        has_direction = False
        has_typed_store = False
        has_typed_inc = False
        close_line = None
        for fwd in range(1, 8):
            if i + fwd >= n:
                break
            body = lines[i + fwd]
            if _UNROLLED_MEMCPY_DIR_RE.search(body):
                has_direction = True
            if _UNROLLED_MEMCPY_TYPED_STORE_RE.match(body):
                has_typed_store = True
            if _UNROLLED_MEMCPY_TYPED_INC_RE.match(body):
                has_typed_inc = True
            if body.strip().startswith('}'):
                close_line = i + fwd
                break
        confirmed = has_direction or (has_typed_store and has_typed_inc)
        if not (confirmed and close_line):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_memcpy',
            'match': 'for (...; != 0; ... + -1)',
            'text': lines[i].strip()[:120],
            'description': (
                'Watcom loop-unrolled memcpy (countdown for-loop with the '
                '`(uint)bool * -N + M` direction idiom — Watcom\'s REP '
                'MOVSD lowering fingerprint). Replace the whole loop with '
                'memcpy(dst, src, count * stride) or a struct assignment '
                'in a .keep.'),
            'severity': 'moderate',
        })
    return suspects


# Single-line indexed copy of the form `[*]IDENT[A] = [*]IDENT[B];` —
# captures (lhs_deref_ident, lhs_index_ident, lhs_index_N,
# rhs_deref_ident, rhs_index_ident, rhs_index_N). Either deref or index
# form is allowed on each side. Used by `identify_unrolled_memcpy_index_form`
# to walk runs of consecutive same-pointer indexed copies (Watcom's
# straight-line lowering of a struct copy, e.g. CVector3d → CVector3d via
# 6 dword writes).
_INDEX_COPY_LINE_RE = re.compile(
    r'^\s*'
    r'(?:\*\s*(\w+)|(\w+)\s*\[\s*(\d+|0x[0-9a-fA-F]+)\s*\])'
    r'\s*=\s*'
    r'(?:\*\s*(\w+)|(\w+)\s*\[\s*(\d+|0x[0-9a-fA-F]+)\s*\])'
    r'\s*;\s*$'
)
# Minimum run length (number of consecutive matching `ptr[N] = ptr[N+K];`
# lines) before flagging as an unrolled memcpy. 4+ avoids false positives
# on small swaps or scattered assignments; real Watcom struct copies
# unrolled this way are typically 6+ (e.g. a CVector3d's 3 doubles =
# 6 dwords, a CMatrix3x4f's 48 bytes = 12 dwords).
_INDEX_COPY_MIN_RUN = 4


def identify_unrolled_memcpy_index_form(decompiled_code):
    """Detect straight-line indexed-store struct copies (no loop).

    Catches Watcom's REP MOVSD lowering when the source-side decompile
    shows up as a run of `puVar[N] = puVar[N+K];` assignments rather than
    a countdown for-loop. Example from `CObj_restoreVertexPositions`:

        puVar1 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar3);
        *puVar1 = puVar1[6];
        puVar1[1] = puVar1[7];
        puVar1[2] = puVar1[8];
        puVar1[3] = puVar1[9];
        puVar1[4] = puVar1[10];
        puVar1[5] = puVar1[0xb];

    The 6-store run is a `CVector3d`-sized copy between two adjacent
    fields (`position` ← `orig_position`). `identify_unrolled_memcpy_loops`
    misses this because there's no loop; the existing detectors are all
    loop-anchored. This one is anchored on the constant-stride indexed-
    store run instead.

    Detection rule:
    - >= `_INDEX_COPY_MIN_RUN` consecutive lines match `_INDEX_COPY_LINE_RE`
      with the same identifier on both sides.
    - All lines share the same delta `rhs_N - lhs_N` (positive or negative).
    - LHS indices are consecutive (`0, 1, 2, ...` or `K, K+1, K+2, ...`).

    Replace the run with a struct assignment or `memcpy(dst, src, N)` in
    a .keep.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts (one per run, located at the first line).
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')

    def parse(line):
        m = _INDEX_COPY_LINE_RE.match(line)
        if not m:
            return None
        lhs_d, lhs_i, lhs_n, rhs_d, rhs_i, rhs_n = m.groups()
        lhs_ident = lhs_d or lhs_i
        rhs_ident = rhs_d or rhs_i
        if lhs_ident != rhs_ident:
            return None
        lhs_idx = 0 if lhs_d else int(lhs_n, 0)
        rhs_idx = 0 if rhs_d else int(rhs_n, 0)
        if lhs_idx == rhs_idx:
            return None  # self-store, not a copy
        return (lhs_ident, lhs_idx, rhs_idx)

    i = 0
    n = len(lines)
    while i < n:
        first = parse(lines[i])
        if first is None:
            i += 1
            continue
        ident, start_lhs, start_rhs = first
        delta = start_rhs - start_lhs
        run_end = i + 1
        prev_lhs = start_lhs
        while run_end < n:
            nxt = parse(lines[run_end])
            if nxt is None:
                break
            nxt_ident, nxt_lhs, nxt_rhs = nxt
            if (nxt_ident != ident
                    or (nxt_rhs - nxt_lhs) != delta
                    or nxt_lhs != prev_lhs + 1):
                break
            prev_lhs = nxt_lhs
            run_end += 1
        run_len = run_end - i
        if run_len >= _INDEX_COPY_MIN_RUN:
            suspects.append({
                'line': i + 1,
                'type': 'unrolled_memcpy',
                'match': 'run of %d × `%s[N] = %s[N+%d];`' % (
                    run_len, ident, ident,
                    delta) if delta > 0 else
                    'run of %d × `%s[N] = %s[N-%d];`' % (
                        run_len, ident, ident, -delta),
                'text': lines[i].strip()[:120],
                'description': (
                    'Watcom straight-line unrolled memcpy — a run of %d '
                    'consecutive `%s[N] = %s[N%+d];` assignments at constant '
                    'stride (no enclosing loop). The setup line just above '
                    'is typically a typed-pointer cast (`puVar = (T *)((int)'
                    '&NAME + offset)`); together they implement an inline '
                    'struct copy. Replace with a struct assignment (`dst = '
                    'src;`) or `memcpy(dst, src, N)` in a .keep.' % (
                        run_len, ident, ident, delta)),
                'severity': 'moderate',
            })
        i = run_end if run_len >= _INDEX_COPY_MIN_RUN else i + 1
    return suspects


# Variant of `_UNROLLED_MEMCPY_FOR_RE` that also captures the literal
# iteration count from the for-init. Only used by
# `identify_memcpy_oversized_source` — the regular unrolled-memcpy detector
# accepts non-literal init expressions, but here we need a concrete number to
# compare against the source array's declared size.
_COUNTDOWN_INIT_LITERAL_RE = re.compile(
    r"^\s*for\s*\(\s*(\w+)\s*=\s*(\d+|0x[0-9a-fA-F]+)\s*;\s*\1\s*!=\s*0(?:\.0+)?f?\s*;\s*"
    r"\1\s*=\s*[^;]*?\b\1\b\s*(?:\+\s*-?1|-\s*1)[^;]*?\)\s*\{?\s*$")
# `*DST = *SRC;` body line — captures the source pointer. Allows optional
# typed casts on either side (`*(uint *)dst = *(uint *)src;`).
_DEREF_STORE_SRC_RE = re.compile(
    r"^\s*\*\s*(?:\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*)?\w+\s*=\s*"
    r"\*\s*(?:\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*)?(\w+)\s*;\s*$")
# `ptr = NAME;` or `ptr = NAME + literal;` (with optional cast). Used to find
# which array a memcpy source pointer was initialized from.
_PTR_FROM_ARRAY_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(?:\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*)?(\w+)"
    r"(?:\s*\+\s*\d+)?\s*;\s*$")
# Local array declaration with a literal element count: `T NAME[N];` or
# `T *NAME[N];` (allows multi-word types like `unsigned int`). The size must
# be a decimal literal — non-literal sizes can't be compared against the
# loop's iteration count.
#
# The separator between type and name is `(?:\s+\**\s*|\s*\*+\s*)` so that
# either at least one space or at least one `*` distinguishes them. Without
# this, the greedy `\w+` for the type can backtrack and split a name like
# `local_30` into `local_3` (consumed as type) and `0` (captured as name).
# The captured name is anchored to start with a letter or underscore so it
# can never be a digit-prefix slice of the previous identifier.
_LOCAL_ARRAY_DECL_RE = re.compile(
    r"^\s*\w+(?:\s+\w+)*(?:\s+\**\s*|\s*\*+\s*)([A-Za-z_]\w*)"
    r"\s*\[\s*(\d+)\s*\]\s*;\s*$")


def identify_memcpy_oversized_source(decompiled_code):
    """Detect Watcom unrolled-memcpy loops that read more elements than the
    source local array's declared size.

    Two real bugs are common in this shape:
      1. Ghidra dropped some explicit `NAME[k] = expr;` stores before the
         copy loop, leaving uninit indices that get read into the dest.
      2. Watcom emitted a slightly off-by-one REP MOVSD count, copying one
         extra dword past the end of the scratch buffer.

    Either way, when the loop iteration count exceeds the source array's
    declared `[N]`, the cpp reads uninitialized memory. Under ASan this trips
    `stack-buffer-overflow` (or `use-of-uninitialized-value` for cases where
    the buffer happens to live in zeroed memory).

    Fingerprint:
      - Countdown for-loop with a literal init count `M`.
      - Body has a Watcom unrolled-memcpy signal (direction idiom OR
        typed `*ptr = *src; ptr = ptr + 1;` pair).
      - The source pointer was assigned from a local array `T NAME[N];`
        somewhere earlier in the function.
      - `M > N`.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per matching loop.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 2):
        m = _COUNTDOWN_INIT_LITERAL_RE.match(lines[i])
        if not m:
            continue
        count_str = m.group(2)
        iter_count = (int(count_str, 16) if count_str.startswith('0x')
                      else int(count_str))
        if iter_count <= 1:
            continue

        # Walk body for the unrolled-memcpy signature and capture the source
        # pointer name from the first `*dst = *src;` deref-store.
        src_ptr = None
        has_signal = False
        close_line = None
        for fwd in range(1, 8):
            if i + fwd >= n:
                break
            body = lines[i + fwd]
            if _UNROLLED_MEMCPY_DIR_RE.search(body):
                has_signal = True
            if (_UNROLLED_MEMCPY_TYPED_STORE_RE.match(body) and
                    i + fwd + 1 < n and
                    _UNROLLED_MEMCPY_TYPED_INC_RE.match(lines[i + fwd + 1])):
                has_signal = True
            sm = _DEREF_STORE_SRC_RE.match(body)
            if sm and src_ptr is None:
                src_ptr = sm.group(1)
            if body.strip().startswith('}'):
                close_line = i + fwd
                break
        if not (has_signal and src_ptr and close_line):
            continue

        # Walk back from the loop header to find `src_ptr = ARRAY_NAME[+N];`.
        src_array = None
        for back in range(1, 30):
            idx = i - back
            if idx < 0:
                break
            pm = _PTR_FROM_ARRAY_RE.match(lines[idx])
            if pm and pm.group(1) == src_ptr:
                src_array = pm.group(2)
                break
        if not src_array:
            continue

        # Walk back further to find `T ARRAY_NAME[N];`. Declarations cluster
        # at the function top; a 200-line lookback covers any realistic body.
        decl_size = None
        for back2 in range(1, 200):
            idx = i - back2
            if idx < 0:
                break
            dm = _LOCAL_ARRAY_DECL_RE.match(lines[idx])
            if dm and dm.group(1) == src_array:
                decl_size = int(dm.group(2))
                break
        if decl_size is None or iter_count <= decl_size:
            continue

        suspects.append({
            'line': i + 1,
            'type': 'memcpy_oversized_source',
            'match': lines[i].strip()[:80],
            'text': lines[i].strip()[:120],
            'description': (
                'Unrolled-memcpy loop reads {n} elements from local array '
                '`{name}[{size}]` (declared size {size}) — overruns by {ov}. '
                'Likely Ghidra dropped explicit `{name}[k] = ...` stores '
                'before the copy, OR the asm has an off-by-one REP MOVSD '
                'count. Fix in a .keep by restoring all stores and using a '
                'properly-sized memcpy or struct assignment.'.format(
                    n=iter_count, name=src_array, size=decl_size,
                    ov=iter_count - decl_size)),
            'severity': 'moderate',
        })
    return suspects


# Co-occurrence of `WARNING: Removing unreachable block` + a
# `do { ... } while (true);` in the same function. Each in isolation is mild,
# but together they're a strong fingerprint for Ghidra dropping a loop
# counter:
#   - The asm has `INC counter; CMP counter, BOUND; JL loop` at the bottom of
#     the loop, plus uses the counter as a multiplier inside the body.
#   - Ghidra folds the counter as constant 0 (often because of an early
#     `XOR counter_reg, counter_reg`), drops the bounds check, emits the body
#     under `while (true)`, then prunes the post-loop tail as unreachable.
#
# Both symptoms appear in the .cpp output simultaneously. Functions hit by
# this pattern are runtime-broken — they either infinite-loop on first call,
# or skip post-loop cleanup that callers depend on. Always worth a .keep that
# restores the counter (init / multiplier / bounds check) and the post-loop
# tail (visible in the asm past the JL backedge).
_INFINITE_DOWHILE_RE = re.compile(r"^\s*\}\s*while\s*\(\s*true\s*\)\s*;\s*$")
_REMOVING_UNREACHABLE_RE = re.compile(r"WARNING:\s*Removing unreachable block")


def identify_dropped_loop_counter(decompiled_code):
    """Detect Ghidra-dropped loop counter via warning + while(true) co-occurrence.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts. At most one per function, anchored to the
        `while (true)` line so the fix site is obvious.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    if not _REMOVING_UNREACHABLE_RE.search(decompiled_code):
        return suspects
    lines = decompiled_code.split('\n')
    for i, line in enumerate(lines):
        if _INFINITE_DOWHILE_RE.match(line):
            suspects.append({
                'line': i + 1,
                'type': 'dropped_loop_counter',
                'match': line.strip()[:80],
                'text': line.strip()[:120],
                'description': (
                    '`do { ... } while (true);` co-occurs with a `WARNING: '
                    'Removing unreachable block` in this function — strong '
                    'fingerprint for Ghidra dropping a loop counter (asm has '
                    '`INC counter; CMP counter, BOUND; JL loop` at the loop '
                    'bottom plus a counter-as-multiplier in the body that '
                    'Ghidra folded as constant 0). Function infinite-loops or '
                    'skips post-loop tail at runtime. Restore the counter and '
                    'the unreachable-pruned post-loop block in a .keep.'),
                'severity': 'moderate',
            })
            break  # at most one suspect per function
    return suspects


# Field-by-field struct copy: a run of consecutive `dst.field = src.field;`
# lines covering many struct fields. Watcom emits this when copying a struct
# whose field count exceeds the threshold for a REP MOVSD lowering, or for
# small structs the optimizer chose to inline. Either way the same struct
# copy is hiding behind N typed assignments — replaceable with a single
# `dst = src;` (or `memcpy`).
#
# The regex captures lines of the form `<lhs>.<field> = <rhs>.<field>;`
# (or with `->` instead of `.`) where the trailing field name on both sides
# matches via backreference. Lazy `.+?` lets the leading prefix span any
# expression (parenthesized derefs, multi-level paths, indexed accesses).
# Trivial pointer-alias declarations recognized by `_resolve_pointer_aliases`.
# Two shapes:
#   `IDENT = BASE + N;`       (integer-offset arithmetic — `IDENT->f`
#                              becomes `BASE[N].f` for field-copy matching)
#   `IDENT = &EXPR;`          (address-of an access path — `IDENT->f`
#                              becomes `EXPR.f`)
# Both forms produce the same substitution rule: `IDENT->field` is rewritten
# to `<replacement>.field`, with no other use of `IDENT` touched. Negative
# offsets and hex offsets in the `+ N` form are deliberately out of scope —
# the Ghidra-emitted shape is integer `+ N`.
_POINTER_ALIAS_ADD_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\+\s*(\d+)\s*;\s*$")
_POINTER_ALIAS_ADDR_RE = re.compile(
    r"^\s*(\w+)\s*=\s*&\s*(\S.*?)\s*;\s*$")
# Any assignment to a bare identifier — used to invalidate a tracked alias
# when the alias name is reassigned to anything not matching the patterns
# above.
_ANY_ASSIGN_LHS_RE = re.compile(r"^\s*(\w+)\s*=")
# Pure scalar rename: `IDENT = IDENT2;` with no arithmetic. Watcom spills a
# loop count/index into a second local at the top of a loop body, then
# writes one struct field through the original count and the rest through
# the spilled copy. Used by `_resolve_scalar_index_aliases` to normalize
# array subscripts so the field-copy detector groups the run. The RHS must
# be a non-numeric identifier — `count = 0;` is a literal init, not a
# rename, and must NOT create a `count -> 0` alias.
_SCALAR_ALIAS_RENAME_RE = re.compile(r"^\s*(\w+)\s*=\s*([A-Za-z_]\w*)\s*;\s*$")

_FIELD_COPY_RE = re.compile(
    r"^\s*(.+?)(?:\.|->)(\w+)\s*=\s*(.+?)(?:\.|->)\2\s*;\s*$")
# Same shape as _FIELD_COPY_RE but with separate field-name captures on each
# side (no backreference). Used by the suppression check below to detect a
# `lhs.X = rhs.Y;` cross-type rename line adjacent to a same-name run, which
# proves the two roots are different types and therefore can't be collapsed
# to `dst = src;` / `memcpy`.
_FIELD_RENAME_COPY_RE = re.compile(
    r"^\s*(.+?)(?:\.|->)(\w+)\s*=\s*(.+?)(?:\.|->)(\w+)\s*;\s*$")
# Identifier at the very start of an expression, ignoring leading parens
# and dereference operators. Used to confirm the LHS and RHS of a field-copy
# run share a common root variable (e.g. both rooted at `pSVar5`), so we
# don't flag copies between unrelated structs that happen to share field
# names.
_ROOT_IDENT_RE = re.compile(r"\s*[\(\*]*\s*(\w+)")


def _is_pure_path_expr(expr):
    """Return True if expr is a pure access path (no arithmetic).

    A pure access path is built from identifiers, member access (`.`/`->`),
    and balanced parens/brackets. Arithmetic operators like `+`, `-`, `*`,
    `/` outside brackets/parens disqualify it. (Inside brackets is fine —
    `arr[i + 1]` is still a pure path access.)

    Also disqualifies a leading C-style typecast like `(double)src.x`. Even
    though the access path inside is pure, the cast is a type conversion —
    so a run of `(double)src.x = ...; (double)src.y = ...; (double)src.z = ...;`
    is NOT a collapsible struct copy. Two structs with different element
    types can't be `dst = src`'d; they need element-by-element conversion.

    Used to filter out false-positive `field_copy` matches where the RHS
    is actually a vector arithmetic expression (e.g. `dst.x = a.x - b.x`)
    that the regex would otherwise match because it ends in `.x;`.
    """
    # Leading C-style typecast: `(TYPE)expr` or `(TYPE *)expr` — disqualify.
    # Conservatively matches `(<simple-type>)` and `(<simple-type> *)`. We
    # don't try to parse arbitrary struct/union/const-qualifier casts; the
    # common cases (primitive type, pointer-to-type) are enough to suppress
    # the field-copy false-positive run.
    if re.match(
        r"^\s*\("
        r"\s*(?:const\s+|unsigned\s+|signed\s+)*"
        r"\w+"
        r"(?:\s*\*+)?"
        r"\s*\)\s*\S",
        expr,
    ):
        return False
    s = expr
    # Iteratively collapse balanced parens and brackets to single tokens.
    while True:
        new_s = re.sub(r'\([^()]*\)', '_', s)
        new_s = re.sub(r'\[[^\[\]]*\]', '_', new_s)
        if new_s == s:
            break
        s = new_s
    # Treat `->` as part of the path; what remains must be just identifiers,
    # dots, and whitespace.
    s = s.replace('->', '.')
    return re.fullmatch(r'\s*[\w\.\s]*\s*', s) is not None


def _resolve_pointer_aliases(decompiled_code):
    """Replace `IDENT->field` with the alias's access path for two trivial
    Ghidra-emitted alias forms.

    Form A (integer offset):

        euler_angles_01 = pCVar20 + 1;
        ...
        euler_angles_01->x = pCVar19->x;     // becomes pCVar20[1].x = pCVar19->x;
        pCVar20[1].y = pCVar19->y;
        pCVar20[1].z = pCVar19->z;

    Form B (address-of access path):

        pCVar6 = &(this_ptr->physics_box).linear_velocity;
        ...
        pCVar6->x = (this_ptr->initial_velocity).x;
            // becomes (this_ptr->physics_box).linear_velocity.x = (this_ptr->initial_velocity).x;
        (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
        (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;

    Without this rewrite, the first line in each example uses an alias
    name and subsequent lines use the bare access form, so the LHS root
    differs and `identify_unrolled_field_copy` splits the run apart.

    Tracking is line-precise: once `IDENT` is reassigned to anything not
    matching one of the alias patterns above, the alias is dropped. Only
    `IDENT->field` is substituted — bare uses like `if (IDENT != ...)`
    are left intact, so reassignment and pointer compares still work as
    written.

    The output has the same line count as the input — only token text
    inside each line may change — so suspect line numbers remain
    meaningful.
    """
    if not decompiled_code:
        return decompiled_code
    lines = decompiled_code.split('\n')
    # name -> replacement string (no trailing `.`). For form A this is
    # `BASE[N]`; for form B it's the captured EXPR text.
    aliases = {}
    out = []
    for raw in lines:
        # Apply current aliases to the line *before* updating tracking.
        # `IDENT->` → `<replacement>.` for each tracked alias.
        rewritten = raw
        if aliases:
            def sub_arrow(m):
                name = m.group(1)
                replacement = aliases.get(name)
                if replacement is None:
                    return m.group(0)
                return replacement + '.'
            rewritten = re.sub(r'\b(\w+)->', sub_arrow, rewritten)
        out.append(rewritten)

        # Update tracking from the original line, not the rewritten one —
        # tracking decisions are about source identity, not the rendered
        # access form.
        m_add = _POINTER_ALIAS_ADD_RE.match(raw)
        if m_add:
            aliases[m_add.group(1)] = '%s[%s]' % (m_add.group(2), m_add.group(3))
            continue
        m_addr = _POINTER_ALIAS_ADDR_RE.match(raw)
        if m_addr:
            aliases[m_addr.group(1)] = m_addr.group(2)
            continue
        any_m = _ANY_ASSIGN_LHS_RE.match(raw)
        if any_m and any_m.group(1) in aliases:
            del aliases[any_m.group(1)]
    return '\n'.join(out)


def _resolve_scalar_index_aliases(decompiled_code):
    """Normalize array subscripts that use a pure-rename scalar alias.

    Watcom commonly spills a loop count/index into a second local at the top
    of a loop body, then writes one struct field through the original count
    and the rest through the spilled copy:

        iVar2 = g_ClipBuffer1VertexCount;
        ...
        g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = pCVar7->x;
        g_ClipBuffer1Vertices[iVar2].y = pCVar7->y;   // [iVar2] -> [g_ClipBuffer1VertexCount]
        g_ClipBuffer1Vertices[iVar2].z = pCVar7->z;

    Both subscripts denote the same element (iVar2 == count here), but the
    differing index text makes `identify_unrolled_field_copy` treat the run
    as coordinate routing (one source filling two distinct slots) and split
    it. Rewriting `[iVar2]` to `[g_ClipBuffer1VertexCount]` lets the run group
    as a single struct copy.

    Only the pure-rename form `IDENT = IDENT2;` is tracked (no arithmetic).
    The alias is dropped as soon as either side is reassigned, so a later
    `count = count + 1;` correctly stops further substitution. Substitution
    is confined to bracketed subscripts (`[IDENT]`) so non-index uses are
    untouched. Output has the same line count as the input.
    """
    if not decompiled_code:
        return decompiled_code
    lines = decompiled_code.split('\n')
    aliases = {}  # ident -> replacement ident
    out = []
    for raw in lines:
        rewritten = raw
        if aliases:
            def sub_idx(m):
                repl = aliases.get(m.group(1))
                return '[' + repl + ']' if repl is not None else m.group(0)
            rewritten = re.sub(r'\[(\w+)\]', sub_idx, rewritten)
        out.append(rewritten)

        # Update tracking from the ORIGINAL line.
        m_rename = _SCALAR_ALIAS_RENAME_RE.match(raw)
        if m_rename:
            lhs, rhs = m_rename.group(1), m_rename.group(2)
            # Any alias whose value was lhs is now stale (lhs is overwritten).
            for k in [k for k, v in aliases.items() if v == lhs]:
                del aliases[k]
            if lhs != rhs:
                aliases[lhs] = rhs
            else:
                aliases.pop(lhs, None)
            continue
        any_m = _ANY_ASSIGN_LHS_RE.match(raw)
        if any_m:
            tgt = any_m.group(1)
            # Drop aliases keyed on tgt or whose value references tgt.
            for k in [k for k, v in aliases.items() if k == tgt or v == tgt]:
                del aliases[k]
    return '\n'.join(out)


def identify_unrolled_field_copy(decompiled_code, struct_layout_map=None):
    """Detect Watcom-emitted field-by-field struct copies.

    Canonical shapes:
        Flat copy (3+ consecutive lines, same prefix):
            dst.field_a = src.field_a;
            dst.field_b = src.field_b;
            dst.field_c = src.field_c;

        Nested copy (3+ consecutive lines, prefix varies under same root):
            dst.m[0].x = src.m[0].x;
            dst.m[0].y = src.m[0].y;
            dst.m[1].x = src.m[1].x;
            ...

    Each line copies one struct field by name; the same trailing field
    name appears on both sides via backreference. Replace the whole run
    with a single `dst = src;` (or `memcpy(&dst, &src, sizeof(...));`)
    in a .keep.

    The existing `unrolled_memcpy` detectors only catch for-loop / REP
    MOVSD shapes; this one covers the orthogonal case where Ghidra emits
    a flat list of typed field assignments instead of a loop.

    Detection requires:
    - At least MIN_RUN consecutive lines matching `_FIELD_COPY_RE`.
    - All lines in the run share the same LHS root identifier and the
      same RHS root identifier (extracted via `_ROOT_IDENT_RE`). The
      prefix path beyond the root may vary (e.g. `m[0]` -> `m[1]`) so
      multi-row matrix copies form a single run instead of three runs of
      three lines each.
    - Each (prefix, field) pair in the run is distinct (a repeat of the
      same assignment is a different bug, not a struct copy).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected run, located at the first
        line of the run.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    # Match against alias-resolved lines so a mixed-form run (alias on
    # one line, array-index on the next) groups as one run. Reporting
    # still uses the original line text so the user sees the source as
    # written.
    original_lines = decompiled_code.split('\n')
    lines = _resolve_scalar_index_aliases(
        _resolve_pointer_aliases(decompiled_code)).split('\n')
    n = len(lines)
    # Identifier -> declared struct type, for the type-aware suppression at
    # the end (only consulted when a struct layout map is available).
    var_types = _sfo_resolve_var_types(decompiled_code) if struct_layout_map else {}
    # 3 catches `x/y/z` vector copies; the same-root grouping below keeps
    # false positives from unrelated 3-line runs in check.
    MIN_RUN = 3

    def normalize(expr):
        """Collapse whitespace and strip redundant outer parens around a
        pure access path, so cosmetic wrappings don't split a run.

        The Form-B alias resolver substitutes `IDENT->field` with
        `<expr>.field` while preserving the original line's parens,
        producing forms like `((expr).orient.vec).x` that fail to match
        bare-form peers `(expr).orient.vec.y` on subsequent lines. The
        outer-paren strip canonicalizes both to `(expr).orient.vec`.
        """
        s = re.sub(r'\s+', '', expr)
        while len(s) >= 2 and s[0] == '(' and s[-1] == ')':
            # Only strip if the leading `(` is balanced by the trailing
            # `)` — guard against expressions like `(a)+(b)` where the
            # depth hits 0 mid-string and the outermost parens don't
            # wrap the whole thing.
            depth = 0
            wraps_whole = True
            for i, ch in enumerate(s):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                    if depth == 0 and i != len(s) - 1:
                        wraps_whole = False
                        break
            if not wraps_whole:
                break
            inner = s[1:-1]
            # Don't strip if the inner has top-level arithmetic — that
            # would change semantics.
            if not _is_pure_path_expr(inner):
                break
            s = inner
        return s

    def get_root(expr):
        """Return the leading identifier of an expression, or '' if none."""
        rm = _ROOT_IDENT_RE.match(expr)
        return rm.group(1) if rm else ''

    def line_matches_pure(idx):
        """Match line and require both sides to be pure access paths.
        Returns the regex match if it qualifies, else None."""
        rm = _FIELD_COPY_RE.match(lines[idx])
        if not rm:
            return None
        if not _is_pure_path_expr(rm.group(1)) or not _is_pure_path_expr(rm.group(3)):
            return None
        return rm

    def is_rename_copy_at_same_prefix(idx, expected_lhs_prefix, expected_rhs_prefix):
        """True if line idx is `<lhs>.X = <rhs>.Y;` with X != Y AND both path
        prefixes (before the trailing field name) exactly match the given
        prefixes. The prefix match guards against false suppression when the
        rename line is at a different nesting level than the run (e.g. a
        sibling struct copy unrelated to a matrix copy a few lines above).
        Common true case: a runtime struct initialized from a smaller source
        struct, with a renamed field at the same nesting level — proves the
        two roots are different types, so the run isn't a collapsible
        memcpy / `dst = src;` candidate."""
        if idx < 0 or idx >= n:
            return False
        rm = _FIELD_RENAME_COPY_RE.match(lines[idx])
        if not rm:
            return False
        if rm.group(2) == rm.group(4):
            return False
        if not _is_pure_path_expr(rm.group(1)) or not _is_pure_path_expr(rm.group(3)):
            return False
        return (normalize(rm.group(1)) == expected_lhs_prefix and
                normalize(rm.group(3)) == expected_rhs_prefix)

    i = 0
    while i < n:
        m = line_matches_pure(i)
        if not m:
            i += 1
            continue
        lhs_root = get_root(m.group(1))
        rhs_root = get_root(m.group(3))
        if not lhs_root or not rhs_root:
            i += 1
            continue
        seen_lhs_pairs = {(normalize(m.group(1)), m.group(2))}
        seen_rhs_pairs = {(normalize(m.group(3)), m.group(2))}
        # For a real struct copy, each LHS prefix corresponds to exactly one
        # RHS prefix (and vice-versa) — `dst.m[0]` always pairs with `src.m[0]`,
        # `dst.m[1]` with `src.m[1]`, etc. If two lines share an LHS prefix
        # but have different RHS prefixes, the destination at that prefix is
        # being filled from two unrelated sources — that's coordinate routing
        # (e.g. UV corner rotation), not a struct copy.
        prefix_map_lhs_to_rhs = {normalize(m.group(1)): normalize(m.group(3))}
        prefix_map_rhs_to_lhs = {normalize(m.group(3)): normalize(m.group(1))}
        j = i + 1
        while j < n:
            mj = line_matches_pure(j)
            if not mj:
                break
            if (get_root(mj.group(1)) != lhs_root or
                    get_root(mj.group(3)) != rhs_root):
                break
            lhs_prefix = normalize(mj.group(1))
            rhs_prefix = normalize(mj.group(3))
            existing_rhs = prefix_map_lhs_to_rhs.get(lhs_prefix)
            existing_lhs = prefix_map_rhs_to_lhs.get(rhs_prefix)
            if (existing_rhs is not None and existing_rhs != rhs_prefix) or \
               (existing_lhs is not None and existing_lhs != lhs_prefix):
                break
            lhs_pair = (lhs_prefix, mj.group(2))
            rhs_pair = (rhs_prefix, mj.group(2))
            if lhs_pair in seen_lhs_pairs or rhs_pair in seen_rhs_pairs:
                # Repeat on either side breaks the run. A repeat LHS pair
                # means the same slot is written twice; a repeat RHS pair
                # is a fanout (same source written into multiple slots),
                # which isn't a struct copy and shouldn't collapse.
                break
            seen_lhs_pairs.add(lhs_pair)
            seen_rhs_pairs.add(rhs_pair)
            prefix_map_lhs_to_rhs.setdefault(lhs_prefix, rhs_prefix)
            prefix_map_rhs_to_lhs.setdefault(rhs_prefix, lhs_prefix)
            j += 1
        run_len = j - i
        if run_len >= MIN_RUN:
            # Suppress if an immediately adjacent line is a rename copy AT
            # THE SAME PATH PREFIX as the first line of the run (e.g.
            # `g_HuffmanTables[i].linbits = g_HuffmanTableSources[i].bits;`
            # right after `g_HuffmanTables[i].xlen = g_HuffmanTableSources[i].xlen;`).
            # Same prefix + different field name proves the two roots are
            # different struct types at this nesting level, so the run
            # isn't a collapsible memcpy / `dst = src;` candidate. The
            # prefix check (not just same roots) avoids suppressing a
            # legitimate inner-struct copy followed by an unrelated rename
            # at a different nesting level.
            first_lhs_prefix = normalize(m.group(1))
            first_rhs_prefix = normalize(m.group(3))
            if (is_rename_copy_at_same_prefix(j, first_lhs_prefix, first_rhs_prefix) or
                    is_rename_copy_at_same_prefix(i - 1, first_lhs_prefix, first_rhs_prefix)):
                i = j
                continue
            # Suppress if any LHS prefix in the run also appears as an RHS
            # prefix (or vice versa). In a real struct copy `dst = src;` the
            # destination and source are distinct objects/paths, so their
            # prefix sets are disjoint. Overlap means a slot is being both
            # read from and written to within the same run — that's a
            # cross-index shuffle (e.g. `v[0].t = v[1].t; v[1].u = v[2].u;`),
            # not a collapsible struct copy.
            if set(prefix_map_lhs_to_rhs.keys()) & set(prefix_map_rhs_to_lhs.keys()):
                i = j
                continue
            # Suppress if the run is already inside a for-loop body whose
            # index variable appears as an array subscript in the LHS path
            # (e.g. `vertex_buffer_ptr[i].r = color.r;` ... `.b = .b;` inside
            # `for (int i = 0; i < 4; i = i + 1)`). The user has already
            # factored the unrolled copies; flagging the 3-line body would
            # suggest re-unrolling.
            lhs_subscripts = set(re.findall(r'\[(\w+)\]', first_lhs_prefix))
            if lhs_subscripts:
                for k in range(max(0, i - 5), i):
                    for_m = re.match(r'\s*for\s*\(\s*(?:int|\w+)\s+(\w+)\s*=',
                                     lines[k])
                    if for_m and for_m.group(1) in lhs_subscripts:
                        lhs_subscripts = None
                        break
            if lhs_subscripts is None:
                i = j
                continue
            # Type-aware suppression (flat runs only). A field-copy run can only
            # collapse to `dst = src;` when both copied objects are the SAME
            # struct type. Suppress cross-struct copies — field names coincide
            # but the types differ (e.g. SEpdDirEntry -> CPodDirectoryEntry,
            # CVector4f -> CVector3i), so `dst = src;` would be a type error and
            # the run is a deliberate field-subset extraction, not a memcpy.
            # Only fires when BOTH sides' types resolve and genuinely differ, so
            # unknown-type runs keep flagging. We do NOT suppress same-type
            # partial copies: a full struct copy is often split across several
            # runs (e.g. copyPanel), and a per-run "partial" view would wrongly
            # drop those true positives. "Flat" = one LHS object path across the
            # run; nested/matrix runs (multiple prefixes) keep the old logic.
            if struct_layout_map and len(prefix_map_lhs_to_rhs) == 1:
                lhs_t = resolve_access_path_type(
                    first_lhs_prefix, var_types, struct_layout_map)
                rhs_t = resolve_access_path_type(
                    first_rhs_prefix, var_types, struct_layout_map)
                if lhs_t and rhs_t and lhs_t != rhs_t:
                    i = j
                    continue
            suspects.append({
                'line': i + 1,
                'type': 'unrolled_memcpy',
                'match': 'field-by-field struct copy',
                'text': original_lines[i].strip()[:120],
                'description': (
                    'Watcom field-by-field struct copy (%d consecutive '
                    '`dst.field = src.field;` lines). Replace with '
                    '`dst = src;` or `memcpy(&dst, &src, sizeof(...));` '
                    'in a .keep.' % run_len),
                'severity': 'moderate',
            })
            i = j
        else:
            i += 1
    return suspects


# Raw-offset unrolled struct copy. Where `identify_unrolled_field_copy`
# catches named-field copies (`dst.field = src.field`), Ghidra sometimes
# loses the struct type entirely and emits a run of pointer-cast writes
# through hard-coded byte offsets off one or two base pointers:
#     *(uint *)(p + 0x224) = *(uint *)(p + 0x234);
#     *(uint *)(p + 0x228) = *(uint *)(p + 0x238);
#     *(uint *)(p + 0x22c) = *(uint *)(p + 0x23c);
# Each line copies one machine word; together they shift/copy a fixed-size
# contiguous block. Same shape whether the two bases differ (a struct-to-
# struct copy, delta == 0) or are identical (an in-place array-element shift
# during a delete, delta == element stride — the CDemonSet::deleteCamera
# per-light loop). Collapse the run to a single struct assignment or
# `memcpy(...)` in a .keep (find/create the matching struct type).
_OFFSET_COPY_RE = re.compile(
    r'^\s*\*\s*\(\s*(\w+)\s*\*\s*\)\s*'                  # *(TYPE *)
    r'\(\s*(\w+)\s*\+\s*(0[xX][0-9a-fA-F]+|\d+)\s*\)'    # (BASE + OFF)
    r'\s*=\s*'
    r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*'                      # = *(TYPE *)
    r'\(\s*(\w+)\s*\+\s*(0[xX][0-9a-fA-F]+|\d+)\s*\)'    # (BASE2 + OFF2)
    r'\s*;\s*$')
# Cast type -> byte width. Used to require the copied words be contiguous
# (stride == width) so a run of unrelated scattered pointer writes that
# happen to share a base isn't mistaken for a block copy.
_OFFSET_COPY_WIDTH = {
    'char': 1, 'uchar': 1, 'byte': 1, 'undefined1': 1, 'bool': 1,
    'short': 2, 'ushort': 2, 'undefined2': 2, 'wchar_t': 2,
    'int': 4, 'uint': 4, 'undefined4': 4, 'float': 4,
    'long': 4, 'ulong': 4, 'dword': 4,
    'longlong': 8, 'ulonglong': 8, 'double': 8, 'undefined8': 8, 'qword': 8,
}


def identify_unrolled_offset_copy(decompiled_code):
    """Detect Watcom raw-offset unrolled struct copies / array shifts.

    Catches runs of 3+ consecutive `*(T *)(BASE + OFF) = *(T *)(BASE2 + OFF2);`
    lines that together copy one contiguous block (see `_OFFSET_COPY_RE`).
    The companion `identify_unrolled_field_copy` only handles the case where
    Ghidra recovered named struct fields; this covers the case where it fell
    back to typed pointer-offset writes (e.g. CDemonSet::deleteCamera shifting
    the per-light camera arrays after a delete).

    For lines to form one run:
    - Same cast type on both sides of every line, and across the whole run.
    - Constant LHS base across the run; constant RHS base across the run.
    - Constant (OFF2 - OFF) delta across the run — every dest word maps to a
      source word a fixed distance away (a parallel block copy).
    - LHS offsets strictly increasing by exactly the type width (contiguous
      destination block).
    - When the two bases are identical, delta != 0 (`*p = *p` is a no-op run,
      not a copy). delta may be 0 when the bases differ (struct-to-struct).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts (type `unrolled_memcpy`), one per run, located
        at the first line of the run.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    MIN_RUN = 3

    def parse(idx):
        m = _OFFSET_COPY_RE.match(lines[idx])
        if not m:
            return None
        ltype, lbase, loff, rtype, rbase, roff = m.groups()
        if ltype != rtype:
            return None
        width = _OFFSET_COPY_WIDTH.get(ltype)
        if width is None:
            return None
        return {
            'type': ltype, 'width': width,
            'lbase': lbase, 'loff': int(loff, 0),
            'rbase': rbase, 'roff': int(roff, 0),
        }

    i = 0
    while i < n:
        first = parse(i)
        if not first:
            i += 1
            continue
        delta = first['roff'] - first['loff']
        # A same-base, zero-delta "copy" is `*p = *p` — not real.
        if first['lbase'] == first['rbase'] and delta == 0:
            i += 1
            continue
        width = first['width']
        prev = first
        j = i + 1
        while j < n:
            cur = parse(j)
            if not cur:
                break
            if (cur['type'] != first['type'] or
                    cur['lbase'] != first['lbase'] or
                    cur['rbase'] != first['rbase']):
                break
            # Contiguous destination block, constant source delta.
            if cur['loff'] != prev['loff'] + width:
                break
            if cur['roff'] - cur['loff'] != delta:
                break
            prev = cur
            j += 1
        run_len = j - i
        if run_len >= MIN_RUN:
            suspects.append({
                'line': i + 1,
                'type': 'unrolled_memcpy',
                'match': 'raw-offset struct copy',
                'text': lines[i].strip()[:120],
                'description': (
                    'Watcom raw-offset struct copy (%d consecutive '
                    '`*(T *)(base + 0xNN) = *(T *)(base + 0xNN);` lines '
                    'copying a contiguous block). Ghidra lost the struct '
                    'type; replace the run with a struct assignment or '
                    '`memcpy(...)` in a .keep (find/create the matching '
                    'struct type for the block).' % run_len),
                'severity': 'moderate',
            })
            i = j
        else:
            i += 1
    return suspects


# Cascade constant fill: a Watcom optimization that sets multiple sibling
# fields of one struct/array to the same constant by storing the constant
# once and forwarding it through prior slots:
#     X.field_C = 0.0;
#     X.field_B = X.field_C;
#     X.field_A = X.field_B;
# Each store after the first reuses the previously-stored slot rather than
# reloading the constant. Saves N-1 FLDZ/MOV-immediate operations on the
# original target. The C-level rendering looks like a meaningless chain
# but is semantically equivalent to N direct stores of the constant.
#
# Detection requires 3+ consecutive statements where:
# - First line: `<PATH>.<F0> = <CONST>;` (numeric zero, NULL, or a typed null cast)
# - Subsequent lines: `<PATH>.<Fi> = <PATH>.<F(i-1)>;` (chain through prior store)
#   OR `<ALIAS>-><Fi> = <PATH>.<F(i-1)>;` where `<ALIAS> = &<PATH>;` was
#   established earlier in the function. The decompiler picks alias forms
#   when Watcom emitted a register-resident pointer for the same struct.
# - All Fi distinct, all sharing the same effective `<PATH>` prefix.
#
# Temp-float bounce variant: after the anchor, the decompiler may save the
# just-stored field into a scalar temp before forwarding it:
#     X.f0 = 0.0;
#     tmp = X.f0;            ; save line — armed
#     X.f1 = tmp;            ; chain step via temp
#     ALIAS->f2 = tmp;       ; chain step via temp + alias
# Once the temp is armed (must save the anchor field via the anchor path),
# subsequent `<lhs>.<field> = <tmp>;` lines count as chain steps.
#
# Multi-line statements (where the assignment wraps across lines) are
# handled via `_join_wrapped_statements`. The keep replacement is N direct
# stores or a struct/array initializer.
_CASCADE_CONST_RE = re.compile(
    r'^\s*(.+?)(?:\.|->)(\w+)\s*=\s*'
    r'(0\.0f?|0\.0+f?|0|0x0+|NULL|nullptr|'
    r'\(\s*[A-Za-z_][\w\s\*]*\s*\)\s*0x0*|'
    r'\(\s*[A-Za-z_][\w\s\*]*\s*\)\s*0)\s*;\s*$')
_CASCADE_CHAIN_RE = re.compile(
    r'^\s*(.+?)(?:\.|->)(\w+)\s*=\s*(.+?)(?:\.|->)(\w+)\s*;\s*$')
# Bare `<var> = &<path>;` alias declaration. LHS must be a simple
# identifier; RHS is anything-after-`&` up to the trailing `;`.
_CASCADE_ALIAS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*&\s*(.+?)\s*;\s*$')
# Temp-float save: `<tmp> = <path>.<field>;` — LHS is a bare identifier,
# RHS is a struct/pointer access. Caller filters by path/field equality.
_CASCADE_TEMP_SAVE_RE = re.compile(
    r'^\s*(\w+)\s*=\s*(.+?)(?:\.|->)(\w+)\s*;\s*$')
# Temp-float use: `<lhs>.<field> = <tmp>;` — RHS is a bare identifier.
# Caller verifies `<tmp>` matches the armed bounce var.
_CASCADE_TEMP_USE_RE = re.compile(
    r'^\s*(.+?)(?:\.|->)(\w+)\s*=\s*(\w+)\s*;\s*$')
# Leading tokens that disqualify a statement from being skipped as a benign
# interleaved bookkeeping line inside a cascade run (control flow / calls).
_CASCADE_INTERLEAVE_STOP = frozenset((
    'if', 'else', 'for', 'while', 'do', 'switch', 'case', 'return',
    'goto', 'break', 'continue'))


def _join_wrapped_statements(lines):
    """Yield (start_line_idx, joined_text) pairs, one per complete C statement.

    Joins continuation lines that don't end in `;` (or aren't a solo brace)
    with the next line so that wrapped assignments parse as one statement.
    A trailing `{` (block opener like `if (...) {`) also terminates the
    accumulated statement so a following declaration on the next line
    parses standalone — without this, an `if`-line and the next `var = &x;`
    glue together and the alias declaration is missed.
    """
    cur_start = None
    cur = ''
    for i, line in enumerate(lines):
        stripped = line.rstrip('\n')
        if cur_start is None:
            cur_start = i
            cur = stripped
        else:
            cur = cur.rstrip() + ' ' + stripped.lstrip()
        rs = cur.strip()
        if (rs.endswith(';') or rs.endswith('{')
                or rs in ('{', '}', '},')):
            yield (cur_start, cur)
            cur_start = None
            cur = ''
    if cur_start is not None:
        yield (cur_start, cur)


def identify_cascade_constant_fill(decompiled_code):
    """Detect Watcom cascade-constant-fill chains.

    Canonical shape (3+ consecutive statements):
        X.fC = 0.0;
        X.fB = X.fC;
        X.fA = X.fB;

    Each subsequent line forwards the previously-stored constant through
    sibling fields of the same struct. The cumulative effect is `X.fA =
    X.fB = X.fC = const`, but Watcom emits the chain to avoid reloading
    the constant N times. Most commonly fires on `CVector3f` / `CColor3i`
    / `CColor3f` zero-fills.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected cascade run, located at
        the first line of the chain.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    raw_lines = decompiled_code.split('\n')
    stmts = list(_join_wrapped_statements(raw_lines))
    n = len(stmts)

    def normalize(s):
        return re.sub(r'\s+', '', s)

    # Pre-pass: collect alias declarations of the form `<var> = &<path>;`.
    # A later assignment to the same var invalidates the prior alias, so
    # we keep all (stmt_idx, var, normalized_path) entries and resolve the
    # most recent one before the use site.
    alias_history = []
    for idx, (_, txt) in enumerate(stmts):
        m_alias = _CASCADE_ALIAS_RE.match(txt)
        if m_alias:
            alias_history.append(
                (idx, m_alias.group(1), normalize(m_alias.group(2))))

    def resolve_alias(var, before_idx):
        for hidx, hvar, hpath in reversed(alias_history):
            if hidx >= before_idx:
                continue
            if hvar == var:
                return hpath
        return None

    def lhs_matches_anchor(lhs_path_raw, anchor_path, stmt_idx):
        lhs_path = normalize(lhs_path_raw)
        if lhs_path == anchor_path:
            return True
        return resolve_alias(lhs_path_raw.strip(), stmt_idx) == anchor_path

    i = 0
    while i < n:
        start_line, anchor_text = stmts[i]
        m_anchor = _CASCADE_CONST_RE.match(anchor_text)
        if not m_anchor:
            i += 1
            continue
        anchor_path = normalize(m_anchor.group(1))
        anchor_field = m_anchor.group(2)
        constant = m_anchor.group(3)
        if not anchor_path:
            i += 1
            continue
        seen_fields = {anchor_field}
        prev_field = anchor_field
        run_len = 1
        bounce_var = None
        interleave_left = 2
        j = i + 1
        while j < n:
            _, stmt_text = stmts[j]

            # Optional temp-save: `<tmp> = <anchor_path>.<prev_field>;`.
            # Eats one statement and arms bounce_var. Only the first save
            # counts; subsequent re-saves through other temps stop the run.
            if bounce_var is None:
                m_save = _CASCADE_TEMP_SAVE_RE.match(stmt_text)
                if m_save:
                    save_var = m_save.group(1)
                    save_path = normalize(m_save.group(2))
                    save_field = m_save.group(3)
                    if (save_path == anchor_path
                            and save_field == prev_field
                            and save_var != anchor_path):
                        bounce_var = save_var
                        j += 1
                        continue

            # Temp-bounce chain step: `<lhs>.<field> = <bounce_var>;`.
            if bounce_var is not None:
                m_use = _CASCADE_TEMP_USE_RE.match(stmt_text)
                if m_use and m_use.group(3) == bounce_var:
                    lhs_path_raw = m_use.group(1)
                    lhs_field = m_use.group(2)
                    if (lhs_matches_anchor(lhs_path_raw, anchor_path, j)
                            and lhs_field not in seen_fields):
                        seen_fields.add(lhs_field)
                        run_len += 1
                        j += 1
                        continue
                # Bounce armed but the line isn't a matching use — chain
                # ends here.
                break

            # Standard chain shape:
            # `<lhs>.<lhs_field> = <rhs>.<rhs_field>;` where both sides
            # resolve to anchor_path (directly or via alias) and
            # rhs_field == prev_field.
            m_chain = _CASCADE_CHAIN_RE.match(stmt_text)
            if not m_chain:
                # Tolerate a few interleaved bookkeeping statements (register
                # spills, loop-counter inits, unrelated scalar stores) that
                # Watcom/Ghidra slipped between cascade steps — e.g.
                # `local_1c = 1;` or `pSVar1 = this_ptr->vertices + i;`.
                # Only skip a plain `;`-terminated assignment that doesn't
                # touch the cascade's struct path or the armed bounce temp,
                # so collapsing the run to N constant stores stays safe.
                stripped = stmt_text.strip()
                m_first = re.match(r'\s*[(*&]*\s*(\w+)', stripped)
                first_tok = m_first.group(1) if m_first else ''
                if (interleave_left > 0
                        and stripped.endswith(';')
                        and '=' in stripped
                        and '{' not in stripped and '}' not in stripped
                        and first_tok not in _CASCADE_INTERLEAVE_STOP
                        and anchor_path not in normalize(stripped)
                        and (bounce_var is None
                             or bounce_var not in re.findall(r'\w+', stripped))):
                    interleave_left -= 1
                    j += 1
                    continue
                break
            lhs_path_raw = m_chain.group(1)
            lhs_field = m_chain.group(2)
            rhs_path_raw = m_chain.group(3)
            rhs_field = m_chain.group(4)
            # The RHS must read a sibling field that already holds the
            # forwarded constant. Watcom usually forwards the *immediately*
            # prior field (`x = y` after `y = z`), but also emits chains that
            # re-read an earlier one (`x = z` after `y = z`) — both leave the
            # field holding the same constant, so accept any already-seen
            # field, not just `prev_field`.
            if (not lhs_matches_anchor(lhs_path_raw, anchor_path, j)
                    or not lhs_matches_anchor(rhs_path_raw, anchor_path, j)
                    or rhs_field not in seen_fields
                    or lhs_field in seen_fields):
                break
            seen_fields.add(lhs_field)
            prev_field = lhs_field
            run_len += 1
            j += 1
        if run_len >= 3:
            suspects.append({
                'line': start_line + 1,
                'type': 'unrolled_memset',
                'match': 'cascade_constant_fill',
                'text': anchor_text.strip()[:120],
                'description': (
                    'Watcom cascade constant fill (%d sibling fields '
                    'chained through prior store of `%s`). Replace with '
                    '%d direct stores of the constant in a .keep.' % (
                        run_len, constant, run_len)),
                'severity': 'moderate',
            })
            i = j
        else:
            i += 1
    return suspects


# Self-copy guard: an `if (&LOCAL_A != &LOCAL_B) { LOCAL_A = LOCAL_B; ... }`
# block where both sides are bare addresses of stack locals. Watcom emitted
# this when the source code wrote `if (&dst != &src) dst = src;` to guard a
# small struct copy against self-assignment, and the compiler unrolled the
# struct copy into N typed assignments. In our build, both addresses are
# always-different stack slots, so the guard is dead and the body always
# fires. Replace with the unguarded copy in a .keep.
#
# Tightly anchored to the bare-`&NAME` form on both sides — when one side
# has a cast (`(CLocation *)&local`) or is a pointer parameter (no `&`),
# the guard might be a real defense against caller-aliased pointers, so we
# leave those alone.
_SELF_COPY_GUARD_IF_RE = re.compile(
    r"^\s*if\s*\(\s*&(\w+)\s*!=\s*&(\w+)\s*\)\s*\{?\s*$")
_SELF_COPY_FIRST_ASSIGN_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*;\s*$")


def identify_self_copy_guard(decompiled_code):
    """Detect Watcom-emitted dead self-copy guards.

    Canonical shape:
        if (&local_58 != &local_d0) {
            local_58 = local_d0;
            local_54 = local_cc;
            local_50 = local_c8;
        }

    Both sides of the if-condition are bare addresses of stack locals, so
    the comparison is always-true at runtime (different stack slots). The
    body unrolls a small struct copy. The guard adds noise without any
    semantic effect. Drop the if-wrapper in a .keep so the body becomes
    an unconditional copy.

    Detection requires:
    - The if-line matches `if (&NAME_A != &NAME_B)` with NAME_A != NAME_B.
    - The first body line matches `NAME_A = NAME_B;` (so we know the if
      really guards a copy from B to A, not some unrelated branch).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the `if` line.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 1):
        m = _SELF_COPY_GUARD_IF_RE.match(lines[i])
        if not m:
            continue
        a, b = m.group(1), m.group(2)
        if a == b:
            continue
        # Find the next non-blank line and check it's `a = b;`.
        j = i + 1
        while j < n and lines[j].strip() == '':
            j += 1
        if j >= n:
            continue
        am = _SELF_COPY_FIRST_ASSIGN_RE.match(lines[j])
        if not am or am.group(1) != a or am.group(2) != b:
            continue
        suspects.append({
            'line': i + 1,
            'type': 'self_copy_guard',
            'match': 'if (&NAME_A != &NAME_B) { NAME_A = NAME_B; ... }',
            'text': lines[i].strip()[:120],
            'description': (
                'Watcom dead self-copy guard: `if (&%s != &%s)` wraps an '
                'unconditional struct copy. Both addresses are stack '
                'locals — always different — so the guard never skips. '
                'Drop the if-wrapper in a .keep.' % (a, b)),
            'severity': 'moderate',
        })
    return suspects


# Inverted self-copy guard: an `if (&LOCAL_A == &LOCAL_B) goto LABEL;`
# single-statement line where both sides are bare addresses of stack locals
# (A != B). This is the inverted mirror of `self_copy_guard`. The original
# source wrote `if (&dst != &src) { dst = src; ... }` to guard a small struct
# copy; Ghidra inverted the condition (so the *taken* branch skips the copy)
# and emitted the jump but not a recognizable `dst = src;` copy in the
# fall-through. Two outcomes, both decompiler artifacts worth clearing:
#   1. The copy was DROPPED entirely and the jump target equals the
#      fall-through — `dst` is left uninitialized at runtime (latent bug).
#      Canonical: CTurret::updateTargeting, `if (&CStack_3c == &CStack_54)`.
#   2. The guarded copy folded into stores that ARE present after the merge
#      (e.g. the source was a just-zeroed local, so `dst = src` became a
#      direct `dst = {0,0,0}`) — `dst` is set, and the guard is simply dead
#      code. Canonical: CDrummer::getCarryObjToBodyXForm.
# Resolve by checking the asm: restore the dropped copy (case 1) or drop the
# dead guard line (case 2).
#
# Comparing the addresses of two distinct named locals with `==` is
# always-false dead code, so this shape is never legitimate — zero false
# positives by construction. Anchored to the bare-`&NAME == &NAME` form on
# both sides plus a trailing `goto`/`break`/`continue`. Cast-wrapped or
# pointer-parameter operands are left alone for the same reason as
# self_copy_guard (they can be real alias defenses).
_DROPPED_SELF_COPY_RE = re.compile(
    r"^\s*if\s*\(\s*&(\w+)\s*==\s*&(\w+)\s*\)\s*(?:\{\s*)?"
    r"(?:goto\s+\w+|break|continue)\s*;\s*\}?\s*$")


def identify_dropped_self_copy(decompiled_code):
    """Detect inverted (always-false) self-copy guards.

    Canonical shape (from CTurret::updateTargeting):
        if (&CStack_3c == &CStack_54) goto LAB_005e2ed6;

    Both operands are bare `&NAME` of stack locals and the comparison is `==`
    (the inverse of self_copy_guard's `!=`), so the test is always false —
    dead code the decompiler emitted while inverting a `if (&dst != &src) {
    dst = src; }` copy guard. The body is a single jump, never the copy. The
    guarded `dst = src` is either dropped (leaving `dst` uninitialized) or
    folded into stores after the merge point; cross-check the asm to decide
    whether to restore the copy or drop the dead guard in a .keep.

    Detection requires:
    - The line matches `if (&NAME_A == &NAME_B) goto/break/continue;`.
    - NAME_A != NAME_B (distinct locals — the compare is always false).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the `if` line.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    for i, line in enumerate(lines):
        m = _DROPPED_SELF_COPY_RE.match(line)
        if not m:
            continue
        a, b = m.group(1), m.group(2)
        if a == b:
            continue
        suspects.append({
            'line': i + 1,
            'type': 'dropped_self_copy',
            'match': 'if (&NAME_A == &NAME_B) goto LABEL;',
            'text': line.strip()[:120],
            'description': (
                'Inverted (always-false) self-copy guard: `if (&%s == &%s)` '
                'compares two distinct stack-local addresses, so it never '
                'fires — dead code from a decompiler-inverted `if (&%s != &%s) '
                '{ %s = %s; }` copy guard. Cross-check the asm: if the `%s = '
                '%s;` copy was dropped, restore it in a .keep (else %s is '
                'uninitialized); if the copy folded into stores that survive '
                'after the merge, drop the dead guard line.'
                % (a, b, a, b, a, b, a, b, a)),
            'severity': 'moderate',
        })
    return suspects


# Tautological address-of guard. Watcom self-copy / defensive guards
# (`if (&dst != &src) dst = src;`) sometimes survive decompilation with one
# operand resolved to a non-object SENTINEL and the other to the address of a
# named object. Two sentinel forms appear:
#   * a `stack0xNNNNNNNN` phantom (§14, an unmapped stack slot) — the raw
#     decompiler output, e.g.
#     `if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z)`
#   * a plain null literal `(T *)0x0` — the same guard after a .keep author
#     resolves the phantom to zero.
# Taking the address of a named object or one of its sub-objects is NEVER equal
# to a null literal or a distinct stack phantom (C semantics: a `.field` access
# requires a non-pointer object base; `&local`/`&g_global` is the address of
# real storage; a global lives in a different region than any stack slot), so:
#   sentinel != &OBJ.field  → always TRUE  (dead guard wrapping an
#                             unconditional body — drop the if-wrapper)
#   sentinel == &OBJ.field  → always FALSE (dead branch — never executes)
# This is the sibling of `self_copy_guard` (both-addresses form), which the
# existing detector misses because it requires `&NAME != &NAME`.
#
# Zero false positives by construction: the object operand is restricted to
# `IDENT(.IDENT)*` and an explicit skip drops any `stack0x...` capture — so no
# `->` (would be `&ptr->field`, a real null-ish check via a possibly-null
# pointer + offset), no `[` (`&arr[i]`, base may be a pointer), no leading `*`
# (`&*p` IS `p`, a genuine null check), and no stack-phantom-vs-stack-phantom
# comparison. Those forms are deliberately left alone.
_TAUT_SENTINEL = r"(?:\([A-Za-z_]\w*\s*\*\)\s*)?(?:0x0|&stack0x[0-9a-fA-F]+)"
_TAUT_ADDR_GUARD_RE = re.compile(
    r"^\s*if\s*\(\s*"
    r"(?:" + _TAUT_SENTINEL + r"\s*(?P<op_a>!=|==)\s*&(?P<addr_a>\w+(?:\.\w+)*)"
    r"|&(?P<addr_b>\w+(?:\.\w+)*)\s*(?P<op_b>!=|==)\s*" + _TAUT_SENTINEL + r")"
    r"\s*\)")


def identify_tautological_addr_guard(decompiled_code):
    """Detect always-true/always-false address-of-vs-sentinel guards.

    See `_TAUT_ADDR_GUARD_RE` above for the shape and the FP-safety argument.
    The `!=` form wraps an unconditional body (drop the if-wrapper in a .keep);
    the `==` form is a dead branch that never runs.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the `if` line.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for i, line in enumerate(decompiled_code.split('\n')):
        m = _TAUT_ADDR_GUARD_RE.match(line)
        if not m:
            continue
        op = m.group('op_a') or m.group('op_b')
        addr = m.group('addr_a') or m.group('addr_b')
        # Skip stack-phantom-vs-stack-phantom (object side is itself a phantom).
        if addr.startswith('stack0x'):
            continue
        if op == '!=':
            detail = ('always TRUE (the address of `%s` is never null), so the '
                      'guard never skips its body. Drop the if-wrapper in a '
                      '.keep, leaving the body unconditional.' % addr)
        else:
            detail = ('always FALSE (the address of `%s` is never null), so the '
                      'guarded statement is dead and never executes. Resolve in '
                      'a .keep per the asm (drop the dead branch, or restore a '
                      'dropped copy if one was folded away).' % addr)
        suspects.append({
            'line': i + 1,
            'type': 'tautological_addr_guard',
            'match': 'if ((T *)0x0 %s &%s)' % (op, addr),
            'text': line.strip()[:120],
            'description': (
                'Tautological address-of guard: `if (... %s ...)` comparing a '
                'null literal against `&%s` is %s' % (op, addr, detail)),
            'severity': 'moderate',
        })
    return suspects


# Signed shift-right-by-31 of a global operand (`g_Foo >> 0x1f`, optionally
# `(int)`-cast, with member/index access). This is the same Watcom signed-
# divide-by-power-of-2 / branchless-abs sign-mask idiom that cppcheck flags as
# `shiftTooManyBitsSigned` (elevated to `static_shift_too_many_bits`) — but
# cppcheck runs without `-I`, so it cannot resolve the type of a global declared
# in a separate header and silently skips it. This regex closes that gap for
# global operands, which are always `g_`-prefixed here. Scoped to globals on
# purpose: cppcheck already covers local / cast operands, so this adds no
# overlap, and a global longlong (the only legitimate `>> 0x1f`, the multiply-
# high reduction) never appears here — that reduction operates on local temps.
_SIGNED_SHIFT_GLOBAL_RE = re.compile(
    r'(?:\(int\)\s*)?\bg_\w+(?:(?:->|\.)\w+|\[[^\]\n]*\])*\s*>>\s*(?:0x1f|31)\b'
)


# Ghidra's CONCAT{N}(hi, lo) intrinsic stitches narrow values into a wider one
# (e.g. two uint halves into a 64-bit value, a sign word + value for a 64-bit
# sign-extend). It is always a Watcom wide-value artifact, never legitimate C.
# The common forms have precise types — `(double)CONCAT44(...)` →
# double_reconstruction, `__BITCAST_DOUBLE(CONCAT44(...))` → bitcast_double_pair,
# `CONCAT22(...>>0x10)` → fnstsw_flag_artifact — so this generic detector skips
# those and counts every *other* CONCAT, which previously fell only into the
# omitted `decompiler_intrinsic` bucket and went unreported.
_CONCAT_RE = re.compile(r'\bCONCAT(\d+)\s*\(')
_CONCAT_DOUBLE_RE = re.compile(r'\(double\)\s*CONCAT44\s*\(')
_CONCAT_BITCAST_RE = re.compile(r'__BITCAST_DOUBLE\s*\(\s*CONCAT44\s*\(')
_CONCAT_FNSTSW_RE = re.compile(r'CONCAT22\s*\(.*>>\s*0x10')


def identify_concat_reconstruction(decompiled_code):
    """Flag generic CONCAT{N}() wide-value reconstructions as suspects.

    A CONCAT is never real C — it's how Ghidra renders a Watcom value
    stitched from narrower pieces. Reduce to the proper form in a .keep
    (sign-extend `(longlong)(int)x`, 64-bit math, a typed field, etc.).
    Skips lines already covered by the precise double/bitcast/FNSTSW
    detectors so they aren't double-counted. One suspect per line.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts of type 'concat_reconstruction'.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for i, line in enumerate(decompiled_code.split('\n')):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('/*'):
            continue
        m = _CONCAT_RE.search(line)
        if not m:
            continue
        if (_CONCAT_DOUBLE_RE.search(line) or _CONCAT_BITCAST_RE.search(line)
                or _CONCAT_FNSTSW_RE.search(line)):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'concat_reconstruction',
            'match': m.group(0).rstrip('(').rstrip(),
            'text': stripped[:120],
            'description': (
                'Ghidra CONCAT%s reconstruction (stitches narrow values into '
                'a wider one) — a Watcom wide-value artifact, not real C. '
                'Reduce to the proper form (e.g. sign-extend '
                '`(longlong)(int)x`, 64-bit math, or a typed field) in a '
                '.keep.' % m.group(1)),
            'severity': 'moderate',
        })
    return suspects


def identify_signed_shift_global_idiom(decompiled_code):
    """Detect the signed `>> 0x1f` sign-mask idiom applied to a global.

    Canonical shape (from renderFlatColorScanline):
        cVar2 = (char)((g_FlatShadingLightLevel
                        + (g_FlatShadingLightLevel >> 0x1f) * -0x100)
                       - (uint)((g_FlatShadingLightLevel >> 0x1f) << 7 < 0) >> 8);

    A signed 32-bit value shifted right by 31 is UB; Watcom emits it as the
    sign mask for a divide-by-power-of-2 (`x / N`) or branchless-abs
    (`ABS(x)`). cppcheck's `shiftTooManyBitsSigned` catches this for locals and
    cast operands but misses globals (their type isn't resolvable without
    `-I`). The eligible rewrite is identical to `static_shift_too_many_bits`:
    `x / N` or `ABS(x)` (see the `static_shift_too_many_bits` entry in
    fix_compilation.md).

    One suspect per line (deduped), located at the shift line.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts of type 'signed_shift_global_idiom'.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for i, line in enumerate(decompiled_code.split('\n')):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('/*'):
            continue
        if not _SIGNED_SHIFT_GLOBAL_RE.search(line):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'signed_shift_global_idiom',
            'match': 'g_Global >> 0x1f',
            'text': stripped[:120],
            'description': (
                'Signed `>> 0x1f` sign-mask on a global operand — the Watcom '
                'signed-divide-by-power-of-2 / branchless-abs idiom that '
                'cppcheck misses on globals (unresolved type without -I). '
                'Rewrite to `x / N` or `ABS(x)` in a .keep (bit-exact incl '
                'INT_MIN); see the static_shift_too_many_bits notes in '
                'fix_compilation.md.'),
            'severity': 'moderate',
        })
    return suspects


# Local-array declaration of the form `T NAME[N];`. Accepts multi-word
# types (`unsigned int`, `struct CFoo`) and optional pointer asterisks.
_LOCAL_ARRAY_DECL_RE = re.compile(
    r'^\s+([A-Za-z_][\w\s\*]*?)\s+([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]\s*;\s*$'
)

# Primitive element types where varying array sizes are routine and
# almost always intentional (char string buffers, int counters, float
# coefficient tables). Excluded from the sibling-mismatch detector to
# keep false positives down.
_SIBLING_ARRAY_PRIMITIVE_TYPES = frozenset((
    'char', 'uchar', 'unsigned char', 'signed char', 'byte',
    'short', 'ushort', 'unsigned short', 'signed short',
    'int', 'uint', 'unsigned int', 'signed int',
    'long', 'ulong', 'unsigned long', 'signed long',
    'longlong', 'ulonglong', 'unsigned long long', 'long long',
    'float', 'double', 'long double', 'bool', 'void',
    'size_t', 'ssize_t', 'ptrdiff_t', 'intptr_t', 'uintptr_t',
    'wchar_t',
))


def identify_sibling_array_undersized(decompiled_code):
    """Detect Ghidra-split array shapes via sibling-size mismatch.

    When Watcom emitted a single `T arr[N]` source array, Ghidra
    occasionally splits it into one or more smaller pieces (e.g. the
    canonical `local_186c[95]` next to `local_122c[100]` /
    `local_bec[100]` in `CDeformableModelInstance::updateMotion`). The
    asm still drives all three arrays from the same loop bound (typically
    a per-bone or per-vertex count read from the object), so writes to
    the undersized array overrun its declared bound and trip ASan as
    `stack-buffer-overflow`. cppcheck's `objectIndex` only catches the
    `(&NAME)[N]` form where Ghidra produced a *single-element* split;
    properly-arrayed-but-undersized siblings slip through.

    Heuristic: in each function, group local-array declarations by their
    element type. If a non-primitive type has 2+ arrays at one size and
    1+ arrays strictly smaller than that size, flag each smaller array.
    Restricted to struct/class types — primitive arrays (char buffers,
    int counters) routinely vary in size for legitimate reasons.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the offending decl line.
    """
    suspects = []
    if not decompiled_code:
        return suspects

    # Collect array decls. We don't split into per-function scopes here —
    # a single decompile typically holds one function body — but if that
    # changes, callers can pre-split the input.
    decls = []
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('* ')):
            continue
        m = _LOCAL_ARRAY_DECL_RE.match(line)
        if not m:
            continue
        elem_type = ' '.join(m.group(1).split())  # collapse whitespace
        if elem_type in _SIBLING_ARRAY_PRIMITIVE_TYPES:
            continue
        # Skip pointer-of-T arrays — they're typically jump tables /
        # vtables with intentional varied sizes.
        if '*' in elem_type:
            continue
        decls.append((line_no, elem_type, m.group(2), int(m.group(3))))

    # Group by element type.
    by_type = {}
    for d in decls:
        by_type.setdefault(d[1], []).append(d)

    for elem_type, group in by_type.items():
        if len(group) < 2:
            continue
        sizes = [g[3] for g in group]
        max_size = max(sizes)
        # Require at least 2 arrays at the max to call it the "right" size.
        # A single 100 against a single 95 is ambiguous; 100, 100, 95 is not.
        if sum(1 for s in sizes if s == max_size) < 2:
            continue
        for line_no, _, name, size in group:
            if size >= max_size:
                continue
            suspects.append({
                'line': line_no,
                'type': 'sibling_array_undersized',
                'match': '%s %s[%d] vs sibling %s[%d]' % (
                    elem_type, name, size, elem_type, max_size),
                'text': ('%s %s[%d];' % (elem_type, name, size))[:120],
                'description': (
                    '%s %s[%d] is smaller than sibling %s arrays in this '
                    'function (largest is [%d]). Likely Ghidra split a '
                    '%s[%d] source array; cross-check the asm loop bound '
                    'and resize in a .keep.' % (
                        elem_type, name, size, elem_type, max_size,
                        elem_type, max_size)),
                'severity': 'moderate',
            })
    return suspects


# Multi-line variant of the `pointer_cast` regex. The single-line detector
# in `identify_suspect_lines` iterates per-line, so it misses cases where
# Ghidra split `(TYPE *)` onto one line and the `((int)NAME ...)` operand
# onto the next — a common shape on long deep-struct paths. Same regex
# body as the single-line version, applied to the full text. The operand
# alternation matches both `(int)NAME` and `(int)(EXPR)->field` forms.
_POINTER_CAST_FULLTEXT_RE = re.compile(
    r'\(\w+(?:\s+\w+)*\s*\*+\s*\)\s*\([^)]*\(int\)\s*'
    r'(?:\([^()]*\)\s*(?:->|\.)\s*\w+|\w+)(?!\w|\s*\()')


def identify_pointer_cast_multiline(decompiled_code):
    """Catch `(TYPE *) ... (int)NAME ...` casts that wrap across lines.

    The single-line `pointer_cast` regex in `identify_suspect_lines` iterates
    `code.split('\\n')` and so misses casts that Ghidra split because the
    original line was too long. We re-scan the full text and emit only
    matches that span a newline (single-line ones are already handled).

    Same semantic as `pointer_cast` (byte-offset arithmetic where struct
    field access would be clearer), so we emit the same suspect type.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the first line of the match.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    # Build line-start offsets for offset → line-number mapping.
    line_starts = [0]
    for i, ch in enumerate(decompiled_code):
        if ch == '\n':
            line_starts.append(i + 1)

    for m in _POINTER_CAST_FULLTEXT_RE.finditer(decompiled_code):
        # Skip single-line matches — those are already handled by the
        # per-line regex pass in identify_suspect_lines.
        if '\n' not in decompiled_code[m.start():m.end()]:
            continue
        # Locate the line where the match starts.
        line_no = 1
        for i, start in enumerate(line_starts):
            if start > m.start():
                line_no = i
                break
        else:
            line_no = len(line_starts)
        line_start = line_starts[line_no - 1]
        line_end = decompiled_code.find('\n', line_start)
        if line_end == -1:
            line_end = len(decompiled_code)
        text = decompiled_code[line_start:line_end].strip()
        suspects.append({
            'line': line_no,
            'type': 'pointer_cast',
            'match': '(TYPE *) ((int)NAME ...) split across lines',
            'text': text[:120],
            'description': (
                'Pointer cast wraps onto the next line — same byte-offset '
                'trampolining as single-line `pointer_cast`, just split by '
                'Ghidra. Replace with indexed/named field access in a .keep.'),
            'severity': 'moderate',
        })
    return suspects


# `(int)&NAME` used in arithmetic. Watcom emits this when struct/local
# addresses are converted to int and used in byte-offset math — almost
# always a sign that the original source did struct field access by name
# and the decompiler re-expressed it as raw offset arithmetic. Restricted
# to arithmetic context (followed/preceded by `+` or `-`) so legitimate
# `(int)&local` conversions used as int arguments aren't flagged.
# A balanced parenthesized group tolerating nested parens up to 4 levels
# deep. `[^()]` and `\(` start on disjoint characters, so at any position
# only one alternative can begin — no catastrophic backtracking despite the
# nested `(?:...)*` quantifiers.
_NESTED_PAREN = (
    r'\((?:[^()]'
    r'|\((?:[^()]'
    r'|\((?:[^()]'
    r'|\([^()]*\))*\))*\))*\)'
)
# Base of the address after `&`: either a parenthesized expression followed
# by a struct access, or a bare identifier.
_INT_ADDR_BASE = r'(?:' + _NESTED_PAREN + r'\s*(?:->|\.)\s*\w+|\w+)'
# Address tail: struct fields, arrow chains, bracketed indices. Balanced
# `[...]` is consumed as a unit so a `+`/`-` inside an array index
# (e.g. `[i + 1]`) doesn't trigger the arithmetic-context match.
_INT_ADDR_TAIL = r'(?:\.\w+|->\w+|\[[^\]]*\])*'

_INT_ADDR_ARITH_RE = re.compile(
    # (int)&NAME(.field|->field|[...])* +/- ...
    # The base after `&` may be a bare identifier (`&local_ec`) or a
    # parenthesized expression followed by a struct access — Watcom emits
    # the latter when the original source took the address of a sub-field
    # reached through a struct walk, e.g.
    #   `(int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0`.
    # _NESTED_PAREN tolerates up to 4 levels of paren nesting so multi-cast
    # walks are caught too, not just flat single-paren bases:
    #   `(int)&((this_ptr->model).vertex_list)->x + iVar`         (depth 2)
    #   `(int)&(((SMRGLPrimitiveQuad *)(p->vertices + -2))->base).base.type + N`  (depth 3)
    r'\(int\)\s*&' + _INT_ADDR_BASE + _INT_ADDR_TAIL + r'\s*[\+\-]'
    r'|'
    r'[\+\-]\s*\(int\)\s*&' + _INT_ADDR_BASE + _INT_ADDR_TAIL
)


def identify_int_address_arithmetic(decompiled_code):
    """Detect `(int)&NAME +/- N` byte-offset arithmetic on addresses.

    Watcom converts struct/local addresses to int and uses them in byte
    arithmetic when the original source called struct field access by name.
    The decompiler keeps the byte-offset form, which obscures intent. The
    arithmetic context (`+` / `-`) distinguishes this from legitimate
    `(int)&local` casts passed to int-taking APIs.

    Same fix as other `pointer_cast` variants — replace with indexed or
    named field access. Same suspect type emitted.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.lstrip()
        # Skip comments. `* ` (with trailing space) catches doc-comment
        # continuation lines without swallowing C dereference statements
        # like `*(short *)(...) = ...;` whose first non-space char is also `*`.
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('* ')):
            continue
        for m in _INT_ADDR_ARITH_RE.finditer(line):
            suspects.append({
                'line': line_no,
                'type': 'pointer_cast',
                'match': '(int)&NAME used in byte-offset arithmetic',
                'text': line.strip()[:120],
                'description': (
                    '(int)&NAME used in arithmetic — Watcom byte-offset '
                    'trampolining that should be expressed as struct field '
                    'or array index access. Replace in a .keep.'),
                'severity': 'moderate',
            })
            break  # one flag per line is enough
    return suspects


# Multi-line variant of `_INT_ADDR_ARITH_RE`. The per-line pass in
# `identify_int_address_arithmetic` misses byte-offset walks that Ghidra
# wrapped across physical lines, e.g.
#   (int)&(((SMRGLPrimitiveTriangle *)(p->vertices + -2))->base).base.
#          type + primitive_stride
# `_INT_ADDR_BASE` already tolerates whitespace (incl. newlines) after its
# `.`/`->` separator, but `_INT_ADDR_TAIL` does not — so a break around a
# separator defeats even a full-text match. There are two wrap points:
#   `...->base).\n base.type`   — break AFTER the `.` (`\.\s*\w+` handles it)
#   `...->base).base \n .type`  — break BEFORE the `.` (whitespace precedes it)
# This tail variant inserts `\s*` on BOTH sides of each `.`/`->`/`[` so the
# walk still matches whichever side Ghidra wrapped on. `\s` and `\w` start on
# disjoint characters and each branch is anchored by a required non-space
# delimiter (`.`/`->`/`[`), so the surrounding `\s*` introduces no new
# ambiguity (same no-catastrophic-backtracking property as the single-line
# regex).
_INT_ADDR_TAIL_ML = r'(?:\s*\.\s*\w+|\s*->\s*\w+|\s*\[[^\]]*\])*'

_INT_ADDR_ARITH_MULTILINE_RE = re.compile(
    r'\(int\)\s*&' + _INT_ADDR_BASE + _INT_ADDR_TAIL_ML + r'\s*[\+\-]'
    r'|'
    r'[\+\-]\s*\(int\)\s*&' + _INT_ADDR_BASE + _INT_ADDR_TAIL_ML
)


def identify_int_address_arithmetic_multiline(decompiled_code):
    """Detect `(int)&NAME +/- N` byte-offset walks split across lines.

    Companion to `identify_int_address_arithmetic` for the case where
    Ghidra wrapped the walk onto the next physical line — the single-line
    pass iterates `code.split('\\n')` and can't see across the break. We
    re-scan the full text with a whitespace-tolerant tail and emit only
    matches that actually span a newline; single-line matches are already
    covered by the per-line pass, so emitting them here would double-flag.

    Same suspect type and fix as the single-line variant (replace the
    byte-offset address arithmetic with indexed or named field access in a
    .keep).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the first line of each match.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    line_starts = [0]
    for i, ch in enumerate(decompiled_code):
        if ch == '\n':
            line_starts.append(i + 1)
    for m in _INT_ADDR_ARITH_MULTILINE_RE.finditer(decompiled_code):
        # Single-line matches are already handled by the per-line pass.
        if '\n' not in decompiled_code[m.start():m.end()]:
            continue
        # Map the match start to a 1-based line number.
        line_no = bisect.bisect_right(line_starts, m.start())
        line_start = line_starts[line_no - 1]
        line_end = decompiled_code.find('\n', line_start)
        if line_end == -1:
            line_end = len(decompiled_code)
        first_line = decompiled_code[line_start:line_end]
        stripped = first_line.lstrip()
        # Skip comment lines, mirroring the per-line pass.
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('* ')):
            continue
        suspects.append({
            'line': line_no,
            'type': 'pointer_cast',
            'match': '(int)&NAME byte-offset arithmetic split across lines',
            'text': first_line.strip()[:120],
            'description': (
                '(int)&NAME used in arithmetic, wrapped across lines — same '
                'Watcom byte-offset trampolining as single-line pointer_cast, '
                'just split by Ghidra. Replace with struct field or array '
                'index access in a .keep.'),
            'severity': 'moderate',
        })
    return suspects


# Subobject-reach byte-offset cast: `(T *)(IDENT[N].FIELD + 0xOFF)`.
# Watcom/Ghidra computes the address of an EMBEDDED member through a phantom
# array index one element past the base, a sibling field whose array decays
# to a pointer, and a byte offset — together landing on the member's real
# offset. Canonical case (CGlass::ctor):
#     (CMirror *)(pCVar2[1].create_event + 0x1c)   -> &this_ptr->mirror
# where pCVar2 = &this->base (a CDemonActor), so [1] steps sizeof(CDemonActor),
# create_event is at 0x78, +0x1c lands on the CMirror member at 0x1ec.
# Distinct from the `(int)&NAME` / pointer-VARIABLE byte-offset detectors: the
# base here is `IDENT[N]` (an indexed object) and the immediate operand is a
# FIELD address (the array decays) plus a small hex offset, all wrapped in a
# pointer cast. Restricting the index to 0-9 (a phantom near-base step) and
# requiring the trailing `.FIELD + 0xHEX )` keeps it off ordinary buffer
# arithmetic like `(int *)(records[12].data + i)`.
_SUBOBJ_BYTE_OFFSET_CAST_RE = re.compile(
    r'\(\s*\w+\s*\*\s*\)\s*'          # (Type *)
    r'\(\s*'                          # (
    r'(?:\(\s*int\s*\)\s*)?'          # optional (int)
    r'\w+\s*\[\s*[0-9]\s*\]'          # IDENT[N]   (single-digit phantom index)
    r'\s*(?:\.|->)\s*\w+'             # .field / ->field   (decays to pointer)
    r'\s*\+\s*0x[0-9a-fA-F]+'         # + 0xHEX   (byte offset)
    r'\s*\)')                         # )


def identify_subobject_byte_offset_cast(decompiled_code):
    """Detect `(T *)(IDENT[N].FIELD + 0xOFF)` — a pointer cast of byte-offset
    arithmetic that reaches an embedded subobject through a phantom array
    index plus a sibling field.

    Ghidra computes the address of an embedded member (e.g. a CMirror inside
    a CGlass) as `(CMirror *)(pCVar2[1].create_event + 0x1c)` instead of
    `&this_ptr->mirror`: the `[1]` steps one element past the base object, the
    sibling array field decays to a pointer, and the byte offset lands on the
    member's real offset. Common in ctors that embed a subobject and pass its
    address to the parent ctor (the byte-offset form is invisible to the
    `(int)&NAME` and pointer-variable detectors).

    Same `pointer_cast` suspect type — replace with the named `&dst->member`
    access in a .keep (compute the offset from the struct layout to confirm
    which member it lands on).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('* ')):
            continue
        if _SUBOBJ_BYTE_OFFSET_CAST_RE.search(line):
            suspects.append({
                'line': line_no,
                'type': 'pointer_cast',
                'match': '(T *)(IDENT[N].FIELD + 0xOFF) byte-offset member reach',
                'text': line.strip()[:120],
                'description': (
                    'Pointer cast of byte-offset arithmetic reaching a struct '
                    'member via an array-indexed element + sibling field + '
                    'offset (e.g. `(CMirror *)(p[1].create_event + 0x1c)` -> '
                    '`&this->mirror`). Replace with the named field/array '
                    'access in a .keep.'),
                'severity': 'moderate',
            })
    return suspects


# Pointer-variable cast to int + hex byte offset, dereferenced — raw struct
# access that should be a named field / array index. Ghidra casts a `this`/
# param pointer to int, does byte arithmetic, and derefs with a hex offset:
#     iVar1 = alpha_index * 0xc + (int)this_ptr;
#     *(int *)(iVar1 + 0x11ec) = ...;            // -> this_ptr->field[i]
#   or inline:  *(int *)((int)this_ptr + 0x11ec)
# This is the smell that left CDemonCamera::saveAlphaTransform illegible.
# Distinct from `(int)&NAME` arithmetic (identify_int_address_arithmetic): here
# the base is a pointer VARIABLE. Gated on the base local being assigned from an
# `(int)<pointer>` expression (or the inline `(int)<pointer>` form), so it does
# NOT fire on the thousands of ordinary `*(T*)(intvar + off)` buffer/loop/string
# accesses whose base isn't a pointer.
_PTRISH = r"(?:this_ptr|param_\d+|p[A-Z]\w*|[A-Za-z_]\w*_ptr)"
# LHS local assigned from an RHS that contains `(int)<ptrish>` → the local holds
# a raw `pointer + offset` struct address.
_PTR_INT_ASSIGN_RE = re.compile(
    r"^\s*(\w+)\s*=\s*[^;]*\(int\)\s*" + _PTRISH + r"\b")
# `(TYPE *)(BASE +/- 0xNNN)` where BASE is an identifier or `(int)<ident>`.
_PTR_OFFSET_CAST_RE = re.compile(
    r"\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*\(\s*"
    r"(?P<base>(?:\(int\)\s*)?[A-Za-z_]\w*)\s*[-+]\s*0x[0-9a-fA-F]+\s*\)")
# Inline pointer-cast base: `(int)<ptrish>`.
_INLINE_PTR_BASE_RE = re.compile(r"^\(int\)\s*" + _PTRISH + r"\Z")


def identify_pointer_int_offset_access(decompiled_code):
    """Detect `*(TYPE *)((int)ptr + 0xNNN)` raw-byte struct access.

    Ghidra casts a pointer (a `this` receiver or param) to int and dereferences
    `ptr + hex_offset`, either inline or via an intermediate int local. The hex
    offset is a struct-field offset that should be expressed as a named field or
    array index (search the struct first — see §12). Gated on the dereferenced
    base provably deriving from an `(int)<pointer>` cast, so the thousands of
    ordinary `*(T*)(intvar + off)` accesses (whose base is a genuine int, not a
    pointer) are not flagged.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts (type `pointer_cast`).
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    # Pass 1: locals assigned from `(int)<ptrish>` arithmetic hold raw addresses.
    addr_locals = set()
    for line in lines:
        m = _PTR_INT_ASSIGN_RE.match(line)
        if m:
            addr_locals.add(m.group(1))
    # Pass 2: flag `(TYPE *)(BASE +/- 0xHEX)` where BASE is such a local or the
    # inline `(int)<ptrish>` form.
    for line_no, line in enumerate(lines, 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('* ')):
            continue
        for m in _PTR_OFFSET_CAST_RE.finditer(line):
            base = m.group('base').strip()
            if _INLINE_PTR_BASE_RE.match(base) or base in addr_locals:
                suspects.append({
                    'line': line_no,
                    'type': 'pointer_cast',
                    'match': m.group()[:80],
                    'text': line.strip()[:120],
                    'description': (
                        'Byte-offset struct access via a pointer cast to int '
                        '(`(int)ptr + 0xNNN`) — Ghidra lost the struct type for '
                        'the pointer. Replace with the named struct field / '
                        'array index in a .keep (search the struct for the '
                        'member at that offset first).'),
                    'severity': 'moderate',
                })
                break  # one flag per line is enough
    return suspects


# Watcom shadow-pointer walk. The compiler used a struct-field-array's
# address as a base and advanced it by element size each iteration so that
# `shadow->bone_list[0]` resolved to `original->bone_list[i]`. Ghidra
# decompiles the per-step advance as the suspicious self-update:
#   pCVar = (Skel *)((pCVar->motion_list).state_names[1] + 2);
# where the chosen field+index+constant happens to land at the right byte
# offset (sizeof(SBone) in this case). The shape is:
#   IDENT = (TYPE *)((IDENT->FIELD).ARRAY[N] + CONST);
# The same `IDENT` appears on both sides (self-update), and the cast back
# to the same pointer type is the giveaway. In real C this almost never
# occurs — legitimate buffer-walks don't read through a sibling field's
# string-array to get their next base address.
#
# Fix in a `.keep`: replace `shadow->bone_list[0]` reads with
# `original->bone_list[index]`, drop the shadow-pointer init and the
# self-update line. The shadow-pointer local typically becomes unused.
# Integer literals in Ghidra output may be decimal *or* hex. The shadow-walk
# strides/indices the decompiler emits are constants and frequently hex
# (`0x18` = sizeof(SFire), `0x2a` = a flame-stride index, `0x14` = a vertex
# index). Match either form everywhere a count/offset/index appears — using
# bare `\d+` silently skips every hex-constant walk.
_SPW_INT = r'(?:0[xX][0-9a-fA-F]+|\d+)'

_SHADOW_PTR_WALK_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*\1\s*->\s*\w+\s*\)'                  # ( IDENT->FIELD )
    r'\s*\.\s*\w+\s*\[\s*' + _SPW_INT + r'\s*\]'     # .ARRAY[N]
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Address-of-field variant: `IDENT = (T *)&(IDENT->FIELD).SUBFIELD;` —
# Watcom advances the pointer by the byte offset of a sibling field
# whose offset happens to equal the array stride. Same antipattern as
# above; just shaped as `&(p->A).B` rather than `(p->A).B[N] + CONST`.
# The trailing `(?:\.\w+)+` allows chained subfield accesses like
# `&(p->base).surface_normal.B;` where the offset target is reached via
# a multi-level field path inside a nested struct.
_SHADOW_PTR_WALK_ADDR_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*\(\s*\1\s*->\s*\w+\s*\)'                   # &( IDENT->FIELD )
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)+'  # .SUBFIELD[N]?(.SUBFIELD[N]?)*
    r'\s*;\s*$'                                      # ;
)
# Unparenthesized arrow variant: `IDENT = (T *)&IDENT->FIELD[N].SUBFIELD(.SUBFIELD)*;`
# Same antipattern as `_SHADOW_PTR_WALK_ADDR_RE` but the arrow-deref is NOT
# wrapped in parens and the leading field may itself be array-indexed. Ghidra
# emits this when the advanced pointer's element is reached via `&p->arr[0].sub`
# — e.g. `pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;` where
# `offsetof(vertices) + offsetof(a)` == `sizeof(SRenderVertex)` (the per-iteration
# stride). At least one trailing `.SUBFIELD` is required so this stays distinct
# from a plain element-address `&IDENT->field`. Self-update (`\1`) required.
_SHADOW_PTR_WALK_ARROW_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*\1\s*->\s*\w+\s*(?:\[\s*' + _SPW_INT + r'\s*\])?'  # &IDENT->FIELD[N]?
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)+'   # (.SUBFIELD[N]?)+
    r'\s*;\s*$'                                      # ;
)
# Single-field address variant: `IDENT = (T *)&IDENT->FIELD;` (optionally
# `&(IDENT->FIELD)`) — Watcom advances the shadow pointer by the byte offset
# of ONE sibling scalar field whose offset equals the array element stride
# (e.g. `pCVar19 = (CInventory *)&pCVar19->owner;` where `offsetof(owner)` == 4
# == `sizeof(items[0])`, so `shadow->items[0]` resolves to `orig->items[i]`).
# The `_ADDR_`/`_ARROW_` variants deliberately require a trailing `.SUBFIELD`
# to stay distinct from a plain element-address `&p->field`; this fills the
# single-field gap. The self-update (`\1` on both sides) IS the false-positive
# guard: reassigning a pointer to the address of its OWN scalar field is only
# ever a stride advance, never a real traversal (a list walk uses the field
# VALUE `p = p->next`, not its address `&p->next`). No subfield/index/`+CONST`.
_SHADOW_PTR_WALK_ARROW_SINGLE_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*(?:\(\s*\1\s*->\s*\w+\s*\)|\1\s*->\s*\w+)'  # &(IDENT->FIELD) | &IDENT->FIELD
    r'\s*;\s*$'                                      # ;
)
# Self-index address variant: `IDENT = (T *)&IDENT[N].SUBFIELD(.SUBFIELD)*;`
# Watcom advances the shadow pointer by taking the address of a constant
# index into the pointer itself plus a subfield path, where
# `N*sizeof(*IDENT) + offsetof(subfield)` equals the real array stride
# (e.g. `&pCVar11[0x2a].position.y` = 0x2a*16 + 4 = 0x2a4 = sizeof(CFlame)).
# Same antipattern as the `&(IDENT->FIELD)` form, just shaped as `&IDENT[N]`
# self-indexing rather than a field dereference.
_SHADOW_PTR_WALK_SELF_INDEX_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*\1\s*\[\s*' + _SPW_INT + r'\s*\]'          # &IDENT[N]
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)+'  # .SUBFIELD[N]?(.SUBFIELD[N]?)*
    r'\s*;\s*$'                                      # ;
)
# Self-index array-decay-plus-const variant:
#   `IDENT = (T *)(IDENT[N].FIELD + CONST);`
# Watcom advances the shadow pointer by self-indexing a constant element step
# (`IDENT[N]`), dereferencing a sibling array field (which decays to a pointer),
# then adding a small constant — the sum `N*sizeof(*IDENT) + offsetof(FIELD) +
# CONST*sizeof(elem)` equals the larger struct stride being walked. Same
# antipattern as `_SHADOW_PTR_WALK_SELF_INDEX_RE` but with no `&` (array decay)
# and a trailing `+ CONST`, e.g. the per-tire model walk
# `this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);`.
# Self-update (`\1`) required.
_SHADOW_PTR_WALK_SELF_INDEX_DECAY_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\1\s*\[\s*' + _SPW_INT + r'\s*\]'         # ( IDENT[N]
    r'(?:\s*\.\s*\w+)+'                              # .FIELD(.SUBFIELD)*
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Array-decay variant: `IDENT = (T *)IDENT->ARRAY_FIELD;` — Watcom advances
# the pointer by the byte offset of a sibling array field whose offset
# happens to equal the element stride (e.g. `lod_info` at offset 0x4 ==
# sizeof(int) for walking a sibling `int[]`). Same antipattern; the array
# name decays to a pointer that lands at the wanted byte offset.
_SHADOW_PTR_WALK_DECAY_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\1\s*->\s*\w+\s*;\s*$'                         # IDENT->FIELD;
)
# Array-decay-plus-const variant:
#   `IDENT = (T *)((IDENT->FIELD).SUBFIELD...ARRAY + CONST);`
# Watcom advances the shadow pointer by pointer arithmetic on an inner
# array name (which decays to a pointer), stepping by `CONST *
# sizeof(element)` bytes. Same antipattern as the `.ARRAY[N] + CONST`
# form, just shaped as decay-plus-arith. Differs from
# `_SHADOW_PTR_WALK_RE` by having no `[N]` between the array name and
# the `+ CONST`.
_SHADOW_PTR_WALK_ARRAY_DECAY_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*\1\s*->\s*\w+\s*\)'                  # ( IDENT->FIELD )
    r'(?:\s*\.\s*\w+)+'                              # .SUBFIELD(.SUBFIELD)+
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Arrow-indexed array-decay-plus-const variant:
#   `IDENT = (T *)(IDENT->FIELD[N].SUBFIELD + CONST);`
# Same antipattern as `_SHADOW_PTR_WALK_ARRAY_DECAY_PLUS_RE` but the arrow
# deref is NOT parenthesized and the leading field is itself array-indexed
# (`->FIELD[N]`), then a sibling subfield array decays to a pointer and a
# small constant is added — the sum equals the outer array stride. Seen in
# CTextureList::load walking `texture_entries[]` via
# `local_24 = (CTextureList *)(local_24->texture_entries[0].texture_name + 0xc);`
# (offsetof(texture_entries) + 0 + offsetof(texture_name) + 0xc == sizeof(entry)
# = 0x18). Self-update (`\1`) required.
_SHADOW_PTR_WALK_ARROW_INDEX_DECAY_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\1\s*->\s*\w+\s*\[\s*' + _SPW_INT + r'\s*\]'  # ( IDENT->FIELD[N]
    r'(?:\s*\.\s*\w+)+'                              # .SUBFIELD(.SUBFIELD)*
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Int-address-plus-const variant:
#   `IDENT = (T *)((int)&(IDENT->FIELD).SUBFIELD + CONST);`
# Watcom advances the shadow pointer by taking the address of a sibling
# subfield, numerically casting to `int`, then adding a small constant —
# the sum is one element-size step (e.g. `(int)&(p->base).orient + 4` =
# offset 0x34 = `sizeof(SPlatformAttachment)`). Same antipattern as
# `_SHADOW_PTR_WALK_ADDR_RE` but with the `(int)` numeric cast and an
# explicit `+ CONST`; pointer_cast also flags the `(int)&NAME` arithmetic,
# but a shadow_pointer_walk classification is more specific.
_SHADOW_PTR_WALK_INT_ADDR_CONST_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*int\s*\)\s*'                         # ( (int)
    r'&\s*\(\s*\1\s*->\s*\w+\s*\)'                   # & ( IDENT->FIELD )
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)*'  # (.SUBFIELD[N]?)*
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Int-element-stride-plus-const variant:
#   `IDENT = (T *)((int)(IDENT + N) + M);`
# Watcom advances the shadow pointer by adding `N` *elements* (pointer
# arithmetic on IDENT's own element type) then `M` raw bytes, all through
# an `int` round-trip. The element type is smaller than the true stride,
# so `N*sizeof(*IDENT) + M` equals the struct stride being walked — e.g. a
# `CVector3f *` field-walker striding a 0x11c-byte `SClothVertex`:
# `(int)(pCVar12 + 0x17) + 8` = 0x17*12 + 8 = 0x11c. Same antipattern as
# `_SHADOW_PTR_WALK_INT_ADDR_CONST_RE`, shaped as element-arith on IDENT
# itself rather than a field-address. Self-update (`\1`) required.
_SHADOW_PTR_WALK_INT_ELEM_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*int\s*\)\s*'                         # ( (int)
    r'\(\s*\1\s*\+\s*' + _SPW_INT + r'\s*\)'         # ( IDENT + N )
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + M );
)
# Two-step variants: same four shapes as above, but the LHS is a scratch
# `TMP` instead of the rebound `IDENT`. The rebind happens on a later line
# (`IDENT = TMP;`) — functionally identical to the self-update form. The
# `(\w+)...(\w+)` capture replaces the backref with two distinct captures
# so we can match the form and then verify the rebind via forward scan.
# Caught: e.g. `pCVar4 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);`
# followed by `local_1c = pCVar4;` later in the same loop body.
_SHADOW_PTR_WALK_TWOSTEP_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # TMP identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*(\w+)\s*->\s*\w+\s*\)'               # ( IDENT->FIELD )
    r'\s*\.\s*\w+\s*\[\s*' + _SPW_INT + r'\s*\]'     # .ARRAY[N]
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
_SHADOW_PTR_WALK_TWOSTEP_ADDR_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # TMP identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*\(\s*(\w+)\s*->\s*\w+\s*\)'                # &( IDENT->FIELD )
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)+'  # .SUBFIELD[N]?(.SUBFIELD[N]?)*
    r'\s*;\s*$'                                      # ;
)
_SHADOW_PTR_WALK_TWOSTEP_SELF_INDEX_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # TMP identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'&\s*(\w+)\s*\[\s*' + _SPW_INT + r'\s*\]'       # &IDENT[N]
    r'(?:\s*\.\s*\w+(?:\s*\[\s*' + _SPW_INT + r'\s*\])?)+'  # .SUBFIELD[N]?(.SUBFIELD[N]?)*
    r'\s*;\s*$'                                      # ;
)
_SHADOW_PTR_WALK_TWOSTEP_DECAY_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # TMP identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'(\w+)\s*->\s*\w+\s*;\s*$'                      # IDENT->FIELD;
)
_SHADOW_PTR_WALK_TWOSTEP_ARRAY_DECAY_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # TMP identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\(\s*(\w+)\s*->\s*\w+\s*\)'               # ( IDENT->FIELD )
    r'(?:\s*\.\s*\w+)+'                              # .SUBFIELD(.SUBFIELD)+
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Scan window for the rebind line when matching the two-step form. Loop
# bodies that emit this pattern are typically ≤20 lines; longer ones are
# rare and a missed hit is better than scanning the rest of the function.
_SHADOW_PTR_WALK_TWOSTEP_WINDOW = 20
# Plain arrow-decay-plus-const variant:
#   `IDENT = (T *)(IDENT->FIELD + CONST);`
# Watcom advances the shadow pointer by dereferencing a sibling array field
# directly off the arrow (which decays to a pointer) and adding a constant.
# This bare form (no inner `( )`, no `.SUBFIELD`, no `[N]`) is shared with the
# Watcom unrolled string/buffer-copy cursor, where the struct/`this` pointer
# itself is reused as the copy walker — e.g.
# `this_ptr = (CMP3Decoder *)(this_ptr->filename + 2);`. Those are already
# caught by `unrolled_strcpy`/`unrolled_memcpy`, so to avoid double-flagging
# the handler only treats this as a shadow walk when the surrounding loop
# *also reads a different field* through IDENT (the array-stride case, e.g.
# `pSVar4 = (SMotion *)(pSVar4->motion_name + 8);` advancing while reading
# `pSVar4->signals[0]`). The string-copy cursors only ever touch the same
# field they advance through, so they fall through. FIELD is captured (group 2)
# for that same-field test. Self-update (`\1`) required.
_SHADOW_PTR_WALK_ARROW_DECAY_PLUS_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*'                # cast to (T *)
    r'\(\s*\1\s*->\s*(\w+)'                          # ( IDENT->FIELD  (FIELD = grp 2)
    r'\s*\+\s*' + _SPW_INT + r'\s*\)\s*;\s*$'        # + CONST );
)
# Window (lines each direction) to scan for a differing-field access when
# disambiguating the bare arrow-decay-plus form from a string-copy cursor.
_SHADOW_PTR_WALK_OTHER_FIELD_WINDOW = 25

# Backward window (lines) to scan from a bare `IDENT = IDENT + N;` advance for the
# matching `IDENT = &BASE->ARR[K].SUBFIELD;` init. Larger than OTHER_FIELD_WINDOW
# because the init sits at the top of the loop and a physics/IO loop body
# (per-vertex integration, per-record scanf) can run 30+ lines before the advance
# at the bottom — e.g. CChain::process strides `&vertices[1].velocity` 27 lines
# above its `pCVar20 = pCVar20 + 3`. Widened from 40 to 120 because the init is
# frequently hoisted *above* the loop entirely (not just to its top): a function
# that sets up several element-subfield walkers, then advances them at the foot of
# a long body, leaves an 80+ line span — e.g. CMansionPuzzleCircle::setup inits
# `&gems[0].color.g` ~80 lines above its `local_2c = local_2c + 0x2e`, and
# CDemonSet::buildCameraDepthData inits `&cameras[0].orientation` ~47 lines above
# its advance. The init regex's `&ARR[K].SUBFIELD` shape (same-identifier match
# required) is the real signal — a pointer that points *into* an element and is
# advanced by N>=2 pointees is a shadow walk by construction — so the wider span
# only adds true positives and cannot lose existing hits (window growth is
# monotonic). Regression over core/: +6 TP (setup x2, netgame x3, setedit x1),
# 0 lost.
_SHADOW_PTR_WALK_ELEM_INIT_WINDOW = 120

# Bare element-stride advance variant: `IDENT = IDENT + N;` (no cast, N >= 2).
# Unlike every other form above, the advance line itself carries no signal — a
# plain pointer increment is ordinary iteration. The shadow-walk tell lives in
# the *init*: the pointer was set to the address of an array element's *subfield*
# (`IDENT = &BASE->ARR[K].SUBFIELD;`), so the pointee is smaller than the array's
# element and `N * sizeof(*IDENT)` equals the array stride. Watcom emits this
# when a `CVector3f *` (or other small-field pointer) walks a large struct array
# one element per iteration — e.g.
# `pCVar7 = &this_ptr->reflectors[0].position;` ... `pCVar7 = pCVar7 + 8;`
# (8 * sizeof(CVector3f) == sizeof(SReflector)). The element index K is usually 0
# but need not be — a walk that skips a pinned root starts at [1], e.g.
# `pCVar20 = &this_ptr->vertices[1].velocity;` ... `pCVar20 = pCVar20 + 3;`.
# Flagged only when both the advance AND a matching subfield-of-element init for
# the same IDENT are present (init scanned backward within
# _SHADOW_PTR_WALK_OTHER_FIELD_WINDOW), which keeps plain `p = &arr[0]; p = p + 1;`
# array iteration (no `.SUBFIELD`) from matching. N >= 2 is enforced in the
# handler. Self-update (`\1`) required.
_SHADOW_PTR_WALK_ELEM_ADVANCE_RE = re.compile(
    r'^\s*(\w+)\s*=\s*\1\s*\+\s*(' + _SPW_INT + r')\s*;\s*$'  # IDENT = IDENT + N;
)
_SHADOW_PTR_WALK_ELEM_INIT_RE = re.compile(
    r'^\s*(\w+)\s*=\s*'                              # LHS identifier
    r'&\s*\w+\s*(?:->|\.)\s*\w+\s*\[\s*' + _SPW_INT + r'\s*\]'  # &BASE->ARR[K] (or BASE.ARR)
    r'(?:\s*\.\s*\w+)+'                              # .SUBFIELD(.SUBFIELD)*
    r'\s*;\s*$'                                      # ;
)


def identify_shadow_pointer_walk(decompiled_code):
    """Detect Watcom shadow-pointer-walk byte-arithmetic.

    Catches the recurring pattern where a CSkeleton (or other struct)
    pointer is "advanced" by reading through a sibling field's array
    element + constant offset, and cast back to the same pointer type:

        pCVar = (T *)((pCVar->some_field).some_array[N] + CONST);

    This is Watcom's lowering of a per-iteration shadow-pointer-walk
    where the advance equals an inner element size. The chosen field,
    index, and constant are all decompiler artifacts — they happen to
    sum to the right byte offset for the real array stride.

    Detection requires:
    - LHS identifier matches the root identifier on the RHS (self-update).
    - RHS cast is to a `T *` pointer type.
    - RHS dereferences a struct field, indexes an inner array, then
      adds a small integer constant.

    All four together — almost never legitimate code.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')

    def has_rebind(start_idx, base_ident, tmp_ident):
        """Scan up to WINDOW lines forward for `base_ident = tmp_ident;`."""
        rebind_re = re.compile(
            r'^\s*' + re.escape(base_ident) +
            r'\s*=\s*' + re.escape(tmp_ident) + r'\s*;\s*$')
        end = min(len(lines), start_idx + _SHADOW_PTR_WALK_TWOSTEP_WINDOW + 1)
        for i in range(start_idx + 1, end):
            if rebind_re.match(lines[i]):
                return True
        return False

    def walks_other_field(start_idx, ident, advance_field):
        """True if the loop around `start_idx` reads `ident->FIELD` for some
        FIELD != advance_field.

        Distinguishes an array-stride shadow walk (advances through one field
        while reading another) from an unrolled string/buffer-copy cursor
        (only ever touches the field it advances through — already flagged by
        unrolled_strcpy/unrolled_memcpy). Scans a window each direction since
        the access may sit above (do/while) or below (while) the advance line.
        """
        access_re = re.compile(
            r'\b' + re.escape(ident) + r'\s*->\s*(\w+)')
        lo = max(0, start_idx - _SHADOW_PTR_WALK_OTHER_FIELD_WINDOW)
        hi = min(len(lines), start_idx + _SHADOW_PTR_WALK_OTHER_FIELD_WINDOW + 1)
        for i in range(lo, hi):
            if i == start_idx:
                continue
            for fld in access_re.findall(lines[i]):
                if fld != advance_field:
                    return True
        return False

    def has_elem_subfield_init(start_idx, ident):
        """True if `ident` was initialized to the address of element [0]'s
        subfield of an array (`ident = &BASE->ARR[0].SUBFIELD;`) on an earlier
        line within the backward window. This is the shadow-walk signal that
        disambiguates a bare `ident = ident + N;` advance from ordinary pointer
        iteration — the pointer lands *inside* an array element, so advancing by
        N pointees strides one whole (larger) element.
        """
        lo = max(0, start_idx - _SHADOW_PTR_WALK_ELEM_INIT_WINDOW)
        for i in range(lo, start_idx):
            m = _SHADOW_PTR_WALK_ELEM_INIT_RE.match(lines[i])
            if m and m.group(1) == ident:
                return True
        return False

    for line_no, line in enumerate(lines, 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('*')):
            continue
        m = _SHADOW_PTR_WALK_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)((%s->FIELD).ARRAY[N] + CONST)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via byte '
                    'arithmetic on a sibling field, where the chosen '
                    'field/index/constant sum to one element-size step. '
                    'Replace `%s->bone_list[0]` (or whatever) reads with '
                    'direct indexing on the original pointer; drop the shadow '
                    'init and self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ADDR_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)&(%s->FIELD).SUBFIELD' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via the '
                    'address of a sibling field whose byte offset equals '
                    'the array stride. Replace `%s->some_field[0]` reads '
                    'with direct indexing on the original pointer; drop '
                    'the shadow init and self-update.' % (
                        m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ARROW_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)&%s->FIELD[N].SUBFIELD' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via the '
                    'address of an array-indexed sibling field whose byte '
                    'offset equals the per-iteration stride (e.g. '
                    '`&%s->vertices[0].a`). Replace `%s->some_field[0]` reads '
                    'with direct indexing on the original pointer; drop the '
                    'shadow init and self-update.' % (
                        m.group(1), m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ARROW_SINGLE_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)&%s->FIELD' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via the '
                    'address of ONE sibling scalar field whose byte offset '
                    'equals the array element stride (e.g. `(T *)&%s->owner`). '
                    'Replace `%s->some_array[0]` reads with direct indexing on '
                    'the original pointer; drop the shadow init and '
                    'self-update.' % (m.group(1), m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_DECAY_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)%s->ARRAY' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via '
                    'array-decay of a sibling array field whose byte '
                    'offset equals the element stride. Replace '
                    '`%s->some_field[0]` reads with direct indexing on '
                    'the original pointer; drop the shadow init and '
                    'self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ARRAY_DECAY_PLUS_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)((%s->FIELD).SUBFIELD...ARRAY + CONST)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via '
                    'pointer arithmetic on an inner array field reached '
                    'through a chained field path; the array decays to a '
                    'pointer and `+ CONST` adds `CONST * sizeof(element)` '
                    'bytes, matching the outer array stride. Replace '
                    '`%s->some_field[0]` reads with direct indexing on '
                    'the original pointer; drop the shadow init and '
                    'self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ARROW_INDEX_DECAY_PLUS_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)(%s->FIELD[N].SUBFIELD + CONST)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via '
                    'pointer arithmetic on an array-indexed field reached by '
                    'an (unparenthesized) arrow deref; the inner sibling array '
                    'decays to a pointer and `+ CONST` adds `CONST * '
                    'sizeof(element)` bytes, matching the outer array stride. '
                    'Replace `%s->some_field[0]` reads with direct indexing on '
                    'the original pointer; drop the shadow init and '
                    'self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ARROW_DECAY_PLUS_RE.match(line)
        if m and walks_other_field(line_no - 1, m.group(1), m.group(2)):
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)(%s->%s + CONST)' % (
                    m.group(1), m.group(1), m.group(2)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via '
                    'pointer arithmetic on its own `%s` field (which decays to '
                    'a pointer), `+ CONST`; `offsetof(%s) + CONST*sizeof(elem)` '
                    'equals the stride of a *different* array the loop reads '
                    'through `%s`. Replace those `%s->other_field[0]` reads '
                    'with direct indexing on the original pointer; drop the '
                    'shadow init and self-update. (String/buffer-copy cursors '
                    'that only touch the advanced field are excluded here — '
                    'those are unrolled_strcpy/unrolled_memcpy.)' % (
                        m.group(1), m.group(2), m.group(2),
                        m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_ELEM_ADVANCE_RE.match(line)
        if (m and int(m.group(2), 0) >= 2 and
                has_elem_subfield_init(line_no - 1, m.group(1))):
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = %s + N' % (m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` was initialized to the '
                    'address of an array element\'s subfield '
                    '(`%s = &BASE->ARR[K].SUBFIELD;`) and is advanced here by '
                    '`+ N` whole pointees, where `N * sizeof(*%s)` equals the '
                    'array\'s element stride. The pointer is a smaller-typed '
                    'walker striding a larger struct array. Replace the '
                    '`%s->subfield` reads with direct indexing on the original '
                    'array (`BASE->ARR[i].SUBFIELD`); drop the shadow init and '
                    'advance.' % (
                        m.group(1), m.group(1), m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_INT_ADDR_CONST_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)((int)&(%s->FIELD).SUBFIELD + CONST)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates by '
                    'taking the address of a sibling subfield, numerically '
                    'casting to `int`, then adding a small constant — the '
                    'sum equals one element-size step of the array being '
                    'walked. Replace `%s->some_field[0]` reads with direct '
                    'indexing on the original pointer; drop the shadow '
                    'init and self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_INT_ELEM_PLUS_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)((int)(%s + N) + M)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via '
                    'element-arithmetic `(int)(%s + N) + M`, where '
                    '`N*sizeof(*%s) + M` equals the larger struct stride '
                    'being walked (the pointer is typed to a sub-element). '
                    'Replace `%s->field` reads with direct indexing on the '
                    'original pointer; drop the shadow init and self-update.'
                    % (m.group(1), m.group(1), m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_SELF_INDEX_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)&%s[N].SUBFIELD' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates via the '
                    'address of a constant index into itself plus a subfield '
                    'path, where `N*sizeof(*%s) + offsetof(subfield)` equals '
                    'the real array stride. Replace `%s->some_field[0]` (or '
                    'the zero-index access) reads with direct indexing on the '
                    'original pointer; drop the shadow init and self-update.'
                    % (m.group(1), m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        m = _SHADOW_PTR_WALK_SELF_INDEX_DECAY_PLUS_RE.match(line)
        if m:
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = (T *)(%s[N].FIELD + CONST)' % (
                    m.group(1), m.group(1)),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk — `%s` self-updates by '
                    'self-indexing a constant element step, dereferencing a '
                    'sibling array field (which decays to a pointer), then '
                    'adding a constant; the sum equals the larger struct '
                    'stride being walked. Replace `%s->field` reads with '
                    'direct indexing on the original pointer; drop the shadow '
                    'init and self-update.' % (m.group(1), m.group(1))),
                'severity': 'moderate',
            })
            continue
        # Two-step variants. The first line advances a scratch `TMP`; a
        # later line rebinds `IDENT = TMP;`. Same antipattern as the
        # self-update forms above, just split across two statements.
        for re_obj, kind in (
            (_SHADOW_PTR_WALK_TWOSTEP_RE,
             '(T *)((IDENT->FIELD).ARRAY[N] + CONST)'),
            (_SHADOW_PTR_WALK_TWOSTEP_ADDR_RE,
             '(T *)&(IDENT->FIELD).SUBFIELD'),
            (_SHADOW_PTR_WALK_TWOSTEP_SELF_INDEX_RE,
             '(T *)&IDENT[N].SUBFIELD'),
            (_SHADOW_PTR_WALK_TWOSTEP_DECAY_RE,
             '(T *)IDENT->ARRAY'),
            (_SHADOW_PTR_WALK_TWOSTEP_ARRAY_DECAY_PLUS_RE,
             '(T *)((IDENT->FIELD).SUBFIELD...ARRAY + CONST)'),
        ):
            m = re_obj.match(line)
            if not m:
                continue
            tmp_ident, base_ident = m.group(1), m.group(2)
            if tmp_ident == base_ident:
                # Already a single-line self-update — handled by the
                # backref-matching passes above. Don't double-flag.
                continue
            if not has_rebind(line_no - 1, base_ident, tmp_ident):
                continue
            suspects.append({
                'line': line_no,
                'type': 'shadow_pointer_walk',
                'match': '%s = %s; ...; %s = %s' % (
                    tmp_ident, kind.replace('IDENT', base_ident),
                    base_ident, tmp_ident),
                'text': line.strip()[:120],
                'description': (
                    'Watcom shadow-pointer walk (two-step form) — `%s` is '
                    'advanced into scratch `%s`, then rebound via a later '
                    '`%s = %s;`. Functionally identical to the single-line '
                    'self-update; replace `%s->some_field[0]` reads with '
                    'direct indexing on the original pointer and drop both '
                    'the advance line and the rebind.' % (
                        base_ident, tmp_ident,
                        base_ident, tmp_ident,
                        base_ident)),
                'severity': 'moderate',
            })
            break
    return suspects


# §26 Sub-field-address vector field-pun. Ghidra splits a contiguous Watcom
# stack block that holds a 3-component vector across adjacent locals and emits
# the call argument (or store target) as the address of a *non-first*
# component of a vector local, cast to a vector pointer: `(CVector3f *)&LOCAL.y`
# or `&LOCAL.z`. A 3-float access that starts at `.y` (offset 4) or `.z`
# (offset 8) of a 12-byte CVector3f reads/writes 4-8 bytes past the local's
# end — valid under Watcom's compact stack layout (it spilled into the next
# local) but a guaranteed `stack-buffer-overflow` under ASan's redzones.
#
# Fix in a `.keep`: introduce a real contiguous vector local, write all 3
# components to it (recover any dropped writes from the .asm), pass
# `&real_local`. See section 26 of fix_compilation.md.
#
# Base is restricted to a *bare* local identifier (`&local_168.y`): Ghidra only
# omits the field name when the local itself is typed as a standalone vector, so
# `&local_X.y/.z` is a 12-byte CVector3f and the 3-component access always
# overruns it. Nested forms (`&local_box.velocity.z`, `&local_bbox.max.y`) are
# deliberately excluded — whether they overrun depends on the field's offset
# and the containing struct's size (e.g. a vector field mid-way through a large
# struct stays in bounds), which a regex can't determine, so flagging them
# would be noisy. Pointer-deref (`->`) and array-index (`[i]`) bases are
# excluded for the same reason. Only `.y`/`.z` are flagged — a `.x` start
# (offset 0) is the vector head and doesn't overrun.
_SUBFIELD_VECTOR_PUN_RE = re.compile(
    r'\(\s*(CVector3[fi])\s*\*\s*\)\s*'        # cast to (CVector3f/i *)
    r'&\s*'                                     # address-of
    r'(\w+)'                                     # bare local identifier
    r'\s*\.\s*([yz])\b'                          # .y or .z component
)


def identify_subfield_vector_pun(decompiled_code):
    """Detect §26 sub-field-address vector field-puns.

    Flags `(CVector3f *)&LOCAL.y` / `&LOCAL.z` — taking the address of a
    non-first component of a vector local and casting to a vector pointer,
    which makes a 3-component access overrun the local (ASan
    stack-buffer-overflow).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('*')):
            continue
        for m in _SUBFIELD_VECTOR_PUN_RE.finditer(line):
            vtype, base, comp = m.group(1), m.group(2).replace(' ', ''), m.group(3)
            suspects.append({
                'line': line_no,
                'type': 'subfield_vector_pun',
                'match': '(%s *)&%s.%s' % (vtype, base, comp),
                'text': line.strip()[:120],
                'description': (
                    'Sub-field-address vector field-pun — `(%s *)&%s.%s` casts '
                    'the address of a non-first component of a vector to a '
                    'vector pointer, so a 3-component access starts mid-vector '
                    'and overruns `%s` by 4-8 bytes (ASan stack-buffer-overflow; '
                    '§26). Introduce a real contiguous %s local, write all '
                    '3 components (recover dropped writes from the .asm), and '
                    'pass its address.' % (vtype, base, comp, base, vtype)),
                'severity': 'moderate',
            })
    return suspects


# Watcom's REP SCASB strlen idiom. ECX is initialized to -1 (0xFFFFFFFF),
# then decremented inside a do-while that reads a byte per iteration. The
# `(uint)<bool> * -2 + 1` direction trick picks the step (1 forward, -1
# backward — always 1 in practice). Length is recovered downstream as
# `~uVar - 1` (strlen) or `~uVar` (strlen + 1, the malloc-sized form).
_UNROLLED_STRLEN_INIT_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(?:0xffffffff|-1)\s*;\s*$")
_UNROLLED_STRLEN_ECX_BREAK_RE = re.compile(
    r"^\s*if\s*\(\s*(\w+)\s*==\s*0\s*\)\s*break\s*;\s*$")
_UNROLLED_STRLEN_DECR_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*(?:-\s*1|\+\s*-\s*1)\s*;\s*$")
_UNROLLED_STRLEN_LOAD_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\*\s*(\w+)\s*;\s*$")
_UNROLLED_STRLEN_STEP_RE = re.compile(
    r"^\s*\w+\s*=\s*\w+\s*\+\s*\(\s*uint\s*\)\s*\w+\s*\*\s*-?\d+\s*\+\s*\d+\s*;\s*$")
# Plain unit-advance step: `pVar = pVar + 1;`. Watcom emits this (instead of
# the `(uint)bool * -2 + 1` direction idiom) when the walk direction is known
# at compile time. Same SCASB strlen — gated by the counter anchor — just a
# bare increment. Self-advance (`\1`) required so it ties to the walked ptr.
_UNROLLED_STRLEN_STEP_PLUS1_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*1\s*;\s*$")
# Scan-for-null variant: instead of loading the byte into a temp and testing
# `cVar != '\0'`, the loop keeps a "current position" pointer and tests the
# byte at it directly: `} while (*pVar != '\0');`. The walk advance varies
# (bare `(uint)bool` step, casted `(T *)((int)p + ...)`, or field-decay
# `(T *)(p->name + 1)`), so rather than match the step shape we just require
# the body to reassign the tested pointer. Same SCASB lowering; length is
# still recovered downstream as `~uVar - 1`. Seen in trimActorName,
# CPodFile::mountFromFile, the menu builders, etc.
_UNROLLED_STRLEN_WHILE_DEREF_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\*\s*(\w+)\s*!=\s*'\\0'\s*\)\s*;\s*$")


def identify_unrolled_strlen_loops(decompiled_code):
    """Detect Watcom's loop-unrolled strlen (REP SCASB) artifacts.

    Canonical shape:
        uVar = 0xffffffff;
        pVar = <src>;
        do {
            if (uVar == 0) break;
            uVar = uVar - 1;
            cVar = *pVar;
            pVar = pVar + (uint)bVar * -2 + 1;
        } while (cVar != '\\0');

    The length is then used as `~uVar - 1` (strlen) or `~uVar` (strlen + 1),
    often as an argument to strncmp/malloc/etc. Replace the whole loop with
    a `strlen(src)` call in a .keep.

    The match anchor is the ECX-zero guard `if (<v> == 0) break;` followed
    by the decrement `<v> = <v> - 1;` — a unique combination specific to
    the SCASB lowering, distinct from the strcpy null-break pattern which
    breaks on the byte value, not the counter.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected loop.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 4):
        # Anchor: `if (<v> == 0) break;` followed by `<v> = <v> - 1;` or
        # `<v> = <v> + -1;` (Ghidra emits both forms).
        break_m = _UNROLLED_STRLEN_ECX_BREAK_RE.match(lines[i])
        if not break_m:
            continue
        decr_m = _UNROLLED_STRLEN_DECR_RE.match(lines[i + 1])
        if not decr_m or decr_m.group(1) != break_m.group(1):
            continue
        # Walk upward for the `do {` header.
        loop_start = None
        for back in range(1, 6):
            if i - back < 0:
                break
            if _UNROLLED_DO_RE.match(lines[i - back]):
                loop_start = i - back
                break
        if loop_start is None:
            continue
        # Walk downward for the `} while (...)` closer — either the byte-temp
        # form `} while (cVar != '\0');` or the scan-for-null form
        # `} while (*pVar != '\0');`.
        loop_end = None
        deref_ptr = None
        for fwd in range(2, 14):
            if i + fwd >= n:
                break
            if _UNROLLED_WHILE_RE.match(lines[i + fwd]):
                loop_end = i + fwd
                break
            dm = _UNROLLED_STRLEN_WHILE_DEREF_RE.match(lines[i + fwd])
            if dm:
                loop_end = i + fwd
                deref_ptr = dm.group(1)
                break
        if loop_end is None:
            continue
        if deref_ptr is not None:
            # Scan-for-null form: require the body to reassign the pointer
            # whose byte the `while (*pVar ...)` tests — that reassignment is
            # the per-iteration walk advance. The counter anchor above
            # (`if (v==0) break; v=v-1;`) is already SCASB-specific, so this
            # one extra tie is enough without matching the (varied) step shape.
            ptr_assign = re.compile(
                r'^\s*' + re.escape(deref_ptr) + r'\s*=\s*\S.*;\s*$')
            if not any(ptr_assign.match(lines[idx])
                       for idx in range(loop_start + 1, loop_end)):
                continue
        else:
            # Body must contain both the byte load and the direction-stepped
            # pointer walk. Order varies (load may come before or after step,
            # and the decompile sometimes inserts no-op `p = p;` lines).
            has_load = False
            has_step = False
            for idx in range(loop_start + 1, loop_end):
                if _UNROLLED_STRLEN_LOAD_RE.match(lines[idx]):
                    has_load = True
                if (_UNROLLED_STRLEN_STEP_RE.match(lines[idx]) or
                        _UNROLLED_STRLEN_STEP_PLUS1_RE.match(lines[idx])):
                    has_step = True
            if not (has_load and has_step):
                continue
        suspects.append({
            'line': loop_start + 1,
            'type': 'unrolled_strlen',
            'match': 'do { if (v==0) break; v=v-1; ... }',
            'text': lines[loop_start].strip()[:120],
            'description': (
                'Watcom loop-unrolled strlen (REP SCASB with ECX=-1 init '
                'and direction-bool step). Replace the whole loop with '
                'strlen(src) in a .keep; the length downstream appears as '
                '`~uVar - 1` (strlen) or `~uVar` (strlen + 1).'),
            'severity': 'moderate',
        })
    return suspects


# Strcat = strlen-scan followed by an unrolled strcpy copying src onto the
# null terminator of dst. After the strlen loop, the code sets
# `<pcat> = <pend> + -1;` positioning at the null, then falls into a
# standard 2-byte-at-a-time strcpy loop writing onto that position.
_UNROLLED_STRCAT_ADJUST_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\+\s*-\s*1\s*;\s*$")
# Negative-index adjust variant: `<pcat> = <pwalker>[-1] + CONST;`. When the
# strlen find-end loop walked an array-of-arrays pointer (`char (*)[N]`),
# Ghidra positions at the null via `walker[-1] + offset` (e.g.
# `pcVar3 = pacVar12[-1] + 0xff;` = walker - N + (N-1) = walker - 1). Same
# role as `<pcat> = <pend> + -1;` — points at the null terminator before the
# appending strcpy. Gated identically by the strlen→adjust→strcpy sandwich,
# so the bare regex needs no further qualification (verified 0 unsandwiched
# matches codebase-wide). Seen in the menu builders (configureCustomKeys,
# configureGraphicsOptions, configureSoundOptions).
_UNROLLED_STRCAT_ADJUST_NEGIDX_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\[\s*-1\s*\]\s*\+\s*(?:0x[0-9a-fA-F]+|\d+)\s*;\s*$")


def identify_unrolled_strcat_loops(decompiled_code):
    """Detect Watcom's loop-unrolled strcat (strlen + strcpy onto null).

    Canonical shape (after a matched strlen scan on `pend`):
        pcat = pend + -1;
        do {
            cVar = *src;
            *pcat = cVar;
            if (cVar == '\\0') break;
            cVar = src[1];
            src = src + 2;
            pcat[1] = cVar;
            pcat = pcat + 2;
        } while (cVar != '\\0');

    The adjust `pcat = pend + -1` is the tell-tale sign: the pointer is
    being positioned at the null terminator (one before the byte past null)
    before falling into a strcpy copying src onto the tail.

    Replace the whole strlen + adjust + strcpy block with a single
    `strcat(dst, src)` in a .keep.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected strlen+strcpy pairing.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    # Find all strlen loops first; then look for the adjust + strcpy that
    # immediately follows the strlen's `} while` close.
    strlen_hits = identify_unrolled_strlen_loops(decompiled_code)
    if not strlen_hits:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for hit in strlen_hits:
        # `hit['line']` is 1-based, pointing at the strlen's `do {` header.
        # Find the matching `} while (... != '\0');` close after that.
        start = hit['line'] - 1
        close_idx = None
        for fwd in range(1, 16):
            if start + fwd >= n:
                break
            if _UNROLLED_WHILE_RE.match(lines[start + fwd]):
                close_idx = start + fwd
                break
        if close_idx is None:
            continue
        # Scan a few lines after the close for the null-positioning adjust:
        # either `pcat = pend + -1;` or `pcat = pwalker[-1] + CONST;`.
        adjust_idx = None
        for fwd in range(1, 6):
            if close_idx + fwd >= n:
                break
            if (_UNROLLED_STRCAT_ADJUST_RE.match(lines[close_idx + fwd]) or
                    _UNROLLED_STRCAT_ADJUST_NEGIDX_RE.match(lines[close_idx + fwd])):
                adjust_idx = close_idx + fwd
                break
        if adjust_idx is None:
            continue
        # The adjust should be followed by a strcpy `do {` within a few
        # lines. Confirm via the byte-store + null-break anchor.
        for fwd in range(1, 6):
            if adjust_idx + fwd >= n - 1:
                break
            if not _UNROLLED_DO_RE.match(lines[adjust_idx + fwd]):
                continue
            # Confirm the do-block contains the strcpy store + null-break
            # anchor within the next few lines.
            for inner in range(1, 6):
                idx = adjust_idx + fwd + inner
                if idx + 1 >= n:
                    break
                store_m = _UNROLLED_BYTE_STORE_RE.match(lines[idx])
                if not store_m:
                    continue
                null_m = _UNROLLED_NULL_BREAK_RE.match(lines[idx + 1])
                if null_m and store_m.group(2) == null_m.group(1):
                    suspects.append({
                        'line': hit['line'],
                        'type': 'unrolled_strcat',
                        'match': 'strlen + <p> + -1 + strcpy',
                        'text': lines[start].strip()[:120],
                        'description': (
                            'Watcom loop-unrolled strcat (strlen scan '
                            'followed by `= <p> + -1` adjust and a '
                            '2-byte strcpy onto the null terminator). '
                            'Replace the whole strlen + strcpy pair '
                            'with strcat(dst, src) in a .keep.'),
                        'severity': 'moderate',
                    })
                    break
            else:
                continue
            break
    return suspects


# Watcom's loop-unrolled strchr checks 2 bytes per iteration, each looked
# up against the target char OR the null terminator. The pointer snapshot
# `pA = pB;` at the top preserves the hit position when goto-ing out.
_UNROLLED_STRCHR_SNAPSHOT_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*;\s*$")
_UNROLLED_STRCHR_CHAR_HIT_RE = re.compile(
    r"^\s*if\s*\(\s*\*\s*(\w+)\s*==\s*'((?:\\.|[^'\\])+)'\s*\)\s*goto\s+\w+\s*;\s*$")
_UNROLLED_STRCHR_NULL_BREAK_RE = re.compile(
    r"^\s*if\s*\(\s*\*\s*(\w+)\s*==\s*'\\0'\s*\)\s*break\s*;\s*$")
_UNROLLED_STRCHR_STEP1_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\+\s*1\s*;\s*$")
_UNROLLED_STRCHR_STEP2_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*2\s*;\s*$")
_UNROLLED_STRCHR_WHILE_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\*\s*\w+\s*!=\s*'\\0'\s*\)\s*;\s*$")


def identify_unrolled_strchr_loops(decompiled_code):
    """Detect Watcom's loop-unrolled strchr artifacts.

    Canonical shape (scanning for literal char X):
        do {
            pA = pB;
            if (*pB == 'X') goto LAB_...;
            if (*pB == '\\0') break;
            pA = pB + 1;
            if (*pA == 'X') goto LAB_...;
            pB = pB + 2;
        } while (*pA != '\\0');
        pA = (char *)0x0;

    Two char-equality checks against the same literal, separated by a null
    check — highly specific to Watcom's 2-byte-unrolled inline strchr.
    Replace the whole loop + `pA = NULL` fallback with `strchr(ptr, 'X')`
    in a .keep.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected strchr scan.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n - 6):
        if not _UNROLLED_DO_RE.match(lines[i]):
            continue
        # Body line 1: `pA = pB;`
        snap_m = _UNROLLED_STRCHR_SNAPSHOT_RE.match(lines[i + 1])
        if not snap_m:
            continue
        pA, pB = snap_m.group(1), snap_m.group(2)
        # Body line 2: `if (*pB == '<lit>') goto LAB_...;`
        hit1_m = _UNROLLED_STRCHR_CHAR_HIT_RE.match(lines[i + 2])
        if not hit1_m or hit1_m.group(1) != pB:
            continue
        lit = hit1_m.group(2)
        # Reject null-termination as the "char hit" — that's a different
        # idiom (the scan-for-null loop we see in CDemonSet_save).
        if lit == '\\0':
            continue
        # Body line 3: `if (*pB == '\0') break;`
        null_m = _UNROLLED_STRCHR_NULL_BREAK_RE.match(lines[i + 3])
        if not null_m or null_m.group(1) != pB:
            continue
        # Body line 4: `pA = pB + 1;`
        step1_m = _UNROLLED_STRCHR_STEP1_RE.match(lines[i + 4])
        if (not step1_m or step1_m.group(1) != pA
                or step1_m.group(2) != pB):
            continue
        # Body line 5: `if (*pA == '<same_lit>') goto LAB_...;`
        hit2_m = _UNROLLED_STRCHR_CHAR_HIT_RE.match(lines[i + 5])
        if (not hit2_m or hit2_m.group(1) != pA
                or hit2_m.group(2) != lit):
            continue
        # Body line 6: `pB = pB + 2;`
        step2_m = _UNROLLED_STRCHR_STEP2_RE.match(lines[i + 6])
        if not step2_m or step2_m.group(1) != pB:
            continue
        # Closer: `} while (*<ptr> != '\0');` — within a couple lines.
        close_idx = None
        for fwd in range(7, 10):
            if i + fwd >= n:
                break
            if _UNROLLED_STRCHR_WHILE_RE.match(lines[i + fwd]):
                close_idx = i + fwd
                break
        if close_idx is None:
            continue
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_strchr',
            'match': "do { snap; if (*p=='X') goto; if (*p=='\\0') break; ... }",
            'text': lines[i].strip()[:120],
            'description': (
                "Watcom loop-unrolled strchr (2-byte-at-a-time scan for "
                "literal '{lit}' with null-terminator break). Replace the "
                "whole loop + fallback `= NULL` with strchr(ptr, '{lit}') "
                "in a .keep.").format(lit=lit),
            'severity': 'moderate',
        })
    return suspects


_PREINC_ADVANCE_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\([A-Za-z_]\w*\s*\*\)\s*[^;]*?&[^;]*?\b\1->[^;]*?;\s*$")
# Primitive-pointer advance form: `pX = pX + N;` (plain pointer arithmetic on an
# int*/uint* walker), the counterpart to the struct-field advance above. Seen in
# the mp3 scalefactor readers, where the walker is a flat `int *` so Ghidra emits
# `piVar3 = piVar3 + 0xd;` instead of `piVar3 = (T *)&piVar3->field;`.
_PREINC_ADVANCE_PTRARITH_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*(?:0x[0-9a-fA-F]+|\d+)\s*;\s*$")
_PREINC_SELFASSIGN_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*;\s*$")
_PREINC_ARRAY0_RE = re.compile(
    r"\b(\w+)->\w+\[0\]")
# Constant-index store on the advanced primitive walker: `pX[K] = ...;`. The flat
# `int *` counterpart of the `pX->arr[0]` struct-field store.
_PREINC_INDEX_STORE_RE = re.compile(
    r"^\s*(\w+)\s*\[\s*(?:0x[0-9a-fA-F]+|\d+)\s*\]\s*=")


def identify_preinc_loop_idiom(decompiled_code):
    """Detect Ghidra's pre-increment-array-walk loop decompile artifact.

    Canonical shapes (struct-walker and flat-primitive-walker variants):
        pX = start;
        do {
            pX = (T *)&(pX->field)...;      // advance via struct-field pointer arithmetic
            pX->array[0].field = value;      // constant-index [0] access on advanced pointer
            ...
            pX = pX;                         // self-assignment no-op
        } while (pX != end_marker);

        pX = start;                          // pX is a flat int*/uint* walker
        do {
            pX = pX + N;                     // advance via plain pointer arithmetic
            pX[K] = value;                   // constant-index store on advanced pointer
            ...
            pX = pX;                         // self-assignment no-op
        } while (pX != end_marker);

    The flat-walker variant is the one behind the mp3 scalefactor skip-row bugs:
    the store offset Ghidra emits already folds in the per-iteration advance, so
    the loop writes one element too far (skipping element 0, overrunning the end).

    This pattern is always a Ghidra loop decode artifact. The underlying asm
    varies (compensated offsets with pre-increment, same-address repeated
    writes, or unrolled struct copies), but the decompile is never
    semantically correct as-decoded. Cross-reference the asm and rewrite
    as a straightforward `for (i = 0; i < N; i++)` loop in a .keep.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per detected loop.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n):
        if not _UNROLLED_DO_RE.match(lines[i]):
            continue
        # Collect body up to matching close, capped to keep false-positive risk low.
        body_lines = []
        depth = 1
        for j in range(i + 1, min(i + 40, n)):
            body_lines.append(lines[j])
            depth += lines[j].count("{") - lines[j].count("}")
            if depth == 0:
                break
        body_text = "\n".join(body_lines)
        # Must contain all three markers referring to the same variable.
        advance_match = None
        for bl in body_lines:
            m = _PREINC_ADVANCE_RE.match(bl) or _PREINC_ADVANCE_PTRARITH_RE.match(bl)
            if m:
                advance_match = m
                break
        if not advance_match:
            continue
        var = advance_match.group(1)
        has_array0 = any(
            m.group(1) == var
            for m in _PREINC_ARRAY0_RE.finditer(body_text))
        has_index_store = any(
            _PREINC_INDEX_STORE_RE.match(bl)
            and _PREINC_INDEX_STORE_RE.match(bl).group(1) == var
            for bl in body_lines)
        has_selfassign = any(
            _PREINC_SELFASSIGN_RE.match(bl)
            and _PREINC_SELFASSIGN_RE.match(bl).group(1) == var
            for bl in body_lines)
        if not ((has_array0 or has_index_store) and has_selfassign):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'preinc_loop_idiom',
            'match': "do { var = var(+N|->...); var[K]/arr[0]...; var = var; ...}",
            'text': lines[i].strip()[:120],
            'description': (
                "Ghidra pre-increment-array-walk loop artifact on `{var}` "
                "(struct-field or pointer-arithmetic advance + constant index + "
                "self-assign no-op). Always wrong as-decoded; cross-reference "
                ".asm and rewrite as a straightforward for-loop in a .keep "
                "(watch for the skip-row store-offset bug).").format(
                    var=var),
            'severity': 'moderate',
        })
    return suspects


# Loop-clobbered constant: a do/while loop body reassigns variables that were
# initialized to literal constants before the loop, breaking the loop's own
# math after iteration 0. Ghidra register-spill decompile artifact — the
# compiler kept the "constant" in a register and Ghidra emitted the spill
# stores as reassignments to other locals.
#
# Canonical shape (the requantizeLayer3Samples gain-table init bug):
#     base = (float10)2;            // pre-loop init to literal
#     fVar7 = (float10)0.25;
#     iVar4 = 0;
#     do {
#         fVar5 = (float10)-iVar4 * fVar7;
#         fVar6 = pow(base, (float10)-iVar4 * fVar7);   // base read as math arg
#         base = fVar7;             // <-- swap chain: base clobbered
#         fVar7 = fVar5;            // <-- swap chain: fVar7 clobbered
#         g_MpegRequantGainTable[iVar4] = (double)fVar6;
#         iVar4 = iVar4 + 1;
#     } while (iVar4 < 200);
#
# After iter 0, base==0.25 and fVar7==0, so `pow(0, 0) = 1` for every
# subsequent iter — the table fills with 1s instead of pow(2, -i*0.25).
# The fix is to drop the swap-chain lines (they're spill artifacts) and let
# the loop run with the original constants.
#
# Detector requires the whole signature, not just a swap chain:
# - `do {` loop
# - Two adjacent simple-identifier assignments inside the body of the form
#   `A = B;` then `B = C;` with A, B, C all distinct.
# - `A` is also READ elsewhere in the body (in a non-LHS context like
#   `pow(A, ...)` or `A * x`).
# - Before the loop, `A` was initialized to a literal constant (optionally
#   cast), e.g. `A = (float10)2;` or `A = 0.5;` or `A = 0x1FC00000;`.
#
# Linked-list traversal (`prev = curr; curr = curr->next;`) and array swap
# (`arr[i] = arr[j]; arr[j] = tmp;`) don't match because the RHS isn't a
# bare identifier or the pre-loop literal init isn't there.

_LCC_DO_RE = re.compile(r"^\s*do\s*\{?\s*$")
_LCC_SIMPLE_ASSIGN_RE = re.compile(r"^\s*(\w+)\s*=\s*(\w+)\s*;\s*$")
# Numeric literal — int, float, hex — with optional cast and unary minus.
_LCC_LITERAL_INIT_RE = re.compile(
    r"^\s*(\w+)\s*=\s*"
    # optional cast: `(float10)`, `(int)`, `(unsigned long)`, etc.
    r"(?:\(\s*[\w\s\*]+\s*\)\s*)?"
    # optional unary minus
    r"-?\s*"
    # numeric literal
    r"(?:0[xX][\da-fA-F]+|\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?|\.\d+(?:[eE][+\-]?\d+)?)"
    r"[lLfFuU]*\s*;\s*$"
)


def identify_loop_clobbered_constant(decompiled_code):
    """Detect loops that reassign their own pre-loop-init math constants.

    Ghidra register-spill artifact in numeric init loops: a variable
    initialized to a literal constant before the loop gets reassigned
    inside the loop body via a swap-chain, breaking the loop's math after
    iteration 0. Canonical example is the `requantizeLayer3Samples`
    gain-table init where `base = (float10)2` got clobbered to 0.25 inside
    the loop, making `pow(base, ...)` return 1 for every entry.

    Detection requires all four signals together (see header comment):
    do-loop, adjacent simple-identifier swap chain `A = B; B = C;` with
    distinct identifiers, `A` read elsewhere in the body, and `A`
    initialized to a literal constant before the loop. This combination
    is highly specific to the spill artifact — linked-list traversal and
    array swaps don't match.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, located at the swap-chain `A = B;` line.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    n = len(lines)
    for i in range(n):
        if not _LCC_DO_RE.match(lines[i]):
            continue
        # Collect body lines up to matching close brace, capped to keep
        # false-positive risk low on huge loops.
        body_lines = []
        depth = 1
        body_start = i + 1
        for j in range(body_start, min(body_start + 80, n)):
            body_lines.append(lines[j])
            depth += lines[j].count("{") - lines[j].count("}")
            if depth <= 0:
                break

        # Scan for swap-chain pair: `A = B;` immediately followed by `B = C;`
        # with A, B, C all distinct simple identifiers.
        for k in range(len(body_lines) - 1):
            m1 = _LCC_SIMPLE_ASSIGN_RE.match(body_lines[k])
            m2 = _LCC_SIMPLE_ASSIGN_RE.match(body_lines[k + 1])
            if not (m1 and m2):
                continue
            a, b1 = m1.group(1), m1.group(2)
            b2, c = m2.group(1), m2.group(2)
            if b1 != b2 or a == b1 or a == c or b1 == c:
                continue

            # `A` must be read in the body in a non-LHS context.
            a_word = re.compile(r'\b' + re.escape(a) + r'\b')
            a_read = False
            for idx, bl in enumerate(body_lines):
                if idx == k:
                    continue  # the swap-chain LHS itself doesn't count as a read
                m = _LCC_SIMPLE_ASSIGN_RE.match(bl)
                if m and m.group(1) == a:
                    # `A = something;` — bare LHS, doesn't count as a read.
                    continue
                if a_word.search(bl):
                    a_read = True
                    break
            if not a_read:
                continue

            # `A` must be initialized to a literal constant somewhere in
            # the ~20 lines above the do {.
            init_found = False
            for prev in range(i - 1, max(-1, i - 20), -1):
                pm = _LCC_LITERAL_INIT_RE.match(lines[prev])
                if pm and pm.group(1) == a:
                    init_found = True
                    break
            if not init_found:
                continue

            swap_line_no = body_start + k + 1  # 1-indexed
            suspects.append({
                'line': swap_line_no,
                'type': 'loop_clobbered_constant',
                'match': "do { ...A used in math...; A = B; B = C; ...} "
                         "with pre-loop `A = <literal>;`",
                'text': body_lines[k].strip()[:120],
                'description': (
                    "Loop body reassigns `%s` (initialized to a literal "
                    "constant before the loop) via swap-chain `%s = %s; "
                    "%s = %s;`, corrupting the loop's math after iter 0. "
                    "Ghidra register-spill artifact — drop the swap-chain "
                    "lines in a .keep so the loop runs with its original "
                    "constants." % (a, a, b1, b1, c)),
                'severity': 'moderate',
            })
            break  # one swap-chain hit per loop is enough
    return suspects


# Fast-(inverse-)sqrt bit-trick patterns. The Watcom binary has dedicated
# helpers `fastSqrt_FUN_00431350` and `fastInvSqrt_FUN_0043e2a0`, but the
# approximation is also frequently inlined at call sites. Ghidra's emit
# uses a numeric `(int)X` cast where the asm performs a bit-pattern
# reinterpretation (`MOV EAX, [&X]; SAR EAX, 1; ADD/SUB magic; MOV [&Y]`),
# so on NaN/Inf inputs the cpp triggers UB while the asm is well-defined.
# Detector also matches the bit-cast form some keeps end up with — both
# should ultimately become `Y = fastSqrt(X);` / `Y = fastInvSqrt(X);`.

# Operand between `(int)` and `>> 1`. Either bare tokens (`local_5c`,
# `this_ptr->dist`) or a parenthesized sub-expression up to one nested
# level (`(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)`).
# `[^()]+` alone missed the parenthesized arithmetic form Ghidra emits when
# the sqrt argument is computed inline.
_FS_OPERAND = r"(?:[^()]|\((?:[^()]|\([^()]*\))*\))+?"
# Numeric-cast emit (default Ghidra output):
#   (float)(((int)EXPR >> 1) + g_FastSqrtMagic)
#   (float)(g_FastInvSqrtMagic - ((int)EXPR >> 1))
_FAST_SQRT_NUM_RE = re.compile(
    r"\(\s*float\s*\)\s*\(\s*\(\s*\(\s*int\s*\)" + _FS_OPERAND + r">>\s*1\s*\)\s*"
    r"\+\s*(g_FastSqrtMagic|INT_02d7a7b8)\s*\)")
_FAST_INV_SQRT_NUM_RE = re.compile(
    r"\(\s*float\s*\)\s*\(\s*(g_FastInvSqrtMagic|g_LightAttenuationMax)\s*-\s*"
    r"\(\s*\(\s*int\s*\)" + _FS_OPERAND + r">>\s*1\s*\)\s*\)")
# Bit-cast emit (after a manual keep fix that swaps numeric cast for
# bit-cast — also wants to be replaced with the helper call):
#   *(int *)&DST = (*(int *)&SRC >> 1) + g_FastSqrtMagic;
#   *(int *)&DST = g_FastInvSqrtMagic - (*(int *)&SRC >> 1);
_FAST_SQRT_BIT_RE = re.compile(
    r"\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*=\s*"
    r"\(\s*\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*>>\s*1\s*\)\s*"
    r"\+\s*(g_FastSqrtMagic|INT_02d7a7b8)\s*;")
_FAST_INV_SQRT_BIT_RE = re.compile(
    r"\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*=\s*"
    r"(g_FastInvSqrtMagic|g_LightAttenuationMax)\s*-\s*"
    r"\(\s*\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*>>\s*1\s*\)\s*;")


def identify_fast_sqrt_inline(decompiled_code):
    """Detect inlined fast-sqrt or fast-inverse-sqrt bit-trick patterns.

    The Watcom binary inlines two bit-trick approximations across many call
    sites:

        // fast sqrt:        (bits >> 1) + g_FastSqrtMagic
        // fast inverse sqrt: g_FastInvSqrtMagic - (bits >> 1)

    Ghidra emits these with a numeric `(int)X` cast which is wrong (the asm
    performs a bit-pattern reinterpretation, not a numeric truncation). On
    NaN/Inf inputs `(int)NaN` is UB, which UBSan catches.

    The same operations are exposed as named helper functions:
        fastSqrt_FUN_00431350(float x) -> float
        fastInvSqrt_FUN_0043e2a0(float x) -> float

    Replace inline occurrences with calls to these helpers in a .keep.

    Detects both the numeric-cast Ghidra emit and the bit-cast form a keep
    might rewrite the broken cast into.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per matching line.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    raw_lines = decompiled_code.split('\n')
    # Join wrapped statements: Ghidra wraps the inline sqrt across lines when
    # the operand is long (`(float)(((int)(a*a+b*b+c*c) >> 1) +\n  g_FastSqrtMagic)`),
    # which a line-by-line scan would miss.
    for i, line in _join_wrapped_statements(raw_lines):
        for kind, regex, helper in (
                ('fast_sqrt_inline', _FAST_SQRT_NUM_RE, 'fastSqrt'),
                ('fast_inv_sqrt_inline', _FAST_INV_SQRT_NUM_RE, 'fastInvSqrt'),
                ('fast_sqrt_inline', _FAST_SQRT_BIT_RE, 'fastSqrt'),
                ('fast_inv_sqrt_inline', _FAST_INV_SQRT_BIT_RE, 'fastInvSqrt')):
            if regex.search(line):
                suspects.append({
                    'line': i + 1,
                    'type': kind,
                    'match': line.strip()[:80],
                    'text': line.strip()[:120],
                    'description': (
                        "Inlined {pretty} bit-trick. Replace with "
                        "`{helper}(<expr>)` in a .keep — the helper "
                        "function exists in the binary "
                        "({addr}).".format(
                            pretty=("fast inverse sqrt"
                                    if kind == 'fast_inv_sqrt_inline'
                                    else "fast sqrt"),
                            helper=helper,
                            addr=("FUN_0043e2a0"
                                  if kind == 'fast_inv_sqrt_inline'
                                  else "FUN_00431350"))),
                    'severity': 'moderate',
                })
                break  # at most one suspect per line
    return suspects


# Watcom's float-via-int-compare optimization: a float comparison like
# `if (x >= 20.0f)` gets emitted as `CMP dword ptr [x_bytes], 0x41a00000`
# (a single-instruction raw-bytes compare, where 0x41a00000 is the IEEE 754
# bit pattern of 20.0f). For positive normal floats, bit-pattern integer
# compare is order-equivalent to float compare, so the asm is correct.
#
# Ghidra MISTRANSLATES this idiom as `(int)x < BIT_PATTERN` (using a numeric
# float→int conversion instead of bit reinterpretation). The two forms give
# wildly different results: `(int)20.0 = 20` vs `*(int*)&20.0f = 0x41a00000
# ≈ 1.1e9`. Wrap-around / clamp loops built on the bad cast NEVER FIRE for
# normal-range float values, causing runtime drift past the intended bound
# (e.g. anim_frame indexing one past the end of a texture array → SEGV).
#
# Fix in a .keep: rewrite as a plain float compare against the decoded
# constant, e.g. `if (x >= 20.0f)`.
_BIT_INT_HEX_LHS_RE = re.compile(
    r"0x([0-9a-fA-F]{8})\s*(<=?|>=?)\s*\(\s*int\s*\)\s*[\w\[\]>\-.()]+")
_BIT_INT_HEX_RHS_RE = re.compile(
    r"\(\s*int\s*\)\s*[\w\[\]>\-.()]+\s*(<=?|>=?)\s*0x([0-9a-fA-F]{8})")


def identify_bit_int_float_compare(decompiled_code):
    """Detect Ghidra's float bit-pattern compare mistranslated as `(int)x`.

    Catches lines like:
        if (0x41a00000 < (int)this_ptr->anim_frame) { ... }
        while (0x419fffff < (int)x) { ... }

    Only fires when the hex constant, decoded as IEEE 754, lands in a
    "looks like a real float threshold" range (roughly 0.01 to 1e8). This
    filters out unrelated comparisons where the hex really is intended as
    an int (addresses, sizes, magic IDs).

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts, one per matching line.
    """
    import struct
    suspects = []
    if not decompiled_code:
        return suspects
    # Bit-pattern range for "this looks like a float threshold":
    #   0x3c23d70a ≈ 0.01    (lower bound: small but human-meaningful)
    #   0x4cbebc20 ≈ 1e8     (upper bound: large but still float-shaped)
    # Outside this range, a hex constant is more likely an int (address,
    # size, hash) than an IEEE 754 float.
    BITS_LO = 0x3c23d70a
    BITS_HI = 0x4cbebc20
    lines = decompiled_code.split('\n')
    for i, line in enumerate(lines):
        stripped = line.strip()
        if not stripped or stripped.startswith('//'):
            continue
        for regex in (_BIT_INT_HEX_LHS_RE, _BIT_INT_HEX_RHS_RE):
            m = regex.search(line)
            if not m:
                continue
            # Hex group is at index 1 for LHS regex, index 2 for RHS regex
            hex_str = m.group(1 if regex is _BIT_INT_HEX_LHS_RE else 2)
            bit_pattern = int(hex_str, 16)
            if not (BITS_LO <= bit_pattern <= BITS_HI):
                continue
            float_value = struct.unpack(
                '<f', struct.pack('<I', bit_pattern))[0]
            suspects.append({
                'line': i + 1,
                'type': 'bit_int_float_compare',
                'match': m.group()[:80],
                'text': stripped[:120],
                'description': (
                    "Ghidra mistranslated a Watcom float bit-pattern "
                    "compare as `(int)x`. Hex 0x{hex} is the IEEE 754 "
                    "bit pattern of {val:g}f. Rewrite in a .keep as a "
                    "plain float compare against {val:g}f.".format(
                        hex=hex_str, val=float_value)),
                'severity': 'moderate',
            })
            break  # at most one suspect per line
    return suspects


# Struct-type locals that the missing-cave-copy bug pattern typically affects,
# mapped to their declared sizes in bytes. Only struct types whose size
# matches a detected cave block are eligible candidates — a 48-byte cave
# block can't be the missing copy of a 12-byte `CVector3f` local. Without
# this filter the detector false-positives on output-param locals (e.g.
# `getBoundingBox(&local_c4)` where `local_c4` is correctly populated).
_UNREF_STRUCT_SIZES = {
    'CMatrix3x4f': 48,
    'CMatrix3x3f': 36,
    'CQuaternion4f': 16,
    'CVector3f': 12,
    'CVector3i': 12,
    'CVector2f': 8,
    'CBoundingBox3D': 24,
    'SDamageInfo': 60,
    # Sizes for these are unknown / context-dependent; left out until a
    # concrete case forces us to fill them in.
    # 'CLocation', 'UOrientationVector', 'CBox',
}
_UNREF_DECL_RE = re.compile(
    r"^\s*([A-Z][A-Za-z0-9_]*)\s+([a-zA-Z_]\w*)\s*;\s*$")
_CAVE_SRC_RE = re.compile(r"MOV\s+ECX,\s*dword ptr\s*\[ESI")
_CAVE_DST_RE = re.compile(r"MOV\s+dword ptr\s*\[EDI(?:\s*\+\s*0x[0-9a-f]+)?\]\s*,\s*ECX")
# Orphaned cave-copy source: Ghidra emits the source of a dropped struct copy
# as a raw `(TYPE *)&stack0xXXXXXXXX` (a lost stack slot, §14) rather than a
# declared local. Captures the struct TYPE so it can be matched against the
# eligible (cave-block-sized) types.
_CAVE_STACK0X_SRC_RE = re.compile(
    r"\(([A-Z][A-Za-z0-9_]*)\s*\*\)\s*&\s*stack0x[0-9a-fA-F]+")
# Matrix/struct CONSUMER functions whose struct-pointer FIRST argument is a
# read-only input (they read the matrix and write a *separate* output arg).
# Used by the secondary missing-cave-copy pass: a local passed only as
# `CONSUMER(&local, ...)` is read, never produced. Extend as more read-only
# matrix consumers surface — only add functions whose first pointer arg is
# input-only (a producer/output-first function here would be the sole FP risk).
_CAVE_DEST_CONSUMERS = ('getTranslation', 'matrixToEulerAngles')

# Tertiary missing-cave-copy pass ("stale matrix" read). Unlike passes 1/2 the
# victim local here is fully *initialised* — it just holds an older value than
# it should because the dropped cave copy would have refreshed it. The shape:
#   multiplyMatrix3x4(&a, &b, &OUT);   // OUT = fresh world matrix
#   pos->x = OUT.m[0].z; ...           // OUT decomposed for position
#   matrixToQuaternion(&STALE, &q);    // orientation taken from a DIFFERENT,
#                                      //   earlier-built matrix (STALE != OUT)
# The dropped copy was `STALE = OUT`, so orientation is read pre-transform.
# Since OUT supplies the position and STALE the orientation of the *same*
# object, taking them from different matrices is geometrically inconsistent —
# the tell of an overwrite-dropped cave copy. (CPlatform::processInEditor C/D.)
_MULT_OUT_RE = re.compile(
    r"multiplyMatrix3x4\w*\s*\(\s*&\s*\w+\s*,\s*&\s*\w+\s*,\s*&\s*(\w+)\s*\)")
_ORIENT_CONSUMER_RE = re.compile(
    r"matrixTo(?:Quaternion|Euler)\w*\s*\(\s*(?:\([^)]*\)\s*)?&\s*(\w+)")


def _matrix_is_produced(code, name):
    """True when `name` is written as a matrix-producer output: the first arg
    of a buildMatrix* call or the third (output) arg of multiplyMatrix3x4.
    Distinguishes a *stale* read (produced earlier — flagged by the tertiary
    pass) from an *uninitialised* read (never produced — already covered by the
    primary/secondary passes). `\\s` spans newlines so wrapped calls match."""
    n = re.escape(name)
    return bool(
        re.search(r"buildMatrix\w*\s*\(\s*&\s*" + n + r"\b", code)
        or re.search(r"multiplyMatrix3x4\w*\([^;\n]*,\s*&\s*" + n + r"\s*\)",
                     code))


def _find_cave_copy_blocks(asm_code):
    """Scan assembly for runs of `MOV ECX, [ESI+N] / MOV [EDI+N], ECX` pairs
    that copy a struct out of an output buffer into another stack slot.

    Returns a list of byte-sizes of detected blocks. A run of N consecutive
    matching MOV lines (where N is even — pairs) corresponds to N/2 dword
    moves = N*2 bytes copied. We return runs with 3+ pairs (≥ 12 bytes):
    12-byte CVector3i/CVector3f copies are a common dropped-cave shape (a
    2-pair / 8-byte run is left out as too scalar-move-prone). False positives
    are guarded downstream by identify_missing_cave_copy's ≥2 dead-local +
    size-match cross-check, so a stray short run alone can't flag a function.

    Args:
        asm_code: The function's assembly listing.

    Returns:
        List of integers (byte sizes of cave blocks found, ordered by
        appearance in the asm).
    """
    if not asm_code:
        return []
    consec = 0
    sizes = []
    for line in asm_code.split("\n"):
        if _CAVE_SRC_RE.search(line) or _CAVE_DST_RE.search(line):
            consec += 1
        else:
            if consec >= 6:  # 3 MOV-pairs = 12 bytes minimum (CVector3i/CVector3f)
                sizes.append((consec // 2) * 4)
            consec = 0
    if consec >= 6:
        sizes.append((consec // 2) * 4)
    return sizes


def _count_cave_copy_blocks(asm_code):
    """Backwards-compatible wrapper: count of 48-byte (CMatrix3x4f) cave
    blocks. Kept for any external callers; new code should use
    `_find_cave_copy_blocks` and inspect the returned sizes directly.
    """
    return sum(1 for s in _find_cave_copy_blocks(asm_code) if s >= 48)


_OUT_PARAM_NAME_RE = re.compile(r"(?:^|_)(out|dst|dest|result)",
                                re.IGNORECASE)
_CALLEE_SIG_RE = re.compile(
    r";\s*([A-Za-z_][\w:]*(?:\s*\*)?)\s+([\w.]*_FUN_[0-9a-fA-F]+)\s*\((.*)\)\s*$")


def _split_top_level(s):
    """Split `s` on top-level commas (ignoring commas inside parens)."""
    out, depth, cur = [], 0, []
    for ch in s:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    if cur:
        out.append("".join(cur))
    return out


def _parse_callee_signatures(assembly_code):
    """Build {fun_addr: returned_output_arg_index} from asm XREF comments.

    Each XREF line carries the callee signature, e.g.
    `; CVector3f * ..._FUN_005f7ac0(CVector3f * out_euler, CQuaternion4f * quat_in)`.
    A callee that returns `T *` hands back one of its `T *` parameters — the
    OUTPUT buffer. We record which argument position that is so the caller can
    tell an output buffer (written + returned) from a read-only input. If the
    output param can't be uniquely identified the callee is omitted.
    """
    sigs = {}
    for line in assembly_code.split("\n"):
        if "XREF" not in line or "_FUN_" not in line or "(" not in line:
            continue
        m = _CALLEE_SIG_RE.search(line)
        if not m:
            continue
        rettype, name, params = m.group(1), m.group(2), m.group(3)
        ret_base = rettype.replace(" ", "")
        if "*" not in ret_base:
            continue
        am = re.search(r"_FUN_([0-9a-fA-F]+)", name)
        if not am:
            continue
        parsed = []  # (base_type, name)
        for p in _split_top_level(params):
            toks = p.split()
            if len(toks) < 2:
                parsed.append(("", ""))
                continue
            parsed.append(("".join(toks[:-1]), toks[-1]))
        ptr_idx = [i for i, (t, _n) in enumerate(parsed) if t == ret_base]
        if len(ptr_idx) == 1:
            sigs[am.group(1)] = ptr_idx[0]
        elif len(ptr_idx) > 1:
            named = [i for i in ptr_idx if _OUT_PARAM_NAME_RE.search(parsed[i][1])]
            if len(named) == 1:
                sigs[am.group(1)] = named[0]
    return sigs


def _is_returned_output_buffer(lines, use_idx, var_name, callee_out_arg):
    """True when `var_name`'s single use is `LHS = callee(... &var_name ...)`,
    `&var_name` sits at the callee's returned-output argument position, and the
    captured return `LHS` is read elsewhere.

    Such a local is an output buffer the callee fills and returns; the result
    is read via the `LHS` alias, so the local only LOOKS unreferenced — it is
    not a dropped cave copy. A genuine §20 victim is either a read-only INPUT
    arg (a different, non-output position → not excluded here) or a dead OUTPUT
    whose return is never captured/used (no live `LHS` → not excluded here), so
    this exclusion leaves both halves of a real bug flagged.
    """
    start, end = use_idx, use_idx
    # Reconstruct the whole statement: walk back to its start and forward to
    # the terminating `;` so a call whose args wrap across lines is complete.
    while start > 0:
        prev = lines[start - 1].rstrip()
        if (not prev or prev.endswith((';', '{', '}', ':'))):
            break
        start -= 1
    while end < len(lines) - 1 and ';' not in lines[end]:
        end += 1
    stmt = " ".join(lines[k].strip() for k in range(start, end + 1))
    m = re.match(r"\s*([A-Za-z_]\w*)\s*=\s*([\w:]*_FUN_[0-9a-fA-F]+)\s*\(",
                 stmt)
    if not m:
        return False
    lhs, callee = m.group(1), m.group(2)
    am = re.search(r"_FUN_([0-9a-fA-F]+)", callee)
    out_arg = callee_out_arg.get(am.group(1)) if am else None
    if out_arg is None:
        return False
    # Locate `&var_name`'s argument position in the call.
    open_paren = stmt.find("(", m.end() - 1)
    close_paren = stmt.rfind(")")
    if open_paren < 0 or close_paren < open_paren:
        return False
    args = _split_top_level(stmt[open_paren + 1:close_paren])
    var_re = re.compile(r"&\s*" + re.escape(var_name) + r"\b")
    arg_idx = next((i for i, a in enumerate(args) if var_re.search(a)), None)
    if arg_idx != out_arg:
        return False
    lhs_re = re.compile(r"\b" + re.escape(lhs) + r"\b")
    stmt_idx = set(range(start, end + 1))
    return any(lhs_re.search(line) for j, line in enumerate(lines)
               if j not in stmt_idx)


def identify_missing_cave_copy(decompiled_code, assembly_code):
    """Detect Watcom post-call struct-memcpy blocks ("cave copies") that
    Ghidra failed to translate, leaving struct-type locals uninitialized.

    The signal requires both sources:
    - `.asm` contains ≥ 2 runs of 12+ consecutive MOV-pairs (48-byte struct
      copies — Ghidra's signature for Watcom's inline struct memcpy).
    - `.cpp` decompile has ≥ 2 struct-type locals that are declared and
      passed once by address with no other reference in the function body.

    When both match, the function likely suffers the cave-copy-omission bug:
    some local passed as an input to a later call is actually uninitialized
    at runtime because the pre-call `local_dst = local_src` struct copy was
    dropped by the decompiler. See §20 for the fix pattern.

    Args:
        decompiled_code: The decompiled C pseudocode string.
        assembly_code: The function's assembly listing (from `.asm`).

    Returns:
        List of suspect dicts, one per affected local.
    """
    suspects = []
    if not decompiled_code or not assembly_code:
        return suspects
    # Check asm side first — cheaper and rules out most functions. Only
    # consider candidate locals whose struct size matches an observed
    # cave-block size, since a 48-byte cave block can't be the missing copy
    # of a 12-byte struct.
    cave_sizes = set(_find_cave_copy_blocks(assembly_code))
    if len(cave_sizes) == 0:
        return suspects
    eligible_types = {t for t, sz in _UNREF_STRUCT_SIZES.items()
                      if sz in cave_sizes}
    # A 48-byte CMatrix3x4f cave block also satisfies a CMatrix3x3f-typed
    # destination: matrixToQuaternion/matrixToEulerAngles take a CMatrix3x3f*
    # but are routinely passed the rotation part of a 3x4 multiply output, so
    # Ghidra types the dropped-copy destination as the smaller 3x3 and its
    # 36-byte size never matches the 48-byte cave. (skeledit::importSkeletonFile
    # local_2e4 = local_314, fed to matrixToQuaternion.)
    if 48 in cave_sizes:
        eligible_types.add('CMatrix3x3f')
    if not eligible_types:
        return suspects
    callee_out_arg = _parse_callee_signatures(assembly_code)
    lines = decompiled_code.split('\n')
    decls = []
    for i, line in enumerate(lines):
        m = _UNREF_DECL_RE.match(line)
        if not m:
            continue
        type_name, var_name = m.group(1), m.group(2)
        if type_name not in eligible_types:
            continue
        decls.append((i, type_name, var_name))
    candidates = []
    for decl_line, type_name, var_name in decls:
        pattern = re.compile(r"\b" + re.escape(var_name) + r"\b")
        uses = []
        for j, line in enumerate(lines):
            if j == decl_line:
                continue
            if pattern.search(line):
                uses.append((j, line))
        if len(uses) != 1:
            continue
        use_line_idx, use_line = uses[0]
        if not re.search(r"&\s*" + re.escape(var_name) + r"\b", use_line):
            continue
        if '(' not in use_line and (use_line_idx == 0
                                    or '(' not in lines[use_line_idx - 1]):
            continue
        # Skip output buffers the callee fills and returns (result read via the
        # captured-return alias, not a dropped cave copy). See helper docstring.
        if _is_returned_output_buffer(lines, use_line_idx, var_name,
                                      callee_out_arg):
            continue
        candidates.append((decl_line, type_name, var_name))
    cave_blocks = sum(1 for s in _find_cave_copy_blocks(assembly_code) if s >= 48)
    # Primary pass: two-or-more declared struct locals, each passed once by
    # address with no other reference — the classic dead-output / uninit-input
    # pair. Requires ≥2 to avoid flagging an ordinary single output-param local.
    if len(candidates) >= 2:
        for decl_line, type_name, var_name in candidates:
            suspects.append({
                'line': decl_line + 1,
                'type': 'missing_cave_copy',
                'match': "{type} {var}; ... f(&{var}, ...);".format(
                    type=type_name, var=var_name),
                'text': lines[decl_line].strip()[:120],
                'description': (
                    "Struct-type local `{var}` ({type}) is declared and passed "
                    "once by address with no other reference; the `.asm` has "
                    "{blocks} cave-block struct copies that the decompile "
                    "doesn't reflect. Ghidra dropped a post-call memcpy "
                    "(`local_dst = local_src;`) leaving one local uninitialized "
                    "at runtime. See §20 — typical fix is to pass the real "
                    "source local directly instead of the uninitialized "
                    "scratch.").format(
                        var=var_name, type=type_name, blocks=cave_blocks),
                'severity': 'moderate',
            })
    # Secondary pass: stack0x-orphaned cave source. Ghidra sometimes emits the
    # cave-copy SOURCE as a raw `(TYPE *)&stack0xXXXXXXXX` (a lost stack slot,
    # §14) instead of a declared local, so the pair logic above can't see it.
    # The dropped copy then leaves a *declared* destination local of the same
    # eligible type that is read but never produced. We can't tell a producer
    # output-param write (`build(&local, ..)`, `multiply(.., &local)`) from a
    # read just by seeing `&local`, so to stay FP-free we flag a destination
    # ONLY when EVERY one of its uses is `CONSUMER(&local, ...)` — `local` as
    # the read-only FIRST argument of a known matrix consumer. A local that is
    # ever a producer output (or used any other way) is excluded. Gated by an
    # orphan `(eligible TYPE *)&stack0x` source + matching cave block.
    # Canonical: CStranger::renderOpaque hat transform —
    #   multiply(.., (CMatrix3x4f *)&stack0x..); getTranslation(&local_13c, ..);
    #   matrixToEulerAngles(&local_13c, ..)  — local_13c read, never produced.
    orphan_types = {t for t in _CAVE_STACK0X_SRC_RE.findall(decompiled_code)
                    if t in eligible_types}
    if orphan_types:
        flagged = {s['line'] for s in suspects}
        consumer_alt = "|".join(_CAVE_DEST_CONSUMERS)
        for decl_line, type_name, var_name in decls:
            if type_name not in orphan_types or (decl_line + 1) in flagged:
                continue
            var_re = re.compile(r"\b" + re.escape(var_name) + r"\b")
            consumer_re = re.compile(
                r"(?:" + consumer_alt + r")\w*\s*\(\s*&\s*"
                + re.escape(var_name) + r"\b")
            uses = 0
            all_consumer = True
            for j, line in enumerate(lines):
                if j == decl_line:
                    continue
                occ = len(var_re.findall(line))
                if occ == 0:
                    continue
                uses += occ
                # Every occurrence on this line must be a consumer-first-arg
                # `&var`. If the count of consumer matches < total occurrences,
                # `var` is used some other way (producer output, field access,
                # bare use) → not a pure read-only destination.
                if len(consumer_re.findall(line)) != occ:
                    all_consumer = False
                    break
            if all_consumer and uses >= 1:
                suspects.append({
                    'line': decl_line + 1,
                    'type': 'missing_cave_copy',
                    'match': "{type} {var}; (read-only by consumer, never"
                             " produced; orphan stack0x cave source)".format(
                                 type=type_name, var=var_name),
                    'text': lines[decl_line].strip()[:120],
                    'description': (
                        "Struct-type local `{var}` ({type}) is only ever read "
                        "(passed as the first arg of a matrix consumer) and is "
                        "never produced, while a matching {type} cave-block copy "
                        "exists in the `.asm` and the decompile has an orphaned "
                        "`(... *)&stack0xXXXX` cave-copy source. Ghidra dropped "
                        "the post-call memcpy and emitted its source as a lost "
                        "stack slot, leaving `{var}` uninitialised at runtime. "
                        "See §20 — fix by directing the producing call's output "
                        "into `{var}` (or restoring the `{var} = <src>;` "
                        "copy).").format(var=var_name, type=type_name),
                    'severity': 'moderate',
                })
    # Tertiary pass: "stale matrix" read by an orientation consumer (an
    # overwrite-dropped cave copy whose destination was pre-written). See the
    # comment on `_MULT_OUT_RE` above. Gated on a 48-byte (CMatrix3x4f) cave
    # block so it only fires where Watcom emitted a matrix copy.
    if 48 in cave_sizes:
        flagged_lines = {s['line'] for s in suspects}
        consumers = []  # (line_idx, stale_matrix_name)
        for j, line in enumerate(lines):
            mc = _ORIENT_CONSUMER_RE.search(line)
            if mc:
                consumers.append((j, mc.group(1)))
        for i, line in enumerate(lines):
            mm = _MULT_OUT_RE.search(line)
            if not mm:
                continue
            out = mm.group(1)
            # OUT must be decomposed element-wise (its translation extracted).
            if not re.search(r"\b" + re.escape(out) + r"\.m\[", decompiled_code):
                continue
            # OUT must never itself feed an orientation consumer — otherwise the
            # fresh matrix's orientation IS taken and there is no stale read.
            if any(stale == out for _, stale in consumers):
                continue
            # First orientation consumer shortly after the multiply.
            stale, cons_idx = None, None
            for j, st in consumers:
                if i < j <= i + 25:
                    stale, cons_idx = st, j
                    break
            if stale is None or stale == out:
                continue
            if (cons_idx + 1) in flagged_lines:
                continue
            # STALE must be a real, earlier-produced matrix (stale, not uninit;
            # the uninit case is the primary/secondary passes' job).
            if not _matrix_is_produced(decompiled_code, stale):
                continue
            suspects.append({
                'line': cons_idx + 1,
                'type': 'missing_cave_copy',
                'match': "matrixTo...(&{stale}) reads stale matrix; cave copy "
                         "`{stale} = {out}` (multiply output) was dropped".format(
                             stale=stale, out=out),
                'text': lines[cons_idx].strip()[:120],
                'description': (
                    "Orientation consumer reads matrix `{stale}` but the "
                    "adjacent multiply output `{out}` — already decomposed for "
                    "position (`{out}.m[..]`) just above — is the matrix that "
                    "should feed it. Watcom copied `{out}` into `{stale}` after "
                    "the multiply (a 48-byte cave block in the `.asm`); Ghidra "
                    "dropped that copy, so `{stale}` holds a stale pre-transform "
                    "value. Taking position from `{out}` and orientation from a "
                    "different matrix is geometrically inconsistent. See §20 — "
                    "fix by passing `&{out}` to the consumer (or restoring the "
                    "`{stale} = {out};` copy).").format(stale=stale, out=out),
                'severity': 'moderate',
            })
    return suspects


# Watcom emits inline `memset` as a `REP STOS{B,W,D}` instruction. Ghidra
# unrolls the REP prefix into a countdown for-loop in the decompile:
#     for (; iVar != 0; iVar = iVar + -1) { *p = const; p = p + 1; }
# The source-side pattern is too generic to safely match (any element-wise
# clear loop looks the same), so we anchor on the asm: `STOS{B,W,D}.REP`
# with the `.REP` suffix (Ghidra's notation for a REP-prefixed string op) is
# unambiguous evidence of an inline memset. A bare `STOSD ES:EDI` without
# `.REP` is a single store and not flagged.
_REP_STOS_RE = re.compile(r'\bSTOS([BWD])\.REP\b', re.IGNORECASE)
# Ghidra asm format: `    INSTRUCTION    ; ADDRESS [| optional comment]`
# Matches the instruction address in either assembly representation:
#   * raw `generate_assembly_code_rich` form `// 0047a929: MOVSD.REP ...`
#     (address prefix) — this is what the asm-side detectors actually run
#     on at export time (`result.assembly_code`).
#   * reformatted on-disk `.asm` form `MOVSD.REP ... ; 0047a929`
#     (address suffix) — used by ad-hoc tooling reading the file.
# `search` returns the leftmost match, so the `// ADDR:` prefix is preferred
# over any hex that appears inside a trailing `; comment` (e.g. a CALL line
# whose signature comment contains a `0x...` target address).
_ASM_LINE_ADDR_RE = re.compile(r'(?:^\s*//\s*|;\s*)([0-9a-fA-F]{6,8})\b')


def _collect_rep_sites(assembly_code, rep_re):
    """Return a list of (line_index, size_letter, raw_line) for each
    `.REP`-suffixed string instruction matched by `rep_re`. Skips comments
    and blanks. line_index is 0-based into the .split('\\n') list.
    """
    sites = []
    if not assembly_code:
        return sites
    for i, line in enumerate(assembly_code.split('\n')):
        stripped = line.strip()
        if not stripped or stripped.startswith(';'):
            continue
        m = rep_re.search(line)
        if not m:
            continue
        sites.append((i, m.group(1).upper(), line))
    return sites


def _suppress_byte_tails(sites, lines, max_intervening=5):
    """Return the set of indices in `sites` whose suspect is suppressed
    because the site is the byte-tail of a preceding dword/word REP.

    Watcom emits a variable-count REP as a `{D,W}` chunk loop followed by
    a `B` tail loop:
        MOV ECX, n
        SHR ECX, 2
        MOVSD.REP
        MOV CL, n_low
        AND CL, 3
        MOVSB.REP
    The MOVSB.REP is not an independent memcpy — it's the tail of the
    preceding MOVSD.REP. Same for STOSD/STOSW + STOSB. Pair them so the
    detector reports one suspect per logical memcpy/memset site.
    """
    paired = set()
    for i in range(len(sites) - 1):
        cur_line_idx, cur_size, _ = sites[i]
        nxt_line_idx, nxt_size, _ = sites[i + 1]
        if cur_size not in ('D', 'W') or nxt_size != 'B':
            continue
        intervening = 0
        for j in range(cur_line_idx + 1, nxt_line_idx):
            s = lines[j].strip()
            if s and not s.startswith(';'):
                intervening += 1
        if intervening <= max_intervening:
            paired.add(i + 1)
    return paired


# Ghidra emits `/* WARNING: Removing unreachable block (ram,0xADDR) */` for
# each basic block it proved dead (e.g. a swap guarded by `CMP EAX,EAX; JLE`
# that always skips it — the faithful no-op sort in sortPolygonsByTexture).
# A `REP MOVS/STOS` is a hardware loop, so Ghidra always models it as its own
# basic block — meaning an unreachable REP's instruction address is itself the
# block-start address listed here. Suppressing asm-side memcpy/memset suspects
# at these addresses keeps the dead-code copies from being flagged on a keep
# that correctly omits them.
_UNREACHABLE_BLOCK_RE = re.compile(
    r'WARNING:\s*Removing unreachable block\s*\(ram,0x([0-9a-fA-F]+)\)',
    re.IGNORECASE)


def _normalize_addr(addr):
    """Lowercase, strip an optional 0x prefix and leading zeros (keep one)."""
    a = addr.lower()
    if a.startswith('0x'):
        a = a[2:]
    return a.lstrip('0') or '0'


def extract_unreachable_block_addrs(decompiled_code):
    """Return the set of normalized addresses Ghidra removed as unreachable.

    Parsed from the `WARNING: Removing unreachable block (ram,0xADDR)`
    comments at the top of the decompile. Used to suppress asm-side
    memcpy/memset suspects that live in provably-dead blocks.
    """
    if not decompiled_code:
        return set()
    return {_normalize_addr(m.group(1))
            for m in _UNREACHABLE_BLOCK_RE.finditer(decompiled_code)}


def identify_unrolled_memset_blocks(assembly_code, unreachable_addrs=None):
    """Detect Watcom `REP STOS{B,W,D}` (inline memset) instructions.

    Each `.REP`-suffixed STOS in the asm corresponds to a countdown
    for-loop in the decompile that should collapse to a `memset()` call in
    a `.keep`. The B/W/D variant tells you the element stride (1/2/4).

    Pairing: a `STOSD/STOSW.REP` followed within a few instructions by
    `STOSB.REP` is the canonical Watcom variable-count emit (chunk loop
    plus byte tail) — counted as one site, not two.

    Args:
        assembly_code: The function's assembly listing (from `.asm`).

    Returns:
        List of suspect dicts, one per `STOS.REP` site after pairing. The
        reported `line` is the .asm line number (the .cpp doesn't have a
        unique anchor — the user finds the matching countdown for-loop in
        the function body and replaces it with
        `memset(dst, value, count * stride)`).
    """
    suspects = []
    if not assembly_code:
        return suspects
    unreachable_addrs = unreachable_addrs or set()
    lines = assembly_code.split('\n')
    sites = _collect_rep_sites(assembly_code, _REP_STOS_RE)
    paired = _suppress_byte_tails(sites, lines)
    for idx, (line_idx, size_letter, line) in enumerate(sites):
        if idx in paired:
            continue
        stride = {'B': 1, 'W': 2, 'D': 4}[size_letter]
        addr_m = _ASM_LINE_ADDR_RE.search(line)
        addr = addr_m.group(1) if addr_m else '????????'
        if addr_m and _normalize_addr(addr_m.group(1)) in unreachable_addrs:
            continue
        suspects.append({
            'line': line_idx + 1,
            'type': 'unrolled_memset',
            'match': 'STOS%s.REP' % size_letter,
            'text': line.strip()[:120],
            'description': (
                'Watcom inline memset (REP STOS%s at %s, %d-byte stride). '
                'Ghidra reconstructs this as a countdown for-loop with '
                'element-by-element writes; replace the loop with '
                'memset(dst, value, count * %d) in a .keep.' % (
                    size_letter, addr, stride, stride)),
            'severity': 'moderate',
        })
    return suspects


# Same idea as `STOS.REP`, applied to `MOVS{B,W,D}.REP`. Each is an inline
# `memcpy`/`memmove`. Ghidra reconstructs them as countdown for-loops with
# either typed pointer dereferences (`*(uint *)dst = *(uint *)src;`) or
# element-by-element field/index assignments (`dst->m[0].w = src->m[0].w;`).
# The source-side `unrolled_memcpy` detector catches the first shape via
# `_UNROLLED_MEMCPY_STORE_RE` but misses the second when the LHS/RHS has an
# arrow or index — in that case the suspect lands as `pointer_cast` only.
# The asm-based detector here catches *all* REP MOVS sites unambiguously.
_REP_MOVS_RE = re.compile(r'\bMOVS([BWD])\.REP\b', re.IGNORECASE)

# Watcom call-ABI struct-by-value pass fingerprint. The compiler lowers
# pass-by-value of a struct argument to:
#     SUB ESP, byte_size       ; allocate outgoing-args slot
#     MOV EDI, ESP             ; EDI -> outgoing-args region
#     MOV ECX, dword_count     ; size in dwords
#     LEA/MOV ESI, src
#     MOVS{B,W,D}.REP
#     [optionally chain more args, sharing EDI advance through the chain]
#     CALL target
# The unique signature is `MOV EDI, ESP` (or `LEA EDI, [ESP+const]`) — a
# real user-level memcpy never aims at the freshly-allocated outgoing-args
# slot, so EDI=ESP is exclusive to the call-ABI lowering. Suppressing on
# this signal eliminates pass-by-value false positives from the asm-side
# `unrolled_memcpy` detector without risking real memcpys.
_RE_MOV_EDI_FROM_ESP = re.compile(
    r'\b(?:MOV\s+EDI\s*,\s*ESP\b|LEA\s+EDI\s*,\s*\[\s*ESP\b)',
    re.IGNORECASE)
# Any instruction that re-points EDI at something other than ESP — these
# break the EDI=ESP-relative chain when scanning backward. MOVSD/MOVSW/MOVSB
# (with or without REP) advance EDI but preserve the chain, so they're not
# in this list.
_RE_EDI_REPOINTED = re.compile(
    r'\b(?:MOV\s+EDI\s*,(?!\s*ESP\b)|LEA\s+EDI\s*,(?!\s*\[\s*ESP\b)|'
    r'POP\s+EDI\b|XOR\s+EDI\b|ADD\s+EDI\s*,|SUB\s+EDI\s*,|'
    r'INC\s+EDI\b|DEC\s+EDI\b)',
    re.IGNORECASE)


def _walkback_finds_edi_esp(lines, start_idx, max_instrs):
    """Walk backward from start_idx-1 through real asm instructions, looking
    for `MOV EDI, ESP` (or `LEA EDI, [ESP+const]`) before any EDI-repointing
    instruction. Returns True on hit, False on chain-break or window-exhausted.
    """
    count = 0
    j = start_idx - 1
    while j >= 0 and count < max_instrs:
        s = lines[j].strip()
        if s and not s.startswith(';'):
            count += 1
            if _RE_MOV_EDI_FROM_ESP.search(s):
                return True
            if _RE_EDI_REPOINTED.search(s):
                return False
        j -= 1
    return False


def _is_call_abi_pass_by_value(rep_line_idx, lines, max_instrs=24,
                                cave_max_instrs=40):
    """Check if a `MOVS.REP` at lines[rep_line_idx] is a Watcom call-ABI
    struct-by-value push (suppress) rather than a user-level memcpy (flag).

    Two probes, both looking for `MOV EDI, ESP` without an intervening
    EDI-repoint:

    1. Linear walkback through the preceding `max_instrs` real instructions.
       Catches the simple case where the SUB ESP / MOV EDI ESP / MOVSD.REP
       block is contiguous with the call site.

    2. Cave-fixup walkback. Some MOVSD.REP sites are reached only via JMP
       from a far cave block (post-`fix_movsd_caves.py`); the EDI=ESP setup
       lives in the cave, not in linear order. If the MOVSD.REP's address
       is the target of any `JMP 0xADDR` in the asm, walk back from each
       such JMP source up to `cave_max_instrs` (caves typically run 25-30
       instructions before the JMP-back).

    Real user memcpys aim EDI at a stack local (`LEA EDI, [EBP-N]`) or a
    heap pointer (`MOV EDI, [some_mem]`) — both hit `_RE_EDI_REPOINTED`
    first and break the chain, so this rule is FP-safe.
    """
    if _walkback_finds_edi_esp(lines, rep_line_idx, max_instrs):
        return True

    # Cave-fixup probe: find JMPs targeting this MOVSD.REP's address and
    # walk back from each source.
    addr_m = _ASM_LINE_ADDR_RE.search(lines[rep_line_idx])
    if not addr_m:
        return False
    addr = addr_m.group(1).lower()
    addr_norm = addr.lstrip('0') or '0'
    jmp_re = re.compile(
        r'\bJMP\s+0x0*' + addr_norm + r'\b', re.IGNORECASE)
    for i, line in enumerate(lines):
        if i == rep_line_idx:
            continue
        if jmp_re.search(line):
            if _walkback_finds_edi_esp(lines, i, cave_max_instrs):
                return True
    return False


def identify_unrolled_memcpy_blocks(assembly_code, unreachable_addrs=None):
    """Detect Watcom `REP MOVS{B,W,D}` (inline memcpy/memmove) instructions.

    Complements the source-side `identify_unrolled_memcpy_loops` — that
    detector requires `*ptr = *src` style stores, so it misses cases where
    the unrolled loop walks via `dst->field` or `dst[i]` accesses. The asm
    fingerprint `MOVS{B,W,D}.REP` is unambiguous regardless of how Ghidra
    rendered the body.

    Pairing: a `MOVSD/MOVSW.REP` followed within a few instructions by
    `MOVSB.REP` is the canonical Watcom variable-count emit (chunk loop
    plus byte tail) — counted as one site, not two.

    Suppression: sites whose backward scan finds `MOV EDI, ESP` (without
    an intervening EDI re-point) are Watcom call-ABI struct-by-value
    pushes, not user-level memcpys. The keep already expresses these
    correctly via direct by-value passes, so flagging them is a false
    positive. See `_is_call_abi_pass_by_value`.

    Args:
        assembly_code: The function's assembly listing (from `.asm`).

    Returns:
        List of suspect dicts, one per `MOVS.REP` site after pairing and
        call-ABI suppression. The reported `line` is the .asm line
        number; the user finds the matching countdown for-loop (or
        unrolled field-by-field copy) in the function body and replaces
        it with `memcpy(dst, src, count * stride)` or a struct assignment.
    """
    suspects = []
    if not assembly_code:
        return suspects
    unreachable_addrs = unreachable_addrs or set()
    lines = assembly_code.split('\n')
    sites = _collect_rep_sites(assembly_code, _REP_MOVS_RE)
    paired = _suppress_byte_tails(sites, lines)
    for idx, (line_idx, size_letter, line) in enumerate(sites):
        if idx in paired:
            continue
        if _is_call_abi_pass_by_value(line_idx, lines):
            continue
        stride = {'B': 1, 'W': 2, 'D': 4}[size_letter]
        addr_m = _ASM_LINE_ADDR_RE.search(line)
        addr = addr_m.group(1) if addr_m else '????????'
        if addr_m and _normalize_addr(addr_m.group(1)) in unreachable_addrs:
            continue
        suspects.append({
            'line': line_idx + 1,
            'type': 'unrolled_memcpy',
            'match': 'MOVS%s.REP' % size_letter,
            'text': line.strip()[:120],
            'description': (
                'Watcom inline memcpy (REP MOVS%s at %s, %d-byte stride). '
                'Ghidra reconstructs this as a countdown for-loop with '
                'element-by-element copies; replace the loop with '
                'memcpy(dst, src, count * %d) or a struct assignment in a '
                '.keep.' % (size_letter, addr, stride, stride)),
            'severity': 'moderate',
        })
    return suspects


# =============================================================================
# Struct-field array overrun (#15 adjacent-field artifact, struct-member form)
# =============================================================================
#
# Watcom 1-based indexing emits `[base + index]` where `base` is the address of
# the field BEFORE the real target and the index compensates by overrunning into
# the next field. The global form (`(&g_Scalar)[idx]`) is caught by
# identify_wrong_global_suspects; this catches the STRUCT-MEMBER form
# (`obj->earlier_field[const + var]`) that lands in the following field — e.g.
# `pick->cancel_button_text[uVar4 + 99]` where cancel_button_text is char[100]
# and the real target is the adjacent search_text_buffer.
#
# Type-aware: needs a struct layout map (field offsets/lengths/array bounds), so
# it is inert without one and only fires at export time / when test_suspects
# builds the map from data_types.json.

_struct_layout_cache = None

_SFO_ACCESS_RE = re.compile(r'\b([A-Za-z_]\w*)\s*(?:->|\.)\s*([A-Za-z_]\w*)\s*\[')
_SFO_SIG_RE = re.compile(r'//\s*Signature:.*?\((.*)\)')
_SFO_DECL_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)\s*\*+\s*([A-Za-z_]\w*)\s*;\s*$')
_SFO_VALDECL_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;\s*$')
_SFO_PTR_PARAM_RE = re.compile(r'^([A-Za-z_]\w*)\s*\*+\s*([A-Za-z_]\w*)$')
_SFO_VAL_PARAM_RE = re.compile(r'^([A-Za-z_]\w*)\s+([A-Za-z_]\w*)$')
_SFO_INT_RE = re.compile(r'^(0x[0-9a-fA-F]+|\d+)$')
_SFO_IDENT_RE = re.compile(r'[A-Za-z_]\w*')
# Statement keywords that the value-declaration regex would otherwise treat
# as a "type" — e.g. `return this_ptr;` parses as type=`return`, var=`this_ptr`
# and clobbers the variable's real (param/decl) type. Guard against that.
_SFO_NON_TYPE_KEYWORDS = frozenset((
    'return', 'goto', 'break', 'continue', 'delete', 'case', 'do', 'else',
    'sizeof', 'new', 'throw',
))
# A cast-deref whose inner expression is a pointer plus a byte offset:
# `*(int *)(p + 0x3f1bc)`. We balanced-extract the inner expr after the final
# '(' the regex stops on, then resolve the pointer to a struct field.
_SFO_DEREF_START_RE = re.compile(
    r'\*\s*\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*\(')
# A simple `LOCAL = <rhs>;` assignment, used to map a local back to the struct
# field its pointer was derived from (the two-step base-shift form).
_SFO_LOCAL_ASSIGN_RE = re.compile(r'^([A-Za-z_]\w*)\s*=\s*(.+?);\s*$')


def build_struct_layout_map(data_types_path):
    """Parse data_types.json into a per-struct field layout.

    Returns dict: struct_name -> list of field dicts sorted by offset, each
    {'name', 'offset', 'len', 'n'} where 'n' is the first array-dimension
    element count (None for non-array fields). Returns {} if the file is
    missing or unreadable.
    """
    try:
        with open(data_types_path) as f:
            data = json.load(f)
    except (IOError, ValueError):
        return {}
    layout = {}
    for section in ('structs', 'unions'):
        for entry in data.get(section, []):
            name = entry.get('name')
            fields = entry.get('fields')
            if not name or not fields:
                continue
            parsed = []
            for fld in fields:
                fname = fld.get('name')
                offset = fld.get('offset')
                flen = fld.get('len')
                if fname is None or offset is None or flen is None:
                    continue
                ftype = fld.get('type', '') or ''
                dim = re.search(r'\[(\d+)\]', ftype)
                # Base type name: strip array dims, pointer stars, and a
                # leading struct/union/enum keyword, leaving e.g.
                # 'CPodDirectoryEntry' from 'CPodDirectoryEntry *' /
                # 'SNetworkAddr' from 'SNetworkAddr' / 'char' from 'char[20]'.
                base = re.sub(r'\[.*$', '', ftype)
                base = base.replace('*', '').strip()
                base = re.sub(r'^(?:struct|union|enum)\s+', '', base)
                parsed.append({
                    'name': fname,
                    'offset': offset,
                    'len': flen,
                    'n': int(dim.group(1)) if dim else None,
                    'type': base,
                })
            parsed.sort(key=lambda fl: fl['offset'])
            layout[name] = parsed
    return layout


def get_struct_layout_map(pseudocode_src_dir):
    """Cached struct layout map, located relative to pseudocode_src_dir.

    Mirrors dat_report.build_struct_size_cache's path derivation:
    pseudocode_src_dir is .../<exe>/pseudocode/src, data_types.json is at
    .../<exe>/data_types/data_types.json.
    """
    global _struct_layout_cache
    if _struct_layout_cache is not None:
        return _struct_layout_cache
    base = pseudocode_src_dir
    while base and os.path.basename(base) != 'pseudocode':
        base = os.path.dirname(base)
    layout = {}
    if base:
        path = os.path.join(os.path.dirname(base), 'data_types', 'data_types.json')
        layout = build_struct_layout_map(path)
    _struct_layout_cache = layout
    return layout


def _sfo_resolve_var_types(code):
    """Map identifier -> declared struct type name (pointer/value, deref'd)."""
    var_types = {}
    lines = code.split('\n')
    for line in lines:
        m = _SFO_SIG_RE.search(line)
        if not m:
            continue
        for part in m.group(1).split(','):
            part = part.strip()
            pm = _SFO_PTR_PARAM_RE.match(part) or _SFO_VAL_PARAM_RE.match(part)
            if pm:
                var_types[pm.group(2)] = pm.group(1)
        break
    for line in lines:
        m = _SFO_DECL_RE.match(line) or _SFO_VALDECL_RE.match(line)
        if m and m.group(1) not in _SFO_NON_TYPE_KEYWORDS:
            var_types[m.group(2)] = m.group(1)
    return var_types


def resolve_access_path_type(path, var_types, layout):
    """Resolve a pure access-path expression to the struct type at its end.

    Walks `root[->|.]field[idx]...` using `var_types` (identifier -> declared
    type) for the root and `layout` (struct -> [{name, type, ...}]) for each
    field step. Array subscripts `[..]` leave the type unchanged (an element
    of a `T[]` / `T *` field is a `T`, which is what the field's base type
    already names). Returns the final type name, or None if any step can't be
    resolved (unknown root, paren-wrapped sub-path, missing field, etc.).
    Conservative by design: None means "don't know", so callers should not
    suppress on a None result.
    """
    if not path or not layout:
        return None
    p = re.sub(r'\s+', '', path)
    if p[:1] == '&':
        p = p[1:]
    m = re.match(r'[A-Za-z_]\w*', p)
    if not m:
        return None
    cur = var_types.get(m.group(0))
    if not cur:
        return None
    pos = m.end()
    while pos < len(p):
        ch = p[pos]
        if ch == '[':
            depth = 0
            j = pos
            while j < len(p):
                if p[j] == '[':
                    depth += 1
                elif p[j] == ']':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if j >= len(p):
                return None
            pos = j + 1
        elif p[pos:pos + 2] == '->' or ch == '.':
            pos += 2 if p[pos:pos + 2] == '->' else 1
            fm = re.match(r'[A-Za-z_]\w*', p[pos:])
            if not fm:
                return None
            flds = layout.get(cur)
            if not flds:
                return None
            ftype = None
            for fl in flds:
                if fl.get('name') == fm.group(0):
                    ftype = fl.get('type')
                    break
            if not ftype:
                return None
            cur = ftype
            pos += fm.end()
        else:
            # Leading '(', '*', or any other token -> give up (conservative).
            return None
    return cur


def _sfo_index_const(idx_expr):
    """Return (const_sum, has_var) for the top-level additive index expr.

    Only pure integer-literal terms joined by top-level '+' count toward the
    constant; any term containing an identifier marks has_var. Terms with '*'
    or nested arithmetic are treated as variable, not added to the constant.
    """
    const = 0
    has_var = False
    depth = 0
    term = ''
    terms = []
    for ch in idx_expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch == '+' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    for t in terms:
        t = t.strip()
        if not t:
            continue
        if _SFO_INT_RE.match(t):
            const += int(t, 0)
        elif _SFO_IDENT_RE.search(t):
            has_var = True
    return const, has_var


def _sfo_strip_cast(expr):
    """Strip one leading C pointer cast (`(char *)`, `(int *)`) from expr."""
    return re.sub(r'^\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*', '', expr.strip()).strip()


def _sfo_top_terms(expr):
    """Split an expression into its top-level '+'/'-' separated terms."""
    depth, term, terms = 0, '', []
    for ch in expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch in '+-' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    return [t.strip() for t in terms if t.strip()]


def _sfo_split_ptr_const(expr):
    """Split a top-level '+'-joined pointer expression into (base, const_sum).

    const_sum sums the pure integer-literal terms; base is the single remaining
    non-literal term (the pointer). Returns None unless exactly one non-literal
    term remains. Only '+' is treated as the join — a '-' would be a negative
    offset (a different artifact class), so it stays glued to its term and the
    term fails to resolve as a field (no false flag).
    """
    depth, term, terms = 0, '', []
    for ch in expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch == '+' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    const, base_terms = 0, []
    for t in terms:
        t = t.strip()
        if not t:
            continue
        if _SFO_INT_RE.match(t):
            const += int(t, 0)
        else:
            base_terms.append(t)
    if len(base_terms) != 1:
        return None
    return (base_terms[0], const)


def _sfo_field_extent(path, var_types, layout):
    """Resolve a field-access path to (root_struct, byte_offset, length, addr).

    `byte_offset` is the position of the path's final field relative to the
    root variable's struct; `length` is that field's size; `addr` is True when
    the expression genuinely denotes the field's *address* — either it had a
    leading '&' or the final field is an array (which decays to its address).
    `addr` is False for a bare scalar/pointer field, where `field + N` is value
    arithmetic / a walk of the *pointed-to* buffer, NOT a struct base-shift —
    callers must not flag those. Handles a leading pointer cast and parens that
    merely group a sub-path (`(a->b).c`). Returns None on any unresolved
    root/field, a subscript, or an unexpected token (None = "don't know").
    """
    if not path or not layout:
        return None
    p = _sfo_strip_cast(path)
    had_amp = p[:1] == '&'
    if had_amp:
        p = p[1:].strip()
    if '(' in p:
        # Grouping parens around a sub-path are safe to drop ('(a->b).c' ==
        # 'a->b.c'); bail if real arithmetic (not the '-' of '->') leaks in.
        bare = p.replace('(', '').replace(')', '')
        if re.search(r'[+\-*/%]', bare.replace('->', '')):
            return None
        p = bare
    p = re.sub(r'\s+', '', p)
    m = re.match(r'[A-Za-z_]\w*', p)
    if not m:
        return None
    root_struct = var_types.get(m.group(0))
    if not root_struct:
        return None
    cur = root_struct
    offset, final_len, final_is_array, pos = 0, None, False, m.end()
    while pos < len(p):
        if p[pos:pos + 2] == '->' or p[pos] == '.':
            pos += 2 if p[pos:pos + 2] == '->' else 1
            fm = re.match(r'[A-Za-z_]\w*', p[pos:])
            if not fm:
                return None
            flds = layout.get(cur)
            if not flds:
                return None
            fld = next((fl for fl in flds if fl['name'] == fm.group(0)), None)
            if fld is None:
                return None
            offset += fld['offset']
            final_len = fld['len']
            final_is_array = fld.get('n') is not None
            cur = fld.get('type')
            pos += fm.end()
        else:
            # A subscript or any other token: bail (conservative).
            return None
    if final_len is None:
        return None
    return (root_struct, offset, final_len, had_amp or final_is_array)


def _sfo_field_at_offset(layout, struct_name, off):
    """Return the field of `struct_name` whose [offset, offset+len) contains
    `off` (innermost/smallest when several overlap, e.g. unions), or None."""
    flds = layout.get(struct_name)
    if not flds:
        return None
    best = None
    for fl in flds:
        if fl['offset'] <= off < fl['offset'] + fl['len']:
            if best is None or fl['len'] < best['len']:
                best = fl
    return best


def _sfo_field_base_deref_overruns(code, var_types, layout, seen):
    """Detect `*(T *)(p + CONST)` where `p` is derived from a struct field and
    `field_offset + CONST` lands in a *different* field of the same struct.

    This is the raw-deref sibling of the array-index #15 case: Ghidra anchored
    the pointer on the wrong field (typically a leading `char[N]` at a small
    offset) and reaches a far field via a large byte constant. It compiles and
    runs but forms an out-of-array pointer (UBSan `index N out of bounds`).

    Both the direct form `*(int *)((char *)obj->field + 0xN)` and the two-step
    form `p = obj.field + var; *(int *)(p + 0xN);` are covered — for the latter
    we first map each `LOCAL = <field-path> + ...` to that field.

    Low false-positive by construction: the base must resolve to a real struct
    field, CONST must exceed that field's length (so it isn't ordinary in-field
    access), and CONST must land inside a *named sibling field* of the same
    struct (so it isn't arbitrary pointer math or a past-the-struct write).
    """
    out = []
    if not layout:
        return out
    # Map locals to the field their pointer was derived from.
    local_field_base = {}
    for line in code.split('\n'):
        s = line.strip()
        if s.startswith('//') or s.startswith('/*') or s.startswith('*'):
            continue
        am = _SFO_LOCAL_ASSIGN_RE.match(s)
        if not am:
            continue
        for term in _sfo_top_terms(am.group(2)):
            ext = _sfo_field_extent(term, var_types, layout)
            if ext:
                local_field_base[am.group(1)] = ext
                break
    # Scan cast-derefs.
    for line_no, line in enumerate(code.split('\n'), 1):
        s = line.strip()
        if s.startswith('//') or s.startswith('/*'):
            continue
        for dm in _SFO_DEREF_START_RE.finditer(line):
            start, depth, j = dm.end(), 1, dm.end()
            while j < len(line):
                if line[j] == '(':
                    depth += 1
                elif line[j] == ')':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if depth != 0:
                continue
            split = _sfo_split_ptr_const(line[start:j])
            if not split:
                continue
            base_expr, const = split
            if const <= 0:
                continue
            ext = None
            bm = re.match(r'^([A-Za-z_]\w*)$', base_expr.strip())
            if bm and bm.group(1) in local_field_base:
                ext = local_field_base[bm.group(1)]
            if ext is None:
                ext = _sfo_field_extent(base_expr, var_types, layout)
            if ext is None:
                continue
            root_struct, foff, flen, addr = ext
            # Only an array (decays to its address) or an explicit `&field`
            # forms a struct-base pointer. A scalar/pointer field's value plus
            # an offset walks elsewhere (the pointed-to buffer, or a mistyped
            # handle), not the struct — never a base-shift.
            if not addr:
                continue
            if const < flen:
                continue  # stays within the base field — ordinary access
            sib = _sfo_field_at_offset(layout, root_struct, foff + const)
            if sib is None or sib['offset'] == foff:
                continue
            key = ('sfo_deref', line_no, base_expr.strip(), const)
            if key in seen:
                continue
            seen.add(key)
            out.append({
                'line': line_no,
                'type': 'struct_field_overrun',
                'match': '*(...)(%s + 0x%x)' % (base_expr.strip(), const),
                'text': s[:120],
                'description': (
                    '*(...)(%s + 0x%x): the pointer is based on a field at '
                    'offset 0x%x (size %d in %s) but the +0x%x byte offset '
                    'lands in field %s (offset 0x%x). Ghidra anchored on the '
                    'wrong field — rewrite as direct access to %s (#15 '
                    'base-shift; forms an out-of-array pointer, trips UBSan).'
                    % (base_expr.strip(), const, foff, flen, root_struct,
                       const, sib['name'], sib['offset'], sib['name'])),
                'severity': SUSPECT_SEVERITY.get('struct_field_overrun',
                                                 'moderate'),
            })
    return out


def identify_struct_field_overrun(code, struct_layout_map=None):
    """Detect `obj->arrayfield[const (+ var)]` accesses that overrun the
    array into the next struct field (Watcom 1-based base-shift, #15).

    Args:
        code: Source text to analyze.
        struct_layout_map: dict struct_name -> sorted field list from
            build_struct_layout_map(). Detector is inert without it.

    Returns:
        List of suspect dicts (type struct_field_overrun).
    """
    suspects = []
    if not code or not struct_layout_map:
        return suspects
    var_types = _sfo_resolve_var_types(code)
    if not var_types:
        return suspects

    # Pass 1: collect every resolvable array-field access with its constant
    # addend, struct/field metadata, and the following field (for the overrun
    # target). Pass 2 classifies each.
    accesses = []
    for line_no, line in enumerate(code.split('\n'), 1):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('*') or \
                stripped.startswith('/*'):
            continue
        for m in _SFO_ACCESS_RE.finditer(line):
            ident, field = m.group(1), m.group(2)
            struct_name = var_types.get(ident)
            if not struct_name:
                continue
            fields = struct_layout_map.get(struct_name)
            if not fields:
                continue
            fld = None
            fidx = None
            for i, fl in enumerate(fields):
                if fl['name'] == field:
                    fld = fl
                    fidx = i
                    break
            if fld is None or not fld['n'] or fld['n'] <= 0:
                continue
            # Extract balanced bracket contents starting right after '['.
            start = m.end()
            depth = 1
            j = start
            while j < len(line) and depth > 0:
                if line[j] == '[':
                    depth += 1
                elif line[j] == ']':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if depth != 0:
                continue  # index spans lines — skip
            idx_expr = line[start:j].strip()
            const, has_var = _sfo_index_const(idx_expr)
            nxt = fields[fidx + 1] if fidx + 1 < len(fields) else None
            accesses.append((line_no, stripped, ident, struct_name, field,
                             fld, nxt, idx_expr, const, has_var))

    # Pass 2: classify.
    seen = set()
    for (line_no, stripped, ident, struct_name, field, fld, nxt, idx_expr,
         const, has_var) in accesses:
        n = fld['n']
        # Trailing single-element array = flexible-array-member idiom (struct
        # ends with `T arr[1]` used as a variable-length array). Never #15.
        if nxt is None and n <= 1:
            continue
        definite = const >= n          # constant index past the array — hard OOB
        # Base-shift: index reaches the array's last element via a large constant
        # addend plus a variable, landing in the next field. Require a sizeable
        # array (n >= 16) so the large shift can't be ordinary neighbor access —
        # `arr[i + 1]` on a [2] array (bubble-sort swap) is not a base-shift,
        # but `buf[i + 99]` on a char[100] unmistakably is.
        baseshift = (const == n - 1 and has_var and nxt is not None and n >= 16)
        if not (definite or baseshift):
            continue
        key = (line_no, ident, field, idx_expr)
        if key in seen:
            continue
        seen.add(key)
        if nxt is not None:
            tgt = 'overruns into %s (offset 0x%x)' % (nxt['name'], nxt['offset'])
        else:
            tgt = ('overruns past the end of %s (likely an undersized array)'
                   % struct_name)
        if definite:
            why = 'constant index %d >= array length %d' % (const, n)
        else:
            why = ('index reaches last element (%d) with a variable addend '
                   '— Watcom 1-based base-shift' % const)
        desc = ('%s->%s[%s]: %s; %s.%s is [%d]. %s. Likely the #15 '
                'adjacent-field artifact — the real target is the next '
                'field.' % (ident, field, idx_expr, why, struct_name,
                            field, n, tgt))
        suspects.append({
            'line': line_no,
            'type': 'struct_field_overrun',
            'match': '%s->%s[%s]' % (ident, field, idx_expr),
            'text': stripped[:120],
            'description': desc,
            'severity': SUSPECT_SEVERITY.get('struct_field_overrun', 'moderate'),
        })

    # Pass 3: raw cast-deref through a field-derived pointer that reaches a far
    # sibling field via a large byte constant (`*(int *)(p + 0x3f1bc)`).
    suspects.extend(
        _sfo_field_base_deref_overruns(code, var_types, struct_layout_map, seen))
    return suspects


def detect_content_suspects(code, func_globals=None, global_interval_map=None,
                            address_interval_map=None, func_calls=None,
                            struct_layout_map=None):
    """Run all content-based (source-text) suspect detectors on a code blob.

    Used to re-evaluate a .keep file against the original .cpp to determine
    which content suspects the manual rewrite has resolved. Only runs the
    detectors that read source text — asm/pcode/stack-frame detectors are
    properties of the underlying binary and cannot be changed by a .keep.

    Args:
        code: Source text to analyze.
        func_globals: Per-function globals list (for wrong_global context).
        global_interval_map: Global interval map (for wrong_global / suspicious_cast).
        address_interval_map: Combined globals+constants map (for raw_address_constant).
        func_calls: Function-call metadata (for format_string_mismatch).
        struct_layout_map: Per-struct field layout (for struct_field_overrun);
            from get_struct_layout_map() / build_struct_layout_map().

    Returns:
        Flat list of suspect dicts, all of CONTENT_SUSPECT_TYPES.
    """
    if not code:
        return []
    found = []
    found.extend(identify_suspect_lines(code))
    found.extend(identify_wrong_global_suspects(
        code, func_globals, global_interval_map))
    found.extend(identify_suspicious_cast_suspects(
        code, global_interval_map))
    found.extend(identify_raw_address_constant_suspects(
        code, address_interval_map))
    found.extend(identify_raw_address_in_local(code))
    found.extend(identify_format_string_mismatch(
        code, func_calls))
    found.extend(identify_unrolled_strcpy_loops(code))
    found.extend(identify_unrolled_memcpy_loops(code))
    found.extend(identify_memcpy_oversized_source(code))
    found.extend(identify_dropped_loop_counter(code))
    found.extend(identify_unrolled_memcpy_dword_byte_split(code))
    found.extend(identify_unrolled_memcpy_index_form(code))
    found.extend(identify_unrolled_field_copy(code, struct_layout_map))
    found.extend(identify_unrolled_offset_copy(code))
    found.extend(identify_cascade_constant_fill(code))
    found.extend(identify_self_copy_guard(code))
    found.extend(identify_dropped_self_copy(code))
    found.extend(identify_tautological_addr_guard(code))
    found.extend(identify_signed_shift_global_idiom(code))
    found.extend(identify_concat_reconstruction(code))
    found.extend(identify_sibling_array_undersized(code))
    found.extend(identify_pointer_cast_multiline(code))
    found.extend(identify_int_address_arithmetic(code))
    found.extend(identify_int_address_arithmetic_multiline(code))
    found.extend(identify_subobject_byte_offset_cast(code))
    found.extend(identify_pointer_int_offset_access(code))
    found.extend(identify_shadow_pointer_walk(code))
    found.extend(identify_subfield_vector_pun(code))
    found.extend(identify_unrolled_strlen_loops(code))
    found.extend(identify_unrolled_strcat_loops(code))
    found.extend(identify_unrolled_strchr_loops(code))
    found.extend(identify_preinc_loop_idiom(code))
    found.extend(identify_loop_clobbered_constant(code))
    found.extend(identify_fast_sqrt_inline(code))
    found.extend(identify_bit_int_float_compare(code))
    found.extend(identify_struct_field_overrun(code, struct_layout_map))
    return found


def calculate_complexity_metrics(decompiled_code, assembly_code, suspects, xrefs, globals_list, func_calls):
    """Calculate complexity metrics for a function.

    Args:
        decompiled_code: The decompiled C code
        assembly_code: The assembly code
        suspects: List of identified suspect patterns
        xrefs: Cross-references to this function
        globals_list: Global variables used by this function
        func_calls: Functions called by this function

    Returns:
        A dictionary of complexity metrics
    """
    pseudocode_lines = len([l for l in decompiled_code.split('\n') if l.strip()])
    assembly_lines = len([l for l in assembly_code.split('\n') if l.strip()])
    suspect_types = set(s['type'] for s in suspects)

    # Determine maximum severity across all suspects
    severity_order = {'severe': 3, 'moderate': 2, 'mild': 1}
    max_sev = max((severity_order.get(s.get('severity', 'mild'), 0) for s in suspects), default=0)
    severity_label = {3: 'severe', 2: 'moderate', 1: 'mild', 0: 'clean'}

    return {
        'pseudocode_lines': pseudocode_lines,
        'assembly_lines': assembly_lines,
        'total_lines': pseudocode_lines + assembly_lines,
        'suspect_count': len(suspects),
        'suspect_types': sorted(suspect_types),
        'max_suspect_severity': severity_label[max_sev],
        'cross_reference_count': len(xrefs) if xrefs else 0,
        'global_count': len(globals_list) if globals_list else 0,
        'function_call_count': len(func_calls) if func_calls else 0,
        'complexity_score': (
            pseudocode_lines +
            (len(suspects) * 10) +  # Each suspect adds significant complexity
            (len(suspect_types) * 5)  # Variety of issues adds complexity
        )
    }


def identify_pcode_suspects(pcode_data, assembly_code=None, existing_overrides=None):
    """Identify fixable suspect patterns from P-code data.

    Detects patterns that can be fixed with P-code overrides:
    - Type A: CALLIND followed by ADD ESP with uncertain tracking
    - Type B: Jump targets with ESP mismatch (after RET)

    Separates suspects into unfixed and resolved lists based on existing overrides.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        assembly_code: Optional assembly code string for additional context
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    # Normalize existing override addresses for comparison
    fixed_addresses = set()
    if existing_overrides:
        for addr in existing_overrides.keys():
            # Normalize to lowercase without 0x prefix
            normalized = addr.lower().replace('0x', '').lstrip('0') or '0'
            fixed_addresses.add(normalized)

    # Detect Type A: CALLIND + uncertain ADD ESP
    callind_suspects = _detect_callind_anchor(pcode_data)

    # Detect Type B: Jump target ESP mismatch
    # Need to parse assembly for jump targets and RET locations
    mismatch_suspects = []
    if assembly_code:
        mismatch_suspects = _detect_jump_target_esp_mismatch(pcode_data, assembly_code)

    # Combine all detected suspects
    all_suspects = callind_suspects + mismatch_suspects

    # Separate into unfixed and resolved based on existing overrides
    if fixed_addresses:
        for suspect in all_suspects:
            suspect_type = suspect.get('type', '')
            # For no-frame CALLIND, override is at callind_address, not fix_address
            if suspect_type in ('callind_preserve', 'callind_preserve_lost'):
                check_addr = suspect.get('callind_address', '')
            else:
                check_addr = suspect.get('fix_address', '')
            # Normalize for comparison
            normalized_addr = check_addr.lower().replace('0x', '').lstrip('0') or '0'
            if normalized_addr in fixed_addresses:
                resolved_suspects.append(suspect)
            else:
                suspects.append(suspect)
    else:
        suspects = all_suspects

    return suspects, resolved_suspects


def _detect_callind_anchor(pcode_data):
    """Detect CALLIND instructions followed by ADD ESP with uncertain tracking.

    Pattern: CALLIND makes ESP opaque, subsequent ADD ESP can't resolve it.

    Returns two types of suspects:
    - callind_anchor: Function has EBP frame, fixable with ESP = EBP - offset
    - callind_preserve: Function lacks EBP frame, fixable with prologue-based ESP reset

    Returns:
        List of suspect dictionaries
    """
    suspects = []

    if not pcode_data:
        return suspects

    # Get prologue information (works for all functions)
    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)

    # For EBP-frame functions, also get the frame_offset (SUB ESP value after MOV EBP, ESP)
    frame_offset = get_frame_offset_from_pcode(pcode_data) if has_ebp_frame else None

    # Find CALLIND instructions and look for ADD ESP after them
    i = 0
    while i < len(pcode_data):
        entry = pcode_data[i]
        pcode_lines = entry.get('pcode', [])

        # Check if this instruction has CALLIND
        has_callind = any('CALLIND' in line for line in pcode_lines)

        if has_callind:
            # Look for ADD ESP in next few instructions
            for j in range(i + 1, min(i + 5, len(pcode_data))):
                next_entry = pcode_data[j]
                next_asm = next_entry.get('assembly', '')

                # Check for ADD ESP, N
                if next_asm.upper().startswith('ADD ') and 'ESP' in next_asm.upper():
                    # Check ESP certainty
                    certainty = next_entry.get('esp_certainty', 'unknown')

                    # If ESP certainty indicates the decompiler may have trouble, create suspect
                    # cfg_resolved means OUR tracker resolved it, but Ghidra may still struggle
                    if certainty in ('computed', 'unknown', 'callind_unknown', 'lost',
                                     'cfg_resolved', 'conflict', 'unreachable'):
                        # Parse the ADD value
                        add_value = _parse_add_esp_value(next_asm)

                        if has_ebp_frame and frame_offset is not None:
                            # Fixable with ESP = EBP - frame_offset
                            suspects.append({
                                'type': 'callind_anchor',
                                'match': 'CALLIND...ADD ESP',
                                'text': 'CALLIND at %s, ADD ESP at %s' % (
                                    entry.get('address', '?'), next_entry.get('address', '?')),
                                'description': 'CALLIND makes ESP uncertain; fixable with ESP anchor',
                                'fix_type': 'esp_anchor_after_callind',
                                'fix_address': next_entry.get('address', ''),
                                'callind_address': entry.get('address', ''),
                                'add_esp_value': add_value,
                                'frame_offset': frame_offset
                            })
                        else:
                            # No EBP frame - need to preserve ESP across CALLIND
                            # Parse the call target from assembly
                            callind_asm = entry.get('assembly', '')
                            callind_addr = entry.get('address', '?')
                            try:
                                target_type, target_value = _parse_callind_target(callind_asm)
                            except UnhandledCallIndirectError as e:
                                raise UnhandledCallIndirectError(
                                    "At address %s: %s" % (callind_addr, e))

                            # Get return address (next instruction after CALLIND)
                            return_address = pcode_data[i + 1].get('address', '') if i + 1 < len(pcode_data) else None

                            # Get ESP offset at CALLIND (after the call returns)
                            # After cdecl call returns, ESP is unchanged from before the call
                            # After ADD ESP, ESP = esp_at_callind + add_value
                            esp_at_callind = entry.get('esp_offset')
                            esp_certainty = entry.get('esp_certainty', 'unknown')
                            # ESP is lost if None or if CFG analysis found conflict/unreachable
                            esp_tracking_lost = (
                                esp_at_callind is None or
                                esp_certainty in ('lost', 'conflict', 'unreachable')
                            )
                            if esp_at_callind is not None and add_value is not None:
                                expected_esp_offset = esp_at_callind + add_value
                            else:
                                expected_esp_offset = None

                            # Use different type if ESP tracking was lost (due to branches)
                            if esp_tracking_lost:
                                suspect_type = 'callind_preserve_lost'
                                description = 'CALLIND with lost ESP tracking (branching code)'
                            else:
                                suspect_type = 'callind_preserve'
                                description = 'CALLIND makes ESP uncertain; fixable with ESP preserve'

                            # Add suspect - build dict and only include ESP fields when known
                            suspect = {
                                'type': suspect_type,
                                'match': 'CALLIND...ADD ESP',
                                'text': 'CALLIND at %s, ADD ESP at %s (no EBP frame)' % (
                                    callind_addr, next_entry.get('address', '?')),
                                'description': description,
                                'fix_address': next_entry.get('address', ''),
                                'callind_address': callind_addr,
                                'callind_assembly': callind_asm,
                                'return_address': return_address,
                                'call_target_type': target_type,
                                'call_target_value': target_value,
                                'add_esp_value': add_value,
                                'prologue_offset': prologue_offset,
                            }
                            # Only include ESP fields when tracking wasn't lost
                            if not esp_tracking_lost:
                                suspect['esp_at_callind'] = esp_at_callind
                                suspect['expected_esp_offset'] = expected_esp_offset
                            suspects.append(suspect)
                    break  # Only look at first ADD ESP after CALLIND

                # Stop if we hit another call or control flow
                next_pcode = next_entry.get('pcode', [])
                if any(op in ' '.join(next_pcode) for op in ['CALL', 'CALLIND', 'RETURN', 'BRANCH']):
                    break
        i += 1
    return suspects


def _detect_jump_target_esp_mismatch(pcode_data, assembly_code):
    """Detect jump targets with ESP values that don't match their sources.

    Pattern: Code after RET is only reachable by jumps, but Ghidra computes
    ESP from sequential fall-through instead of jump sources.
    Fix: Override first instruction at target to anchor ESP.

    Returns:
        List of suspect dictionaries
    """
    suspects = []

    # Build address to entry map
    addr_to_entry = {}
    addr_to_index = {}
    for idx, entry in enumerate(pcode_data):
        addr = entry.get('address', '')
        if addr:
            addr_to_entry[addr] = entry
            addr_to_index[addr] = idx

    # Find RET instructions
    ret_indices = []
    for idx, entry in enumerate(pcode_data):
        asm = entry.get('assembly', '').upper()
        if asm.startswith('RET') or asm.startswith('RETN'):
            ret_indices.append(idx)

    # Find jump sources and targets from assembly
    jumps = _parse_jumps_from_assembly(assembly_code)

    # Check each instruction after a RET
    for ret_idx in ret_indices:
        if ret_idx + 1 >= len(pcode_data):
            continue

        target_entry = pcode_data[ret_idx + 1]
        target_addr = target_entry.get('address', '')

        if not target_addr:
            continue

        # Check if this address is a jump target
        if target_addr not in jumps:
            continue

        # Get sources that jump to this target
        source_addrs = jumps[target_addr]

        # Get ESP values
        target_esp = target_entry.get('esp_offset')

        # Check each source for mismatch
        for source_addr in source_addrs:
            if source_addr not in addr_to_entry:
                continue
            source_entry = addr_to_entry[source_addr]
            source_esp = source_entry.get('esp_offset')

            # Check for mismatch
            if source_esp is not None and target_esp is not None:
                if source_esp != target_esp:
                    delta = target_esp - source_esp

                    # Add suspect
                    suspects.append({
                        'type': 'jump_target_esp_mismatch',
                        'match': 'ESP:%+d -> ESP:%+d' % (source_esp, target_esp),
                        'text': 'Jump from %s (ESP:%+d) to %s (ESP:%+d) after RET' % (
                            source_addr, source_esp, target_addr, target_esp),
                        'description': 'Jump target has ESP mismatch (%+d bytes) - computed from RET fall-through' % delta,
                        'fix_type': 'esp_anchor_at_jump_target',
                        'fix_address': target_addr,
                        'source_address': source_addr,
                        'source_esp': source_esp,
                        'target_esp': target_esp,
                        'esp_delta': delta,
                        'target_assembly': target_entry.get('assembly', '')
                    })
                    break  # Only report once per target
    return suspects


def _parse_add_esp_value(asm_line):
    """Parse the value from an ADD ESP, N instruction.

    Args:
        asm_line: Assembly line like "ADD ESP, 0x10" or "ADD ESP,0x8"

    Returns:
        Integer value or None if not parseable
    """
    # Match ADD ESP, value
    match = re.search(r'ADD\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm_line, re.IGNORECASE)
    if match:
        try:
            return int(match.group(1), 0)
        except ValueError:
            pass
    return None


class UnhandledCallIndirectError(Exception):
    """Raised when a CALLIND target pattern is not recognized."""
    pass


def _parse_callind_target(asm_line):
    """Parse the target from an indirect CALL instruction.

    Args:
        asm_line: Assembly line like "CALL dword ptr [ESP + 0x18]" or "CALL EBP"

    Returns:
        Tuple of (target_type, value) where:
        - ('reg_offset', {'reg': str, 'offset': int}) for CALL [REG + offset]
        - ('reg_deref', str) for CALL [REG] (e.g., 'EAX')
        - ('register', str) for CALL REG (e.g., 'EBP', 'EAX')
        - ('mem_absolute', int) for CALL [SEG:]?[0xADDRESS]
        - ('scaled_index', {'reg': str, 'scale': int, 'offset': int}) for CALL [REG*scale + offset]

    Raises:
        UnhandledCallIndirectError: If the pattern is not recognized
    """
    # Pattern for 32-bit registers
    reg_pattern = r'E[ABCD]X|E[SD]I|E[BS]P'
    # Pattern for segment registers (optional prefix)
    seg_pattern = r'(?:[CDEFGS]S:)?'

    # Match CALL dword ptr [REG*scale + offset] (scaled index addressing)
    # e.g., CALL dword ptr [EAX*0x4 + 0x66df88]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            reg = match.group(1).upper()
            scale = int(match.group(2), 0)
            offset = int(match.group(3), 0)
            return ('scaled_index', {'reg': reg, 'scale': scale, 'offset': offset})
        except ValueError:
            pass

    # Match CALL dword ptr [REG + offset] or [REG+offset]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            reg = match.group(1).upper()
            offset = int(match.group(2), 0)
            return ('reg_offset', {'reg': reg, 'offset': offset})
        except ValueError:
            pass

    # Match CALL dword ptr [REG] (no offset)
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        return ('reg_deref', match.group(1).upper())

    # Match CALL dword ptr [SEG:]?[0xADDRESS] (absolute memory address, optional segment prefix)
    # e.g., CALL dword ptr [0x00684ee4] or CALL dword ptr CS:[0x6114c8]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(0x[0-9a-fA-F]+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            return ('mem_absolute', int(match.group(1), 16))
        except ValueError:
            pass

    # Match CALL REG (register-based indirect call, not dereferenced)
    match = re.search(
        r'CALL\s+(E[ABCD]X|E[SD]I|E[BS]P|[ABCD]X|[SD]I|[BS]P)\s*(?:;|$)',
        asm_line, re.IGNORECASE)
    if match:
        return ('register', match.group(1).upper())

    raise UnhandledCallIndirectError(
        "Unhandled CALLIND pattern: %r - add support for this register/pattern" % asm_line)


def _parse_jumps_from_assembly(assembly_code):
    """Parse jump instructions from assembly code.

    Args:
        assembly_code: Full assembly code string

    Returns:
        Dict mapping target_addr -> [source_addrs]
    """
    jumps = defaultdict(list)

    if not assembly_code:
        return jumps

    # Pattern for jump instructions with target address
    # Matches: JMP 0x005d5984, JZ 0x005d58ce, JNC 0x005d5984, etc.
    jump_pattern = re.compile(
        r'^\s*([0-9a-fA-F]+):\s*(J\w+)\s+(?:dword ptr\s+)?\[?(?:0x)?([0-9a-fA-F]+)\]?',
        re.IGNORECASE | re.MULTILINE
    )

    # Also match XREF comments that indicate jump targets
    # Format: ;   XREF to: 005d5984 (CONDITIONAL_JUMP)
    xref_pattern = re.compile(
        r';.*XREF.*:\s*([0-9a-fA-F]+)\s*\((CONDITIONAL_JUMP|UNCONDITIONAL_JUMP)\)',
        re.IGNORECASE
    )

    for match in jump_pattern.finditer(assembly_code):
        source_addr = match.group(1).lower()
        # mnemonic = match.group(2)
        target_addr = match.group(3).lower()

        # Normalize addresses (ensure consistent format)
        if len(source_addr) < 8:
            source_addr = source_addr.zfill(8)
        if len(target_addr) < 8:
            target_addr = target_addr.zfill(8)

        jumps[target_addr].append(source_addr)
    return jumps


def get_frame_offset_from_pcode(pcode_data):
    """Extract the frame offset (SUB ESP, N value) from function prologue.

    Looks for the SUB ESP, N instruction in the prologue after MOV EBP, ESP.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Frame offset as integer, or None if not found/not EBP-based frame
    """
    found_mov_ebp_esp = False
    frame_offset = None

    # Only check first 20 instructions (prologue area)
    for entry in pcode_data[:20]:
        asm = entry.get('assembly', '')

        # Look for MOV EBP, ESP (frame pointer setup)
        if re.search(r'MOV\s+EBP\s*,\s*ESP', asm, re.IGNORECASE):
            found_mov_ebp_esp = True

        # Look for SUB ESP, N after frame pointer setup
        elif found_mov_ebp_esp:
            match = re.search(r'SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm, re.IGNORECASE)
            if match:
                try:
                    frame_offset = int(match.group(1), 0)
                    break
                except ValueError:
                    pass
    return frame_offset if found_mov_ebp_esp else None


def get_prologue_offset(pcode_data):
    """Compute total ESP drop from function entry (prologue offset).

    Counts initial PUSH instructions and SUB ESP, N to compute how much
    ESP drops from function entry. Works for any function, not just EBP-frame.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Tuple of (prologue_offset, has_ebp_frame) where:
        - prologue_offset: Total ESP drop in bytes (0 if none found)
        - has_ebp_frame: True if function has MOV EBP, ESP
    """
    if not pcode_data:
        return 0, False

    push_count = 0
    sub_esp_value = 0
    has_ebp_frame = False
    found_sub_esp = False
    in_prologue = True

    # Scan prologue area (first ~20 instructions)
    for entry in pcode_data[:20]:
        asm = entry.get('assembly', '')

        if not in_prologue:
            break

        # Count PUSH instructions at start of function
        if re.match(r'PUSH\s+', asm, re.IGNORECASE):
            push_count += 1
            continue

        # Check for MOV EBP, ESP (frame pointer setup)
        if re.search(r'MOV\s+EBP\s*,\s*ESP', asm, re.IGNORECASE):
            has_ebp_frame = True
            continue

        # Look for SUB ESP, N
        match = re.search(r'SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm, re.IGNORECASE)
        if match:
            try:
                sub_esp_value = int(match.group(1), 0)
                found_sub_esp = True
            except ValueError:
                pass
            # After SUB ESP, prologue is typically done
            in_prologue = False
            continue

        # If we hit something other than PUSH/MOV EBP/SUB ESP, prologue may be done
        # But be lenient - some prologues have MOVs for saving registers to stack
        if not re.match(r'(MOV|LEA|NOP)\s+', asm, re.IGNORECASE):
            # If we already have pushes, we might be past prologue
            if push_count > 0 and not found_sub_esp:
                # Keep scanning for SUB ESP
                pass
            else:
                in_prologue = False

    # Total offset = (push_count * 4) + sub_esp_value
    prologue_offset = (push_count * 4) + sub_esp_value

    return prologue_offset, has_ebp_frame


def identify_param_count_mismatch(param_estimates, vtable_info, func_signature=None):
    """Detect parameter count mismatch for non-vtable functions.

    Compares declared parameter count against estimated count from call sites.
    Only applies to direct calls (non-vtable) since indirect call analysis
    is unreliable for determining push counts.

    Args:
        param_estimates: Dict with 'declared_params', 'estimated_params',
                        'call_site_count', 'confidence',
                        and 'declared_stack_bytes' (for multi-slot param
                        detection — doubles and structs take multiple slots).
        vtable_info: Dict with 'in_vtable' bool
        func_signature: Optional function signature string. Used to skip
                        variadic functions (trailing `...`) whose call sites
                        legitimately push more args than declared.

    Returns:
        A suspect dict if mismatch found, None otherwise
    """
    if not param_estimates:
        return None

    # Skip vtable functions - indirect call analysis is unreliable
    if vtable_info and vtable_info.get('in_vtable', False):
        return None

    # Skip variadic — callers push format-string + arbitrary extras; any
    # "too few" count is expected and not actionable.
    if func_signature and '...' in func_signature:
        return None

    declared = param_estimates.get('declared_params')
    estimated = param_estimates.get('estimated_params')
    call_site_count = param_estimates.get('call_site_count', 0)

    # Need both values and at least one call site to compare
    if declared is None or estimated is None:
        return None
    if call_site_count == 0:
        return None

    # Check for mismatch
    if declared != estimated:
        # `estimate_call_site_params` computes a `matches_declared` flag
        # that already accounts for multi-slot params (doubles, structs)
        # and register-passed params. If it says the call sites agree
        # with the signature, trust it and skip the mismatch.
        if param_estimates.get('matches_declared', False):
            return None
        # Backstop for JSONs written before `matches_declared` was stored:
        # skip when estimated stack bytes match declared stack bytes
        # (double/struct multi-slot case).
        declared_stack_bytes = param_estimates.get('declared_stack_bytes')
        if declared_stack_bytes is not None and estimated * 4 == declared_stack_bytes:
            return None
        delta = estimated - declared

        # For the "too many" case (delta < 0), one truncated `push_count` run
        # at a single call site is enough to drag the most-common estimate
        # below the declared count even when other call sites confirm the
        # signature. Two truncation modes are common:
        #   1. The site's analyzer hit a basic-block boundary, prior CALL, or
        #      prologue marker before walking back over all the PUSHes — the
        #      JSON shows method='push_count' with low `instructions_analyzed`.
        #   2. A different site uses method='add_esp' and reports the full
        #      count, but the aggregator's `most_common` picked the smaller
        #      value because the two methods tied 1:1 in frequency.
        # Suppress the "too many" suspect when any call site provides positive
        # evidence that the declared count is correct: an `add_esp` measurement
        # at-or-above declared, OR any single site whose own `estimated_params`
        # already meets/exceeds declared.
        if delta < 0:
            call_sites = param_estimates.get('call_sites', [])
            for cs in call_sites:
                site_est = cs.get('estimated_params', 0)
                if site_est >= declared:
                    # At least one site corroborates the declared count.
                    return None
            # No corroborating site. If *every* call site used the
            # push_count fallback and stopped short (`instructions_analyzed`
            # below `2 * declared`), the analyzer didn't see enough of the
            # caller body to count the PUSHes — every site short-circuited
            # at a basic-block boundary, prior CALL, or prologue marker.
            # That's not evidence the signature is wrong; it's evidence the
            # call-site analysis ran out of context. Suppress.
            if call_sites and all(
                cs.get('method') == 'push_count'
                and cs.get('instructions_analyzed', 0) < max(2 * declared, 8)
                for cs in call_sites
            ):
                return None

        # For the "too few" case (delta > 0), push_count overcounts are common
        # when Watcom pre-pushes args for a SUBSEQUENT call before the current
        # CALL, or when caller saved-register PUSHes at a deferred prologue
        # landing get counted as args. Mirror the delta<0 suppressions:
        # corroborating add_esp evidence + push_count-only short-context.
        if delta > 0:
            call_sites = param_estimates.get('call_sites', [])
            # Any call site whose `add_esp` measurement matches or undershoots
            # declared is positive evidence the signature is correct.
            # `add_esp` reads the actual ADD ESP after the CALL, which is
            # the ground-truth caller-cleanup byte count and isn't fooled by
            # pre-pushed args for adjacent calls.
            for cs in call_sites:
                if (cs.get('method') == 'add_esp'
                        and cs.get('estimated_params', 0) <= declared):
                    return None
            # No corroborating site. If every site is push_count fallback with
            # short instructions_analyzed, the count is unreliable — typically
            # the analyzer crossed a basic-block boundary into pre-pushed args
            # for an adjacent call, or hit Watcom's interleaved sprintf-style
            # arg setup. Threshold based on `estimated` so a high count gets
            # proportionally more scrutiny.
            if call_sites and all(
                cs.get('method') == 'push_count'
                and cs.get('instructions_analyzed', 0) < max(2 * estimated, 8)
                for cs in call_sites
            ):
                return None

        if delta > 0:
            # Call sites push MORE than declared - missing params in signature
            return {
                'type': 'param_count_too_few',
                'match': 'declared:%d vs estimated:%d' % (declared, estimated),
                'text': 'Function declares %d params but call sites push %d (%d missing)' % (
                    declared, estimated, delta),
                'description': 'Signature has too few params - likely missing this ptr or other params',
                'fix_type': 'add_params',
                'declared_params': declared,
                'estimated_params': estimated,
                'call_site_count': call_site_count,
                'param_delta': delta
            }
        else:
            # Call sites push FEWER than declared - extra params in signature
            return {
                'type': 'param_count_too_many',
                'match': 'declared:%d vs estimated:%d' % (declared, estimated),
                'text': 'Function declares %d params but call sites push %d (%d extra)' % (
                    declared, estimated, abs(delta)),
                'description': 'Signature has too many params - likely wrong calling convention',
                'fix_type': 'remove_params',
                'declared_params': declared,
                'estimated_params': estimated,
                'call_site_count': call_site_count,
                'param_delta': delta
            }
    return None


def identify_variadic_calls(pcode_data, func_calls=None, has_stack_issues=False, existing_overrides=None, stack_frame=None):
    """Identify calls to variadic functions that may need ESP stabilization.

    Variadic functions (sprintf, fscanf, etc.) can have internal stack frame issues
    that confuse Ghidra's ESP tracking in calling functions.

    Creates two types of suspects based on whether the caller has an EBP frame:
    - variadic_anchor: Caller has EBP frame, fix by anchoring ESP at ADD ESP
    - variadic_preserve: Caller lacks EBP frame, fix by preserving ESP across CALL

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        func_calls: List of function call dicts with 'addr', 'name', 'is_variadic' keys
        has_stack_issues: If True, the calling function has badspacebase/stack_param issues
        existing_overrides: Optional dict of address -> pcode_lines from JSON
        stack_frame: Optional stack frame dict with 'local_size' for fallback

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    # Build set of variadic function addresses from func_calls
    variadic_funcs = {}  # addr (normalized) -> name
    if func_calls:
        for call in func_calls:
            if call.get('is_variadic', False):
                # Normalize address for matching
                addr = call.get('addr', '').lower().replace('0x', '').lstrip('0') or '0'
                variadic_funcs[addr] = call.get('name', 'unknown')

    if not variadic_funcs:
        return suspects, resolved_suspects

    # Get prologue info to determine if caller has EBP frame
    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)
    frame_offset = get_frame_offset_from_pcode(pcode_data) if has_ebp_frame else None

    # Fallback: use stack_frame.local_size if frame_offset detection failed
    if has_ebp_frame and (frame_offset is None or frame_offset == 0) and stack_frame:
        local_size = stack_frame.get('local_size')
        if local_size and local_size > 0:
            frame_offset = local_size

    # Normalize existing override addresses for comparison
    fixed_addresses = set()
    if existing_overrides:
        for addr in existing_overrides.keys():
            normalized = addr.lower().replace('0x', '').lstrip('0') or '0'
            fixed_addresses.add(normalized)

    # Scan for CALL instructions to variadic functions
    for i, entry in enumerate(pcode_data):
        pcode_lines = entry.get('pcode', [])
        call_addr = entry.get('address', '')

        # Look for CALL (ram,ADDR,4) in pcode
        for line in pcode_lines:
            if 'CALL (ram,' not in line:
                continue

            # Extract target address from CALL (ram,0xADDR,4)
            match = re.search(r'CALL \(ram,0x([0-9a-fA-F]+),4\)', line)
            if not match:
                continue

            target_addr = match.group(1).lower().lstrip('0') or '0'

            # Check if this is a variadic function
            if target_addr not in variadic_funcs:
                continue

            func_name = variadic_funcs[target_addr]

            # Get return address (next instruction)
            return_address = None
            if i + 1 < len(pcode_data):
                return_address = pcode_data[i + 1].get('address', '')

            # Check ESP certainty after the call
            esp_certainty = entry.get('esp_certainty', 'unknown')
            next_certainty = pcode_data[i + 1].get('esp_certainty', 'unknown') if i + 1 < len(pcode_data) else 'unknown'

            # For EBP-frame functions, find the ADD ESP instruction after the call
            # This is where we'll anchor ESP instead of overriding the CALL
            add_esp_address = None
            add_esp_value = None
            if has_ebp_frame:
                # Look for ADD ESP in next few instructions
                for j in range(i + 1, min(i + 5, len(pcode_data))):
                    next_entry = pcode_data[j]
                    next_asm = next_entry.get('assembly', '')
                    if next_asm.upper().startswith('ADD ') and 'ESP' in next_asm.upper():
                        add_esp_address = next_entry.get('address', '')
                        # Parse the ADD value
                        add_match = re.search(r'ADD\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', next_asm, re.IGNORECASE)
                        if add_match:
                            try:
                                add_esp_value = int(add_match.group(1), 0)
                            except ValueError:
                                pass
                        break
                    # Stop if we hit another call or control flow
                    next_pcode = next_entry.get('pcode', [])
                    if any(op in ' '.join(next_pcode) for op in ['CALL', 'CALLIND', 'RETURN', 'BRANCH']):
                        break

            # Create suspect based on whether caller has EBP frame and ADD ESP
            if has_ebp_frame and frame_offset is not None and add_esp_address:
                # EBP-frame function with ADD ESP: anchor ESP at ADD ESP instruction
                suspect = {
                    'type': 'variadic_anchor',
                    'match': 'CALL %s' % func_name,
                    'text': 'Call to variadic function %s at %s (EBP frame + ADD ESP)' % (func_name, call_addr),
                    'description': 'Variadic call in EBP-frame function; fix by anchoring ESP at ADD ESP',
                    'call_address': call_addr,
                    'return_address': return_address,
                    'target_address': '0x%s' % target_addr,
                    'target_function': func_name,
                    'fix_address': add_esp_address,
                    'frame_offset': frame_offset,
                    'add_esp_value': add_esp_value,
                    'esp_certainty_at_call': esp_certainty,
                    'esp_certainty_after': next_certainty,
                    'caller_has_stack_issues': has_stack_issues,
                }
                # Check if fix_address already has an override
                norm_fix = add_esp_address.lower().replace('0x', '').lstrip('0') or '0'
                if norm_fix in fixed_addresses:
                    resolved_suspects.append(suspect)
                else:
                    suspects.append(suspect)
            elif has_ebp_frame and frame_offset is not None:
                # EBP-frame function but no ADD ESP found: preserve ESP across CALL
                suspect = {
                    'type': 'variadic_preserve_ebp',
                    'match': 'CALL %s' % func_name,
                    'text': 'Call to variadic function %s at %s (EBP frame, no ADD ESP)' % (func_name, call_addr),
                    'description': 'Variadic call in EBP-frame function without ADD ESP; fix by preserving ESP across CALL',
                    'call_address': call_addr,
                    'return_address': return_address,
                    'target_address': '0x%s' % target_addr,
                    'target_function': func_name,
                    'frame_offset': frame_offset,
                    'esp_certainty_at_call': esp_certainty,
                    'esp_certainty_after': next_certainty,
                    'caller_has_stack_issues': has_stack_issues,
                }
                # Check if call_address already has an override
                norm_call = call_addr.lower().replace('0x', '').lstrip('0') or '0'
                if norm_call in fixed_addresses:
                    resolved_suspects.append(suspect)
                else:
                    suspects.append(suspect)
            else:
                # Non-EBP-frame function: preserve ESP across CALL
                suspect = {
                    'type': 'variadic_preserve',
                    'match': 'CALL %s' % func_name,
                    'text': 'Call to variadic function %s at %s (no EBP frame)' % (func_name, call_addr),
                    'description': 'Variadic call in non-EBP-frame function; fix by preserving ESP across CALL',
                    'call_address': call_addr,
                    'return_address': return_address,
                    'target_address': '0x%s' % target_addr,
                    'target_function': func_name,
                    'prologue_offset': prologue_offset,
                    'esp_certainty_at_call': esp_certainty,
                    'esp_certainty_after': next_certainty,
                    'caller_has_stack_issues': has_stack_issues,
                }
                # Check if call_address already has an override
                norm_call = call_addr.lower().replace('0x', '').lstrip('0') or '0'
                if norm_call in fixed_addresses:
                    resolved_suspects.append(suspect)
                else:
                    suspects.append(suspect)

    return suspects, resolved_suspects


def count_format_specifiers(format_string):
    """Count the number of format specifiers in a printf/scanf format string.

    Handles:
    - Basic specifiers: %d, %s, %x, %f, etc.
    - Width/precision with *: %*d, %.*f, %*.*s (each * consumes an argument)
    - %% is a literal percent (doesn't consume argument)
    - Length modifiers: %ld, %lld, %hd, %zu, etc.

    Args:
        format_string: The format string to parse

    Returns:
        Number of arguments the format string expects
    """
    if not format_string:
        return 0

    count = 0
    i = 0
    while i < len(format_string):
        if format_string[i] == '%':
            if i + 1 < len(format_string):
                next_char = format_string[i + 1]
                if next_char == '%':
                    # %% - literal percent, skip both
                    i += 2
                    continue

                # Parse the format specifier
                i += 1  # Skip the %

                # Count * for width (consumes an argument)
                if i < len(format_string) and format_string[i] == '*':
                    count += 1
                    i += 1

                # Skip flags (-, +, space, #, 0)
                while i < len(format_string) and format_string[i] in '-+ #0':
                    i += 1

                # Skip width digits
                while i < len(format_string) and format_string[i].isdigit():
                    i += 1

                # Check for precision
                if i < len(format_string) and format_string[i] == '.':
                    i += 1
                    # Count * for precision (consumes an argument)
                    if i < len(format_string) and format_string[i] == '*':
                        count += 1
                        i += 1
                    # Skip precision digits
                    while i < len(format_string) and format_string[i].isdigit():
                        i += 1

                # Skip length modifiers (h, hh, l, ll, L, z, j, t, q)
                while i < len(format_string) and format_string[i] in 'hlLzjtq':
                    i += 1

                # The actual conversion specifier
                if i < len(format_string) and format_string[i] in 'diouxXeEfFgGaAcspn':
                    count += 1
                    i += 1
                continue
        i += 1

    return count


def _parse_call_arguments(line, start_pos):
    """Parse function call arguments from a line starting after the opening paren.

    Args:
        line: The full line of code
        start_pos: Position after the opening parenthesis

    Returns:
        List of argument strings, or None if parsing failed
    """
    paren_depth = 1
    args_str = ''
    i = start_pos

    while i < len(line) and paren_depth > 0:
        char = line[i]
        if char == '(':
            paren_depth += 1
        elif char == ')':
            paren_depth -= 1
        if paren_depth > 0:
            args_str += char
        i += 1

    if paren_depth != 0:
        return None  # Unbalanced parens

    if not args_str.strip():
        return []

    # Split arguments (respecting parentheses and quotes)
    args = []
    current_arg = ''
    paren_depth = 0
    in_string = False
    escape_next = False

    for char in args_str:
        if escape_next:
            current_arg += char
            escape_next = False
            continue
        if char == '\\':
            current_arg += char
            escape_next = True
            continue
        if char == '"' and not in_string:
            in_string = True
            current_arg += char
        elif char == '"' and in_string:
            in_string = False
            current_arg += char
        elif char == '(' and not in_string:
            paren_depth += 1
            current_arg += char
        elif char == ')' and not in_string:
            paren_depth -= 1
            current_arg += char
        elif char == ',' and paren_depth == 0 and not in_string:
            args.append(current_arg.strip())
            current_arg = ''
        else:
            current_arg += char

    if current_arg.strip():
        args.append(current_arg.strip())

    return args


def _find_format_string_index(args):
    """Find the index of the format string argument.

    The format string is the first string literal that contains at least one
    format specifier (% followed by a conversion character).

    Args:
        args: List of argument strings

    Returns:
        Tuple of (index, format_string) or (None, None) if not found
    """
    format_spec_pattern = re.compile(r'%[-+ #0]*\*?\d*\.?\*?\d*[hlLzjtq]*[diouxXeEfFgGaAcspn]')

    for i, arg in enumerate(args):
        # Check if this argument is or contains a string literal
        string_match = re.search(r'"((?:[^"\\]|\\.)*)"', arg)
        if string_match:
            string_content = string_match.group(1)
            # Check if it has format specifiers
            if format_spec_pattern.search(string_content):
                return i, string_content

    return None, None


def identify_stack_align_anchor(json_data, pcode_data, existing_overrides=None):
    """Identify stack alignment instructions that can be fixed with ESP anchor.

    Pattern: AND ESP, 0xFFFFFFF8 (or similar) in EBP-frame function.
    All stack_alignment functions have EBP frame set BEFORE the AND ESP.

    Fix: Anchor ESP = EBP - (SUB ESP offset) at the AND ESP instruction.

    Args:
        json_data: The function JSON data containing stack_patterns
        pcode_data: List of instruction dicts from extract_function_pcode()
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects)
    """
    suspects = []
    resolved_suspects = []

    if not json_data or not pcode_data:
        return suspects, resolved_suspects

    # Check if function has stack_alignment pattern
    stack_patterns = json_data.get('stack_patterns')
    if not stack_patterns:
        return suspects, resolved_suspects
    patterns = stack_patterns.get('patterns', [])
    align_pattern = None
    for p in patterns:
        if p.get('pattern_id') == 'stack_alignment':
            align_pattern = p
            break

    if not align_pattern:
        return suspects, resolved_suspects

    # Must be EBP frame (all stack_alignment functions are in practice)
    if not json_data.get('function', {}).get('is_ebp_frame', False):
        return suspects, resolved_suspects

    # Find SUB ESP offset before AND ESP
    sub_esp_offset = None
    for entry in pcode_data:
        if not entry:
            continue
        asm = entry.get('assembly', '')
        if 'SUB' in asm.upper() and 'ESP' in asm.upper():
            match = re.search(r'SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm, re.IGNORECASE)
            if match:
                try:
                    sub_esp_offset = int(match.group(1), 0)
                    break
                except ValueError:
                    pass

    if sub_esp_offset is None:
        return suspects, resolved_suspects

    fix_address = align_pattern.get('address', '')

    suspect = {
        'type': 'stack_align_anchor',
        'match': 'AND ESP',
        'text': 'Stack alignment at %s (SUB ESP, 0x%x before)' % (fix_address, sub_esp_offset),
        'description': 'Stack alignment can be anchored: ESP = EBP - 0x%x' % sub_esp_offset,
        'fix_address': fix_address,
        'sub_esp_offset': sub_esp_offset,
        'frame_offset': sub_esp_offset,
        'align_instruction': align_pattern.get('instruction', 'AND ESP,0xfffffff8'),
    }

    # Check if already fixed
    if existing_overrides:
        normalized = fix_address.lower().replace('0x', '').lstrip('0') or '0'
        for addr in existing_overrides.keys():
            if addr.lower().replace('0x', '').lstrip('0') or '0' == normalized:
                resolved_suspects.append(suspect)
                return suspects, resolved_suspects

    suspects.append(suspect)
    return suspects, resolved_suspects


def identify_direct_call_esp_uncertainty(pcode_data, func_calls=None, existing_overrides=None, json_data=None):
    """Identify direct CALL instructions with uncertain ESP after.

    Pattern: Direct CALL (not CALLIND, not variadic) followed by ADD ESP
    where ESP tracking is uncertain.

    Creates two types of suspects:
    - call_esp_anchor: Caller has EBP frame, fix by anchoring ESP at ADD ESP
    - call_esp_preserve: Caller lacks EBP frame, fix by preserving ESP across CALL

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        func_calls: Optional list of function call dicts to exclude variadic functions
        existing_overrides: Optional dict of address -> pcode_lines from JSON
        json_data: Optional JSON data to get stack_frame.local_size as fallback

    Returns:
        Tuple of (suspects, resolved_suspects)
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    # Build set of variadic function addresses to exclude
    variadic_addrs = set()
    if func_calls:
        for call in func_calls:
            if call.get('is_variadic', False):
                addr = call.get('addr', '').lower().replace('0x', '').lstrip('0') or '0'
                variadic_addrs.add(addr)

    # Get prologue info
    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)
    frame_offset = get_frame_offset_from_pcode(pcode_data) if has_ebp_frame else None

    # Fallback: use stack_frame.local_size if frame_offset detection failed
    if has_ebp_frame and (frame_offset is None or frame_offset == 0) and json_data:
        local_size = json_data.get('stack_frame', {}).get('local_size', 0)
        if local_size > 0:
            frame_offset = local_size

    # Normalize existing override addresses
    fixed_addresses = set()
    if existing_overrides:
        for addr in existing_overrides.keys():
            normalized = addr.lower().replace('0x', '').lstrip('0') or '0'
            fixed_addresses.add(normalized)

    # Scan for direct CALL instructions with uncertain ESP after
    for i, entry in enumerate(pcode_data):
        if not entry:
            continue
        pcode_lines = entry.get('pcode', [])
        call_addr = entry.get('address', '')

        # Check for direct CALL (ram,ADDR,4) - not CALLIND
        has_direct_call = any('CALL (ram,' in line for line in pcode_lines)
        has_callind = any('CALLIND' in line for line in pcode_lines)

        if not has_direct_call or has_callind:
            continue

        # Extract target address to check if it's variadic
        target_addr = None
        for line in pcode_lines:
            match = re.search(r'CALL \(ram,0x([0-9a-fA-F]+),4\)', line)
            if match:
                target_addr = match.group(1).lower().lstrip('0') or '0'
                break

        # Skip if this is a variadic function (already handled by identify_variadic_calls)
        if target_addr and target_addr in variadic_addrs:
            continue

        # Check ESP certainty at and after the call
        esp_certainty = entry.get('esp_certainty', 'unknown')

        # Look for ADD ESP in next few instructions
        for j in range(i + 1, min(i + 5, len(pcode_data))):
            next_entry = pcode_data[j]
            if not next_entry:
                continue
            next_asm = next_entry.get('assembly', '')

            # Check for ADD ESP, N
            if next_asm.upper().startswith('ADD ') and 'ESP' in next_asm.upper():
                next_certainty = next_entry.get('esp_certainty', 'unknown')

                # Only flag if ESP is uncertain
                if next_certainty in ('computed', 'unknown', 'lost', 'cfg_resolved', 'conflict'):
                    add_esp_value = _parse_add_esp_value(next_asm)
                    add_esp_address = next_entry.get('address', '')

                    # Get return address
                    return_address = pcode_data[i + 1].get('address', '') if i + 1 < len(pcode_data) else None

                    if has_ebp_frame and frame_offset is not None:
                        suspect = {
                            'type': 'call_esp_anchor',
                            'match': 'CALL...ADD ESP',
                            'text': 'Direct CALL at %s, ADD ESP at %s with uncertain ESP' % (call_addr, add_esp_address),
                            'description': 'Direct CALL makes ESP uncertain; fixable with ESP anchor',
                            'call_address': call_addr,
                            'fix_address': add_esp_address,
                            'return_address': return_address,
                            'target_address': '0x%s' % target_addr if target_addr else None,
                            'add_esp_value': add_esp_value,
                            'frame_offset': frame_offset,
                            'esp_certainty': next_certainty,
                        }
                        # Check if already fixed
                        norm_fix = add_esp_address.lower().replace('0x', '').lstrip('0') or '0'
                        if norm_fix in fixed_addresses:
                            resolved_suspects.append(suspect)
                        else:
                            suspects.append(suspect)
                    else:
                        suspect = {
                            'type': 'call_esp_preserve',
                            'match': 'CALL...ADD ESP',
                            'text': 'Direct CALL at %s, ADD ESP at %s (no EBP frame)' % (call_addr, add_esp_address),
                            'description': 'Direct CALL in non-EBP-frame function; fixable with ESP preserve',
                            'call_address': call_addr,
                            'fix_address': add_esp_address,
                            'return_address': return_address,
                            'target_address': '0x%s' % target_addr if target_addr else None,
                            'add_esp_value': add_esp_value,
                            'prologue_offset': prologue_offset,
                            'esp_certainty': next_certainty,
                        }
                        # Check if already fixed
                        norm_call = call_addr.lower().replace('0x', '').lstrip('0') or '0'
                        if norm_call in fixed_addresses:
                            resolved_suspects.append(suspect)
                        else:
                            suspects.append(suspect)
                break  # Only look at first ADD ESP

            # Stop if we hit another call or control flow
            next_pcode = next_entry.get('pcode', [])
            if any(op in ' '.join(next_pcode) for op in ['CALL', 'CALLIND', 'RETURN', 'BRANCH']):
                break

    return suspects, resolved_suspects


def identify_lea_esp_stack_addr(pcode_data, json_data=None):
    """Identify LEA instructions that take the address of ESP-relative stack locations.

    Pattern: LEA REG, [ESP + offset] in non-EBP-frame function.
    This creates a TypeSpacebase pointer that can't be resolved if ESP is uncertain.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        json_data: Optional JSON data to check EBP frame status

    Returns:
        List of suspect dictionaries (detection only, no fix yet)
    """
    suspects = []

    if not pcode_data:
        return suspects

    # Check if EBP frame - less concerning if function has EBP frame
    has_ebp_frame = False
    if json_data:
        has_ebp_frame = json_data.get('function', {}).get('is_ebp_frame', False)

    # In EBP-frame functions, LEA ESP is less problematic since EBP provides anchor
    if has_ebp_frame:
        return suspects

    # Scan for LEA with ESP-relative addressing
    for entry in pcode_data:
        if not entry:
            continue
        asm = entry.get('assembly', '')
        addr = entry.get('address', '')

        # Match LEA REG, [ESP + offset] or [ESP]
        if re.search(r'LEA\s+\w+\s*,\s*\[ESP', asm, re.IGNORECASE):
            # Extract the offset if present
            offset_match = re.search(r'\[ESP\s*\+\s*(0x[0-9a-fA-F]+|\d+)\]', asm, re.IGNORECASE)
            offset = None
            if offset_match:
                try:
                    offset = int(offset_match.group(1), 0)
                except ValueError:
                    pass

            suspects.append({
                'type': 'lea_esp_stack_addr',
                'match': 'LEA...ESP',
                'text': 'LEA takes address of ESP-relative stack location at %s' % addr,
                'description': 'Takes address of stack variable via ESP in non-EBP-frame function',
                'address': addr,
                'instruction': asm,
                'esp_offset': offset,
            })

    return suspects


def identify_special_functions(json_data, func_addr):
    """Identify special functions that have expected BADSPACEBASE issues.

    Categories:
    - Entry point: Program entry has no caller, unusual stack state
    - CRT functions: C runtime with unusual stack manipulation
    - Math intrinsics: Math library functions with unusual patterns

    Args:
        json_data: The function JSON data
        func_addr: Function entry address

    Returns:
        List of suspect dictionaries (detection only)
    """
    suspects = []

    if not json_data:
        return suspects

    func_name = json_data.get('function', {}).get('name', '')

    # Check for entry point
    if func_name == 'entry' or func_name.endswith('_entry'):
        suspects.append({
            'type': 'special_entry_point',
            'match': 'entry',
            'text': 'Program entry point at %s' % func_addr,
            'description': 'Entry point has no caller; stack state is OS-provided',
            'address': func_addr,
            'function_name': func_name,
        })
        return suspects  # Entry point is unique

    # Check for math intrinsics FIRST (before generic CRT check)
    # Math functions may have crt_math prefix but are distinct
    math_patterns = [
        'sin', 'cos', 'tan', 'asin', 'acos', 'atan', 'atan2',
        'sqrt', 'pow', 'exp', 'log', 'log10', 'log2',
        'floor', 'ceil', 'round', 'fabs', 'fmod',
        'sinh', 'cosh', 'tanh', 'ldexp', 'frexp', 'modf'
    ]
    func_lower = func_name.lower()
    for pattern in math_patterns:
        # Match _pattern_ or ending with _pattern or crt_math containing the pattern
        if (('_' + pattern + '_') in func_lower or
            func_lower.endswith('_' + pattern) or
            ('crt_math' in func_lower and pattern in func_lower)):
            suspects.append({
                'type': 'special_math_intrinsic',
                'match': pattern,
                'text': 'Math intrinsic (%s) at %s' % (pattern, func_addr),
                'description': 'Math library function with FPU stack or unusual patterns',
                'address': func_addr,
                'function_name': func_name,
                'math_function': pattern,
            })
            return suspects

    # Check for CRT functions by path or name (after math check)
    if 'crt_' in func_name.lower() or '/crt/' in func_name.lower():
        # Categorize CRT function type
        if 'stack' in func_name.lower():
            crt_type = 'stack manipulation'
        elif 'except' in func_name.lower() or 'seh' in func_name.lower():
            crt_type = 'exception handling'
        elif 'security' in func_name.lower() or 'cookie' in func_name.lower():
            crt_type = 'security cookie'
        else:
            crt_type = 'runtime support'

        suspects.append({
            'type': 'special_crt_function',
            'match': 'crt_',
            'text': 'CRT function (%s) at %s' % (crt_type, func_addr),
            'description': 'C runtime function with non-standard stack patterns',
            'address': func_addr,
            'function_name': func_name,
            'crt_type': crt_type,
        })
        return suspects

    # Check for CPU detection/intrinsic functions (CPUID, MMX detection, etc.)
    cpu_patterns = [
        'cpuid', 'detectintel', 'detectamd', 'detectcpu', 'getcpuinfo',
        'checkmmx', 'checksse', 'detectmmx', 'detectsse', 'cpufeature',
        'processorinfo', 'cpucaps', 'cpuident'
    ]
    for pattern in cpu_patterns:
        if pattern in func_lower:
            suspects.append({
                'type': 'special_cpu_detection',
                'match': pattern,
                'text': 'CPU detection function at %s' % func_addr,
                'description': 'CPU detection code with EFLAGS/CPUID manipulation - expected unusual patterns',
                'address': func_addr,
                'function_name': func_name,
                'cpu_function': pattern,
            })
            return suspects

    return suspects


def identify_format_string_mismatch(decompiled_code, func_calls=None):
    """Identify variadic calls where format string args don't match specifier count.

    For any function marked as variadic in func_calls, finds calls in the
    decompiled code and checks if the format string specifier count matches
    the number of arguments provided after it.

    Args:
        decompiled_code: The decompiled C code as a string
        func_calls: List of function call dicts with 'name' and 'is_variadic' keys

    Returns:
        List of suspect dictionaries for format string mismatches
    """
    suspects = []

    if not decompiled_code or not func_calls:
        return suspects

    # Build set of variadic function address suffixes (FUN_XXXXX)
    # This is more reliable than name matching since names can have dots vs underscores
    variadic_addrs = set()
    for call in func_calls:
        if call.get('is_variadic', False):
            # Use address if available
            addr = call.get('addr', '')
            if addr:
                variadic_addrs.add(addr.lower())
            # Also extract FUN_XXXXX suffix from name as fallback
            name = call.get('name', '')
            addr_match = re.search(r'FUN_([0-9a-fA-F]+)', name)
            if addr_match:
                variadic_addrs.add(addr_match.group(1).lower())

    if not variadic_addrs:
        return suspects

    # Pattern to match function calls - capture function name with potential FUN_XXXXX suffix
    call_pattern = re.compile(r'(\w+)\s*\(')

    lines = decompiled_code.split('\n')
    for line_num, line in enumerate(lines, 1):
        # Find function calls in this line
        for match in call_pattern.finditer(line):
            func_name = match.group(1)

            # Extract address suffix from function name (FUN_XXXXX)
            addr_match = re.search(r'FUN_([0-9a-fA-F]+)', func_name)
            if not addr_match:
                continue
            func_addr = addr_match.group(1).lower()

            # Check if this is a variadic function by address
            if func_addr not in variadic_addrs:
                continue

            # Parse arguments
            args = _parse_call_arguments(line, match.end())
            if args is None or len(args) == 0:
                continue

            # Find the format string argument
            format_idx, format_string = _find_format_string_index(args)
            if format_idx is None:
                continue

            # Count expected arguments from format string
            expected_args = count_format_specifiers(format_string)

            # Count actual arguments after the format string
            actual_args = len(args) - format_idx - 1

            if expected_args != actual_args:
                suspect = {
                    'type': 'format_string_mismatch',
                    'match': line.strip()[:100],
                    'text': 'Format string expects %d args but got %d' % (expected_args, actual_args),
                    'description': 'Format "%s" has %d specifiers but %d arguments after it' % (
                        format_string[:50] + ('...' if len(format_string) > 50 else ''),
                        expected_args,
                        actual_args
                    ),
                    'line_number': line_num,
                    'function_name': func_name,
                    'format_string': format_string,
                    'expected_args': expected_args,
                    'actual_args': actual_args,
                }
                suspects.append(suspect)

    return suspects
