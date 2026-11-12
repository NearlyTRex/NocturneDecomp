#!/usr/bin/env python3
"""How alike each named function is across the programs that share it.

A function is matched across programs by its class-and-method name, which the
sibling transfer carried over from nocedit. A name more than one function in a
program carries (each unit's `staticInit`) is qualified by its file, and one
still not unique is left out. Each pair of bodies is compared the way
diff_functions.py compares them: raw PE bytes, relocations masked, with a class
(identical, layout-drift, const-change, regalloc, operand-change, logic-change)
and a ratio, the share of the instruction sequence the two have in common.

Each program's report answers two questions:

  CHANGED FROM nocedit   which of its functions differ from the nocedit body
                         the decompilation started from, least alike first.
                         An identical one needs no update.
  GAMES DIFFER           which functions differ between the games (nocturne
                         and the three Blair Witch builds) that have them. A
                         function the same in every game needs one version,
                         not a hybrid.

It also lists the functions nocedit does not have. The reports go to
annotations/<program>/reports/sibling_similarity.txt, with every pair in
sibling_similarity.json beside it.

Reads the exported functions and the raw PEs. No Ghidra.

    python3 scripts/Python/report_sibling_similarity.py
    python3 scripts/Python/report_sibling_similarity.py nocedit.exe bw1.exe bw3.exe
"""

import argparse
import json
import os
import sys
from collections import Counter, defaultdict
from itertools import combinations

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import diff_functions as df  # noqa: E402
import sibling_match as sm  # noqa: E402

REFERENCE = "nocedit.exe"
DEFAULT_PROGRAMS = (REFERENCE, "nocturne.exe", "bw1.exe", "blairwitch2.exe", "bw3.exe")
CLASSES = ("identical", "layout-drift", "const-change", "regalloc", "operand-change",
           "logic-change", "undecodable")
SHORT = {"nocedit.exe": "nocedit", "nocturne.exe": "nocturne", "bw1.exe": "bw1",
         "blairwitch2.exe": "bw2", "bw3.exe": "bw3"}
REPORT = "sibling_similarity"


def short(program):
    return SHORT.get(program, program)


def unit_file(unit):
    """core_fire.cpp -> fire.cpp: the file, without the folder the name puts first."""
    return unit.split("_", 1)[1] if unit and "_" in unit else unit


def keyed(functions):
    """name key -> function, for every named function. See the module docstring."""
    cores = defaultdict(list)
    for f in functions:
        unit, core = sm.split_qualified_name(f.get("name", ""))
        if core is not None:
            cores[core].append((unit, f))
    return cores


def match_keys(cores_by_program):
    """program -> {key: function}, with a key the same function's name in every program."""
    shared = {core for cores in cores_by_program.values()
              for core, fs in cores.items() if len(fs) > 1}
    out = {}
    for program, cores in cores_by_program.items():
        keys = defaultdict(list)
        for core, fs in cores.items():
            for unit, f in fs:
                keys["%s:%s" % (unit_file(unit), core) if core in shared else core].append(f)
        out[program] = {k: fs[0] for k, fs in keys.items() if len(fs) == 1}
    return out


def body_tokens(image, md, function):
    """diff_functions.tokens over the function's body ranges, or None when they hold no
    instruction (a range outside the file, or a 1-byte body Ghidra cut short)."""
    parts = []
    for b in function.get("body", []) or []:
        start, end = int(b["start"], 16), int(b["end"], 16) + 1
        buf = image.range_bytes(start, end)
        if buf:
            parts.append(buf)
    found = df.tokens(md, b"".join(parts), int(function["addr"], 16)) if parts else None
    return found if found and found[0] else None


def compare(tokens_by_program, keys_by_program):
    """key -> {(program_a, program_b): (class, ratio)}, over each pair both read."""
    out = defaultdict(dict)
    keys = set().union(*keys_by_program.values()) if keys_by_program else set()
    for key in keys:
        have = [p for p in keys_by_program if key in keys_by_program[p]
                and tokens_by_program[p].get(key) is not None]
        for a, b in combinations(have, 2):
            cls, dist, _detail = df.classify_tokens(tokens_by_program[a][key],
                                                    tokens_by_program[b][key])
            out[key][(a, b)] = (cls, round(1.0 - dist, 4))
    return out


def pair(pairs, a, b):
    """(class, ratio) for the two programs in either order, or None."""
    return pairs.get((a, b)) or pairs.get((b, a))


def cell(pairs, program, other):
    found = pair(pairs, program, other)
    return "%s %s" % (short(other), "%.3f %s" % (found[1], found[0]) if found else "-")


def line(name, pairs, program, others):
    return "  %-64s %s" % (name, "  ".join(cell(pairs, program, o) for o in others))


def summary(program, keys, pairs, others):
    out = []
    for other in others:
        found = [pair(pairs[k], program, other) for k in keys]
        found = [f for f in found if f]
        counts = Counter(c for c, _r in found)
        mean = sum(r for _c, r in found) / len(found) if found else 0.0
        out.append("  vs %-9s %5d shared, mean ratio %.3f   %s"
                   % (short(other), len(found), mean,
                      ", ".join("%s %d" % (c, counts[c]) for c in CLASSES if counts[c])))
    return out


def render(program, programs, keys_by_program, pairs, unreadable=()):
    """The report's lines for `program`; `unreadable` are its keys with no body to compare."""
    keys = keys_by_program[program]
    others = [p for p in programs if p != program]
    games = [p for p in programs if p != REFERENCE]
    name = {k: keys[k]["name"] for k in keys}
    lines = ["%s: %d named functions matched by name across %s"
             % (program, len(keys), ", ".join(short(p) for p in programs))]
    lines += summary(program, keys, pairs, others)

    if program != REFERENCE and REFERENCE in programs:
        changed = sorted((pair(pairs[k], program, REFERENCE)[1], name[k], k) for k in keys
                         if pair(pairs[k], program, REFERENCE)
                         and pair(pairs[k], program, REFERENCE)[0] != "identical")
        lines += ["", "-- CHANGED FROM %s --  %d (identical ones need no update)"
                  % (short(REFERENCE), len(changed))]
        lines += [line(n, pairs[k], program, others) for _r, n, k in changed]
        absent = sorted((name[k], k) for k in keys if k not in keys_by_program[REFERENCE])
        lines += ["", "-- NOT IN %s --  %d" % (short(REFERENCE), len(absent))]
        lines += [line(n, pairs[k], program, others) for n, k in absent]

    agree, differ = 0, []
    for k in keys:
        have = [g for g in games if k in keys_by_program[g]]
        found = [pair(pairs[k], a, b) for a, b in combinations(have, 2)]
        if len(have) < 2 or None in found:
            continue
        if all(c == "identical" for c, _r in found):
            agree += 1
        else:
            differ.append((min(r for _c, r in found), name[k], k))
    lines += ["", "-- GAMES DIFFER --  %d differ between the games that have them, %d the same "
              "in every one" % (len(differ), agree)]
    lines += [line(n, pairs[k], program, others) for _r, n, k in sorted(differ)]
    lines += ["", "-- NO BODY --  %d whose exported body holds no instruction, so nothing "
              "compares them; a 1-byte body is a function boundary to fix" % len(unreadable)]
    lines += ["  %-64s %d bytes" % (name[k], sum(b.get("size", 0) for b in keys[k].get("body", [])))
              for k in sorted(unreadable, key=lambda k: name[k])]
    return lines


def as_json(program, keys_by_program, pairs):
    """{name: {other program: {addr, class, ratio}}} for `program`."""
    out = {}
    for k, f in sorted(keys_by_program[program].items(), key=lambda kv: kv[1]["name"]):
        row = {}
        for other, okeys in keys_by_program.items():
            found = pair(pairs[k], program, other) if other != program else None
            if found:
                row[other] = {"addr": okeys[k]["addr"], "class": found[0], "ratio": found[1]}
        out[f["name"]] = row
    return out


def load(programs):
    """(keys_by_program, tokens_by_program) for the programs' exports and PEs."""
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    cores = {p: keyed(sm._load_buckets(p, "functions"))  # pylint: disable=protected-access
             for p in programs}
    keys_by_program = match_keys(cores)
    tokens_by_program = {}
    for p in programs:
        image = df.Image(sm.find_program_exe(p))
        tokens_by_program[p] = {k: body_tokens(image, md, f)
                                for k, f in keys_by_program[p].items()}
    return keys_by_program, tokens_by_program


def write_reports(programs):
    """Write each program's report; returns [(path, first line)]."""
    keys_by_program, tokens_by_program = load(programs)
    pairs = compare(tokens_by_program, keys_by_program)
    written = []
    for program in programs:
        unreadable = {k for k, t in tokens_by_program[program].items() if t is None}
        lines = render(program, programs, keys_by_program, pairs, unreadable)
        base = os.path.join(sm.ANNOTATIONS, program, "reports", REPORT)
        os.makedirs(os.path.dirname(base), exist_ok=True)
        with open(base + ".txt", "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines) + "\n")
        with open(base + ".json", "w", encoding="utf-8") as fh:
            json.dump(as_json(program, keys_by_program, pairs), fh, indent=1, sort_keys=True)
        written.append((base + ".txt", lines[0]))
    return written


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    args = ap.parse_args(argv)
    for path, first in write_reports(args.programs):
        print("%s\n  -> %s" % (first, os.path.relpath(path)))


if __name__ == "__main__":
    main()
