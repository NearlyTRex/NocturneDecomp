#!/usr/bin/env python3
# Name still-unnamed functions from the __FILE__ path literals they reference.
#
# The original sources compiled error/assert messages that carry the source file
# they came from, e.g. "..\core\game.cpp". A function that references one of
# those literals is (almost always) compiled from that translation unit, which is
# enough to promote a bare `FUN_004a57c0` to `core_game.cpp_FUN_004a57c0` --
# matching the `<dir>_<file>.<ext>[_<Class>_<method>]_FUN_<addr>` convention the
# rest of the program already uses.
#
# This is a ONE-TIME cleanup pass over the leftovers, unrelated to where the
# exporter files pseudocode on disk. It renames ONLY bare `FUN_<hex>` functions;
# anything already carrying a real name is reported and left untouched.
#
# Report-first; --apply mutates + saves.
#
# Usage (PyGhidra headless):
#   python name_functions_from_file_literals.py <project_dir> <project_name> [program_name]
#   python name_functions_from_file_literals.py ./projects NocturneEdit nocturne.exe
#   python name_functions_from_file_literals.py ./projects NocturneEdit nocturne.exe --apply
#
# Note: pass ABSOLUTE paths and set GHIDRA_INSTALL_DIR, per the other headless
# scripts in this directory.
#
#@author NearlyTRex
#@category Annotations

import os
import re
import sys
import argparse
from collections import Counter, defaultdict

# A __FILE__ literal as MSVC/Watcom emitted it: "..\<dir>\<file>.c" / ".cpp".
FILE_LITERAL_RE = re.compile(r'^\.\.[\\/](.+\.(?:c|cpp))$', re.IGNORECASE)

# Only the plainest Ghidra placeholder names are eligible. `thunk_FUN_*`,
# `crt_math.c_FUN_*` and anything hand-named are deliberately excluded.
BARE_FUN_RE = re.compile(r'^FUN_[0-9a-fA-F]+$')

# Characters a captured path may contain before we trust it as a symbol name.
SAFE_PATH_RE = re.compile(r'^[A-Za-z0-9_./]+$')

# Files whose literal is present but whose attribution is known to be wrong, so
# the functions must be named by hand instead.
#   engine/special.c -- the literal is the name of the DLL-side code, not of the
#   translation unit these functions were actually compiled from.
DEFAULT_EXCLUDED_FILES = ("engine/special.c",)


def collect_file_literals(program):
    """Map address -> normalized source path for every __FILE__-style string.

    Returns (literals, skipped) where literals is {addr_string: "core/game.cpp"}
    and skipped lists values that matched the shape but not SAFE_PATH_RE.
    """
    literals = {}
    skipped = []
    for data in program.getListing().getDefinedData(True):
        if not data.hasStringValue():
            continue
        try:
            value = data.getValue()
        except Exception:
            continue
        if value is None:
            continue
        m = FILE_LITERAL_RE.match(str(value).strip())
        if not m:
            continue
        rel = m.group(1).replace("\\", "/")
        if not SAFE_PATH_RE.match(rel):
            skipped.append(str(value))
            continue
        literals[str(data.getAddress())] = rel
    return literals, skipped


def plan(program, literals, excluded):
    """Resolve each bare FUN_* that references a file literal; classify it.

    Two detection passes are needed, because the compiler materializes the
    __FILE__ pointer in two different ways:

      refs    - the operand carries a real Ghidra reference
      scalar  - the address is a bare immediate ("MOV ECX,0x57e4fa") that
                auto-analysis never turned into a reference. The decompiler
                still renders it as the string, so a refs-only scan silently
                under-reports; roughly a tenth of the sites look like this.

    The scalar pass is restricted to bare FUN_* bodies, since those are the only
    ones eligible for renaming. NAMED rows therefore come from the refs pass
    only and are informational.

    action is one of:
      RENAME     - exactly one file literal referenced; eligible
      AMBIGUOUS  - references literals from two or more files; needs a human
      EXCLUDED   - sole literal is in the exclusion list (rename by hand)
      NAMED      - references a literal but already has a real name; untouched
    """
    from ghidra.program.model.scalar import Scalar

    fm = program.getFunctionManager()
    ref_mgr = program.getReferenceManager()
    listing = program.getListing()
    space = program.getAddressFactory().getDefaultAddressSpace()

    # func entry -> {source path: [referencing addresses]}
    hits = defaultdict(lambda: defaultdict(list))

    # Pass A: real references, from anywhere in the program.
    for addr_str, rel in literals.items():
        addr = space.getAddress(addr_str)
        for ref in ref_mgr.getReferencesTo(addr):
            from_addr = ref.getFromAddress()
            func = fm.getFunctionContaining(from_addr)
            if func is None:
                continue  # referenced from a data table, not from code
            hits[func.getEntryPoint()][rel].append(str(from_addr))

    # Pass B: bare immediates inside bare FUN_* bodies.
    by_offset = {}
    for addr_str, rel in literals.items():
        by_offset[space.getAddress(addr_str).getOffset()] = rel
    for func in fm.getFunctions(True):
        if not BARE_FUN_RE.match(func.getName()):
            continue
        entry = func.getEntryPoint()
        for instr in listing.getInstructions(func.getBody(), True):
            for i in range(instr.getNumOperands()):
                for obj in instr.getOpObjects(i):
                    if not isinstance(obj, Scalar):
                        continue
                    rel = by_offset.get(obj.getUnsignedValue())
                    if rel is None:
                        continue
                    site = str(instr.getAddress())
                    if site not in hits[entry][rel]:
                        hits[entry][rel].append(site)

    rows = []
    for entry, by_file in hits.items():
        func = fm.getFunctionAt(entry)
        if func is None:
            continue
        current = func.getName()
        files = sorted(by_file)
        row = {
            "addr": "%08x" % entry.getOffset(),
            "current": current,
            "files": files,
            "sites": sorted(s for sites in by_file.values() for s in sites),
            "name": None,
        }
        if not BARE_FUN_RE.match(current):
            row["action"] = "NAMED"
        elif len(files) > 1:
            row["action"] = "AMBIGUOUS"
        elif files[0] in excluded:
            row["action"] = "EXCLUDED"
        else:
            row["action"] = "RENAME"
            row["name"] = "%s_FUN_%s" % (files[0].replace("/", "_"), row["addr"])
        rows.append(row)

    rows.sort(key=lambda r: int(r["addr"], 16))
    return rows


def apply(program, rows):
    """Apply RENAME rows. Returns count actually renamed."""
    from ghidra.program.model.symbol import SourceType
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    renamed = 0
    tx = program.startTransaction("Name functions from __FILE__ literals")
    ok = True
    try:
        for r in rows:
            if r["action"] != "RENAME":
                continue
            func = fm.getFunctionAt(space.getAddress(int(r["addr"], 16)))
            if func is None:
                r["action"] = "NO-FUNCTION"  # raced/removed since planning
                continue
            if not BARE_FUN_RE.match(func.getName()):
                r["action"] = "NAMED"  # renamed out from under us since planning
                continue
            try:
                func.setName(r["name"], SourceType.USER_DEFINED)
            except Exception as e:
                r["action"] = "FAILED"
                r["error"] = str(e)
                print("  FAILED %s  %s -> %s: %s"
                      % (r["addr"], r["current"], r["name"], e))
                continue
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


ACTIONS = ("RENAME", "AMBIGUOUS", "EXCLUDED", "FAILED", "NO-FUNCTION", "NAMED")


def write_report(out_path, program_name, rows, literals, skipped, excluded, applied):
    counts = Counter(r["action"] for r in rows)
    by_file = Counter(r["files"][0] for r in rows
                      if r["action"] == "RENAME")

    lines = []
    lines.append("Function naming from __FILE__ literals: %s" % program_name)
    lines.append("mode: %s" % ("APPLY" if applied else "report"))
    lines.append("file literals found: %d across %d source files"
                 % (len(literals), len(set(literals.values()))))
    lines.append("functions referencing one: %d   %s"
                 % (len(rows), "  ".join("%s=%d" % (a, counts[a])
                                         for a in ACTIONS if counts[a])))
    lines.append("excluded files: %s" % (", ".join(excluded) if excluded else "(none)"))
    lines.append("")

    if skipped:
        lines.append("== literals rejected as unsafe symbol names (%d) ==" % len(skipped))
        lines.extend("  %r" % s for s in skipped)
        lines.append("")

    if by_file:
        lines.append("== renames per source file (%d) ==" % sum(by_file.values()))
        for f, n in sorted(by_file.items()):
            lines.append("  %-28s %d" % (f, n))
        lines.append("")

    for action in ACTIONS:
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        for r in sub:
            name = r["name"] or "(none)"
            lines.append("  %s  %-46s  cur: %-24s  files: %s%s"
                         % (r["addr"], name, r["current"], ", ".join(r["files"]),
                            "  err: " + r["error"] if r.get("error") else ""))
            if action == "AMBIGUOUS":
                lines.append("        ref sites: %s" % ", ".join(r["sites"]))
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def main():
    p = argparse.ArgumentParser(
        description="Name bare FUN_* functions from the __FILE__ literals they reference.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--exclude", action="append", default=[], metavar="core/foo.cpp",
                   help="Additional source file to leave for manual naming (repeatable)")
    p.add_argument("--no-default-excludes", action="store_true",
                   help="Also rename the files excluded by default (%s)"
                        % ", ".join(DEFAULT_EXCLUDED_FILES))
    p.add_argument("--apply", action="store_true",
                   help="Rename + save the program (default: report only)")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    excluded = set(args.exclude)
    if not args.no_default_excludes:
        excluded.update(DEFAULT_EXCLUDED_FILES)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_file_literal_naming.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            print("Scanning defined strings for __FILE__ literals...")
            literals, skipped = collect_file_literals(program)
            print("  %d literal(s) across %d source file(s)"
                  % (len(literals), len(set(literals.values()))))

            rows = plan(program, literals, excluded)
            counts = write_report(out_path, args.program_name, rows, literals,
                                  skipped, sorted(excluded), args.apply)

            print("\n=== plan ===")
            for action in ACTIONS:
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
                print("\nNothing to rename.")
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
