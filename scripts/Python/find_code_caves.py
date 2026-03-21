#!/usr/bin/env python3
"""Find code caves (gaps between functions) in the .text section.

Cross-references with pass-by-value struct functions to identify caves
that could host pointer-based thunk wrappers, cleaning up decompilation
at all call sites.

Validates caves by checking:
  1. Binary byte content (padding bytes vs. non-padding)
  2. Switch table data ranges (jump tables embedded in .text)
  3. Cross-reference targets (addresses referenced by code/data)

Usage:
    python find_code_caves.py [annotations_dir] [--binary PATH]
"""

import json
import glob
import os
import re
import struct
import sys
from collections import defaultdict


# Byte values considered safe padding (not meaningful code or data)
PADDING_BYTES = {0x00, 0x90, 0xCC}


# ---------------------------------------------------------------------------
# PE helpers (adapted from patch_and_esp.py)
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
# Cave validation
# ---------------------------------------------------------------------------

def classify_bytes(data):
    """Classify a byte sequence.

    Returns a dict with:
      padding_count: bytes that are 0x00/0x90/0xCC
      non_padding_count: all other bytes
      padding_ratio: fraction of padding bytes
      byte_histogram: Counter of byte values (top entries)
      has_ascii: whether there's a run of 4+ printable ASCII bytes
      has_pointers: whether there are 4-byte values that look like .text addresses
    """
    if not data:
        return {
            'padding_count': 0,
            'non_padding_count': 0,
            'padding_ratio': 1.0,
            'has_ascii': False,
            'has_pointers': False,
            'dominant_byte': None,
        }

    padding_count = sum(1 for b in data if b in PADDING_BYTES)
    non_padding_count = len(data) - padding_count

    # Check for ASCII strings (4+ consecutive printable bytes)
    has_ascii = False
    ascii_run = 0
    for b in data:
        if 0x20 <= b < 0x7F:
            ascii_run += 1
            if ascii_run >= 4:
                has_ascii = True
                break
        else:
            ascii_run = 0

    # Check for embedded pointers (4-byte values in typical VA ranges)
    # nocedit.exe .text is roughly 0x00401000-0x00620000
    has_pointers = False
    if len(data) >= 4:
        for i in range(0, len(data) - 3, 4):
            val = struct.unpack_from('<I', data, i)[0]
            if 0x00401000 <= val <= 0x00700000:
                has_pointers = True
                break

    # Find dominant byte
    from collections import Counter
    counts = Counter(data)
    dominant_byte = counts.most_common(1)[0][0] if counts else None

    return {
        'padding_count': padding_count,
        'non_padding_count': non_padding_count,
        'padding_ratio': padding_count / len(data) if data else 1.0,
        'has_ascii': has_ascii,
        'has_pointers': has_pointers,
        'dominant_byte': dominant_byte,
    }


def load_switch_table_ranges(annotations_dir):
    """Load switch table data ranges from switch_tables.json.

    Returns a sorted list of (start_va, end_va) for each jump table's
    data area (the array of target addresses).
    """
    st_path = os.path.join(annotations_dir, 'switch_tables', 'switch_tables.json')
    if not os.path.isfile(st_path):
        return []

    with open(st_path) as f:
        data = json.load(f)

    ranges = []
    for table in data.get('switch_tables', []):
        asm = table.get('assembly', '')
        target_count = table.get('target_count', 0)
        if target_count <= 0:
            continue

        # Extract base address from patterns like:
        #   JMP dword ptr [EAX*0x4 + 0x40ea00]
        #   JMP dword ptr [ECX*0x4 + 0x411288]
        m = re.search(r'\+\s*(0x[0-9a-fA-F]+)\]', asm)
        if m:
            base_addr = int(m.group(1), 16)
            table_size = target_count * 4  # each entry is a dword
            ranges.append((base_addr, base_addr + table_size))

    ranges.sort()
    return ranges


def load_xref_targets(annotations_dir):
    """Load all cross-reference target addresses.

    Returns a set of addresses that are referenced by code or data.
    """
    xref_pattern = os.path.join(annotations_dir, 'cross_references',
                                'cross_references_bucket_*.json')
    targets = set()

    for jp in sorted(glob.glob(xref_pattern)):
        with open(jp) as f:
            for xref in json.load(f):
                to_addr = xref.get('to', '')
                if to_addr and len(to_addr) == 8:
                    try:
                        targets.add(int(to_addr, 16))
                    except ValueError:
                        pass

    return targets


def overlaps_range(addr_start, addr_end, range_list):
    """Check if [addr_start, addr_end) overlaps with any range in the sorted list."""
    for rstart, rend in range_list:
        if rstart >= addr_end:
            break  # sorted, no more overlaps possible
        if rend > addr_start:
            return True
    return False


def validate_cave(cave, pe_data, image_base, sections,
                  switch_ranges, xref_targets):
    """Validate a cave candidate. Returns a validation dict."""
    start = cave['start']
    end = cave['end']
    size = cave['size']

    result = {
        'status': 'unknown',
        'reasons': [],
        'byte_info': None,
    }

    # Check 1: Switch table overlap
    if overlaps_range(start, end, switch_ranges):
        result['status'] = 'data'
        result['reasons'].append('overlaps switch table')

    # Check 2: Xref targets inside cave
    xrefs_inside = []
    for addr in range(start, end):
        if addr in xref_targets:
            xrefs_inside.append(addr)
    if xrefs_inside:
        result['status'] = 'referenced'
        result['reasons'].append('%d xref target(s) inside' % len(xrefs_inside))

    # Check 3: Binary byte content
    if pe_data is not None:
        raw = read_bytes_at_va(pe_data, image_base, sections, start, size)
        if raw is not None:
            info = classify_bytes(raw)
            result['byte_info'] = info

            if info['padding_ratio'] == 1.0:
                if result['status'] == 'unknown':
                    result['status'] = 'clean'
                    result['reasons'].append('all padding (0x%02x)' % info['dominant_byte'])
            elif info['padding_ratio'] >= 0.9:
                if result['status'] == 'unknown':
                    result['status'] = 'likely_clean'
                    result['reasons'].append('%.0f%% padding' % (info['padding_ratio'] * 100))
            else:
                if info['has_pointers']:
                    if result['status'] == 'unknown':
                        result['status'] = 'data'
                    result['reasons'].append('contains pointer-like values')
                if info['has_ascii']:
                    if result['status'] == 'unknown':
                        result['status'] = 'data'
                    result['reasons'].append('contains ASCII strings')
                if result['status'] == 'unknown':
                    result['status'] = 'suspicious'
                    result['reasons'].append(
                        'only %.0f%% padding (%d/%d non-padding bytes)' %
                        (info['padding_ratio'] * 100,
                         info['non_padding_count'], size))
        else:
            result['reasons'].append('could not read bytes from binary')

    if result['status'] == 'unknown':
        result['reasons'].append('no binary provided for validation')

    return result


# ---------------------------------------------------------------------------
# Function range loading
# ---------------------------------------------------------------------------

def load_function_ranges(annotations_dir):
    """Load all function address ranges from the functions bucket JSONs."""
    pattern = os.path.join(annotations_dir, 'functions', 'functions_bucket_*.json')
    ranges = []  # (start, end, name, body_size)
    func_info = {}  # name -> {start, end, total_size}

    for jp in sorted(glob.glob(pattern)):
        with open(jp) as f:
            for func in json.load(f):
                name = func['name']
                blocks = func.get('body', [])
                if not blocks:
                    continue

                total_size = 0
                min_addr = None
                max_addr = None
                for block in blocks:
                    start = int(block['start'], 16)
                    end = int(block['end'], 16)
                    total_size += block['size']
                    ranges.append((start, end, name))
                    if min_addr is None or start < min_addr:
                        min_addr = start
                    if max_addr is None or end > max_addr:
                        max_addr = end

                func_info[name] = {
                    'start': min_addr,
                    'end': max_addr,
                    'size': total_size,
                }

    ranges.sort()
    return ranges, func_info


def find_caves(ranges):
    """Find gaps between consecutive function blocks."""
    caves = []
    for i in range(len(ranges) - 1):
        end_a = ranges[i][1] + 1  # end address is inclusive
        start_b = ranges[i + 1][0]
        gap = start_b - end_a

        if gap > 0:
            caves.append({
                'start': end_a,
                'end': start_b,
                'size': gap,
                'after_func': ranges[i][2],
                'before_func': ranges[i + 1][2],
            })

    return caves


# ---------------------------------------------------------------------------
# Pass-by-value analysis (unchanged)
# ---------------------------------------------------------------------------

def parse_pass_by_value_report(reports_dir):
    """Parse the pass-by-value report to get function info and call sites."""
    report_path = os.path.join(reports_dir, 'pass_by_value_report.txt')
    if not os.path.isfile(report_path):
        return [], []

    with open(report_path) as f:
        text = f.read()

    # Parse target functions and their by-value params
    targets = []
    current_target = None

    # Parse caller frame fixes
    caller_fixes = []

    in_fixes = False
    for line in text.split('\n'):
        line = line.rstrip()

        if 'CALLER FRAME SIZE FIXES' in line:
            in_fixes = True
            continue

        if in_fixes:
            m = re.match(
                r'\s+(\S+)\s+current:\s+(0x[0-9a-f]+)\s+required:\s+(0x[0-9a-f]+)\s+'
                r'\(\+?(0x[0-9a-f]+)\s+for by-value args\)',
                line
            )
            if m:
                caller_fixes.append({
                    'name': m.group(1),
                    'current_frame': int(m.group(2), 16),
                    'required_frame': int(m.group(3), 16),
                    'extra_bytes': int(m.group(4), 16),
                })
            continue

        # Parse target function lines
        func_match = re.match(r'^(\S+_FUN_[0-9a-f]+)\s*$', line)
        if func_match:
            if current_target:
                targets.append(current_target)
            current_target = {
                'name': func_match.group(1),
                'params': [],
                'call_sites': [],
                'total_by_value_bytes': 0,
            }
            continue

        if current_target:
            param_match = re.match(r'\s+Params:\s+(.*)', line)
            if param_match:
                param_str = param_match.group(1)
                for pm in re.finditer(r'arg\d+=(\S+)\s+\((0x[0-9a-f]+)\)', param_str):
                    size = int(pm.group(2), 16)
                    current_target['params'].append({
                        'type': pm.group(1),
                        'size': size,
                    })
                    current_target['total_by_value_bytes'] += size
                continue

            site_match = re.match(
                r'\s+(\S+)\s+@\s+(0x[0-9a-f]+)\s+(\d+)x\s+(\S+)',
                line
            )
            if site_match:
                current_target['call_sites'].append({
                    'caller': site_match.group(1),
                    'addr': int(site_match.group(2), 16),
                    'count': int(site_match.group(3)),
                    'type': site_match.group(4),
                })
                continue

            if line.startswith('---'):
                if current_target:
                    targets.append(current_target)
                    current_target = None

    if current_target:
        targets.append(current_target)

    return targets, caller_fixes


def estimate_thunk_size(target):
    """Estimate the bytes needed for a pointer-accepting thunk.

    The thunk takes pointers to structs, copies them onto the stack
    as by-value arguments, then calls the original function.

    Layout:
        push esi                ; 1
        push edi                ; 1
        [for each param, last-to-first:]
          sub esp, PARAM_SIZE   ; 3 (or 6 if > 127)
          mov esi, [esp+OFF]    ; 3-4
          mov edi, esp          ; 2
          mov ecx, DWORD_COUNT  ; 5
          rep movsd             ; 2
        call ORIGINAL           ; 5
        add esp, TOTAL_SIZE     ; 3 (or 6)
        pop edi                 ; 1
        pop esi                 ; 1
        ret                     ; 1
    """
    overhead = 1 + 1 + 5 + 6 + 1 + 1 + 1  # push/push/call/add/pop/pop/ret = 16
    per_param = 3 + 4 + 2 + 5 + 2  # sub/mov/mov/mov/rep = 16
    param_count = len(target['params'])

    # Extra bytes for large offsets (when ESP offset > 127)
    large_offset_extra = 0
    running_sub = 0
    for i, p in enumerate(reversed(target['params'])):
        running_sub += p['size']
        # Offset to pointer arg = running_sub + 8(pushed regs) + 4*(param_index)
        offset = running_sub + 8 + 4 * (param_count - 1 - i)
        if offset > 127:
            large_offset_extra += 1  # mov [esp+off] needs 4-byte displacement
        if p['size'] > 127:
            large_offset_extra += 3  # sub esp needs 32-bit immediate

    return overhead + per_param * param_count + large_offset_extra


def find_nearby_caves(caves, addr, max_distance=0x100000):
    """Find caves near an address, sorted by distance."""
    results = []
    for cave in caves:
        dist = min(abs(cave['start'] - addr), abs(cave['end'] - addr))
        if dist <= max_distance:
            results.append((dist, cave))
    results.sort()
    return results


# ---------------------------------------------------------------------------
# Auto-detect binary path
# ---------------------------------------------------------------------------

def find_binary(annotations_dir):
    """Try to find the nocedit.exe binary in common locations."""
    candidates = [
        # Sibling OpenNocturne repo
        os.path.join(os.path.dirname(os.path.dirname(annotations_dir)),
                     '..', 'OpenNocturne', 'game', 'nocedit.exe'),
        # Same directory structure
        os.path.join(annotations_dir, '..', '..', 'game', 'nocedit.exe'),
        # Relative to repo root
        os.path.join(os.path.dirname(annotations_dir), 'game', 'nocedit.exe'),
    ]
    for path in candidates:
        resolved = os.path.abspath(path)
        if os.path.isfile(resolved):
            return resolved
    return None


# ---------------------------------------------------------------------------
# Status formatting
# ---------------------------------------------------------------------------

STATUS_LABELS = {
    'clean': 'CLEAN',
    'likely_clean': 'LIKELY OK',
    'suspicious': 'SUSPECT',
    'data': 'DATA',
    'referenced': 'HAS XREFS',
    'unknown': '?',
}

STATUS_ORDER = {
    'clean': 0,
    'likely_clean': 1,
    'unknown': 2,
    'suspicious': 3,
    'referenced': 4,
    'data': 5,
}


def is_usable(cave):
    """Check if a cave is validated as usable."""
    v = cave.get('validation', {})
    return v.get('status') in ('clean', 'likely_clean')


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    import argparse
    parser = argparse.ArgumentParser(
        description="Find and validate code caves in the .text section")
    parser.add_argument("annotations_dir", nargs='?', default=None,
                        help="Path to annotations directory")
    parser.add_argument("--binary", type=str, default=None,
                        help="Path to the PE binary (nocedit.exe)")
    parser.add_argument("--min-size", type=int, default=1,
                        help="Minimum cave size to include (default: 1)")
    args = parser.parse_args()

    if args.annotations_dir:
        annotations_dir = os.path.abspath(args.annotations_dir)
    else:
        repo_root = os.path.dirname(os.path.dirname(os.path.dirname(
            os.path.abspath(__file__))))
        annotations_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe')

    reports_dir = os.path.join(annotations_dir, 'reports')

    # Load function ranges
    print("Loading function ranges...")
    ranges, func_info = load_function_ranges(annotations_dir)
    print("  %d function blocks loaded" % len(ranges))

    # Find caves
    caves = find_caves(ranges)
    print("  %d caves found (%s bytes total)" % (
        len(caves), '{:,}'.format(sum(c['size'] for c in caves))))

    # Load validation data
    print("Loading validation data...")

    # Switch tables
    switch_ranges = load_switch_table_ranges(annotations_dir)
    print("  %d switch table data ranges loaded" % len(switch_ranges))

    # Cross-references
    xref_targets = load_xref_targets(annotations_dir)
    print("  %d unique xref targets loaded" % len(xref_targets))

    # Binary
    binary_path = args.binary or find_binary(annotations_dir)
    pe_data = None
    image_base = None
    sections = None
    if binary_path and os.path.isfile(binary_path):
        print("  Binary: %s" % binary_path)
        with open(binary_path, 'rb') as f:
            pe_data = f.read()
        image_base, sections = parse_pe_sections(pe_data)
        print("  Image base: 0x%08x, %d sections" % (image_base, len(sections)))
    else:
        print("  WARNING: No binary found. Byte validation disabled.")
        print("  Use --binary to specify the path to nocedit.exe")

    # Validate all caves
    print("Validating caves...")
    status_counts = defaultdict(int)
    for cave in caves:
        cave['validation'] = validate_cave(
            cave, pe_data, image_base, sections, switch_ranges, xref_targets)
        status_counts[cave['validation']['status']] += 1

    for status in sorted(status_counts, key=lambda s: STATUS_ORDER.get(s, 99)):
        print("  %-12s %d" % (STATUS_LABELS.get(status, status), status_counts[status]))

    # Parse pass-by-value report
    targets, caller_fixes = parse_pass_by_value_report(reports_dir)
    print("  %d pass-by-value target functions" % len(targets))
    print("  %d callers needing frame fixes" % len(caller_fixes))
    print()

    # =========================================================================
    # REPORT
    # =========================================================================
    lines = []
    lines.append("=" * 100)
    lines.append("CODE CAVE ANALYSIS (WITH VALIDATION)")
    lines.append("=" * 100)
    lines.append("")

    # Summary
    total_caves = len(caves)
    total_bytes = sum(c['size'] for c in caves)
    usable_caves = [c for c in caves if is_usable(c)]
    usable_bytes = sum(c['size'] for c in usable_caves)

    lines.append("Total caves:              %d (%s bytes)" % (
        total_caves, '{:,}'.format(total_bytes)))
    lines.append("Validated usable:         %d (%s bytes)" % (
        len(usable_caves), '{:,}'.format(usable_bytes)))
    lines.append("")

    # Validation breakdown
    lines.append("-" * 100)
    lines.append("VALIDATION STATUS BREAKDOWN")
    lines.append("-" * 100)
    for status in ['clean', 'likely_clean', 'suspicious', 'data', 'referenced', 'unknown']:
        matching = [c for c in caves if c['validation']['status'] == status]
        if matching:
            total = sum(c['size'] for c in matching)
            lines.append("  %-12s  %4d caves  %s bytes" % (
                STATUS_LABELS.get(status, status),
                len(matching), '{:>8,}'.format(total)))
    lines.append("")

    # Size distribution (usable only)
    buckets = [
        (1, 15, "1-15 bytes (too small for thunks)"),
        (16, 31, "16-31 bytes"),
        (32, 63, "32-63 bytes (small thunks)"),
        (64, 127, "64-127 bytes (most thunks)"),
        (128, 255, "128-255 bytes"),
        (256, 511, "256-511 bytes"),
        (512, 1023, "512-1023 bytes"),
        (1024, None, "1024+ bytes"),
    ]

    lines.append("-" * 100)
    lines.append("USABLE CAVE SIZE DISTRIBUTION")
    lines.append("-" * 100)
    for low, high, label in buckets:
        if high is None:
            matching = [c for c in usable_caves if c['size'] >= low]
        else:
            matching = [c for c in usable_caves if low <= c['size'] <= high]
        if matching:
            total = sum(c['size'] for c in matching)
            lines.append("  %-45s  %4d caves  %s bytes" % (
                label, len(matching), '{:>8,}'.format(total)))
    lines.append("")

    # Largest usable caves
    usable_by_size = sorted(usable_caves, key=lambda c: c['size'], reverse=True)
    lines.append("-" * 100)
    lines.append("LARGEST USABLE CAVES (top 30)")
    lines.append("-" * 100)
    for c in usable_by_size[:30]:
        v = c['validation']
        status_str = STATUS_LABELS.get(v['status'], v['status'])
        reason_str = '; '.join(v['reasons'])
        lines.append("  %s bytes  0x%08x - 0x%08x  [%s] %s" % (
            '{:>6,}'.format(c['size']), c['start'], c['end'],
            status_str, reason_str))
        lines.append("    after:  %s" % c['after_func'][:70])
        lines.append("    before: %s" % c['before_func'][:70])
    lines.append("")

    # Rejected caves (largest, for review)
    rejected = [c for c in caves if not is_usable(c) and c['size'] >= 16]
    rejected_by_size = sorted(rejected, key=lambda c: c['size'], reverse=True)
    if rejected_by_size:
        lines.append("-" * 100)
        lines.append("LARGEST REJECTED CAVES (top 30, >= 16 bytes)")
        lines.append("-" * 100)
        for c in rejected_by_size[:30]:
            v = c['validation']
            status_str = STATUS_LABELS.get(v['status'], v['status'])
            reason_str = '; '.join(v['reasons'])
            lines.append("  %s bytes  0x%08x - 0x%08x  [%s] %s" % (
                '{:>6,}'.format(c['size']), c['start'], c['end'],
                status_str, reason_str))
            lines.append("    after:  %s" % c['after_func'][:70])
            lines.append("    before: %s" % c['before_func'][:70])
        lines.append("")

    # =========================================================================
    # REPORT: Pass-by-value thunk feasibility (using only usable caves)
    # =========================================================================
    if targets:
        lines.append("=" * 100)
        lines.append("PASS-BY-VALUE THUNK FEASIBILITY")
        lines.append("=" * 100)
        lines.append("")
        lines.append("Strategy: write a pointer-accepting wrapper in a code cave that copies")
        lines.append("structs onto the stack and calls the original function. Then patch callers")
        lines.append("to pass pointers to the thunk instead of doing inline REP MOVSD copies.")
        lines.append("NOTE: Only validated usable caves are considered.")
        lines.append("")

        for target in sorted(targets, key=lambda t: len(t['call_sites']), reverse=True):
            thunk_size = estimate_thunk_size(target)
            func_addr = func_info.get(target['name'], {}).get('start', 0)

            params_desc = ', '.join(
                '%s(%d)' % (p['type'], p['size']) for p in target['params'])

            lines.append("-" * 100)
            lines.append("TARGET: %s" % target['name'])
            lines.append("  By-value params:    %s" % params_desc)
            lines.append("  Total by-val bytes: %d (0x%x)" % (
                target['total_by_value_bytes'], target['total_by_value_bytes']))
            lines.append("  Thunk size needed:  ~%d bytes" % thunk_size)
            lines.append("  Call sites:         %d" % len(target['call_sites']))
            lines.append("  Function address:   0x%08x" % func_addr)
            lines.append("")

            # Find suitable usable caves
            suitable = [c for c in usable_caves if c['size'] >= thunk_size]
            nearby = [c for c in suitable if abs(c['start'] - func_addr) < 0x10000]
            anywhere = sorted(suitable, key=lambda c: abs(c['start'] - func_addr))

            if nearby:
                lines.append("  NEARBY usable caves (within 64KB, size >= %d):" % thunk_size)
                for c in sorted(nearby, key=lambda c: c['size'], reverse=True)[:5]:
                    dist = abs(c['start'] - func_addr)
                    lines.append("    0x%08x  %4d bytes  (dist: %s)" % (
                        c['start'], c['size'], '{:,}'.format(dist)))
            elif anywhere:
                lines.append("  No nearby usable caves, best candidates anywhere:")
                for c in anywhere[:5]:
                    dist = abs(c['start'] - func_addr)
                    lines.append("    0x%08x  %4d bytes  (dist: %s)" % (
                        c['start'], c['size'], '{:,}'.format(dist)))
            else:
                lines.append("  NO suitable usable caves found (need %d bytes)" % thunk_size)

            lines.append("")

            # Caller savings analysis
            if target['call_sites']:
                caller_names = set(s['caller'] for s in target['call_sites'])
                lines.append("  Callers affected (%d unique):" % len(caller_names))
                for cname in sorted(caller_names):
                    sites = [s for s in target['call_sites'] if s['caller'] == cname]
                    lines.append("    %s  (%d call sites)" % (cname[:65], len(sites)))
            lines.append("")

    # =========================================================================
    # REPORT: Caller frame expansion feasibility
    # =========================================================================
    if caller_fixes:
        lines.append("=" * 100)
        lines.append("CALLER FRAME EXPANSION FEASIBILITY")
        lines.append("=" * 100)
        lines.append("")
        lines.append("Each caller that does pass-by-value needs its SUB ESP enlarged to cover")
        lines.append("the struct copies. This requires the instruction to have room to grow")
        lines.append("(or the function to be followed by a code cave for the extra bytes).")
        lines.append("")

        for fix in sorted(caller_fixes, key=lambda f: f['extra_bytes'], reverse=True):
            fi = func_info.get(fix['name'])
            if not fi:
                continue

            func_end = fi['end']
            # Find cave right after this function
            trailing_cave = None
            for c in caves:
                if c['start'] == func_end + 1:
                    trailing_cave = c
                    break

            status = "?"
            if trailing_cave:
                v = trailing_cave.get('validation', {})
                usable = is_usable(trailing_cave)
                if usable and trailing_cave['size'] >= fix['extra_bytes']:
                    status = "OK (trailing cave: %d bytes, %s)" % (
                        trailing_cave['size'], STATUS_LABELS.get(v.get('status'), '?'))
                elif usable:
                    status = "TIGHT (trailing cave: %d bytes, need %d)" % (
                        trailing_cave['size'], fix['extra_bytes'])
                else:
                    status = "REJECTED cave (%s)" % '; '.join(v.get('reasons', []))
            else:
                status = "NO trailing cave"

            lines.append("  %-55s +0x%x bytes  %s" % (
                fix['name'][:55], fix['extra_bytes'], status))

        lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, 'natural_caves_analysis.txt')
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    print("Report written to: %s" % report_path)
    print()

    # Print summary
    print("Usable natural caves: %d (%s bytes)" % (
        len(usable_caves), '{:,}'.format(usable_bytes)))
    print()
    if targets:
        print("Pass-by-value thunk summary:")
        for target in sorted(targets, key=lambda t: len(t['call_sites']), reverse=True):
            thunk_size = estimate_thunk_size(target)
            suitable = sum(1 for c in usable_caves if c['size'] >= thunk_size)
            print("  %-50s  %2d call sites  need %3d bytes  %d usable caves" % (
                target['name'][:50], len(target['call_sites']),
                thunk_size, suitable))


if __name__ == '__main__':
    main()
