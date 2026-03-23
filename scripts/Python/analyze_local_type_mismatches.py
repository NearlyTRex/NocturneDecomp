#!/usr/bin/env python3
"""
analyze_local_type_mismatches.py

Scans decompiled .cpp/.c files for local variables declared as primitive types
(byte[N], int, uint, double, longlong, etc.) that are accessed with Ghidra's
._OFFSET_SIZE_ subfield notation, suggesting they should be typed as structs.

Detects patterns like:
  byte auStack_30[12];
  ...
  auStack_30._0_4_ = something;  // looks like CVector3f.x
  auStack_30._4_4_ = something;  // looks like CVector3f.y
  auStack_30._8_4_ = something;  // looks like CVector3f.z

And suggests the correct struct type based on size and access patterns.

Usage:
    python3 analyze_local_type_mismatches.py [pseudocode_src_dir] [output_path]
"""

import glob
import os
import re
import sys
from collections import defaultdict


# Known struct types by size and access pattern
KNOWN_TYPES = {
    # (size_bytes, tuple_of_(offset,field_size)): (type_name, confidence)
    (8, ((0, 4), (4, 4))): ('CVector2f', 'high'),
    (12, ((0, 4), (4, 4), (8, 4))): ('CVector3f', 'high'),
    (16, ((0, 4), (4, 4), (8, 4), (12, 4))): ('CQuaternion4f', 'medium'),
    (24, ((0, 4), (4, 4), (8, 4), (12, 4), (16, 4), (20, 4))): ('CBoundingBox3D_min_max', 'low'),
    (8, ((0, 2), (2, 2), (4, 2), (6, 2))): ('CVector4s', 'low'),
}

# Regex patterns
# Match declarations like: byte auStack_30[12]; or byte local_30[16];
RE_BYTE_ARRAY_DECL = re.compile(
    r'^\s+(?:byte|uchar)\s+((?:au|a|local_|u)Stack_[0-9a-fA-F]+|local_[0-9a-fA-F]+)\s*\[(\d+)\]\s*;')

# Match declarations like: int iVar1; uint uVar2; double dVar3; longlong lVar4;
RE_PRIMITIVE_DECL = re.compile(
    r'^\s+(int|uint|double|float|longlong|ulonglong|short|ushort)\s+'
    r'((?:i|u|d|f|l|s)(?:Var|Stack_)[0-9a-fA-F]+|local_[0-9a-fA-F]+)\s*;')

# Match subfield access: varname._OFFSET_SIZE_
RE_SUBFIELD_ACCESS = re.compile(
    r'\b([a-zA-Z_][a-zA-Z0-9_]*)\._(\d+)_(\d+)_')

# Match casts that hint at the correct type: (CVector3f *)&varname or (CVector3f *)varname
RE_CAST_HINT = re.compile(
    r'\(([A-Z][A-Za-z0-9_]*\s*\*)\s*\)\s*&?\s*([a-zA-Z_][a-zA-Z0-9_]*)')

# Type sizes for primitives
PRIMITIVE_SIZES = {
    'int': 4, 'uint': 4, 'float': 4,
    'double': 8, 'longlong': 8, 'ulonglong': 8,
    'short': 2, 'ushort': 2,
}


def analyze_file(filepath):
    """Analyze a single file for local type mismatches."""
    with open(filepath, 'r') as f:
        lines = f.readlines()

    content = ''.join(lines)

    # Collect all variable declarations
    byte_arrays = {}  # varname -> size
    primitives = {}   # varname -> (type, size)

    for line in lines:
        m = RE_BYTE_ARRAY_DECL.match(line)
        if m:
            byte_arrays[m.group(1)] = int(m.group(2))
            continue

        m = RE_PRIMITIVE_DECL.match(line)
        if m:
            ptype = m.group(1)
            varname = m.group(2)
            if ptype in PRIMITIVE_SIZES:
                primitives[varname] = (ptype, PRIMITIVE_SIZES[ptype])

    # Find all subfield accesses
    subfield_accesses = defaultdict(set)  # varname -> set of (offset, field_size)
    for m in RE_SUBFIELD_ACCESS.finditer(content):
        varname = m.group(1)
        offset = int(m.group(2))
        field_size = int(m.group(3))
        subfield_accesses[varname].add((offset, field_size))

    # Find cast hints
    cast_hints = defaultdict(set)  # varname -> set of cast target types
    for m in RE_CAST_HINT.finditer(content):
        cast_type = m.group(1).strip()
        varname = m.group(2)
        cast_hints[varname].add(cast_type)

    results = []

    # Check byte arrays with subfield access
    for varname, array_size in byte_arrays.items():
        if varname not in subfield_accesses:
            continue

        accesses = sorted(subfield_accesses[varname])
        access_key = (array_size, tuple(accesses))

        suggested_type = None
        confidence = 'low'

        # Check known type patterns
        if access_key in KNOWN_TYPES:
            suggested_type, confidence = KNOWN_TYPES[access_key]

        # Check cast hints
        hints = cast_hints.get(varname, set())

        # Heuristic: 12 bytes with 3x 4-byte accesses at 0,4,8 = CVector3f
        if array_size == 12 and all(s == 4 for _, s in accesses):
            offsets = [o for o, _ in accesses]
            if set(offsets) <= {0, 4, 8}:
                suggested_type = 'CVector3f'
                confidence = 'high'

        # 16 bytes with 4x 4-byte accesses = CQuaternion4f or CVector4f
        if array_size == 16 and all(s == 4 for _, s in accesses):
            offsets = [o for o, _ in accesses]
            if set(offsets) <= {0, 4, 8, 12}:
                suggested_type = 'CQuaternion4f'
                confidence = 'medium'
                # Check cast hints for better identification
                for h in hints:
                    if 'Vector' in h:
                        suggested_type = h.rstrip(' *')
                        confidence = 'high'
                    elif 'Quaternion' in h:
                        suggested_type = h.rstrip(' *')
                        confidence = 'high'

        # 8 bytes with 2x 4-byte accesses = CVector2f or pair of ints
        if array_size == 8 and accesses == [(0, 4), (4, 4)]:
            suggested_type = 'CVector2f'
            confidence = 'medium'

        # Use cast hints if no pattern match
        if suggested_type is None and hints:
            for h in hints:
                suggested_type = h.rstrip(' *')
                confidence = 'medium'
                break

        if suggested_type is None:
            # Generic suggestion based on field sizes
            if all(s == 4 for _, s in accesses):
                n_fields = len(accesses)
                suggested_type = 'struct_%d_floats_or_ints' % n_fields
                confidence = 'low'
            else:
                suggested_type = 'unknown_struct_%d_bytes' % array_size
                confidence = 'low'

        results.append({
            'varname': varname,
            'current_type': 'byte[%d]' % array_size,
            'current_size': array_size,
            'suggested_type': suggested_type,
            'confidence': confidence,
            'accesses': accesses,
            'cast_hints': hints,
        })

    # Check primitives with subfield access
    for varname, (ptype, psize) in primitives.items():
        if varname not in subfield_accesses:
            continue

        accesses = sorted(subfield_accesses[varname])
        hints = cast_hints.get(varname, set())

        suggested_type = None
        confidence = 'low'

        # double with ._0_4_ access = zero-check pattern (decompiler limitation)
        if ptype == 'double' and accesses == [(0, 4)]:
            suggested_type = None  # skip, this is the zero-check pattern
            continue

        # longlong with ._0_4_ and ._4_4_ = two ints packed
        if ptype in ('longlong', 'ulonglong') and accesses == [(0, 4), (4, 4)]:
            suggested_type = 'CVector2i_or_pair'
            confidence = 'low'

        # int with ._0_2_ = short subfield access
        if ptype in ('int', 'uint') and all(s == 2 for _, s in accesses):
            suggested_type = 'short_pair'
            confidence = 'low'

        if suggested_type is None:
            continue

        results.append({
            'varname': varname,
            'current_type': ptype,
            'current_size': psize,
            'suggested_type': suggested_type,
            'confidence': confidence,
            'accesses': accesses,
            'cast_hints': hints,
        })

    return results


def main():
    src_dir = sys.argv[1] if len(sys.argv) > 1 else 'annotations/nocedit.exe/pseudocode/src'
    output_path = sys.argv[2] if len(sys.argv) > 2 else 'annotations/nocedit.exe/reports'

    pattern = os.path.join(src_dir, '**', '*.cpp')
    all_files = sorted(glob.glob(pattern, recursive=True))
    pattern_c = os.path.join(src_dir, '**', '*.c')
    all_files.extend(sorted(glob.glob(pattern_c, recursive=True)))

    # Skip .keep, .mmx, .byval files and directories
    all_files = [f for f in all_files
                 if os.path.isfile(f) and
                 not any(f.endswith(ext) for ext in
                           ('.keep.cpp', '.keep.c', '.mmx.cpp', '.mmx.c',
                            '.byval.cpp', '.byval.c'))]

    all_results = []
    by_suggested_type = defaultdict(list)

    for filepath in all_files:
        results = analyze_file(filepath)
        if results:
            func_name = os.path.basename(filepath).replace('.cpp', '').replace('.c', '')
            for r in results:
                r['function'] = func_name
                r['filepath'] = filepath
                all_results.append(r)
                by_suggested_type[r['suggested_type']].append(r)

    # Generate report
    lines = []
    lines.append('=' * 100)
    lines.append('LOCAL VARIABLE TYPE MISMATCH REPORT')
    lines.append('=' * 100)
    lines.append('')
    lines.append('Variables declared as primitives/byte arrays but accessed with struct member notation.')
    lines.append('These can be fixed by retyping the local variable in Ghidra.')
    lines.append('')

    # Summary
    high = [r for r in all_results if r['confidence'] == 'high']
    medium = [r for r in all_results if r['confidence'] == 'medium']
    low = [r for r in all_results if r['confidence'] == 'low']

    lines.append('Total mismatches found: %d' % len(all_results))
    lines.append('  High confidence:   %d' % len(high))
    lines.append('  Medium confidence: %d' % len(medium))
    lines.append('  Low confidence:    %d' % len(low))
    lines.append('')

    # Group by suggested type
    lines.append('-' * 100)
    lines.append('BY SUGGESTED TYPE')
    lines.append('-' * 100)
    for stype in sorted(by_suggested_type.keys()):
        entries = by_suggested_type[stype]
        lines.append('')
        lines.append('  %s (%d occurrences)' % (stype, len(entries)))
        for r in sorted(entries, key=lambda x: x['confidence'], reverse=False):
            cast_str = ''
            if r['cast_hints']:
                cast_str = '  cast hints: %s' % ', '.join(r['cast_hints'])
            lines.append('    [%s] %-50s  %s -> %s  accesses: %s%s' % (
                r['confidence'],
                r['function'][:50],
                r['current_type'],
                r['suggested_type'],
                r['accesses'],
                cast_str,
            ))

    # High confidence fixes (actionable)
    if high:
        lines.append('')
        lines.append('-' * 100)
        lines.append('HIGH CONFIDENCE FIXES (recommended for Ghidra)')
        lines.append('-' * 100)
        for r in sorted(high, key=lambda x: x['function']):
            lines.append('')
            lines.append('  Function: %s' % r['function'])
            lines.append('  Variable: %s' % r['varname'])
            lines.append('  Current:  %s' % r['current_type'])
            lines.append('  Fix to:   %s' % r['suggested_type'])
            lines.append('  Accesses: %s' % r['accesses'])
            if r['cast_hints']:
                lines.append('  Casts:    %s' % ', '.join(r['cast_hints']))

    report_path = os.path.join(output_path, 'local_type_mismatches.txt')
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')

    print('Wrote report to %s' % report_path)
    print('Total: %d mismatches (%d high, %d medium, %d low confidence)' % (
        len(all_results), len(high), len(medium), len(low)))


if __name__ == '__main__':
    main()
