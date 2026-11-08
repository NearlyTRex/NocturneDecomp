# Imports
import importlib

# Third-party imports
import pytest

# Local imports
from ghidra_program import Program
import thunk_names

# The faked Ghidra module's, so it is the constant the module compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

NAMES = {
    "00401000": "core_a.cpp_f_FUN_00401000",
    "00401010": "core_a.cpp_FUN_00401010",
    "00401020": "core_a.cpp_g_FUN_00401020",
    "00401030": "core_b.cpp_h_FUN_00401030",
    "00401040": "core_a.cpp_FUN_00401040",
    "00500000": "core_x.cpp_target_FUN_00500000",
    "00500010": "FUN_00500010",
}


def test_a_thunk_takes_its_targets_core_and_its_own_address():
    rows = thunk_names.plan_thunk_names({"00401010": "00500000"}, NAMES, {})
    assert rows == [{"b": "00401010", "target": "00500000", "unidentified": False,
                     "want": "core_x.cpp_target_FUN_00401010"}]


def test_the_paired_source_thunk_gives_the_unit_when_it_agrees_on_the_core():
    agree = {"00401010": "core_q.cpp_target_FUN_00409999"}
    disagree = {"00401010": "core_q.cpp_other_FUN_00409999"}
    assert thunk_names.plan_thunk_names({"00401010": "00500000"}, NAMES, agree)[0]["want"] == \
        "core_q.cpp_target_FUN_00401010"
    assert thunk_names.plan_thunk_names({"00401010": "00500000"}, NAMES, disagree)[0]["want"] == \
        "core_x.cpp_target_FUN_00401010"
    assert thunk_names.plan_thunk_names({"00401010": "00500000"}, dict(NAMES, **{"00500000": "target_FUN_00500000"}),
                                        {})[0]["want"] == "target_FUN_00401010"


def test_a_thunk_to_an_unnamed_target_takes_a_unit_from_its_position_or_stays_a_placeholder():
    names = dict(NAMES, **{"00401010": "thunk_FUN_00500010"})
    rows = thunk_names.plan_thunk_names({"00401010": "00500010", "00401040": "00500010"}, names,
                                        {"00401040": "core_m.cpp_FUN_00409999"})
    assert [(r["want"], r["unidentified"]) for r in rows] == [
        ("core_a.cpp_FUN_00401010", False), ("core_m.cpp_FUN_00401040", False)]
    rows = thunk_names.plan_thunk_names({"00401000": "00500010"}, NAMES, {})
    assert [(r["want"], r["unidentified"]) for r in rows] == [("thunk_FUN_00500010", True)]
    unchanged = dict(NAMES, **{"00401000": "thunk_FUN_00500010"})
    assert thunk_names.plan_thunk_names({"00401000": "00500010"}, unchanged, {}) == []


@pytest.mark.parametrize("addr, unit", [("00401010", "core_a.cpp"), ("00401040", None), ("00500010", None)])
def test_a_position_unit_needs_both_neighbours_to_agree(addr, unit):
    ordered = sorted(NAMES)
    assert thunk_names.position_unit(addr, ordered, NAMES, {"00401030"}) == unit


def program_with_thunks():
    program = Program()
    fm = program.getFunctionManager()
    target = fm.add("core_x.cpp_target_FUN_00500000", 0x500000)
    middle = fm.add("FUN_00500020", 0x500020)
    middle.thunk_target = target
    external = fm.add("htons", 0x600000)
    external.external = True
    derived = fm.add("core_x.cpp_target_FUN_00500000", 0x401010)
    derived.thunk_target, derived.source = middle, SourceType.DEFAULT
    placeholder = fm.add("thunk_FUN_00500000", 0x401020)
    placeholder.thunk_target, placeholder.source = target, SourceType.USER_DEFINED
    named = fm.add("core_a.cpp_own_FUN_00401030", 0x401030)
    named.thunk_target, named.source = target, SourceType.USER_DEFINED
    to_import = fm.add("htons", 0x401040)
    to_import.thunk_target, to_import.source = external, SourceType.DEFAULT
    dangling = fm.add("FUN_00401050", 0x401050)
    dangling.thunk_target = target
    dangling.getThunkedFunction = lambda recursive: None
    return program


def test_only_thunks_showing_their_targets_name_are_picked_up():
    funcs = {f"{f.getEntryPoint().getOffset():08x}": f
             for f in program_with_thunks().getFunctionManager().getFunctions(True)}
    assert thunk_names.derived_name_thunks(funcs) == {"00401010": "00500000", "00401020": "00500000"}


def test_naming_renames_each_picked_up_thunk_in_the_program():
    program = program_with_thunks()
    rows = thunk_names.name_thunks(program)
    names = {f"{f.getEntryPoint().getOffset():08x}": f.getName()
             for f in program.getFunctionManager().getFunctions(False)}
    assert [r["b"] for r in rows] == ["00401010", "00401020"]
    assert (names["00401010"], names["00401020"]) == ("core_x.cpp_target_FUN_00401010",
                                                      "core_x.cpp_target_FUN_00401020")
