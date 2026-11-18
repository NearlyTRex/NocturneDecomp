#!/usr/bin/env python3
"""Find code caves (gaps between functions) in the executable sections.

Cross-references with pass-by-value struct functions to identify caves
that could host pointer-based thunk wrappers, cleaning up decompilation
at all call sites.

Validates caves by checking:
  1. Binary byte content (padding bytes vs. non-padding)
  2. Switch table data ranges (jump tables embedded in .text)
  3. Cross-reference targets (addresses referenced by code/data)

Only gaps inside an executable section the file holds are caves: function
blocks also sit in the runtime heap block past the image, and the space
between the two is not code.

Usage:
    python find_code_caves.py [annotations_dir] [--binary PATH]
"""

import argparse
import bisect
import glob
import json
import os
import re
import struct
from collections import Counter

from extract_line_pins import parse_pe
from sibling_match import find_program_exe


# Byte values considered safe padding (not meaningful code or data)
PADDING_BYTES = {0x00, 0x90, 0xCC}

# A cross-reference target that is an address, not Stack[...] or register:...
XREF_ADDRESS_RE = re.compile(r'[0-9a-fA-F]{8}')


# ---------------------------------------------------------------------------
# PE helpers
# ---------------------------------------------------------------------------

def code_sections(sections):
    """The executable sections whose bytes are in the file."""
    return [sec for sec in sections if sec.executable and sec.has_raw_data]


def pointer_ranges_of(sections):
    """[(start, end)] of the sections the file holds, where a pointer in a jump
    table or vtable lands. .bss is left out: code fragments address its globals
    all the time, which would make every one look like data."""
    return [(sec.va, sec.va + sec.extent) for sec in sections if sec.has_raw_data]


# ---------------------------------------------------------------------------
# Cave validation
# ---------------------------------------------------------------------------

def classify_bytes(data, start, pointer_ranges):
    """Classify the bytes of a cave starting at address `start`.

    Returns a dict with:
      padding_count: bytes that are 0x00/0x90/0xCC
      non_padding_count: all other bytes
      padding_ratio: fraction of padding bytes
      has_ascii: whether there's a run of 4+ printable ASCII bytes
      has_pointers: whether an aligned dword points into pointer_ranges
      dominant_byte: the most common byte value
    """
    padding_count = sum(1 for b in data if b in PADDING_BYTES)

    # Check for ASCII strings (4+ consecutive printable bytes)
    has_ascii = False
    ascii_run = 0
    for b in data:
        ascii_run = ascii_run + 1 if 0x20 <= b < 0x7F else 0
        if ascii_run >= 4:
            has_ascii = True
            break

    # Check for embedded pointers: dwords at 4-aligned addresses, as a jump
    # table or a vtable would hold them
    has_pointers = any(
        lo <= struct.unpack_from('<I', data, i)[0] < hi
        for i in range((-start) % 4, len(data) - 3, 4)
        for lo, hi in pointer_ranges)

    return {
        'padding_count': padding_count,
        'non_padding_count': len(data) - padding_count,
        'padding_ratio': padding_count / len(data),
        'has_ascii': has_ascii,
        'has_pointers': has_pointers,
        'dominant_byte': Counter(data).most_common(1)[0][0],
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
        target_count = table.get('target_count', 0)
        if target_count <= 0:
            continue

        # Extract base address from patterns like:
        #   JMP dword ptr [EAX*0x4 + 0x40ea00]
        #   JMP dword ptr [ECX*0x4 + 0x411288]
        m = re.search(r'\+\s*(0x[0-9a-fA-F]+)\]', table.get('assembly', ''))
        if m:
            base_addr = int(m.group(1), 16)
            ranges.append((base_addr, base_addr + target_count * 4))  # dword entries

    ranges.sort()
    return ranges


def load_xref_targets(annotations_dir):
    """Load all cross-reference target addresses.

    Returns the sorted addresses that are referenced by code or data.
    """
    xref_pattern = os.path.join(annotations_dir, 'cross_references',
                                'cross_references_bucket_*.json')
    targets = set()
    for jp in sorted(glob.glob(xref_pattern)):
        with open(jp) as f:
            for xref in json.load(f):
                to_addr = xref.get('to', '')
                if XREF_ADDRESS_RE.fullmatch(to_addr):
                    targets.add(int(to_addr, 16))
    return sorted(targets)


def overlaps_range(addr_start, addr_end, range_list):
    """Check if [addr_start, addr_end) overlaps with any range in the sorted list."""
    for rstart, rend in range_list:
        if rstart >= addr_end:
            break  # sorted, no more overlaps possible
        if rend > addr_start:
            return True
    return False


def validate_cave(cave, pe_data, pointer_ranges, switch_ranges, xref_targets):
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

    # Check 2: Xref targets inside cave (xref_targets is sorted)
    xrefs_inside = bisect.bisect_left(xref_targets, end) - bisect.bisect_left(xref_targets, start)
    if xrefs_inside:
        result['status'] = 'referenced'
        result['reasons'].append('%d xref target(s) inside' % xrefs_inside)

    # Check 3: Binary byte content
    if pe_data is None:
        if result['status'] == 'unknown':
            result['reasons'].append('no binary provided for validation')
        return result

    raw = pe_data[cave['raw_offset']:cave['raw_offset'] + size]
    info = classify_bytes(raw, start, pointer_ranges)
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
                (info['padding_ratio'] * 100, info['non_padding_count'], size))

    return result


# ---------------------------------------------------------------------------
# Function range loading
# ---------------------------------------------------------------------------

def load_function_ranges(annotations_dir):
    """Load all function address ranges from the functions bucket JSONs."""
    pattern = os.path.join(annotations_dir, 'functions', 'functions_bucket_*.json')
    ranges = []  # (start, end, name)
    func_info = {}  # name -> {start, end, size}

    for jp in sorted(glob.glob(pattern)):
        with open(jp) as f:
            for func in json.load(f):
                name = func['name']
                blocks = [(int(b['start'], 16), int(b['end'], 16)) for b in func['body']]
                ranges += [(start, end, name) for start, end in blocks]
                func_info[name] = {
                    'start': min(start for start, _ in blocks),
                    'end': max(end for _, end in blocks),
                    'size': sum(b['size'] for b in func['body']),
                }

    ranges.sort()
    return ranges, func_info


def find_caves(ranges, sections=None):
    """Find gaps between consecutive function blocks.

    With the image's sections, a gap counts only inside one executable section
    the file holds, and records where its bytes sit in the file.
    """
    caves = []
    for (_, end, after), (start_b, _, before) in zip(ranges, ranges[1:]):
        end_a = end + 1  # end address is inclusive
        if start_b <= end_a:
            continue
        cave = {
            'start': end_a,
            'end': start_b,
            'size': start_b - end_a,
            'after_func': after,
            'before_func': before,
        }
        if sections is not None:
            sec = next((s for s in sections if s.va <= end_a and start_b <= s.va + s.extent), None)
            if sec is None:
                continue
            cave['raw_offset'] = sec.raw_off + end_a - sec.va
        caves.append(cave)
    return caves


# ---------------------------------------------------------------------------
# Pass-by-value analysis
# ---------------------------------------------------------------------------

def parse_pass_by_value_report(reports_dir):
    """Parse the pass-by-value report to get function info and call sites."""
    report_path = os.path.join(reports_dir, 'pass_by_value_report.txt')
    if not os.path.isfile(report_path):
        return [], []

    with open(report_path) as f:
        text = f.read()

    targets = []
    current_target = None
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
                for pm in re.finditer(r'arg\d+=(\S+)\s+\((0x[0-9a-f]+)\)', param_match.group(1)):
                    size = int(pm.group(2), 16)
                    current_target['params'].append({'type': pm.group(1), 'size': size})
                    current_target['total_by_value_bytes'] += size
                continue

            site_match = re.match(r'\s+(\S+)\s+@\s+(0x[0-9a-f]+)\s+(\d+)x\s+(\S+)', line)
            if site_match:
                current_target['call_sites'].append({
                    'caller': site_match.group(1),
                    'addr': int(site_match.group(2), 16),
                    'count': int(site_match.group(3)),
                    'type': site_match.group(4),
                })
                continue

            if line.startswith('---'):
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

SIZE_BUCKETS = [
    (1, 15, "1-15 bytes (too small for thunks)"),
    (16, 31, "16-31 bytes"),
    (32, 63, "32-63 bytes (small thunks)"),
    (64, 127, "64-127 bytes (most thunks)"),
    (128, 255, "128-255 bytes"),
    (256, 511, "256-511 bytes"),
    (512, 1023, "512-1023 bytes"),
    (1024, None, "1024+ bytes"),
]


def is_usable(cave):
    """Check if a cave is validated as usable."""
    return cave['validation']['status'] in ('clean', 'likely_clean')


def _cave_lines(caves):
    lines = []
    for c in caves:
        v = c['validation']
        lines.append("  %s bytes  0x%08x - 0x%08x  [%s] %s" % (
            '{:>6,}'.format(c['size']), c['start'], c['end'],
            STATUS_LABELS[v['status']], '; '.join(v['reasons'])))
        lines.append("    after:  %s" % c['after_func'][:70])
        lines.append("    before: %s" % c['before_func'][:70])
    return lines


def _thunk_lines(targets, usable_caves, func_info):
    lines = ["=" * 100, "PASS-BY-VALUE THUNK FEASIBILITY", "=" * 100, "",
             "Strategy: write a pointer-accepting wrapper in a code cave that copies",
             "structs onto the stack and calls the original function. Then patch callers",
             "to pass pointers to the thunk instead of doing inline REP MOVSD copies.",
             "NOTE: Only validated usable caves are considered.", ""]

    for target in sorted(targets, key=lambda t: len(t['call_sites']), reverse=True):
        thunk_size = estimate_thunk_size(target)
        # A stale report can name a function since renamed
        func_addr = func_info.get(target['name'], {}).get('start', 0)
        params_desc = ', '.join('%s(%d)' % (p['type'], p['size']) for p in target['params'])

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
            shown = sorted(nearby, key=lambda c: c['size'], reverse=True)[:5]
        elif anywhere:
            lines.append("  No nearby usable caves, best candidates anywhere:")
            shown = anywhere[:5]
        else:
            lines.append("  NO suitable usable caves found (need %d bytes)" % thunk_size)
            shown = []
        for c in shown:
            lines.append("    0x%08x  %4d bytes  (dist: %s)" % (
                c['start'], c['size'], '{:,}'.format(abs(c['start'] - func_addr))))
        lines.append("")

        # Caller savings analysis
        if target['call_sites']:
            caller_names = set(s['caller'] for s in target['call_sites'])
            lines.append("  Callers affected (%d unique):" % len(caller_names))
            for cname in sorted(caller_names):
                sites = [s for s in target['call_sites'] if s['caller'] == cname]
                lines.append("    %s  (%d call sites)" % (cname[:65], len(sites)))
        lines.append("")
    return lines


def _frame_fix_lines(caller_fixes, caves, func_info):
    lines = ["=" * 100, "CALLER FRAME EXPANSION FEASIBILITY", "=" * 100, "",
             "Each caller that does pass-by-value needs its SUB ESP enlarged to cover",
             "the struct copies. This requires the instruction to have room to grow",
             "(or the function to be followed by a code cave for the extra bytes).", ""]
    cave_at = {c['start']: c for c in caves}

    for fix in sorted(caller_fixes, key=lambda f: f['extra_bytes'], reverse=True):
        fi = func_info.get(fix['name'])
        if not fi:
            continue  # a stale report can name a function since renamed

        trailing_cave = cave_at.get(fi['end'] + 1)
        if trailing_cave is None:
            status = "NO trailing cave"
        else:
            v = trailing_cave['validation']
            if not is_usable(trailing_cave):
                status = "REJECTED cave (%s)" % '; '.join(v['reasons'])
            elif trailing_cave['size'] >= fix['extra_bytes']:
                status = "OK (trailing cave: %d bytes, %s)" % (
                    trailing_cave['size'], STATUS_LABELS[v['status']])
            else:
                status = "TIGHT (trailing cave: %d bytes, need %d)" % (
                    trailing_cave['size'], fix['extra_bytes'])

        lines.append("  %-55s +0x%x bytes  %s" % (fix['name'][:55], fix['extra_bytes'], status))

    lines.append("")
    return lines


def build_report(caves, targets, caller_fixes, func_info):
    """The report's lines."""
    usable_caves = [c for c in caves if is_usable(c)]
    lines = ["=" * 100, "CODE CAVE ANALYSIS (WITH VALIDATION)", "=" * 100, ""]

    lines.append("Total caves:              %d (%s bytes)" % (
        len(caves), '{:,}'.format(sum(c['size'] for c in caves))))
    lines.append("Validated usable:         %d (%s bytes)" % (
        len(usable_caves), '{:,}'.format(sum(c['size'] for c in usable_caves))))
    lines.append("")

    lines += ["-" * 100, "VALIDATION STATUS BREAKDOWN", "-" * 100]
    for status in ['clean', 'likely_clean', 'suspicious', 'data', 'referenced', 'unknown']:
        matching = [c for c in caves if c['validation']['status'] == status]
        if matching:
            lines.append("  %-12s  %4d caves  %s bytes" % (
                STATUS_LABELS[status], len(matching),
                '{:>8,}'.format(sum(c['size'] for c in matching))))
    lines.append("")

    lines += ["-" * 100, "USABLE CAVE SIZE DISTRIBUTION", "-" * 100]
    for low, high, label in SIZE_BUCKETS:
        matching = [c for c in usable_caves if low <= c['size'] and (high is None or c['size'] <= high)]
        if matching:
            lines.append("  %-45s  %4d caves  %s bytes" % (
                label, len(matching), '{:>8,}'.format(sum(c['size'] for c in matching))))
    lines.append("")

    lines += ["-" * 100, "LARGEST USABLE CAVES (top 30)", "-" * 100]
    lines += _cave_lines(sorted(usable_caves, key=lambda c: c['size'], reverse=True)[:30])
    lines.append("")

    rejected = [c for c in caves if not is_usable(c) and c['size'] >= 16]
    if rejected:
        lines += ["-" * 100, "LARGEST REJECTED CAVES (top 30, >= 16 bytes)", "-" * 100]
        lines += _cave_lines(sorted(rejected, key=lambda c: c['size'], reverse=True)[:30])
        lines.append("")

    if targets:
        lines += _thunk_lines(targets, usable_caves, func_info)
    if caller_fixes:
        lines += _frame_fix_lines(caller_fixes, caves, func_info)
    return lines


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def find_binary(annotations_dir):
    """The program's binary under bin/, matched by the MD5 in its metadata, or None."""
    try:
        return find_program_exe(os.path.basename(annotations_dir))
    except FileNotFoundError:
        return None


def main(argv=None):
    parser = argparse.ArgumentParser(
        description="Find and validate code caves in the executable sections")
    parser.add_argument("annotations_dir", nargs='?', default=None,
                        help="Path to annotations directory")
    parser.add_argument("--binary", type=str, default=None,
                        help="Path to the PE binary (default: the program's under bin/)")
    parser.add_argument("--min-size", type=int, default=1,
                        help="Minimum cave size to include (default: 1)")
    args = parser.parse_args(argv)
    if args.binary and not os.path.isfile(args.binary):
        parser.error("no such binary: %s" % args.binary)

    if args.annotations_dir:
        annotations_dir = os.path.abspath(args.annotations_dir)
    else:
        repo_root = os.path.dirname(os.path.dirname(os.path.dirname(
            os.path.abspath(__file__))))
        annotations_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe')

    reports_dir = os.path.join(annotations_dir, 'reports')

    # Binary
    binary_path = args.binary or find_binary(annotations_dir)
    pe_data = None
    sections = None
    pointer_ranges = []
    if binary_path:
        with open(binary_path, 'rb') as f:
            pe_data = f.read()
        image_base, all_sections = parse_pe(pe_data)
        sections = code_sections(all_sections)
        pointer_ranges = pointer_ranges_of(all_sections)
        print("Binary: %s" % binary_path)
        print("  Image base: 0x%08x, %d sections, %d executable" % (
            image_base, len(all_sections), len(sections)))
    else:
        print("WARNING: No binary found. Byte validation disabled, and caves are not")
        print("  limited to the executable sections. Use --binary to name the PE.")

    # Load function ranges
    print("Loading function ranges...")
    ranges, func_info = load_function_ranges(annotations_dir)
    print("  %d function blocks loaded" % len(ranges))

    caves = [c for c in find_caves(ranges, sections) if c['size'] >= args.min_size]
    print("  %d caves found (%s bytes total)" % (
        len(caves), '{:,}'.format(sum(c['size'] for c in caves))))

    # Load validation data
    print("Loading validation data...")
    switch_ranges = load_switch_table_ranges(annotations_dir)
    print("  %d switch table data ranges loaded" % len(switch_ranges))
    xref_targets = load_xref_targets(annotations_dir)
    print("  %d unique xref targets loaded" % len(xref_targets))

    # Validate all caves
    print("Validating caves...")
    status_counts = Counter()
    for cave in caves:
        cave['validation'] = validate_cave(cave, pe_data, pointer_ranges, switch_ranges, xref_targets)
        status_counts[cave['validation']['status']] += 1

    for status in sorted(status_counts, key=STATUS_ORDER.get):
        print("  %-12s %d" % (STATUS_LABELS[status], status_counts[status]))

    # Parse pass-by-value report
    targets, caller_fixes = parse_pass_by_value_report(reports_dir)
    print("  %d pass-by-value target functions" % len(targets))
    print("  %d callers needing frame fixes" % len(caller_fixes))
    print()

    report_path = os.path.join(reports_dir, 'natural_caves_analysis.txt')
    with open(report_path, 'w') as f:
        f.write('\n'.join(build_report(caves, targets, caller_fixes, func_info)) + '\n')
    print("Report written to: %s" % report_path)
    print()

    usable_caves = [c for c in caves if is_usable(c)]
    print("Usable natural caves: %d (%s bytes)" % (
        len(usable_caves), '{:,}'.format(sum(c['size'] for c in usable_caves))))
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
