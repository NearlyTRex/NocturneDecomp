# Auto-split from the former monolithic suspects.py — see suspects/__init__.py.
"""Assembly-text suspect detectors: displaced/wrong global access at the asm
level, unrolled rep-movs/stos block reconstruction, and cave-copy detection."""

import bisect
import re
from ghidra_annotations.annotations.pseudocode.pass_by_value import BYVALUE_CALLEES
from ._common import (
    SUSPECT_SEVERITY, _find_global_at, _find_global_in_range, _normalize_addr
)




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




# Partial cave copy: `A.F = B.F;` — a Watcom struct copy that Ghidra truncated
# to a single field (same field on both sides, both simple struct-local names).
# Unlike a fully-dropped copy (which leaves an UNreferenced dead local the
# primary/secondary passes catch), the surviving field makes the destination
# look initialized+used, so those passes are blind to it. Canonical:
# precomputeNormals `local_60.z = local_84.z;` (should be `local_60 = local_84;`)
# → local_60.x/.y left garbage → every world position wrong → env lighting dead.
_PARTIAL_FIELD_COPY_RE = re.compile(
    r"^\s*(\w+)\.(\w+)\s*=\s*(\w+)\.(\w+)\s*;\s*$")


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
    # Quaternary pass: PARTIAL cave copy (one surviving field). The passes above
    # need the destination to be UNreferenced / passed-once; when Ghidra keeps a
    # single field of the copy (`A.F = B.F;`) the destination is both assigned
    # and used, so they can't see it. Flag `A.F = B.F;` where A is a cave-
    # eligible struct type (size matches a cave block), A is passed by address to
    # a call, A has NO OTHER field assignment (only the one truncated field), and
    # B is a distinct struct that was itself filled by a call (`&B` appears) —
    # keeping this a struct-copy shape, not a scalar extraction.
    flagged_lines = {s['line'] for s in suspects}
    eligible_decl = {v: (dl, t) for dl, t, v in decls}
    for i, line in enumerate(lines):
        m = _PARTIAL_FIELD_COPY_RE.match(line)
        if not m:
            continue
        dst, dfield, src, sfield = m.group(1), m.group(2), m.group(3), m.group(4)
        if dst == src or dfield != sfield or dst not in eligible_decl:
            continue
        decl_line, type_name = eligible_decl[dst]
        if (i + 1) in flagged_lines:
            continue
        dst_addr_re = re.compile(r"&\s*" + re.escape(dst) + r"\b")
        src_addr_re = re.compile(r"&\s*" + re.escape(src) + r"\b")
        dst_field_write_re = re.compile(r"\b" + re.escape(dst) + r"\.\w+\s*=(?!=)")
        passed_by_addr = other_field_write = src_filled = False
        for j, l2 in enumerate(lines):
            if j == decl_line:
                continue
            if dst_addr_re.search(l2):
                passed_by_addr = True
            if src_addr_re.search(l2):
                src_filled = True
            if j != i and dst_field_write_re.search(l2):
                other_field_write = True
        if not (passed_by_addr and src_filled) or other_field_write:
            continue
        suspects.append({
            'line': i + 1,
            'type': 'missing_cave_copy',
            'match': "{d}.{f} = {s}.{f}; (partial struct copy — expected "
                     "{d} = {s};)".format(d=dst, s=src, f=dfield),
            'text': line.strip()[:120],
            'description': (
                "Partial cave copy: `{d}` ({t}) receives ONLY field `.{f}` from "
                "`{s}` and is then passed by address to a call, but the `.asm` "
                "has a full {t}-sized cave-block struct copy. Ghidra truncated a "
                "`{d} = {s};` struct copy to one field, leaving `{d}`'s other "
                "fields uninitialised at runtime. See §20 — restore the full "
                "copy `{d} = {s};`.").format(d=dst, s=src, t=type_name, f=dfield),
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
