#!/usr/bin/env python3
# Name tridx7.dll CRT functions from the identification catalog.
#
# Reads the canonical TSV data file crt_functions.tsv (generated from the markdown
# catalog by extract_crt_catalog.py) and applies its proposed
# `crt_<header>.c_<name>_FUN_<addr>` names to the matching functions in a Ghidra
# program. Report-first; --apply mutates + saves.
#
# This script applies NAMES ONLY. Signatures / calling conventions are applied by the
# sibling apply_crt_signatures.py.
#
# Usage (PyGhidra headless):
#   python name_crt_functions.py <project_dir> <project_name> [program_name]
#   python name_crt_functions.py ./projects NocturneEdit tridx7.dll            # report only
#   python name_crt_functions.py ./projects NocturneEdit tridx7.dll --apply    # write + save
#   python name_crt_functions.py ./projects NocturneEdit tridx7.dll --apply --min-confidence L
#
# By default --apply writes H and M rows (--min-confidence M). Pass H for certain-only,
# or L for everything. NOTE: regenerate the TSV first if you edited the md
# (python extract_crt_catalog.py).
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import argparse

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

from crt_catalog import CATALOG_TSV, CONF_RANK, load_tsv

DEFAULT_CATALOG = CATALOG_TSV


def parse_catalog(path):
    """Load namable entries from the canonical TSV data file.

    Returns (entries, warnings). Validity (addr/name/conf) is already enforced at
    extraction time, so warnings only flags rows with an unknown confidence.
    """
    warnings = []
    entries = []
    for row in load_tsv(path):
        conf = row.get("conf", "").upper()
        if conf not in CONF_RANK:
            warnings.append("addr %s: unknown confidence %r -- skipped"
                            % (row.get("addr"), conf))
            continue
        entries.append({"addr": row["addr"].lower(), "name": row["name"], "conf": conf})
    return entries, warnings


def plan(program, entries, min_conf):
    """Resolve each catalog entry against the program; classify the action.

    action is one of:
      RENAME       - function exists, name differs, at/above confidence threshold
      ALREADY      - function already has the proposed name
      BELOW-CONF   - would rename, but confidence below --min-confidence threshold
      NO-FUNCTION  - no function defined at this exact entry point (needs define/boundary work)
    """
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    threshold = CONF_RANK[min_conf]

    rows = []
    for e in entries:
        addr = space.getAddress(int(e["addr"], 16))
        func = fm.getFunctionAt(addr)
        row = dict(e)
        row["current"] = None
        if func is None:
            row["action"] = "NO-FUNCTION"
        elif func.getName() == e["name"]:
            row["current"] = e["name"]
            row["action"] = "ALREADY"
        elif CONF_RANK[e["conf"]] < threshold:
            row["current"] = func.getName()
            row["action"] = "BELOW-CONF"
        else:
            row["current"] = func.getName()
            row["action"] = "RENAME"
        rows.append(row)

    rows.sort(key=lambda r: int(r["addr"], 16))
    return rows


def apply(program, rows):
    """Apply RENAME rows. Returns count actually renamed."""
    from ghidra.program.model.symbol import SourceType
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    renamed = 0
    tx = program.startTransaction("Name CRT functions from catalog")
    ok = True
    try:
        for r in rows:
            if r["action"] != "RENAME":
                continue
            func = fm.getFunctionAt(space.getAddress(int(r["addr"], 16)))
            if func is None:
                r["action"] = "NO-FUNCTION"  # raced/removed since planning
                continue
            func.setName(r["name"], SourceType.USER_DEFINED)
            renamed += 1
            print("  RENAME %s  %s -> %s" % (r["addr"], r["current"], r["name"]))
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return renamed if ok else 0


def write_report(out_path, program_name, rows, warnings, min_conf, applied):
    from collections import Counter
    counts = Counter(r["action"] for r in rows)
    lines = []
    lines.append("CRT naming report: %s" % program_name)
    lines.append("mode: %s   min-confidence: %s (applies rank >= %d)"
                 % ("APPLY" if applied else "report", min_conf, CONF_RANK[min_conf]))
    lines.append("catalog entries: %d   %s"
                 % (len(rows), "  ".join("%s=%d" % (k, counts[k]) for k in
                    ("RENAME", "ALREADY", "BELOW-CONF", "NO-FUNCTION") if counts[k])))
    lines.append("")

    if warnings:
        lines.append("== catalog warnings (%d) ==" % len(warnings))
        lines.extend("  " + w for w in warnings)
        lines.append("")

    for action in ("RENAME", "BELOW-CONF", "NO-FUNCTION", "ALREADY"):
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        for r in sub:
            cur = r["current"] if r["current"] is not None else "(none)"
            lines.append("  %s  [%s]  %-38s  cur: %s"
                         % (r["addr"], r["conf"], r["name"], cur))
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def main():
    p = argparse.ArgumentParser(
        description="Name CRT functions from the tridx7 identification catalog.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="tridx7.dll")
    p.add_argument("--catalog", default=DEFAULT_CATALOG,
                   help="Path to crt_functions.md (default: %(default)s)")
    p.add_argument("--min-confidence", default="M", choices=["H", "M", "L"],
                   help="Lowest confidence to rename under --apply (default M = H and M)")
    p.add_argument("--apply", action="store_true",
                   help="Rename + save the program (default: report only)")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    catalog_path = os.path.abspath(args.catalog)
    if not os.path.exists(catalog_path):
        print("ERROR: catalog not found: %s" % catalog_path)
        sys.exit(1)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_crt_naming.txt" % args.program_name)

    entries, warnings = parse_catalog(catalog_path)
    print("Parsed %d namable catalog entries from %s" % (len(entries), catalog_path))
    for w in warnings:
        print("  WARN: %s" % w)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            rows = plan(program, entries, args.min_confidence)

            counts = write_report(out_path, args.program_name, rows, warnings,
                                  args.min_confidence, args.apply)
            print("\n=== plan ===")
            for action in ("RENAME", "BELOW-CONF", "NO-FUNCTION", "ALREADY"):
                if counts[action]:
                    print("  %-12s %d" % (action, counts[action]))
            print("Report written to: %s" % out_path)

            n_rename = counts["RENAME"]
            if args.apply and n_rename:
                print("\n[apply] renaming %d function(s)..." % n_rename)
                renamed = apply(program, rows)
                if renamed:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Renamed %d. Saving program database..." % renamed)
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif args.apply:
                print("\nNothing to rename at min-confidence %s." % args.min_confidence)
            else:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1

    # os._exit() skips stdio buffer flushing; without this, redirected/piped
    # output is lost. Flush explicitly before the hard exit (the JVM can hang
    # on a clean sys.exit, hence os._exit).
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
