#!/usr/bin/env python3
"""Pair functions across two builds by body, with every address operand resolved.

sibling_match.compute_shape and diff_functions.py mask each absolute address,
which is right for layout but throws away what the address *is*. Two
`factoryFunc<Class>` bodies, or two `arrdtor`s, differ only in the constructor
they call or the vtable they store, so masked they hash alike, and a unique
masked match pairs the wrong class. Here each address becomes what it points at:

  a function   its partner in the other build, once the pair is known; a call
               to an unpaired function is a wildcard that must not contradict
  a string     the hash of its bytes, read from the raw image, which no layout
               change can move
  other data   a placeholder, as before

The body key keeps mnemonics, registers, constants and the string hashes. The
exact tier keeps structure displacements too; the layout tier drops them, so a
class that grew still matches. Within one key, a source and a target are
compatible when no function operand they both resolve disagrees, and a pair is
taken only when each is the other's single compatible candidate and it rests on
evidence: an agreeing call, a string, or a key unique on both sides and at least
--min-insns long. Every pair taken resolves more calls, so rounds repeat until
none is added.

--verify checks pairs found some other way (tu_anchor.py's size-ratio "drift"
pairs) by the same evidence, under the final pairing: confirmed when the bodies
share callees or strings and nothing conflicts, rewritten when they share some
and conflict on others, contradicted when they share none and conflict.

Seeds are pairs already believed: make_sibling_anchors.py output (--anchors)
and sibling_manual_pairs.json files (--pairs). Output is sibling_manual_pairs
schema, so new pairs go through the normal gated pipeline.

Usage:
    match_function_bodies.py nocedit.exe bw1.exe --anchors anchors.json \\
        --pairs annotations/bw1.exe/sibling_manual_pairs.json --out new_pairs.json
    match_function_bodies.py nocedit.exe bw1.exe --anchors anchors.json --verify drift.json
"""

import argparse
import hashlib
import json
import os
import sys
from collections import Counter, defaultdict

from capstone import CS_ARCH_X86, CS_MODE_32, CS_OP_IMM, CS_OP_REG, Cs

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm

TIERS = ("exact", "layout")
# The longest string literal read back from the raw image, and the shortest kept.
MAX_STRING = 256
MIN_STRING = 3
PRINTABLE = set(range(0x20, 0x7F)) | {0x09, 0x0A, 0x0D}


def is_branch(mnemonic):
    return mnemonic in ("call", "jmp") or mnemonic.startswith(("j", "loop"))


class Body:
    """One function's resolved form: a key per tier, and its function operands in order."""
    __slots__ = ("addr", "keys", "calls", "strings", "ninsn")

    def __init__(self, addr, keys, calls, strings, ninsn):
        self.addr, self.keys, self.calls, self.strings, self.ninsn = addr, keys, calls, strings, ninsn


def string_at(image, va):
    """Hash of the NUL-terminated printable string at `va`, or None."""
    off = image.va2off(va)
    if off is None:
        return None
    raw = image.data[off:off + MAX_STRING]
    end = raw.find(b"\0")
    text = raw[:end] if end >= 0 else b""
    if len(text) < MIN_STRING or not set(text) <= PRINTABLE:
        return None
    return hashlib.sha1(text).hexdigest()[:16]


def body_ranges(image, func):
    """The function's own body ranges, cave fragments left out."""
    out = []
    for b in func.get("body") or []:
        start, end = int(b["start"], 16), int(b["end"], 16)
        if not image.in_cave(start):
            out.append((start, end))
    return sorted(out)


def resolve(image, value):
    """('F', addr) for a function entry, ('S', hash) for a string, ('D', None) otherwise."""
    addr = "%08x" % value
    if addr in image.by_addr:
        return "F", addr
    digest = string_at(image, value)
    return ("S", digest) if digest else ("D", None)


def read_body(image, func, md):
    """The Body of `func`, or None when it has no readable code."""
    ranges = body_ranges(image, func)
    inside = lambda va: any(s <= va <= e for s, e in ranges)  # noqa: E731
    layout, disps, calls, strings, ninsn = [], [], [], [], 0
    for start, end in ranges:
        off = image.va2off(start)
        if off is None:
            return None
        for ins in md.disasm(image.data[off:off + end - start + 1], start):
            ninsn += 1
            parts = [ins.mnemonic]
            for op in ins.operands:
                if op.type == CS_OP_REG:
                    parts.append(md.reg_name(op.reg))
                elif op.type == CS_OP_IMM and is_branch(ins.mnemonic) and inside(op.imm):
                    parts.append("J")
                elif op.type == CS_OP_IMM and (is_branch(ins.mnemonic) or image.is_mapped_va(op.imm)):
                    parts.append(ref_token(image, op.imm, calls, strings))
                elif op.type == CS_OP_IMM:
                    parts.append("%x" % op.imm)
                else:
                    parts.append(mem_token(image, md, op, disps, calls, strings))
            layout.append(" ".join(parts))
    if not ninsn:
        return None
    layout_key = hashlib.sha1("\n".join(layout).encode()).hexdigest()
    exact_key = hashlib.sha1((layout_key + repr(disps)).encode()).hexdigest()
    return Body(func["addr"].lower(), {"exact": exact_key, "layout": layout_key},
                calls, strings, ninsn)


def ref_token(image, value, calls, strings):
    kind, what = resolve(image, value & 0xFFFFFFFF)
    if kind == "F":
        calls.append(what)
        return "F"
    if kind == "S":
        strings.append(what)
        return "S" + what
    return "D"


def mem_token(image, md, op, disps, calls, strings):
    mem = op.mem
    regs = "%s+%s*%d" % (md.reg_name(mem.base) if mem.base else "",
                         md.reg_name(mem.index) if mem.index else "", mem.scale)
    disp = mem.disp & 0xFFFFFFFF
    if not mem.base and not mem.index and image.is_mapped_va(disp):
        return "[%s]" % ref_token(image, disp, calls, strings)
    disps.append(mem.disp)
    return "[%s+d]" % regs


def read_bodies(image, min_bytes=1):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    out = {}
    for f in image.functions:
        if sum(e - s + 1 for s, e in body_ranges(image, f)) < min_bytes:
            continue
        body = read_body(image, f, md)
        if body is not None:
            out[body.addr] = body
    return out


def compare_calls(a, b, forward, backward):
    """(agreeing, contradicting) function operands of a and b, position by position."""
    agree = conflict = 0
    for x, y in zip(a.calls, b.calls):
        if forward.get(x) == y or (x == a.addr and y == b.addr):
            agree += 1
        elif x in forward or y in backward:
            conflict += 1
    return agree, conflict


def evidence(a, b, agree, unique, min_insns):
    """Why the pair is believed, or None when nothing but its shape says so."""
    if agree:
        return "%d calls agree" % agree
    if a.strings:
        return "%d strings" % len(a.strings)
    if unique and a.ninsn >= min_insns:
        return "unique %d-instruction body" % a.ninsn
    return None


def match_key(sources, targets, forward, backward, min_insns):
    """[(a, b, why)] for one key's sources and targets."""
    compatible = defaultdict(set)
    rcompatible = defaultdict(set)
    tallies = {}
    for a in sources:
        for b in targets:
            agree, conflict = compare_calls(a, b, forward, backward)
            if not conflict:
                compatible[b.addr].add(a.addr)
                rcompatible[a.addr].add(b.addr)
                tallies[a.addr, b.addr] = agree
    by_addr = {x.addr: x for x in list(sources) + list(targets)}
    unique = len(sources) == len(targets) == 1
    out = []
    for b in targets:
        cands = compatible[b.addr]
        if len(cands) != 1:
            continue
        a = next(iter(cands))
        if rcompatible[a] != {b.addr}:
            continue
        why = evidence(by_addr[a], b, tallies[a, b.addr], unique, min_insns)
        if why:
            out.append((a, b.addr, why))
    return out


def match(src, tgt, seeds, min_insns=12, max_rounds=20):
    """{source addr: (target addr, tier, why)} beyond the seeds, round by round."""
    forward = dict(seeds)
    backward = {b: a for a, b in forward.items()}
    found = {}
    for _ in range(max_rounds):
        added = 0
        for tier in TIERS:
            groups_a, groups_b = defaultdict(list), defaultdict(list)
            for a in src.values():
                if a.addr not in forward:
                    groups_a[a.keys[tier]].append(a)
            for b in tgt.values():
                if b.addr not in backward:
                    groups_b[b.keys[tier]].append(b)
            # Sorted, so a pair made earlier in a round resolves calls the same way every run.
            for key in sorted(groups_a.keys() & groups_b.keys()):
                # A key's matches are one-to-one, and no address is in two keys of one tier.
                for a, b, why in match_key(groups_a[key], groups_b[key], forward, backward, min_insns):
                    forward[a], backward[b] = b, a
                    found[a] = (b, tier, why)
                    added += 1
        if not added:
            break
    return found


def verify(src, tgt, pairs, forward):
    """{(a, b): verdict} for pairs found another way, judged under the final pairing."""
    backward = {b: a for a, b in forward.items()}
    out = {}
    for a, b in pairs:
        if a not in src or b not in tgt:
            out[a, b] = "unreadable"
            continue
        x, y = src[a], tgt[b]
        mapped = Counter(forward[c] for c in x.calls if c in forward)
        known = Counter(c for c in y.calls if c in backward)
        agree = sum((mapped & Counter(y.calls)).values())
        agree += len(set(x.strings) & set(y.strings))
        conflict = sum((mapped - Counter(y.calls)).values()) + sum((known - mapped).values())
        # A body the sibling rewrote keeps some calls and gains others, so a
        # conflict beside any agreement is a rewrite; only a pair that shares
        # nothing and conflicts is a wrong pairing.
        if agree and not conflict:
            out[a, b] = "confirmed"
        elif agree:
            out[a, b] = "rewritten"
        elif conflict:
            out[a, b] = "contradicted"
        else:
            out[a, b] = "no evidence"
    return out


def load_seeds(anchor_paths, pair_paths):
    """{source addr: target addr} from anchor files and manual-pairs files; a clash drops both."""
    rows = []
    for path in anchor_paths:
        with open(path) as fh:
            rows += [(r["nocedit"], r["nocturne"]) for r in json.load(fh)]
    for path in pair_paths:
        with open(path) as fh:
            rows += [(r["a"], r["b"]) for r in json.load(fh)["pairs"]]
    rows = [(a.lower().replace("0x", "").zfill(8), b.lower().replace("0x", "").zfill(8)) for a, b in rows]
    by_a, by_b = defaultdict(set), defaultdict(set)
    for a, b in rows:
        by_a[a].add(b)
        by_b[b].add(a)
    return {a: b for a, b in rows if len(by_a[a]) == 1 and len(by_b[b]) == 1}


def pairs_document(source, target, found, names):
    pairs = [{"a": a, "b": b, "note": "%s. Body match, %s tier: %s." % (names.get(a, a), tier, why)}
             for a, (b, tier, why) in sorted(found.items())]
    return {"schema": 1, "from": source, "to": target, "pairs": pairs}


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("source", help="program pairs are taken from, as nocedit.exe")
    ap.add_argument("target", help="program pairs are made in, as bw1.exe")
    ap.add_argument("--anchors", action="append", default=[], help="make_sibling_anchors.py output")
    ap.add_argument("--pairs", action="append", default=[], help="a sibling_manual_pairs.json")
    ap.add_argument("--min-insns", type=int, default=12,
                    help="shortest body taken on a unique key alone (default 12)")
    ap.add_argument("--out", help="write the new pairs as sibling_manual_pairs schema")
    ap.add_argument("--verify", help="a sibling_manual_pairs.json whose pairs to judge")
    args = ap.parse_args(argv)
    src_image, tgt_image = sm.Image(args.source), sm.Image(args.target)
    src, tgt = read_bodies(src_image), read_bodies(tgt_image)
    seeds = load_seeds(args.anchors, args.pairs)
    found = match(src, tgt, seeds, args.min_insns)
    tiers = Counter(tier for _, tier, _ in found.values())
    print("%s -> %s: %d seeds, %d new pairs (%s)" % (
        args.source, args.target, len(seeds), len(found),
        ", ".join("%s %d" % kv for kv in sorted(tiers.items()))))
    names = {a: f.get("name", a) for a, f in src_image.by_addr.items()}
    if args.out:
        with open(args.out, "w") as fh:
            json.dump(pairs_document(args.source, args.target, found, names), fh, indent=1)
            fh.write("\n")
    if args.verify:
        with open(args.verify) as fh:
            judged = [(r["a"].lower(), r["b"].lower()) for r in json.load(fh)["pairs"]]
        forward = dict(seeds, **{a: b for a, (b, _, _) in found.items()})
        verdicts = verify(src, tgt, judged, forward)
        print("verified %d: %s" % (len(verdicts), ", ".join(
            "%s %d" % kv for kv in sorted(Counter(verdicts.values()).items()))))
        for (a, b), verdict in sorted(verdicts.items()):
            if verdict == "contradicted":
                print("  contradicted  %s -> %s  %s" % (a, b, names.get(a, a)))


if __name__ == "__main__":
    main()
