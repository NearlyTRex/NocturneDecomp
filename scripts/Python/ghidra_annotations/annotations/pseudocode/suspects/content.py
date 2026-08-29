# Auto-split from the former monolithic suspects.py — see suspects/__init__.py.
"""Source-text (decompiled-code) suspect detectors and their aggregator
`detect_content_suspects`. The large bulk of the detector suite."""

import bisect
import re
from ._common import (
    SUSPECT_SEVERITY, _extract_balanced_parens, _find_format_string_index, _find_global_at,
    _find_neighbor_after, _parse_call_arguments, count_format_specifiers
)
from ._structtypes import (
    _SFO_ACCESS_RE, _SFO_DECL_RE, _SFO_DEREF_START_RE, _SFO_LOCAL_ASSIGN_RE,
    _SFO_NON_TYPE_KEYWORDS, _SFO_PTR_PARAM_RE, _SFO_SIG_RE,
    _SFO_VALDECL_RE, _SFO_VAL_PARAM_RE, _sfo_field_at_offset,
    _sfo_field_base_deref_overruns, _sfo_field_extent,
    _sfo_field_owner_offset, _sfo_index_const,
    _sfo_resolve_var_types, _sfo_split_ptr_const,
    resolve_access_path_type
)




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
    # Sibling of the above: `(T *)(...(int)(EXPR) +/- ...)` where the `(int)`
    # casts a *parenthesized* pointer-arithmetic expression and the result is
    # used in further +/- byte arithmetic (NOT a `.`/`->` field access, which
    # the rule above already covers). Watcom's 1-based array-base trampoline —
    # e.g. `*(int *)((int)(g_TempNeighborFaces[0].uv_coords + -2) + iVar16 + 4)`
    # writes a struct field via a negative array offset plus a record-stride
    # byte offset. The inner `[^()]*` forbids nested parens, so genuine numeric
    # casts wrapping a call — `(int)(ROUND(x) + y)` — never match.
    (r'\(\w+(?:\s+\w+)*\s*\*+\s*\)\s*\([^)]*\(int\)\s*\([^()]*\)\s*[-+]',
     'pointer_cast', 'Complex pointer cast (int-cast of parenthesized pointer arithmetic)'),
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
    # Raw-address pointer-array store: `*(TYPE **)(... 0xLARGEHEX ...)`. Ghidra
    # lost the symbolic global for a pointer array and baked its base address as
    # a hex constant, storing/reading elements via `index * 4 + 0xADDR`. Two
    # bugs in one: (1) the raw address SEGVs in the relinked binary, and often
    # it is the §15 Watcom 1-based form where the constant is `global_base -
    # element_size` (so identify_raw_address_constant_suspects, which needs the
    # literal to land *inside* a global interval, misses it); (2) the `* 4`
    # stride assumes 32-bit pointers and corrupts the array on the 64-bit build.
    # Fix in a .keep: use the symbolic global indexed by element, e.g.
    # `g_ClipperCullingPointers[iVar7 + -1] = ...`. The hex is 6-8 digits to stay
    # in the binary's data-address range (>= 0x100000) and skip small offsets.
    (r'\*\s*\(\s*\w+(?:\s+\w+)*\s*\*\s*\*\s*\)\s*\(\s*[^)]*0x[0-9a-fA-F]{6,8}\b',
     'raw_address_pointer_store',
     'Pointer-array store through a raw address constant (lost symbolic global; '
     '§11/§15) — use the symbolic global indexed by element'),
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
    # Numeric (double) cast of a value shifted into the high 32 bits:
    # `(double)((ulonglong)X << 0x20)`. Ghidra mis-rendered an x87 bit-cast (FLD
    # of a double whose high dword is X and low dword 0) as a NUMERIC conversion.
    # As decompiled this computes a garbage ~10^18 value at runtime instead of the
    # intended double. Decode `X << 0x20` as the IEEE-754 double (low dword 0) —
    # 0x3ff00000 -> 1.0, 0xbff00000 -> -1.0 — and replace with that literal in a
    # .keep; when X is a runtime-selected sign value, make X itself a +/-1.0 double.
    (r'\(double\)\s*\(\s*\(ulonglong\)[^;<]*<<\s*0x20', 'bitcast_double_numeric',
     'Numeric (double) cast of `(ulonglong)X << 0x20` — Ghidra mis-rendered a bit-cast (double from high dword X, low 0) as a numeric conversion; produces a garbage ~10^18 value at runtime. Decode X<<0x20 as the IEEE-754 double in a .keep (0x3ff00000->1.0, 0xbff00000->-1.0).'),
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




# Narrowing casts: target types strictly smaller than a 64-bit pointer (8 bytes
# on the LP64 native build). Casting a pointer to any of these truncates the
# high 32 bits — fine on the 32-bit matching build, a hard `cast from pointer to
# smaller type loses information` error at 64-bit. Deliberately EXCLUDES the
# pointer-width types (`long`/`ulong`/`longlong`/`size_t`/`intptr_t`/
# `uintptr_t`/`undefined8`), which are the correct destinations for a pointer
# value and the target of the eventual fix.
_PTR_TRUNC_NARROW_TYPES = frozenset({
    'int', 'uint', 'short', 'ushort', 'char', 'uchar', 'byte', 'bool',
    'undefined1', 'undefined2', 'undefined4',
    'int3', 'uint3', 'byte2', 'byte3',
})


# `(TYPE)` immediately followed by the operand. Operand capture starts after.
_PTR_TRUNC_CAST_RE = re.compile(
    r'\((' + '|'.join(sorted(_PTR_TRUNC_NARROW_TYPES, key=len, reverse=True)) +
    r')\)\s*')


# An access-path operand: optional `&`, a root identifier, then any number of
# `->field` / `.field` / `[..]` steps. Stops at the first operator / paren /
# whitespace so we capture exactly one operand.
_PTR_TRUNC_OPERAND_RE = re.compile(
    r'(&)?\s*([A-Za-z_]\w*)((?:\s*(?:->|\.)\s*[A-Za-z_]\w*|\s*\[[^\]]*\])*)')


_PTR_TRUNC_LAST_STEP_RE = re.compile(
    r'(?:->|\.)\s*([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$')


# A subscript applied immediately after a parenthesized operand, i.e. the `[i]`
# in `(int)(&AGG.field)[i]`. Such a subscript dereferences the parenthesized
# value into an element.
_PTR_TRUNC_TRAILING_SUB_RE = re.compile(r'\s*(\[[^\]]*\])')


# One or more subscript groups at the START of a line — used to fold a
# subscript that Ghidra wrapped onto the next line (`(uint)p->field\n[i]`)
# back onto its operand, so the pointer-vs-scalar decision sees the deref.
_PTR_TRUNC_WRAP_SUB_RE = re.compile(r'\s*((?:\[[^\]]*\]\s*)+)')


# A relational/equality operator immediately following the leading operand of a
# parenthesized cast operand, i.e. the `!=` in `(uint)(PTR != 0)`. When present,
# the parenthesized expression yields a bool, so the cast widens that bool, not
# the pointer — not a truncation. Excludes the shift operators `<<`/`>>` (which
# are not comparisons) via the negative lookaheads.
_PTR_TRUNC_CMP_RE = re.compile(r'\s*(?:==|!=|<=|>=|<(?!<)|>(?!>))')




def _ptr_trunc_decl_pointer_vars(code):
    """Identifiers declared as pointers in this function's text.

    Reads the `// Signature:` params and local `T *name;` declarations,
    PRESERVING pointer-ness (unlike `_sfo_resolve_var_types`, which strips the
    `*` to map vars to struct names for field-walking). Returns (ptr_vars,
    var_struct) where ptr_vars is the set of pointer identifiers and var_struct
    maps identifier -> declared base type name (for struct field resolution).
    """
    ptr_vars = set()
    var_struct = {}
    lines = code.split('\n')
    for line in lines:
        m = _SFO_SIG_RE.search(line)
        if not m:
            continue
        for part in m.group(1).split(','):
            part = part.strip()
            pm = _SFO_PTR_PARAM_RE.match(part)
            if pm:
                ptr_vars.add(pm.group(2))
                var_struct[pm.group(2)] = pm.group(1)
            else:
                vm = _SFO_VAL_PARAM_RE.match(part)
                if vm:
                    var_struct[vm.group(2)] = vm.group(1)
        break
    for line in lines:
        dm = _SFO_DECL_RE.match(line)
        if dm and dm.group(1) not in _SFO_NON_TYPE_KEYWORDS:
            ptr_vars.add(dm.group(2))
            var_struct[dm.group(2)] = dm.group(1)
            continue
        vm = _SFO_VALDECL_RE.match(line)
        if vm and vm.group(1) not in _SFO_NON_TYPE_KEYWORDS:
            var_struct.setdefault(vm.group(2), vm.group(1))
    return ptr_vars, var_struct




def _ptr_trunc_field(struct_name, field, layout):
    """Look up a field dict in the layout map, or None."""
    for fl in (layout or {}).get(struct_name, ()):
        if fl.get('name') == field:
            return fl
    return None




def _ptr_trunc_operand_is_pointer(amp, root, steps, ptr_vars, var_struct,
                                  global_ptr, global_arr_ptr, layout):
    """Decide whether a narrowing-cast operand holds a pointer value.

    amp           '&' if the operand is address-of (always a pointer), else ''.
    root          leading identifier.
    steps         trailing '->f'/'.f'/'[..]' text (may be empty).
    ptr_vars      pointer locals/params.
    var_struct    identifier -> declared base type name.
    global_ptr    set of pointer-typed global names.
    global_arr_ptr set of global names that are arrays-of-pointer.
    layout        struct field layout map (with 'is_ptr'/'stars'/'n').

    Conservative: returns False ("don't know") rather than guessing, so the
    64-bit compiler stays the exhaustive backstop and false positives stay low.
    """
    if amp:
        # &EXPR is an address. `&arr[i]`, `&x->f` etc. are all pointers; a
        # trailing field/element access of an address is still address-typed.
        return True

    has_subscript = steps.rstrip().endswith(']')
    last = _PTR_TRUNC_LAST_STEP_RE.search(steps) if steps else None

    if not steps:
        # Bare identifier.
        if root in global_arr_ptr or root in global_ptr:
            # `(int)g_ptr` truncates; `(int)g_ptrArray` (array decay) also.
            return True
        return root in ptr_vars

    if last is None:
        # Steps are only subscripts on the root, e.g. `g_PtrArray[i]`.
        if has_subscript:
            if root in global_arr_ptr:
                # `T* arr[N]`: ONE subscript yields the pointer element
                # (`arr[i]` -> `T*`, a real truncation target). A SECOND
                # subscript dereferences that element into a scalar
                # (`arr[i][j]` -> `T`, e.g. a z-buffer depth value), which is
                # not a pointer — so only a single subscript flags here.
                return len(re.findall(r'\[[^\]]*\]', steps)) == 1
            # element of a pointer-to-scalar (`int *p; p[i]`) is NOT a pointer
            return False
        return root in ptr_vars or root in global_ptr

    # Path ends in `->field` / `.field`, optionally with a trailing `[i]`.
    fname = last.group(1)
    field_subscript = last.group(2) is not None
    # Resolve the struct type the final field lives in: walk var_struct ->
    # layout across the intermediate steps. Reuse resolve_access_path_type on
    # the path WITHOUT the final field to get the owning struct.
    prefix = steps[:last.start()]
    owner = None
    if not prefix:
        owner = var_struct.get(root)
    else:
        owner = resolve_access_path_type(root + prefix, var_struct, layout)
    fld = _ptr_trunc_field(owner, fname, layout) if owner else None
    if not fld or not fld.get('is_ptr'):
        return False
    if field_subscript:
        # `field[i]`: element is a pointer only if the field is an array of
        # pointers (`T *f[N]`) or a multi-level pointer (`T **f`).
        return bool(fld.get('n')) or fld.get('stars', 0) >= 2
    return True




def identify_pointer_truncation_suspects(decompiled_code, func_globals=None,
                                         global_interval_map=None,
                                         struct_layout_map=None):
    """Detect pointer values truncated by a cast to a sub-pointer-width int.

    Catches the broad `(int)PTR` / `(uint)PTR` family that the narrow
    `pointer_cast` / `suspicious_cast` patterns miss: pointer differences
    (`(int)a - (int)b`), pointer-as-int offsets added to a separately-cast base
    (`(char*)p + (int)q->field`), address printing (`(uint)this`), pointers
    stored in int globals (`g = (int)p`), and pointer comparisons
    (`0 < (int)p`). These compile and run correctly on the 32-bit matching
    build but are hard errors at 64-bit (`cast from pointer to smaller type
    loses information`) — the chief obstacle to a multilib-free build.

    Pointer-ness is determined from declared types (params/locals preserving
    `*`, global types, and struct field layout), NOT from Hungarian naming —
    so genuinely mistyped operands like `(int)frame_index` (a pointer despite
    the name) are still caught, and integer locals that merely look pointerish
    are not falsely flagged. The 64-bit compiler remains the exhaustive oracle;
    this detector surfaces the same sites in the annotation/review pipeline.

    Args:
        decompiled_code: The decompiled C pseudocode string.
        func_globals: Unused; kept for caller signature symmetry.
        global_interval_map: (start, end, name, type) tuples — source of global
            pointer-ness.
        struct_layout_map: Per-struct field layout from build_struct_layout_map
            (must carry the 'is_ptr'/'stars'/'n' keys).

    Returns:
        List of suspect dicts (type 'pointer_truncation').
    """
    suspects = []
    if not decompiled_code:
        return suspects

    layout = struct_layout_map or {}
    ptr_vars, var_struct = _ptr_trunc_decl_pointer_vars(decompiled_code)

    global_ptr = set()
    global_arr_ptr = set()
    for _start, _end, name, gtype in (global_interval_map or ()):
        if gtype and '*' in gtype:
            global_ptr.add(name)
            if '[' in gtype:
                global_arr_ptr.add(name)

    def operand_is_ptr(amp, root, steps):
        return _ptr_trunc_operand_is_pointer(
            amp, root, steps, ptr_vars, var_struct,
            global_ptr, global_arr_ptr, layout)

    seen = set()
    _lines = decompiled_code.split('\n')
    for line_no, line in enumerate(_lines, 1):
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('#') or stripped.startswith('/*'):
            continue
        for cm in _PTR_TRUNC_CAST_RE.finditer(line):
            rest = line[cm.end():]
            lead = len(rest) - len(rest.lstrip())
            if rest[lead:lead + 1] == '(':
                # Parenthesized operand `(int)(EXPR)` — Watcom pointer
                # arithmetic, e.g. `(int)(puVar5 + 2)` or `(int)(a - ptr)`.
                # Test the FIRST access-path inside the parens; for pointer
                # arithmetic that leading term is the pointer. Plain numeric
                # exprs `(int)(uVar1 + 3 & ...)` lead with a non-pointer and
                # are left alone.
                expr = _extract_balanced_parens(rest[lead:])
                if expr is None:
                    continue
                inner = expr[1:-1].strip()
                im = _PTR_TRUNC_OPERAND_RE.match(inner)
                if not im:
                    continue
                if _PTR_TRUNC_CMP_RE.match(inner, im.end()):
                    # `(uint)(PTR != 0)` etc. — the parens hold a comparison, so
                    # the cast widens a bool result, not the pointer. Skip.
                    continue
                amp_in = im.group(1) or ''
                after = rest[lead + len(expr):]
                sub = _PTR_TRUNC_TRAILING_SUB_RE.match(after)
                if sub:
                    # `(EXPR)[i]` subscripts the parenthesized operand, which
                    # dereferences it back into an element. `(&AGG.field)[i]`
                    # reads a sibling of `field` (Watcom's parallel-array
                    # idiom) — a scalar unless `field` is itself pointer-typed.
                    # The widening cast then targets that element, NOT a
                    # pointer, so resolve the element type (drop the `&`) and
                    # only flag a genuine pointer element.
                    if not amp_in:
                        # `(ptr)[i]` pointee type isn't tracked — stay
                        # conservative and skip.
                        continue
                    if not operand_is_ptr('', im.group(2), im.group(3) or ''):
                        continue
                    operand = expr + sub.group(1)
                elif not operand_is_ptr(amp_in, im.group(2), im.group(3) or ''):
                    continue
                else:
                    operand = expr
            else:
                om = _PTR_TRUNC_OPERAND_RE.match(line, cm.end())
                # A cast-of-a-cast (`(int)(uint)x`) has no identifier where the
                # operand regex expects one; `om` won't match, so we skip safely.
                if not om:
                    continue
                amp = om.group(1) or ''
                root = om.group(2)
                steps = om.group(3) or ''
                # Fold a subscript/field path that Ghidra wrapped across lines so
                # the pointer-vs-scalar decision sees the full deref (scalar
                # element -> skip; pointer element -> still flagged). Two shapes:
                # a subscript that OPENS on this line but closes on a later one
                # (`(int)p[(a +\n b)].height`), and one that BEGINS on the next
                # line (`(uint)p->field\n  [i]`). Without this a pointer-to-scalar
                # access reads as a bare truncated pointer and false-positives.
                joined = line[om.end():]
                li = line_no            # 0-based index of the NEXT line
                guard = 0
                while (li < len(_lines) and guard < 6 and
                       (joined.count('[') > joined.count(']') or
                        (not joined.strip() and
                         _lines[li].lstrip().startswith('[')))):
                    joined += ' ' + _lines[li]
                    li += 1
                    guard += 1
                wm = re.match(
                    r'\s*((?:\[[^\]]*\]|\s*(?:->|\.)\s*[A-Za-z_]\w*)+)', joined)
                if wm and wm.group(1).strip():
                    steps = steps + wm.group(1).strip()
                if not operand_is_ptr(amp, root, steps):
                    continue
                operand = (amp + root + steps).strip()
            cast_type = cm.group(1)
            key = (line_no, cm.start())
            if key in seen:
                continue
            seen.add(key)
            suspects.append({
                'line': line_no,
                'type': 'pointer_truncation',
                'match': '(%s)%s' % (cast_type, operand),
                'text': stripped,
                'description': (
                    'Pointer value `%s` truncated by cast to `%s` (sub-pointer '
                    'width) — correct on the 32-bit matching build, a hard '
                    '`cast from pointer to smaller type` error at 64-bit. If the '
                    'value is used as an integer (delta, address print, hash), '
                    'rewrite the cast as `uintptr_t`/`intptr_t` in a .keep.'
                    % (operand, cast_type)),
                'severity': SUSPECT_SEVERITY.get('pointer_truncation', 'moderate'),
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



# Watcom's plainest inline-memcpy lowering: a countdown loop with a
# *cast* dword store (`*(uint *)dst = *(uint *)src;`) and both pointers
# stepped by `+ 4` (the dword stride). Emitted when the copy count is a
# constant (e.g. a fixed 768-byte palette = 0xc0 dwords) so Watcom never
# splits off a `>> 2` / `& 3` tail. The TYPED-pair detector in
# `identify_unrolled_memcpy_loops` misses this because that one requires an
# uncast `*ptr = *src;` store and a `+ 1` increment.
_UNROLLED_MEMCPY_DWORD_CAST_STORE_RE = re.compile(
    r"^\s*\*\s*\(\s*u?int\s*\*\s*\)\s*\w+\s*=\s*"
    r"\*\s*\(\s*u?int\s*\*\s*\)\s*\w+\s*;\s*$")


_UNROLLED_MEMCPY_STRIDE4_INC_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*4\s*;\s*$")




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




def identify_unrolled_memcpy_dword_cast_loop(decompiled_code):
    """Detect Watcom's constant-count cast-dword inline-memcpy loop.

    Canonical shape (no direction idiom, no `>> 2` / `& 3` tail split):
        for (iVar = 0xc0; iVar != 0; iVar = iVar + -1) {
            *(uint *)dst = *(uint *)src;
            src = src + 4;
            dst = dst + 4;
        }

    This is Watcom's REP MOVSD lowering when the copy count is a constant
    (the dword count is baked in, e.g. a fixed 768-byte / 0xc0-dword palette
    copy in CColorQuantizer_applyQuantization), so there is no `N >> 2`
    dword loop paired with an `N & 3` byte tail. The two existing for-loop
    detectors both miss it:
      * identify_unrolled_memcpy_loops requires either the `(uint)bool`
        direction idiom or an *uncast* `*ptr = *src;` store with a `+ 1`
        increment — this shape has a *cast* store and `+ 4` advances.
      * identify_unrolled_memcpy_dword_byte_split requires the `>> 2` / `& 3`
        header pair.

    The cast-dword store plus BOTH pointers stepped by exactly the dword
    stride (`+ 4`) is an unambiguous fingerprint — a generic "do N times"
    countdown loop does not move two pointers in lockstep by 4 bytes.

    Replace the loop with `memcpy(dst, src, count * 4)` in a .keep.

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
        # The `N >> 2` / `N & 3` paired form is identify_unrolled_memcpy_
        # dword_byte_split's territory — skip so we never double-flag its
        # dword half (which has the same cast-store + `+ 4` body).
        if (_UNROLLED_MEMCPY_DWORD_FOR_RE.match(lines[i]) or
                _UNROLLED_MEMCPY_BYTE_FOR_RE.match(lines[i])):
            continue
        has_cast_store = False
        has_direction = False
        stride4_incs = 0
        close_line = None
        for fwd in range(1, 8):
            if i + fwd >= n:
                break
            body = lines[i + fwd]
            if _UNROLLED_MEMCPY_DIR_RE.search(body):
                has_direction = True
            if _UNROLLED_MEMCPY_DWORD_CAST_STORE_RE.match(body):
                has_cast_store = True
            if _UNROLLED_MEMCPY_STRIDE4_INC_RE.match(body):
                stride4_incs += 1
            if body.strip().startswith('}'):
                close_line = i + fwd
                break
        # A direction idiom means identify_unrolled_memcpy_loops already
        # flags this loop — stay quiet to avoid duplicate diagnostics.
        if has_direction:
            continue
        # Require the cast-dword store AND both pointers advanced by +4.
        if not (has_cast_store and stride4_incs >= 2 and close_line):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_memcpy',
            'match': 'for (X = N; ...) { *(uint *)d = *(uint *)s; d/s += 4; }',
            'text': lines[i].strip()[:120],
            'description': (
                'Watcom loop-unrolled memcpy (constant-count countdown loop '
                'with a cast-dword store `*(uint *)dst = *(uint *)src;` and '
                'both pointers stepped by +4 — REP MOVSD lowering with a '
                'baked-in dword count). Replace the loop with '
                'memcpy(dst, src, count * 4) in a .keep.'),
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




def _field_copy_run_is_contiguous(struct_name, field_names, layout):
    """Return True if `field_names` occupy a single contiguous byte span in
    `struct_name` (sorted by offset, no gaps), False if they don't, or None
    if any field can't be resolved.

    A genuine unrolled struct copy always covers a contiguous range of bytes
    (it lowered from one REP MOVSD / inline block move), so its named fields
    form an uninterrupted span. A run of same-named `dst.f = src.f;` lines
    over *non-adjacent* fields (e.g. CPoly_copyFrom's
    `material_id`(0x5c)/`flags`(0x60)/`normal`(0x40) — `normal` sits before
    the other two with a gap) is coincidental, not a collapsible
    `memcpy`/`dst = src;`. None ("don't know") so the caller stays
    conservative and does not suppress on unresolved fields.
    """
    flds = layout.get(struct_name) if layout else None
    if not flds:
        return None
    by_name = {fl['name']: fl for fl in flds}
    extents = []
    for nm in field_names:
        fl = by_name.get(nm)
        if fl is None or 'offset' not in fl or 'len' not in fl:
            return None
        extents.append((fl['offset'], fl['offset'] + fl['len']))
    extents.sort()
    for k in range(1, len(extents)):
        if extents[k][0] != extents[k - 1][1]:
            return False
    return True




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
        # Trailing field names copied by the run, in source order. Used by
        # the flat-run contiguity suppression below.
        run_fields = [m.group(2)]
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
            run_fields.append(mj.group(2))
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
                # Contiguity suppression: a real unrolled struct copy spans a
                # contiguous field range. A flat same-name run over
                # non-adjacent fields (gaps / out-of-order offsets) can't
                # collapse to one `memcpy`/`dst = src;` — it's coincidental
                # field-name overlap, not a block move. Only suppress when the
                # field offsets resolve and prove non-contiguity (None = keep).
                if lhs_t and _field_copy_run_is_contiguous(
                        lhs_t, run_fields, struct_layout_map) is False:
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
                    'in a .keep — but only once the run (together with any '
                    'sibling runs for the same dst/src pair) covers every '
                    'byte of the struct. Collapsing a run that leaves a gap '
                    'WIDENS the copy and changes behaviour; see '
                    '`partial_struct_copy` (§31) for that case.' % run_len),
                'severity': 'moderate',
            })
            i = j
        else:
            i += 1
    return suspects




# =============================================================================
# Partial struct copy (§31) — a struct copy Ghidra truncated to a subset of
# the destination's fields, leaving the rest uninitialised at runtime.
# =============================================================================
#
# Where `identify_unrolled_field_copy` above collapses a COMPLETE field-by-field
# copy for readability, this detector is a correctness check on the same shape:
# the run copies `dst.<path> = src.<path>` for some fields but leaves a byte GAP
# in `dst`, and `dst` is then handed to a call by address. The callee reads the
# whole struct, so the uncopied bytes are whatever the stack happened to hold.
#
# `missing_cave_copy` (assembly.py, §20 quaternary pass) covers the one-surviving
# -field case but requires the asm AND disqualifies on any second field write, so
# a 2-of-3 truncation is invisible to it. This pass is source-side and
# byte-coverage based, so it sees any partial subset.
#
# Confirmed instances (all three the same runtime signature — garbage world
# coordinates from an uninitialised CVector3i):
#   CDemonCamera::precomputeNormals  `local_60.z = local_84.z;`   (env lighting dead)
#   CDemonCamera::precomputeLight    `.x`/`.y` copied, `.z` dropped
#   updateListeners                  `local_e4.z = local_3c.z;`
#
# Two gates keep this at zero false positives across the corpus:
#   1. PRODUCER gate — if `&dst` is passed to a call BEFORE the copy, the
#      destination was already filled by a ctor/init (`SLaserInfo_ctor(&dst)`,
#      `initIntersectionCylinder(&dst, ...)`) and the gap is not uninitialised.
#   2. ALIAS gate — every `&dst` occurrence must be a plain call argument. A
#      `&dst` inside arithmetic (`*(uint *)((int)&dst + 4) = ...`) or assigned
#      to a pointer local means bytes can be written through an alias this
#      field-name scan cannot account for, so we cannot prove a gap exists.
_PARTIAL_COPY_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)((?:\.[A-Za-z_]\w*)+)\s*=\s*([A-Za-z_]\w*)\2\s*;\s*$')


_PARTIAL_COPY_ANY_WRITE_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)((?:\.[A-Za-z_]\w*)+)\s*=(?!=)')


_PARTIAL_COPY_PTR_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*\s*\*+\s*([A-Za-z_]\w*)\s*[;=]', re.M)


def _partial_copy_merge(intervals):
    """Merge a list of [start, end) byte intervals into disjoint spans."""
    out = []
    for a, b in sorted(intervals):
        if out and a <= out[-1][1]:
            out[-1] = (out[-1][0], max(out[-1][1], b))
        else:
            out.append((a, b))
    return out


def _partial_copy_gaps(covered, full):
    """Byte spans present in `full` but not in `covered` (both [start, end))."""
    covered = _partial_copy_merge(covered)
    gaps = []
    for a, b in _partial_copy_merge(full):
        cur = a
        for ca, cb in covered:
            if cb <= cur or ca >= b:
                continue
            if ca > cur:
                gaps.append((cur, min(ca, b)))
            cur = max(cur, cb)
            if cur >= b:
                break
        if cur < b:
            gaps.append((cur, b))
    return gaps


def identify_partial_struct_copy(decompiled_code, struct_layout_map=None):
    """Detect struct copies Ghidra truncated to a subset of the fields.

    Shape:
        f(..., &src);                 // src filled by the callee
        dst.x = src.x;                // only SOME of dst's bytes written
        dst.y = src.y;                //   (.z never assigned anywhere)
        g(..., &dst, ...);            // callee reads all of dst -> garbage .z

    Runs are grouped per (dst, src) pair and matched on an identical field
    path on both sides, so nested copies (`dst.a.b = src.a.b`) count toward
    coverage too. Every other write to `dst.<path>` in the function is folded
    into the covered set before the gap is computed, so a field assigned
    separately is not reported as missing. See §31 for the fix pattern.

    Type-aware: needs a struct layout map (field offsets/lengths) and is inert
    without one, like the other `_sfo_*`-backed detectors.

    Args:
        decompiled_code: The decompiled C pseudocode string.
        struct_layout_map: struct name -> field layout, from
            `get_struct_layout_map()` / `build_struct_layout_map()`.

    Returns:
        List of suspect dicts, one per (dst, src) pair with an uncovered gap.
    """
    suspects = []
    if not decompiled_code or not struct_layout_map:
        return suspects
    lines = decompiled_code.split('\n')
    var_types = _sfo_resolve_var_types(decompiled_code)
    ptr_vars = set(_PARTIAL_COPY_PTR_DECL_RE.findall(decompiled_code))

    runs = {}
    for i, line in enumerate(lines):
        m = _PARTIAL_COPY_RE.match(line)
        if not m:
            continue
        dst, path, src = m.group(1), m.group(2), m.group(3)
        if dst == src or dst in ptr_vars or src in ptr_vars:
            continue
        runs.setdefault((dst, src), []).append((i, path))

    if not runs:
        return suspects

    # Every `dst.<path> = ...` write in the function, copy or not.
    writes = {}
    for line in lines:
        m = _PARTIAL_COPY_ANY_WRITE_RE.match(line)
        if m:
            writes.setdefault(m.group(1), []).append(m.group(2))

    for (dst, src), items in runs.items():
        struct_name = var_types.get(dst)
        if not struct_name or struct_name != var_types.get(src):
            continue
        fields = struct_layout_map.get(struct_name)
        if not fields:
            continue
        full = [(f['offset'], f['offset'] + f['len']) for f in fields]
        covered = []
        resolved = True
        for _, path in items:
            extent = _sfo_field_extent(dst + path, var_types, struct_layout_map)
            if not extent:
                resolved = False
                break
            covered.append((extent[1], extent[1] + extent[2]))
        if not resolved:
            continue
        for path in writes.get(dst, []):
            extent = _sfo_field_extent(dst + path, var_types, struct_layout_map)
            if extent:
                covered.append((extent[1], extent[1] + extent[2]))
        gaps = _partial_copy_gaps(covered, full)
        if not gaps:
            continue

        first = items[0][0]
        # ALIAS gate — `&dst` must only ever appear as a plain call argument.
        plain_amp = re.compile(
            r'(?<=[(,])\s*&\s*' + re.escape(dst) + r'\s*(?=[,)])')
        any_amp = re.compile(r'&\s*' + re.escape(dst) + r'\b')
        if any(len(any_amp.findall(l)) != len(plain_amp.findall(l))
               for l in lines):
            continue
        # `dst` must be CONSUMED as a whole struct after the truncated copy...
        if not any(any_amp.search(lines[j]) for j in range(first + 1, len(lines))):
            continue
        # ...and must NOT have been PRODUCED by a call before it.
        if any(any_amp.search(lines[j]) for j in range(0, first)):
            continue

        missing = sorted({f['name'] for f in fields
                          for a, b in gaps
                          if f['offset'] < b and f['offset'] + f['len'] > a})
        covered_bytes = sum(b - a for a, b in _partial_copy_merge(covered))
        total_bytes = sum(b - a for a, b in _partial_copy_merge(full))
        suspects.append({
            'line': first + 1,
            'type': 'partial_struct_copy',
            'match': "{d}{p} = {s}{p}; (partial {t} copy — {cb}/{tb} bytes)".format(
                d=dst, s=src, p=items[0][1], t=struct_name,
                cb=covered_bytes, tb=total_bytes),
            'text': lines[first].strip()[:120],
            'description': (
                "Partial struct copy: `{d}` ({t}) receives only {cb} of {tb} "
                "bytes from `{s}` — field(s) `{miss}` are never assigned "
                "anywhere in the function — and `&{d}` is then passed to a "
                "call that reads the whole struct, so those bytes are "
                "uninitialised stack at runtime. Ghidra truncated a "
                "`{d} = {s};` struct copy. See §31 — restore the full copy "
                "(or pass `&{s}` directly if the two are the same Watcom "
                "stack object).").format(
                    d=dst, s=src, t=struct_name, cb=covered_bytes,
                    tb=total_bytes, miss=', '.join(missing)),
            'severity': 'moderate',
        })
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
#
# The nested form IS decidable once the struct maps are available, so the
# second pass below (_SUBFIELD_STRUCT_PUN_RE) handles it exactly rather than
# by regex guesswork. This first pass stays as the map-free fallback.
_SUBFIELD_VECTOR_PUN_RE = re.compile(
    r'\(\s*(CVector3[fi])\s*\*\s*\)\s*'        # cast to (CVector3f/i *)
    r'&\s*'                                     # address-of
    r'(\w+)'                                     # bare local identifier
    r'\s*\.\s*([yz])\b'                          # .y or .z component
)


# §26 nested form — sub-field address of a *struct* local, cast to a struct
# pointer: `(CBoundingBox3D *)&local_box.max.y`. Whether this overruns is not
# guesswork once the layout/size maps are in hand; it is arithmetic:
#
#     overrun  <=>  sizeof(CastType) > sizeof(typeof(LOCAL)) - offset(path)
#
# The dominant real-world case is a *self-typed* pun, where CastType is the
# same type as LOCAL and the path offset is non-zero — a full-object access
# starting mid-object, which overruns by exactly the offset. Ghidra emits it
# when its stack-local partition disagrees with Watcom's real frame layout, so
# the sub-field address happens to name the right byte offset. Faithful under
# Watcom's compact frame; a guaranteed `stack-buffer-overflow` under ASan.
#
# Canonical: CDemonActor::processMeleeHit passed `&local_f8.max.y` (offset 16
# into a 24-byte CBoundingBox3D) to a getBoundingBox vtable call, so the
# callee's 24-byte write ran 8 bytes past the local.
_SUBFIELD_STRUCT_PUN_RE = re.compile(
    r'\(\s*(\w+)\s*\*\s*\)\s*'                  # cast to (T *)
    r'&\s*'                                     # address-of
    r'([A-Za-z_]\w*)'                           # bare local identifier
    r'((?:\s*\.\s*[A-Za-z_]\w*)+)'              # one or more .field steps
)

# The pun sits directly on one side of an equality test — address identity
# only, never a dereference.
_CMP_BEFORE_RE = re.compile(r'(==|!=)\s*$')
_CMP_AFTER_RE = re.compile(r'\s*(==|!=)')




def _sfp_struct_size(type_name, struct_layout_map, struct_size_map):
    """Byte size of `type_name`, preferring the exact Ghidra struct size.

    Falls back to `last_field.offset + last_field.len` from the layout (exact
    for this project's `#pragma pack(push, 1)` structs). Returns None when the
    type is unknown, so callers stay conservative.
    """
    if struct_size_map:
        size = struct_size_map.get(type_name)
        if size:
            return size
    fields = (struct_layout_map or {}).get(type_name)
    if not fields:
        return None
    last = fields[-1]
    if last.get('offset') is None or last.get('len') is None:
        return None
    return last['offset'] + last['len']


def _sfp_path_offset(root_type, path, struct_layout_map):
    """Walk a `.f1.f2...` field path from `root_type`, returning (offset, type).

    Returns (None, None) if any step can't be resolved, so an unknown field
    never produces a bogus offset.
    """
    offset = 0
    cur = root_type
    for fname in path:
        fields = (struct_layout_map or {}).get(cur)
        if not fields:
            return None, None
        match = None
        for fld in fields:
            if fld['name'] == fname:
                match = fld
                break
        if match is None or match.get('offset') is None:
            return None, None
        offset += match['offset']
        cur = match.get('type')
    return offset, cur


def identify_subfield_vector_pun(decompiled_code, struct_layout_map=None,
                                 struct_size_map=None):
    """Detect §26 sub-field-address field-puns.

    Two passes:

    1. Map-free vector form — `(CVector3f *)&LOCAL.y` / `&LOCAL.z`, the address
       of a non-first component of a vector local cast to a vector pointer, so
       a 3-component access starts mid-vector and overruns the local.
    2. Map-driven struct form — `(T *)&LOCAL.f1.f2` where the byte offset of
       the path and the sizes of `T` and `typeof(LOCAL)` are all known, and
       `sizeof(T) > sizeof(typeof(LOCAL)) - offset`. This is exact arithmetic
       rather than a heuristic, so it carries no false positives; it is inert
       without the maps.

    Args:
        decompiled_code: The decompiled C pseudocode string.
        struct_layout_map: struct -> sorted field list (build_struct_layout_map).
        struct_size_map: struct -> exact byte size (build_struct_size_map).

    Returns:
        List of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    seen = set()

    def _skip(line):
        s = line.lstrip()
        return s.startswith('//') or s.startswith('/*') or s.startswith('*')

    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        if _skip(line):
            continue
        for m in _SUBFIELD_VECTOR_PUN_RE.finditer(line):
            vtype, base, comp = m.group(1), m.group(2).replace(' ', ''), m.group(3)
            seen.add((line_no, base, (comp,)))
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

    if not struct_layout_map:
        return suspects
    var_types = _sfo_resolve_var_types(decompiled_code)
    if not var_types:
        return suspects

    for line_no, line in enumerate(decompiled_code.split('\n'), 1):
        if _skip(line):
            continue
        for m in _SUBFIELD_STRUCT_PUN_RE.finditer(line):
            cast_type = m.group(1)
            base = m.group(2)
            path = tuple(p.strip() for p in m.group(3).split('.') if p.strip())
            if not path or (line_no, base, path) in seen:
                continue
            # The field path continues into an array subscript
            # (`&local.arr[7].field.z`), so what matched is only its prefix.
            # Resolving the real offset needs index-aware math; bail rather
            # than score a truncated path and report a bogus overrun.
            if line[m.end():m.end() + 1] == '[':
                continue
            # A pun that is only *compared* (`&x != (T *)&x.max`) never
            # dereferences, so it cannot overrun. Those are dead
            # address-identity guards — tautological_addr_guard's job, not
            # this detector's.
            if (_CMP_BEFORE_RE.search(line[:m.start()]) or
                    _CMP_AFTER_RE.match(line[m.end():])):
                continue
            local_type = var_types.get(base)
            if not local_type or local_type not in struct_layout_map:
                continue
            cast_size = _sfp_struct_size(cast_type, struct_layout_map,
                                         struct_size_map)
            local_size = _sfp_struct_size(local_type, struct_layout_map,
                                          struct_size_map)
            if not cast_size or not local_size:
                continue
            offset, _ = _sfp_path_offset(local_type, path, struct_layout_map)
            if offset is None or offset <= 0:
                continue
            remaining = local_size - offset
            if cast_size <= remaining:
                continue
            seen.add((line_no, base, path))
            expr = '(%s *)&%s.%s' % (cast_type, base, '.'.join(path))
            selfty = ' (same type as the local)' if cast_type == local_type else ''
            suspects.append({
                'line': line_no,
                'type': 'subfield_vector_pun',
                'match': expr,
                'text': line.strip()[:120],
                'description': (
                    'Sub-field-address struct field-pun — `%s` takes the address '
                    'of a field at offset %d inside `%s` (a %d-byte %s), then '
                    'casts it to %s *%s. A %d-byte access from that offset has '
                    'only %d bytes left and overruns `%s` by %d bytes (ASan '
                    'stack-buffer-overflow; §26). Ghidra emits this when its '
                    'stack-local partition disagrees with Watcom\'s real frame '
                    'layout. Confirm the intended slot in the .asm, then pass a '
                    'real contiguous %s local (often just `&%s` itself).'
                    % (expr, offset, base, local_size, local_type, cast_type,
                       selfty, cast_size, remaining, base,
                       cast_size - remaining, cast_type, base)),
                'severity': 'moderate',
            })
    return suspects




# Value-typed vector locals: `CVector3f foo;` / `CVector3i bar;` (NOT pointers).
_VEC_DECL_RE = re.compile(r'^\s*(CVector3[fi])\s+(\w+)\s*;')


# A cast of (the address of) a bare local to a vector pointer of the OTHER
# element kind: `(CVector3f *)&bar`, `(CVector3i *)&foo`.
_VEC_CAST_RE = re.compile(r'\(\s*(CVector3[fi])\s*\*\s*\)\s*&\s*(\w+)')




def identify_vector_type_pun(decompiled_code):
    """Detect int/float vector type-puns: `(CVector3f *)&LOCAL` where LOCAL is
    declared `CVector3i` (or the reverse).

    Watcom reuses one stack slot as both a float vector and an integer vector
    (§13). Ghidra picks one element type for the local and casts the other
    uses through a vector pointer of the wrong kind. Because the int and float
    members alias the same bytes, the callee then reads integer bit-patterns
    as floats (or vice-versa) — e.g. `local_44.z = (int)(-size*2)` stored into
    a `CVector3i`, then passed as `(CVector3f *)&local_44`, so the camera
    origin reads `-2` as a denormal/NaN and the model renders nowhere
    (CInventory::renderItemModel). Whole-local casts only (field-address puns
    are §26 / subfield_vector_pun).

    Returns: list of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    decl = {}
    for line in lines:
        m = _VEC_DECL_RE.match(line)
        if m:
            decl[m.group(2)] = m.group(1)
    if not decl:
        return suspects
    for line_no, line in enumerate(lines, 1):
        stripped = line.lstrip()
        if (stripped.startswith('//') or stripped.startswith('/*') or
                stripped.startswith('*')):
            continue
        for m in _VEC_CAST_RE.finditer(line):
            # Skip field-address puns like `(CVector3f *)&x.y` — those are the
            # subfield_vector_pun detector's job.
            if m.end() < len(line) and line[m.end()] == '.':
                continue
            cast_type, name = m.group(1), m.group(2)
            decl_type = decl.get(name)
            if decl_type is None or decl_type == cast_type:
                continue
            suspects.append({
                'line': line_no,
                'type': 'vector_type_pun',
                'match': '(%s *)&%s' % (cast_type, name),
                'text': line.strip()[:120],
                'description': (
                    'Vector type-pun — `%s` is declared `%s` but its address is '
                    'cast to `(%s *)` and read as the other element kind, so '
                    'integer bits are reinterpreted as floats (or vice-versa). '
                    'Stack-slot reuse Ghidra mistyped (§13): retype the local '
                    'to the element kind the .asm stores/reads (FSTP/FLD = '
                    'float, MOV = int), drop the `(int)`/`(float)` truncation '
                    'on its components, and drop the cast.' % (
                        name, decl_type, cast_type)),
                'severity': 'moderate',
            })
    return suspects




# Function's own code range, from the `// Address Range: [[s, e] [s, e]]`
# header. Addresses are bare hex (no 0x prefix).
_ADDR_RANGE_HDR_RE = re.compile(r'//\s*Address Range:\s*(.+)')


_ADDR_RANGE_PAIR_RE = re.compile(r'\[\s*([0-9a-fA-F]+)\s*,\s*([0-9a-fA-F]+)\s*\]')


# Candidate baked-address literals in code: 0x-prefixed hex (5-8 digits) and
# decimal floats whose integer part is code-address magnitude (7-9 digits).
_BAKED_HEX_RE = re.compile(r'\b0x([0-9a-fA-F]{5,8})\b')


_BAKED_FLOAT_RE = re.compile(r'(?<![\w.])(\d{7,9})\.\d+')


# §14 phantom assignment targets — a self-address stored into one of these is a
# return-address dead store, not a baked data field.
_DEAD_STORE_LHS_RE = re.compile(
    r'\b(in_stack_|unaff_|extraout_|register0x|in_[A-Z]{2,3}\b)')




def identify_baked_self_address(decompiled_code):
    """Detect numeric literals that fall inside the function's OWN code range.

    When Ghidra mistracks an internal address reference — a `MOV reg,ESP`, a
    `LEA`, a cave-block jump target — it bakes the raw address in as a data
    constant. The tell is that the value lands inside the function's own
    `// Address Range:`. Distinct from `raw_address_constant`, which only
    matches data-symbol / string addresses; these are `.text` self-addresses
    that detector never sees.

    Catches both forms Watcom/Ghidra emit:
      - hex:   `output->x = 0x48c770;`            (CDemonRenderer::getCameraOriginFixed)
      - float: `output->x = fVar1 * 4769685.0;`   (...getCameraOriginWorld; 4769685 = 0x48c795)

    The per-function range is tiny (tens of bytes), so a real data constant
    colliding with it is virtually impossible — high precision.

    Returns: list of suspect dicts.
    """
    suspects = []
    if not decompiled_code:
        return suspects
    lines = decompiled_code.split('\n')
    ranges = []
    for line in lines:
        m = _ADDR_RANGE_HDR_RE.search(line)
        if not m:
            continue
        for pm in _ADDR_RANGE_PAIR_RE.finditer(m.group(1)):
            try:
                start = int(pm.group(1), 16)
                end = int(pm.group(2), 16)
            except ValueError:
                continue
            if start <= end:
                ranges.append((start, end))
        break
    if not ranges:
        return suspects

    def in_range(v):
        return any(s <= v <= e for (s, e) in ranges)

    def is_dead_store_context(line, match_start):
        # §14 return-address dead stores assign a code address to a decompiler
        # phantom (`in_stack_ffffffe0 = 0x5ffe31;`) or into a pointer slot
        # (`x = (CGore *)0x4e6b5b;`). Those are a different artifact (remove the
        # store), not a data-field baked into a numeric — skip them here.
        lhs = line.split('=', 1)[0]
        if _DEAD_STORE_LHS_RE.search(lhs):
            return True
        before = line[:match_start].rstrip()
        if before.endswith('*)'):
            return True
        return False

    for line_no, line in enumerate(lines, 1):
        stripped = line.strip()
        if (stripped.startswith('//') or stripped.startswith('#') or
                stripped.startswith('/*') or stripped.startswith('*')):
            continue
        if stripped.startswith('case '):
            continue
        for m in _BAKED_HEX_RE.finditer(line):
            try:
                v = int(m.group(1), 16)
            except ValueError:
                continue
            if in_range(v) and not is_dead_store_context(line, m.start()):
                suspects.append(_baked_self_address_suspect(line_no, line, '0x%x' % v, v))
        for m in _BAKED_FLOAT_RE.finditer(line):
            try:
                v = int(m.group(1))
            except ValueError:
                continue
            if in_range(v) and not is_dead_store_context(line, m.start()):
                suspects.append(_baked_self_address_suspect(
                    line_no, line, m.group(0), v))
    return suspects




def _baked_self_address_suspect(line_no, line, match_text, value):
    return {
        'line': line_no,
        'type': 'baked_self_address',
        'match': match_text,
        'text': line.strip()[:120],
        'description': (
            'Literal %s (= 0x%x) falls inside this function\'s own code range '
            '(// Address Range). Ghidra mistracked an internal address '
            'reference (a MOV reg,ESP / LEA / cave-block target) and baked it '
            'in as a data constant — the value is meaningless at runtime. '
            'Recover the real expression from the .asm (usually a register/'
            'stack copy, not a constant) in a .keep.' % (match_text, value)),
        'severity': 'moderate',
    }




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


# Byte-temp loop close. Ghidra renders the null test as `!= '\0'` when the
# loaded temp is `char` but as `!= 0` when it is `byte` (unsigned char) — the
# latter slips past the shared _UNROLLED_WHILE_RE (which only matches '\0').
# Accept both here; the SCASB counter anchor (`if (v==0) break; v=v-1;`) plus
# the byte-load+step body gate keep this from matching plain countdown loops.
# Seen in configureFullPassPolygonReduction / configureSinglePassPolygonReduction.
_UNROLLED_STRLEN_WHILE_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\w+\s*!=\s*(?:'\\0'|0)\s*\)\s*;\s*$")




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
            if _UNROLLED_STRLEN_WHILE_RE.match(lines[i + fwd]):
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


# The hit target may be a C char literal ('.', '\\x2e') OR a raw byte
# constant (0x2e, 46) — Ghidra renders byte-typed scans with the numeric
# form, which the char-literal-only pattern used to miss (e.g.
# loadModelFile's `if (*pbVar6 == 0x2e) goto ...`).
_UNROLLED_STRCHR_CHAR_HIT_RE = re.compile(
    r"^\s*if\s*\(\s*\*\s*(\w+)\s*==\s*"
    r"('(?:\\.|[^'\\])+'|0x[0-9a-fA-F]+|\d+)\s*\)\s*goto\s+\w+\s*;\s*$")


# Null terminator likewise appears as '\\0' or as a bare 0 / 0x0 byte.
_UNROLLED_STRCHR_NULL_BREAK_RE = re.compile(
    r"^\s*if\s*\(\s*\*\s*(\w+)\s*==\s*('\\0'|0x0+|0)\s*\)\s*break\s*;\s*$")


_UNROLLED_STRCHR_STEP1_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\+\s*1\s*;\s*$")


_UNROLLED_STRCHR_STEP2_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*\+\s*2\s*;\s*$")


_UNROLLED_STRCHR_WHILE_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\*\s*\w+\s*!=\s*('\\0'|0x0+|0)\s*\)\s*;\s*$")




def _strchr_literal_value(tok):
    """Parse a strchr hit-target token to its byte value.

    Accepts a C char literal ('X', '\\n', '\\x2e') or a numeric byte
    constant (0x2e, 46). Returns the int value, or None if unparseable.
    """
    if tok.startswith("'") and tok.endswith("'"):
        inner = tok[1:-1]
        if inner[:2] in ('\\x', '\\X'):
            try:
                return int(inner[2:], 16)
            except ValueError:
                return None
        if len(inner) == 2 and inner[0] == '\\':
            return {'n': 10, 't': 9, 'r': 13, '0': 0, 'b': 8, 'f': 12,
                    'v': 11, '\\': 92, "'": 39, '"': 34}.get(inner[1])
        if len(inner) == 1:
            return ord(inner)
        return None
    try:
        return int(tok, 0)
    except ValueError:
        return None




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
        lit_val = _strchr_literal_value(hit1_m.group(2))
        # Reject null-termination as the "char hit" — that's a different
        # idiom (the scan-for-null loop we see in CDemonSet_save).
        if lit_val is None or lit_val == 0:
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
                or _strchr_literal_value(hit2_m.group(2)) != lit_val):
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
        lit_disp = (repr(chr(lit_val)) if 32 <= lit_val < 127
                    else hex(lit_val))
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_strchr',
            'match': "do { snap; if (*p=='X') goto; if (*p=='\\0') break; ... }",
            'text': lines[i].strip()[:120],
            'description': (
                "Watcom loop-unrolled strchr (2-byte-at-a-time scan for "
                "literal {lit} with null-terminator break). Replace the "
                "whole loop + fallback `= NULL` with strchr(ptr, {lit}) "
                "in a .keep.").format(lit=lit_disp),
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


# --- Two-variable ping-pong advance form ---------------------------------
# Instead of the single-variable `pX = (T *)&pX->field; ...; pX = pX;` shape,
# Watcom/Ghidra sometimes split the pre-increment across a temporary:
#     pTmp = &(pBase->field)...;   // temp gets the address of a sub-field (stride)
#     pBase->arr[0]... = value;    // constant-[0] store on the walked pointer
#     pBase = (T *)pTmp;           // advance pBase to the temp
# This is the same always-wrong artifact (byte-offset stride baked from the
# original struct layout — overruns on any layout change, e.g. the 64-bit port),
# but there is no `pX = pX;` self-assign to key on. Canonical instance:
# CHero::reset clearing carry_hands[i].carry_actor.
#
# Address-of-a-field-within-pBase temp assignment: `pTmp = ...&pBase->...;`
# group(1) = temp var, group(2) = base (walked) var.
_PREINC_ADDR_TEMP_RE = re.compile(
    r"^\s*(\w+)\s*=\s*[^;]*&\s*\(?\s*(\w+)->[^;]*;\s*$")


# Plain (optionally cast) copy advance: `pBase = (T *)pTmp;` / `pBase = pTmp;`.
# group(1) = base (walked) var, group(2) = source (temp) var.
_PREINC_COPY_ADVANCE_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(?:\(\s*[\w\s\*]+\)\s*)?(\w+)\s*;\s*$")


# Any constant [K] subscript, used to spot nested-field const-index stores like
# `(pBase->base).carry_hands[0].carry_actor = 0;` that the direct
# `pX->arr[0]` / `pX[K] =` regexes miss.
_PREINC_CONST_INDEX_RE = re.compile(r"\[\s*(?:0x[0-9a-fA-F]+|\d+)\s*\]")


def _preinc_const_index_store_on(body_lines, var):
    """True if some body line stores through a constant [K] index on `var`.

    Covers nested-field LHS forms (`(var->base).arr[0].member = v;`) beyond the
    direct `var->arr[0]` / `var[K] =` shapes. Only the assignment LHS is
    inspected: the line is split on a standalone `=` (one that is not part of
    `==`/`!=`/`<=`/`>=`, and not the `>` of a `->`), so comparisons don't match.
    """
    for bl in body_lines:
        parts = re.split(r"(?<![=<>!])=(?!=)", bl, maxsplit=1)
        if len(parts) < 2:
            continue
        lhs = parts[0]
        if (re.search(r"\b" + re.escape(var) + r"\b", lhs)
                and _PREINC_CONST_INDEX_RE.search(lhs)):
            return True
    return False




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

        pA = start;                          // two-variable ping-pong variant
        do {
            pTmp = &(pA->field)...;          // temp = address of a sub-field (stride)
            (pA->base).arr[0].member = value; // constant-index store on pA
            pA = (T *)pTmp;                  // advance pA to temp (no `pA = pA;`)
        } while (pTmp != end_marker);

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
        # Resolve the walked variable via one of two advance shapes.
        var = None
        # (a) Single-variable form: `pX = (T*)&pX->...;` (or `pX = pX + N;`) plus
        #     a `pX = pX;` self-assign no-op.
        for bl in body_lines:
            m = _PREINC_ADVANCE_RE.match(bl) or _PREINC_ADVANCE_PTRARITH_RE.match(bl)
            if not m:
                continue
            candidate = m.group(1)
            if any(_PREINC_SELFASSIGN_RE.match(b2)
                   and _PREINC_SELFASSIGN_RE.match(b2).group(1) == candidate
                   for b2 in body_lines):
                var = candidate
                break
        # (b) Two-variable ping-pong form: `pTmp = &pBase->...;` paired with a
        #     `pBase = (T*)pTmp;` advance. No self-assign to key on.
        if var is None:
            for bl in body_lines:
                tm = _PREINC_ADDR_TEMP_RE.match(bl)
                if not tm:
                    continue
                temp_var, base_var = tm.group(1), tm.group(2)
                if temp_var == base_var:
                    continue
                paired = any(
                    (cm := _PREINC_COPY_ADVANCE_RE.match(b2))
                    and cm.group(1) == base_var and cm.group(2) == temp_var
                    for b2 in body_lines)
                if paired:
                    var = base_var
                    break
        if var is None:
            continue
        has_array0 = any(
            m.group(1) == var
            for m in _PREINC_ARRAY0_RE.finditer(body_text))
        has_index_store = any(
            _PREINC_INDEX_STORE_RE.match(bl)
            and _PREINC_INDEX_STORE_RE.match(bl).group(1) == var
            for bl in body_lines)
        if not (has_array0 or has_index_store
                or _preinc_const_index_store_on(body_lines, var)):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'preinc_loop_idiom',
            'match': "do { advance(var via &field or +N); var[K]/arr[0]... store; ...}",
            'text': lines[i].strip()[:120],
            'description': (
                "Ghidra pre-increment-array-walk loop artifact on `{var}` "
                "(per-iteration advance via struct-field/pointer arithmetic — "
                "single-var `{var} = {var};` self-assign or two-var `tmp = "
                "&{var}->field; {var} = tmp;` ping-pong — plus a constant-index "
                "store on `{var}`). The stride/sentinel are baked from the "
                "original struct layout, so it overruns on any layout change "
                "(e.g. the 64-bit port). Always wrong as-decoded; cross-reference "
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


# The bias/magic addend.
#
# This used to be a hardcoded list of the globals seen in nocedit.exe, which
# meant the detector silently missed the identical bit-trick in sibling
# programs: tridx7.dll spells the same operation with `g_FlyModeDepthBias`
# and went COMPLETELY unflagged, including one site whose function never
# appeared in the suspect report at all. Match the *shape* instead and let
# any identifier (or raw magic literal, e.g. 0x5f3759df) be the bias.
#
# This does not open the door to numeric halving of an int: Ghidra only emits
# the `(int)` cast when it is converting *from* something else, so `(int)EXPR
# >> 1` inside a `(float)(...)` is already the reinterpretation signature.
_FS_BIAS = r"[A-Za-z_]\w*|0[xX][0-9a-fA-F]+|\d+"

# Biases already identified as the sqrt / inverse-sqrt magic. Used only to
# label a finding as a known-vs-new variant, NEVER to gate detection.
_FS_KNOWN_BIASES = frozenset((
    'g_FastSqrtMagic', 'INT_02d7a7b8',          # nocedit.exe / nocturne.exe
    'g_FastInvSqrtMagic', 'g_LightAttenuationMax',
    'g_FlyModeDepthBias',                        # tridx7.dll
))


# Numeric-cast emit (default Ghidra output):
#   (float)(((int)EXPR >> 1) + g_FastSqrtMagic)
#   (float)(g_FastInvSqrtMagic - ((int)EXPR >> 1))
_FAST_SQRT_NUM_RE = re.compile(
    r"\(\s*float\s*\)\s*\(\s*\(\s*\(\s*int\s*\)" + _FS_OPERAND + r">>\s*1\s*\)\s*"
    r"\+\s*(" + _FS_BIAS + r")\s*\)")


_FAST_INV_SQRT_NUM_RE = re.compile(
    r"\(\s*float\s*\)\s*\(\s*(" + _FS_BIAS + r")\s*-\s*"
    r"\(\s*\(\s*int\s*\)" + _FS_OPERAND + r">>\s*1\s*\)\s*\)")


# Bit-cast emit (after a manual keep fix that swaps numeric cast for
# bit-cast — also wants to be replaced with the helper call):
#   *(int *)&DST = (*(int *)&SRC >> 1) + g_FastSqrtMagic;
#   *(int *)&DST = g_FastInvSqrtMagic - (*(int *)&SRC >> 1);
_FAST_SQRT_BIT_RE = re.compile(
    r"\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*=\s*"
    r"\(\s*\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*>>\s*1\s*\)\s*"
    r"\+\s*(" + _FS_BIAS + r")\s*;")


_FAST_INV_SQRT_BIT_RE = re.compile(
    r"\*\s*\(\s*int\s*\*\s*\)\s*&\s*\w+\s*=\s*"
    r"(" + _FS_BIAS + r")\s*-\s*"
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
            match = regex.search(line)
            if match:
                bias = match.group(1)
                pretty = ("fast inverse sqrt"
                          if kind == 'fast_inv_sqrt_inline' else "fast sqrt")
                if bias in _FS_KNOWN_BIASES:
                    # nocedit.exe / nocturne.exe expose named helpers for this.
                    fix = ("Replace with `{helper}(<expr>)` in a .keep - the "
                           "helper function exists in the binary "
                           "({addr}).".format(
                               helper=helper,
                               addr=("FUN_0043e2a0"
                                     if kind == 'fast_inv_sqrt_inline'
                                     else "FUN_00431350")))
                else:
                    fix = ("Bias `{bias}` is not a known magic - this may be a "
                           "sibling-program variant. Confirm against the .asm "
                           "(SAR/ADD on the float's bits), then express it via "
                           "a bit-cast helper in a .keep; no named helper is "
                           "guaranteed to exist in this program.".format(
                               bias=bias))
                suspects.append({
                    'line': i + 1,
                    'type': kind,
                    'match': line.strip()[:80],
                    'text': line.strip()[:120],
                    'description': (
                        "Inlined {pretty} bit-trick (bias `{bias}`). Ghidra's "
                        "numeric `(int)` cast is wrong; the asm reinterprets "
                        "the float's bit pattern. {fix}".format(
                            pretty=pretty, bias=bias, fix=fix)),
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




# Allocation-family callee: libc malloc/calloc/realloc plus Watcom debug-heap
# wrappers (debugAlloc, shape_memdbg_cpp_malloc_FUN_..., debugMalloc). The alt
# matches any callee name carrying a '[Mm]alloc'/'[Aa]lloc' segment; `realloc`
# and `calloc` already contain 'alloc'.
_ALLOC_CAST_CALL_RE = re.compile(
    r'\(\s*([A-Za-z_]\w*)\s*(\*+)\s*\)\s*'
    r'([A-Za-z_]\w*(?:[Mm]alloc|[Aa]lloc)[A-Za-z0-9_]*)\s*\(')


# A numeric constant used as a multiplicative stride: `* N` or `N *`.
_ALLOC_STRIDE_RE = re.compile(
    r'\*\s*(0x[0-9a-fA-F]+|\d+)\b|\b(0x[0-9a-fA-F]+|\d+)\s*\*')


# A left-shift stride: `count << K` allocates `count * (1 << K)` bytes. Watcom
# emits power-of-two struct sizes as shifts (e.g. `triangle_count << 5` == * 0x20).
_ALLOC_SHIFT_RE = re.compile(r'<<\s*(\d+)\b')


# A single argument that is a bare numeric constant (single-object / calloc size).
_ALLOC_BARE_CONST_RE = re.compile(r'^\s*(0x[0-9a-fA-F]+|\d+)\s*$')


# Watcom array-new: `(T *)__vec_new(mem, count, ti)` / `__arrinit(...)`. The
# element type comes from the cast here, while the size is in a *separate* alloc
# that fed `mem` — so the inline-cast alloc loop can't see the type. Capture the
# element type and the `mem` variable to back-reference the allocation.
_VEC_NEW_CAST_RE = re.compile(
    r'\(\s*([A-Za-z_]\w*)\s*\*\s*\)\s*(?:__vec_new|__arrinit)\w*\s*\(\s*([A-Za-z_]\w*)\s*,')


def _alloc_stride_consts(args):
    """Extract every numeric stride constant from an allocation's size args:
    `* N` / `N *` multiplies, `<< K` shifts (as `1 << K`), and a bare-constant
    size argument. Returns a set of ints."""
    consts = set()
    for sm in _ALLOC_STRIDE_RE.finditer(args):
        cs = sm.group(1) or sm.group(2)
        consts.add(int(cs, 16) if cs.startswith('0x') else int(cs))
    for sm in _ALLOC_SHIFT_RE.finditer(args):
        consts.add(1 << int(sm.group(1)))
    for piece in args.split(','):  # bare-constant size arg (calloc/single)
        bm = _ALLOC_BARE_CONST_RE.match(piece)
        if bm:
            cs = bm.group(1)
            consts.add(int(cs, 16) if cs.startswith('0x') else int(cs))
    return consts




# `(uintptr_t)ptr & MASK` where MASK is a 32-bit alignment constant whose high
# 32 bits are zero — truncates the pointer at 64-bit. The (uintptr_t) cast is
# correct, so identify_pointer_truncation_suspects (keyed on (int)/(uint)) can't
# see it; the bug is the MASK constant. Shapes seen in the wild:
#   `((uintptr_t)p + 0x10U) & ~0xFu`   (~0xFu == 0xFFFFFFF0, a 32-bit complement)
#   `(uintptr_t)(...) & 0xfffffff8`    (bare 32-bit align literal)
# The correct `& ~(uintptr_t)0xF` / `& ~0xFULL` forms carry a cast or 64-bit
# width between `~`/`&` and the constant, so the regex skips them.
_TPM_UINTPTR_RE = re.compile(r'\(\s*uintptr_t\s*\)')
_TPM_MASK_RE = re.compile(r'&\s*(~\s*)?(0x[0-9a-fA-F]+|\d+)([uUlL]*)')


def identify_truncating_pointer_mask(code):
    """Flag alignment masks that truncate a (uintptr_t) pointer to 32 bits.

    Args:
        code: source text.

    Returns:
        List of suspect dicts (type 'pointer_truncation').
    """
    suspects = []
    if not code:
        return suspects
    for line_no, line in enumerate(code.split('\n'), 1):
        s = line.strip()
        if s.startswith(('//', '#', '/*', '*')):
            continue
        if not _TPM_UINTPTR_RE.search(line):
            continue
        for m in _TPM_MASK_RE.finditer(line):
            neg, cs, suf = m.group(1), m.group(2), m.group(3)
            val = int(cs, 16) if cs.startswith('0x') else int(cs)
            wide = 'l' in suf.lower()  # UL / ULL -> 64-bit-width constant
            if neg:
                # `~SMALL` complements at the constant's width; a truncating
                # alignment mask only when SMALL is small and not 64-bit-wide.
                if wide or not (0 < val < 0x10000):
                    continue
                clear = val
                shown = '~%s%s' % (cs, suf)
            else:
                # bare literal align mask: top bits set within 32, a few low bits
                # clear (0xFFFFFF00..0xFFFFFFFE). Its high 32 bits are zero
                # regardless of suffix, so it truncates the pointer.
                if not (0xFFFFFF00 <= val <= 0xFFFFFFFE):
                    continue
                clear = 0xFFFFFFFF ^ val
                shown = '%s%s' % (cs, suf)
            suspects.append({
                'line': line_no,
                'type': 'pointer_truncation',
                'match': '(uintptr_t) ... & %s' % shown,
                'text': s[:200],
                'description': (
                    'Alignment mask `& %s` on a (uintptr_t) pointer is a 32-bit '
                    'constant (high 32 bits zero), so it truncates the pointer at '
                    '64-bit. Use a pointer-width mask: `& ~(uintptr_t)0x%x` (§27).'
                    % (shown, clear)),
                'severity': SUSPECT_SEVERITY.get('pointer_truncation', 'moderate'),
            })
    return suspects


# `LOCAL = (int *)STRUCT_PTR;` reinterprets a whole struct as a primitive array,
# then walks it via `LOCAL[N]` with N encoding a 32-bit field byte-offset. If the
# struct has pointer fields before the walked one, they grow at 64-bit and the
# indices read the wrong fields. The existing primitive_walker_cast regex only
# catches the `(int *)&arr[i]` address form, not this bare struct reinterpret
# (e.g. CPickList_renderDialog's `piVar = (int*)this_ptr; ... piVar[4]`).
_STRUCT_REINTERP_RE = re.compile(
    r'(\w+)\s*=\s*\(\s*'
    r'(?:int|uint|SIZE_T|size_t|long|unsigned\s+long|unsigned\s+int)\s*\*\s*\)\s*'
    r'(\w+)\s*;')


def identify_struct_reinterpret_walk(code, struct_size_map=None):
    """Flag a struct pointer reinterpreted as a primitive array and indexed.

    Args:
        code: source text.
        struct_size_map: struct/union name -> size (confirms the operand is a
            real struct pointer, not a void*/int* cast). Inert without it.

    Returns:
        List of suspect dicts (type 'primitive_walker_cast').
    """
    suspects = []
    if not code or not struct_size_map:
        return suspects
    ptr_vars, var_struct = _ptr_trunc_decl_pointer_vars(code)
    for m in _STRUCT_REINTERP_RE.finditer(code):
        local, ptr = m.group(1), m.group(2)
        base = var_struct.get(ptr)
        # The operand must be a pointer to a KNOWN struct (so this is a struct
        # reinterpret, not a `(int *)voidptr` / numeric cast).
        if ptr not in ptr_vars or base not in struct_size_map:
            continue
        # The primitive-pointer result must be walked as an array; a one-off
        # `(int *)p` with no `p[...]` is a plain cast, not a field walk.
        if not re.search(r'(?<![A-Za-z0-9_])' + re.escape(local) + r'\s*\[', code):
            continue
        line_no = code.count('\n', 0, m.start()) + 1
        suspects.append({
            'line': line_no,
            'type': 'primitive_walker_cast',
            'match': '(int *)%s reinterpreted as %s[...]' % (ptr, local),
            'text': code.split('\n')[line_no - 1].strip()[:200],
            'description': (
                'Reinterprets the %s struct `%s` as a primitive array `%s[...]`; '
                'the hardcoded indices are 32-bit field byte-offsets. If %s has '
                'pointer fields before the walked one they shift at 64-bit and the '
                'walk reads the wrong data. Retype to named struct-field access '
                '(§12).' % (base, ptr, local, base)),
            'severity': SUSPECT_SEVERITY.get('primitive_walker_cast', 'moderate'),
        })
    return suspects


def identify_alloc_magic_size(code, struct_size_map=None):
    """Flag allocation sizes that hardcode a struct byte-size as a magic number.

    Watcom baked struct sizes as immediate values, so the decompiler emits e.g.
        pv = (SVertexData *)debugMalloc(count * 0x14);      // 0x14 == sizeof
        pp = (CComplexPolygon **)realloc(old, (n + 1) * 4); // 4 == 32-bit ptr
    On the 32-bit matching build these are correct, but at 64-bit a struct that
    contains a pointer grows and a pointer itself becomes 8 bytes, so the magic
    stride is silently wrong. Using sizeof(T) keeps the size correct across
    layout and word-size changes (fix_compilation.md §17/§18; a 64-bit item like
    pointer_truncation §27).

    Detection is type-resolved via the inline cast on the allocation, so it only
    fires when the element type is known and the magic exactly matches:
      - single-star cast `(T *)`  and a size constant == sizeof(T)  -> struct.
      - multi-star  cast `(T **)` and a size constant == 4          -> pointer
        array (the direct 64-bit break: 4 -> 8).
    An unresolved type or a non-matching constant yields no flag, so bare
    int/short strides never noise.

    Args:
        code: source text.
        struct_size_map: struct/union name -> byte size (build_struct_size_map /
            get_struct_size_map). Without a map, nothing is flagged.

    Returns:
        List of suspect dicts (type alloc_magic_size), one per matched site.
    """
    suspects = []
    if not code or not struct_size_map:
        return suspects

    # Match across the whole blob (not line-by-line): Ghidra frequently wraps a
    # long allocation so the cast+callee and its `(args)` land on separate lines
    # (`(CPoly *)realloc\n  (old, n * 0x68)`). `\s*` between callee and `(`
    # spans the newline, and _extract_balanced_parens walks the args across it.
    for m in _ALLOC_CAST_CALL_RE.finditer(code):
        # Skip a match whose cast sits on a comment line.
        line_start = code.rfind('\n', 0, m.start()) + 1
        nl = code.find('\n', m.start())
        first_line = code[line_start:(nl if nl != -1 else len(code))].strip()
        if first_line.startswith(('//', '#', '/*', '*')):
            continue

        elem_type, stars = m.group(1), m.group(2)
        call = _extract_balanced_parens(code[m.end() - 1:])
        if call is None:
            continue
        args = call[1:-1]  # strip the outer parens

        consts = _alloc_stride_consts(args)
        if not consts:
            continue

        if len(stars) >= 2:
            if 4 not in consts:
                continue
            desc = (
                'Pointer-array allocation strides by 4 (== 32-bit '
                'sizeof(%s *)). Replace the magic 4 with sizeof(%s *): a raw '
                '4 under-allocates and corrupts memory once pointers are 8 '
                'bytes at 64-bit (§27).' % (elem_type, elem_type))
            match = '(%s%s) alloc stride 4' % (elem_type, stars)
        else:
            tsize = struct_size_map.get(elem_type)
            if tsize is None or tsize not in consts:
                continue
            desc = (
                'Allocation size hardcodes 0x%x == sizeof(%s). Replace the '
                'magic with sizeof(%s) so it stays correct if the struct '
                'layout (or a contained pointer) changes size at 64-bit '
                '(§17/§18).' % (tsize, elem_type, elem_type))
            match = '(%s%s) alloc stride 0x%x' % (elem_type, stars, tsize)

        # Line of the cast; snippet is the cast..call collapsed to one line.
        line_no = code.count('\n', 0, m.start()) + 1
        snippet = re.sub(r'\s+', ' ', m.group(0)[:-1] + call).strip()
        suspects.append({
            'line': line_no,
            'type': 'alloc_magic_size',
            'match': match,
            'text': snippet[:200],
            'description': desc,
            'severity': SUSPECT_SEVERITY.get('alloc_magic_size', 'moderate'),
        })

    # Second pass: Watcom array-new. `(T *)__vec_new(mem, count, ti)` casts the
    # result here, but the element stride lives in a *separate* alloc that fed
    # `mem` (`mem = alloc(count * STRIDE [+ 4])`) — invisible to the inline-cast
    # loop above. Resolve T from the cast, back-reference the nearest preceding
    # alloc that assigned `mem`, and flag when its stride equals sizeof(T).
    for m in _VEC_NEW_CAST_RE.finditer(code):
        elem_type, mem_var = m.group(1), m.group(2)
        tsize = struct_size_map.get(elem_type)
        if tsize is None:
            continue
        assign_re = re.compile(
            r'(?<![A-Za-z0-9_])' + re.escape(mem_var) +
            r'\s*=\s*(?:\([^)]*\)\s*)?[A-Za-z_]\w*(?:[Mm]alloc|[Aa]lloc)[A-Za-z0-9_]*\s*\(')
        best = None
        for am in assign_re.finditer(code, 0, m.start()):
            best = am  # nearest preceding assignment
        if best is None:
            continue
        call = _extract_balanced_parens(code[best.end() - 1:])
        if call is None:
            continue
        if tsize not in _alloc_stride_consts(call[1:-1]):
            continue
        line_no = code.count('\n', 0, best.start()) + 1
        snippet = re.sub(r'\s+', ' ', code[best.start():best.end() - 1] + call).strip()
        suspects.append({
            'line': line_no,
            'type': 'alloc_magic_size',
            'match': '(%s *) array-new alloc stride 0x%x' % (elem_type, tsize),
            'text': snippet[:200],
            'description': (
                'Watcom array-new allocation hardcodes 0x%x == sizeof(%s) as the '
                'element stride (the buffer fed to __vec_new). Replace with '
                'sizeof(%s) so it stays correct if the struct grows at 64-bit '
                '(§17/§18).' % (tsize, elem_type, elem_type)),
            'severity': SUSPECT_SEVERITY.get('alloc_magic_size', 'moderate'),
        })

    return suspects




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




# memcpy/memmove/memset call head; the size is always the LAST argument, so we
# extract the balanced arg list and look at that arg alone (not the fill byte).
_MEM_FN_CALL_RE = re.compile(r'\b(memcpy|memmove|memset)\s*\(')


# Numeric literal used as a whole size arg or as a multiplicative stride within
# it (`n * 0x30`, `0x30 * n`, or a bare `0x30`).
_MEM_SIZE_STRIDE_RE = re.compile(
    r'\*\s*(0x[0-9a-fA-F]+|\d+)\b|\b(0x[0-9a-fA-F]+|\d+)\s*\*')


_MEM_SIZE_BARE_RE = re.compile(r'^\s*(0x[0-9a-fA-F]+|\d+)\s*$')



# Cache of the 64-bit-unstable struct set, keyed by the layout map's identity so
# a single build is shared across the per-keep calls in one export/test run.
_UNSTABLE_STRUCT_CACHE = {}




def _mem_split_top_args(arglist):
    """Split a balanced argument string (no outer parens) at top-level commas."""
    depth, cur, out = 0, '', []
    for ch in arglist:
        if ch in '([':
            depth += 1
            cur += ch
        elif ch in ')]':
            depth -= 1
            cur += ch
        elif ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out




def _struct_grows_at_64bit(layout):
    """Set of struct/union names whose byte size changes when pointers are 8B.

    A type is 64-bit-unstable if it (transitively) contains a pointer field: a
    pointer grows 4->8, so the enclosing struct's size and every offset past it
    shift. A type built only from scalars/floats/fixed arrays keeps its size at
    64-bit, so a hardcoded byte count over it stays correct — those are NOT
    flagged. Resolved from build_struct_layout_map's per-field `is_ptr`/`type`.
    """
    if not layout:
        return set()
    cached = _UNSTABLE_STRUCT_CACHE.get(id(layout))
    if cached is not None:
        return cached
    memo = {}

    def unstable(name, stack):
        if name in memo:
            return memo[name]
        if name in stack:
            return False  # cycle guard; resolved by the outer frame
        fields = layout.get(name)
        if not fields:
            memo[name] = False
            return False
        res = False
        for fl in fields:
            if fl.get('is_ptr'):
                res = True
                break
            nested = fl.get('type')
            if nested and nested in layout and unstable(nested, stack | {name}):
                res = True
                break
        memo[name] = res
        return res

    result = {n for n in layout if unstable(n, frozenset())}
    _UNSTABLE_STRUCT_CACHE[id(layout)] = result
    return result




_DIVERGENCE_OFFSET_CACHE = {}


def _struct_divergence_offset_64bit(layout):
    """Map each 64-bit-unstable struct to the smallest field offset at which its
    32- and 64-bit layouts can diverge.

    Every field strictly before this offset is a scalar / fixed non-pointer
    array whose offset is identical at 32- and 64-bit, so a hardcoded byte
    offset that lands before it is provably safe. At or after it — the first
    pointer field, or the first field that is itself a 64-bit-unstable struct —
    pointer widening (4->8) and re-alignment shift the true 64-bit offset, so a
    baked 32-bit offset there is stale. Only unstable structs get an entry.
    """
    if not layout:
        return {}
    cached = _DIVERGENCE_OFFSET_CACHE.get(id(layout))
    if cached is not None:
        return cached
    unstable = _struct_grows_at_64bit(layout)
    result = {}
    for name in unstable:
        best = None
        for fl in layout.get(name, ()):
            if fl.get('is_ptr') or fl.get('type') in unstable:
                if best is None or fl['offset'] < best:
                    best = fl['offset']
        if best is not None:
            result[name] = best
    _DIVERGENCE_OFFSET_CACHE[id(layout)] = result
    return result


def identify_stale_struct_offset_64bit(code, struct_layout_map=None):
    """Flag `*(T *)(base + 0xNN)` raw struct-offset derefs that go stale at 64-bit.

    Watcom-lowered code walks an array of structs (or reaches a field) via a
    `char *` / typed pointer plus a hardcoded byte offset that equals a field's
    32-bit offset — e.g. `*(CDemonActor **)(pcVar8 + 0x104)` where `pcVar8`
    walks `SScriptXRef` and its `actor` field sits at 0x104. On the 32-bit
    matching build the offset is exactly right, so it compiles and runs, and NO
    existing detector or compiler diagnostic fires: the base is a genuine
    pointer (not an `(int)ptr` truncation, so identify_pointer_int_offset_access
    skips it) and the offset lands on the intended field (not a sibling, so
    struct_field_overrun skips it).

    But once pointers are 8 bytes the struct grows and every field at/after its
    first pointer re-aligns/shifts — `actor` moves to 0x108 — so the baked 0x104
    reads/writes half-padding, half-pointer garbage. This is the silent-64bit
    class the mem*/alloc stride detectors don't reach: those flag a byte *count*;
    this is a field *offset*.

    Fires only when the base resolves — directly, or via a `LOCAL = obj->field`
    walker assignment (the two-step form) — to a struct T that is 64-bit-unstable
    AND the accessed offset is at or past T's divergence offset (its first
    pointer / nested-unstable field). Offsets before that point are identical at
    64-bit and are not flagged, which kills the width-stable value-struct noise
    (same _struct_grows_at_64bit gate as mem_magic_size). Fix: de-pun to named
    field access on a correctly-typed pointer (§de-pun / §12).

    Needs struct_layout_map (inert without it, like struct_field_overrun /
    mem_magic_size); runs at export and in test_suspects.sh, which builds the map.

    Args:
        code: source text.
        struct_layout_map: struct -> field layout (build_struct_layout_map).

    Returns:
        List of suspect dicts (type stale_struct_offset_64bit).
    """
    suspects = []
    if not code or not struct_layout_map:
        return suspects
    unstable = _struct_grows_at_64bit(struct_layout_map)
    if not unstable:
        return suspects
    div = _struct_divergence_offset_64bit(struct_layout_map)
    var_types = _sfo_resolve_var_types(code)
    if not var_types:
        return suspects

    # Two-step walker form: map a local to the struct field its pointer was
    # derived from (`pcVar8 = obj->field + i; *(T*)(pcVar8 + 0xNN);`).
    local_owner = {}
    for line in code.split('\n'):
        s = line.strip()
        if s.startswith('//') or s.startswith('/*') or s.startswith('*'):
            continue
        am = _SFO_LOCAL_ASSIGN_RE.match(s)
        if not am:
            continue
        # Split the RHS on top-level '+' only — a base-shift walker is
        # `field-path + index`, and splitting on '-' (as _sfo_top_terms does)
        # would shred the '->' inside the field path.
        depth, term, terms = 0, '', []
        for ch in am.group(2):
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
        for term in terms:
            ext = _sfo_field_owner_offset(
                term.strip(), var_types, struct_layout_map)
            if ext:
                local_owner[am.group(1)] = ext
                break

    seen = set()
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
            if bm and bm.group(1) in local_owner:
                ext = local_owner[bm.group(1)]
            if ext is None:
                ext = _sfo_field_owner_offset(
                    base_expr, var_types, struct_layout_map)
            if ext is None:
                continue
            owner, base_off, flen, addr, _fptr = ext
            # Only an array (decays to its address) or an explicit `&field`
            # forms a struct-base pointer; a scalar/pointer field's value + off
            # walks the pointed-to buffer, not the struct.
            if not addr or owner not in unstable:
                continue
            # The offset must cross OUT of the base field into a sibling. An
            # access that stays within the base array (`dll_identifier + 0xfe`,
            # 0xfe < 256) is ordinary in-array byte indexing — the compiler
            # relocates the named field correctly, so it is width-stable, not a
            # baked cross-field offset.
            if const < flen:
                continue
            accessed = base_off + const
            dvg = div.get(owner)
            if dvg is None or accessed < dvg:
                continue
            # Require the offset to land on a real field of the 32-bit layout —
            # a genuine field access, not past-struct pointer math.
            sib = _sfo_field_at_offset(struct_layout_map, owner, accessed)
            if sib is None:
                continue
            key = (line_no, base_expr.strip(), const)
            if key in seen:
                continue
            seen.add(key)
            cast_ptr = '**' in re.sub(r'\s+', '', dm.group(0))
            suspects.append({
                'line': line_no,
                'type': 'stale_struct_offset_64bit',
                'match': '*(...)(%s + 0x%x)' % (base_expr.strip(), const),
                'text': s[:120],
                'description': (
                    '*(...)(%s + 0x%x) reaches field %s (0x%x) of %s via a baked '
                    '32-bit offset. %s is 64-bit-unstable (grows past its first '
                    'pointer/unstable field at 0x%x); on the 64-bit build field '
                    'offsets at/after 0x%x shift, so this reads/writes the wrong '
                    'bytes%s. De-pun to named field access on a %s * (§de-pun/§12).'
                    % (base_expr.strip(), const, sib['name'], sib['offset'],
                       owner, owner, dvg, dvg,
                       ' (and the accessed value is itself a pointer)'
                       if cast_ptr else '', owner)),
                'severity': SUSPECT_SEVERITY.get(
                    'stale_struct_offset_64bit', 'moderate'),
            })
    return suspects




_DFI_PUN_RE = re.compile(
    r'\b([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]\s*\.\s*'
    r'([A-Za-z_]\w*(?:\s*\.\s*[A-Za-z_]\w*)*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\b')


def _dfi_path_offset(struct_name, path, layout):
    """Byte offset of a dotted field path within `struct_name`, or None.

    Walks `a.b.c` accumulating each field's offset. Returns
    (offset, final_field_dict) so callers can test whether a computed address
    stays inside the named field or walks past it.
    """
    offset = 0
    cur = struct_name
    fld = None
    for part in [p.strip() for p in path.split('.')]:
        flds = layout.get(cur)
        if not flds:
            return None
        fld = None
        for candidate in flds:
            if candidate['name'] == part:
                fld = candidate
                break
        if fld is None:
            return None
        offset += fld['offset']
        cur = fld.get('type')
    return (offset, fld)


def _dfi_derived_map(layout):
    """base struct -> [structs whose first member is that base at offset 0].

    That is the decompiler-visible shape of single inheritance in this codebase:
    CEnemy's first member is `CCharacter base; // 0x0`, CCharacter's is
    `CDemonActor base; // 0x0`, and so on.
    """
    derived = {}
    for name, flds in layout.items():
        if not flds:
            continue
        first = flds[0]
        if first['offset'] != 0:
            continue
        base = first.get('type')
        if not base or base == name or base not in layout:
            continue
        derived.setdefault(base, []).append(name)
    return derived


def identify_derived_field_index_pun(code, struct_layout_map=None,
                                     struct_size_map=None):
    """Flag `IDENT[N].FIELD + 0xNN` that really names a derived class's field.

    When Ghidra has no type for a derived class it cannot write `->victim`, so
    it reaches the field arithmetically instead: it steps N whole *base*-class
    strides off a base-typed pointer, picks whichever base field lands nearby,
    and adds a raw byte offset. The canonical case is
    `*(CHero **)(this_ptr_01[1].base.actor_name + 0x18)` on a `CCharacter *`,
    where 1 * sizeof(CCharacter) (0xbe24) + offsetof(actor_name) (0) + 0x18
    lands on 0xbe3c — exactly `offsetof(CEnemy, victim)`. The whole expression
    is one named field access written the long way round.

    No existing detector sees it. `stale_struct_offset_64bit` only matches
    `*(T *)(base + 0xNN)`, where the offset is a visible term; here it is
    buried inside array-index arithmetic, so the shape never matches. It also
    survives compilation and 64-bit portability checks, because every term is
    individually well-typed.

    Two shapes, both requiring the arithmetic to land on a field *exactly*:

    * `N >= 1` — steps past the end of the base struct into a derived one.
      Indexing element N of a base-typed pointer that actually points at a
      derived object is meaningless on its own, which is what makes this
      precise: it only resolves at all when a derived type has a field at the
      computed offset.
    * `N == 0` — stays inside the same struct but resolves to a *different*
      field than the one named, i.e. Ghidra reached a neighbour through
      whichever field it happened to pick. Skipped when the address stays
      within the named field's own bytes, which is ordinary array indexing.

    Needs both maps (inert without them), like struct_field_overrun.

    Args:
        code: source text.
        struct_layout_map: struct -> field layout (build_struct_layout_map).
        struct_size_map: struct -> size in bytes (build_struct_size_map).

    Returns:
        List of suspect dicts (type derived_field_index_pun).
    """
    suspects = []
    if not code or not struct_layout_map or not struct_size_map:
        return suspects
    var_types = _sfo_resolve_var_types(code)
    if not var_types:
        return suspects
    derived_map = _dfi_derived_map(struct_layout_map)

    # The class this function belongs to, used to disambiguate between sibling
    # derived types. `this_ptr` names it directly when present; otherwise take
    # it from the `// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_...` header.
    func_class = var_types.get('this_ptr')
    if not func_class or func_class not in struct_layout_map:
        nm = re.search(r'//\s*Name:\s*\w+?\.\w+_([A-Z]\w*?)_[a-z]\w*_FUN_', code)
        func_class = nm.group(1) if nm else None

    for lineno, line in enumerate(code.split('\n'), 1):
        stripped = line.strip()
        if (stripped.startswith('//') or stripped.startswith('/*')
                or stripped.startswith('*')):
            continue
        for m in _DFI_PUN_RE.finditer(line):
            ident, idx_s, path, const_s = m.groups()
            base_type = var_types.get(ident)
            if not base_type or base_type not in struct_layout_map:
                continue
            size = struct_size_map.get(base_type)
            if not size:
                continue
            resolved = _dfi_path_offset(base_type, path, struct_layout_map)
            if resolved is None:
                continue
            path_off, path_fld = resolved
            index = int(idx_s)
            const = int(const_s, 16) if const_s.lower().startswith('0x') \
                else int(const_s)
            total = index * size + path_off + const

            if index == 0:
                # Same struct: only interesting if it left the named field.
                if total < path_off + path_fld['len']:
                    continue
                owners = [base_type]
            else:
                owners = derived_map.get(base_type, [])
                if not owners:
                    continue

            # Exact landing only — a hit in the middle of a field is not a
            # recovered name, it is a different (overrun) problem.
            hits = []
            for owner in owners:
                fld = _sfo_field_at_offset(struct_layout_map, owner, total)
                if fld and fld['offset'] == total:
                    hits.append((owner, fld))
            if not hits:
                continue

            # A base class usually has many derived classes, and several can
            # happen to have a field at the same offset — so the offset alone
            # does not name the type. The function's own class does: a pun in
            # CStairs::renderOpaque is a CStairs, not whichever sibling of
            # CDemonActor happens to match. Fall back to reporting the
            # candidates rather than asserting one of them.
            preferred = [h for h in hits if h[0] == func_class]
            if preferred:
                owner, fld = preferred[0]
                alt = ''
            elif len(hits) == 1:
                owner, fld = hits[0]
                alt = ''
            else:
                owner, fld = hits[0]
                alt = (' Ambiguous: %s also has a field there — confirm the '
                       'real class from the .asm before rewriting.'
                       % ', '.join('%s::%s' % (o, f['name'])
                                   for o, f in hits[1:4]))

            suspects.append({
                'type': 'derived_field_index_pun',
                'line': lineno,
                'text': stripped[:200],
                'description': (
                    "'%s' walks %d x sizeof(%s) (0x%x) + offsetof(%s) (0x%x) "
                    "+ 0x%x = 0x%x, which is exactly offsetof(%s, %s). Ghidra "
                    "had no %s type here and reached the field by index "
                    "arithmetic; write it as ((%s *)%s)->%s (§de-pun/§12).%s"
                    % (m.group(0).strip(), index, base_type, size, path,
                       path_off, const, total, owner, fld['name'], owner,
                       owner, ident, fld['name'], alt)),
                'severity': SUSPECT_SEVERITY.get(
                    'derived_field_index_pun', 'moderate'),
            })
    return suspects


def identify_mem_magic_size(code, struct_layout_map=None, struct_size_map=None):
    """Flag memcpy/memmove/memset whose byte size hardcodes sizeof(an unstable T).

    Sibling of identify_alloc_magic_size for the copy/fill family. Watcom baked
    struct sizes as immediates, so the decompiler emits e.g.
        memcpy(this_ptr, other, 0x78);   // 0x78 == sizeof(SNetPlayer)
        memset(p, 0, 0x2c);              // 0x2c == sizeof(T)
    On the 32-bit matching build these are correct. They only *break* at 64-bit
    if sizeof(T) actually changes there — i.e. T (transitively) contains a
    pointer. A copy of a pure-scalar struct (a float vertex, an RGB palette)
    keeps its size and is left alone, which is what kills the size-collision
    noise a bare size==sizeof match would produce.

    Precision comes from resolving the *type* of the destination (and, for
    memcpy/memmove, the source) access-path via the same var-type + layout
    machinery struct_field_overrun uses — there is no cast to key off as with
    alloc. A site fires only when:
      - the size arg is a numeric literal (bare, or an `n * 0xNN` stride), and
      - dest or src resolves to a struct type T, and
      - the literal == sizeof(T), and
      - T is 64-bit-unstable.
    An unresolved operand or a non-matching / non-numeric size yields no flag.

    NOTE (serialization): a match is a *candidate*, not an automatic fix. If the
    copy marshals a struct to/from a fixed on-disk / on-wire buffer, the byte
    count must stay literal and sizeof(T) would break the format at 64-bit. The
    description says so; the human triages per site (flag-only detector).

    Args:
        code: source text.
        struct_layout_map: struct -> field layout (build_struct_layout_map);
            needed for type resolution and the unstable-set computation.
        struct_size_map: struct/union -> byte size (build_struct_size_map).

    Returns:
        List of suspect dicts (type mem_magic_size), one per matched site.
    """
    suspects = []
    if not code or not struct_layout_map or not struct_size_map:
        return suspects

    unstable = _struct_grows_at_64bit(struct_layout_map)
    if not unstable:
        return suspects
    var_types = _sfo_resolve_var_types(code)

    for m in _MEM_FN_CALL_RE.finditer(code):
        # Skip a call whose head sits on a comment line.
        line_start = code.rfind('\n', 0, m.start()) + 1
        nl = code.find('\n', m.start())
        first_line = code[line_start:(nl if nl != -1 else len(code))].strip()
        if first_line.startswith(('//', '#', '/*', '*')):
            continue

        fn = m.group(1)
        call = _extract_balanced_parens(code[m.end() - 1:])
        if call is None:
            continue
        args = _mem_split_top_args(call[1:-1])
        if len(args) < 3:
            continue

        size_arg = args[-1]
        consts = set()
        for sm in _MEM_SIZE_STRIDE_RE.finditer(size_arg):
            cs = sm.group(1) or sm.group(2)
            consts.add(int(cs, 16) if cs.startswith('0x') else int(cs))
        bm = _MEM_SIZE_BARE_RE.match(size_arg)
        if bm:
            cs = bm.group(1)
            consts.add(int(cs, 16) if cs.startswith('0x') else int(cs))
        if not consts:
            continue

        # dest is always the first arg; src only exists for the copy family.
        operands = [('dest', args[0])]
        if fn in ('memcpy', 'memmove'):
            operands.append(('src', args[1]))

        hit = None
        for role, operand in operands:
            t = resolve_access_path_type(operand, var_types, struct_layout_map)
            if not t or t not in unstable:
                continue
            tsize = struct_size_map.get(t)
            if tsize is None or tsize not in consts:
                continue
            hit = (role, t, tsize)
            break
        if hit is None:
            continue

        role, t, tsize = hit
        desc = (
            "%s size hardcodes 0x%x == sizeof(%s), whose %s resolves to that "
            "struct. %s is 64-bit-unstable (contains a pointer), so the struct "
            "grows past 0x%x once pointers are 8 bytes and %s covers only its "
            "leading 0x%x bytes, leaving the grown tail untouched. Replace the "
            "magic with sizeof(%s) for an in-memory copy — but if this marshals "
            "to a fixed file/wire format, keep the literal (sizeof would break "
            "the format) (§17/§18)."
            % (fn, tsize, t, role, t, tsize, fn, tsize, t))
        line_no = code.count('\n', 0, m.start()) + 1
        snippet = re.sub(r'\s+', ' ', m.group(0)[:-1] + call).strip()
        suspects.append({
            'line': line_no,
            'type': 'mem_magic_size',
            'match': '%s(%s) size 0x%x == sizeof(%s)' % (fn, role, tsize, t),
            'text': snippet[:200],
            'description': desc,
            'severity': SUSPECT_SEVERITY.get('mem_magic_size', 'moderate'),
        })

    return suspects




# A local assigned a hardcoded element stride: `n = count * 4;`, `sz = w << 2;`,
# `bytes = n * 0x20;`. Captures the LHS name so a later mem*(..., n) can be
# linked back. RHS must END in the stride op (no trailing arithmetic) so
# `x = y*4 + 3` — a real offset, not a size — doesn't match. The stride must be
# >= 4 bytes (`* 4/8/0xNN/2-digit` or `<< >=2`): smaller multipliers (`* 2`
# 16bpp, `* 3` RGB triplets) are usually pixel/format math, not element sizes,
# and generate false positives (see the bpp-ladder suppression below).
_STRIDE_ASSIGN_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)\s*=\s*[^;=]*?'
    r'(?:\*\s*(?:0[xX][0-9a-fA-F]+|[4-9]|\d{2,})|<<\s*(?:[2-9]|\d{2,}))\s*;\s*$')
# The size argument of a mem* call, ending in a hardcoded element stride (same
# >= 4 threshold as above).
_TRAILING_STRIDE_RE = re.compile(
    r'(?:\*\s*(?:0[xX][0-9a-fA-F]+|[4-9]|\d{2,})|<<\s*(?:[2-9]|\d{2,}))\s*$')
# Permissive: ANY trailing `* <int>` / `<< <int>` (incl. *1/*2/*3). Used only to
# split a mem* size arg into (base count expression, multiplier) so a function's
# calls can be grouped by base and a bits-per-pixel ladder recognized.
_ANY_TRAILING_STRIDE_RE = re.compile(
    r'^(.*?)(?:\*\s*(0[xX][0-9a-fA-F]+|\d+)|<<\s*(\d+))\s*$')
_MEMFN_CALL_RE = re.compile(r'\b(memcpy|memmove|memset)\s*(?=\()')


def _memfn_size_args(decompiled_code):
    """Yield (line_no, match_obj, size_arg) for each mem* call with >= 3 args.

    Extracts balanced parens so multi-line calls are handled, then splits on
    top-level commas to isolate the trailing (size) argument.
    """
    for m in _MEMFN_CALL_RE.finditer(decompiled_code):
        paren = _extract_balanced_parens(decompiled_code[m.end():])
        if not paren:
            continue
        inner = paren[1:-1]
        args, depth, start = [], 0, 0
        for i, ch in enumerate(inner):
            if ch in '([':
                depth += 1
            elif ch in ')]':
                depth -= 1
            elif ch == ',' and depth == 0:
                args.append(inner[start:i])
                start = i + 1
        args.append(inner[start:])
        if len(args) < 3:
            continue
        line_no = decompiled_code[:m.start()].count('\n') + 1
        yield line_no, m, args[-1].strip()


def _stride_base_and_mult(size_arg):
    """Split a mem* size arg into (normalized_base_expr, multiplier).

    `iVar1 * 4` -> ('iVar1', 4); `iVar1 << 2` -> ('iVar1', 4);
    `iVar1` -> ('iVar1', 1). Whitespace in the base is collapsed so the same
    count expression groups regardless of formatting.
    """
    m = _ANY_TRAILING_STRIDE_RE.match(size_arg)
    if not m:
        base, mult = size_arg, 1
    elif m.group(2) is not None:
        base, mult = m.group(1), int(m.group(2), 0)
    else:
        base, mult = m.group(1), 1 << int(m.group(3))
    return re.sub(r'\s+', '', base), mult


def identify_pointer_stride_bytecount(decompiled_code):
    """Flag mem* byte counts that hardcode an element stride.

    `memmove(dst, src, count * 4)` (or `<< 2`, a struct stride like `* 0x20`,
    and the split form `n = count * 4; memmove(dst, src, n);`) bakes the element
    size as a literal instead of `count * sizeof(*dst)`. When the copied array
    holds POINTERS this is a silent 64-bit bug — a `* 4` moves only half of each
    8-byte pointer, corrupting the pool/queue/list (e.g. CInventory::removeItem
    items[], CWayPoint::findNearestReachable search queue). For value arrays
    (int/float/pixel/struct) it is width-stable but still wants
    `count * sizeof(*dst)` for self-documentation. Either way the fix is the
    same: replace the literal stride with `sizeof(*dst)`. Detector is map-free so
    it runs in test_suspects.sh per-keep.

    Bits-per-pixel false positive: a byte-buffer clear that multiplies the same
    count by the pixel depth across a format switch (8bpp `iVar1`, 16bpp
    `iVar1 * 2`, 32bpp `iVar1 * 4`, e.g. clearScreenRegion) is NOT an element
    stride — the `* 4` is bytes-per-pixel on a `byte *`, with no `sizeof(*dst)`
    to name. Such a base always carries a `* 2` (16bpp) sibling, so a base seen
    with both `* 2` and `* 4` is skipped. A genuine pointer array is never copied
    at half-stride, so this never masks a real bug.

    Args:
        decompiled_code: The decompiled C pseudocode string.

    Returns:
        List of suspect dicts (type pointer_stride_bytecount).
    """
    suspects = []
    if not decompiled_code:
        return suspects

    # Pass 1: names assigned a bare element stride, for the split form.
    stride_names = set()
    for line in decompiled_code.split('\n'):
        m = _STRIDE_ASSIGN_RE.match(line)
        if m:
            stride_names.add(m.group(1))

    # Pass 2 (suppression map): group every mem* size arg by its base count
    # expression and collect the multipliers it is used with (including the
    # unflagged * 1 / * 2 forms). A base cleared at both * 2 and * 4 is a
    # bits-per-pixel ladder on a byte buffer, not an element-stride bug.
    base_mults = {}
    for _line_no, _m, size_arg in _memfn_size_args(decompiled_code):
        base, mult = _stride_base_and_mult(size_arg)
        base_mults.setdefault(base, set()).add(mult)

    # Pass 3: flag mem* calls whose size arg is a hardcoded element stride or a
    # stride-named local, unless suppressed as a bits-per-pixel ladder.
    seen = set()
    for line_no, m, size_arg in _memfn_size_args(decompiled_code):
        is_literal = bool(_TRAILING_STRIDE_RE.search(size_arg))
        is_named = size_arg in stride_names
        if not (is_literal or is_named):
            continue
        base, _mult = _stride_base_and_mult(size_arg)
        mults = base_mults.get(base, ())
        if 2 in mults and 4 in mults:
            continue  # bits-per-pixel ladder, not an element-stride bug
        if line_no in seen:
            continue
        seen.add(line_no)
        stripped = decompiled_code.split('\n')[line_no - 1].strip()
        suspects.append({
            'line': line_no,
            'type': 'pointer_stride_bytecount',
            'match': m.group(1),
            'text': stripped[:200],
            'description': (
                'mem* byte count hardcodes an element stride (%s) instead of '
                'count * sizeof(*dst). If the array holds pointers this '
                'corrupts it on the 64-bit build (a *4 moves half of each '
                '8-byte pointer); for value arrays use sizeof for '
                'self-documentation.' % (
                    size_arg if is_literal else '%s = count * N' % size_arg)),
            'severity': SUSPECT_SEVERITY.get(
                'pointer_stride_bytecount', 'moderate'),
        })

    return suspects




def detect_content_suspects(code, func_globals=None, global_interval_map=None,
                            address_interval_map=None, func_calls=None,
                            struct_layout_map=None, struct_size_map=None):
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
        struct_size_map: Struct/union name -> byte size (for alloc_magic_size);
            from get_struct_size_map() / build_struct_size_map().

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
    found.extend(identify_pointer_truncation_suspects(
        code, func_globals, global_interval_map, struct_layout_map))
    found.extend(identify_truncating_pointer_mask(code))
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
    found.extend(identify_unrolled_memcpy_dword_cast_loop(code))
    found.extend(identify_unrolled_memcpy_index_form(code))
    found.extend(identify_unrolled_field_copy(code, struct_layout_map))
    found.extend(identify_partial_struct_copy(code, struct_layout_map))
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
    found.extend(identify_subfield_vector_pun(
        code, struct_layout_map, struct_size_map))
    found.extend(identify_vector_type_pun(code))
    found.extend(identify_baked_self_address(code))
    found.extend(identify_unrolled_strlen_loops(code))
    found.extend(identify_unrolled_strcat_loops(code))
    found.extend(identify_unrolled_strchr_loops(code))
    found.extend(identify_preinc_loop_idiom(code))
    found.extend(identify_loop_clobbered_constant(code))
    found.extend(identify_fast_sqrt_inline(code))
    found.extend(identify_bit_int_float_compare(code))
    found.extend(identify_struct_field_overrun(code, struct_layout_map))
    found.extend(identify_alloc_magic_size(code, struct_size_map))
    found.extend(identify_struct_reinterpret_walk(code, struct_size_map))
    found.extend(identify_mem_magic_size(
        code, struct_layout_map, struct_size_map))
    found.extend(identify_pointer_stride_bytecount(code))
    found.extend(identify_stale_struct_offset_64bit(code, struct_layout_map))
    found.extend(identify_derived_field_index_pun(
        code, struct_layout_map, struct_size_map))
    return found




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
