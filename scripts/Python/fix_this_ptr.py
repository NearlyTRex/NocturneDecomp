#!/usr/bin/env python3
"""
fix_this_ptr.py

Repair every class method whose receiver contradicts its own name. This is the
write side of check_this_ptr.py: that tool reports against exported
annotations, this one diffs and mutates the live Ghidra database, so it can
never act on a stale export.

THE SCHEMA IS AN ASSERTION
--------------------------
`<tu>_<Class>_<method>_FUN_<addr>` says the function is a member of `Class`
(C-prefixed classes and S-prefixed structs alike). That makes two claims about
parameter 0: it is the `this` pointer, and its type is `Class *`. The failure
modes need different repairs.

  NAME       type is right, the name is not (Watcom array destructors carry
             `objs`; their receiver is still `this`). Repair: rename parameter
             0 IN PLACE. Nothing else is touched.

  TYPE       the name spells the class one way and the parameter another:
             CMinecar/CMineCar, CWaypoint/CWayPoint. The PARAMETER wins when
             its spelling is a type and the name's is not. Repair: rename the
             FUNCTION.

  DERIVE     no parameters at all, and the decompiler infers a prototype whose
             first parameter is the first stack argument -- where Watcom's
             cdecl passes `this`. Repair: write the inferred prototype as
             __cdecl with parameter 0 made `Class *this_ptr`. The other
             parameters keep the decompiler's names and types; the return type
             is the decompiler's only when the function's is still undefined.

             A stub that reads no argument at all (a virtual returning a
             constant) shows nothing; it is still a member when a slot of the
             class's own labelled vtable (`g_<Class>VTable`) holds it, and gets
             `Class *this_ptr` alone.

  NO_PARAMS  a member with no parameters whose receiver could not be derived
             needs its assembly read. Its repair goes in a --fixes file with
             the evidence that resolved it. A curated entry wins over DERIVE.

WHY PARAMETER RENAMES ARE DONE IN PLACE
---------------------------------------
`Function.updateFunction(..., DYNAMIC_STORAGE_FORMAL_PARAMS)` rewrites the
WHOLE signature, re-deriving storage for every parameter and discarding custom
storage (`__stack2_esi`, the Watcom FPU conventions). `Parameter.setName()`
touches one field. DERIVE and curated entries rewrite whole signatures, but
only of functions that had none, or one read from the assembly.

Report-first. --apply mutates and saves; it takes a .gar snapshot first unless
--no-snapshot. Headless mutations persist only via DomainFile.save().

Usage:
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u fix_this_ptr.py <ABS_project_path> <project_name> \
            [program ...] [--show N] [--apply] [--no-snapshot] [--fixes FILE]
"""

import argparse
import json
import os
import re
import subprocess
import sys

RECEIVER = "this_ptr"

METHOD_RE = re.compile(
    r'^(?P<tu>[A-Za-z0-9_]+\.c(?:pp)?)_(?P<cls>[CS][A-Z][A-Za-z0-9]*)_'
    r'(?P<method>.+)_FUN_(?P<addr>[0-9a-fA-F]+)$')

# Watcom cdecl: `this` is the first stack argument, just above the return address
THIS_STACK_OFFSET = 4
DERIVABLE_CONVENTIONS = ("unknown", "__cdecl")
DECOMPILE_TIMEOUT = 60
VTABLE_LABEL = re.compile(r"^g_([A-Z]\w*)VTable$")
# How far back from a slot to look for its table's label
MAX_VTABLE_SLOTS = 256


# ---------------------------------------------------------------------------
# Curated repairs: a JSON file passed with --fixes
# ---------------------------------------------------------------------------
# {"prototypes": [{"program", "addr", "expect", "name", "ret", "conv",
#                  "params": [[name, type], ...], "note"}, ...],
#  "local_renames": [{"program", "addr", "func", "renames": [[old, new], ...],
#                     "note"}, ...]}
#
# A prototype entry is for a member whose receiver needed its assembly read.
# It is keyed (program, entry address); `expect` is the staleness guard: a
# function no longer called that (or `name`) is reported, not written over.
# A local entry moves a local off `this_ptr` first, since Parameter.setName()
# throws DuplicateNameException while a local holds the name.

NO_FIXES = {"prototypes": [], "local_renames": []}


def load_fixes(path):
    """The curated repairs in `path` (see above), or none when `path` is None."""
    if path is None:
        return NO_FIXES
    with open(path, encoding="utf-8") as fh:
        data = json.load(fh)
    return {
        "prototypes": [dict(f, params=[tuple(p) for p in f["params"]])
                       for f in data.get("prototypes", [])],
        "local_renames": [dict(r, renames=[tuple(p) for p in r["renames"]])
                          for r in data.get("local_renames", [])],
    }


ROW_KINDS = ("local_rename", "param_rename", "func_rename", "derive", "proto", "blocked")


def load_skip(path):
    skip = set()
    if os.path.exists(path):
        with open(path, encoding="utf-8") as fh:
            for line in fh:
                line = line.split("#", 1)[0].strip()
                if line:
                    skip.add(line)
    return skip


def make_resolver(program):
    """Name -> DataType, honouring any depth of pointer."""
    from ghidra.program.model.data import PointerDataType
    from java.util import ArrayList
    dtm = program.getDataTypeManager()
    cache = {}

    def resolve(type_name):
        key = (type_name or "").strip()
        if key in cache:
            return cache[key]
        base, depth = key, 0
        while base.endswith("*"):
            base = base[:-1].strip()
            depth += 1
        found = dtm.getDataType("/" + base)
        if found is None:
            matches = ArrayList()
            dtm.findDataTypes(base, matches)
            found = matches.get(0) if not matches.isEmpty() else None
        if found is not None:
            for _ in range(depth):
                found = PointerDataType(found, dtm)
        cache[key] = found
        return found

    return resolve


def norm(t):
    return (t or "").replace(" ", "")


def type_text(data_type):
    return str(data_type.getDisplayName())


def proto_diffs(f, fix):
    """-> list of (field, current, desired) for a curated entry, empty if the
    live function already matches. Without this the run is not idempotent: the
    staleness guard deliberately accepts the already-applied name, so every
    entry would re-queue forever."""
    diffs = []
    if f.getName() != fix["name"]:
        diffs.append(("name", f.getName(), fix["name"]))
    if norm(type_text(f.getReturnType())) != norm(fix["ret"]):
        diffs.append(("ret", type_text(f.getReturnType()), fix["ret"]))
    if str(f.getCallingConventionName() or "") != fix["conv"]:
        diffs.append(("conv", str(f.getCallingConventionName()), fix["conv"]))
    live = [(p.getName(), norm(type_text(p.getDataType())))
            for p in f.getParameters()]
    want = [(n, norm(t)) for n, t in fix["params"]]
    if live != want:
        diffs.append(("params", live, want))
    return diffs


def vtable_owners(program):
    """owners(function) -> the classes whose labelled vtable (`g_<Class>VTable`)
    has a slot holding it: from each reference to it, back slot by slot to the
    first label, which must be a vtable's."""
    refs, symbols = program.getReferenceManager(), program.getSymbolTable()

    def owners(f):
        out = set()
        for ref in refs.getReferencesTo(f.getEntryPoint()):
            at = ref.getFromAddress()
            for _ in range(MAX_VTABLE_SLOTS):
                symbol = symbols.getPrimarySymbol(at)
                if symbol is not None:
                    m = VTABLE_LABEL.match(symbol.getName())
                    if m:
                        out.add(m.group(1))
                    break
                at = at.add(-4)
        return out

    return owners


def derive(f, cls, inferred, resolve, in_vtable=False):
    """(params, return type) for a parameterless member from the decompiler's
    inferred prototype, or (None, why) when it does not show `this` arriving
    where Watcom's cdecl puts it. `inferred` is ([(name, type, stack offset or
    None)], return type), or None when the decompiler failed. A member that
    reads no argument takes `this` alone when its class's vtable holds it
    (`in_vtable`)."""
    conv = str(f.getCallingConventionName() or "unknown")
    if conv not in DERIVABLE_CONVENTIONS:
        return None, "convention %s is not cdecl, so the first stack slot proves nothing" % conv
    receiver = resolve(cls + " *")
    if receiver is None:
        return None, "%s is not a type in this program" % cls
    if inferred is None:
        return None, "the decompiler could not infer its parameters"
    params, ret = inferred
    if not params and not in_vtable:
        return None, "it reads no arguments, so nothing shows where `this` arrives"
    if not params:
        params = [(RECEIVER, receiver, THIS_STACK_OFFSET)]
    offsets = [offset for _name, _type, offset in params]
    if None in offsets or offsets[0] != THIS_STACK_OFFSET or offsets != sorted(set(offsets)):
        return None, ("inferred parameters are not consecutive stack arguments from "
                      "Stack[%#x]: %s" % (THIS_STACK_OFFSET, offsets))
    have_ret = f.getReturnType()
    if have_ret is not None and not type_text(have_ret).startswith("undefined"):
        ret = have_ret
    return [(RECEIVER, receiver)] + [(n, t) for n, t, _o in params[1:]], ret


def plan_locals(program, prog_name, local_renames):
    rows = []
    fm = program.getFunctionManager()
    af = program.getAddressFactory()
    for lr in local_renames:
        if lr["program"] != prog_name:
            continue
        f = fm.getFunctionAt(af.getAddress(lr["addr"]))
        if f is None:
            continue
        live = {v.getName() for v in f.getLocalVariables()}
        todo = [(a, b) for a, b in lr["renames"] if a in live and b not in live]
        if todo:
            rows.append({"addr": lr["addr"], "name": f.getName(), "renames": todo})
    return rows


def plan_curated(f, fix, resolve):
    """(row kind, row) for a function a curated entry names, or None when it
    already says what the entry wants."""
    addr, name = fix["addr"], f.getName()
    if name not in (fix["expect"], fix["name"]):
        return "blocked", {"addr": addr, "name": name,
                           "why": "STALE: expected %s" % fix["expect"]}
    missing = [t for _n, t in fix["params"] if resolve(t) is None]
    if resolve(fix["ret"]) is None:
        missing.append(fix["ret"])
    if missing:
        return "blocked", {"addr": addr, "name": name, "fix": fix,
                           "why": "type(s) not in this program's database: %s"
                                  % ", ".join(sorted(set(missing)))}
    if not proto_diffs(f, fix):
        return None
    return "proto", {"addr": addr, "have": name, "fix": fix}


def plan_method(f, cls, resolve, infer, owners=None):
    """(row kind, row) for a schema-named function, or None when its receiver
    is already right. `owners` is vtable_owners'."""
    name = f.getName()
    addr = "%08x" % f.getEntryPoint().getOffset()
    params = list(f.getParameters())
    if not params:
        in_vtable = owners is not None and cls in owners(f)
        derived, ret = derive(f, cls, infer(f) if infer else None, resolve, in_vtable)
        if derived is None:
            return "blocked", {"addr": addr, "name": name,
                               "why": "declares no parameters: %s" % ret}
        return "derive", {"addr": addr, "name": name, "params": derived, "ret": ret}

    p0 = params[0]
    have_name = p0.getName()
    have_type = type_text(p0.getDataType())
    name_ok = have_name == RECEIVER
    type_ok = norm(have_type) == norm(cls + "*")
    if name_ok and type_ok:
        return None
    if type_ok:
        # receiver proven by its type; only the label is wrong
        return "param_rename", {"addr": addr, "name": name, "from": have_name,
                                "type": have_type}
    # the name's class and the parameter's class disagree. The parameter wins
    # only when its spelling is a real type and the name's is not.
    have_cls = have_type.rstrip(" *")
    if name_ok and resolve(cls) is None and resolve(have_cls) is not None:
        want = name.replace("_%s_" % cls, "_%s_" % have_cls, 1)
        return "func_rename", {"addr": addr, "name": name, "want": want,
                               "cls": cls, "have_cls": have_cls}
    return "blocked", {"addr": addr, "name": name,
                       "why": "name says %s, parameter 0 is %s %s - neither side is "
                              "provably right; read the assembly"
                              % (cls, have_type, have_name)}


def plan(program, prog_name, skip, infer=None, fixes=None):
    """Build the change list. Pure analysis - no mutation. `infer(function)` is
    the decompiler's prototype for a parameterless member (see derive); `fixes`
    is load_fixes'."""
    fixes = fixes or NO_FIXES
    resolve = make_resolver(program)
    rows = {k: [] for k in ROW_KINDS}
    rows["local_rename"] = plan_locals(program, prog_name, fixes["local_renames"])
    curated = {(f["program"], f["addr"].lower()): f for f in fixes["prototypes"]}
    owners = vtable_owners(program)
    total = 0

    for f in program.getFunctionManager().getFunctions(True):
        name = f.getName()
        addr = "%08x" % f.getEntryPoint().getOffset()
        # curated repairs are keyed by address, and one deliberately drops the
        # class component, so they are checked before the schema match
        fix = curated.get((prog_name, addr))
        m = METHOD_RE.match(name)
        if fix is not None:
            found = plan_curated(f, fix, resolve)
        elif not m:
            continue
        elif name in skip or ("%s:%s" % (prog_name, name)) in skip:
            total += 1
            continue
        else:
            total += 1
            found = plan_method(f, m.group("cls"), resolve, infer, owners)
        if found is not None:
            rows[found[0]].append(found[1])
    return total, rows


def signature(ret, name, params, conv):
    return "%s %s(%s) [%s]" % (ret, name, ", ".join("%s %s" % (t, n) for n, t in params) or "void", conv)


def print_rows(title, rows, show, line):
    if not rows:
        return
    print("\n-- %s --  %d" % (title, len(rows)))
    for r in rows[:show]:
        print(line(r))
    if len(rows) > show:
        print("  ... %d more" % (len(rows) - show))


def report(prog_name, total, rows, show):
    print("=" * 78)
    print("%s   %d function(s) match the class-method schema" % (prog_name, total))
    print("=" * 78)
    for k in ROW_KINDS:
        print("   %-14s %d" % (k, len(rows[k])))

    print_rows("LOCAL RENAME (local squatting on the receiver's name)", rows["local_rename"], show,
               lambda r: "  %s  %s\n%s" % (r["addr"], r["name"], "\n".join(
                   "        %s  ->  %s" % ab for ab in r["renames"])))
    print_rows("PARAMETER RENAME (receiver typed right, named wrong)", rows["param_rename"], show,
               lambda r: "  %s  %s\n        %s %s  ->  %s %s"
               % (r["addr"], r["name"], r["type"], r["from"], r["type"], RECEIVER))
    print_rows("FUNCTION RENAME (class spelled two ways)", rows["func_rename"], show,
               lambda r: "  %s  %s\n        -> %s   (%s is not a type, %s is)"
               % (r["addr"], r["name"], r["want"], r["cls"], r["have_cls"]))
    print_rows("DERIVED PROTOTYPE (decompiler's, receiver in the first stack slot)", rows["derive"], show,
               lambda r: "  %s  %s\n        -> %s" % (r["addr"], r["name"], signature(
                   type_text(r["ret"]), r["name"], [(n, type_text(t)) for n, t in r["params"]], "__cdecl")))
    print_rows("PROTOTYPE REPAIR (curated)", rows["proto"], len(rows["proto"]),
               lambda r: "  %s  %s\n        -> %s" % (r["addr"], r["have"], signature(
                   r["fix"]["ret"], r["fix"]["name"], r["fix"]["params"], r["fix"]["conv"])))
    print_rows("BLOCKED", rows["blocked"], show,
               lambda r: "  %s  %s\n        %s" % (r["addr"], r["name"], r["why"]))


def apply_plan(program, rows):
    """Apply every row in one transaction. True when anything changed."""
    from ghidra.program.model.symbol import SourceType

    stats = {"local_renamed": 0, "param_renamed": 0, "func_renamed": 0,
             "derived": 0, "proto_applied": 0, "failed": 0}
    # Committed even on a partial failure: each row is an independent edit, so
    # discarding the whole transaction would throw away good work to punish one
    # bad row. Failures are printed and counted, and the run is idempotent, so
    # a re-run picks up whatever did not land.
    tx = program.startTransaction("Fix class-method receivers")
    try:
        _apply_rows(program, rows, make_resolver(program), SourceType.USER_DEFINED, stats)
    finally:
        program.endTransaction(tx, True)

    print("\n  applied: %s" % ", ".join("%s=%d" % kv for kv in sorted(stats.items())))
    return any(v for k, v in stats.items() if k != "failed")


def write_prototype(program, f, conv, ret, params, src):
    from ghidra.program.model.listing import Function, ParameterImpl, ReturnParameterImpl
    from java.util import ArrayList
    plist = ArrayList()
    for pname, ptype in params:
        plist.add(ParameterImpl(pname, ptype, program))
    f.updateFunction(conv, ReturnParameterImpl(ret, program), plist,
                     Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, True, src)


def _attempt(stats, key, what, action):
    try:
        action()
        stats[key] += 1
    except Exception as e:  # pylint: disable=broad-except
        print("  !! %s: %s" % (what, e))
        stats["failed"] += 1


def _rename_local(f, old, new, src):
    for v in f.getLocalVariables():
        if v.getName() == old:
            v.setName(new, src)
            return
    raise ValueError("no local %s" % old)


def _apply_rows(program, rows, resolve, src, stats):
    fm = program.getFunctionManager()
    af = program.getAddressFactory()

    def func_at(addr_s):
        return fm.getFunctionAt(af.getAddress(addr_s))

    # first, because a local holding `this_ptr` makes the parameter rename throw
    for r in rows["local_rename"]:
        f = func_at(r["addr"])
        for old, new in r["renames"]:
            _attempt(stats, "local_renamed", "%s local %s" % (r["name"], old),
                     lambda f=f, old=old, new=new: _rename_local(f, old, new, src))

    # in place: touches one field, so custom storage on the other parameters
    # cannot be re-derived away
    for r in rows["param_rename"]:
        f = func_at(r["addr"])
        _attempt(stats, "param_renamed", "%s param rename" % r["name"],
                 lambda f=f: f.getParameters()[0].setName(RECEIVER, src))

    for r in rows["func_rename"]:
        f = func_at(r["addr"])
        _attempt(stats, "func_renamed", "%s func rename" % r["name"],
                 lambda f=f, r=r: f.setName(r["want"], src))

    for r in rows["derive"]:
        f = func_at(r["addr"])
        _attempt(stats, "derived", "%s derived prototype" % r["name"],
                 lambda f=f, r=r: write_prototype(program, f, "__cdecl", r["ret"], r["params"], src))

    def curated(f, fx):
        write_prototype(program, f, fx["conv"], resolve(fx["ret"]),
                        [(n, resolve(t)) for n, t in fx["params"]], src)
        if f.getName() != fx["name"]:
            f.setName(fx["name"], src)

    for r in rows["proto"]:
        f = func_at(r["addr"])
        _attempt(stats, "proto_applied", "%s prototype" % r["have"],
                 lambda f=f, fx=r["fix"]: curated(f, fx))


def decompiler_inference(program):
    """(infer, dispose): infer(function) -> the decompiler's prototype as
    ([(name, type, stack offset or None)], return type), or None."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor
    ifc = DecompInterface()
    ifc.openProgram(program)
    monitor = ConsoleTaskMonitor()

    def infer(f):
        high = ifc.decompileFunction(f, DECOMPILE_TIMEOUT, monitor).getHighFunction()
        if high is None:
            return None
        symbols = high.getLocalSymbolMap()
        params = []
        for i in range(symbols.getNumParams()):
            p = symbols.getParamSymbol(i)
            storage = p.getStorage()
            offset = storage.getStackOffset() if storage.isStackStorage() else None
            params.append((p.getName(), p.getDataType(), offset))
        return params, high.getFunctionPrototype().getReturnType()

    return infer, ifc.dispose


def snapshot(args):
    here = os.path.dirname(os.path.abspath(__file__))
    tool = os.path.join(here, "snapshot_project.py")
    cmd = [sys.executable, tool, os.path.abspath(args.project_path),
           args.project_name, "--tag", "pre-this-ptr"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def run_program(program, prog_name, args, skip, fixes=None):
    infer, dispose = decompiler_inference(program)
    try:
        total, rows = plan(program, prog_name, skip, infer, fixes)
    finally:
        dispose()
    report(prog_name, total, rows, args.show)
    if not args.apply:
        print("\n  [dry-run] re-run with --apply to execute.")
    elif apply_plan(program, rows):
        from ghidra.util.task import ConsoleTaskMonitor
        print("  saving %s ..." % prog_name)
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("  saved.")
    else:
        print("  nothing written for %s" % prog_name)
    print()


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("programs", nargs="*", default=["nocedit.exe", "nocturne.exe"])
    ap.add_argument("--show", type=int, default=12)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--no-snapshot", action="store_true")
    ap.add_argument("--skip-file", default=os.path.join(
        os.path.dirname(os.path.abspath(__file__)), "check_this_ptr_skip.txt"))
    ap.add_argument("--fixes", help="JSON file of curated repairs (prototypes, local renames)")
    args = ap.parse_args()

    skip = load_skip(args.skip_file)
    if skip:
        print("%s: %d exemption(s)\n" % (os.path.basename(args.skip_file), len(skip)))
    fixes = load_fixes(args.fixes)

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(1)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path),
                                    args.project_name)
    code = 0
    try:
        for prog_name in args.programs:
            with pyghidra.program_context(project, "/" + prog_name) as program:
                run_program(program, prog_name, args, skip, fixes)
        project.close()
    except Exception as e:  # pylint: disable=broad-except
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    # os._exit skips the buffer flush, which loses the report when stdout is a file
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
