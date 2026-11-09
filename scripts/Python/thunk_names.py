#!/usr/bin/env python3
"""Own names for thunks that would otherwise show their target's.

A thunk with no symbol of its own is displayed under its target's name,
address suffix included, so naming a target makes every unnamed thunk to it
claim the target's address. The export refuses that, and the pseudocode tree
would put both in one file. Every tool that renames functions calls
name_thunks after it, inside its own transaction.
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm


def placeholder_thunk_name(target):
    return "thunk_FUN_%s" % target


def position_unit(addr, ordered, final_names, thunks):
    """The unit both nearest labelled neighbours of `addr` agree on, or None."""
    i = ordered.index(addr)

    def nearest(step):
        j = i + step
        while 0 <= j < len(ordered):
            a = ordered[j]
            tu = sm.tu_of(final_names.get(a)) if a not in thunks else None
            if tu:
                return tu
            j += step
        return None

    before, after = nearest(-1), nearest(1)
    return before if before and before == after else None


def plan_thunk_names(thunks, final_names, source_names):
    """[{"b", "target", "want", "unidentified"}] for each thunk to rename.

    The thunk gets the target's core with its own address, as nocedit names
    its thunks. The unit comes from the paired source thunk when that one
    agrees on the core, since a thunk is emitted in its caller's object file,
    not its target's; otherwise from the target.

    A target with no core yet gives the thunk nothing to be called, so it gets
    the unit-only placeholder `<unit>_FUN_<addr>` instead. Ghidra will not keep
    a plain `FUN_<addr>` as a name. That unit is the paired source thunk's, or
    the one its nearest labelled neighbours share on both sides; with neither,
    the thunk keeps Ghidra's `thunk_FUN_<target>`.

    `thunks` maps a thunk with a derived name to its final target, `final_names`
    is every function's name once the caller's names land, and `source_names`
    the mapped source name per thunk address.
    """
    ordered = sorted(final_names, key=lambda a: int(a, 16))
    rows = []
    for b, target in sorted(thunks.items()):
        target_tu, core = sm.split_qualified_name(final_names.get(target))
        source_tu, source_core = sm.split_qualified_name(source_names.get(b))
        if core is not None:
            tu = source_tu if source_core == core and source_tu else target_tu
            prefix = "%s_" % tu if tu else ""
            rows.append({"b": b, "target": target, "unidentified": False,
                         "want": "%s%s_FUN_%s" % (prefix, core, b)})
            continue
        tu = source_tu or position_unit(b, ordered, final_names, thunks)
        want = "%s_FUN_%s" % (tu, b) if tu else placeholder_thunk_name(target)
        if want != final_names.get(b):
            rows.append({"b": b, "target": target, "want": want, "unidentified": not tu})
    return rows


def derived_name_thunks(funcs):
    """addr -> final target addr, for in-program thunks with no name of their own.

    That includes a thunk set to the placeholder by an earlier run, so it is
    picked up again once its target is identified.
    """
    from ghidra.program.model.symbol import SourceType
    out = {}
    for addr, f in funcs.items():
        if not f.isThunk():
            continue
        target = f.getThunkedFunction(True)
        if target is None or target.isExternal():
            continue
        target_addr = "%08x" % target.getEntryPoint().getOffset()
        if (f.getSymbol().getSource() == SourceType.DEFAULT
                or f.getName() == placeholder_thunk_name(target_addr)):
            out[addr] = target_addr
    return out


def name_thunks(program, source_names=None):
    """Rename every thunk still showing its target's name; returns the rows applied."""
    from ghidra.program.model.symbol import SourceType
    funcs = {"%08x" % f.getEntryPoint().getOffset(): f
             for f in program.getFunctionManager().getFunctions(True)}
    names = {a: f.getName() for a, f in funcs.items()}
    rows = plan_thunk_names(derived_name_thunks(funcs), names, source_names or {})
    for row in rows:
        funcs[row["b"]].setName(row["want"], SourceType.USER_DEFINED)
    return rows
