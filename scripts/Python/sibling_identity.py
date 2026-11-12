#!/usr/bin/env python3
"""Write each function's twins in the other programs into its pseudocode JSON.

Every per-function JSON under annotations/<program>/pseudocode/src gets a
`siblings` key: for each other program holding the same function, its address,
how the two bodies compare and how the pair was found.

    "siblings": {
      "bw1.exe":     {"addr": "00523980", "by": "name", "class": "identical", "ratio": 1.0},
      "nocedit.exe": {"addr": "0052cd70", "by": "name", "class": "logic-change", "ratio": 0.71}
    }

  by     name: the same class-and-method name, as report_sibling_similarity.py
         matches them. body: no name pairs them, but the two bodies are the same
         instructions with relocations masked, and no other function in either
         program has that body (at least MIN_BODY_INSTRUCTIONS long). This pairs
         the unnamed Blair Witch code each build shares.
  class  diff_functions.py's class: identical, layout-drift (only structure
         offsets differ), const-change, regalloc, operand-change, logic-change.
         Absent when either body holds no instruction.
  ratio  the share of the instruction sequence the two have in common.

A function with no twin has no `siblings` key. The pseudocode export writes these
files afresh, so export_annotations.py runs this after it.

Reads the exported functions, the raw PEs and the pseudocode tree. No Ghidra.

    python3 scripts/Python/sibling_identity.py                 # every program
    python3 scripts/Python/sibling_identity.py bw1.exe bw3.exe # write only these
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import defaultdict
from itertools import combinations

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import diff_functions as df  # noqa: E402
import report_sibling_similarity as rss  # noqa: E402
import sibling_match as sm  # noqa: E402

PROGRAMS = rss.DEFAULT_PROGRAMS
KEY = "siblings"
# A body this short (`xor eax,eax; ret`) is shared by unrelated functions.
MIN_BODY_INSTRUCTIONS = 4
FUN_SUFFIX = re.compile(r"FUN_([0-9a-fA-F]{8})\.json$")


def entry(addr, by, tokens_a, tokens_b):
    """One `siblings` value: the twin's address, how it was found and how alike it is."""
    out = {"addr": addr, "by": by}
    if tokens_a is not None and tokens_b is not None:
        cls, dist, _detail = df.classify_tokens(tokens_a, tokens_b)
        out["class"], out["ratio"] = cls, round(1.0 - dist, 4)
    return out


def pair_by_name(functions, tokens):
    """{program: {addr: {other: entry}}} for functions sharing a name key."""
    keys = rss.match_keys({p: rss.keyed(fs) for p, fs in functions.items()})
    out = {p: defaultdict(dict) for p in functions}
    for key in set().union(*keys.values()):
        have = [p for p in functions if key in keys[p]]
        for a, b in combinations(have, 2):
            fa, fb = keys[a][key], keys[b][key]
            ta, tb = tokens[a].get(fa["addr"]), tokens[b].get(fb["addr"])
            out[a][fa["addr"]][b] = entry(fb["addr"], "name", ta, tb)
            out[b][fb["addr"]][a] = entry(fa["addr"], "name", tb, ta)
    return out


def pair_by_body(functions, tokens, found):
    """Adds to `found` the pairs no name made: one body, unique on both sides."""
    for a, b in combinations(functions, 2):
        by_body = {}
        for p, other in ((a, b), (b, a)):
            bodies = defaultdict(list)
            for f in functions[p]:
                t = tokens[p].get(f["addr"])
                if t is not None and len(t[0]) >= MIN_BODY_INSTRUCTIONS and other not in found[p].get(f["addr"], {}):
                    bodies[repr(t)].append(f["addr"])
            by_body[p] = bodies
        for body, addrs_a in by_body[a].items():
            addrs_b = by_body[b].get(body, [])
            if len(addrs_a) == 1 and len(addrs_b) == 1:
                x, y = addrs_a[0], addrs_b[0]
                found[a][x][b] = entry(y, "body", tokens[a][x], tokens[b][y])
                found[b][y][a] = entry(x, "body", tokens[b][y], tokens[a][x])
    return found


def function_tokens(image, md, functions):
    """{addr: tokens or None} for every function."""
    return {f["addr"]: rss.body_tokens(image, md, f) for f in functions}


def compute(programs=PROGRAMS, load=None, image_of=None):
    """{program: {addr: {other: entry}}} across `programs`."""
    load = load or (lambda p: sm._load_buckets(p, "functions"))  # pylint: disable=protected-access
    image_of = image_of or (lambda p: df.Image(sm.find_program_exe(p)))
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    functions = {p: [f for f in load(p) if f.get("addr")] for p in programs}
    tokens = {p: function_tokens(image_of(p), md, functions[p]) for p in programs}
    return pair_by_body(functions, tokens, pair_by_name(functions, tokens))


def function_jsons(src_dir):
    """{addr: path} of each per-function JSON under a pseudocode src/ tree."""
    out = {}
    for path in glob.glob(os.path.join(src_dir, "**", "*.json"), recursive=True):
        m = FUN_SUFFIX.search(os.path.basename(path))
        if m:
            out[m.group(1).lower()] = path
    return out


def write_one(path, siblings):
    """Set or clear the key in one file, as the exporter formats it; True if it changed."""
    with open(path, encoding="utf-8") as fh:
        text = fh.read()
    data = json.loads(text)
    if siblings:
        data[KEY] = {p: siblings[p] for p in sorted(siblings)}
    else:
        data.pop(KEY, None)
    new = json.dumps(data, indent=2, sort_keys=True)
    if new.rstrip("\n") == text.rstrip("\n"):
        return False
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(new)
    return True


def annotate(program, siblings, src_dir=None):
    """Write `program`'s siblings into its tree; returns (files, changed, with twins)."""
    src_dir = src_dir or os.path.join(sm.ANNOTATIONS, program, "pseudocode", "src")
    paths = function_jsons(src_dir)
    by_addr = {a.lower(): s for a, s in siblings.items()}
    changed = sum(write_one(path, by_addr.get(addr)) for addr, path in sorted(paths.items()))
    return len(paths), changed, sum(1 for a in paths if by_addr.get(a))


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(PROGRAMS),
                    help="programs whose JSON to write (all five are always compared)")
    args = ap.parse_args(argv)
    found = compute()
    for program in args.programs:
        if program not in found:
            print("%s: not one of the compared programs (%s); skipped" % (program, ", ".join(PROGRAMS)))
            continue
        files, changed, twinned = annotate(program, found[program])
        print("%s: %d function JSON(s), %d with siblings, %d rewritten" % (program, files, twinned, changed))
    return 0


if __name__ == "__main__":
    sys.exit(main())
