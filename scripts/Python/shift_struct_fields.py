#!/usr/bin/env python3
# Close the gaps left in subclasses when a base class was resized.
#
# Ghidra structures are offset-based: shrinking a base class does not pull the
# subclass's own fields down with it, it leaves undefined bytes behind. So
# correcting `CDemonActor` from 344 to 336 left every one of its 43 direct
# subclasses with an 8-byte hole after `base` and a length 8 too large.
#
# Watcom RTTI is what makes this safe to automate. `typeinfo_size` is the
# compiler's own record of each class's size, read from the binary rather than
# inferred, so every edit can be checked against the answer before it is made:
#
#   EXACT     closing the hole lands the struct on its recorded size -- the
#             whole discrepancy was this hole
#   PARTIAL   it lands above the recorded size. Correct but incomplete: another
#             root this class embeds has not been fixed yet. Applied, and the
#             residual is reported so it can be traced to its cause
#   REFUSE    it would land *below* the recorded size. Never applied -- either
#             the hole is not padding or the base was shrunk too far
#   NO_RTTI   no recorded size, so nothing can be verified. Never applied
#
# Holes are closed one byte at a time and the length is re-checked after each,
# because a `deleteAtOffset` that removed a real field instead of an undefined
# byte would silently destroy a layout. Only runs of genuinely undefined bytes
# are ever touched.
#
# Cascades resolve by iteration: once `CFlame` shrinks, `CCharacter.flames[50]`
# shrinks with it and opens a 400-byte hole of its own, which the next round
# picks up. The pass repeats until nothing changes.
#
# Usage:
#   GHIDRA_INSTALL_DIR=/path/to/ghidra/lib \
#   python3 -u shift_struct_fields.py <ABS_project_path> <project_name> \
#           [program_name] [--base CDemonActor] [--any-hole] [--apply]
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

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))


def load_rtti_sizes(program_name):
    """class name -> Watcom RTTI instance size, from the exported annotations.

    Read from the annotations rather than the database on purpose: this is the
    figure recovered from the binary's own RTTI, so it stays an independent
    check on the layouts being edited.
    """
    path = os.path.join(REPO_ROOT, "annotations", program_name,
                        "type_info", "type_info.json")
    try:
        with open(path) as fh:
            doc = json.load(fh)
    except OSError:
        return {}
    return {e["name"]: e["typeinfo_size"]
            for e in doc.get("type_info", [])
            if "typeinfo_size" in e and "name" in e}


def is_undefined(component):
    """Is this component filler rather than a field?"""
    dt = component.getDataType()
    if dt is None:
        return True
    name = dt.getName() or ""
    return name.startswith("undefined") or name == "-BAD-"


def find_hole(struct, base_only):
    """(offset, size, trailing) of the first closable run of undefined bytes.

    A run between two real fields is unambiguously a gap. A run at the *end* of
    a structure is not: it is equally how Ghidra represents a length that was
    set explicitly. Both are returned, flagged, and the caller decides -- a
    trailing run is only ever closed when doing so lands the structure exactly
    on its recorded RTTI size, which leaves no room for it to be anything else.

    Subclasses that add no fields of their own are the reason trailing runs
    matter: `CBeast` is nothing but `base : CEnemy`, so when `CEnemy` shrank
    its whole 408-byte discrepancy became trailing filler.
    """
    comps = list(struct.getComponents())
    if not any(not is_undefined(c) for c in comps):
        return None

    for i, c in enumerate(comps):
        if is_undefined(c):
            continue
        if base_only and c.getFieldName() != "base":
            continue
        end = c.getOffset() + c.getLength()
        j, size = i + 1, 0
        while j < len(comps) and is_undefined(comps[j]):
            size += comps[j].getLength()
            j += 1
        if size:
            return end, size, j >= len(comps)
        if base_only:
            return None
    return None


def starts_at_base_end(struct, offset):
    """Does a hole begin exactly where the `base` component ends?

    Then it can only be the base having shrunk -- nothing else could open a gap
    at precisely that offset. This is the one thing that justifies editing a
    class with no RTTI to check against: `CHero` is never instantiated, so
    Watcom emitted no typeinfo for it, yet its gap starts exactly at the end of
    `base : CCharacter` and is exactly the amount `CCharacter` lost.
    """
    for c in struct.getComponents():
        if c.getFieldName() == "base":
            return c.getOffset() + c.getLength() == offset
    return False


def plan_struct(struct, rtti, base_only, allow_base_shrink=False):
    """What to do with one structure, without touching it."""
    name = struct.getName()
    hole = find_hole(struct, base_only)
    if hole is None:
        return None
    offset, size, trailing = hole
    current = struct.getLength()
    new_len = current - size
    recorded = rtti.get(name)

    if recorded is None:
        verdict = ("BASE_SHRINK"
                   if allow_base_shrink and starts_at_base_end(struct, offset)
                   else "NO_RTTI")
    elif new_len == recorded:
        verdict = "EXACT"
    elif new_len > recorded:
        # Trailing filler that does not land exactly could just as well be a
        # deliberate length; only an exact hit disambiguates it.
        verdict = "TRAILING?" if trailing else "PARTIAL"
    else:
        verdict = "REFUSE"

    return {"name": name, "offset": offset, "size": size, "trailing": trailing,
            "current": current, "new_len": new_len, "rtti": recorded,
            "verdict": verdict, "residual": (new_len - recorded)
            if recorded is not None else None}


def close_hole(struct, offset, size):
    """Delete `size` undefined bytes at `offset`, one at a time.

    Verifying the length after every single deletion is the point: if a call
    ever removes something other than the one undefined byte intended, this
    stops immediately rather than continuing to mangle the layout.
    """
    for _ in range(size):
        before = struct.getLength()
        comp = struct.getComponentAt(offset)
        if comp is None or not is_undefined(comp):
            raise RuntimeError("%s: offset %d is not undefined filler"
                               % (struct.getName(), offset))
        struct.deleteAtOffset(offset)
        after = struct.getLength()
        if after != before - 1:
            raise RuntimeError("%s: deleting at %d changed length %d -> %d"
                               % (struct.getName(), offset, before, after))


def main():
    ap = argparse.ArgumentParser(
        description="Close base-class-resize gaps in subclass layouts.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--base", default="CDemonActor",
                    help="only structures whose `base` field has this type")
    ap.add_argument("--any-hole", action="store_true",
                    help="consider gaps after any field, not just `base` "
                         "(needed once embedded members start shrinking)")
    ap.add_argument("--allow-base-shrink", action="store_true",
                    help="also fix classes with no RTTI when the gap starts "
                         "exactly at the end of `base`, which can only be the "
                         "base having shrunk (e.g. CHero)")
    ap.add_argument("--max-rounds", type=int, default=8)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    rtti = load_rtti_sizes(args.program_name)
    if not rtti:
        sys.exit("no RTTI sizes for %s; nothing could be verified, refusing"
                 % args.program_name)
    print("RTTI sizes available for %d classes" % len(rtti))

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_struct_shift.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    code = 0
    lines = []
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            dtm = program.getDataTypeManager()

            def candidates():
                from ghidra.program.model.data import Structure
                out = []
                it = dtm.getAllStructures()
                while it.hasNext():
                    s = it.next()
                    if not isinstance(s, Structure):
                        continue
                    if s.isPackingEnabled():
                        continue          # packing recomputes offsets itself
                    if not args.any_hole:
                        comps = [c for c in s.getComponents()
                                 if not is_undefined(c)]
                        if not comps or comps[0].getFieldName() != "base":
                            continue
                        bt = comps[0].getDataType()
                        if bt is None or bt.getName() != args.base:
                            continue
                    out.append(s)
                return out

            counts = Counter()
            applied_total = 0
            tx = None
            try:
                if args.apply:
                    tx = program.startTransaction("Shift subclass fields")

                for rnd in range(1, args.max_rounds + 1):
                    plans = []
                    for s in candidates():
                        p = plan_struct(s, rtti, not args.any_hole,
                                        args.allow_base_shrink)
                        if p:
                            plans.append((s, p))
                    if not plans:
                        break

                    header = "== round %d: %d structure(s) with a gap ==" % (
                        rnd, len(plans))
                    print(header)
                    lines.append(header)

                    changed = 0
                    for s, p in sorted(plans, key=lambda t: t[1]["name"]):
                        note = ""
                        if p["verdict"] == "PARTIAL":
                            note = "  residual %+d (another root)" % p["residual"]
                        elif p["verdict"] == "TRAILING?":
                            note = ("  trailing filler, %+d off -- not closed"
                                    % p["residual"])
                        row = ("  %-9s %-26s %6d -> %-6d rtti=%-6s hole %d@%d%s"
                               % (p["verdict"], p["name"], p["current"],
                                  p["new_len"],
                                  p["rtti"] if p["rtti"] is not None else "-",
                                  p["size"], p["offset"], note))
                        print(row)
                        lines.append(row)
                        counts[p["verdict"]] += 1

                        if args.apply and p["verdict"] in ("EXACT", "PARTIAL",
                                                           "BASE_SHRINK"):
                            close_hole(s, p["offset"], p["size"])
                            if s.getLength() != p["new_len"]:
                                raise RuntimeError(
                                    "%s: expected length %d, got %d"
                                    % (p["name"], p["new_len"], s.getLength()))
                            changed += 1
                            applied_total += 1

                    if not args.apply or not changed:
                        break
            except Exception as e:
                if tx is not None:
                    program.endTransaction(tx, False)
                    tx = None
                raise
            finally:
                if tx is not None:
                    program.endTransaction(tx, True)

            print("\n=== summary ===")
            for verdict in ("EXACT", "PARTIAL", "BASE_SHRINK", "TRAILING?",
                            "REFUSE", "NO_RTTI"):
                if counts[verdict]:
                    print("  %-8s %d" % (verdict, counts[verdict]))
            if counts["REFUSE"]:
                print("  REFUSE means closing the gap would take the structure "
                      "below its recorded size; not applied.")
            if counts["TRAILING?"]:
                print("  TRAILING? is filler at the end of a structure that "
                      "would not land exactly on the recorded size, so it "
                      "cannot be told apart from a deliberate length; "
                      "not applied.")

            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")
            print("Report written to: %s" % out_path)

            if args.apply and applied_total:
                from ghidra.util.task import ConsoleTaskMonitor
                print("Applied %d structure(s). Saving..." % applied_total)
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
