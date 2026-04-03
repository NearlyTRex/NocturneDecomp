#!/usr/bin/env python3
"""
report_smrgl_primitive_mismatches.py

Scans .asm files for stack-local variables typed as SMRGLHeaderPrimitive (24 bytes)
that should be a larger primitive type based on the gap between the variable's end
and the next stack variable.

SMRGLHeaderPrimitive is 24 bytes (0x18). When it's followed by vertex data on the
stack, the correct type is one of the full primitive structs:

  Gap  | Total | Recommended Type
  -----+-------+----------------------------------
  12   | 36    | SMRGLPrimitiveTriangleIndex (header + int[3])
  16   | 40    | SMRGLPrimitiveQuadIndex (header + int[4])
  36   | 60    | SMRGLPrimitiveTriangle (header + SMRGLVertex[3])
  48   | 72    | SMRGLPrimitiveQuad (header + SMRGLVertex[4])

Usage:
    python3 report_smrgl_primitive_mismatches.py [pseudocode_src_dir]
"""

import glob
import os
import re
import sys


SMRGL_HEADER_PRIMITIVE_SIZE = 0x18  # 24 bytes

# Map gap size -> (total size, recommended type name, description)
GAP_TO_TYPE = {
    0x0C: (0x24, 'SMRGLPrimitiveTriangleIndex', 'header + int vertices[3]'),
    0x10: (0x28, 'SMRGLPrimitiveQuadIndex', 'header + int vertices[4]'),
    0x24: (0x3C, 'SMRGLPrimitiveTriangle', 'header + SMRGLVertex vertices[3]'),
    0x30: (0x48, 'SMRGLPrimitiveQuad', 'header + SMRGLVertex vertices[4]'),
}

# Regex to parse stack variable declarations from .asm headers
# e.g.: ; SMRGLHeaderPrimitive Stack[-0x144]:24  SStack_144
RE_STACK_VAR = re.compile(
    r';\s+(\S+)\s+Stack\[(-?0x[0-9a-fA-F]+)\]:(\d+)\s+(\S+)'
)


def parse_stack_vars(asm_path):
    """Parse the local variable declarations from an .asm file header.

    Returns a list of (type_name, offset, size, var_name) sorted by offset descending
    (most negative first).
    """
    variables = []
    in_header = False

    with open(asm_path, 'r') as f:
        for line in f:
            # Start of local variable section
            if '; Local Variables:' in line:
                in_header = True
                continue

            # End of header (blank line or non-comment line)
            if in_header:
                if not line.startswith(';'):
                    break
                # Skip XREF, Referenced Globals, Called Functions sections
                if any(s in line for s in ['; XREF', '; Referenced', '; Called']):
                    break

                m = RE_STACK_VAR.match(line)
                if m:
                    type_name = m.group(1)
                    offset = int(m.group(2), 16)
                    # Handle negative offsets (they come as e.g. -0x144)
                    size = int(m.group(3))
                    var_name = m.group(4)
                    variables.append((type_name, offset, size, var_name))

    # Sort by offset (most negative first = lowest address)
    variables.sort(key=lambda v: v[1])
    return variables


def find_mismatches(asm_path):
    """Find SMRGLHeaderPrimitive locals that should be larger types.

    Measures the true extent of vertex data following the header by absorbing
    small int/undefined variables that are contiguous with the gap. This handles
    cases where Ghidra defined some of the vertex data as separate int locals.

    Returns a list of dicts with mismatch info.
    """
    variables = parse_stack_vars(asm_path)
    mismatches = []

    # Types that are likely vertex data absorbed into the primitive
    ABSORBABLE_TYPES = {'int', 'uint', 'undefined4', 'undefined2', 'undefined1'}

    for i, (type_name, offset, size, var_name) in enumerate(variables):
        if type_name != 'SMRGLHeaderPrimitive':
            continue

        # Find the true extent of vertex data following the header.
        #
        # 1. Measure gap to the immediate next variable (any type). This
        #    catches pure undefined gaps.
        # 2. If next var is absorbable (int/uint), absorb contiguous chain.
        # 3. Then check: does the distance to the next NON-absorbable var
        #    match a known primitive type? If so, override — this catches
        #    cases where Ghidra scattered vertex fields as separate ints
        #    with gaps between them.

        end_offset = offset + size
        absorbed = []
        j = i + 1

        # Step 1+2: Measure gap + absorb contiguous small vars
        if j < len(variables):
            next_type, next_offset, next_size, next_name = variables[j]
            initial_gap = next_offset - end_offset

            if initial_gap > 0 and next_type not in ABSORBABLE_TYPES:
                # Pure gap before a non-absorbable type
                end_offset = next_offset
            elif initial_gap >= 0 and next_type in ABSORBABLE_TYPES:
                end_offset = next_offset + next_size
                absorbed.append(variables[j])
                j += 1

                while j < len(variables):
                    next_type, next_offset, next_size, next_name = variables[j]
                    gap_to_next = next_offset - end_offset

                    if gap_to_next > 4:
                        break
                    if next_type not in ABSORBABLE_TYPES:
                        if gap_to_next > 0:
                            end_offset = next_offset
                        break

                    absorbed.append(variables[j])
                    end_offset = next_offset + next_size
                    j += 1
            elif initial_gap > 0:
                # Gap before an absorbable type that starts after some space
                end_offset = next_offset + next_size
                absorbed.append(variables[j])
                j += 1

        # Step 3: Boundary override — check distance to next non-absorbable
        next_boundary = None
        absorbed_candidates = []
        for k in range(i + 1, len(variables)):
            vtype, voffset, vsize, vname = variables[k]
            if voffset < offset + size:
                continue
            if vtype not in ABSORBABLE_TYPES:
                next_boundary = variables[k]
                break
            absorbed_candidates.append(variables[k])

        if next_boundary is not None:
            boundary_distance = next_boundary[1] - offset
            for gap_key, rec in GAP_TO_TYPE.items():
                if rec[0] == boundary_distance and boundary_distance > (end_offset - offset):
                    # Boundary gives a larger known type — prefer it
                    end_offset = next_boundary[1]
                    absorbed = absorbed_candidates
                    break

        total_size = end_offset - offset
        if total_size <= SMRGL_HEADER_PRIMITIVE_SIZE:
            continue  # No extra data after header

        extra = total_size - SMRGL_HEADER_PRIMITIVE_SIZE

        # Match by extra bytes or total size against known primitive types
        recommendation = GAP_TO_TYPE.get(extra)
        if recommendation is None:
            for gap_key, rec in GAP_TO_TYPE.items():
                if rec[0] == total_size:
                    recommendation = rec
                    break

        # Find the first non-absorbed variable after the primitive extent
        boundary_var = None
        for k in range(j, len(variables)):
            if variables[k][1] >= end_offset:
                boundary_var = variables[k]
                break

        mismatches.append({
            'var_name': var_name,
            'offset': offset,
            'current_size': size,
            'gap': extra,
            'total_size': total_size,
            'absorbed_vars': absorbed,
            'next_var': boundary_var,
            'recommendation': recommendation,
        })

    return mismatches


def get_function_name(asm_path):
    """Extract function name from .asm file path."""
    basename = os.path.basename(asm_path)
    return basename.replace('.asm', '')


def get_source_file(asm_path):
    """Extract source file from .asm directory path."""
    return os.path.basename(os.path.dirname(asm_path))


def main():
    if len(sys.argv) < 2:
        src_dir = 'annotations/nocedit.exe/pseudocode/src'
    else:
        src_dir = sys.argv[1]

    if not os.path.isdir(src_dir):
        print(f"Error: directory not found: {src_dir}", file=sys.stderr)
        sys.exit(1)

    asm_files = sorted(glob.glob(os.path.join(src_dir, '**', '*.asm'), recursive=True))

    all_mismatches = []

    for asm_path in asm_files:
        mismatches = find_mismatches(asm_path)
        if mismatches:
            func_name = get_function_name(asm_path)
            source_file = get_source_file(asm_path)
            for m in mismatches:
                m['function'] = func_name
                m['source_file'] = source_file
                m['asm_path'] = asm_path
                all_mismatches.append(m)

    if not all_mismatches:
        print("No SMRGLHeaderPrimitive mismatches found.")
        return

    # Group by recommendation
    by_type = {}
    unknown = []
    for m in all_mismatches:
        if m['recommendation']:
            key = m['recommendation'][1]  # type name
            by_type.setdefault(key, []).append(m)
        else:
            unknown.append(m)

    # Print report
    print(f"{'='*80}")
    print(f"SMRGLHeaderPrimitive Stack Variable Mismatch Report")
    print(f"{'='*80}")
    print(f"Total mismatches: {len(all_mismatches)}")
    print()

    for type_name in sorted(by_type.keys()):
        matches = by_type[type_name]
        rec = matches[0]['recommendation']
        print(f"--- {type_name} ({rec[0]} bytes = {rec[2]}) ---")
        print(f"    {len(matches)} variable(s) to retype:")
        print()
        for m in sorted(matches, key=lambda x: x['function']):
            print(f"    {m['source_file']}::{m['function']}")
            print(f"        {m['var_name']} at Stack[{m['offset']:#x}]"
                  f"  (current: {m['current_size']}b, gap: {m['gap']}b"
                  f" → should be {rec[0]}b)")
        print()

    if unknown:
        print(f"--- Unknown gap sizes (need investigation) ---")
        print(f"    {len(unknown)} variable(s):")
        print()
        for m in sorted(unknown, key=lambda x: x['function']):
            print(f"    {m['source_file']}::{m['function']}")
            print(f"        {m['var_name']} at Stack[{m['offset']:#x}]"
                  f"  (current: {m['current_size']}b, extra: {m['gap']}b"
                  f" → total: {m['total_size']}b)")
            if m.get('absorbed_vars'):
                print(f"        absorbed: {', '.join(v[3] + ' (' + v[0] + ')' for v in m['absorbed_vars'])}")
            if m['next_var']:
                next_t, next_o, next_s, next_n = m['next_var']
                print(f"        next var: {next_n} ({next_t}) at Stack[{next_o:#x}]")
        print()

    # Summary
    print(f"{'='*80}")
    print("Summary:")
    for type_name in sorted(by_type.keys()):
        print(f"  {type_name}: {len(by_type[type_name])} variables")
    if unknown:
        print(f"  Unknown: {len(unknown)} variables")
    print(f"  Total: {len(all_mismatches)} variables across "
          f"{len(set(m['function'] for m in all_mismatches))} functions")


if __name__ == '__main__':
    main()
