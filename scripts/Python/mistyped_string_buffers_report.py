#!/usr/bin/env python3
"""Report candidate mistyped string buffers in Ghidra's decompilation.

Watcom's original binary sometimes declares a fixed-size char buffer and
initializes it with a short string literal plus zero padding, e.g.:

    char g_BufName[260] = ".\\GroundTypes";

Ghidra's auto-analysis misreads these as a C string literal of length N
(the short string) rather than the N-byte mutable buffer they actually are.
Our exporter then emits them as `TerminatedCString g_X = "...";` — a
const char* pointing into .rodata — and any call site that writes into the
buffer crashes at runtime.

This script finds candidates by scanning the `.asm` output for Watcom
`MOVS[BWD].REP` string-copy primitives that READ FROM a `TerminatedCString`
source with a byte count larger than the string's declared length. Those
are the globals that Ghidra thinks are 5 bytes but the code treats as N.

Emits a markdown report with the suggested retype for each finding.

Usage:
    python3 scripts/Python/mistyped_string_buffers_report.py [annotations_root]
"""

import argparse
import json
import os
import re
import sys
from collections import defaultdict


# MOVSD.REP / MOVSW.REP / MOVSB.REP copies ECX dwords/words/bytes from [ESI]
# to [EDI]. The `.asm` output annotates the source symbol on the MOVS line:
#   MOVSD.REP ES:EDI,ESI                ; 0058fdcf | = "gore" | s_gore_00681878+4
MOVS_RE = re.compile(
    r'\bMOVS([BWD])\.REP\s+ES:EDI,ESI\s*;\s*[0-9a-f]+\s*'
    r'(?:\|\s*=\s*"[^"]*"\s*)?'
    r'\|\s*([A-Za-z_][A-Za-z_0-9]*)(?:\+\d+)?',
    re.IGNORECASE,
)

# Preceding setup instructions. We want the most recent ECX and ESI sets
# before the MOVS.
MOV_ECX_RE = re.compile(
    r'\bMOV\s+ECX\s*,\s*(0x[0-9a-fA-F]+|\d+)\b',
    re.IGNORECASE,
)
MOV_ESI_RE = re.compile(
    r'\bMOV\s+ESI\s*,\s*(0x[0-9a-fA-F]+|\d+)\b',
    re.IGNORECASE,
)

# Call-site size pattern scanning (`PUSH <size> ; PUSH <buffer>` in a cdecl arg
# list). We need three ingredients to identify one:
#   1. A CALL <target> (delimiter — args reset at this boundary).
#   2. A PUSH of a symbol address (direct immediate `PUSH 0xADDR` or via
#      a register that was just loaded with the address).
#   3. A PUSH of an immediate in a plausible-buffer-size range.
# If the TerminatedCString and a plausible size appear in the same PUSH
# block that ends in CALL, the size is the most likely buffer size.

MOV_REG_IMM_RE = re.compile(
    r'\bMOV\s+(E[ABCDIS][IPX])\s*,\s*(0x[0-9a-fA-F]+|\d+)\b',
    re.IGNORECASE,
)
PUSH_IMM_RE = re.compile(
    r'\bPUSH\s+(0x[0-9a-fA-F]+|\d+)\b',
    re.IGNORECASE,
)
PUSH_REG_RE = re.compile(
    r'\bPUSH\s+(E[ABCDIS][IPX])\b',
    re.IGNORECASE,
)

# Plausible mutable-string-buffer sizes. Naïve "any integer in [8, 8192]"
# picks up every line-number arg to error-reporting functions
# (displayErrorAndQuit, traceFile, …) because those happen to fit too.
# A whitelist of common buffer sizes is much cleaner: powers of 2 plus a
# handful of well-known non-power-of-2 sizes (MAX_PATH=260, 500, 1000,
# 100/200/300 which are typical Watcom paths).
PLAUSIBLE_BUFFER_SIZES = frozenset({
    16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192,   # powers of 2
    24, 40, 48, 80, 96, 160,                              # smaller round
    100, 128, 200, 256, 260, 300, 400, 500, 600, 768,
    1000, 1024, 1536, 2048, 4000, 4096,
})
MIN_SIZE = 8
MAX_SIZE = 8192

STRIDE_BY_SIZE = {'B': 1, 'W': 2, 'D': 4}


def parse_immediate(s):
    """Parse '0x19' or '25' as an int."""
    try:
        return int(s, 0)
    except ValueError:
        return None


def scan_asm_file(path, movs_findings_by_symbol, callsite_findings_by_addr):
    """Scan one .asm file for buffer patterns.

    Two patterns:
      - movs_findings_by_symbol: MOVS.REP copies reading N bytes from a
        named symbol. Keyed by symbol name.
      - callsite_findings_by_addr: A CALL whose arg list contains both a
        symbol address and a plausible buffer-size immediate. Keyed by
        the *address* that was pushed (so we can join against the symbol
        address table afterwards — cheaper than pattern-matching names).
    """
    try:
        with open(path) as f:
            lines = f.readlines()
    except (OSError, UnicodeDecodeError):
        return

    # MOVS.REP state (ECX / ESI must survive until the MOVS line).
    last_ecx = None
    last_esi = None

    # Call-site pattern state. reg_imm: last immediate loaded into a register
    # since the last CALL. pushes: list of immediate values (or None for
    # unknown) pushed since the last CALL, in call order (most recent last).
    reg_imm = {}
    pushes = []

    for line in lines:
        # --- MOVS.REP tracking (state reset on CALL below) ---
        ecx_match = MOV_ECX_RE.search(line)
        if ecx_match:
            last_ecx = parse_immediate(ecx_match.group(1))
        esi_match = MOV_ESI_RE.search(line)
        if esi_match:
            last_esi = parse_immediate(esi_match.group(1))

        # --- Call-site PUSH tracking ---
        mov_reg = MOV_REG_IMM_RE.search(line)
        if mov_reg:
            reg_imm[mov_reg.group(1).upper()] = parse_immediate(mov_reg.group(2))

        push_imm = PUSH_IMM_RE.search(line)
        if push_imm:
            pushes.append(parse_immediate(push_imm.group(1)))
        else:
            push_reg = PUSH_REG_RE.search(line)
            if push_reg:
                pushes.append(reg_imm.get(push_reg.group(1).upper()))

        # --- MOVS.REP match ---
        movs_match = MOVS_RE.search(line)
        if movs_match:
            size_char = movs_match.group(1).upper()
            symbol = movs_match.group(2)
            stride = STRIDE_BY_SIZE.get(size_char, 0)
            if last_ecx is not None and stride and symbol:
                movs_findings_by_symbol[symbol].append({
                    'path': path,
                    'byte_count': last_ecx * stride,
                    'stride': stride,
                    'ecx': last_ecx,
                    'size_char': size_char,
                    'src_addr': last_esi,
                })

        # --- CALL boundary: process arg list, then reset state ---
        if re.search(r'\bCALL\b', line):
            # Find (addr_pushed, size_pushed) pairs in the arg list. An arg
            # is a "buffer size" if it lands in [MIN_SIZE, MAX_SIZE] and
            # doesn't look like an address (addresses are usually >= 0x10000
            # in this binary; sizes are below that).
            addr_args = [v for v in pushes if v is not None and v >= 0x10000]
            size_args = [v for v in pushes if v in PLAUSIBLE_BUFFER_SIZES]
            # Record each (addr, size) combination we see here. If there's
            # ambiguity (multiple sizes), we let the reporter collect them
            # all and pick the most-frequent across call sites.
            for addr in addr_args:
                for size in size_args:
                    callsite_findings_by_addr[addr].append({
                        'path': path,
                        'size': size,
                        'other_args': [v for v in pushes if v != addr],
                    })
            # Reset call-level state. Registers are clobbered, PUSH list
            # is consumed, and MOVS-tracking also restarts (ECX/ESI clobbered).
            last_ecx = None
            last_esi = None
            reg_imm = {}
            pushes = []


def load_terminated_cstrings(pseudocode_root):
    """Parse globals / constants headers for `TerminatedCString <name> = "...";`.

    Returns {name: {'declared_len': int, 'string': str, 'origin': path}}.
    """
    pattern = re.compile(
        r'(?:^|[^A-Za-z_0-9])TerminatedCString\s+([A-Za-z_][A-Za-z_0-9]*)\s*'
        r'=\s*"((?:[^"\\]|\\.)*)"\s*;'
    )
    result = {}
    roots = [
        os.path.join(pseudocode_root, 'include', 'constants'),
        os.path.join(pseudocode_root, 'include', 'globals'),
        os.path.join(pseudocode_root, 'src', 'globals'),
        os.path.join(pseudocode_root, 'src', 'constants'),
    ]
    for root in roots:
        if not os.path.isdir(root):
            continue
        for name in os.listdir(root):
            if not (name.endswith('.h') or name.endswith('.cpp')):
                continue
            p = os.path.join(root, name)
            with open(p) as f:
                content = f.read()
            for m in pattern.finditer(content):
                sym = m.group(1)
                # Decoded C-string length: unescape \x / \n / \\ / \" etc.
                # Good enough to approximate; we just need "actual string
                # length including null" vs "bytes copied".
                raw = m.group(2)
                try:
                    decoded = bytes(raw, 'utf-8').decode('unicode_escape', errors='replace')
                except Exception:
                    decoded = raw
                result.setdefault(sym, {
                    'declared_len': len(decoded) + 1,  # +1 for null terminator
                    'string': decoded,
                    'origin': p,
                })
    return result


def load_symbol_addresses(annotations_root):
    """Return {name: addr_int} from all symbols_label bucket JSONs."""
    symbols_dir = os.path.join(annotations_root, 'symbols_label')
    if not os.path.isdir(symbols_dir):
        return {}
    result = {}
    for name in sorted(os.listdir(symbols_dir)):
        if not name.endswith('.json') or name.endswith('_buckets.json'):
            continue
        with open(os.path.join(symbols_dir, name)) as f:
            entries = json.load(f)
        for e in entries:
            nm = e.get('name')
            ad = e.get('addr')
            if not nm or not ad:
                continue
            try:
                result[nm] = int(ad, 16)
            except ValueError:
                pass
    return result


# Ghidra auto-labels (s_, DAT_, etc.) that might appear interspersed inside
# a real buffer's byte range. For the layout-gap heuristic we skip them when
# computing "distance to the next real named symbol after this string".
_AUTOLABEL_PREFIXES = ('s_', 'DAT_', 'u_', 'UNK_')


def find_layout_gap_candidates(tcs, addr_by_name):
    """Flag TerminatedCStrings whose gap to the next named symbol exceeds
    their declared length — almost certainly a fixed-size char buffer the
    original binary zero-padded past the string's null terminator.

    Returns list of dicts with 'name', 'addr', 'gap', 'string', 'declared_len'.
    """
    # Build a flat sorted (addr, name) list so "next named symbol after X"
    # is an O(1) lookup.
    sorted_syms = sorted(
        ((a, n) for n, a in addr_by_name.items()),
        key=lambda t: t[0],
    )
    # Index by address for fast linear scan
    candidates = []
    for i, (addr, name) in enumerate(sorted_syms):
        info = tcs.get(name)
        if info is None:
            continue
        # Find the immediate next symbol of any kind. Using the nearest
        # symbol (autolabel or named) gives the tightest upper bound on
        # the buffer — an autolabel inside the "gap" would indicate a
        # separate item, not zero-padding we can absorb into this buffer.
        j = i + 1
        next_name = None
        next_addr = None
        while j < len(sorted_syms):
            cand_addr, cand_name = sorted_syms[j]
            if cand_addr == addr:
                j += 1  # alias at the same address, skip
                continue
            next_name = cand_name
            next_addr = cand_addr
            break
        if next_addr is None:
            continue
        gap = next_addr - addr
        # Natural data-segment alignment pads up to 7 bytes. Only flag when
        # the excess past the string's null terminator exceeds that so we
        # don't drown in alignment noise. Real fixed-size buffers typically
        # exceed 8 bytes of post-string padding.
        EXCESS_THRESHOLD = 8
        excess = gap - info['declared_len']
        if excess < EXCESS_THRESHOLD:
            continue
        candidates.append({
            'name': name,
            'addr': addr,
            'gap': gap,
            'excess': excess,
            'declared_len': info['declared_len'],
            'string': info['string'],
            'next_name': next_name,
            'next_addr': next_addr,
        })
    return candidates


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('annotations_root', nargs='?',
                    default=None,
                    help='e.g. annotations/nocedit.exe/ (auto-detected if omitted)')
    args = ap.parse_args()

    here = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(here, '..', '..'))
    annotations_root = args.annotations_root or os.path.join(
        repo_root, 'annotations', 'nocedit.exe',
    )
    pseudocode_root = os.path.join(annotations_root, 'pseudocode')
    src_root = os.path.join(pseudocode_root, 'src')
    reports_dir = os.path.join(annotations_root, 'reports')
    os.makedirs(reports_dir, exist_ok=True)

    print('Loading TerminatedCString declarations…')
    tcs = load_terminated_cstrings(pseudocode_root)
    print('  %d TerminatedCString globals/constants' % len(tcs))

    print('Loading symbol address table…')
    addr_by_name = load_symbol_addresses(annotations_root)
    print('  %d named symbols' % len(addr_by_name))

    print('Scanning .asm files for buffer patterns…')
    findings_by_symbol = defaultdict(list)
    callsite_findings_by_addr = defaultdict(list)
    asm_count = 0
    for root, _dirs, files in os.walk(src_root):
        for name in files:
            if not name.endswith('.asm'):
                continue
            asm_count += 1
            scan_asm_file(
                os.path.join(root, name),
                findings_by_symbol,
                callsite_findings_by_addr,
            )
    print('  %d .asm files scanned' % asm_count)
    print('  %d MOVS.REP findings, %d call-site findings' % (
        sum(len(v) for v in findings_by_symbol.values()),
        sum(len(v) for v in callsite_findings_by_addr.values()),
    ))

    # Join call-site findings to TerminatedCString symbols by address.
    name_by_addr = {addr: name for name, addr in addr_by_name.items()}
    callsite_by_symbol = defaultdict(list)
    for addr, sites in callsite_findings_by_addr.items():
        sym = name_by_addr.get(addr)
        if sym and sym in tcs:
            callsite_by_symbol[sym].extend(sites)

    print('Computing layout-gap candidates…')
    layout_candidates = find_layout_gap_candidates(tcs, addr_by_name)
    print('  %d gap candidates' % len(layout_candidates))

    # Classify MOVS findings.
    confirmed = []   # symbol IS a TerminatedCString and bytes_copied > declared_len
    noise = []       # symbol is in our TerminatedCString set but bytes match (string only)
    unknown = []     # symbol isn't a TerminatedCString we know about
    for sym, sites in findings_by_symbol.items():
        info = tcs.get(sym)
        max_bytes = max(site['byte_count'] for site in sites)
        if not info:
            unknown.append((sym, sites, max_bytes))
            continue
        if max_bytes > info['declared_len']:
            confirmed.append((sym, info, sites, max_bytes))
        else:
            noise.append((sym, info, sites, max_bytes))

    # Classify call-site findings. A symbol is "confirmed-callsite" when
    # the buffer size pushed alongside it exceeds the declared string
    # length — that's the same condition as confirmed MOVS, just from a
    # different source of truth.
    #
    # Exclude strings whose VALUE makes them obvious non-buffers:
    #   - source file paths (..\\module\\file.cpp) — pushed with line
    #     numbers that coincidentally match buffer-size immediates.
    #   - Any string longer than BUFFER_DEFAULT_MAX chars. Real mistyped
    #     buffers are initialized to short default paths/filenames
    #     ("t:\\", "data", "(file error)", "10.0.0.105"). Anything longer
    #     is almost always a prompt, format string, or error message
    #     that gets pushed adjacent to an unrelated buffer-size arg.
    BUFFER_DEFAULT_MAX = 16
    SOURCE_PATH_RE = re.compile(r'^\.{1,2}\\\\|\.(cpp|c|h|hpp|asm)$',
                                re.IGNORECASE)

    def looks_like_non_buffer(s):
        if not s:
            return True
        if SOURCE_PATH_RE.search(s):
            return True
        if len(s) > BUFFER_DEFAULT_MAX:
            return True
        return False

    callsite_confirmed = []
    for sym, sites in callsite_by_symbol.items():
        info = tcs.get(sym)
        if not info:
            continue
        if looks_like_non_buffer(info['string']):
            continue
        max_size = max(s['size'] for s in sites)
        if max_size > info['declared_len']:
            callsite_confirmed.append((sym, info, sites, max_size))

    # A symbol appearing in BOTH confirmed lists gets deduped — it's one
    # finding corroborated by two sources of truth. Keep the MOVS one
    # (definitive byte count) and annotate.
    movs_symbols = {sym for sym, _, _, _ in confirmed}
    callsite_only = [t for t in callsite_confirmed if t[0] not in movs_symbols]

    lines = []
    lines.append('# Mistyped String Buffer Report')
    lines.append('')
    lines.append('Candidates where a `TerminatedCString` global is copied via Watcom\'s')
    lines.append('`MOVS[BWD].REP` primitive with a byte count larger than the declared')
    lines.append('string length. Ghidra treated these as string literals, but the original')
    lines.append('binary declared them as fixed-size mutable buffers; writes through the')
    lines.append('pointer crash on `.rodata`, and reads past the declared length pull')
    lines.append('garbage from adjacent memory.')
    lines.append('')
    lines.append('Fix each in Ghidra: retype from `TerminatedCString` to `char[N]` where N')
    lines.append('matches the "Bytes copied" column below. Re-export; the `.cpp` declaration')
    lines.append('will become `char g_X[N] = "…";` (writable buffer, zero-padded).')
    lines.append('')
    lines.append('## Summary')
    lines.append('')
    lines.append('- **Confirmed via MOVS.REP** (definitive): %d globals — bytes copied > declared string length' % len(confirmed))
    lines.append('- **Confirmed via call-site size** (strong): %d globals — pushed as arg to a function alongside a plausible-buffer-size immediate' % len(callsite_only))
    lines.append('- **Layout-gap candidates** (heuristic): %d globals — distance to next named symbol exceeds declared length, suggesting zero-padded buffer' % len(layout_candidates))
    lines.append('- **Safe reads**: %d globals (bytes copied ≤ declared length; no action)' % len(noise))
    lines.append('- **Unknown symbols**: %d references to symbols that aren\'t TerminatedCString' % len(unknown))
    lines.append('')
    lines.append('> MOVS.REP findings are definitive — the byte count comes directly from the')
    lines.append('> copy instruction. Layout-gap candidates are heuristic: Ghidra may have')
    lines.append('> simply failed to label intervening data as anything, so the gap is an')
    lines.append('> *upper bound* on the real buffer size. Verify in Ghidra that the gap is')
    lines.append('> all zero-padding before retyping, and use that observed size (not the raw')
    lines.append('> gap) for the `char[N]`.')
    lines.append('')
    lines.append('## Confirmed retype candidates')
    lines.append('')
    if confirmed:
        # Sort by max bytes descending for visibility of the biggest buffers.
        for sym, info, sites, max_bytes in sorted(
            confirmed, key=lambda t: -t[3],
        ):
            addr_str = ''
            # Extract the original-binary addr from the symbol name if present
            addr_m = re.search(r'_([0-9a-f]{6,8})$', sym)
            if addr_m:
                addr_str = ' (orig addr `0x%s`)' % addr_m.group(1)
            lines.append('### `%s`%s' % (sym, addr_str))
            lines.append('')
            lines.append('- String: `"%s"` (declared length %d incl. null)' % (
                info['string'].replace('"', '\\"').replace('\n', '\\n'),
                info['declared_len'],
            ))
            lines.append('- Bytes copied: **%d** (largest across %d call site%s)' % (
                max_bytes, len(sites), 's' if len(sites) != 1 else '',
            ))
            lines.append('- Suggested retype: `char %s[%d] = "%s";`' % (
                sym, max_bytes,
                info['string'].replace('"', '\\"').replace('\n', '\\n'),
            ))
            lines.append('- Sites:')
            for site in sorted(sites, key=lambda s: s['path']):
                rel = os.path.relpath(site['path'], repo_root)
                lines.append('  - `%s` (MOVS%s.REP, ECX=%d → %d bytes)' % (
                    rel, site['size_char'], site['ecx'], site['byte_count'],
                ))
            lines.append('')
    else:
        lines.append('*(none)*')
        lines.append('')

    lines.append('## Confirmed via call-site size pattern')
    lines.append('')
    lines.append('Globals pushed to a CALL as an argument alongside an immediate in the range')
    lines.append('[%d, %d] that\'s larger than the declared string length. The immediate is' % (MIN_SIZE, MAX_SIZE))
    lines.append('almost always the buffer-size parameter of the callee (e.g. dialog prompt,')
    lines.append('`fgets`, `snprintf`, etc.). Use the size that\'s most frequent across sites;')
    lines.append('if sites disagree, the MAX is the correct buffer length.')
    lines.append('')
    if callsite_only:
        for sym, info, sites, max_size in sorted(
            callsite_only, key=lambda t: -t[3],
        ):
            size_counts = defaultdict(int)
            for s in sites:
                size_counts[s['size']] += 1
            size_summary = ', '.join(
                '%d×%d' % (count, size)
                for size, count in sorted(size_counts.items(), key=lambda kv: -kv[1])
            )
            lines.append('### `%s`' % sym)
            lines.append('')
            lines.append('- String: `"%s"` (declared length %d incl. null)' % (
                info['string'].replace('"', '\\"').replace('\n', '\\n'),
                info['declared_len'],
            ))
            lines.append('- Sizes observed across %d call site%s: %s (buffer size = **%d**)' % (
                len(sites), 's' if len(sites) != 1 else '',
                size_summary, max_size,
            ))
            lines.append('- Suggested retype: `char %s[%d] = "%s";`' % (
                sym, max_size,
                info['string'].replace('"', '\\"').replace('\n', '\\n'),
            ))
            lines.append('- Sites:')
            seen_paths = set()
            for site in sorted(sites, key=lambda s: (s['path'], s['size'])):
                rel = os.path.relpath(site['path'], repo_root)
                key = (rel, site['size'])
                if key in seen_paths:
                    continue
                seen_paths.add(key)
                lines.append('  - `%s` (pushed alongside size %d)' % (rel, site['size']))
            lines.append('')
    else:
        lines.append('*(none)*')
        lines.append('')

    lines.append('## Layout-gap candidates (heuristic — verify in Ghidra before retyping)')
    lines.append('')
    if layout_candidates:
        # Sort by excess descending (most suspicious / biggest buffers first).
        for cand in sorted(layout_candidates, key=lambda c: -c['excess']):
            lines.append('### `%s` (addr `0x%06x`)' % (cand['name'], cand['addr']))
            lines.append('')
            lines.append('- String: `"%s"` (declared length %d incl. null)' % (
                cand['string'].replace('"', '\\"').replace('\n', '\\n'),
                cand['declared_len'],
            ))
            lines.append('- Gap to next named symbol (`%s` @ `0x%06x`): **%d bytes**' % (
                cand['next_name'], cand['next_addr'], cand['gap'],
            ))
            lines.append('- Likely retype: `char %s[%d] = "%s";` (verify zero-padding in Ghidra first)' % (
                cand['name'], cand['gap'],
                cand['string'].replace('"', '\\"').replace('\n', '\\n'),
            ))
            lines.append('')
    else:
        lines.append('*(none)*')
        lines.append('')

    out_path = os.path.join(reports_dir, 'mistyped_string_buffers.md')
    with open(out_path, 'w') as f:
        f.write('\n'.join(lines))
    print('Report: %s' % out_path)
    print('  movs_confirmed=%d  callsite_confirmed=%d  layout_gap=%d  safe=%d  unknown=%d' % (
        len(confirmed), len(callsite_only), len(layout_candidates), len(noise), len(unknown),
    ))


if __name__ == '__main__':
    main()
