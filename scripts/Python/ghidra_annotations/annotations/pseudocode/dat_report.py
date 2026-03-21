# DAT_ global analysis report
# Identifies unnamed DAT_ globals and infers likely types from assembly/pseudocode usage

import bisect
import glob as glob_mod
import os
import re
from collections import defaultdict
from ghidra_annotations.util.log import log_info


# =============================================================================
# Struct/class size cache from data_types.json
# =============================================================================

_struct_size_cache = None


def build_struct_size_cache(pseudocode_src_dir):
    """Build a cache of struct/class sizes from data_types.json.

    Locates data_types.json relative to pseudocode_src_dir and extracts
    the 'len' field from each struct/class definition.

    Returns dict: type_name -> size_in_bytes
    """
    import json

    global _struct_size_cache
    if _struct_size_cache is not None:
        return _struct_size_cache

    # Derive data_types.json path: pseudocode_src_dir is .../pseudocode/src
    # so we need .../data_types/data_types.json
    annotations_base = pseudocode_src_dir
    while annotations_base and os.path.basename(annotations_base) != 'pseudocode':
        annotations_base = os.path.dirname(annotations_base)

    cache = {}
    if not annotations_base:
        log_info("Could not locate pseudocode base dir for struct size cache")
        _struct_size_cache = cache
        return cache

    exe_dir = os.path.dirname(annotations_base)
    data_types_path = os.path.join(exe_dir, 'data_types', 'data_types.json')
    if not os.path.isfile(data_types_path):
        log_info("data_types.json not found at %s" % data_types_path)
        _struct_size_cache = cache
        return cache

    try:
        with open(data_types_path) as f:
            data_types = json.load(f)
    except (json.JSONDecodeError, IOError) as e:
        log_info("Failed to load data_types.json: %s" % e)
        _struct_size_cache = cache
        return cache

    for section in ('structs', 'unions'):
        for entry in data_types.get(section, []):
            name = entry.get('name', '')
            size = entry.get('len')
            if name and size is not None and size > 0:
                cache[name] = size

    _struct_size_cache = cache
    log_info("Built struct size cache: %d types with known sizes" % len(cache))
    return cache


# =============================================================================
# Assembly instruction patterns for type inference
# =============================================================================

# FLD/FST/FADD etc. with the DAT address = float or double
FLOAT_MNEMONICS = {'FLD', 'FSTP', 'FST', 'FILD', 'FISTP', 'FADD', 'FSUB', 'FMUL', 'FDIV',
                   'FCOM', 'FCOMP', 'FCOMPP', 'FLDZ', 'FLD1'}

# MMX/SSE mnemonics
MMX_MNEMONICS = {'MOVQ', 'MOVD', 'PADDD', 'PSUBD', 'PMULLW', 'PUNPCKLDQ'}


def infer_type_from_asm(mnemonic, operands, dat_name):
    """Infer a type hint from an assembly instruction referencing a DAT_ global.

    Returns (type_hint, confidence) or (None, None).
    """
    mnemonic_upper = mnemonic.upper().split('.')[0]  # Strip suffixes like .REP

    # Float operations
    if mnemonic_upper in FLOAT_MNEMONICS:
        if 'float ptr' in operands.lower() or 'dword ptr' in operands.lower():
            return 'float', 'high'
        if 'qword ptr' in operands.lower() or 'double' in operands.lower():
            return 'double', 'high'
        return 'float', 'medium'

    # Byte access
    if 'byte ptr' in operands.lower():
        if mnemonic_upper == 'MOVSX':
            return 'char', 'high'
        if mnemonic_upper == 'MOVZX':
            return 'byte', 'high'
        if mnemonic_upper in ('MOV', 'CMP', 'TEST', 'OR', 'AND', 'XOR'):
            return 'byte', 'medium'

    # Word access
    if 'word ptr' in operands.lower() and 'dword' not in operands.lower():
        if mnemonic_upper == 'MOVSX':
            return 'short', 'high'
        if mnemonic_upper == 'MOVZX':
            return 'ushort', 'high'
        return 'short', 'medium'

    # Dword access patterns
    if 'dword ptr' in operands.lower():
        # LEA with DAT address suggests pointer/array
        if mnemonic_upper == 'LEA':
            return 'void *', 'medium'

    # PUSH of DAT address (not contents) suggests it's used as a pointer
    if mnemonic_upper == 'PUSH' and dat_name in operands and '[' not in operands:
        return 'void *', 'low'

    return None, None


def infer_type_from_pseudocode(lines, dat_name):
    """Infer type hints from pseudocode usage of a DAT_ global.

    Returns list of (type_hint, confidence) tuples.
    """
    hints = []
    for line in lines:
        # Cast patterns: (float)DAT_xxx or (int *)&DAT_xxx
        cast_m = re.search(r'\((\w[\w\s\*]*?)\)\s*[&]?' + re.escape(dat_name), line)
        if cast_m:
            cast_type = cast_m.group(1).strip()
            hints.append((cast_type, 'high'))

        # Float literal assignment: DAT_xxx = 1.0f or similar
        if re.search(re.escape(dat_name) + r'\s*=\s*[\d]+\.[\d]', line):
            hints.append(('float', 'medium'))

        # Comparison with 0.0
        if re.search(re.escape(dat_name) + r'\s*[<>=!]+\s*0\.0', line):
            hints.append(('float', 'medium'))

        # Array indexing: (&DAT_xxx)[idx] or DAT_xxx[idx]
        if re.search(r'[&]?' + re.escape(dat_name) + r'\s*\[', line):
            hints.append(('array', 'medium'))

        # Used as function pointer: (*DAT_xxx)( or (code *)DAT_xxx
        if re.search(r'\(\*' + re.escape(dat_name) + r'\)\s*\(', line):
            hints.append(('function_ptr', 'high'))
        if re.search(r'\(code\s*\*\)\s*' + re.escape(dat_name), line):
            hints.append(('function_ptr', 'high'))

        # String usage: strcmp/sprintf/etc with DAT
        if re.search(r'(strcmp|strcpy|strcat|sprintf|strlen|printf)\s*\([^)]*' + re.escape(dat_name), line):
            hints.append(('char *', 'high'))

    return hints


# =============================================================================
# Nearby symbol analysis
# =============================================================================

def find_nearby_named_globals(dat_addr_int, all_globals, range_bytes=256):
    """Find named (non-DAT_) globals near this address.

    This helps identify what struct/array a DAT_ might belong to.
    """
    nearby = []
    for name, info in all_globals.items():
        if name.startswith('DAT_'):
            continue
        try:
            other_addr = int(info['addr'], 16)
        except (ValueError, KeyError):
            continue
        distance = dat_addr_int - other_addr
        if 0 < distance <= range_bytes:
            nearby.append((name, info.get('type', '?'), distance))
        elif 0 < -distance <= range_bytes:
            nearby.append((name, info.get('type', '?'), distance))

    nearby.sort(key=lambda x: abs(x[2]))
    return nearby[:5]


BASE_TYPE_SIZES = {
    'TerminatedCString': 256,
    'char': 1, 'byte': 1, 'undefined1': 1,
    'short': 2, 'ushort': 2, 'undefined2': 2,
    'int': 4, 'uint': 4, 'undefined4': 4, 'float': 4, 'dword': 4,
    'longlong': 8, 'ulonglong': 8, 'double': 8, 'undefined8': 8,
    'pointer': 4, 'void*': 4,
}


def estimate_global_size(gtype, struct_sizes=None):
    """Estimate the byte size of a global from its type string.

    Returns (size, is_exact) where is_exact indicates if the size is
    known precisely (primitive/array/known struct) vs estimated (unknown).

    Args:
        struct_sizes: Optional dict mapping struct/class names to byte sizes
                      (from build_struct_size_cache).
    """
    if not gtype:
        return 4, False

    if struct_sizes is None:
        struct_sizes = _struct_size_cache or {}

    # Array types: e.g. "int[100]", "SFogImagePlane[16]", "char[241][320]"
    # Handle multi-dimensional arrays by multiplying all dimensions
    dims = re.findall(r'\[(\d+)\]', gtype)
    if dims:
        base_type = re.sub(r'\[\d+\]', '', gtype).strip()
        elem_size = BASE_TYPE_SIZES.get(base_type) or struct_sizes.get(base_type) or 4
        is_known = base_type in BASE_TYPE_SIZES or base_type in struct_sizes
        total = elem_size
        for d in dims:
            total *= int(d)
        return total, is_known

    # String types
    if 'String' in gtype or gtype.startswith('s_') or gtype.startswith('char['):
        return 256, False

    # Known primitive types
    if gtype in BASE_TYPE_SIZES:
        return BASE_TYPE_SIZES[gtype], True

    # Pointer types
    if '*' in gtype:
        return 4, True

    # Known struct/class types from header files
    if gtype in struct_sizes:
        return struct_sizes[gtype], True

    # Unknown struct/class type - return 0 (will use gap-based estimation)
    return 0, False


def _find_base_global_name(name, all_globals):
    """Find the base global for a sub-reference like g_Foo[0].bar or g_Foo[3].

    Returns the base global name if found, None otherwise.
    """
    # Strip trailing field accessors: g_Foo[0].bar.baz -> g_Foo[0]
    # Strip array indices: g_Foo[0] -> g_Foo
    candidate = name
    while True:
        # Strip trailing .field
        dot_m = re.match(r'(.+)\.\w+$', candidate)
        if dot_m:
            candidate = dot_m.group(1)
            if candidate in all_globals:
                return candidate
            continue
        # Strip trailing [N]
        bracket_m = re.match(r'(.+)\[\d+\]$', candidate)
        if bracket_m:
            candidate = bracket_m.group(1)
            if candidate in all_globals:
                return candidate
            continue
        break
    return None


def build_global_address_map(all_globals):
    """Build a sorted list of (addr, name, type, estimated_size) for all named globals.

    Skips sub-references (array elements, struct fields) when the base global
    exists, so the map contains only top-level declarations. This ensures
    gap-based size estimation works against the parent array/struct rather
    than individual fields.
    """
    entries = []
    for name, info in all_globals.items():
        if name.startswith('DAT_'):
            continue
        # Skip sub-references (g_Foo[3], g_Foo[0].bar, g_Foo.x) when the
        # base global exists — we only want top-level declarations
        base = _find_base_global_name(name, all_globals)
        if base is not None:
            continue
        try:
            addr = int(info['addr'], 16)
        except (ValueError, KeyError):
            continue
        gtype = info.get('type', '')
        size, is_exact = estimate_global_size(gtype)
        entries.append((addr, name, gtype, size, is_exact))

    entries.sort()
    return entries


def is_inside_named_global(dat_addr_int, all_globals, global_addr_map=None):
    """Check if a DAT_ address falls within a named (non-DAT_) global's data range.

    Returns the containing global's name if found, None otherwise.
    For example, DAT_006169b0 at address 006169b0 is inside the string
    "???" at 006169af (s_anon_006169af), so it's not a real global.

    Uses gap-based size estimation for struct/class types: if a struct global
    has no known size, the gap to the next named global is used as an upper bound.
    """
    if global_addr_map is None:
        global_addr_map = build_global_address_map(all_globals)

    # Binary search for the global just before this address
    addrs = [e[0] for e in global_addr_map]
    idx = bisect.bisect_right(addrs, dat_addr_int) - 1
    if idx < 0:
        return None

    prev_addr, prev_name, prev_type, prev_size, prev_exact = global_addr_map[idx]
    offset = dat_addr_int - prev_addr
    if offset <= 0:
        return None

    # For types with exact known sizes, check bounds directly
    if prev_exact and prev_size > 0 and offset < prev_size:
        return prev_name

    # String types with generous bounds
    if 'String' in prev_type or prev_type.startswith('s_'):
        if offset < 256:
            return prev_name

    # For types with inexact/unknown size, use gap to next global.
    # This covers: unknown struct types (size==0), and arrays of unknown
    # struct types where the element size defaulted to 4 (e.g. SFreaky[6]
    # estimated as 24 bytes but actually much larger).
    if not prev_exact and prev_type and prev_type not in BASE_TYPE_SIZES:
        # Use gap to next named global as size upper bound
        if idx + 1 < len(global_addr_map):
            next_addr = global_addr_map[idx + 1][0]
            gap = next_addr - prev_addr
            # Only use gap-based estimation if the gap is reasonable (< 16KB)
            # and the offset is well within the gap (< 75% to avoid boundary ambiguity)
            if gap < 16384 and offset < gap * 3 // 4:
                return prev_name

    return None


# =============================================================================
# Immediate constant detection
# =============================================================================

def detect_immediate_references(pseudocode_src_dir, dat_globals):
    """Detect DAT_ globals that are used only as immediate values, not memory addresses.

    When Ghidra sees `MOV EDX, 0xf80000`, it may create a DAT_ label at address
    0x00f80000 even though the value is just an inline constant. This function
    detects such cases by checking if the address always appears outside of
    square brackets (i.e., never dereferenced as memory).

    Returns dict: dat_name -> {
        'all_immediate': bool,
        'references': [(func_display_name, instruction_line), ...],
        'immediate_count': int,
        'memory_count': int,
    }
    """
    results = {}
    for name in dat_globals:
        results[name] = {
            'all_immediate': True,
            'references': [],
            'immediate_count': 0,
            'memory_count': 0,
        }

    # Build address patterns for matching in operands
    # DAT_00f80000 -> addr string "00f80000", match variants like "0xf80000"
    dat_addr_hex = {}
    for name, info in dat_globals.items():
        addr = info['addr'].lower()
        dat_addr_hex[name] = addr

    asm_pattern = os.path.join(pseudocode_src_dir, '**', '*.asm')
    for asm_path in sorted(glob_mod.glob(asm_pattern, recursive=True)):
        if os.path.isdir(asm_path):
            continue

        # Extract function display name from filename
        basename = os.path.splitext(os.path.basename(asm_path))[0]
        # Strip the FUN_xxx suffix for cleaner display
        func_display = re.sub(r'_FUN_[0-9a-f]+$', '', basename)

        try:
            with open(asm_path) as f:
                lines = f.readlines()
        except IOError:
            continue

        for line in lines:
            if 'DAT_' not in line or '|' not in line:
                continue

            parts = line.split('|')
            if len(parts) < 2:
                continue

            # Find all DAT_ references in the comment portion
            comment_part = parts[1]
            dat_refs = re.findall(r'(DAT_[0-9a-fA-F]+)', comment_part)

            # Parse the instruction
            instr_m = re.match(r'\s+(\S+)\s+(.*?)\s*;\s*[0-9a-f]+', line)
            if not instr_m:
                continue

            operands = instr_m.group(2).strip()

            for dat_ref in dat_refs:
                if dat_ref not in results:
                    continue

                addr_hex = dat_addr_hex.get(dat_ref, '')
                if not addr_hex:
                    continue

                # Determine if this is an immediate constant or memory reference.
                # Build patterns to match: 0x00f80000, 0xf80000, etc.
                addr_stripped = addr_hex.lstrip('0') or '0'
                operands_lower = operands.lower()

                # Check if the DAT_ address literal appears in the operand text.
                # If it doesn't appear at all, Ghidra resolved it from a
                # register+offset expression (e.g. [EAX + 0x14d144] -> 0x032613bc).
                # That's a computed struct field access, not an immediate.
                addr_in_operand = (
                    ('0x' + addr_stripped) in operands_lower or
                    ('0x' + addr_hex) in operands_lower or
                    addr_hex in operands_lower
                )

                if not addr_in_operand:
                    # Resolved/computed address — definitely a memory reference
                    is_memory = True
                else:
                    # Address literal is in the operand — check if it's inside
                    # brackets (memory deref) or bare (immediate)
                    is_memory = False
                    bracket_contents = re.findall(r'\[([^\]]*)\]', operands_lower)
                    for content in bracket_contents:
                        if addr_stripped in content or addr_hex in content:
                            is_memory = True
                            break

                if is_memory:
                    results[dat_ref]['memory_count'] += 1
                    results[dat_ref]['all_immediate'] = False
                else:
                    results[dat_ref]['immediate_count'] += 1

                results[dat_ref]['references'].append(
                    (func_display, line.strip()))

    return results


# =============================================================================
# Main report generation
# =============================================================================

def generate_dat_report(pseudocode_src_dir, reports_dir):
    """Generate a report of unnamed DAT_ globals with type inference.

    Scans all function JSON and ASM files to collect DAT_ references,
    then infers likely types from usage patterns.
    """
    import json
    import glob

    log_info("Generating DAT_ globals analysis report...")

    # Build struct size cache from data_types.json
    build_struct_size_cache(pseudocode_src_dir)

    # Collect all globals from function JSONs
    all_globals = {}  # name -> {addr, type, funcs: []}
    dat_globals = {}  # name -> {addr, type, funcs: [], asm_uses: [], cpp_uses: []}

    json_pattern = os.path.join(pseudocode_src_dir, '**', '*.json')
    for json_path in sorted(glob.glob(json_pattern, recursive=True)):
        if os.path.isdir(json_path):
            continue
        try:
            with open(json_path) as f:
                data = json.load(f)
        except (json.JSONDecodeError, IOError):
            continue

        func_name = data.get('function', {}).get('name', '?')

        for g in data.get('globals', []):
            name = g.get('name', '')
            addr = g.get('addr', '')
            gtype = g.get('type', 'unknown')

            info = all_globals.setdefault(name, {
                'addr': addr, 'type': gtype, 'funcs': []
            })
            info['funcs'].append(func_name)

            if name.startswith('DAT_'):
                dat_info = dat_globals.setdefault(name, {
                    'addr': addr, 'type': gtype, 'funcs': [],
                    'asm_uses': [], 'cpp_uses': [], 'type_hints': []
                })
                dat_info['funcs'].append(func_name)

    log_info("Found %d unique DAT_ globals across %d total globals" % (
        len(dat_globals), len(all_globals)))

    # Filter out DAT_ globals that fall inside named globals (strings, arrays, structs)
    global_addr_map = build_global_address_map(all_globals)
    filtered_out = {}
    for name in list(dat_globals.keys()):
        try:
            dat_addr_int = int(dat_globals[name]['addr'], 16)
        except ValueError:
            continue
        containing = is_inside_named_global(dat_addr_int, all_globals, global_addr_map)
        if containing:
            filtered_out[name] = containing
            del dat_globals[name]

    log_info("Filtered out %d DAT_ globals inside named data (%d remaining)" % (
        len(filtered_out), len(dat_globals)))

    # Detect immediate constants and remove them from the main analysis
    imm_results = detect_immediate_references(pseudocode_src_dir, dat_globals)
    immediate_constants = {}
    for name, imm_info in imm_results.items():
        if name not in dat_globals:
            continue
        if imm_info['all_immediate'] and imm_info['immediate_count'] > 0:
            immediate_constants[name] = imm_info

    for name in immediate_constants:
        del dat_globals[name]

    log_info("Detected %d likely immediate constants (%d real globals remaining)" % (
        len(immediate_constants), len(dat_globals)))

    # Scan assembly files for DAT_ instruction patterns
    asm_pattern = os.path.join(pseudocode_src_dir, '**', '*.asm')
    for asm_path in sorted(glob.glob(asm_pattern, recursive=True)):
        if os.path.isdir(asm_path):
            continue
        try:
            with open(asm_path) as f:
                lines = f.readlines()
        except IOError:
            continue

        for line in lines:
            if 'DAT_' not in line or '|' not in line:
                continue

            # Extract instruction and DAT name from assembly line
            # Format: "    MNEMONIC operands    ; ADDRESS | DAT_xxx"
            parts = line.split('|')
            if len(parts) < 2:
                continue

            dat_ref = parts[1].strip().split()[0] if parts[1].strip() else ''
            if not dat_ref.startswith('DAT_'):
                continue

            m = re.match(r'\s+(\S+)\s+(.*?)\s*;\s*[0-9a-f]+', line)
            if not m:
                continue

            mnemonic = m.group(1)
            operands = m.group(2).strip()

            if dat_ref in dat_globals:
                dat_globals[dat_ref]['asm_uses'].append((mnemonic, operands))

                hint, confidence = infer_type_from_asm(mnemonic, operands, dat_ref)
                if hint:
                    dat_globals[dat_ref]['type_hints'].append((hint, confidence, 'asm: %s %s' % (mnemonic, operands[:60])))

    # Scan pseudocode files for DAT_ usage patterns
    for ext in ('*.cpp', '*.c'):
        cpp_pattern = os.path.join(pseudocode_src_dir, '**', ext)
        for cpp_path in sorted(glob.glob(cpp_pattern, recursive=True)):
            if os.path.isdir(cpp_path):
                continue
            try:
                with open(cpp_path) as f:
                    lines = f.readlines()
            except IOError:
                continue

            for line in lines:
                for m in re.finditer(r'(DAT_[0-9a-fA-F]+)', line):
                    dat_name = m.group(1)
                    if dat_name in dat_globals:
                        dat_globals[dat_name]['cpp_uses'].append(line.strip())

    # Run pseudocode inference
    for name, info in dat_globals.items():
        if info['cpp_uses']:
            hints = infer_type_from_pseudocode(info['cpp_uses'], name)
            for hint, confidence in hints:
                info['type_hints'].append((hint, confidence, 'pseudocode'))

    # Find nearby named globals for context
    for name, info in dat_globals.items():
        try:
            dat_addr_int = int(info['addr'], 16)
        except ValueError:
            continue
        nearby = find_nearby_named_globals(dat_addr_int, all_globals)
        info['nearby'] = nearby

    # Build the report
    report_lines = []
    report_lines.append("=" * 80)
    report_lines.append("DAT_ GLOBALS ANALYSIS REPORT")
    report_lines.append("=" * 80)
    report_lines.append("")
    total_found = len(dat_globals) + len(filtered_out) + len(immediate_constants)
    report_lines.append("Total DAT_ globals found: %d" % total_found)
    report_lines.append("Filtered out (inside named data): %d" % len(filtered_out))
    report_lines.append("Immediate constants (not real globals): %d" % len(immediate_constants))
    report_lines.append("Real globals remaining: %d" % len(dat_globals))
    report_lines.append("")

    # Type breakdown
    type_counts = defaultdict(int)
    for info in dat_globals.values():
        type_counts[info['type']] += 1
    report_lines.append("Current type breakdown:")
    for t, c in sorted(type_counts.items(), key=lambda x: -x[1]):
        report_lines.append("  %-30s %d" % (t, c))
    report_lines.append("")

    # Inference summary
    inferred_count = sum(1 for info in dat_globals.values() if info.get('type_hints'))
    report_lines.append("DAT_ globals with type hints: %d / %d" % (inferred_count, len(dat_globals)))
    report_lines.append("")

    # Categorize by best inference
    high_confidence = []
    medium_confidence = []
    low_confidence = []
    no_hints = []

    for name, info in sorted(dat_globals.items(), key=lambda x: x[1]['addr']):
        hints = info.get('type_hints', [])
        if not hints:
            no_hints.append((name, info))
            continue

        # Pick best hint by confidence
        best = None
        for hint, conf, source in hints:
            if conf == 'high':
                best = (hint, conf, source)
                break
            elif conf == 'medium' and (best is None or best[1] != 'medium'):
                best = (hint, conf, source)
            elif best is None:
                best = (hint, conf, source)

        if best[1] == 'high':
            high_confidence.append((name, info, best))
        elif best[1] == 'medium':
            medium_confidence.append((name, info, best))
        else:
            low_confidence.append((name, info, best))

    # High confidence section
    report_lines.append("-" * 80)
    report_lines.append("HIGH CONFIDENCE INFERENCES (%d)" % len(high_confidence))
    report_lines.append("-" * 80)
    for name, info, (hint, conf, source) in high_confidence:
        ref_count = len(set(info['funcs']))
        report_lines.append("  %-30s  addr=%-10s  current=%-14s  likely=%-14s  refs=%d" % (
            name, info['addr'], info['type'], hint, ref_count))
        # Show nearby context if useful
        nearby = info.get('nearby', [])
        if nearby:
            closest = nearby[0]
            report_lines.append("    nearby: %s (%s) at offset %+d" % (closest[0], closest[1], closest[2]))
    report_lines.append("")

    # Medium confidence section
    report_lines.append("-" * 80)
    report_lines.append("MEDIUM CONFIDENCE INFERENCES (%d)" % len(medium_confidence))
    report_lines.append("-" * 80)
    for name, info, (hint, conf, source) in medium_confidence:
        ref_count = len(set(info['funcs']))
        report_lines.append("  %-30s  addr=%-10s  current=%-14s  likely=%-14s  refs=%d" % (
            name, info['addr'], info['type'], hint, ref_count))
        nearby = info.get('nearby', [])
        if nearby:
            closest = nearby[0]
            report_lines.append("    nearby: %s (%s) at offset %+d" % (closest[0], closest[1], closest[2]))
    report_lines.append("")

    # Low confidence section
    report_lines.append("-" * 80)
    report_lines.append("LOW CONFIDENCE INFERENCES (%d)" % len(low_confidence))
    report_lines.append("-" * 80)
    for name, info, (hint, conf, source) in low_confidence:
        ref_count = len(set(info['funcs']))
        report_lines.append("  %-30s  addr=%-10s  current=%-14s  maybe=%-14s  refs=%d" % (
            name, info['addr'], info['type'], hint, ref_count))
    report_lines.append("")

    # No hints section - just list with nearby context
    report_lines.append("-" * 80)
    report_lines.append("NO TYPE HINTS (%d)" % len(no_hints))
    report_lines.append("-" * 80)
    for name, info in no_hints:
        ref_count = len(set(info['funcs']))
        nearby = info.get('nearby', [])
        nearby_str = ""
        if nearby:
            closest = nearby[0]
            nearby_str = "  nearby: %s at %+d" % (closest[0], closest[2])
        report_lines.append("  %-30s  addr=%-10s  type=%-14s  refs=%d%s" % (
            name, info['addr'], info['type'], ref_count, nearby_str))
    report_lines.append("")

    # Frequently referenced DAT_ globals (most likely to be worth naming)
    report_lines.append("-" * 80)
    report_lines.append("MOST REFERENCED DAT_ GLOBALS (top 50)")
    report_lines.append("-" * 80)
    by_refs = sorted(dat_globals.items(), key=lambda x: -len(set(x[1]['funcs'])))
    for name, info in by_refs[:50]:
        ref_count = len(set(info['funcs']))
        hints = info.get('type_hints', [])
        hint_str = ""
        if hints:
            best_hint = hints[0][0]
            hint_str = "  likely=%s" % best_hint
        nearby = info.get('nearby', [])
        nearby_str = ""
        if nearby:
            closest = nearby[0]
            nearby_str = "  nearby: %s(%+d)" % (closest[0], closest[2])
        report_lines.append("  %-30s  addr=%-10s  refs=%-4d  type=%-14s%s%s" % (
            name, info['addr'], ref_count, info['type'], hint_str, nearby_str))
    report_lines.append("")

    # Immediate constants section
    if immediate_constants:
        report_lines.append("-" * 80)
        report_lines.append("IMMEDIATE CONSTANTS - NOT REAL GLOBALS (%d)" % len(immediate_constants))
        report_lines.append("-" * 80)
        report_lines.append("These DAT_ globals are never dereferenced as memory addresses.")
        report_lines.append("They appear only as inline constant values.")
        report_lines.append("")
        imm_sorted = sorted(
            immediate_constants.items(),
            key=lambda x: -x[1]['immediate_count']
        )
        for name, imm_info in imm_sorted:
            ref_count = imm_info['immediate_count']
            addr_hex = imm_info.get('references', [('', '')])[0][1]  # just for display
            try:
                addr_int = int(name.replace('DAT_', ''), 16)
                val_str = "0x%X" % addr_int
            except ValueError:
                val_str = name
            report_lines.append("  %-30s  value=%-14s  refs=%d" % (name, val_str, ref_count))
        report_lines.append("")

    # Filtered out section (summary only)
    if filtered_out:
        report_lines.append("-" * 80)
        report_lines.append("FILTERED OUT - INSIDE NAMED DATA (%d)" % len(filtered_out))
        report_lines.append("-" * 80)
        report_lines.append("These DAT_ globals fall within the address range of a named")
        report_lines.append("string, array, or struct and are not standalone globals.")
        report_lines.append("")
        for name in sorted(filtered_out.keys()):
            report_lines.append("  %-30s  inside %s" % (name, filtered_out[name]))
        report_lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, "dat_globals_analysis.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(report_lines) + '\n')
    log_info("Wrote DAT_ globals report: %s" % report_path)

    return len(dat_globals)


# =============================================================================
# Struct/Array detection report
# =============================================================================

# Known struct signatures: (size_bytes, field_pattern, name)
# field_pattern is a list of (offset, likely_type) for key fields
KNOWN_STRUCT_SIGNATURES = [
    (12, 'CVector3i', [(0, 'int'), (4, 'int'), (8, 'int')]),
    (12, 'CVector3f', [(0, 'float'), (4, 'float'), (8, 'float')]),
    (16, 'CVector4f', [(0, 'float'), (4, 'float'), (8, 'float'), (12, 'float')]),
]


def detect_clusters(dat_addrs, max_gap=256):
    """Group DAT_ addresses into clusters where consecutive items are within max_gap bytes."""
    clusters = []
    current = []
    for item in dat_addrs:
        if current and item[0] - current[-1][0] > max_gap:
            if len(current) >= 2:
                clusters.append(current)
            current = []
        current.append(item)
    if len(current) >= 2:
        clusters.append(current)
    return clusters


def analyze_cluster_stride(cluster):
    """Analyze stride patterns in a cluster.

    Returns dict with:
      - strides: list of inter-element distances
      - uniform: bool if all strides are equal
      - stride: the uniform stride value (or None)
      - sub_patterns: detected repeating sub-patterns
    """
    addrs = [c[0] for c in cluster]
    strides = [addrs[i + 1] - addrs[i] for i in range(len(addrs) - 1)]

    result = {
        'strides': strides,
        'uniform': len(set(strides)) == 1 and len(strides) > 0,
        'stride': strides[0] if len(set(strides)) == 1 and strides else None,
    }

    # Detect repeating stride patterns (e.g., [4, 4, 80, 4, 4, 80] = struct with 3 fields)
    if not result['uniform'] and len(strides) >= 4:
        for period in range(2, min(len(strides) // 2 + 1, 8)):
            pattern = strides[:period]
            matches = True
            for i in range(period, len(strides)):
                if strides[i] != pattern[i % period]:
                    matches = False
                    break
            if matches:
                result['repeating_pattern'] = pattern
                result['repeating_period'] = period
                result['struct_size'] = sum(pattern)
                break

    return result


def classify_cluster(cluster, stride_info, type_hints, all_globals):
    """Classify what a cluster likely represents.

    Returns (classification, details) tuple.
    """
    size = len(cluster)
    addrs = [c[0] for c in cluster]
    total_span = addrs[-1] - addrs[0]

    # Collect shared functions across cluster
    all_funcs = set()
    for _, _, info in cluster:
        all_funcs.update(info['funcs'])

    # Check for uniform stride patterns
    if stride_info['uniform']:
        stride = stride_info['stride']

        # Stride 1: char array or byte array
        if stride == 1:
            return 'char_array', {
                'type': 'char[%d]' % (size + 1),  # +1 for potential null terminator
                'confidence': 'high',
                'reason': '%d consecutive bytes' % size,
            }

        # Stride 4, many elements: int/float/pointer array
        if stride == 4 and size >= 4:
            # Check type hints to distinguish int vs float
            float_count = sum(1 for _, _, info in cluster
                              for h in type_hints.get(info.get('_name', ''), [])
                              if h[0] == 'float')
            if float_count > size // 2:
                arr_type = 'float[%d]' % size
            else:
                arr_type = 'int[%d]' % size

            return 'array', {
                'type': arr_type,
                'confidence': 'high' if size >= 8 else 'medium',
                'reason': '%d elements at stride %d' % (size, stride),
            }

        # Stride 12: CVector3i/CVector3f array
        if stride == 12 and size >= 2:
            return 'struct_array', {
                'type': 'CVector3f[%d] or CVector3i[%d]' % (size, size),
                'confidence': 'medium',
                'reason': '%d elements at stride 12 (sizeof CVector3)' % size,
            }

        # Other uniform strides: generic struct array
        if stride > 4 and size >= 3:
            return 'struct_array', {
                'type': 'struct_%dbytes[%d]' % (stride, size),
                'confidence': 'medium',
                'reason': '%d elements at stride %d' % (size, stride),
            }

    # Check for repeating sub-patterns
    if 'repeating_pattern' in stride_info:
        pattern = stride_info['repeating_pattern']
        struct_size = stride_info['struct_size']
        period = stride_info['repeating_period']
        count = len(cluster) // period

        # 3 fields at stride 4 with gaps = struct with 3 int/float fields
        if period == 3 and all(s == 4 for s in pattern[:2]):
            gap = pattern[2]
            return 'struct_array', {
                'type': 'struct { int/float a,b,c; char pad[%d]; }[%d]' % (gap - 8, count),
                'confidence': 'medium',
                'reason': 'repeating pattern %s, struct_size=%d' % (pattern, struct_size),
            }

        return 'struct_array', {
            'type': 'struct_%dbytes[%d]' % (struct_size, count),
            'confidence': 'low',
            'reason': 'repeating stride pattern %s' % pattern,
        }

    # Groups of 3 consecutive (stride 4): likely CVector3i/f
    strides = stride_info['strides']
    if size >= 3:
        # Check for groups of 3x stride-4 with larger gaps
        groups_of_3 = 0
        i = 0
        while i + 1 < len(strides):
            if strides[i] == 4 and i + 1 < len(strides) and strides[i + 1] == 4:
                groups_of_3 += 1
                i += 3  # skip past the group
            else:
                i += 1
        if groups_of_3 >= 2:
            return 'vector_groups', {
                'type': 'likely contains CVector3i/f fields',
                'confidence': 'medium',
                'reason': '%d groups of 3 consecutive ints found' % groups_of_3,
            }

    # Stride 1 sub-groups: possible byte arrays within a struct
    byte_runs = 0
    for s in strides:
        if s == 1:
            byte_runs += 1
    if byte_runs > size // 2:
        return 'byte_blob', {
            'type': 'char[] or byte[]',
            'confidence': 'medium',
            'reason': '%d/%d strides are 1 byte' % (byte_runs, len(strides)),
        }

    # Generic mixed struct
    if size >= 4:
        return 'struct', {
            'type': 'struct (%d bytes span, %d fields)' % (total_span, size),
            'confidence': 'low',
            'reason': 'mixed strides, shared by %d functions' % len(all_funcs),
        }

    return 'unknown', {
        'type': 'unknown grouping',
        'confidence': 'low',
        'reason': '%d items, span=%d bytes' % (size, total_span),
    }


def generate_struct_detection_report(pseudocode_src_dir, reports_dir):
    """Generate a report detecting likely arrays and structs among DAT_ globals."""
    import json
    import glob

    log_info("Generating DAT_ struct/array detection report...")

    # Build struct size cache from data_types.json
    build_struct_size_cache(pseudocode_src_dir)

    # Collect all globals and DAT_ globals (same as dat_report)
    all_globals = {}
    dat_globals = {}

    json_pattern = os.path.join(pseudocode_src_dir, '**', '*.json')
    for json_path in sorted(glob.glob(json_pattern, recursive=True)):
        if os.path.isdir(json_path):
            continue
        try:
            with open(json_path) as f:
                data = json.load(f)
        except (json.JSONDecodeError, IOError):
            continue

        func_name = data.get('function', {}).get('name', '?')
        for g in data.get('globals', []):
            name = g.get('name', '')
            addr = g.get('addr', '')
            gtype = g.get('type', 'unknown')

            all_globals.setdefault(name, {'addr': addr, 'type': gtype, 'funcs': set()})
            all_globals[name]['funcs'].add(func_name)

            if name.startswith('DAT_'):
                dat_globals.setdefault(name, {'addr': addr, 'type': gtype, 'funcs': set()})
                dat_globals[name]['funcs'].add(func_name)

    # Build sorted address map for improved containment checks
    global_addr_map = build_global_address_map(all_globals)

    # Filter out DAT_ inside named data (using improved gap-based detection)
    filtered_out = {}
    for name in list(dat_globals.keys()):
        try:
            dat_addr_int = int(dat_globals[name]['addr'], 16)
        except ValueError:
            del dat_globals[name]
            continue
        containing = is_inside_named_global(dat_addr_int, all_globals, global_addr_map)
        if containing:
            filtered_out[name] = containing
            del dat_globals[name]

    log_info("Filtered out %d DAT_ globals inside named data (%d remaining)" % (
        len(filtered_out), len(dat_globals)))

    # Detect immediate constants (DAT_ globals used only as inline values)
    imm_results = detect_immediate_references(pseudocode_src_dir, dat_globals)
    immediate_constants = {}
    for name, imm_info in imm_results.items():
        if name not in dat_globals:
            continue
        if imm_info['all_immediate'] and imm_info['immediate_count'] > 0:
            immediate_constants[name] = imm_info

    log_info("Detected %d likely immediate constants" % len(immediate_constants))

    # Remove immediate constants from the main analysis pool
    real_dat_globals = {k: v for k, v in dat_globals.items() if k not in immediate_constants}

    # Collect assembly type hints (only for real globals)
    type_hints = defaultdict(list)
    asm_pattern = os.path.join(pseudocode_src_dir, '**', '*.asm')
    for asm_path in sorted(glob.glob(asm_pattern, recursive=True)):
        if os.path.isdir(asm_path):
            continue
        try:
            with open(asm_path) as f:
                asm_lines = f.readlines()
        except IOError:
            continue
        for line in asm_lines:
            if 'DAT_' not in line or '|' not in line:
                continue
            parts = line.split('|')
            if len(parts) < 2:
                continue
            dat_ref = parts[1].strip().split()[0] if parts[1].strip() else ''
            if not dat_ref.startswith('DAT_') or dat_ref not in real_dat_globals:
                continue
            m = re.match(r'\s+(\S+)\s+(.*?)\s*;\s*[0-9a-f]+', line)
            if m:
                hint, conf = infer_type_from_asm(m.group(1), m.group(2).strip(), dat_ref)
                if hint:
                    type_hints[dat_ref].append((hint, conf))

    # Sort by address and detect clusters (excluding immediates)
    dat_addrs = []
    for name, info in real_dat_globals.items():
        try:
            addr_int = int(info['addr'], 16)
            info['_name'] = name
            dat_addrs.append((addr_int, name, info))
        except ValueError:
            pass
    dat_addrs.sort()

    clusters = detect_clusters(dat_addrs)
    log_info("Found %d clusters of DAT_ globals" % len(clusters))

    # Classify each cluster
    classified = []
    for cluster in clusters:
        stride_info = analyze_cluster_stride(cluster)
        classification, details = classify_cluster(cluster, stride_info, type_hints, all_globals)
        classified.append((cluster, stride_info, classification, details))

    # Sort by confidence then size
    conf_order = {'high': 0, 'medium': 1, 'low': 2}
    classified.sort(key=lambda x: (conf_order.get(x[3].get('confidence', 'low'), 3), -len(x[0])))

    # Build report
    lines = []
    lines.append("=" * 80)
    lines.append("DAT_ STRUCT/ARRAY DETECTION REPORT")
    lines.append("=" * 80)
    lines.append("")
    lines.append("Total DAT_ globals found: %d" % len(dat_globals))
    lines.append("Filtered out (inside named data): %d" % len(filtered_out))
    lines.append("Immediate constants (not real globals): %d" % len(immediate_constants))
    lines.append("Real globals remaining: %d" % len(real_dat_globals))
    lines.append("Clusters detected: %d" % len(clusters))
    lines.append("DAT_ globals in clusters: %d" % sum(len(c) for c, _, _, _ in classified))
    lines.append("")

    # Summary by classification
    class_counts = defaultdict(int)
    for _, _, classification, _ in classified:
        class_counts[classification] += 1
    lines.append("Classification summary:")
    for cls, count in sorted(class_counts.items(), key=lambda x: -x[1]):
        lines.append("  %-20s %d clusters" % (cls, count))
    lines.append("")

    # =========================================================================
    # LIKELY IMMEDIATE CONSTANTS section
    # =========================================================================
    if immediate_constants:
        lines.append("-" * 80)
        lines.append("LIKELY IMMEDIATE CONSTANTS (%d)" % len(immediate_constants))
        lines.append("-" * 80)
        lines.append("These DAT_ globals are never dereferenced as memory addresses.")
        lines.append("They appear only as inline constant values (e.g. MOV EDX,0xf80000).")
        lines.append("Consider removing the Ghidra label and leaving the raw number.")
        lines.append("")

        # Sort by reference count (most referenced first)
        imm_sorted = sorted(
            immediate_constants.items(),
            key=lambda x: -x[1]['immediate_count']
        )

        for name, imm_info in imm_sorted:
            info = dat_globals[name]
            addr_hex = info['addr']
            ref_count = imm_info['immediate_count']

            # Show the constant value in useful formats
            try:
                addr_int = int(addr_hex, 16)
                val_str = "0x%X" % addr_int
                # Add decimal if it might be meaningful
                if addr_int < 0x1000000:
                    val_str += " (%d)" % addr_int
            except ValueError:
                val_str = addr_hex

            lines.append("  %s  value=%s  refs=%d" % (name, val_str, ref_count))

            # Show referencing functions (deduplicated)
            seen_funcs = {}
            for func_display, instr_line in imm_info['references']:
                if func_display not in seen_funcs:
                    seen_funcs[func_display] = instr_line
            for func_display, instr_line in sorted(seen_funcs.items()):
                # Truncate long instruction lines
                instr_short = instr_line[:100] + '...' if len(instr_line) > 100 else instr_line
                lines.append("    %s" % func_display)
                lines.append("      %s" % instr_short)
            lines.append("")

    # =========================================================================
    # Detail sections by confidence (real globals only)
    # =========================================================================
    for conf_level in ['high', 'medium', 'low']:
        matching = [(c, s, cls, d) for c, s, cls, d in classified if d.get('confidence') == conf_level]
        if not matching:
            continue

        lines.append("-" * 80)
        lines.append("%s CONFIDENCE (%d clusters)" % (conf_level.upper(), len(matching)))
        lines.append("-" * 80)

        for cluster, stride_info, classification, details in matching:
            addrs = [c[0] for c in cluster]
            all_funcs = set()
            for _, _, info in cluster:
                all_funcs.update(info['funcs'])

            start_addr = addrs[0]
            end_addr = addrs[-1]
            span = end_addr - start_addr

            # Find nearest named global for context
            nearby = find_nearby_named_globals(start_addr, all_globals, range_bytes=1024)
            nearby_str = ""
            if nearby:
                nearest = nearby[0]
                nearby_str = "  near: %s (%s) at %+d" % (nearest[0], nearest[1], nearest[2])

            lines.append("")
            lines.append("  0x%08x - 0x%08x  (%d items, %d bytes span)" % (
                start_addr, end_addr, len(cluster), span))
            lines.append("    Classification: %s" % classification)
            lines.append("    Likely type: %s" % details['type'])
            lines.append("    Reason: %s" % details['reason'])
            lines.append("    Referenced by: %d functions" % len(all_funcs))
            if nearby_str:
                lines.append("   %s" % nearby_str)

            # Show first few elements
            for addr_int, name, info in cluster[:6]:
                hint_str = ""
                if name in type_hints:
                    best = type_hints[name][0]
                    hint_str = " [%s]" % best[0]
                lines.append("      0x%08x  %s  %s%s" % (addr_int, name, info['type'], hint_str))
            if len(cluster) > 6:
                lines.append("      ... +%d more" % (len(cluster) - 6))

        lines.append("")

    # Isolated DAT_ globals (not in any cluster, not immediates)
    clustered_names = set()
    for cluster, _, _, _ in classified:
        for _, name, _ in cluster:
            clustered_names.add(name)

    isolated = [(name, info) for name, info in real_dat_globals.items()
                if name not in clustered_names]
    isolated.sort(key=lambda x: -len(x[1]['funcs']))

    lines.append("-" * 80)
    lines.append("ISOLATED DAT_ GLOBALS (%d - not part of any cluster)" % len(isolated))
    lines.append("-" * 80)
    for name, info in isolated[:50]:
        ref_count = len(info['funcs'])
        hint_str = ""
        if name in type_hints:
            hint_str = " [likely %s]" % type_hints[name][0][0]
        nearby = find_nearby_named_globals(int(info['addr'], 16), all_globals)
        nearby_str = ""
        if nearby:
            nearest = nearby[0]
            nearby_str = "  near: %s(%+d)" % (nearest[0], nearest[2])
        lines.append("  %-30s  addr=%-10s  type=%-14s  refs=%d%s%s" % (
            name, info['addr'], info['type'], ref_count, hint_str, nearby_str))
    if len(isolated) > 50:
        lines.append("  ... +%d more" % (len(isolated) - 50))
    lines.append("")

    # Filtered out section (summary)
    if filtered_out:
        lines.append("-" * 80)
        lines.append("FILTERED OUT - INSIDE NAMED DATA (%d)" % len(filtered_out))
        lines.append("-" * 80)
        for name in sorted(filtered_out.keys()):
            lines.append("  %-30s  inside %s" % (name, filtered_out[name]))
        lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, "dat_struct_detection.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    log_info("Wrote struct/array detection report: %s" % report_path)

    return len(classified)


def generate_globals_gap_report(pseudocode_src_dir, reports_dir):
    """Generate a report documenting gaps between consecutive global variables.

    Gaps are regions of the address space between the end of one global and the
    start of the next that are not covered by any known variable.  These may
    indicate unnamed data, padding, or Ghidra analysis misses.
    """
    import json
    import glob

    log_info("Generating globals gap report...")

    # Build struct size cache so estimate_global_size can resolve struct types
    build_struct_size_cache(pseudocode_src_dir)

    # Collect all globals from function JSONs (same pattern as other reports)
    all_globals = {}

    json_pattern = os.path.join(pseudocode_src_dir, '**', '*.json')
    for json_path in sorted(glob.glob(json_pattern, recursive=True)):
        if os.path.isdir(json_path):
            continue
        try:
            with open(json_path) as f:
                data = json.load(f)
        except (json.JSONDecodeError, IOError):
            continue

        for g in data.get('globals', []):
            name = g.get('name', '')
            addr = g.get('addr', '')
            gtype = g.get('type', 'unknown')

            existing = all_globals.get(name)
            if existing is None:
                all_globals[name] = {'addr': addr, 'type': gtype}

    log_info("Collected %d unique globals for gap analysis" % len(all_globals))

    # Build sorted address map (filters to top-level named globals, skips DAT_)
    addr_map = build_global_address_map(all_globals)

    if len(addr_map) < 2:
        log_info("Not enough globals to compute gaps")
        return

    # Also include DAT_ globals so they can fill gaps
    dat_entries = []
    for name, info in all_globals.items():
        if not name.startswith('DAT_'):
            continue
        try:
            addr = int(info['addr'], 16)
        except (ValueError, KeyError):
            continue
        gtype = info.get('type', '')
        size, is_exact = estimate_global_size(gtype)
        dat_entries.append((addr, name, gtype, size, is_exact))

    # Merge named globals and DAT_ globals into one sorted list
    all_entries = sorted(addr_map + dat_entries)

    # Deduplicate by address (keep first occurrence = named over DAT_)
    seen_addrs = set()
    deduped = []
    for entry in all_entries:
        if entry[0] not in seen_addrs:
            seen_addrs.add(entry[0])
            deduped.append(entry)
    all_entries = deduped

    # Compute gaps between consecutive globals
    gaps = []
    for i in range(len(all_entries) - 1):
        addr_a, name_a, type_a, size_a, exact_a = all_entries[i]
        addr_b, name_b, type_b, size_b, exact_b = all_entries[i + 1]

        if size_a <= 0:
            # Can't determine end of this global, use minimum 1
            end_a = addr_a + 1
            exact_end = False
        else:
            end_a = addr_a + size_a
            exact_end = exact_a

        gap_size = addr_b - end_a
        if gap_size < 0:
            # Overlap — the next global starts inside this one
            gap_size = 0

        gaps.append({
            'before_name': name_a,
            'before_addr': addr_a,
            'before_type': type_a,
            'before_size': size_a,
            'before_exact': exact_a,
            'after_name': name_b,
            'after_addr': addr_b,
            'after_type': type_b,
            'gap_start': end_a,
            'gap_size': gap_size,
            'exact_end': exact_end,
        })

    # Separate into categories
    nonzero_gaps = [g for g in gaps if g['gap_size'] > 0]
    overlaps = [g for g in gaps if g['gap_size'] == 0 and
                g['before_addr'] + max(g['before_size'], 1) > g['after_addr']]
    exact_gaps = [g for g in nonzero_gaps if g['exact_end']]
    estimated_gaps = [g for g in nonzero_gaps if not g['exact_end']]

    # Sort by gap size descending
    nonzero_gaps_sorted = sorted(nonzero_gaps, key=lambda g: g['gap_size'], reverse=True)
    exact_gaps_sorted = sorted(exact_gaps, key=lambda g: g['gap_size'], reverse=True)

    total_gap_bytes = sum(g['gap_size'] for g in nonzero_gaps)
    exact_gap_bytes = sum(g['gap_size'] for g in exact_gaps)

    # Build report
    lines = []
    lines.append("=" * 80)
    lines.append("GLOBALS GAP ANALYSIS REPORT")
    lines.append("=" * 80)
    lines.append("")
    lines.append("Total globals analyzed:      %d" % len(all_entries))
    lines.append("  Named globals:             %d" % len(addr_map))
    lines.append("  DAT_ globals:              %d" % len(dat_entries))
    lines.append("Gaps found:                  %d" % len(nonzero_gaps))
    lines.append("  With exact size bounds:    %d" % len(exact_gaps))
    lines.append("  With estimated bounds:     %d" % len(estimated_gaps))
    lines.append("Total gap bytes:             %s" % '{:,}'.format(total_gap_bytes))
    lines.append("  Exact gap bytes:           %s" % '{:,}'.format(exact_gap_bytes))
    lines.append("Overlaps (size <= 0):        %d" % len(overlaps))
    lines.append("")

    # Size distribution
    size_buckets = [
        (1, 4, "1-4 bytes (likely padding/alignment)"),
        (5, 16, "5-16 bytes (small vars)"),
        (17, 64, "17-64 bytes (structs/small arrays)"),
        (65, 256, "65-256 bytes (medium data)"),
        (257, 1024, "257-1024 bytes (large structs/arrays)"),
        (1025, 4096, "1-4 KB"),
        (4097, 65536, "4-64 KB"),
        (65537, None, "64+ KB"),
    ]

    lines.append("-" * 80)
    lines.append("GAP SIZE DISTRIBUTION")
    lines.append("-" * 80)
    for low, high, label in size_buckets:
        if high is None:
            count = sum(1 for g in nonzero_gaps if g['gap_size'] >= low)
        else:
            count = sum(1 for g in nonzero_gaps if low <= g['gap_size'] <= high)
        if count > 0:
            lines.append("  %-45s %d" % (label, count))
    lines.append("")

    # Largest gaps (top 50)
    lines.append("-" * 80)
    lines.append("LARGEST GAPS (top 50)")
    lines.append("-" * 80)
    for g in nonzero_gaps_sorted[:50]:
        exact_marker = "" if g['exact_end'] else " ~"
        lines.append("  %s bytes%s  at 0x%08x" % (
            '{:>10,}'.format(g['gap_size']), exact_marker, g['gap_start']))
        lines.append("    after: %-40s %-20s at 0x%08x  size=%s" % (
            g['before_name'][:40], g['before_type'][:20], g['before_addr'],
            '{:,}'.format(g['before_size']) if g['before_size'] > 0 else '?'))
        lines.append("    before: %-40s %-20s at 0x%08x" % (
            g['after_name'][:40], g['after_type'][:20], g['after_addr']))
    lines.append("")

    # All exact gaps (these are the most reliable)
    if exact_gaps_sorted:
        lines.append("-" * 80)
        lines.append("ALL EXACT GAPS (%d) - size bounds are known precisely" % len(exact_gaps))
        lines.append("-" * 80)
        for g in exact_gaps_sorted:
            lines.append("  %s bytes  at 0x%08x  between %-30s and %s" % (
                '{:>10,}'.format(g['gap_size']), g['gap_start'],
                g['before_name'][:30], g['after_name'][:30]))
        lines.append("")

    # Overlaps (potential issues)
    if overlaps:
        lines.append("-" * 80)
        lines.append("OVERLAPS (%d) - next global starts inside previous" % len(overlaps))
        lines.append("-" * 80)
        for g in overlaps:
            overlap_bytes = (g['before_addr'] + max(g['before_size'], 1)) - g['after_addr']
            exact_marker = "" if g['before_exact'] else " ~"
            lines.append("  %d bytes overlap%s" % (overlap_bytes, exact_marker))
            lines.append("    %-40s %-20s at 0x%08x  size=%s" % (
                g['before_name'][:40], g['before_type'][:20], g['before_addr'],
                '{:,}'.format(g['before_size']) if g['before_size'] > 0 else '?'))
            lines.append("    %-40s %-20s at 0x%08x" % (
                g['after_name'][:40], g['after_type'][:20], g['after_addr']))
        lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, "globals_gap_analysis.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    log_info("Wrote globals gap report: %s (%d gaps, %s bytes total)" % (
        report_path, len(nonzero_gaps), '{:,}'.format(total_gap_bytes)))
