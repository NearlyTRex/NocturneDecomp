#!/usr/bin/env python3
"""Find dead (unreferenced) functions that can be repurposed as code caves.

Analyzes cross-reference data to identify functions with no incoming references,
then classifies them by size and content to find the best candidates for hosting
injected code (thunks, struct copy helpers, etc.).

A function is considered "dead" if:
  - No cross-references target its entry point
  - It's not a known entry point (main, DllMain, etc.)
  - It's not referenced via vtable (checked against known vtable xrefs)

Usage:
    python find_dead_functions.py [annotations_dir] [--binary PATH]
    python find_dead_functions.py [annotations_dir] --min-size 32
"""

import argparse
import json
import glob
import os
import re
import struct
import sys
from collections import defaultdict


# Byte values considered safe padding
PADDING_BYTES = {0x00, 0x90, 0xCC}

# Known entry points that should never be repurposed
ENTRY_POINT_PATTERNS = [
    'WinMain', 'main', 'DllMain', '_start', 'entry',
    'DllEntryPoint', 'TlsCallback',
]

# CRT/runtime prefixes — these functions may be called internally by the
# runtime through dispatch tables or indirect calls that don't show up
# in our cross-reference data.  Exclude them from code cave candidates.
CRT_PREFIXES = [
    'crt_', 'FUN_005f', 'FUN_0060', 'FUN_0061',
]

# Patterns that suggest a function is a compiler-generated stub
STUB_PATTERNS = [
    r'doNothing',
    r'staticInit',
    r'noop',
    r'PlaceholderStub',
    r'_ctor_FUN',  # simple constructors might be stubs
]


# ---------------------------------------------------------------------------
# PE helpers
# ---------------------------------------------------------------------------

def parse_pe_sections(data):
    """Parse PE section headers. Returns (image_base, sections_list)."""
    pe_offset = struct.unpack_from('<I', data, 0x3C)[0]
    sig = data[pe_offset:pe_offset + 4]
    if sig != b'PE\x00\x00':
        raise ValueError("Not a valid PE file")

    coff_start = pe_offset + 4
    num_sections = struct.unpack_from('<H', data, coff_start + 2)[0]
    opt_header_size = struct.unpack_from('<H', data, coff_start + 16)[0]

    opt_start = coff_start + 20
    image_base = struct.unpack_from('<I', data, opt_start + 28)[0]

    section_start = opt_start + opt_header_size
    sections = []
    for i in range(num_sections):
        off = section_start + i * 40
        name = data[off:off + 8].rstrip(b'\x00').decode('ascii', errors='replace')
        vsize, vaddr, rawsize, rawaddr = struct.unpack_from('<IIII', data, off + 8)
        sections.append({
            'name': name,
            'vaddr': vaddr,
            'vsize': vsize,
            'rawaddr': rawaddr,
            'rawsize': rawsize,
        })
    return image_base, sections


def va_to_file_offset(image_base, sections, va):
    """Convert a virtual address to a file offset."""
    rva = va - image_base
    for sec in sections:
        if sec['vaddr'] <= rva < sec['vaddr'] + sec['rawsize']:
            return sec['rawaddr'] + (rva - sec['vaddr'])
    return None


def read_bytes_at_va(pe_data, image_base, sections, va, size):
    """Read bytes from the PE file at a virtual address."""
    offset = va_to_file_offset(image_base, sections, va)
    if offset is None:
        return None
    if offset + size > len(pe_data):
        return None
    return pe_data[offset:offset + size]


# ---------------------------------------------------------------------------
# Function analysis
# ---------------------------------------------------------------------------

def classify_function_content(pe_data, image_base, sections, addr, size):
    """Analyze the binary content of a function to classify it.

    Returns a dict with:
      is_stub: True if the function is a trivial stub (just RET, or MOV+RET)
      is_simple: True if the function is small and simple
      first_bytes: hex string of first N bytes
      description: human-readable description of what the function does
    """
    raw = read_bytes_at_va(pe_data, image_base, sections, addr, min(size, 64))
    if raw is None:
        return {'is_stub': False, 'is_simple': False,
                'first_bytes': '', 'description': 'could not read'}

    result = {
        'is_stub': False,
        'is_simple': size <= 16,
        'first_bytes': raw[:16].hex(),
        'description': '',
    }

    # Check for trivial patterns
    if size <= 1 and raw[0:1] == b'\xc3':
        result['is_stub'] = True
        result['description'] = 'bare RET'
    elif size <= 3 and raw[0:1] == b'\xc3':
        result['is_stub'] = True
        result['description'] = 'RET + padding'
    elif size <= 6 and raw[-1:] == b'\xc3':
        # Small function ending in RET
        if raw[0] == 0x33 and raw[1] in (0xC0,):  # XOR EAX,EAX; RET
            result['is_stub'] = True
            result['description'] = 'return 0'
        elif raw[0] == 0xB8:  # MOV EAX, imm32; RET
            val = struct.unpack_from('<I', raw, 1)[0]
            result['is_stub'] = True
            result['description'] = 'return 0x%x' % val
        elif raw[0] == 0xA1:  # MOV EAX, [addr]; RET
            result['is_stub'] = True
            result['description'] = 'return global'
        elif size <= 4:
            result['is_stub'] = True
            result['description'] = 'trivial (%d bytes)' % size

    return result


def load_function_data(annotations_dir):
    """Load all function data from the bucket JSONs."""
    pattern = os.path.join(annotations_dir, 'functions', 'functions_bucket_*.json')
    funcs = {}

    for jp in sorted(glob.glob(pattern)):
        with open(jp) as f:
            for func in json.load(f):
                blocks = func.get('body', [])
                if not blocks:
                    continue

                entry = int(func['addr'], 16)
                total_size = sum(b['size'] for b in blocks)

                # Compute contiguous range
                min_addr = min(int(b['start'], 16) for b in blocks)
                max_addr = max(int(b['end'], 16) for b in blocks)

                funcs[entry] = {
                    'name': func['name'],
                    'size': total_size,
                    'entry': entry,
                    'min_addr': min_addr,
                    'max_addr': max_addr,
                    'blocks': [(int(b['start'], 16), int(b['end'], 16))
                               for b in blocks],
                    'block_count': len(blocks),
                }

    return funcs


def load_xref_data(annotations_dir):
    """Load cross-reference data.

    Returns:
      targets_from_code: set of addresses targeted by CALL/JUMP xrefs
      targets_from_data: set of addresses targeted by DATA xrefs
      all_targets: dict of addr -> ref_count
    """
    xref_pattern = os.path.join(annotations_dir, 'cross_references',
                                'cross_references_bucket_*.json')

    targets_from_code = set()
    targets_from_data = set()
    all_targets = defaultdict(int)

    for jp in sorted(glob.glob(xref_pattern)):
        with open(jp) as f:
            for xref in json.load(f):
                to_str = xref.get('to', '')
                if len(to_str) != 8:
                    continue
                try:
                    to_addr = int(to_str, 16)
                except ValueError:
                    continue

                all_targets[to_addr] += 1
                ref_type = xref.get('type', '')
                if 'CALL' in ref_type or 'JUMP' in ref_type:
                    targets_from_code.add(to_addr)
                elif 'DATA' in ref_type:
                    targets_from_data.add(to_addr)

    return targets_from_code, targets_from_data, all_targets


def is_entry_point(name):
    """Check if a function name matches known entry point patterns."""
    for pat in ENTRY_POINT_PATTERNS:
        if pat.lower() in name.lower():
            return True
    return False


def is_stub_name(name):
    """Check if a function name suggests it's a compiler stub."""
    for pat in STUB_PATTERNS:
        if re.search(pat, name):
            return True
    return False


def is_crt_function(name, addr):
    """Check if a function is likely part of the C runtime.

    CRT functions may be called internally through dispatch tables or
    indirect calls that aren't captured in our xref data, so they're
    unsafe to overwrite even if they appear unreferenced.
    """
    for prefix in CRT_PREFIXES:
        if name.startswith(prefix):
            return True
    # Also catch by address range — CRT code is typically at the end of .text
    if addr >= 0x005f0000:
        return True
    return False


def find_binary(annotations_dir):
    """Try to find the nocedit.exe binary in common locations."""
    candidates = [
        os.path.join(os.path.dirname(os.path.dirname(annotations_dir)),
                     '..', 'OpenNocturne', 'game', 'nocedit.exe'),
        os.path.join(annotations_dir, '..', '..', 'game', 'nocedit.exe'),
        os.path.join(os.path.dirname(annotations_dir), 'game', 'nocedit.exe'),
    ]
    for path in candidates:
        resolved = os.path.abspath(path)
        if os.path.isfile(resolved):
            return resolved
    return None


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Find dead (unreferenced) functions for code cave use")
    parser.add_argument("annotations_dir", nargs='?', default=None,
                        help="Path to annotations directory")
    parser.add_argument("--binary", type=str, default=None,
                        help="Path to the PE binary (nocedit.exe)")
    parser.add_argument("--min-size", type=int, default=1,
                        help="Minimum function size to report (default: 1)")
    args = parser.parse_args()

    if args.annotations_dir:
        annotations_dir = os.path.abspath(args.annotations_dir)
    else:
        repo_root = os.path.dirname(os.path.dirname(os.path.dirname(
            os.path.abspath(__file__))))
        annotations_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe')

    reports_dir = os.path.join(annotations_dir, 'reports')

    # Load data
    print("Loading function data...")
    funcs = load_function_data(annotations_dir)
    print("  %d functions loaded" % len(funcs))

    print("Loading cross-references...")
    code_targets, data_targets, all_targets = load_xref_data(annotations_dir)
    print("  %d code targets, %d data targets" % (len(code_targets), len(data_targets)))

    # Load binary for content analysis
    binary_path = args.binary or find_binary(annotations_dir)
    pe_data = None
    image_base = None
    sections = None
    if binary_path and os.path.isfile(binary_path):
        print("  Binary: %s" % binary_path)
        with open(binary_path, 'rb') as f:
            pe_data = f.read()
        image_base, sections = parse_pe_sections(pe_data)
    else:
        print("  WARNING: No binary found. Content analysis disabled.")

    # Find dead functions
    print("Analyzing...")
    dead = []  # (addr, info, classification)
    entry_points_skipped = 0
    crt_skipped = 0
    data_referenced = 0

    for addr, info in funcs.items():
        name = info['name']

        # Skip known entry points
        if is_entry_point(name):
            entry_points_skipped += 1
            continue

        # Skip CRT/runtime functions — may be called internally
        if is_crt_function(name, addr):
            crt_skipped += 1
            continue

        # Check if anything references this function's entry point
        if addr in all_targets:
            continue

        # Also check if any block start is referenced (for non-contiguous functions)
        block_referenced = False
        for bstart, bend in info['blocks']:
            if bstart in all_targets and bstart != addr:
                block_referenced = True
                break
        if block_referenced:
            continue

        # Classify by reference type
        # Functions only referenced via DATA xrefs might be vtable entries
        # or callback pointers — they're called indirectly
        if addr in data_targets:
            data_referenced += 1
            continue

        # Classify content
        content = {'is_stub': False, 'is_simple': False,
                   'first_bytes': '', 'description': ''}
        if pe_data is not None:
            content = classify_function_content(
                pe_data, image_base, sections, addr, info['size'])

        if info['size'] >= args.min_size:
            dead.append((addr, info, content))

    # Sort by size (largest first)
    dead.sort(key=lambda x: x[1]['size'], reverse=True)

    # Categorize
    stubs = [(a, i, c) for a, i, c in dead if c['is_stub']]
    simple = [(a, i, c) for a, i, c in dead if c['is_simple'] and not c['is_stub']]
    large = [(a, i, c) for a, i, c in dead if not c['is_simple'] and not c['is_stub']]

    total_dead_bytes = sum(i['size'] for _, i, _ in dead)
    stub_bytes = sum(i['size'] for _, i, _ in stubs)
    large_bytes = sum(i['size'] for _, i, _ in large)

    print()
    print("Results:")
    print("  Total functions:       %d" % len(funcs))
    print("  Entry points skipped:  %d" % entry_points_skipped)
    print("  CRT/runtime skipped:   %d" % crt_skipped)
    print("  Data-referenced only:  %d (possible vtable/callback)" % data_referenced)
    print("  Dead functions:        %d (%s bytes)" % (
        len(dead), '{:,}'.format(total_dead_bytes)))
    print("    Stubs:               %d (%s bytes)" % (
        len(stubs), '{:,}'.format(stub_bytes)))
    print("    Simple (<= 16 bytes):%d" % len(simple))
    print("    Large (> 16 bytes):  %d (%s bytes)" % (
        len(large), '{:,}'.format(large_bytes)))
    print()

    # =========================================================================
    # REPORT
    # =========================================================================
    lines = []
    lines.append("=" * 100)
    lines.append("DEAD FUNCTION ANALYSIS")
    lines.append("=" * 100)
    lines.append("")
    lines.append("Dead functions have no cross-references targeting their entry point.")
    lines.append("They can potentially be overwritten to host injected code (thunks, helpers).")
    lines.append("")
    lines.append("Total functions:         %d" % len(funcs))
    lines.append("Dead functions:          %d (%s bytes)" % (
        len(dead), '{:,}'.format(total_dead_bytes)))
    lines.append("  Stubs (trivial):       %d (%s bytes)" % (
        len(stubs), '{:,}'.format(stub_bytes)))
    lines.append("  Large (> 16 bytes):    %d (%s bytes)" % (
        len(large), '{:,}'.format(large_bytes)))
    lines.append("Entry points skipped:    %d" % entry_points_skipped)
    lines.append("CRT/runtime skipped:     %d" % crt_skipped)
    lines.append("Data-ref only (vtable?): %d" % data_referenced)
    lines.append("")

    # Size distribution of dead functions
    buckets = [
        (1, 4, "1-4 bytes (bare stubs)"),
        (5, 15, "5-15 bytes (small stubs)"),
        (16, 31, "16-31 bytes"),
        (32, 63, "32-63 bytes (small caves)"),
        (64, 127, "64-127 bytes"),
        (128, 255, "128-255 bytes"),
        (256, 511, "256-511 bytes"),
        (512, 1023, "512-1023 bytes"),
        (1024, None, "1024+ bytes"),
    ]

    lines.append("-" * 100)
    lines.append("SIZE DISTRIBUTION")
    lines.append("-" * 100)
    for low, high, label in buckets:
        if high is None:
            matching = [(a, i, c) for a, i, c in dead if i['size'] >= low]
        else:
            matching = [(a, i, c) for a, i, c in dead if low <= i['size'] <= high]
        if matching:
            total = sum(i['size'] for _, i, _ in matching)
            lines.append("  %-45s  %4d funcs  %s bytes" % (
                label, len(matching), '{:>8,}'.format(total)))
    lines.append("")

    # By source file
    lines.append("-" * 100)
    lines.append("BY SOURCE FILE (top 20)")
    lines.append("-" * 100)
    by_file = defaultdict(list)
    for addr, info, content in dead:
        # Extract source file from name: src_file.cpp_ClassName_method_FUN_addr
        name = info['name']
        parts = name.split('_FUN_')
        if parts:
            source = parts[0].rsplit('_', 1)[0] if '_' in parts[0] else parts[0]
            # Get the file part (before first class/function name)
            file_parts = source.split('.')
            if len(file_parts) >= 2:
                source_file = '.'.join(file_parts[:2])
            else:
                source_file = source
        else:
            source_file = 'unknown'
        by_file[source_file].append((addr, info, content))

    for source_file, entries in sorted(by_file.items(),
                                        key=lambda x: sum(i['size'] for _, i, _ in x[1]),
                                        reverse=True)[:20]:
        total = sum(i['size'] for _, i, _ in entries)
        lines.append("  %-50s  %3d funcs  %s bytes" % (
            source_file[:50], len(entries), '{:>8,}'.format(total)))
    lines.append("")

    # Largest dead functions (best code cave candidates)
    lines.append("-" * 100)
    lines.append("LARGEST DEAD FUNCTIONS (code cave candidates)")
    lines.append("-" * 100)
    for addr, info, content in dead[:50]:
        desc = content.get('description', '')
        stub_marker = ' [STUB]' if content['is_stub'] else ''
        name_marker = ' [stub-name]' if is_stub_name(info['name']) else ''
        lines.append("  0x%08x  %5d bytes  %s%s%s" % (
            addr, info['size'], info['name'][:60], stub_marker, name_marker))
        if desc:
            lines.append("               %s" % desc)
    lines.append("")

    # Stubs section
    if stubs:
        lines.append("-" * 100)
        lines.append("TRIVIAL STUBS (compiler-generated, safe to overwrite)")
        lines.append("-" * 100)
        for addr, info, content in sorted(stubs, key=lambda x: x[1]['size'], reverse=True):
            desc = content.get('description', '')
            lines.append("  0x%08x  %3d bytes  %-50s  %s" % (
                addr, info['size'], info['name'][:50], desc))
        lines.append("")

    # Best candidates for code caves (contiguous, single-block, >= 32 bytes)
    lines.append("-" * 100)
    lines.append("BEST CODE CAVE CANDIDATES (single block, >= 32 bytes)")
    lines.append("-" * 100)
    lines.append("These are contiguous dead functions suitable for hosting injected code.")
    lines.append("")
    cave_candidates = [
        (a, i, c) for a, i, c in dead
        if i['block_count'] == 1 and i['size'] >= 32
    ]
    for addr, info, content in cave_candidates[:40]:
        lines.append("  0x%08x  %5d bytes  %s" % (
            addr, info['size'], info['name'][:65]))
    lines.append("")
    lines.append("Total single-block candidates >= 32 bytes: %d (%s bytes)" % (
        len(cave_candidates),
        '{:,}'.format(sum(i['size'] for _, i, _ in cave_candidates))))
    lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, 'dead_function_analysis.txt')
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    print("Report written to: %s" % report_path)

    # Also write a JSON for programmatic use
    json_path = os.path.join(reports_dir, 'dead_functions.json')
    json_data = []
    for addr, info, content in dead:
        json_data.append({
            'address': '0x%08x' % addr,
            'name': info['name'],
            'size': info['size'],
            'block_count': info['block_count'],
            'blocks': [{'start': '0x%08x' % s, 'end': '0x%08x' % e}
                       for s, e in info['blocks']],
            'is_stub': content.get('is_stub', False),
            'description': content.get('description', ''),
        })
    with open(json_path, 'w') as f:
        json.dump(json_data, f, indent=2)
    print("JSON written to: %s" % json_path)


if __name__ == '__main__':
    main()
