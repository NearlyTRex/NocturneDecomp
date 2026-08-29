#!/usr/bin/env python3
"""Report locals the decompile declares and never mentions, whose stack slot the
binary demonstrably writes - a store Ghidra dropped.

Motivating case: CNetGame::sendGameSetting built the game-settings packet but
never wrote packet.random_seed, because Ghidra declared the slot (uint local_bf)
and dropped the store. The packet shipped host stack garbage, the guest adopted
it as its session seed, and the two machines loaded the mission on different
seeds. No existing detector flags that shape - partial_struct_copy (S31) and
missing_cave_copy (S20) both key on dropped struct *copies*, not dropped scalar
stores.

The evidence is exact rather than heuristic: the .pcode carries a cumulative ESP
delta per instruction, so a `MOV [ESP + disp]` store lands at frame offset
(delta + disp), which is the same coordinate system as
stack_frame.variables[].offset in the .json.

This is a REVIEW FLAG, not a mechanical rewrite - each hit is a triage between a
genuine dropped store and a store whose value nothing ever reads. Five gates keep
the list small enough to read in one sitting - roughly two dozen hits over
nocedit, against about 1700 ungated. Each gate exists because of an observed
false-positive class:

  read-back through ESP        spills, which Ghidra correctly folds into a
                               register
  read-back through a LEA'd    a scratch buffer block-copied to the real
  register                     destination, where Ghidra retargeted the stores
                               and lost nothing (trisock.cpp buildSockaddrIn)
  x87 operand sizes            `FSUB float ptr [ESP+0x64]` is a read; missing
                               float/double from the operand regex made every
                               folded float scratch look like a dropped store
  escapes to a CALL, via a     Watcom stages by-value struct arguments with
  contiguous run bottoming     `MOV [ESP+n], reg` and Ghidra names those slots
  out on a referenced local    local_NN too (stranger.cpp ladder helpers)
  the store precedes an        a store after every escape cannot be a field of
  escape of that object        the escaped object - it is a dead spill that
                               merely abuts one (skeleton.cpp findPatchToFrame
                               keeps two unread copies of a bone translation)

Known residual false positive: a lone dead spill that merely abuts an escaping
object, written before the escape, is indistinguishable from a trailing field of
one - the head local's declared size is too small by construction, Ghidra having
split the struct being the same fact that produced the bug. Comparing the slot's
offset against the head's size does NOT separate the classes: every hit sits past
the head's end, the real ones included.

What does separate them is whether the escaping object is VARIABLE-LENGTH. A
packet builder sets `header.size` explicitly, so the callee reads far past the
head local; a `CVector3f *` / `CMatrix3x4f *` / `CBoundingBox3D *` / `char[N]`
with a separate length argument does not. Triage each hit by the callee's
parameter, not by geometry. Every true positive found in nocedit so far has been
a `core/netgame.cpp` packet field.

Reads the Ghidra .cpp rather than the .keep on purpose: the dead local is a fact
about what the decompiler emitted, and a .keep that reconstructed the field no
longer declares it under that name.

Usage:  python3 scripts/Python/dropped_store_report.py <src-root> [<src-root>...]
"""
import json
import os
import re
import sys
import glob
from collections import defaultdict

PTR = {'byte': 1, 'word': 2, 'dword': 4, 'qword': 8, 'tbyte': 10,
       'float': 4, 'double': 8}   # x87 operands render as float/double ptr
SIZES = 'byte|word|dword|qword|tbyte|float|double'
REGS = ('EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI', 'EBP')

# "@00542e79 [ESP:-200]  # MOV dword ptr [ESP + 0x9], EAX"
LINE = re.compile(r'^@([0-9a-f]+)\s+\[ESP:(-?\d+)\]\S*\s+#\s+(.*)$')
# Only real stores. CMP/TEST/PUSH also take a memory operand first but read it.
STORE = re.compile(r'^(?:MOV|FSTP?|FISTP?|SET\w+)\s+(' + SIZES + r')\s+ptr\s+'
                   r'\[ESP(?:\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]\s*,')
ESP_MEM = re.compile(r'(' + SIZES + r')\s+ptr\s+'
                     r'\[ESP(?:\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]')
LEA_ESP = re.compile(r'^LEA\s+(\w+)\s*,\s*\[ESP(?:\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]')
LEA_REG = re.compile(r'^LEA\s+(\w+)\s*,\s*\[(\w+)(?:\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]')
REG_MEM = re.compile(r'(?:(' + SIZES + r')\s+ptr\s+)?'
                     r'\[(' + '|'.join(REGS) + r')(?:\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]')
MOV_RR = re.compile(r'^MOV\s+(\w+)\s*,\s*(\w+)\s*$')
DECL = re.compile(r'^\s{2,4}[A-Za-z_][\w \*\[\]]*?\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;\s*$')


def _disp(sign, val):
    if val is None:
        return 0
    n = int(val, 16) if val.startswith('0x') else int(val)
    return -n if sign == '-' else n


def unreferenced_locals(src_path):
    """Names declared in the leading decl block and never mentioned again."""
    src = open(src_path, encoding='utf-8', errors='replace').read()
    lines = src.split('\n')
    try:
        start = next(i for i, l in enumerate(lines) if l.strip() == '{')
    except StopIteration:
        return set()
    body = None
    for i in range(start + 1, len(lines)):
        if lines[i].strip() == '':
            body = i
            break
    if body is None:
        return set()
    out = set()
    for i in range(start + 1, body):
        m = DECL.match(lines[i])
        if m and len(re.findall(r'\b%s\b' % re.escape(m.group(1)), src)) == 1:
            out.add(m.group(1))
    return out


def scan(pcode_path):
    """(writes, reads, call_arg_escapes) in frame-offset coordinates.

    Writes and escapes carry a sequence number (position in the pcode stream,
    which is program order) so a caller can require the store to happen BEFORE
    the object is handed over. A store after every escape cannot be a dropped
    field of the escaped object - it is a dead spill that merely abuts one.
    """
    writes, reads, arg_escapes = [], [], []
    base_of = {}          # register -> frame offset it points at
    pending = []          # LEA'd bases handed to the call being set up
    seq = -1

    for line in open(pcode_path, encoding='utf-8', errors='replace'):
        m = LINE.match(line.strip())
        if not m:
            continue
        addr, delta, asm = m.group(1), int(m.group(2)), m.group(3)
        mnem = asm.split()[0] if asm.split() else ''
        seq += 1

        if mnem == 'CALL':
            arg_escapes.extend((base, seq) for base in pending)
            pending = []
            # scratch registers do not survive the call
            base_of = {r: b for r, b in base_of.items()
                       if r in ('EBX', 'ESI', 'EDI', 'EBP')}
            continue

        l = LEA_ESP.match(asm)
        if l:
            base_of[l.group(1)] = delta + _disp(l.group(2), l.group(3))
            continue
        l = LEA_REG.match(asm)
        if l and l.group(2) in base_of:
            base_of[l.group(1)] = base_of[l.group(2)] + _disp(l.group(3), l.group(4))
            continue

        mr = MOV_RR.match(asm)
        if mr and mr.group(2) == 'ESP':
            base_of[mr.group(1)] = delta      # MOV reg,ESP - same escape as LEA reg,[ESP]
            continue
        if mr:
            if mr.group(2) in base_of:
                base_of[mr.group(1)] = base_of[mr.group(2)]
            else:
                base_of.pop(mr.group(1), None)
            continue

        # a frame address handed to a call, by push or via an outgoing-arg slot
        st = STORE.match(asm)
        if mnem == 'PUSH' and asm.split()[-1] in base_of:
            pending.append(base_of[asm.split()[-1]])
        if st and asm.rstrip().split(',')[-1].strip() in base_of:
            pending.append(base_of[asm.rstrip().split(',')[-1].strip()])

        dest = None
        if st:
            dest = delta + _disp(st.group(2), st.group(3))
            writes.append((dest, PTR.get(st.group(1), 4), addr, asm, seq))
        for mm in ESP_MEM.finditer(asm):
            off = delta + _disp(mm.group(2), mm.group(3))
            if off != dest:
                reads.append((off, PTR.get(mm.group(1), 4)))
        # reads through a register that points into the frame
        for mm in REG_MEM.finditer(asm):
            if mm.group(2) in base_of:
                off = base_of[mm.group(2)] + _disp(mm.group(3), mm.group(4))
                reads.append((off, PTR.get(mm.group(1) or 'dword', 4)))

        # any other definition of a register drops the base it was holding
        if mnem in ('MOV', 'POP', 'ADD', 'SUB', 'XOR', 'AND', 'OR', 'MOVZX', 'MOVSX'):
            tgt = asm.split()[1].rstrip(',') if len(asm.split()) > 1 else ''
            base_of.pop(tgt, None)

    return writes, reads, arg_escapes


def analyse(json_path):
    base = json_path[:-5]
    src = None
    for ext in ('.cpp', '.c'):
        if os.path.exists(base + ext):
            src = base + ext
    if not src or not os.path.exists(base + '.pcode'):
        return []
    try:
        data = json.load(open(json_path))
    except Exception:
        return []

    variables = [v for v in ((data.get('stack_frame') or {}).get('variables') or [])
                 if not v.get('is_param')]
    dead = unreferenced_locals(src)
    if not variables or not dead:
        return []

    writes, reads, escapes = scan(base + '.pcode')
    variables.sort(key=lambda v: v['offset'])
    index_of = {v['name']: i for i, v in enumerate(variables)}

    def struct_base(i):
        """Walk down through contiguous slots to the first referenced local.

        A dropped field store only matters when the bytes belong to an object
        the function hands to someone else, so the run has to bottom out on a
        named local whose address is passed to a CALL. Arg-staging slots
        (Watcom's by-value struct pushes, which Ghidra also names local_NN)
        bottom out on nothing, which is what separates them.
        """
        while i > 0:
            prev = variables[i - 1]
            if prev['offset'] + (prev.get('size') or 4) != variables[i]['offset']:
                return None                     # gap: not one object
            i -= 1
            if variables[i]['name'] not in dead:
                return variables[i]
        return None

    hits = []
    for v in variables:
        if v['name'] not in dead:
            continue
        lo, size = v['offset'], v.get('size') or 4
        hi = lo + size
        touching = [w for w in writes if lo <= w[0] < hi]
        if not touching:
            continue
        if any(lo <= r[0] < hi or (r[0] < lo < r[0] + r[1]) for r in reads):
            continue                     # read back in-function: a spill or folded scratch
        head = struct_base(index_of[v['name']])
        if head is None:
            continue                     # not part of one contiguous object
        first_store = min(w[4] for w in touching)
        if not any(off == head['offset'] and seq > first_store for off, seq in escapes):
            continue                     # never handed to a callee AFTER being written
        hits.append((src, v['name'], v.get('type'), lo, size,
                     [(w[2], w[3]) for w in touching], head['name']))
    return hits


def main(roots):
    all_hits = []
    for root in roots:
        for json_path in glob.glob(os.path.join(root, '**', '*.json'), recursive=True):
            all_hits.extend(analyse(json_path))

    for src, name, typ, off, size, writes, head in all_hits:
        print(src)
        print(f"    {name} ({typ}, {size}b @ {off}) in the object based at {head}; "
              f"declared, never referenced; binary writes it:")
        for addr, asm in writes[:2]:
            print(f"        {addr}  {asm}")

    print(f"\n=== {len(all_hits)} hits in {len({h[0] for h in all_hits})} functions ===")
    per_tu = defaultdict(int)
    for h in all_hits:
        per_tu[h[0].split('/')[-2]] += 1
    for tu, n in sorted(per_tu.items(), key=lambda kv: -kv[1]):
        print(f"  {n:4d}  {tu}")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(2)
    main(sys.argv[1:])
