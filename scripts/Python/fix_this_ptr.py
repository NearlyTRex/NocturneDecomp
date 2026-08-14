#!/usr/bin/env python3
"""
fix_this_ptr.py

Repair every class method whose receiver contradicts its own name, in both
game binaries. This is the write side of check_this_ptr.py: that tool reports
against exported annotations, this one diffs and mutates the live Ghidra
database, so it can never act on a stale export.

THE SCHEMA IS AN ASSERTION
--------------------------
`<tu>_<Class>_<method>_FUN_<addr>` says the function is a member of `Class`.
That makes two claims about parameter 0 which nothing was enforcing: it is the
`this` pointer, and its type is `Class *`. Three failure modes exist, and they
need three different repairs.

  NAME       type is right, the name is not. 110 functions, of which 62 are
             Watcom array destructors carrying `objs`. The receiver of an
             array destructor is still the object being destroyed, so it is
             `this_ptr` like any other member function - these are NOT exempt.
             Repair: rename parameter 0 IN PLACE. Nothing else is touched.

  TYPE       the name spells the class one way and the parameter another:
             CMinecar/CMineCar, CWaypoint/CWayPoint, CVector/CVector3f. In
             every instance the PARAMETER is right - its spelling exists in the
             type database and the name's does not. Two spellings of one class
             splits greps and invites a second, divergent struct.
             Repair: rename the FUNCTION. The signature is already correct and
             is deliberately left alone.

  NO_PARAMS  a member function declaring no parameters at all cannot receive
             `this`, so its prototype is simply wrong and every caller
             decompiles against it. These cannot be derived - each one needed
             its assembly read - so they live in the curated table below with
             the evidence that resolved them.

WHY PARAMETER RENAMES ARE DONE IN PLACE
---------------------------------------
`Function.updateFunction(..., DYNAMIC_STORAGE_FORMAL_PARAMS)` rewrites the
WHOLE signature. Using it to change one parameter's name would re-derive
storage for the other parameters, silently discarding hand-tuned custom
storage - which this codebase genuinely has (`__stack2_esi`, the Watcom FPU
conventions). `Parameter.setName()` touches one field and cannot do that.

Report-first. --apply mutates and saves; it takes a .gar snapshot first unless
--no-snapshot. Headless mutations persist only via DomainFile.save().

Usage:
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u fix_this_ptr.py <ABS_project_path> <project_name> \
            [program ...] [--show N] [--apply] [--no-snapshot]
"""

import argparse
import os
import re
import sys

RECEIVER = "this_ptr"

METHOD_RE = re.compile(
    r'^(?P<tu>[A-Za-z0-9_]+\.c(?:pp)?)_(?P<cls>C[A-Z][A-Za-z0-9]*)_'
    r'(?P<method>.+)_FUN_(?P<addr>[0-9a-fA-F]+)$')


# ---------------------------------------------------------------------------
# NO_PARAMS: curated, because each one needed its assembly read
# ---------------------------------------------------------------------------
# Keyed (program, entry address). `expect` is the staleness guard: if the
# function is no longer called that, somebody has moved since the analysis and
# the entry is skipped rather than applied over.
#
# Seven of these carried the name `handlePureVirtualCall`, which is wrong in
# every instance. There is exactly ONE real pure-virtual handler in either
# binary - nocedit's crt_cpp.c_handlePureVirtualCall_FUN_006015f1, the CRT's
# __purecall. The seven are unrelated one-line weapon-state accessors that a
# bulk rename landed on. Each is resolved three ways: byte-identical body shape
# against an accessor already named in nocturne itself, the nocedit
# counterpart's prototype, and position (every build emits the pair in the
# order drawWeapon, isWeaponDrawn at a 0x10 stride).
#
# The field they touch is already named: guns_drawn at 0x1fa3c, and these
# classes really are ~0x1fa54 bytes, so `this_ptr` typing is sound.

NO_PARAM_FIXES = [
    dict(program="nocturne.exe", addr="00411310",
         expect="core_baron.cpp_CBaron_handlePureVirtualCall_FUN_00411310",
         name="core_baron.cpp_CBaron_drawWeapon_FUN_00411310",
         ret="void", conv="__cdecl",
         params=[("this_ptr", "CBaron *"), ("drawn", "int")],
         note="bare RET, identical to nocedit CBaron_drawWeapon_FUN_00413cf0. "
              "drawWeapon is the only game-side method nocturne's baron.cpp "
              "lacks, and the processDamage->this 0x20 stride matches nocedit "
              "exactly (00413cd0->00413cf0 vs 004112f0->00411310)."),
    dict(program="nocturne.exe", addr="0049a110",
         expect="core_gabriela.cpp_CGabriella_handlePureVirtualCall_FUN_0049a110",
         name="core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_0049a110",
         ret="int", conv="__cdecl",
         params=[("this_ptr", "CGabriella *")],
         note="CMP [this+0x1fa3c],0 / SETNZ AL - reads weapon_state_flags. "
              "nocedit CGabriella_isWeaponDrawn_FUN_004d7590 is int(CGabriella*). "
              "Body diverges (nocturne normalises to 0/1, nocedit returns the "
              "raw field) - a real build difference, same method."),
    dict(program="nocturne.exe", addr="004d6010",
         expect="core_minecar.cpp_CMineCar_getActorType_FUN_004d6010",
         name="core_minecar.cpp_CMineCar_getActorType_FUN_004d6010",
         ret="CDemonActorType *", conv="__cdecl",
         params=[("this_ptr", "CMineCar *")],
         note="MOV EAX,0x1cc90e4 = &g_CMineCarActorType_01cc90e4, already "
              "declared as CDemonActorType and referenced by minecar.cpp "
              "staticInit. Name was right; return type and receiver were not."),
    dict(program="nocturne.exe", addr="004fcd20",
         expect="core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd20",
         name="core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20",
         ret="int", conv="__cdecl",
         params=[("this_ptr", "CScat *")],
         note="MOV EAX,[this+0x1fa3c] - byte-identical to nocturne's own "
              "CHaystack_isWeaponDrawn_FUN_004b4120. nocedit "
              "CScat_isWeaponDrawn_FUN_00557ff0 is int(CScat*)."),
    dict(program="nocturne.exe", addr="004fcd30",
         expect="core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd30",
         name="core_scat.cpp_CScat_drawWeapon_FUN_004fcd30",
         ret="void", conv="__cdecl",
         params=[("this_ptr", "CScat *"), ("drawn", "int")],
         note="MOV [this+0x1fa3c],arg2 - byte-identical to nocturne's own "
              "CHaystack_drawWeapon_FUN_004b4130. nocedit "
              "CScat_drawWeapon_FUN_00558000 is void(CScat*,int)."),
    dict(program="nocturne.exe", addr="00540720",
         expect="core_stranger.cpp_CStranger_handlePureVirtualCall_FUN_00540720",
         name="core_stranger.cpp_CStranger_isWeaponDrawn_FUN_00540720",
         ret="int", conv="__cdecl",
         params=[("this_ptr", "CStranger *")],
         note="MOV EAX,[this+0x1fa3c]. Decisive: CStranger_drawWeapon already "
              "exists at the adjacent 00540730, so this is the getter half of "
              "the pair. nocedit CStranger_isWeaponDrawn_FUN_005c6650."),
    dict(program="nocturne.exe", addr="00428bb0",
         expect="core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428bb0",
         name="core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428bb0",
         ret="void", conv="__cdecl",
         params=[("this_ptr", "CCharacter *"), ("timeout", "float")],
         note="MOV [this+0x25a4],arg2. Name already right; transferred from "
              "nocedit CCharacter_setWalkTimeout_FUN_0042ca20."),
    dict(program="nocturne.exe", addr="004c41b0",
         expect="engine_keys.cpp_CKeys_clearKeypresses_FUN_004c41b0",
         name="engine_keys.cpp_clearKeypresses_FUN_004c41b0",
         ret="void", conv="__cdecl", params=[],
         note="NOT a class method - a bare JMP thunk to "
              "wincore_winrun.cpp_clearKeypresses_FUN_00558ae0, and Ghidra "
              "already records it as thunk=True. nocedit's counterpart is the "
              "free function engine_keys.cpp_clearKeypresses_FUN_00502450. "
              "There is no CKeys class; dropping the class component takes it "
              "out of the schema entirely, which is the correct repair."),
    dict(program="nocturne.exe", addr="004c47c0",
         expect="core_ladder.cpp_CLadder_getGroundType_FUN_004c47c0",
         name="core_ladder.cpp_CLadder_getGroundType_FUN_004c47c0",
         ret="EGroundType", conv="__cdecl",
         params=[("this_ptr", "CLadder *")],
         note="MOV EAX,[this+0x2f4]. Name already right; transferred from "
              "nocedit CLadder_getGroundType_FUN_00502c90."),
    dict(program="nocturne.exe", addr="004de750",
         expect="core_moloch.cpp_CMoloch_handlePureVirtualCall_FUN_004de750",
         name="core_moloch.cpp_CMoloch_drawWeapon_FUN_004de750",
         ret="void", conv="__cdecl",
         params=[("this_ptr", "CMoloch *"), ("drawn", "int")],
         note="bare RET, identical to nocedit CMoloch_drawWeapon_FUN_005299d0. "
              "Moloch never draws a weapon, so both halves are stubs - which is "
              "exactly why the pair carried no evidence in isolation."),
    dict(program="nocturne.exe", addr="004de760",
         expect="core_moloch.cpp_CMoloch_handlePureVirtualCall_FUN_004de760",
         name="core_moloch.cpp_CMoloch_isWeaponDrawn_FUN_004de760",
         ret="int", conv="__cdecl",
         params=[("this_ptr", "CMoloch *")],
         note="XOR EAX,EAX / RET, identical to nocedit "
              "CMoloch_isWeaponDrawn_FUN_005299e0, and the 0x10 stride after "
              "drawWeapon matches nocedit's 005299d0/005299e0 pair."),
    dict(program="nocturne.exe", addr="005525d0",
         expect="core_waypoint.cpp_CWayPoint_renderOpaque_FUN_005525d0",
         name="core_waypoint.cpp_CWayPoint_renderOpaque_FUN_005525d0",
         ret="int", conv="__cdecl",
         params=[("this_ptr", "CWayPoint *")],
         note="XOR EAX,EAX / RET - waypoints are invisible at runtime. Name "
              "already right; transferred from nocedit "
              "CWayPoint_renderOpaque_FUN_005ebf70."),
    # Blocked on a type that does not exist in nocturne yet. Left in the table
    # so it is reported every run rather than quietly forgotten.
    dict(program="nocturne.exe", addr="004f8570",
         expect="engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570",
         name="engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570",
         ret="CPodAuditRecord *", conv="__stack2_esi",
         params=[("this_ptr", "CPodFile *"), ("record_index", "int"),
                 ("out_record", "CPodAuditRecord *")],
         note="Assert string 'CPodFile::getAuditRecord - invalid in...' names "
              "it outright. SUB ESP,0x138 matches sizeof(CPodAuditRecord)=312 "
              "exactly. Two stack args plus an incoming ESI (MOV EBX,ESI before "
              "any write) = __stack2_esi, as nocedit has it. Needs "
              "CPodAuditRecord created in nocturne's type database first."),
]


# ---------------------------------------------------------------------------
# Locals squatting on the receiver's name
# ---------------------------------------------------------------------------
# Parameter.setName() throws DuplicateNameException if a LOCAL already holds
# `this_ptr`, so the local has to move first. Both entries below are decompiler
# artefacts rather than anything a human chose, and both are actively
# misleading - neither variable is a receiver of anything.
LOCAL_RENAMES = [
    dict(program="nocedit.exe", addr="00478010",
         func="core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010",
         renames=[("this_ptr", "bounds_ptr_bits"),
                  ("this_ptr_00", "frame_bounds_ptr")],
         note="`float this_ptr` has unassigned HASH storage and holds "
              "local_28.max.z, which line 21 loaded with (float)&model_ptr->"
              "bounds - a pointer punned through a float field, so the name is "
              "wrong twice over. `this_ptr_00` is a CBoundingBox3D* that only "
              "carries the _00 suffix because of that collision."),
]


def load_skip(path):
    skip = set()
    if os.path.exists(path):
        with open(path) as fh:
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


def proto_diffs(f, fix):
    """-> list of (field, current, desired) for a curated entry, empty if the
    live function already matches. Without this the run is not idempotent: the
    staleness guard deliberately accepts the already-applied name, so every
    entry would re-queue forever."""
    diffs = []
    if f.getName() != fix["name"]:
        diffs.append(("name", f.getName(), fix["name"]))
    if norm(str(f.getReturnType().getDisplayName())) != norm(fix["ret"]):
        diffs.append(("ret", str(f.getReturnType().getDisplayName()), fix["ret"]))
    if str(f.getCallingConventionName() or "") != fix["conv"]:
        diffs.append(("conv", str(f.getCallingConventionName()), fix["conv"]))
    live = [(p.getName(), norm(str(p.getDataType().getDisplayName())))
            for p in f.getParameters()]
    want = [(n, norm(t)) for n, t in fix["params"]]
    if live != want:
        diffs.append(("params", live, want))
    return diffs


def plan(program, prog_name, skip):
    """Build the change list. Pure analysis - no mutation."""
    resolve = make_resolver(program)
    rows = {"local_rename": [], "param_rename": [], "func_rename": [],
            "proto": [], "blocked": []}
    total = 0

    fm0 = program.getFunctionManager()
    af0 = program.getAddressFactory().getDefaultAddressSpace()
    for lr in LOCAL_RENAMES:
        if lr["program"] != prog_name:
            continue
        f = fm0.getFunctionAt(af0.getAddress(lr["addr"]))
        if f is None:
            continue
        live = {v.getName() for v in f.getLocalVariables()}
        todo = [(a, b) for a, b in lr["renames"] if a in live and b not in live]
        if todo:
            rows["local_rename"].append(
                {"addr": lr["addr"], "name": f.getName(), "renames": todo})

    curated = {(f["program"], f["addr"].lower()): f for f in NO_PARAM_FIXES}

    fm = program.getFunctionManager()
    it = fm.getFunctions(True)
    while it.hasNext():
        f = it.next()
        name = f.getName()
        addr = ("%08x" % f.getEntryPoint().getOffset()).lower()

        # curated prototype repairs are keyed by address, and one of them
        # deliberately drops the class component, so they are checked before
        # the schema match.
        fix = curated.get((prog_name, addr))
        if fix is not None:
            if name not in (fix["expect"], fix["name"]):
                rows["blocked"].append(
                    {"addr": addr, "name": name,
                     "why": "STALE: expected %s" % fix["expect"]})
                continue
            missing = [t for _n, t in fix["params"] if resolve(t) is None]
            if resolve(fix["ret"]) is None:
                missing.append(fix["ret"])
            if missing:
                rows["blocked"].append(
                    {"addr": addr, "name": name, "fix": fix,
                     "why": "type(s) not in this program's database: %s"
                            % ", ".join(sorted(set(missing)))})
                continue
            if not proto_diffs(f, fix):
                continue        # already says what the table wants
            rows["proto"].append({"addr": addr, "have": name, "fix": fix})
            continue

        m = METHOD_RE.match(name)
        if not m:
            continue
        total += 1
        if name in skip or ("%s:%s" % (prog_name, name)) in skip:
            continue

        cls = m.group("cls")
        params = list(f.getParameters())
        if not params:
            rows["blocked"].append(
                {"addr": addr, "name": name,
                 "why": "declares no parameters and is not in the curated table"})
            continue

        p0 = params[0]
        have_name = p0.getName()
        have_type = str(p0.getDataType().getDisplayName())
        name_ok = have_name == RECEIVER
        type_ok = norm(have_type) == norm(cls + "*")
        if name_ok and type_ok:
            continue

        if type_ok:
            # receiver proven by its type; only the label is wrong
            rows["param_rename"].append(
                {"addr": addr, "name": name, "from": have_name,
                 "type": have_type})
            continue

        # the name's class and the parameter's class disagree. The parameter
        # wins only when its spelling is a real type and the name's is not.
        have_cls = have_type.rstrip(" *")
        if name_ok and resolve(cls) is None and resolve(have_cls) is not None:
            want = name.replace("_%s_" % cls, "_%s_" % have_cls, 1)
            rows["func_rename"].append(
                {"addr": addr, "name": name, "want": want,
                 "cls": cls, "have_cls": have_cls})
        else:
            rows["blocked"].append(
                {"addr": addr, "name": name,
                 "why": "name says %s, parameter 0 is %s %s - neither side is "
                        "provably right; read the assembly"
                        % (cls, have_type, have_name)})

    return total, rows


def report(prog_name, total, rows, show):
    print("=" * 78)
    print("%s   %d function(s) match the class-method schema" % (prog_name, total))
    print("=" * 78)
    for k in ("local_rename", "param_rename", "func_rename", "proto", "blocked"):
        print("   %-14s %d" % (k, len(rows[k])))

    if rows["local_rename"]:
        print("\n-- LOCAL RENAME (local squatting on the receiver's name) --  %d"
              % len(rows["local_rename"]))
        for r in rows["local_rename"]:
            print("  %s  %s" % (r["addr"], r["name"]))
            for a, b in r["renames"]:
                print("        %s  ->  %s" % (a, b))

    if rows["param_rename"]:
        print("\n-- PARAMETER RENAME (receiver typed right, named wrong) --  %d"
              % len(rows["param_rename"]))
        for r in rows["param_rename"][:show]:
            print("  %s  %s" % (r["addr"], r["name"]))
            print("        %s %s  ->  %s %s"
                  % (r["type"], r["from"], r["type"], RECEIVER))
        if len(rows["param_rename"]) > show:
            print("  ... %d more" % (len(rows["param_rename"]) - show))

    if rows["func_rename"]:
        print("\n-- FUNCTION RENAME (class spelled two ways) --  %d"
              % len(rows["func_rename"]))
        for r in rows["func_rename"][:show]:
            print("  %s  %s" % (r["addr"], r["name"]))
            print("        -> %s   (%s is not a type, %s is)"
                  % (r["want"], r["cls"], r["have_cls"]))
        if len(rows["func_rename"]) > show:
            print("  ... %d more" % (len(rows["func_rename"]) - show))

    if rows["proto"]:
        print("\n-- PROTOTYPE REPAIR (curated) --  %d" % len(rows["proto"]))
        for r in rows["proto"]:
            fx = r["fix"]
            sig = "%s %s(%s) [%s]" % (
                fx["ret"], fx["name"],
                ", ".join("%s %s" % (t, n) for n, t in fx["params"]) or "void",
                fx["conv"])
            print("  %s  %s" % (r["addr"], r["have"]))
            print("        -> %s" % sig)

    if rows["blocked"]:
        print("\n-- BLOCKED --  %d" % len(rows["blocked"]))
        for r in rows["blocked"][:show]:
            print("  %s  %s\n        %s" % (r["addr"], r["name"], r["why"]))
        if len(rows["blocked"]) > show:
            print("  ... %d more" % (len(rows["blocked"]) - show))


def apply_plan(program, rows):
    from ghidra.program.model.listing import ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    src = SourceType.USER_DEFINED
    resolve = make_resolver(program)
    fm = program.getFunctionManager()
    af = program.getAddressFactory().getDefaultAddressSpace()
    stats = {"local_renamed": 0, "param_renamed": 0, "func_renamed": 0,
             "proto_applied": 0, "failed": 0}

    def func_at(addr_s):
        return fm.getFunctionAt(af.getAddress(addr_s))

    # Committed even on a partial failure: each row is an independent edit, so
    # discarding the whole transaction would throw away good work to punish one
    # bad row. Failures are printed and counted, and the run is idempotent, so
    # a re-run picks up whatever did not land.
    tx = program.startTransaction("Fix class-method receivers")
    try:
        _apply_rows(program, rows, resolve, func_at, src, stats)
    finally:
        program.endTransaction(tx, True)

    print("\n  applied: %s" % ", ".join("%s=%d" % kv for kv in sorted(stats.items())))
    return any(v for k, v in stats.items() if k != "failed")


def _apply_rows(program, rows, resolve, func_at, src, stats):
    from ghidra.program.model.listing import ParameterImpl, ReturnParameterImpl
    from java.util import ArrayList

    # first, because a local holding `this_ptr` makes the parameter rename throw
    for r in rows["local_rename"]:
        f = func_at(r["addr"])
        for old, new in r["renames"]:
            try:
                for v in f.getLocalVariables():
                    if v.getName() == old:
                        v.setName(new, src)
                        stats["local_renamed"] += 1
                        break
            except Exception as e:
                print("  !! %s local %s: %s" % (r["name"], old, e))
                stats["failed"] += 1

    for r in rows["param_rename"]:
        f = func_at(r["addr"])
        try:
            # in place: touches one field, so custom storage on the other
            # parameters cannot be re-derived away
            list(f.getParameters())[0].setName(RECEIVER, src)
            stats["param_renamed"] += 1
        except Exception as e:
            print("  !! %s param rename: %s" % (r["name"], e))
            stats["failed"] += 1

    for r in rows["func_rename"]:
        f = func_at(r["addr"])
        try:
            f.setName(r["want"], src)
            stats["func_renamed"] += 1
        except Exception as e:
            print("  !! %s func rename: %s" % (r["name"], e))
            stats["failed"] += 1

    for r in rows["proto"]:
        fx = r["fix"]
        f = func_at(r["addr"])
        try:
            params = ArrayList()
            for pname, ptype in fx["params"]:
                params.add(ParameterImpl(pname, resolve(ptype), program))
            f.updateFunction(fx["conv"],
                             ReturnParameterImpl(resolve(fx["ret"]), program),
                             params,
                             f.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                             True, src)
            if f.getName() != fx["name"]:
                f.setName(fx["name"], src)
            stats["proto_applied"] += 1
        except Exception as e:
            print("  !! %s prototype: %s" % (r["have"], e))
            stats["failed"] += 1


def snapshot(args):
    import subprocess
    here = os.path.dirname(os.path.abspath(__file__))
    tool = os.path.join(here, "snapshot_project.py")
    cmd = [sys.executable, tool, os.path.abspath(args.project_path),
           args.project_name, "--tag", "pre-this-ptr"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


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
    args = ap.parse_args()

    skip = load_skip(args.skip_file)
    if skip:
        print("%s: %d exemption(s)\n" % (os.path.basename(args.skip_file), len(skip)))

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.")
        os._exit(1)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path),
                                    args.project_name)
    code = 0
    try:
        for prog_name in args.programs:
            with pyghidra.program_context(project, "/" + prog_name) as program:
                total, rows = plan(program, prog_name, skip)
                report(prog_name, total, rows, args.show)
                if args.apply:
                    if apply_plan(program, rows):
                        from ghidra.util.task import ConsoleTaskMonitor
                        print("  saving %s ..." % prog_name)
                        program.getDomainFile().save(ConsoleTaskMonitor())
                        print("  saved.")
                    else:
                        print("  nothing written for %s" % prog_name)
                else:
                    print("\n  [dry-run] re-run with --apply to execute.")
                print()
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    os._exit(code)


if __name__ == "__main__":
    main()
