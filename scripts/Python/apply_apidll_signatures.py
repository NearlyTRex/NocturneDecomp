#!/usr/bin/env python3
# Apply tridx7.dll APIDLL* export signatures from nocedit.exe's function-pointer
# typedefs. nocedit calls each DLL export through a typed pointer `g_APIDLL_<name>`
# of type `APIDLL_<name>*`, whose typedef (annotations/nocedit.exe/pseudocode/include/
# types/funcdefs/APIDLL_<name>.h) is the authoritative DLL prototype.
#
# This applies return type + params (type/name) + __cdecl to each tridx7 APIDLL<name>
# export. It NEVER renames. Report-first; --apply mutates + saves.
#
#   APPLY       - all types resolve; signature will be set
#   ALREADY     - tridx7 signature already matches
#   BLOCKED     - references a type not in tridx7's DTM (e.g. SRenderVertex) - see report
#   UNMATCHED   - no typed nocedit funcdef (APIDLL_unknown); left alone
#
# Usage:
#   python apply_apidll_signatures.py ./projects NocturneEdit tridx7.dll         # report
#   python apply_apidll_signatures.py ./projects NocturneEdit tridx7.dll --apply # write+save
#
#@author NearlyTRex
#@category Annotations

import os
import re
import sys
import argparse

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)
REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))

from crt_catalog import split_params
from apply_crt_signatures import clean_c_type, Resolver

FUNCDEF_DIR = os.path.join(REPO_ROOT, "annotations", "nocedit.exe",
                           "pseudocode", "include", "types", "funcdefs")
TYPEDEF_RE = re.compile(r"typedef\s+(?P<ret>[A-Za-z_][\w ]*?)\s+APIDLL_(?P<name>\w+)\s*\((?P<params>.*)\)\s*;")


def load_funcdefs(funcdef_dir):
    """base name -> {ret, params, src}. Skips APIDLL_unknown."""
    out = {}
    for fn in sorted(os.listdir(funcdef_dir)):
        if not (fn.startswith("APIDLL_") and fn.endswith(".h")):
            continue
        text = open(os.path.join(funcdef_dir, fn)).read()
        m = TYPEDEF_RE.search(text)
        if not m:
            continue
        name = m.group("name")
        if name == "unknown":
            continue
        out[name] = {"ret": m.group("ret").strip(), "params": m.group("params").strip(),
                     "src": "APIDLL_" + name}
    return out


def classify(func, fd, resolver):
    r = {"name": func.getName(), "addr": "%08x" % func.getEntryPoint().getOffset(),
         "ret": fd["ret"], "params": fd["params"], "detail": ""}
    rdt, miss = resolver.resolve(fd["ret"])
    if miss:
        r["action"] = "BLOCKED"; r["detail"] = "return '%s'" % miss; return r
    pdts, pnames = [], []
    for (ptype, pname, isvar) in split_params(fd["params"]):
        if isvar:
            continue
        dt, miss = resolver.resolve(ptype)
        if miss:
            r["action"] = "BLOCKED"; r["detail"] = "type '%s'" % miss; return r
        pdts.append(dt); pnames.append(pname or None)
    r["_rdt"] = rdt; r["_pdts"] = pdts; r["_pnames"] = pnames; r["_func"] = func

    cur = func
    cur_ps = list(cur.getParameters())
    cur_types = [p.getDataType().getName() for p in cur_ps]
    cur_names = [p.getName() for p in cur_ps]
    want_types = [dt.getName() for dt in pdts]
    names_ok = len(cur_names) == len(pnames) and all(
        pnames[i] is None or cur_names[i] == pnames[i] for i in range(len(pnames)))
    if (cur.getReturnType().getName() == rdt.getName() and cur_types == want_types
            and names_ok and (cur.getCallingConventionName() or "") == "__cdecl"):
        r["action"] = "ALREADY"
    else:
        r["action"] = "APPLY"
    return r


def apply_row(program, r):
    from ghidra.program.model.listing import Function, ParameterImpl
    from ghidra.program.model.symbol import SourceType
    f = r["_func"]
    src = SourceType.USER_DEFINED
    f.setCallingConvention("__cdecl")
    params = [ParameterImpl(nm, dt, program) for nm, dt in zip(r["_pnames"], r["_pdts"])]
    f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                        True, src, params)
    f.setReturnType(r["_rdt"], src)


ORDER = ["APPLY", "ALREADY", "BLOCKED", "UNMATCHED"]


def main():
    ap = argparse.ArgumentParser(description="Apply APIDLL signatures from nocedit funcdefs.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="tridx7.dll")
    ap.add_argument("--funcdefs", default=FUNCDEF_DIR)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    funcdefs = load_funcdefs(args.funcdefs)
    print("Loaded %d typed APIDLL funcdefs from %s" % (len(funcdefs), args.funcdefs))
    out_path = args.out or ("%s_apidll_signatures.txt" % args.program_name)
    project_path = os.path.abspath(args.project_path)

    import pyghidra
    print("Starting PyGhidra..."); pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            fm = program.getFunctionManager()
            resolver = Resolver(program)
            rows = []
            for f in fm.getFunctions(True):
                n = f.getName()
                if not n.startswith("APIDLL"):
                    continue
                base = n[len("APIDLL"):]
                fd = funcdefs.get(base)
                if fd is None:
                    rows.append({"name": n, "addr": "%08x" % f.getEntryPoint().getOffset(),
                                 "action": "UNMATCHED", "ret": "", "params": "", "detail": ""})
                else:
                    rows.append(classify(f, fd, resolver))
            rows.sort(key=lambda r: r["addr"])

            from collections import Counter
            counts = Counter(r["action"] for r in rows)
            miss_types = Counter(r["detail"].split("'")[1] for r in rows
                                 if r["action"] == "BLOCKED" and "'" in r["detail"])

            lines = ["APIDLL signature report: %s" % args.program_name,
                     "mode: %s   %s" % ("APPLY" if args.apply else "report",
                        "  ".join("%s=%d" % (k, counts[k]) for k in ORDER if counts[k])), ""]
            if miss_types:
                lines.append("== BLOCKED by missing type (add to tridx7 DTM, then re-run) ==")
                for t, c in miss_types.most_common():
                    lines.append("  %-26s %d function(s)" % (t, c))
                lines.append("")
            for action in ORDER:
                sub = [r for r in rows if r["action"] == action]
                if not sub:
                    continue
                lines.append("== %s (%d) ==" % (action, len(sub)))
                for r in sub:
                    sig = ("%s(%s)" % (r["ret"], r["params"])) if r["ret"] else "(untyped)"
                    extra = ("  <- %s" % r["detail"]) if r["detail"] else ""
                    lines.append("  %s  %-30s %s%s" % (r["addr"], r["name"], sig, extra))
                lines.append("")
            open(out_path, "w").write("\n".join(lines) + "\n")

            print("\n=== plan ===")
            for a in ORDER:
                if counts[a]:
                    print("  %-10s %d" % (a, counts[a]))
            print("Report written to: %s" % out_path)

            to_apply = [r for r in rows if r["action"] == "APPLY"]
            if args.apply and to_apply:
                print("\n[apply] %d signature(s)..." % len(to_apply))
                tx = program.startTransaction("Apply APIDLL signatures")
                ok = True; done = 0
                try:
                    for r in to_apply:
                        apply_row(program, r); done += 1
                        print("  SIG %s  %s(%s)" % (r["name"], r["ret"], r["params"]))
                except Exception as e:
                    ok = False; print("ERROR: %s" % e)
                    import traceback; traceback.print_exc()
                finally:
                    program.endTransaction(tx, ok)
                if ok and done:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Applied %d. Saving..." % done)
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif not args.apply:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback; traceback.print_exc(); code = 1
    sys.stdout.flush(); sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
