#!/usr/bin/env python3
"""Find code caves (gaps between functions) in the .text section.

Cross-references with pass-by-value struct functions to identify caves
that could host pointer-based thunk wrappers, cleaning up decompilation
at all call sites.

Usage:
    python find_code_caves.py [annotations_dir]
"""

import json
import glob
import os
import re
import sys
from collections import defaultdict


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


def main():
    if len(sys.argv) > 1:
        annotations_dir = os.path.abspath(sys.argv[1])
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

    # Parse pass-by-value report
    targets, caller_fixes = parse_pass_by_value_report(reports_dir)
    print("  %d pass-by-value target functions" % len(targets))
    print("  %d callers needing frame fixes" % len(caller_fixes))
    print()

    # =========================================================================
    # REPORT: All code caves
    # =========================================================================
    lines = []
    lines.append("=" * 90)
    lines.append("CODE CAVE ANALYSIS")
    lines.append("=" * 90)
    lines.append("")

    # Summary
    lines.append("Total code caves:          %d" % len(caves))
    lines.append("Total cave bytes:          %s" % '{:,}'.format(sum(c['size'] for c in caves)))
    lines.append("")

    # Size distribution
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

    lines.append("-" * 90)
    lines.append("CAVE SIZE DISTRIBUTION")
    lines.append("-" * 90)
    for low, high, label in buckets:
        if high is None:
            count = sum(1 for c in caves if c['size'] >= low)
            total = sum(c['size'] for c in caves if c['size'] >= low)
        else:
            count = sum(1 for c in caves if low <= c['size'] <= high)
            total = sum(c['size'] for c in caves if low <= c['size'] <= high)
        if count > 0:
            lines.append("  %-45s  %4d caves  %s bytes" % (
                label, count, '{:>8,}'.format(total)))
    lines.append("")

    # Top caves
    caves_by_size = sorted(caves, key=lambda c: c['size'], reverse=True)
    lines.append("-" * 90)
    lines.append("LARGEST CAVES (top 30)")
    lines.append("-" * 90)
    for c in caves_by_size[:30]:
        lines.append("  %s bytes  0x%08x - 0x%08x" % (
            '{:>6,}'.format(c['size']), c['start'], c['end']))
        lines.append("    after:  %s" % c['after_func'][:70])
        lines.append("    before: %s" % c['before_func'][:70])
    lines.append("")

    # =========================================================================
    # REPORT: Pass-by-value thunk feasibility
    # =========================================================================
    if targets:
        lines.append("=" * 90)
        lines.append("PASS-BY-VALUE THUNK FEASIBILITY")
        lines.append("=" * 90)
        lines.append("")
        lines.append("Strategy: write a pointer-accepting wrapper in a code cave that copies")
        lines.append("structs onto the stack and calls the original function. Then patch callers")
        lines.append("to pass pointers to the thunk instead of doing inline REP MOVSD copies.")
        lines.append("")

        for target in sorted(targets, key=lambda t: len(t['call_sites']), reverse=True):
            thunk_size = estimate_thunk_size(target)
            func_addr = func_info.get(target['name'], {}).get('start', 0)

            params_desc = ', '.join(
                '%s(%d)' % (p['type'], p['size']) for p in target['params'])

            lines.append("-" * 90)
            lines.append("TARGET: %s" % target['name'])
            lines.append("  By-value params:    %s" % params_desc)
            lines.append("  Total by-val bytes: %d (0x%x)" % (
                target['total_by_value_bytes'], target['total_by_value_bytes']))
            lines.append("  Thunk size needed:  ~%d bytes" % thunk_size)
            lines.append("  Call sites:         %d" % len(target['call_sites']))
            lines.append("  Function address:   0x%08x" % func_addr)
            lines.append("")

            # Find suitable caves
            # A thunk can use a rel32 CALL, so distance doesn't matter for x86
            # But we prefer caves near the target for cache locality
            suitable = [c for c in caves if c['size'] >= thunk_size]
            nearby = [c for c in suitable if abs(c['start'] - func_addr) < 0x10000]
            anywhere = sorted(suitable, key=lambda c: abs(c['start'] - func_addr))

            if nearby:
                lines.append("  NEARBY caves (within 64KB, size >= %d):" % thunk_size)
                for c in sorted(nearby, key=lambda c: c['size'], reverse=True)[:5]:
                    dist = abs(c['start'] - func_addr)
                    lines.append("    0x%08x  %4d bytes  (dist: %s)" % (
                        c['start'], c['size'], '{:,}'.format(dist)))
            elif anywhere:
                lines.append("  No nearby caves, best candidates anywhere:")
                for c in anywhere[:5]:
                    dist = abs(c['start'] - func_addr)
                    lines.append("    0x%08x  %4d bytes  (dist: %s)" % (
                        c['start'], c['size'], '{:,}'.format(dist)))
            else:
                lines.append("  NO suitable caves found (need %d bytes)" % thunk_size)

            lines.append("")

            # Caller savings analysis
            if target['call_sites']:
                # Each caller currently does:
                #   per by-val param: SUB ESP + LEA ESI + MOV EDI,ESP + MOV ECX + REP MOVSD
                # With thunk: just PUSH pointer (LEA + PUSH = ~7 bytes per param)
                # The savings are in decompiler clarity, not just bytes
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
        lines.append("=" * 90)
        lines.append("CALLER FRAME EXPANSION FEASIBILITY")
        lines.append("=" * 90)
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
            if trailing_cave and trailing_cave['size'] >= fix['extra_bytes']:
                status = "OK (trailing cave: %d bytes)" % trailing_cave['size']
            elif trailing_cave:
                status = "TIGHT (trailing cave: %d bytes, need %d)" % (
                    trailing_cave['size'], fix['extra_bytes'])
            else:
                status = "NO trailing cave"

            lines.append("  %-55s +0x%x bytes  %s" % (
                fix['name'][:55], fix['extra_bytes'], status))

        lines.append("")

    # Write report
    report_path = os.path.join(reports_dir, 'code_cave_analysis.txt')
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    print("Report written to: %s" % report_path)
    print()

    # Print summary
    if targets:
        print("Pass-by-value thunk summary:")
        for target in sorted(targets, key=lambda t: len(t['call_sites']), reverse=True):
            thunk_size = estimate_thunk_size(target)
            suitable = sum(1 for c in caves if c['size'] >= thunk_size)
            print("  %-50s  %2d call sites  need %3d bytes  %d caves available" % (
                target['name'][:50], len(target['call_sites']),
                thunk_size, suitable))


if __name__ == '__main__':
    main()
