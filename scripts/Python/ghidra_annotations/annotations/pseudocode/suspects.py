# Suspect pattern detection for pseudocode export
# Identifies problematic patterns in decompiled code that may need manual review

import bisect
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
    'unnamed_local': 'mild',
    'unknown_field': 'mild',
    'undefined_ram': 'mild',
    'unnamed_field': 'mild',
    'unknown_param': 'mild',
    'register_param': 'mild',
    'negative_offset': 'mild',
    'decompiler_intrinsic': 'mild',
    'pointer_cast': 'mild',
    'suspect_float': 'mild',
    'nonstandard_int': 'mild',
    'displaced_global_access': 'moderate',
    'wrong_global': 'moderate',
    'suspicious_cast': 'moderate',
    'raw_address_constant': 'moderate',
    'unrolled_strcpy': 'mild',
    'unrolled_memcpy': 'mild',
    'unrolled_strlen': 'mild',
    'unrolled_strcat': 'mild',
    'unrolled_strchr': 'mild',
    'preinc_loop_idiom': 'moderate',
    'missing_cave_copy': 'moderate',
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
    # Type casts to weird pointer arithmetic
    (r'\(\w+\s*\*\s*\)\s*\(\s*\(int\)', 'pointer_cast', 'Complex pointer cast'),
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
    # param_N or paramN - Unnamed function parameters (need meaningful names)
    (r'\bparam_?\d+\b', 'unnamed_param', 'Unnamed function parameter'),
    # p1, p2, etc. - Short generic parameter names in function signatures (need meaningful names)
    # Only match when preceded by a type and * (pointer param) or type name, to avoid matching local vars
    (r'(?:void|int|float|uint|char|double)\s*\*?\s*\bp\d+\b', 'unnamed_param', 'Unnamed function parameter (short form)'),
    # Parameters or variables with "unknown" in the name - flagged for later investigation
    (r'\bunknown_\w+\b', 'unknown_param', 'Parameter/variable named unknown (needs investigation)'),
    # local_XX - Unnamed local variables (need meaningful names)
    (r'\blocal_[0-9a-fA-F]+\b', 'unnamed_local', 'Unnamed local variable'),
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
    # Decompiler intrinsics - pseudo-functions and artifacts (not real C)
    # Includes: ROUND(), SQRT(), CONCAT44, SUB84, SBORROW, CARRY4, NAN(), fsin, fcos, fptan, ADJ(), etc.
    (r'\b(ROUND|SQRT|TRUNC|FLOOR|CEIL|ABS|ZEXT|SEXT|CARRY\d*|SCARRY\d*|SBORROW\d*|CONCAT\d+|SUB\d+|NAN|fsin|fcos|fptan|fpatan|fsqrt|fabs|ADJ)\b', 'decompiler_intrinsic', 'Decompiler intrinsic (not real C)'),
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


# Watcom's loop-unrolled strcpy copies 2 bytes per iteration and checks for
# null termination in the middle of the body. The distinguishing line is
# `if (<byte_var> == '\0') break;` immediately after `*<dst> = <byte_var>;`
# — normal code never breaks on null right after a byte store.
_UNROLLED_BYTE_STORE_RE = re.compile(
    r"^\s*\*?(\w+)(?:\[\d+\])?\s*=\s*(\w+)\s*;\s*$")
_UNROLLED_NULL_BREAK_RE = re.compile(
    r"^\s*if\s*\(\s*(\w+)\s*==\s*'\\0'\s*\)\s*break\s*;\s*$")
_UNROLLED_DO_RE = re.compile(r"^\s*do\s*\{?\s*$")
_UNROLLED_WHILE_RE = re.compile(
    r"^\s*\}\s*while\s*\(\s*\w+\s*!=\s*'\\0'\s*\)\s*;\s*$")


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
        # Require `*dst = cVar;` followed by `if (cVar == '\0') break;`
        store_m = _UNROLLED_BYTE_STORE_RE.match(lines[i])
        if not store_m:
            continue
        null_m = _UNROLLED_NULL_BREAK_RE.match(lines[i + 1])
        if not null_m or store_m.group(2) != null_m.group(1):
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
            'severity': 'mild',
        })
    return suspects


# Watcom's loop-unrolled memcpy copies N dwords (or words/bytes) per
# iteration inside a countdown for loop. The tell-tale combination is a
# countdown header plus the `((uint)<bool> * -2 + 1)` arithmetic, which is
# Watcom's direction-select idiom for REP MOVSD emulation.
_UNROLLED_MEMCPY_FOR_RE = re.compile(
    r"^\s*for\s*\(\s*(\w+)\s*=\s*[^;]+?;\s*[^;]*?\1\s*!=\s*0\s*;\s*"
    r"\1\s*=\s*\1\s*(?:\+\s*-?1|-\s*1)\s*\)\s*\{?\s*$")
_UNROLLED_MEMCPY_STORE_RE = re.compile(
    r"^\s*\*\s*(?:\(\s*\w+\s*\*\s*\)\s*)?\w+\s*=\s*"
    r"\*\s*(?:\(\s*\w+\s*\*\s*\)\s*)?\w+\s*;\s*$")
# The `(uint)bVar * -2 + 1` direction trick — very specific to Watcom's
# REP MOVSD lowering. `* -8 + 4` is the dword-scaled variant.
_UNROLLED_MEMCPY_DIR_RE = re.compile(
    r"\(\s*uint\s*\)\s*\w+\s*\*\s*-?\d+\s*\+\s*\d+")


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
        # Walk up to 6 lines forward looking for a matching close brace
        # and checking the body for the store + direction-idiom signals.
        has_store = False
        has_direction = False
        close_line = None
        for fwd in range(1, 8):
            if i + fwd >= n:
                break
            body = lines[i + fwd]
            if _UNROLLED_MEMCPY_STORE_RE.match(body):
                has_store = True
            if _UNROLLED_MEMCPY_DIR_RE.search(body):
                has_direction = True
            if body.strip().startswith('}'):
                close_line = i + fwd
                break
        if not (has_store and has_direction and close_line):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'unrolled_memcpy',
            'match': 'for (...; != 0; ... + -1)',
            'text': lines[i].strip()[:120],
            'description': (
                'Watcom loop-unrolled memcpy (countdown for-loop with typed '
                'word/dword store and direction-bool arithmetic). Replace '
                'the whole loop with memcpy(dst, src, N) in a .keep.'),
            'severity': 'mild',
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
        # Walk downward for `} while (cVar != '\0');` closer.
        loop_end = None
        for fwd in range(2, 14):
            if i + fwd >= n:
                break
            if _UNROLLED_WHILE_RE.match(lines[i + fwd]):
                loop_end = i + fwd
                break
        if loop_end is None:
            continue
        # Body must contain both the byte load and the direction-stepped
        # pointer walk. Order varies (load may come before or after step,
        # and the decompile sometimes inserts no-op `p = p;` lines).
        has_load = False
        has_step = False
        for idx in range(loop_start + 1, loop_end):
            if _UNROLLED_STRLEN_LOAD_RE.match(lines[idx]):
                has_load = True
            if _UNROLLED_STRLEN_STEP_RE.match(lines[idx]):
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
            'severity': 'mild',
        })
    return suspects


# Strcat = strlen-scan followed by an unrolled strcpy copying src onto the
# null terminator of dst. After the strlen loop, the code sets
# `<pcat> = <pend> + -1;` positioning at the null, then falls into a
# standard 2-byte-at-a-time strcpy loop writing onto that position.
_UNROLLED_STRCAT_ADJUST_RE = re.compile(
    r"^\s*(\w+)\s*=\s*(\w+)\s*\+\s*-\s*1\s*;\s*$")


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
        # Scan a few lines after the close for `pcat = pend + -1;`
        adjust_idx = None
        for fwd in range(1, 6):
            if close_idx + fwd >= n:
                break
            if _UNROLLED_STRCAT_ADJUST_RE.match(lines[close_idx + fwd]):
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
                        'severity': 'mild',
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
            'severity': 'mild',
        })
    return suspects


_PREINC_ADVANCE_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\([A-Za-z_]\w*\s*\*\)\s*[^;]*?&[^;]*?\b\1->[^;]*?;\s*$")
_PREINC_SELFASSIGN_RE = re.compile(
    r"^\s*(\w+)\s*=\s*\1\s*;\s*$")
_PREINC_ARRAY0_RE = re.compile(
    r"\b(\w+)->\w+\[0\]")


def identify_preinc_loop_idiom(decompiled_code):
    """Detect Ghidra's pre-increment-array-walk loop decompile artifact.

    Canonical shape:
        pX = start;
        do {
            pX = (T *)&(pX->field)...;      // advance via struct-field pointer arithmetic
            pX->array[0].field = value;      // constant-index [0] access on advanced pointer
            ...
            pX = pX;                         // self-assignment no-op
        } while (pX != end_marker);

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
            m = _PREINC_ADVANCE_RE.match(bl)
            if m:
                advance_match = m
                break
        if not advance_match:
            continue
        var = advance_match.group(1)
        has_array0 = any(
            m.group(1) == var
            for m in _PREINC_ARRAY0_RE.finditer(body_text))
        has_selfassign = any(
            _PREINC_SELFASSIGN_RE.match(bl)
            and _PREINC_SELFASSIGN_RE.match(bl).group(1) == var
            for bl in body_lines)
        if not (has_array0 and has_selfassign):
            continue
        suspects.append({
            'line': i + 1,
            'type': 'preinc_loop_idiom',
            'match': "do { var = (T *)&var->...; var->arr[0]...; var = var; ...}",
            'text': lines[i].strip()[:120],
            'description': (
                "Ghidra pre-increment-array-walk loop artifact on `{var}` "
                "(struct-field advance + constant `[0]` index + self-assign "
                "no-op). Always wrong as-decoded; cross-reference .asm and "
                "rewrite as a straightforward for-loop in a .keep.").format(
                    var=var),
            'severity': 'moderate',
        })
    return suspects


# Struct-type locals that the missing-cave-copy bug pattern typically affects.
_UNREF_STRUCT_TYPES = frozenset({
    'CMatrix3x4f', 'CMatrix3x3f', 'CQuaternion4f', 'CVector3f', 'CVector3i',
    'CVector2f', 'CLocation', 'UOrientationVector', 'CBoundingBox3D',
    'SDamageInfo', 'CBox',
})
_UNREF_DECL_RE = re.compile(
    r"^\s*([A-Z][A-Za-z0-9_]*)\s+([a-zA-Z_]\w*)\s*;\s*$")
_CAVE_SRC_RE = re.compile(r"MOV\s+ECX,\s*dword ptr\s*\[ESI")
_CAVE_DST_RE = re.compile(r"MOV\s+dword ptr\s*\[EDI(?:\s*\+\s*0x[0-9a-f]+)?\]\s*,\s*ECX")


def _count_cave_copy_blocks(asm_code):
    """Count consecutive MOV-ECX-from-ESI / MOV-to-EDI-from-ECX pair runs
    that are ≥ 12 pairs long (48-byte struct copies — i.e. CMatrix3x4f).

    These blocks are the Ghidra-visible signature of Watcom's inline struct
    memcpy, typically emitted after an output-param-in-register function
    call to copy the result from the callee's output slot into another local.
    """
    if not asm_code:
        return 0
    consec = 0
    blocks = 0
    for line in asm_code.split("\n"):
        if _CAVE_SRC_RE.search(line) or _CAVE_DST_RE.search(line):
            consec += 1
        else:
            if consec >= 24:  # 12 MOV-pairs = 48 bytes = one CMatrix3x4f
                blocks += 1
            consec = 0
    if consec >= 24:
        blocks += 1
    return blocks


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
    # Check asm side first — cheaper and rules out most functions.
    cave_blocks = _count_cave_copy_blocks(assembly_code)
    if cave_blocks < 2:
        return suspects
    lines = decompiled_code.split('\n')
    decls = []
    for i, line in enumerate(lines):
        m = _UNREF_DECL_RE.match(line)
        if not m:
            continue
        type_name, var_name = m.group(1), m.group(2)
        if type_name not in _UNREF_STRUCT_TYPES:
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
        candidates.append((decl_line, type_name, var_name))
    if len(candidates) < 2:
        return suspects
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
    return suspects


def detect_content_suspects(code, func_globals=None, global_interval_map=None,
                            address_interval_map=None, func_calls=None):
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
    found.extend(identify_format_string_mismatch(
        code, func_calls))
    found.extend(identify_unrolled_strcpy_loops(code))
    found.extend(identify_unrolled_memcpy_loops(code))
    found.extend(identify_unrolled_strlen_loops(code))
    found.extend(identify_unrolled_strcat_loops(code))
    found.extend(identify_unrolled_strchr_loops(code))
    found.extend(identify_preinc_loop_idiom(code))
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
