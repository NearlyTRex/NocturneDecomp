#!/usr/bin/env python3
# Normalize every defined string in a Ghidra program to a C-compatible label.
#
# This is the headless / batch equivalent of pressing Shift+L (the
# create_terminated_string.py GUI script) on every string in the program. Both
# paths share the same naming helpers from ghidra_annotations.util.string, so the
# labels this produces are byte-identical to what Shift+L would produce.
#
# For each defined string it:
#   1. retypes the data to TerminatedCString (Ghidra's auto-analysis leaves most
#      strings as fixed-length `string`, which carries padding into the export), and
#   2. replaces the label with `s_<normalized value, 24 chars>_<addr>`, sanitized to
#      a valid C identifier and marked USER_DEFINED so it survives export/import.
#
# Ghidra's auto-generated labels keep the raw string text, so anything with `.`,
# `:`, `%`, `"`, `{`, spaces, etc. is not a legal C identifier and breaks the
# generated headers. Those are exactly the ones this fixes.
#
# Report-first; --apply mutates + saves (via DomainFile.save, the only thing that
# persists headless mutations).
#
# Usage (PyGhidra headless):
#   python normalize_strings.py <project_dir> <project_name> [program_name]
#   python normalize_strings.py ./projects NocturneEdit nocturne.exe            # report only
#   python normalize_strings.py ./projects NocturneEdit nocturne.exe --apply    # write + save
#
# Safety: an address carrying a real (non-auto) symbol name is never clobbered --
# those are reported as SKIP-NAMED. Pass --force to relabel them anyway.
#
#@author NearlyTRex
#@category Annotations

import os
import re
import sys
import argparse
from collections import Counter

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

# Ghidra's auto-generated string labels: s_<text>_<addr> for ASCII, u_<text>_<addr>
# for unicode. Only these are throwaway and safe to replace. Every other name --
# DAT_/PTR_/LAB_ data labels, caseD_N switch destinations, anything hand-chosen or
# set by an importer -- belongs to something else and is reported as SKIP-NAMED.
AUTO_LABEL_RE = re.compile(r'^(s_|u_)')

# Max bytes to scan for the NUL terminator.
MAX_STRING_BYTES = 8192

# Actions
RETYPE_RELABEL = "RETYPE+RELABEL"
RETYPE = "RETYPE"
RELABEL = "RELABEL"
OK = "OK"
SKIP_NAMED = "SKIP-NAMED"
SKIP_CODE = "SKIP-CODE"
SKIP_UNICODE = "SKIP-UNICODE"
SKIP_NOVALUE = "SKIP-NOVALUE"
SKIP_UNTERMINATED = "SKIP-UNTERMINATED"

ACTION_ORDER = [RETYPE_RELABEL, RETYPE, RELABEL, SKIP_NAMED, SKIP_CODE, SKIP_UNICODE,
                SKIP_NOVALUE, SKIP_UNTERMINATED, OK]
MUTATING = (RETYPE_RELABEL, RETYPE, RELABEL)


def scan_c_string_length(memory, addr):
    """Byte length of the NUL-terminated string at addr, terminator included.

    Returns None if no terminator is found within MAX_STRING_BYTES or the memory
    is unreadable -- either way the data is not a plain C string and is left alone.
    """
    from ghidra.program.model.mem import MemoryAccessException
    try:
        for i in range(MAX_STRING_BYTES):
            if memory.getByte(addr.add(i)) == 0:
                return i + 1
    except MemoryAccessException:
        return None
    except Exception:
        return None
    return None


def plan(program, force=False, include_code=False):
    """Classify every defined string in the program. Returns (rows, warnings)."""
    from ghidra_annotations.util.string import (
        is_string_data_type_obj, normalize_string_name, sanitize_c_identifier,
        read_likely_string)

    memory = program.getMemory()
    listing = program.getListing()
    symbol_table = program.getSymbolTable()

    rows = []
    warnings = []

    for data in listing.getDefinedData(True):
        dt = data.getDataType()
        if not is_string_data_type_obj(dt):
            continue

        addr = data.getMinAddress()
        dt_name = str(dt.getName())
        row = {
            "addr": str(addr),
            "_addr": addr,
            "type": dt_name,
            "value": None,
            "label": None,
            "current": None,
            "length": None,
            "retype": False,
            "relabel": False,
            "action": OK,
        }
        rows.append(row)

        # String data inside an executable block is mis-analysis (string bytes
        # laid over instructions, typically at a switch-table destination).
        # Retyping/relabelling those would damage the code, not clean it up.
        if not include_code:
            block = memory.getBlock(addr)
            if block is not None and block.isExecute():
                row["action"] = SKIP_CODE
                syms = list(symbol_table.getSymbols(addr))
                row["current"] = str(syms[0].getName()) if syms else None
                continue

        # Unicode strings are relabel-only: their byte length is not len(value)+1
        # and TerminatedCString would mis-size the data.
        is_unicode = "unicode" in dt_name.lower()

        # Prefer the value Ghidra already decoded; fall back to reading memory
        # (same order as create_or_replace_string).
        value = None
        try:
            raw = data.getValue()
            if raw is not None:
                value = str(raw)
        except Exception:
            value = None
        if not value:
            value = read_likely_string(memory, addr)
        if not value:
            row["action"] = SKIP_NOVALUE
            continue
        row["value"] = value

        # Desired label -- identical construction to create_or_replace_string.
        string_name = normalize_string_name(value, max_length=24)
        label = sanitize_c_identifier("s_%s_%s" % (string_name, str(addr).replace("0x", "")))
        row["label"] = label

        # Existing symbols: protect anything deliberately named.
        symbols = list(symbol_table.getSymbols(addr))
        names = [str(s.getName()) for s in symbols]
        row["current"] = names[0] if names else None
        protected = [n for n in names if not AUTO_LABEL_RE.match(n) and n != label]
        if protected and not force:
            row["action"] = SKIP_NAMED
            row["current"] = protected[0]
            continue

        row["relabel"] = label not in names

        if not is_unicode:
            length = scan_c_string_length(memory, addr)
            if length is None:
                # No terminator in range -- do not touch the data type, but the
                # label is still safe to fix.
                row["action"] = RELABEL if row["relabel"] else OK
                if not row["relabel"]:
                    row["action"] = SKIP_UNTERMINATED
                warnings.append("%s: no NUL terminator within %d bytes (label only)"
                                % (addr, MAX_STRING_BYTES))
                continue
            row["length"] = length
            if length != len(value) + 1:
                warnings.append("%s: decoded value is %d chars but %d bytes to NUL "
                                "(label only, data left as %s)"
                                % (addr, len(value), length, dt_name))
            else:
                row["retype"] = dt_name != "TerminatedCString"

        if row["retype"] and row["relabel"]:
            row["action"] = RETYPE_RELABEL
        elif row["retype"]:
            row["action"] = RETYPE
        elif row["relabel"]:
            row["action"] = RELABEL
        elif is_unicode:
            row["action"] = SKIP_UNICODE if dt_name != "TerminatedCString" else OK
        else:
            row["action"] = OK

    return rows, warnings


def apply_rows(program, rows, progress_every=500):
    """Apply every mutating row. Returns (retyped, relabeled)."""
    from ghidra.program.model.data import DataUtilities, TerminatedStringDataType
    from ghidra.program.model.symbol import SourceType
    from ghidra_annotations.util.namespace import get_or_create_namespace

    listing = program.getListing()
    symbol_table = program.getSymbolTable()
    namespace = get_or_create_namespace(program, "Global")

    todo = [r for r in rows if r["action"] in MUTATING]
    retyped = 0
    relabeled = 0
    done = 0

    tx = program.startTransaction("Normalize strings")
    ok = True
    try:
        for r in todo:
            addr = r["_addr"]

            if r["retype"]:
                listing.clearCodeUnits(addr, addr.add(r["length"] - 1), False)
                DataUtilities.createData(
                    program, addr, TerminatedStringDataType(), r["length"], False,
                    DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
                retyped += 1

            if r["relabel"]:
                for sym in list(symbol_table.getSymbols(addr)):
                    if str(sym.getName()) != r["label"]:
                        try:
                            symbol_table.removeSymbolSpecial(sym)
                        except Exception:
                            pass
                symbol_table.createLabel(addr, r["label"], namespace,
                                         SourceType.USER_DEFINED)
                relabeled += 1

            done += 1
            if progress_every and done % progress_every == 0:
                print("  ... %d/%d" % (done, len(todo)))
                sys.stdout.flush()
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)

    return (retyped, relabeled) if ok else (0, 0)


def write_report(out_path, program_name, rows, warnings, applied, sample=25):
    counts = Counter(r["action"] for r in rows)
    lines = []
    lines.append("String normalization report: %s" % program_name)
    lines.append("mode: %s" % ("APPLY" if applied else "report"))
    lines.append("defined strings: %d" % len(rows))
    lines.append("  " + "  ".join("%s=%d" % (a, counts[a]) for a in ACTION_ORDER if counts[a]))
    lines.append("")

    for action in ACTION_ORDER:
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        shown = sub if action != OK else sub[:sample]
        for r in shown:
            cur = r["current"] if r["current"] else "(none)"
            lines.append("  %s  %-14s  %-40s  cur: %s"
                         % (r["addr"], r["type"], r["label"] or "(none)", cur))
        if len(shown) < len(sub):
            lines.append("  ... %d more" % (len(sub) - len(shown)))
        lines.append("")

    if warnings:
        lines.append("== warnings (%d) ==" % len(warnings))
        lines.extend("  " + w for w in warnings)
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def main():
    p = argparse.ArgumentParser(
        description="Normalize defined strings to TerminatedCString with "
                    "C-compatible labels (batch Shift+L).")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--apply", action="store_true",
                   help="Retype/relabel + save the program (default: report only)")
    p.add_argument("--force", action="store_true",
                   help="Also relabel addresses that carry a deliberately-named symbol")
    p.add_argument("--include-code", action="store_true",
                   help="Also normalize string data that sits in an executable block "
                        "(default: skipped as mis-analysis)")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_string_normalization.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            print("Planning...")
            rows, warnings = plan(program, force=args.force,
                                  include_code=args.include_code)

            counts = write_report(out_path, args.program_name, rows, warnings, args.apply)
            print("\n=== plan (%d defined strings) ===" % len(rows))
            for action in ACTION_ORDER:
                if counts[action]:
                    print("  %-16s %d" % (action, counts[action]))
            if warnings:
                print("  %-16s %d" % ("warnings", len(warnings)))
            print("Report written to: %s" % out_path)

            n_todo = sum(counts[a] for a in MUTATING)
            if args.apply and n_todo:
                print("\n[apply] normalizing %d string(s)..." % n_todo)
                retyped, relabeled = apply_rows(program, rows)
                if retyped or relabeled:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Retyped %d, relabeled %d. Saving program database..."
                          % (retyped, relabeled))
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif args.apply:
                print("\nNothing to normalize.")
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
