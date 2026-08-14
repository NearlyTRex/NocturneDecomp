#!/usr/bin/env python3
"""Check that every class method actually receives its own class as `this_ptr`.

The naming schema `<tu>_<Class>_<method>_FUN_<addr>` is an assertion: it says
this function is a member of `Class`, so its first parameter is the `this`
pointer and has type `Class *`. Nothing enforced that, and the failures are
silent in three different ways:

  NAME       the receiver is typed correctly but called something else, so a
             reader cannot tell the implicit `this` from a real argument, and
             tooling keyed on `this_ptr` skips the function.
  TYPE       the name claims one class and the parameter says another. Every
             instance found so far is one class spelled two ways -- `CWaypoint`
             vs the real `CWayPoint`, `CMinecar` vs `CMineCar`, `CVector` vs
             `CVector3f`. Two spellings of one class is a defect in itself: it
             splits greps and invites a second, divergent struct.
  NO_PARAMS  a member function with no parameters at all cannot receive `this`,
             so the prototype is simply wrong and every caller decompiles
             against it.

For TYPE the tool says which side to fix rather than just flagging a mismatch.
It reads the real type list out of include/types/classes/, so when the name's
class does not exist as a type and the parameter's does, the *name* is what is
wrong -- which is the case for all of them today.

Reads exported annotations only. No Ghidra, no project lock.

    python3 scripts/Python/check_this_ptr.py                 # both builds
    python3 scripts/Python/check_this_ptr.py nocturne.exe
    python3 scripts/Python/check_this_ptr.py --show 40

Exit status is 1 if anything is reported, so this can gate a build.
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm

DEFAULT_PROGRAMS = ("nocedit.exe", "nocturne.exe")
SKIP_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                         "check_this_ptr_skip.txt")

# <tu>_<Class>_<method>_FUN_<addr>. The class is the first `C`-prefixed
# component after the translation unit, which is what the schema promises.
METHOD_RE = re.compile(
    r'^(?P<tu>[A-Za-z0-9_]+\.c(?:pp)?)_(?P<cls>C[A-Z][A-Za-z0-9]*)_'
    r'(?P<method>.+)_FUN_[0-9a-fA-F]+$')

RECEIVER = "this_ptr"


def load_skip(path):
    """-> set of `<program>:<symbol>` or bare `<symbol>` exemptions."""
    skip = set()
    if os.path.exists(path):
        with open(path) as fh:
            for line in fh:
                line = line.split("#", 1)[0].strip()
                if line:
                    skip.add(line)
    return skip


def known_classes(program):
    """-> {ClassName} that actually exist as types, from include/types/classes."""
    d = os.path.join(sm.ANNOTATIONS, program, "pseudocode", "include",
                     "types", "classes")
    return {os.path.splitext(os.path.basename(p))[0]
            for p in glob.glob(os.path.join(d, "*.h"))}


def norm_type(t):
    """`CDemonActor *` and `CDemonActor*` are the same type."""
    return (t or "").replace(" ", "")


def check(program, skip):
    classes = known_classes(program)
    findings = []
    total = 0

    for path in sorted(glob.glob(os.path.join(
            sm.ANNOTATIONS, program, "functions", "functions_bucket_*.json"))):
        if os.path.basename(path).endswith("_buckets.json"):
            continue
        with open(path) as fh:
            doc = json.load(fh)
        for e in doc if isinstance(doc, list) else []:
            name = e.get("name") or ""
            m = METHOD_RE.match(name)
            if not m:
                continue
            total += 1
            if name in skip or ("%s:%s" % (program, name)) in skip:
                continue

            cls = m.group("cls")
            params = (e.get("vars") or {}).get("params") or []
            if not params:
                findings.append({"kind": "NO_PARAMS", "name": name,
                                 "addr": e.get("addr"), "cls": cls,
                                 "have_name": None, "have_type": None})
                continue

            p0 = params[0]
            name_ok = p0.get("name") == RECEIVER
            type_ok = norm_type(p0.get("type")) == norm_type(cls + "*")
            if name_ok and type_ok:
                continue
            kind = ("TYPE" if name_ok else "NAME" if type_ok else "BOTH")
            findings.append({"kind": kind, "name": name, "addr": e.get("addr"),
                             "cls": cls, "have_name": p0.get("name"),
                             "have_type": p0.get("type"),
                             "cls_is_a_type": cls in classes})
    return total, findings


def verdict(f):
    """Which side to fix, for the mismatches where that is knowable."""
    if f["kind"] not in ("TYPE", "BOTH"):
        return None
    have = norm_type(f["have_type"]).rstrip("*")
    if not f.get("cls_is_a_type") and have:
        return ("the NAME is wrong: %s is not a type, %s is -- rename the "
                "function to %s" % (f["cls"], have, have))
    return "name and parameter disagree; check the assembly for the real receiver"


def report(program, total, findings, show):
    print("=" * 78)
    print("%s   %d functions match <tu>_<Class>_<method>_FUN_<addr>"
          % (program, total))
    print("=" * 78)

    by = defaultdict(list)
    for f in findings:
        by[f["kind"]].append(f)

    counts = Counter(f["kind"] for f in findings)
    print("   ok         %d" % (total - len(findings)))
    for k in ("NAME", "TYPE", "BOTH", "NO_PARAMS"):
        print("   %-10s %d" % (k, counts.get(k, 0)))

    for kind in ("TYPE", "BOTH", "NO_PARAMS", "NAME"):
        rows = by.get(kind)
        if not rows:
            continue
        print("\n-- %s --  %d" % (kind, len(rows)))
        for f in rows[:show]:
            print("\n  %s  %s" % (f["addr"], f["name"]))
            if kind == "NO_PARAMS":
                print("        member function declares no parameters, so it "
                      "cannot receive this")
                print("        expected first parameter: %s *%s"
                      % (f["cls"], RECEIVER))
            else:
                print("        first parameter is  %s %s"
                      % (f["have_type"], f["have_name"]))
                print("        schema requires     %s *%s" % (f["cls"], RECEIVER))
            v = verdict(f)
            if v:
                print("        %s" % v)
        if len(rows) > show:
            print("\n  ... %d more (use --show)" % (len(rows) - show))

    return len(findings)


def main():
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    ap.add_argument("--show", type=int, default=10,
                    help="max findings to print per category")
    ap.add_argument("--skip-file", default=SKIP_PATH)
    args = ap.parse_args()

    skip = load_skip(args.skip_file)
    if skip:
        print("%s: %d exemption(s)\n"
              % (os.path.basename(args.skip_file), len(skip)))

    bad = 0
    for program in (args.programs or list(DEFAULT_PROGRAMS)):
        total, findings = check(program, skip)
        bad += report(program, total, findings, args.show)
        print()

    if bad:
        print("FAIL: %d class method(s) do not take `%s` of their own class"
              % (bad, RECEIVER))
    else:
        print("OK: every class method takes `%s` of its own class" % RECEIVER)
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
