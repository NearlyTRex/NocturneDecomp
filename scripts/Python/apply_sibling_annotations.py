#!/usr/bin/env python3
# Apply a nocedit.exe -> nocturne.exe function mapping into the nocturne Ghidra
# program: names first, signatures only where independently verified.
#
# Consumes map_sibling_functions.py output (ideally after
# verify_sibling_signatures.py has annotated it with sig_verdict), and
# optionally wall_off_crt.py output so the CRT interior is left anonymous
# instead of being papered with runtime names nobody reads.
#
# Gating, because a wrong name is worse than no name -- it produces
# confident-looking decompiler output that is quietly false:
#
#   NAME_SIG    confidence + shape agree + sig_verdict == agree -> name & signature
#   NAME        passes the name gate, but the signature is unverified/conflicting
#   ALREADY     nocturne already carries this name
#   SKIP_CONF   below --min-confidence, or flagged ambiguous by the matcher
#   SKIP_SHAPE  bodies disagree too much in size to trust the pairing
#   SKIP_CRT    CRT interior: reachable only from other CRT, deliberately walled off
#   SKIP_NAMED  nocturne already has a non-placeholder name that differs; never
#               clobbered, reported for review instead
#
# The transferred name keeps nocedit's base but is re-suffixed with nocturne's
# own entry address, so `_FUN_<addr>` continues to match the function it names.
#
# Usage:
#   python apply_sibling_annotations.py ./projects NocturneEdit --mapping verified.json
#   python apply_sibling_annotations.py ./projects NocturneEdit --mapping verified.json \
#          --crt-wall crt_wall.json --signatures --apply
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys
from collections import Counter

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm

# Shape verdicts that are too weak to hang a name on by themselves.
WEAK_SHAPES = frozenset(("size_mismatch",))

ORDER = ["NAME_SIG", "NAME", "ALREADY", "SKIP_CONF", "SKIP_SHAPE",
         "SKIP_CRT", "SKIP_NAMED"]


def target_name(nocedit_name, nocturne_addr):
    """nocedit's name, re-suffixed with nocturne's entry address."""
    base = sm.strip_addr_suffix(nocedit_name)
    return "%s_FUN_%s" % (base, nocturne_addr.lower())


def plan(mapping, crt_wall, min_confidence, want_signatures, current_names):
    """Decide an action per pair without touching Ghidra."""
    interior = set()
    if crt_wall:
        interior = {a.lower() for a in crt_wall.get("crt_interior", [])}

    rows = []
    for p in mapping["pairs"]:
        b = p["b"].lower()
        want = target_name(p["name"], b)
        cur = current_names.get(b)
        row = {"a": p["a"], "b": b, "want": want, "current": cur,
               "confidence": p["confidence"],
               "shape": p.get("shape_agreement", "unshaped"),
               "sig_verdict": p.get("sig_verdict", "unverifiable"),
               "sig_detail": p.get("sig_detail", ""),
               "evidence": p.get("evidence", []),
               "detail": ""}

        if b in interior:
            row["action"] = "SKIP_CRT"
        elif cur == want:
            row["action"] = "ALREADY"
        elif cur is not None and not sm.is_unnamed(cur):
            row["action"] = "SKIP_NAMED"
            row["detail"] = "already named %s" % cur
        elif p["confidence"] < min_confidence or p.get("ambiguous"):
            row["action"] = "SKIP_CONF"
            row["detail"] = ("ambiguous" if p.get("ambiguous")
                             else "confidence %.2f" % p["confidence"])
        elif row["shape"] in WEAK_SHAPES:
            row["action"] = "SKIP_SHAPE"
            row["detail"] = row["shape"]
        elif want_signatures and row["sig_verdict"] == "agree":
            row["action"] = "NAME_SIG"
        else:
            row["action"] = "NAME"
            if want_signatures:
                row["detail"] = "signature %s" % row["sig_verdict"]
        rows.append(row)

    rows.sort(key=lambda r: r["b"])
    return rows


def apply_row(program, func, row, want_signatures):
    """Set the name, and the calling convention when the signature is verified."""
    from ghidra.program.model.symbol import SourceType
    func.setName(row["want"], SourceType.USER_DEFINED)
    if want_signatures and row["action"] == "NAME_SIG" and row.get("conv"):
        func.setCallingConvention(row["conv"])


def main():
    ap = argparse.ArgumentParser(
        description="Apply sibling-mapped names/signatures into nocturne.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--mapping", required=True,
                    help="map_sibling_functions.py output (optionally verified)")
    ap.add_argument("--crt-wall", help="wall_off_crt.py output; skips CRT interior")
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--signatures", action="store_true",
                    help="also set the calling convention where sig_verdict==agree")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    crt_wall = None
    if args.crt_wall:
        with open(args.crt_wall) as fh:
            crt_wall = json.load(fh)

    print("Loaded %d pairs from %s" % (len(mapping["pairs"]), args.mapping))
    if crt_wall:
        print("CRT wall: %d interior functions will be left anonymous"
              % len(crt_wall.get("crt_interior", [])))

    out_path = args.out or ("%s_sibling_annotations.txt" % args.program_name)
    project_path = os.path.abspath(args.project_path)

    # nocedit's convention per pair, for the signature step.
    conv_by_a = {p["a"]: p.get("conv") for p in mapping["pairs"]}

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            fm = program.getFunctionManager()
            funcs = {}
            for f in fm.getFunctions(True):
                funcs["%08x" % f.getEntryPoint().getOffset()] = f
            current = {a: f.getName() for a, f in funcs.items()}
            print("Program has %d functions" % len(funcs))

            rows = plan(mapping, crt_wall, args.min_confidence,
                        args.signatures, current)
            for r in rows:
                r["conv"] = conv_by_a.get(r["a"])
            missing = [r for r in rows if r["b"] not in funcs]
            for r in missing:
                r["action"] = "SKIP_NAMED"
                r["detail"] = "no function at this address in the program"

            counts = Counter(r["action"] for r in rows)

            lines = ["Sibling annotation report: %s <- %s"
                     % (args.program_name, mapping.get("from", "?")),
                     "mapping: %s   min-confidence: %.2f   signatures: %s"
                     % (args.mapping, args.min_confidence, bool(args.signatures)),
                     "mode: %s   %s"
                     % ("APPLY" if args.apply else "report",
                        "  ".join("%s=%d" % (k, counts[k]) for k in ORDER if counts[k])),
                     ""]
            for action in ORDER:
                sub = [r for r in rows if r["action"] == action]
                if not sub:
                    continue
                lines.append("== %s (%d) ==" % (action, len(sub)))
                for r in sub:
                    extra = ("  <- %s" % r["detail"]) if r["detail"] else ""
                    lines.append("  %s <- %s  %.2f  %-14s %s%s"
                                 % (r["b"], r["a"], r["confidence"], r["shape"],
                                    r["want"], extra))
                lines.append("")
            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")

            print("\n=== plan ===")
            for a in ORDER:
                if counts[a]:
                    print("  %-11s %d" % (a, counts[a]))
            print("Report written to: %s" % out_path)

            to_apply = [r for r in rows
                        if r["action"] in ("NAME", "NAME_SIG") and r["b"] in funcs]
            if args.apply and to_apply:
                print("\n[apply] %d function(s)..." % len(to_apply))
                tx = program.startTransaction("Apply sibling annotations")
                ok, done = True, 0
                try:
                    for r in to_apply:
                        apply_row(program, funcs[r["b"]], r, args.signatures)
                        done += 1
                except Exception as e:
                    ok = False
                    print("ERROR: %s" % e)
                    import traceback
                    traceback.print_exc()
                finally:
                    program.endTransaction(tx, ok)
                if ok and done:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Applied %d. Saving..." % done)
                    # project.save() alone silently discards program mutations.
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif not args.apply:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
