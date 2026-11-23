#!/usr/bin/env python3
"""Per-function difference factor between two Watcom-built PEs.

Reads BYTES FROM THE RAW .exe and takes only FUNCTION BOUNDARIES from Ghidra.
That matters: the Ghidra program for nocedit.exe has been byte-patched (MOVSD
sites rewritten as `JMP <cave>`, with stubs planted in padding -- see
annotations/nocedit.exe/code_caves.json). Those patches exist only inside the
Ghidra project; the on-disk image is pristine. Exporting bytes or .asm from
Ghidra would silently compare fabricated code. Reading the raw file makes the
caves invisible, CRT included.

A single scalar hides the distinction that actually matters, so this emits a
CLASS plus a distance:

  identical     reloc-masked bytes are equal            -> same source
  layout-drift  same opcode+operand-kind sequence,
                only memory displacements differ        -> a struct grew/shrank,
                                                           function source unchanged
  frame-change  equal once the frame-pointer prologue
                and epilogue and stack adjustments are
                dropped and each stack slot is matched
                to one slot on the other side           -> the same source built
                                                           with a frame pointer
  const-change  ...only non-relocated immediates differ -> a #define changed
  regalloc      ...only register operands differ        -> ripple from a nearby edit
  logic-change  opcode sequence itself differs          -> real source change

A source line number stored for the error reporter is not a difference. Given the
address of the program's g_CurrentLineNumber, a constant stored there, directly or
through the register it was loaded into, reads as LINE, and so does the address.

Relocated immediates are masked using the PE .reloc table, so link-order and
rebasing are invisible. Displacements are NOT relocations, which is why struct
layout drift needs its own bucket -- between an editor build and a game build it
is likely the dominant signal, and a naive byte diff would report nearly every
function as changed.

Usage:
    diff_functions.py nocedit.exe nocturne.exe anchors.json \
        --funcs-a annotations/nocedit.exe/functions \
        --funcs-b historical_annotations/old_decomp/nocturne.exe/functions
"""

import argparse
import bisect
import glob
import json
import struct
import sys
from collections import Counter
from difflib import SequenceMatcher

from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OP_REG, CS_OP_IMM

# What a line number reads as, in the immediates and the displacements.
LINE = "LINE"
STACK_REGISTERS = ("esp", "ebp")
# A call leaves nothing in these (Watcom's caller-saved registers).
CALL_CLOBBERED = ("eax", "ecx", "edx")


# ---------------------------------------------------------------- PE plumbing

class Image:
    """A PE's bytes, with relocated dwords masked except those holding line_number_global."""

    def __init__(self, path, line_number_global=None):
        self.path = path
        self.line_number_global = line_number_global
        self.data = open(path, "rb").read()
        d = self.data
        e_lfanew = struct.unpack_from("<I", d, 0x3C)[0]
        coff = e_lfanew + 4
        n_sec, = struct.unpack_from("<H", d, coff + 2)
        opt_size, = struct.unpack_from("<H", d, coff + 16)
        opt = coff + 20
        self.image_base, = struct.unpack_from("<I", d, opt + 28)

        self.secs = []
        sec_off = opt + opt_size
        for i in range(n_sec):
            o = sec_off + i * 40
            vsize, va, raw_size, raw_off = struct.unpack_from("<IIII", d, o + 8)
            flags, = struct.unpack_from("<I", d, o + 36)
            if raw_off and raw_size:
                self.secs.append((self.image_base + va, raw_off, raw_size, flags))
        self.secs.sort()

        # .reloc: DataDirectory[5]
        rva, size = struct.unpack_from("<II", d, opt + 96 + 5 * 8)
        self.reloc = self._parse_reloc(rva, size)

    def off(self, va):
        for base, raw_off, raw_size, _ in self.secs:
            if base <= va < base + raw_size:
                return raw_off + (va - base)
        return None

    def _parse_reloc(self, rva, size):
        """Set of VAs of 4-byte fields holding absolute addresses."""
        out = set()
        if not rva or not size:
            return out
        start = self.off(self.image_base + rva)
        if start is None:
            return out
        p, end = start, start + size
        while p < end - 8:
            page_rva, block = struct.unpack_from("<II", self.data, p)
            if block < 8:
                break
            for k in range(p + 8, p + block, 2):
                ent, = struct.unpack_from("<H", self.data, k)
                typ, off = ent >> 12, ent & 0xFFF
                if typ == 3:  # IMAGE_REL_BASED_HIGHLOW
                    out.add(self.image_base + page_rva + off)
            p += block
        return out

    def section_end(self, va):
        """End VA of the raw data of the section holding `va`, or None."""
        for base, _, raw_size, _ in self.secs:
            if base <= va < base + raw_size:
                return base + raw_size
        return None

    def func_bytes(self, start, end):
        """Raw bytes [start,end), reloc dwords zeroed, trailing padding trimmed.

        An end past the section, such as the guess for a program's last
        function, stops at the section's last byte.
        """
        limit = self.section_end(start)
        if limit is None or end <= start:
            return None
        end = min(end, limit)
        a = self.off(start)
        buf = bytearray(self.data[a:a + end - start])
        for va in range(start, end):
            if va in self.reloc and not self._kept(va):
                i = va - start
                if i + 4 <= len(buf):
                    buf[i:i + 4] = b"\0\0\0\0"
        while buf and buf[-1] in (0xCC, 0x90, 0x00):
            buf.pop()
        return bytes(buf)

    def range_bytes(self, start, end):
        """Raw bytes [start,end) with reloc dwords zeroed and nothing trimmed, or None.

        For a range whose end is known, such as a body range Ghidra exported:
        trimming would cut a masked address off its last instruction
        (`jmp [import]` ends in four zeroed bytes).
        """
        limit = self.section_end(start)
        if limit is None or end <= start or end > limit:
            return None
        a = self.off(start)
        buf = bytearray(self.data[a:a + end - start])
        for va in range(start, end):
            if va in self.reloc and not self._kept(va):
                buf[va - start:va - start + 4] = b"\0\0\0\0"
        return bytes(buf[:end - start])

    def _kept(self, va):
        """True for a relocated dword holding line_number_global, which tokens() recognises."""
        if self.line_number_global is None:
            return False
        at = self.off(va)
        return at + 4 <= len(self.data) and struct.unpack_from("<I", self.data, at)[0] == \
            self.line_number_global


# ------------------------------------------------------------- tokenisation

def _is_branch(mnem):
    # call/jmp/jcc/loop encode a rel32 (or rel8) displacement, which capstone
    # reports as an ABSOLUTE target. Relative branches carry no relocation, so
    # the .reloc mask never touches them -- yet the target differs between two
    # binaries purely because the code is laid out at different addresses.
    # Leaving them in swamps every other immediate.
    return (mnem == "call" or mnem == "jmp"
            or (mnem.startswith("j") and mnem != "jmp")
            or mnem.startswith("loop"))


def _is_frame_code(ins, regs):
    """The frame pointer's push, set-up, restore and pop, and any stack pointer adjustment."""
    m = ins.mnemonic
    if m == "leave":
        return True
    if m in ("push", "pop"):
        return regs == ["ebp"]
    if m == "mov":
        return sorted(regs) == ["ebp", "esp"]
    return (m in ("and", "add", "sub") and regs == ["esp"] and len(ins.operands) == 2
            and ins.operands[1].type == CS_OP_IMM)


def _note_line_number(mnemonic, parts, imms, loaded):
    """Marks LINE the constant stored to the line number, and tracks constants in registers.

    `loaded` maps a register to the index in `imms` of the constant last moved into it.
    """
    if mnemonic == "call":
        for reg in CALL_CLOBBERED:
            loaded.pop(reg, None)
        return
    if mnemonic != "mov" or len(parts) != 2:
        if parts and parts[0][0] == "r":
            loaded.pop(parts[0][1], None)
        return
    dst, src = parts
    if dst[0] == "m" and dst[4] == LINE:
        index = src[1] if src[0] == "i" else loaded.get(src[1])
        if index is not None:
            imms[index] = LINE
    elif dst[0] == "r":
        if src[0] == "i":
            loaded[dst[1]] = src[1]
        else:
            loaded.pop(dst[1], None)


class _Stack:
    """Where esp and the frame pointer stand, in bytes from esp on entry; None when unknown.

    On entry esp holds the return address, so an argument is at 4 or more: read
    through either register, it has one place, the same in both builds. Below
    that are locals, which each build lays out its own way.
    """

    def __init__(self):
        self.esp = 0
        self.frame = None
        self.locals = {}

    def slot(self, part):
        base, disp = part[1], part[4]
        origin = self.esp if base == "esp" else self.frame
        if origin is not None and origin + disp >= 4:
            return ("arg", origin + disp)
        key = ("at", origin + disp) if origin is not None else (base, disp)
        return ("local", self.locals.setdefault(key, len(self.locals)))

    def step(self, mnemonic, parts, imms):
        regs = [p[1] for p in parts if p[0] == "r"]
        if mnemonic in ("push", "pop"):
            self.esp = None if self.esp is None else self.esp + (4 if mnemonic == "pop" else -4)
        elif mnemonic == "leave":
            self.esp = None if self.frame is None else self.frame + 4
        elif mnemonic == "mov" and regs == ["ebp", "esp"]:
            self.frame = self.esp
        elif mnemonic == "mov" and regs == ["esp", "ebp"]:
            self.esp = self.frame
        elif regs[:1] == ["esp"] and mnemonic in ("add", "sub") and parts[1][0] == "i":
            amount = imms[parts[1][1]]
            self.esp = None if self.esp is None else self.esp + (amount if mnemonic == "add" else -amount)
        elif regs[:1] == ["esp"] or mnemonic == "ret":
            self.esp = None


def _frame_free(shaped, imms):
    """The body without its frame code: arguments by their place, locals by their first use."""
    stack, out = _Stack(), []
    for mnemonic, frame_code, parts in shaped:
        body = []
        for part in parts:
            if part[0] == "i":
                body.append(("i", None if part[1] is None else imms[part[1]]))
            elif part[0] == "m" and part[1] in STACK_REGISTERS and part[2] is None:
                body.append(stack.slot(part))
            else:
                body.append(part)
        stack.step(mnemonic, parts, imms)
        if not frame_code:
            out.append((mnemonic, tuple(body)))
    return out


def tokens(md, buf, va, line_number_global=None):
    """(opcode+operand-kind seq, displacements, immediates, registers, frame-free body)."""
    ops, disps, imms, regs, shaped = [], [], [], [], []
    loaded = {}
    off = 0
    n = len(buf)
    while off < n:
        last = off
        for ins in md.disasm(buf[off:], va + off):
            branch = _is_branch(ins.mnemonic)
            kinds, parts, ins_regs = [], [], []
            for o in ins.operands:
                if o.type == CS_OP_REG:
                    kinds.append("r")
                    name = md.reg_name(o.reg)
                    regs.append(name)
                    ins_regs.append(name)
                    parts.append(("r", name))
                elif o.type == CS_OP_IMM:
                    kinds.append("i")
                    if branch:              # mask relative branch targets
                        parts.append(("i", None))
                    else:
                        imms.append(o.imm)
                        parts.append(("i", len(imms) - 1))
                else:                       # x86 operands are register, immediate or memory
                    kinds.append("m")
                    base = md.reg_name(o.mem.base) if o.mem.base else None
                    index = md.reg_name(o.mem.index) if o.mem.index else None
                    disp = o.mem.disp
                    # An absolute address past 0x7fffffff comes back negative.
                    if base is None and index is None and disp & 0xFFFFFFFF == line_number_global:
                        disp = LINE
                    disps.append(disp)
                    parts.append(("m", base, index, o.mem.scale, disp))
            _note_line_number(ins.mnemonic, parts, imms, loaded)
            ops.append(f"{ins.mnemonic}:{''.join(kinds)}")
            shaped.append((ins.mnemonic, _is_frame_code(ins, ins_regs), parts))
            last = ins.address - va + ins.size
        off = last + 1 if last > off else off + 1
    return ops, disps, imms, regs, _frame_free(shaped, imms)


def classify(a_buf, b_buf, md, va_a, va_b):
    return classify_tokens(tokens(md, a_buf, va_a), tokens(md, b_buf, va_b))


def classify_tokens(ta, tb):
    """classify() over two tokens() results, for callers that compare one body many times."""
    oa, da, ia, ra, fa = ta
    ob, db, ib, rb, fb = tb
    if not oa or not ob:
        return "undecodable", 1.0, ""

    sim = SequenceMatcher(None, oa, ob).ratio()
    dist = round(1.0 - sim, 4)

    # NB: not `a_buf == b_buf`. Raw bytes can never match while relative branch
    # targets differ, and those are normalised away in the token streams.
    if (oa, da, ia, ra) == (ob, db, ib, rb):
        return "identical", 0.0, ""

    # With the opcode + operand-kind sequence identical: what actually moved?
    why = [part for part, differs in (("disp", da != db), ("imm", ia != ib), ("reg", ra != rb))
           if differs] if oa == ob else []
    if why == ["disp"]:
        n = sum(1 for x, y in zip(da, db) if x != y)
        return "layout-drift", dist, f"{n}/{len(da)} displacements differ"
    if fa == fb:
        return "frame-change", dist, f"{len(oa)} vs {len(ob)} insns, frame code dropped"
    if oa == ob:
        if why == ["imm"]:
            n = sum(1 for x, y in zip(ia, ib) if x != y)
            return "const-change", dist, f"{n}/{len(ia)} immediates differ"
        if why == ["reg"]:
            return "regalloc", dist, f"{len(ra)} reg operands, some renamed"
        return "operand-change", dist, "+".join(why) or "?"
    return "logic-change", dist, f"{len(oa)} vs {len(ob)} insns"


# ---------------------------------------------------------------------- main

def load_funcs(pattern):
    out = []
    for f in glob.glob(pattern + "/functions_bucket_*.json"):
        for r in json.load(open(f)):
            out.append((int(r["addr"], 16), r.get("name", "?")))
    out.sort()
    return out


def cave_ranges(path):
    """Address ranges Ghidra byte-patched; excluded defensively."""
    try:
        caves = json.load(open(path))["caves"]
    except Exception:
        return []
    return [(int(c["start"], 16), int(c["start"], 16) + c["total_size"]) for c in caves]


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("exe_a")
    ap.add_argument("exe_b")
    ap.add_argument("anchors")
    ap.add_argument("--funcs-a", required=True)
    ap.add_argument("--funcs-b", required=True)
    ap.add_argument("--caves", default="annotations/nocedit.exe/code_caves.json")
    ap.add_argument("--json", help="write per-function results")
    ap.add_argument("--show", default="logic-change")
    args = ap.parse_args(argv)

    A, B = Image(args.exe_a), Image(args.exe_b)
    print(f"{args.exe_a}: {len(A.reloc)} reloc dwords", file=sys.stderr)
    print(f"{args.exe_b}: {len(B.reloc)} reloc dwords", file=sys.stderr)

    FA, FB = load_funcs(args.funcs_a), load_funcs(args.funcs_b)
    SA = [a for a, _ in FA]
    SB = [a for a, _ in FB]
    nameA = {a: n for a, n in FA}
    caves = cave_ranges(args.caves)

    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True

    def end_of(starts, va):
        i = bisect.bisect_right(starts, va)
        return starts[i] if i < len(starts) else va + 0x400

    results, skipped = {}, Counter()
    for rec in json.load(open(args.anchors)):
        va_a, va_b = int(rec["nocedit"], 16), int(rec["nocturne"], 16)
        ea, eb = end_of(SA, va_a), end_of(SB, va_b)
        if any(s < ea and va_a < e for s, e in caves):
            skipped["overlaps-cave"] += 1
            continue
        ba, bb = A.func_bytes(va_a, ea), B.func_bytes(va_b, eb)
        if not ba or not bb:
            skipped["unmapped"] += 1
            continue
        cls, dist, detail = classify(ba, bb, md, va_a, va_b)
        results[hex(va_a)] = {"name": nameA.get(va_a, "?"), "b": hex(va_b),
                              "class": cls, "distance": dist, "detail": detail,
                              "size_a": len(ba), "size_b": len(bb)}

    counts = Counter(r["class"] for r in results.values())
    print(f"\ncompared {len(results)} anchored pairs "
          f"(skipped {sum(skipped.values())}: {dict(skipped)})\n")
    for c, n in counts.most_common():
        print(f"  {c:15s} {n:4d}")

    show = set(args.show.split(","))
    rows = [r for r in results.values() if r["class"] in show]
    if rows:
        print(f"\n-- {args.show} --")
        for r in sorted(rows, key=lambda x: -x["distance"])[:20]:
            print(f"  d={r['distance']:.3f}  {r['name'][:52]:52s} "
                  f"{r['size_a']:5d}/{r['size_b']:<5d}B  {r['detail']}")

    if args.json:
        with open(args.json, "w") as fh:
            json.dump(results, fh, indent=1)
        print(f"\nwrote {args.json}", file=sys.stderr)


if __name__ == "__main__":
    main()
