#!/usr/bin/env python3
"""Extract (source_file, line, VA) assertion pins from a Watcom-built PE.

The game brackets every fatal-error call with a __FILE__/__LINE__ store pair:

    MOV ECX, 0x649794              ; = "..\\core\\setutil.cpp"
    MOV ESI, 0x3b6                 ; = line 950
    MOV dword ptr [0x02f0ca48], ECX  ; g_CurrentFilename
    MOV dword ptr [0x02f0ca4c], ESI  ; g_CurrentLineNumber
    CALL displayErrorAndQuit

Those immediates survive into every build of every variant of the binary, and
__LINE__ is invariant under #ifdef (preprocessing out a block does not renumber
the physical lines below it). That makes the pins a source-level coordinate
system shared across binaries -- far stronger than any structural matcher.

This script needs nothing but the raw .exe: no Ghidra, no symbols, no
annotations. It discovers the filename/line globals by observation rather than
being told where they are, so it works unchanged on a sibling binary where
those globals live at different addresses.

Usage:
    extract_line_pins.py nocedit.exe -o pins_nocedit.json
    extract_line_pins.py nocedit.exe --self-check 2257
"""

import argparse
import json
import re
import struct
import sys
from collections import Counter, defaultdict

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OP_REG, CS_OP_IMM, CS_OP_MEM
except ImportError:
    sys.exit("capstone is required: pip install capstone")


# --------------------------------------------------------------------------
# Minimal PE parsing (avoids a pefile dependency; we need only the sections)
# --------------------------------------------------------------------------

class Section:
    __slots__ = ("name", "va", "vsize", "raw_off", "raw_size", "flags")

    def __init__(self, name, va, vsize, raw_off, raw_size, flags):
        self.name = name
        self.va = va
        self.vsize = vsize
        self.raw_off = raw_off
        self.raw_size = raw_size
        self.flags = flags

    @property
    def executable(self):
        return bool(self.flags & 0x20000000)  # IMAGE_SCN_MEM_EXECUTE

    @property
    def has_raw_data(self):
        # .bss carries raw_size != 0 but raw_off == 0; reading it would slurp
        # the file header. Watcom also leaves VirtualSize == 0 on every section.
        return self.raw_off != 0 and self.raw_size != 0

    @property
    def extent(self):
        """Bytes actually present in the file for this section."""
        return self.raw_size if self.vsize == 0 else min(self.raw_size, self.vsize)

    def __repr__(self):
        return f"<{self.name} va={self.va:#x} size={self.vsize:#x}>"


def parse_pe(data):
    """Return (image_base, [Section]). Raises on anything that isn't PE32."""
    if data[:2] != b"MZ":
        raise ValueError("not an MZ image")
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if data[e_lfanew:e_lfanew + 4] != b"PE\0\0":
        raise ValueError("bad PE signature")

    coff = e_lfanew + 4
    n_sections, = struct.unpack_from("<H", data, coff + 2)
    opt_size, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20

    magic, = struct.unpack_from("<H", data, opt)
    if magic != 0x10B:
        raise ValueError(f"expected PE32 (0x10b), got {magic:#x}")
    image_base, = struct.unpack_from("<I", data, opt + 28)

    sec_off = opt + opt_size
    sections = []
    for i in range(n_sections):
        off = sec_off + i * 40
        raw_name = data[off:off + 8].rstrip(b"\0")
        vsize, va, raw_size, raw_off = struct.unpack_from("<IIII", data, off + 8)
        flags, = struct.unpack_from("<I", data, off + 36)
        sections.append(Section(raw_name.decode("latin1"), image_base + va,
                                vsize, raw_off, raw_size, flags))
    return image_base, sections


# --------------------------------------------------------------------------
# Step 1: locate the __FILE__ strings and their virtual addresses
# --------------------------------------------------------------------------

# "..\core\setutil.cpp\0", "..\crt\file.c\0", ...  Watcom bakes the relative
# path exactly as it appeared in the source's __FILE__.
SRC_STRING = re.compile(rb"\.\.\\[\w]+\\[\w\-]+\.(?:cpp|c)\x00")


def find_source_strings(data, sections):
    """VA -> source filename, for every __FILE__-looking string in the image."""
    out = {}
    for sec in sections:
        if not sec.has_raw_data:
            continue
        blob = data[sec.raw_off:sec.raw_off + sec.extent]
        for m in SRC_STRING.finditer(blob):
            va = sec.va + m.start()
            name = m.group()[:-1].decode("latin1").replace("\\", "/")
            out[va] = name
    return out


# --------------------------------------------------------------------------
# Step 2: sweep .text, tracking `mov r32, imm32`, and find the stores
# --------------------------------------------------------------------------

def sweep_text(data, sec, md):
    """Disassemble a section, yielding a list of lightweight insn records.

    Watcom interleaves jump tables and alignment padding with code, so capstone
    stalls on invalid bytes. Resume one byte past each stall rather than giving
    up -- a plain `for ins in md.disasm(blob, va)` recovers only a few percent
    of a 2 MB text section.
    """
    blob = data[sec.raw_off:sec.raw_off + sec.extent]
    insns = []
    offset = 0
    n = len(blob)
    while offset < n:
        last_end = offset
        for ins in md.disasm(blob[offset:], sec.va + offset):
            _record(ins, insns, md)
            last_end = ins.address - sec.va + ins.size
        # disasm stopped: either we consumed everything, or the byte at
        # last_end is not decodable. Skip it and resume.
        offset = last_end + 1 if last_end > offset else offset + 1
    return insns


# sub-register -> 32-bit parent, so a partial write (MOV AL,..) invalidates EAX
_SUBREG = {}
for _p, _subs in {
    "eax": ("ax", "al", "ah"), "ebx": ("bx", "bl", "bh"),
    "ecx": ("cx", "cl", "ch"), "edx": ("dx", "dl", "dh"),
    "esi": ("si",), "edi": ("di",), "ebp": ("bp",), "esp": ("sp",),
}.items():
    _SUBREG[_p] = _p
    for _s in _subs:
        _SUBREG[_s] = _p

_PARENT = {}   # capstone reg id -> canonical 32-bit name


def _parent(md, reg):
    """Map a sub-register to its 32-bit parent so partial writes invalidate."""
    p = _PARENT.get(reg)
    if p is None:
        name = md.reg_name(reg) or f"?{reg}"
        p = _PARENT[reg] = _SUBREG.get(name, name)
    return p


def _record(ins, insns, md):
    """Append (addr, rec, clobbered_regs) for one instruction."""
    try:
        _, written = ins.regs_access()
    except Exception:
        written = ()
    clobber = tuple(_parent(md, r) for r in written)

    rec = None
    if ins.mnemonic == "mov" and len(ins.operands) == 2:
        dst, src = ins.operands
        # mov r32, imm32
        if dst.type == CS_OP_REG and src.type == CS_OP_IMM and dst.size == 4:
            rec = ("load", _parent(md, dst.reg), src.imm & 0xFFFFFFFF)
        # mov dword ptr [abs32], r32   /   mov dword ptr [abs32], imm32
        elif (dst.type == CS_OP_MEM and dst.size == 4
              and dst.mem.base == 0 and dst.mem.index == 0):
            target = dst.mem.disp & 0xFFFFFFFF
            if src.type == CS_OP_REG:
                rec = ("store_reg", target, _parent(md, src.reg))
            elif src.type == CS_OP_IMM:
                rec = ("store_imm", target, src.imm & 0xFFFFFFFF)
    insns.append((ins.address, rec, clobber))


MAX_LINE = 200_000     # no source file in this project is remotely this long
PAIR_WINDOW = 10       # stores either side of the filename store
MIN_SLOT_HITS = 5      # a global hit once by a string pointer is a coincidence
                       # (some struct field holding a name), not an assert slot


def extract_pins(insns, str_vas):
    """Find filename stores, then pair each with its line store.

    Two passes. The first learns, per filename-global, which line-global it is
    actually partnered with -- by counting *every* plausible candidate in the
    window, so the true partner wins on sheer frequency. The second pass then
    accepts only that partner. Picking the merely-nearest store instead
    mispairs ~20% of sites, because an unrelated global write often sits
    immediately before the filename store.
    """
    # --- register value tracking, with invalidation ------------------------
    # Without clobbering, a `mov [g_line], EAX` whose EAX came from a CALL
    # would silently inherit a stale immediate and emit a bogus line number.
    regval = {}
    resolved = []          # (idx, addr, kind, target, value_or_None)
    for idx, (addr, rec, clobber) in enumerate(insns):
        for r in clobber:
            regval.pop(r, None)
        if rec is None:
            resolved.append((idx, addr, None, None, None))
            continue
        kind = rec[0]
        if kind == "load":
            _, reg, imm = rec
            regval[reg] = imm
            resolved.append((idx, addr, None, None, None))
        elif kind == "store_reg":
            _, target, reg = rec
            resolved.append((idx, addr, "store", target, regval.get(reg)))
        elif kind == "store_imm":
            _, target, imm = rec
            resolved.append((idx, addr, "store", target, imm))

    # --- which globals receive filename-string pointers? -------------------
    # Discovered, not hardcoded: the assert slots (g_CurrentFilename,
    # g_CurrentDebugFilename) are whichever globals get written a __FILE__
    # pointer over and over. This is what lets the script run unchanged on a
    # sibling binary where those globals sit at different addresses.
    hits = Counter()
    for idx, addr, kind, target, val in resolved:
        if kind == "store" and val in str_vas:
            hits[target] += 1
    file_globals = Counter({g: c for g, c in hits.items() if c >= MIN_SLOT_HITS})

    if not file_globals:
        return [], {}, {"unpaired": 0, "file_stores": 0, "pairing": {},
                        "rejected_slots": len(hits)}

    store_idx = [i for i, (_, _, k, _, _) in enumerate(resolved) if k == "store"]
    store_pos = {i: p for p, i in enumerate(store_idx)}

    def candidates(i):
        """Plausible line-number stores near filename store `i`, nearest first."""
        p = store_pos[i]
        out = []
        lo = max(0, p - PAIR_WINDOW)
        hi = min(len(store_idx), p + PAIR_WINDOW + 1)
        for q in range(lo, hi):
            j = store_idx[q]
            if j == i:
                continue
            _, _, _, jtarget, jval = resolved[j]
            if jtarget in file_globals or jval is None:
                continue
            if not (0 < jval < MAX_LINE):
                continue
            # forward bias: the line store follows the filename store more often
            # than it precedes it, so break distance ties in favour of q > p.
            out.append(((abs(q - p), 0 if q > p else 1), jtarget, jval))
        out.sort(key=lambda t: t[0])
        return out

    file_stores = [(i, addr, target, val) for i, addr, kind, target, val in resolved
                   if kind == "store" and val in str_vas and target in file_globals]

    # --- pass 1: learn each filename-global's true line-global partner ------
    # Vote on the NEAREST candidate only. Counting every candidate in the window
    # lets a busy neighbour win: g_CurrentDebugFilename's true partner appears
    # once per pin, while g_CurrentLineNumber stores from adjacent asserts flood
    # the same window and would outvote it.
    pairing = defaultdict(Counter)
    for i, addr, target, val in file_stores:
        near = candidates(i)
        if near:
            pairing[target][near[0][1]] += 1
    canonical = {fg: lg.most_common(1)[0][0] for fg, lg in pairing.items() if lg}

    # --- pass 2: accept only the canonical partner -------------------------
    pins, unpaired = [], 0
    for i, addr, target, val in file_stores:
        want = canonical.get(target)
        line = next((jval for _, jtarget, jval in candidates(i) if jtarget == want), None)
        if line is None:
            unpaired += 1
            continue
        pins.append({"file": str_vas[val], "line": line, "va": addr, "slot": target})

    meta = {"unpaired": unpaired,
            "file_stores": len(file_stores),
            "rejected_slots": len(hits) - len(file_globals),
            "pairing": {hex(k): hex(v) for k, v in canonical.items()}}
    return pins, dict(file_globals), meta


# --------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("exe")
    ap.add_argument("-o", "--out", help="write pins as JSON")
    ap.add_argument("--self-check", type=int, metavar="N",
                    help="fail unless at least N pins are recovered")
    ap.add_argument("-v", "--verbose", action="store_true")
    args = ap.parse_args()

    data = open(args.exe, "rb").read()
    image_base, sections = parse_pe(data)

    str_vas = find_source_strings(data, sections)
    if args.verbose:
        print(f"image base {image_base:#x}, {len(sections)} sections", file=sys.stderr)
        for s in sections:
            print(f"  {s}", file=sys.stderr)
    print(f"{args.exe}: {len(str_vas)} __FILE__ strings, "
          f"{len(set(str_vas.values()))} distinct source files", file=sys.stderr)

    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True

    all_pins = []
    stats = {}
    for sec in sections:
        if not (sec.executable and sec.has_raw_data):
            continue
        insns = sweep_text(data, sec, md)
        pins, file_globals, meta = extract_pins(insns, str_vas)
        all_pins.extend(pins)
        stats[sec.name] = {"insns": len(insns), "pins": len(pins),
                           "file_globals": {hex(k): v for k, v in file_globals.items()},
                           **meta}

    per_file = Counter(p["file"] for p in all_pins)
    print(f"{args.exe}: {len(all_pins)} pins across {len(per_file)} files", file=sys.stderr)
    for name, st in stats.items():
        print(f"  [{name}] {st['insns']} insns, {st['file_stores']} filename stores, "
              f"{st['pins']} pins, {st['unpaired']} unpaired, "
              f"{st['rejected_slots']} slots rejected", file=sys.stderr)
        for fg, lg in st["pairing"].items():
            d = int(lg, 16) - int(fg, 16)
            print(f"      slot {fg} -> line {lg} (delta {d:+d}), "
                  f"{st['file_globals'].get(fg, 0)} stores", file=sys.stderr)

    if args.out:
        payload = {
            "exe": args.exe,
            "image_base": image_base,
            "pins": sorted(all_pins, key=lambda p: (p["file"], p["line"], p["va"])),
            "stats": stats,
        }
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"wrote {args.out}", file=sys.stderr)

    if args.self_check is not None and len(all_pins) < args.self_check:
        sys.exit(f"SELF-CHECK FAILED: recovered {len(all_pins)} pins, expected >= {args.self_check}")


if __name__ == "__main__":
    main()
