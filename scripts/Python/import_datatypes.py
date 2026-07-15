#!/usr/bin/env python3
# Copy named data types from one program's DTM into another's, within the same Ghidra
# project. Dependencies are pulled in automatically (Ghidra clones the whole type tree
# from the source DTM). Report-first; --apply mutates + saves the destination program.
#
# Usage (PyGhidra headless):
#   python import_datatypes.py <project_dir> <project_name> <src_program> <dst_program> <types> [--apply]
#   python import_datatypes.py ./projects NocturneEdit nocedit.exe tridx7.dll \
#          SRenderVertex,SMRGLTextureBasic,SMRGLPrimitiveTriangle,CExternalRendererBridge --apply
#
# <types> is a comma-separated list of top-level type names to copy (their component
# types come along automatically). Names are matched exactly against the source DTM.
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import argparse

THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def find_type(dtm, name):
    """First data type in dtm whose getName() == name, preferring composites/typedefs."""
    hits = [dt for dt in dtm.getAllDataTypes() if dt.getName() == name]
    if not hits:
        return None
    from ghidra.program.model.data import Composite, TypeDef, Enum
    for pref in (Composite, TypeDef, Enum):
        for dt in hits:
            if isinstance(dt, pref):
                return dt
    return hits[0]


def main():
    ap = argparse.ArgumentParser(description="Copy data types between programs in a project.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("src_program")
    ap.add_argument("dst_program")
    ap.add_argument("types", help="comma-separated top-level type names")
    ap.add_argument("--apply", action="store_true", help="Write + save the destination program")
    args = ap.parse_args()

    want = [t.strip() for t in args.types.split(",") if t.strip()]
    project_path = os.path.abspath(args.project_path)

    import pyghidra
    print("Starting PyGhidra..."); pyghidra.start()
    print("Opening %s/%s :: src=%s dst=%s" % (project_path, args.project_name,
                                              args.src_program, args.dst_program))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.src_program) as src:
            with pyghidra.program_context(project, "/" + args.dst_program) as dst:
                from ghidra.program.model.data import DataTypeConflictHandler
                from ghidra.util.task import ConsoleTaskMonitor
                src_dtm = src.getDataTypeManager()
                dst_dtm = dst.getDataTypeManager()
                monitor = ConsoleTaskMonitor()

                before = set(dt.getName() for dt in dst_dtm.getAllDataTypes())
                plan = []
                for name in want:
                    dt = find_type(src_dtm, name)
                    if dt is None:
                        plan.append((name, "NOT-IN-SRC", None))
                    elif name in before:
                        plan.append((name, "ALREADY-IN-DST", dt))
                    else:
                        plan.append((name, "IMPORT", dt))

                print("\n=== plan ===")
                for name, action, dt in plan:
                    extra = ("  (%s, %d bytes)" % (dt.getPathName(), dt.getLength())) if dt else ""
                    print("  %-14s %s%s" % (action, name, extra))

                to_import = [dt for _, a, dt in plan if a == "IMPORT"]
                if args.apply and to_import:
                    tx = dst.startTransaction("Import data types from %s" % args.src_program)
                    ok = True
                    try:
                        for dt in to_import:
                            dst_dtm.addDataType(dt, DataTypeConflictHandler.DEFAULT_HANDLER)
                    except Exception as e:
                        ok = False; print("ERROR: %s" % e)
                        import traceback; traceback.print_exc()
                    finally:
                        dst.endTransaction(tx, ok)
                    if ok:
                        after = set(dt.getName() for dt in dst_dtm.getAllDataTypes())
                        added = sorted(after - before)
                        print("\nImported %d top-level type(s); DTM gained %d type(s):"
                              % (len(to_import), len(added)))
                        for n in added:
                            print("  + %s" % n)
                        print("Saving %s..." % args.dst_program)
                        dst.getDomainFile().save(monitor)
                        print("Saved.")
                elif not args.apply:
                    print("\n[dry-run] re-run with --apply to import.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback; traceback.print_exc(); code = 1
    sys.stdout.flush(); sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
