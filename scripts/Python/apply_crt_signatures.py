#!/usr/bin/env python3
# Apply CRT function signatures (return type, parameter types/names, calling
# convention, varargs) to tridx7.dll from the canonical catalog TSV.
#
# Source of truth: crt_functions.tsv (generated from the md by extract_crt_catalog.py).
# Report-first; --apply mutates + saves. Names are applied by name_crt_functions.py;
# this script never renames a function.
#
# Rows are classified:
#   APPLY            - real signature, all types resolve, at/above --min-confidence
#   ALREADY          - function signature already matches the catalog
#   BLOCKED          - a return/param type is not in the program's DataTypeManager
#   PLACEHOLDER      - catalog signature is the un-analyzed stub `undefined1(void)`
#                      (skipped: applying it would erase Ghidra's own param analysis)
#   SPECIAL          - naked / __declspec signature (e.g. _chkstk); skipped
#   BELOW-CONF       - below --min-confidence
#   NO-FUNCTION      - no function defined at that entry
#
# Missing scalar types (time_t, wint_t, wctype_t, intptr_t, va_list, _sigfn, _PNH,
# _LDOUBLE) are added to the DTM under --apply (unless --no-typedefs). Compound types
# (struct tm, _XCPT_ACTION) are NOT auto-defined; BLOCKED rows referencing them are
# listed, and layout specs are printed for you to add in Ghidra.
#
# Usage (PyGhidra headless):
#   python apply_crt_signatures.py ./projects NocturneEdit tridx7.dll             # report
#   python apply_crt_signatures.py ./projects NocturneEdit tridx7.dll --apply     # write+save
#   python apply_crt_signatures.py ./projects NocturneEdit tridx7.dll --only fopen --apply
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

from crt_catalog import CATALOG_TSV, CONF_RANK, load_tsv, split_params, has_varargs

# ---- C type string -> Ghidra type name normalisation -----------------------
_QUALIFIERS = re.compile(r"\b(const|volatile|struct|enum|union|register|__declspec|naked)\b")
_UMAP = {
    "unsigned char": "uchar", "unsigned short": "ushort", "unsigned int": "uint",
    "unsigned long": "ulong", "unsigned long long": "ulonglong", "unsigned": "uint",
    "signed char": "char", "signed short": "short", "signed int": "int",
    "signed long": "long", "signed": "int", "long long": "longlong",
    "__int64": "longlong", "unsigned __int64": "ulonglong", "__int32": "int",
}

# Scalar typedefs this tool will add to the DTM (name -> spec dict). Compound types
# (struct tm, _XCPT_ACTION) are intentionally excluded -- see STRUCT_SPECS.
SCALAR_TYPEDEFS = ["time_t", "wint_t", "wctype_t", "intptr_t", "va_list",
                   "_sigfn", "_PNH", "_LDOUBLE"]

# DTM category = the real MSVC header each type is declared in (matches this
# program's convention: _ptiddata@/mtdll.h, STRFLT@/fltintrn.h, _CRT_DOUBLE@/stdlib.h).
# Includes the two helper funcdefs. Types are still resolved by NAME across all
# categories, so this is purely for organizational consistency.
TYPEDEF_CATEGORY = {
    "time_t": "/crtdefs.h", "wint_t": "/crtdefs.h", "wctype_t": "/crtdefs.h",
    "intptr_t": "/basetsd.h", "va_list": "/vadefs.h",
    "_sigfn": "/signal.h", "_sigfn_t": "/signal.h",
    "_PNH": "/new.h", "_PNH_t": "/new.h",
    "_LDOUBLE": "/stdlib.h",
}

STRUCT_SPECS = """\
struct tm {              // <sys/time> - used by strftime/expandtime/isindst/cvtdate
    int tm_sec;   int tm_min;  int tm_hour; int tm_mday;
    int tm_mon;   int tm_year; int tm_wday; int tm_yday; int tm_isdst;
};  // sizeof = 0x24 (9 x int)

struct _XCPT_ACTION {    // signal/xcpt table entry - siglookup (12-byte stride)
    unsigned long XcptNum;   // +0
    int           SigNum;    // +4
    void         *XcptAction;// +8   (_sigfn / handler)
};  // sizeof = 0xc

struct LC_ID {           // locale id triple - _expandlocale (LC_ID*)
    unsigned short wLanguage;  // +0
    unsigned short wCountry;   // +2
    unsigned short wCodePage;  // +4
};  // sizeof = 0x6"""


def clean_c_type(t):
    """('const struct tm *') -> ('tm', 1)  base name + pointer depth."""
    t = _QUALIFIERS.sub(" ", t or "")
    stars = t.count("*")
    base = re.sub(r"\s+", " ", t.replace("*", " ")).strip()
    base = _UMAP.get(base, base)
    return base, stars


def is_placeholder(ret, params):
    return ret in ("undefined", "undefined1") and params.strip() in ("", "void")


# ---- Ghidra type resolution ------------------------------------------------
def build_primitives():
    from ghidra.program.model.data import BuiltInDataTypeManager, Undefined
    b = BuiltInDataTypeManager.getDataTypeManager()
    names = ["void", "bool", "char", "short", "int", "long", "longlong", "float",
             "double", "uchar", "ushort", "uint", "ulong", "ulonglong", "byte",
             "ubyte", "wchar_t", "word", "dword", "qword"]
    prims = {}
    for n in names:
        dt = b.getDataType("/" + n)
        if dt is not None:
            prims[n] = dt
    for size in (1, 2, 4, 8, 16):
        try:
            prims["undefined%d" % size] = Undefined.getUndefinedDataType(size)
        except Exception:
            pass
    prims["undefined"] = prims.get("undefined1")
    return prims


class Resolver:
    def __init__(self, program):
        from ghidra.program.model.data import PointerDataType
        self.PointerDataType = PointerDataType
        self.dtm = program.getDataTypeManager()
        self.index = {}
        for dt in self.dtm.getAllDataTypes():
            self.index.setdefault(dt.getName(), dt)
        self.prims = build_primitives()

    def resolve(self, ctype):
        """Return (DataType, None) or (None, missing_base_name)."""
        base, stars = clean_c_type(ctype)
        if base == "":
            return None, (ctype or "<empty>")
        dt = self.index.get(base) or self.prims.get(base)
        if dt is None:
            return None, base
        for _ in range(stars):
            dt = self.PointerDataType(dt)
        return dt, None


# ---- scalar typedef creation ----------------------------------------------
def ensure_scalar_typedefs(program, resolver):
    """Create missing scalar typedefs in their proper header category, and move any
    that already exist in the wrong category. Returns (added, notes)."""
    from ghidra.program.model.data import (
        TypedefDataType, PointerDataType, FunctionDefinitionDataType,
        ParameterDefinitionImpl, DataTypeConflictHandler, LongDataType,
        IntegerDataType, CharDataType, VoidDataType, LongDoubleDataType, CategoryPath)
    dtm = resolver.dtm
    handler = DataTypeConflictHandler.KEEP_HANDLER
    added, notes = [], []

    def has(name):
        return resolver.index.get(name) is not None

    def cat(name):
        path = CategoryPath(TYPEDEF_CATEGORY.get(name, "/"))
        dtm.createCategory(path)  # idempotent
        return path

    def add(dt):
        r = dtm.addDataType(dt, handler)
        resolver.index[r.getName()] = r
        added.append(r.getName())
        return r

    ushort = resolver.prims["ushort"]
    size_t = resolver.index.get("size_t") or resolver.prims["uint"]

    if not has("time_t"):
        add(TypedefDataType(cat("time_t"), "time_t", LongDataType.dataType))   # 32-bit long
    if not has("wint_t"):
        add(TypedefDataType(cat("wint_t"), "wint_t", ushort))
    if not has("wctype_t"):
        add(TypedefDataType(cat("wctype_t"), "wctype_t", ushort))
    if not has("intptr_t"):
        add(TypedefDataType(cat("intptr_t"), "intptr_t", IntegerDataType.dataType))  # 32-bit
    if not has("va_list"):
        add(TypedefDataType(cat("va_list"), "va_list", PointerDataType(CharDataType.dataType)))
    if not has("_sigfn"):
        fd = FunctionDefinitionDataType(cat("_sigfn_t"), "_sigfn_t")            # void (__cdecl *)(int)
        fd.setReturnType(VoidDataType.dataType)
        fd.setArguments([ParameterDefinitionImpl("sig", IntegerDataType.dataType, None)])
        add(TypedefDataType(cat("_sigfn"), "_sigfn", PointerDataType(add(fd))))
    if not has("_PNH"):
        fd = FunctionDefinitionDataType(cat("_PNH_t"), "_PNH_t")                # int (__cdecl *)(size_t)
        fd.setReturnType(IntegerDataType.dataType)
        fd.setArguments([ParameterDefinitionImpl("size", size_t, None)])
        add(TypedefDataType(cat("_PNH"), "_PNH", PointerDataType(add(fd))))
    # _LDOUBLE = MSVC 10-byte long double, defined as `struct { unsigned char ld[10]; }`
    # (matches sibling _LDBL12 / _CRT_DOUBLE structs). NOT a typedef to `long double`:
    # that is size-unstable AND the header exporter has no `longdouble` primitive, so a
    # `longdouble` dependency aborts the annotation export.
    from ghidra.program.model.data import (StructureDataType, ArrayDataType,
                                           ByteDataType, TypeDef)

    def _mk_ldouble(nm):
        s = StructureDataType(cat("_LDOUBLE"), nm, 0)
        s.add(ArrayDataType(ByteDataType.dataType, 10, 1), "ld", "80-bit x87 long double")
        return s

    ex = resolver.index.get("_LDOUBLE")
    if ex is None:
        r = dtm.addDataType(_mk_ldouble("_LDOUBLE"), handler)
        resolver.index["_LDOUBLE"] = r
        added.append("_LDOUBLE")
    elif isinstance(ex, TypeDef):
        # self-heal an earlier typedef->longdouble; repoint the 2 _LDOUBLE* params
        tmp = dtm.addDataType(_mk_ldouble("_LDOUBLE__s"), handler)
        dtm.replaceDataType(ex, tmp, True)
        tmp.setName("_LDOUBLE")
        resolver.index["_LDOUBLE"] = tmp
        notes.append("replaced _LDOUBLE typedef -> 10-byte struct (exporter has no longdouble primitive)")

    # Self-heal: move any already-existing typedef/funcdef into its proper category.
    for name, path in TYPEDEF_CATEGORY.items():
        dt = resolver.index.get(name)
        if dt is None:
            continue
        cur = str(dt.getCategoryPath())
        if cur != path:
            dtm.createCategory(CategoryPath(path))
            try:
                dt.setCategoryPath(CategoryPath(path))
                notes.append("moved %s: %s -> %s" % (name, cur, path))
            except Exception as e:
                notes.append("could not move %s (%s -> %s): %s" % (name, cur, path, e))
    return added, notes


# ---- planning + application ------------------------------------------------
def classify(row, threshold, resolver, fm, space):
    ret = row["ret"]
    params = row["params"]
    conv = row["conv"]
    conf = row["conf"].upper()

    r = {"addr": row["addr"], "name": row["name"], "conf": conf,
         "ret": ret, "conv": conv, "params": params,
         "action": None, "detail": ""}

    if conv == "":
        r["action"] = "SPECIAL"; r["detail"] = "naked/__declspec"; return r
    if is_placeholder(ret, params):
        r["action"] = "PLACEHOLDER"; return r
    if CONF_RANK.get(conf, 0) < threshold:
        r["action"] = "BELOW-CONF"; return r

    func = fm.getFunctionAt(space.getAddress(int(row["addr"], 16)))
    if func is None:
        r["action"] = "NO-FUNCTION"; return r

    # resolve return + params
    rdt, miss = resolver.resolve(ret)
    if miss:
        r["action"] = "BLOCKED"; r["detail"] = "return type '%s'" % miss; return r
    pdts, pnames, varargs = [], [], has_varargs(params)
    for (ptype, pname, isvar) in split_params(params):
        if isvar:
            continue
        dt, miss = resolver.resolve(ptype)
        if miss:
            r["action"] = "BLOCKED"; r["detail"] = "param type '%s'" % miss; return r
        pdts.append(dt)
        pnames.append(pname or None)
    r["_rdt"] = rdt; r["_pdts"] = pdts; r["_pnames"] = pnames; r["_varargs"] = varargs
    r["_func"] = func

    # already-matches check (types + names + count + convention + varargs).
    # Named target params must match by name too, so a name-only change re-applies;
    # a target param with no name (None) is "don't care" and never forces a change.
    cur = func
    cur_ps = list(cur.getParameters())
    cur_params = [p.getDataType().getName() for p in cur_ps]
    cur_names = [p.getName() for p in cur_ps]
    want_params = [dt.getName() for dt in pdts]
    names_match = (len(cur_names) == len(pnames) and all(
        pnames[i] is None or cur_names[i] == pnames[i] for i in range(len(pnames))))
    if (cur.getReturnType().getName() == rdt.getName()
            and cur_params == want_params
            and names_match
            and (cur.getCallingConventionName() or "") == conv
            and cur.hasVarArgs() == varargs):
        r["action"] = "ALREADY"
    else:
        r["action"] = "APPLY"
    return r


def apply_row(program, r):
    from ghidra.program.model.listing import Function, ParameterImpl
    from ghidra.program.model.symbol import SourceType
    func = r["_func"]
    src = SourceType.USER_DEFINED
    func.setCallingConvention(r["conv"])
    params = [ParameterImpl(nm, dt, program) for nm, dt in zip(r["_pnames"], r["_pdts"])]
    func.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                           True, src, params)
    func.setReturnType(r["_rdt"], src)
    func.setVarArgs(r["_varargs"])


ORDER = ["APPLY", "ALREADY", "BLOCKED", "PLACEHOLDER", "SPECIAL", "BELOW-CONF", "NO-FUNCTION"]


def write_report(out_path, program_name, rows, added, notes, min_conf, applied):
    from collections import Counter
    counts = Counter(r["action"] for r in rows)
    lines = ["CRT signature report: %s" % program_name,
             "mode: %s   min-confidence: %s" % ("APPLY" if applied else "report", min_conf),
             "rows: %d   %s" % (len(rows),
                "  ".join("%s=%d" % (k, counts[k]) for k in ORDER if counts[k])), ""]
    if added:
        lines.append("scalar typedefs %s: %s"
                     % ("added" if applied else "would add", ", ".join(sorted(set(added)))))
    for n in notes:
        lines.append("note: " + n)
    lines.append("")

    blocked_types = Counter(r["detail"].split("'")[1] for r in rows
                            if r["action"] == "BLOCKED" and "'" in r["detail"])
    if blocked_types:
        lines.append("== BLOCKED by missing type ==")
        for t, c in blocked_types.most_common():
            lines.append("  %-22s %d function(s)" % (t, c))
        lines.append("")
        lines.append("== suggested Ghidra struct definitions (add these, then re-run) ==")
        lines.append(STRUCT_SPECS)
        lines.append("")

    for action in ORDER:
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        for r in sub:
            sig = "%s %s(%s)" % (r["ret"], r["conv"], r["params"])
            extra = ("  <- %s" % r["detail"]) if r["detail"] else ""
            lines.append("  %s  [%s]  %s%s" % (r["addr"], r["conf"], sig, extra))
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def main():
    ap = argparse.ArgumentParser(description="Apply CRT signatures from the catalog TSV.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="tridx7.dll")
    ap.add_argument("--catalog", default=CATALOG_TSV)
    ap.add_argument("--min-confidence", default="M", choices=["H", "M", "L"])
    ap.add_argument("--only", default=None,
                    help="Only rows whose name contains this substring (testing)")
    ap.add_argument("--no-typedefs", action="store_true",
                    help="Do not add scalar typedefs")
    ap.add_argument("--apply", action="store_true", help="Mutate + save (default: report)")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    catalog = os.path.abspath(args.catalog)
    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_crt_signatures.txt" % args.program_name)
    threshold = CONF_RANK[args.min_confidence]

    catalog_rows = load_tsv(catalog)
    if args.only:
        catalog_rows = [r for r in catalog_rows if args.only in r["name"]]
    print("Loaded %d catalog rows from %s%s"
          % (len(catalog_rows), catalog, (" (filter: %s)" % args.only) if args.only else ""))

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            fm = program.getFunctionManager()
            space = program.getAddressFactory().getDefaultAddressSpace()

            added, notes = [], []
            phase0_changed = False
            # Phase 0: scalar typedefs (needed before resolving/planning)
            if not args.no_typedefs:
                resolver0 = Resolver(program)
                from ghidra.util.task import ConsoleTaskMonitor  # noqa
                if args.apply:
                    tx = program.startTransaction("Add CRT scalar typedefs")
                    ok = True
                    try:
                        added, notes = ensure_scalar_typedefs(program, resolver0)
                    except Exception as e:
                        ok = False; print("ERROR adding typedefs: %s" % e)
                        import traceback; traceback.print_exc()
                    finally:
                        program.endTransaction(tx, ok)
                    phase0_changed = bool(added) or any(n.startswith("moved") for n in notes)
                    for n in notes:
                        print("  typedef: %s" % n)
                    resolver = Resolver(program)  # re-index with new types
                else:
                    # dry-run: report which typedefs are missing without writing
                    missing = [n for n in SCALAR_TYPEDEFS if resolver0.index.get(n) is None]
                    added = missing
                    resolver = resolver0
            else:
                resolver = Resolver(program)

            rows = [classify(r, threshold, resolver, fm, space) for r in catalog_rows]
            rows.sort(key=lambda r: int(r["addr"], 16))

            counts = write_report(out_path, args.program_name, rows, added, notes,
                                  args.min_confidence, args.apply)
            print("\n=== plan ===")
            for a in ORDER:
                if counts[a]:
                    print("  %-12s %d" % (a, counts[a]))
            print("Report written to: %s" % out_path)

            to_apply = [r for r in rows if r["action"] == "APPLY"]
            if args.apply and to_apply:
                print("\n[apply] %d signature(s)..." % len(to_apply))
                tx = program.startTransaction("Apply CRT signatures")
                ok = True
                done = 0
                try:
                    for r in to_apply:
                        apply_row(program, r)
                        done += 1
                        print("  SIG %s  %s %s(%s)"
                              % (r["addr"], r["ret"], r["conv"], r["params"]))
                except Exception as e:
                    ok = False
                    print("ERROR during apply at %s: %s"
                          % (r["addr"] if 'r' in dir() else "?", e))
                    import traceback; traceback.print_exc()
                finally:
                    program.endTransaction(tx, ok)
                if ok and (done or phase0_changed):
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Applied %d signatures (+%d typedefs). Saving..." % (done, len(added)))
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif args.apply:
                if phase0_changed:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Only typedef changes (added/moved); saving...")
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
                else:
                    print("\nNothing to apply.")
            else:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback; traceback.print_exc()
        code = 1

    sys.stdout.flush(); sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
