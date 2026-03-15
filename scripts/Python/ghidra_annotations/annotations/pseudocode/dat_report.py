# DAT_ global analysis report
# Identifies unnamed DAT_ globals and infers likely types from assembly/pseudocode usage

import os
import re
from collections import defaultdict
from ghidra_annotations.util.log import log_info


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


def is_inside_named_global(dat_addr_int, all_globals):
    """Check if a DAT_ address falls within a named (non-DAT_) global's data range.

    Returns the containing global's name if found, None otherwise.
    For example, DAT_006169b0 at address 006169b0 is inside the string
    "???" at 006169af (s_anon_006169af), so it's not a real global.
    """
    # Types and their approximate sizes
    TYPE_SIZES = {
        'TerminatedCString': 256,  # conservative max; will check actual distance
        'char': 1, 'byte': 1, 'undefined1': 1,
        'short': 2, 'ushort': 2, 'undefined2': 2,
        'int': 4, 'uint': 4, 'undefined4': 4, 'float': 4, 'dword': 4,
        'longlong': 8, 'ulonglong': 8, 'double': 8, 'undefined8': 8,
        'pointer': 4, 'void*': 4,
    }

    for name, info in all_globals.items():
        if name.startswith('DAT_'):
            continue
        try:
            other_addr = int(info['addr'], 16)
        except (ValueError, KeyError):
            continue

        offset = dat_addr_int - other_addr
        if offset <= 0:
            continue

        gtype = info.get('type', '')

        # String types: DAT_ within a few hundred bytes after a string start
        # is likely inside the string data
        if 'String' in gtype or gtype.startswith('s_') or gtype.startswith('char['):
            # For strings, use a reasonable max. Most strings are < 256 bytes.
            if offset < 256:
                return name

        # Array types: check if offset falls within array bounds
        # e.g. "int[100]" has size 400
        arr_m = re.match(r'.*\[(\d+)\]', gtype)
        if arr_m:
            # Rough estimate: array element count * 4 (common element size)
            arr_count = int(arr_m.group(1))
            # Get base type size
            base_type = re.sub(r'\[\d+\]', '', gtype).strip()
            elem_size = TYPE_SIZES.get(base_type, 4)
            total_size = arr_count * elem_size
            if offset < total_size:
                return name

        # Struct types: small offsets (< 4) into a named global are likely
        # just accessing fields of that global, not separate globals
        if offset < 4 and gtype not in TYPE_SIZES:
            # Likely a struct field
            return name

    return None


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
    filtered_out = {}
    for name in list(dat_globals.keys()):
        try:
            dat_addr_int = int(dat_globals[name]['addr'], 16)
        except ValueError:
            continue
        containing = is_inside_named_global(dat_addr_int, all_globals)
        if containing:
            filtered_out[name] = containing
            del dat_globals[name]

    log_info("Filtered out %d DAT_ globals inside named data (%d remaining)" % (
        len(filtered_out), len(dat_globals)))

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
    report_lines.append("Total DAT_ globals: %d" % len(dat_globals))
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

    # Filter out DAT_ inside named data
    for name in list(dat_globals.keys()):
        try:
            dat_addr_int = int(dat_globals[name]['addr'], 16)
        except ValueError:
            del dat_globals[name]
            continue
        containing = is_inside_named_global(dat_addr_int, all_globals)
        if containing:
            del dat_globals[name]

    # Collect assembly type hints
    type_hints = defaultdict(list)
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
            parts = line.split('|')
            if len(parts) < 2:
                continue
            dat_ref = parts[1].strip().split()[0] if parts[1].strip() else ''
            if not dat_ref.startswith('DAT_') or dat_ref not in dat_globals:
                continue
            m = re.match(r'\s+(\S+)\s+(.*?)\s*;\s*[0-9a-f]+', line)
            if m:
                hint, conf = infer_type_from_asm(m.group(1), m.group(2).strip(), dat_ref)
                if hint:
                    type_hints[dat_ref].append((hint, conf))

    # Sort by address and detect clusters
    dat_addrs = []
    for name, info in dat_globals.items():
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
    lines.append("Total DAT_ globals (after filtering): %d" % len(dat_globals))
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

    # Detail sections by confidence
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

    # Isolated DAT_ globals (not in any cluster)
    clustered_names = set()
    for cluster, _, _, _ in classified:
        for _, name, _ in cluster:
            clustered_names.add(name)

    isolated = [(name, info) for name, info in dat_globals.items() if name not in clustered_names]
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

    # Write report
    report_path = os.path.join(reports_dir, "dat_struct_detection.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    log_info("Wrote struct/array detection report: %s" % report_path)

    return len(classified)
