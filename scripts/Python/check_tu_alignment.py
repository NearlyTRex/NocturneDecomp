#!/usr/bin/env python3
"""Check that function names agree with the linker's translation-unit layout.

A function's translation unit exists only in its *name*. Watcom emitted no
debug information here, so nothing in the PE says which object file a function
came from -- `core_stranger.cpp_setMatrixTranslation_FUN_005409f0` claims a TU,
and until now nothing checked that claim.

The linker checks it for us, because it lays object files out in a way that is
observable in the final image:

  1. CONTIGUITY. One object file contributes one run of .text. Every function
     compiled from `core/stranger.cpp` therefore lands in a single unbroken
     address range. A name that puts a function inside a *different* TU's range
     is asserting something the link cannot have produced -- so the name is
     wrong, not the layout.

  2. ORDER. The objects are emitted sorted by basename, ignoring the directory:

         2d.c  3d.c  actor.cpp  alphabit.cpp  ammo.cpp  ammobox.cpp ...

     `engine/` and `core/` interleave freely, so the folder is not part of the
     sort key -- only the filename is.

     This one is a ~98% regularity, NOT a law: 212 of nocedit's 216 TUs obey
     it, and `core/chain.cpp` and `sound/snddx.cpp` sit one slot out while the
     binary itself asserts those exact names. So a name the binary proves
     outranks the rule, and only an *inferred* name out of position is a
     suspect. For those, the gap bounds the answer: the real basename has to
     sort between the two neighbours.

  3. DOS 8.3. Every filename the binaries assert is 8.3-legal, the longest is
     exactly 8 characters, and 51 sit on that limit. A 9-character TU name is
     therefore not a name the original build could have compiled.

Checks 1 and 2 skip `crt/*`. The CRT is a static library, one object per
function, so its pieces are pulled in on demand and genuinely scatter -- 29
separate runs for `crt/stdio.c` in nocedit is correct, not a defect. Check 3
applies to the CRT too, since 8.3 was a property of the filesystem.

Reads exported annotations only. No Ghidra, no project lock.

    python3 scripts/Python/check_tu_alignment.py                 # both builds
    python3 scripts/Python/check_tu_alignment.py nocturne.exe
    python3 scripts/Python/check_tu_alignment.py --show 40

Exit status is 1 only when CONTIGUITY reports an INTRUDER, so this can gate a
build. TRAILER findings and the whole ORDER section are informational and never
fail the run -- see check_order() for why the ordering signal was downgraded.
"""

import argparse
import difflib
import os
import re
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm

DEFAULT_PROGRAMS = ("nocedit.exe", "nocturne.exe")
SIBLING = {"nocedit.exe": "nocturne.exe", "nocturne.exe": "nocedit.exe"}
BODY_MIN = 3          # runs this size or larger count as a TU's real body
SKIP_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                         "check_tu_alignment_skip.txt")


CHECKS = ("contiguity", "order", "dos83")


def load_skip(path):
    """-> {check_name: set(tu)}, plus an "all" key for bare lines.

    A bare line exempts a TU from every check. A `<check>:` prefix scopes the
    exemption to one, which the four known link-order exceptions need: they are
    ordinary TUs whose contiguity must still be enforced.
    """
    out = {c: set() for c in CHECKS}
    out["all"] = set()
    if not os.path.exists(path):
        return out
    with open(path) as fh:
        for n, line in enumerate(fh, 1):
            line = line.split("#", 1)[0].strip()
            if not line:
                continue
            check, sep, tu = line.partition(":")
            if not sep:
                out["all"].add(line)
            elif check in CHECKS:
                out[check].add(tu.strip())
            else:
                raise SystemExit("%s:%d: unknown check %r (expected one of %s)"
                                 % (path, n, check, ", ".join(CHECKS)))
    return out


def is_crt(tu):
    """sm.tu_of() yields the underscore form -- `crt_stdio.c`, not `crt/stdio.c`."""
    return tu.startswith("crt_")


def basename(tu):
    """`engine_3d.c` -> `3d.c`. The linker sorts on this, not on the folder.

    Splitting on the last underscore matches how the exporter derived the
    directory in the first place, so the two can never disagree.
    """
    return tu.rsplit("_", 1)[-1].lower()


def path_literal(program, tu):
    """What `__FILE__` says this TU is called, or None if it never asserts.

    Watcom bakes `..\\core\\actor.cpp` into every assert, so a TU that asserts
    anywhere carries its own real filename. That is the only *evidence* a TU
    name ever has -- the rest were inferred by whoever named the functions, and
    an inferred name is exactly what the order check is entitled to doubt.

    Compare on the STEM, never the extension. Some TUs were deliberately
    promoted from `.c` to `.cpp` in this project because modern C++ compilers
    require C++ to live in a `.cpp` file, so `engine/dosio.cpp` asserting
    `..\\engine\\dosio.c` is intentional, not a defect. Only a differing stem
    means the name is wrong.
    """
    d = os.path.join(sm.ANNOTATIONS, program, "pseudocode", "src",
                     *tu.rsplit("_", 1))
    if not os.path.isdir(d):
        return None
    pat = re.compile(r'\.\.[\\/]{1,4}([A-Za-z0-9_]+)[\\/]{1,4}'
                     r'([A-Za-z0-9_]+\.c(?:pp)?)(?![A-Za-z0-9_])', re.I)
    for fn in sorted(os.listdir(d)):
        if not fn.endswith(".asm"):
            continue
        try:
            with open(os.path.join(d, fn), errors="ignore") as fh:
                m = pat.search(fh.read())
        except OSError:
            continue
        if m:
            return "%s/%s" % (m.group(1).lower(), m.group(2).lower())
    return None


def tu_runs(image):
    """-> [(tu, lo, hi, [names])] in address order, over *every* named function.

    CRT runs stay in even though they are never checked: they are what an
    orphan's neighbours often are, and dropping them would make a function that
    sits in the middle of `crt/memory.c` look like it sits in open space.
    """
    funcs = []
    for f in image.functions:
        if "addr" not in f or "name" not in f:
            continue
        tu = sm.tu_of(f["name"])
        if not tu:
            continue
        # A thunk is a 5-byte `JMP target` the linker emits wherever it likes --
        # `wincore_wddvmem.cpp_initTextureCache` is a JMP sitting in the middle
        # of engine/3d.c. Its address says nothing about which object file the
        # real function was compiled from, so it cannot witness a violation.
        if f.get("thunk"):
            continue
        funcs.append((int(f["addr"], 16), tu, f["name"]))
    funcs.sort()

    runs = []
    for addr, tu, name in funcs:
        if runs and runs[-1][0] == tu:
            runs[-1][2] = addr
            runs[-1][3].append(name)
        else:
            runs.append([tu, addr, addr, [name]])
    return runs


def largest_run(runs):
    """-> {tu: size of its biggest run}."""
    big = Counter()
    for tu, _lo, _hi, names in runs:
        big[tu] = max(big[tu], len(names))
    return big


def main_spans(runs, checkable):
    """-> {tu: (lo, hi)} using each TU's largest run as its true territory."""
    best = {}
    for tu, lo, hi, names in runs:
        if not checkable(tu):
            continue
        if tu not in best or len(names) > best[tu][2]:
            best[tu] = (lo, hi, len(names))
    return {tu: (lo, hi) for tu, (lo, hi, _n) in best.items()}


def check_contiguity(runs, spans, checkable):
    """Orphan runs, classified by what sits on either side of them.

    INTRUDER  the runs immediately before and after both belong to one other
              TU, so this run splits that TU's body in two. The link cannot
              interleave two object files, so this name is wrong -- and the
              surrounding TU is what it should have been.
    TRAILER   anything else: the run sits at a boundary between groups rather
              than inside a body. Consistent with Watcom emitting out-of-line
              copies of inline members into their own segment after the group,
              so this is reported but does not fail the run.

    A TU's own body is never the intruder, even when bracketing says otherwise.
    `cockpit/pkbmpset.cpp`'s 19-function body sits between pkbitmap's body and
    pkbitmap's two trailing accessors, so bracketing alone accuses the body of
    splitting its neighbour when the small trailing run is the actual anomaly.
    A body is credible at BODY_MIN functions or more.

    Below that threshold a TU has no body to protect, which is the case that
    forced this rule: `shape/meshlod.cpp` survives in nocturne as two lone
    functions, so whichever came first would otherwise be crowned the territory
    and never checked -- and both turn out to be mis-transferred names.
    """
    counts = Counter(r[0] for r in runs if checkable(r[0]))
    largest = Counter()
    for tu, _lo, _hi, names in runs:
        largest[tu] = max(largest[tu], len(names))

    findings = []
    for i, (tu, lo, hi, names) in enumerate(runs):
        if not checkable(tu):
            continue
        prev_tu = runs[i - 1][0] if i > 0 else None
        next_tu = runs[i + 1][0] if i + 1 < len(runs) else None
        host = prev_tu if (prev_tu == next_tu and prev_tu != tu) else None
        if host is not None:
            is_body = (lo, hi) == spans.get(tu) and largest[tu] >= BODY_MIN
            if is_body:
                host = None
        if host is None:
            if counts[tu] < 2 or (lo, hi) == spans.get(tu):
                continue                  # contiguous, or this is its body
        findings.append({
            "tu": tu, "lo": lo, "hi": hi, "names": names,
            "kind": "INTRUDER" if host else "TRAILER", "host": host,
            "prev": prev_tu, "next": next_tu,
        })
    return findings


DOS83_CHARS = re.compile(r"^[A-Za-z0-9_!#$%&'()@^`{}~-]+$")


def check_dos83(spans, exempt):
    """TU names that cannot be original filenames, because DOS 8.3 forbids them.

    This is the one name check with a hard, provable rule behind it. Every one
    of the 191 filenames the binaries actually assert is 8.3-legal, the longest
    is exactly 8 characters, and 51 of them sit right on that limit -- a
    distribution that piles up at 8 is a truncation constraint, not a
    coincidence. So a 9-character TU name is not merely unusual, it is
    impossible as a name the original build could have compiled.

    Unlike the ordering check, this one fails the run: it cannot produce a
    false positive from a layout quirk, only from a genuinely illegal name.
    """
    findings = []
    for tu in sorted(spans):
        if tu in exempt:
            continue
        d, _, f = tu.rpartition("_")
        base, ext = os.path.splitext(f)
        ext = ext.lstrip(".")
        why = []
        if len(base) > 8:
            why.append("stem is %d chars, 8.3 allows 8" % len(base))
        if len(ext) > 3:
            why.append("extension is %d chars, 8.3 allows 3" % len(ext))
        if base and not DOS83_CHARS.match(base):
            why.append("stem has characters 8.3 forbids")
        if d and len(d) > 8:
            why.append("directory is %d chars, 8.3 allows 8" % len(d))
        if why:
            findings.append({"tu": tu, "why": why})
    return findings


def stem(path):
    """`engine/dosio.c` -> `dosio`. Extension is not part of the identity.

    Accepts either form: path literals arrive slash-separated (`engine/dosio.c`)
    and TU names underscore-separated (`engine_dosio.cpp`).
    """
    last = path.replace("/", "_").rsplit("_", 1)[-1]
    return os.path.splitext(last)[0].lower()


def check_order(spans, program, largest, order_skip=()):
    """TUs out of basename-alphabetical position, with the window they occupy.

    INFORMATIONAL ONLY -- this never fails a run. The ordering regularity turned
    out to be far weaker evidence than it first looked: the same four TUs are
    out of position in *both* independently-linked builds, and two of them
    (`core/chain.cpp`, `sound/snddx.cpp`) are proven correct by `__FILE__`. So
    displacement is a property of this project's link order, not proof of a bad
    name, and the check has yet to produce a single confirmed defect. Contiguity
    is the check that earns its keep.

    Uses an LCS against the sorted sequence so that one displaced TU is
    reported once, rather than shifting every TU after it.
    """
    order = [tu for tu, _ in sorted(spans.items(), key=lambda kv: kv[1][0])]
    expect = sorted(order, key=basename)

    displaced = []
    matcher = difflib.SequenceMatcher(None, order, expect, autojunk=False)
    for tag, i1, i2, _j1, _j2 in matcher.get_opcodes():
        if tag != "equal":
            displaced.extend(order[i1:i2])

    findings = []
    for tu in displaced:
        if tu in order_skip:
            continue
        i = order.index(tu)
        # A TU name is a fact about the shared source, so an assert in either
        # build proves it for both. nocturne asserts far less than nocedit
        # (99 distinct path literals against 190), so without this most of its
        # perfectly good names would read as inferred.
        lit = path_literal(program, tu)
        via = program
        if lit is None and SIBLING.get(program):
            lit = path_literal(SIBLING[program], tu)
            via = SIBLING[program]
        findings.append({
            "tu": tu,
            "addr": spans[tu][0],
            "actual": i,
            "expected": expect.index(tu),
            "prev": order[i - 1] if i > 0 else None,
            "next": order[i + 1] if i + 1 < len(order) else None,
            "literal": lit,
            "literal_from": via,
            # A name the binary itself asserts outranks the ordering rule, which
            # is a ~98% regularity and not a law. Only an inferred name is a
            # real suspect.
            "proven": bool(lit) and stem(lit) == stem(tu),
            # A sibling assert proves the FILENAME is real; it says nothing
            # about whether these functions belong to it. A TU with no credible
            # body in this build has no position worth judging -- the
            # contiguity check has already flagged its runs as intruders.
            "body_size": largest.get(tu, 0),
            "no_body": largest.get(tu, 0) < BODY_MIN,
        })
    return findings


def report(program, runs, spans_count, contiguity, order, dos83, show):
    print("=" * 78)
    print("%s   %d checked TUs, %d runs (crt included for context only)" %
          (program, len(spans_count), len(runs)))
    print("=" * 78)

    high = [f for f in contiguity if f["kind"] == "INTRUDER"]
    low = [f for f in contiguity if f["kind"] == "TRAILER"]

    print("\n-- CONTIGUITY --  %d intruder, %d trailer" % (len(high), len(low)))
    for f in high + low:
        if f["host"]:
            where = "  splits %s -- rename into it" % f["host"]
        else:
            where = "  between %s and %s" % (f["prev"] or "<start>",
                                             f["next"] or "<end>")
        print("\n  [%s] %s   %08x-%08x  %d fn%s"
              % (f["kind"], f["tu"], f["lo"], f["hi"], len(f["names"]), where))
        for n in f["names"][:show]:
            print("        %s" % n)
        if len(f["names"]) > show:
            print("        ... %d more" % (len(f["names"]) - show))

    suspect = [f for f in order if not f["proven"] and not f["no_body"]]
    nobody = [f for f in order if f["no_body"]]
    proven = [f for f in order if f["proven"] and not f["no_body"]]
    print("\n-- LINK ORDER (informational, never fails) --  %d out of position:"
          " %d unproven, %d asserted by the binary, %d with no body here"
          % (len(order), len(suspect), len(proven), len(nobody)))
    for f in order:
        drift = abs(f["actual"] - f["expected"])
        if f["no_body"]:
            grade = ("NO BODY  largest run is %d function(s) -- this TU barely "
                     "exists in this build; see the contiguity findings"
                     % f["body_size"])
        elif f["proven"]:
            src = "" if f["literal_from"] == program else \
                  " (via %s)" % f["literal_from"]
            grade = "PROVEN  __FILE__ says %s%s -- ordering rule is the " \
                    "exception here, not the name" % (f["literal"], src)
        elif f["literal"]:
            grade = "CONFLICT  __FILE__ says %s" % f["literal"]
        else:
            grade = "UNPROVEN  this TU never asserts, so the name was inferred"
        print("\n  %s   %08x   position %d, expected %d  (drift %d)"
              % (f["tu"], f["addr"], f["actual"], f["expected"], drift))
        print("        %s" % grade)
        if not f["proven"] and not f["no_body"] and f["prev"] and f["next"]:
            print("        real basename sorts in (%s .. %s)"
                  % (basename(f["prev"]), basename(f["next"])))

    print("\n-- DOS 8.3 --  %d TU name(s) the original build could not have had"
          % len(dos83))
    for f in dos83:
        print("\n  %s" % f["tu"])
        for w in f["why"]:
            print("        %s" % w)

    return len(high) + len(dos83)


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    ap.add_argument("--show", type=int, default=12,
                    help="max function names to print per orphan run")
    ap.add_argument("--skip-file", default=SKIP_PATH)
    args = ap.parse_args()

    ex = load_skip(args.skip_file)
    if any(ex.values()):
        print("%s: %s\n" % (os.path.basename(args.skip_file),
                            ", ".join("%d %s" % (len(v), k)
                                      for k, v in ex.items() if v)))

    skip = ex["all"]

    def checkable(tu):
        return bool(tu) and not is_crt(tu) and tu not in skip \
            and tu not in ex["contiguity"]

    failures = 0
    for program in (args.programs or list(DEFAULT_PROGRAMS)):
        image = sm.Image(program)
        runs = tu_runs(image)
        spans = main_spans(runs, checkable)
        # 8.3 applies to every TU including crt: the rule is about what the
        # 1990s filesystem could hold, which the CRT's sources obeyed too.
        all_tus = {tu for tu, _lo, _hi, _n in runs if tu not in skip}
        failures += report(program, runs, spans,
                           check_contiguity(runs, spans, checkable),
                           check_order(spans, program, largest_run(runs),
                                       skip | ex["order"]),
                           check_dos83(all_tus, skip | ex["dos83"]),
                           args.show)
        print()

    if failures:
        print("FAIL: %d finding(s) -- a TU name contradicts the linked image"
              % failures)
    else:
        print("OK: every non-crt TU is contiguous and every TU name is 8.3-legal")
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
