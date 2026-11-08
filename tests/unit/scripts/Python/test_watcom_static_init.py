# Imports
import importlib
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from sibling_images import function, install_programs
import sibling_match
import watcom_static_init as wsi

# The faked Ghidra module's, so it is the constant the script compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
UNITS = ["core_a.cpp", "core_b.cpp", "core_c.cpp", "core_d.cpp", "core_e.cpp",
         "core_f.cpp", "core_g.cpp", "core_h.cpp", "core_i.cpp"]
STARTS = [CODE + 0x100 * i for i in range(len(UNITS))]
CRT_INIT = CODE + 0xf00
# Bytes before the table that cannot start an entry, so it lands unaligned
LEAD = b"\xff\xff\xff"
TABLE = DATA + len(LEAD)


def table_bytes(entries):
    return b"".join(wsi.ENTRY.pack(*entry) for entry in entries)


def game_pe(entries = None, terminated = True):
    entries = entries if entries is not None else (
        [(0, wsi.GAME_PRIORITY, start) for start in STARTS] + [(0, 32, CRT_INIT)])
    data = LEAD + table_bytes(entries + ([(0, 0, 0)] if terminated else []))
    return build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE),
                               ("DGROUP", data, 0), (".bss", b"", 0)], BASE)


def sibling_functions():
    out = []
    for unit, start in zip(UNITS, STARTS):
        out.append(function(start, f"{unit}_staticInit_FUN_{start:08x}"))
        out.append(function(start + 0x40, f"{unit}_work_FUN_{start + 0x40:08x}"))
    return out + [function(CRT_INIT, f"crt_init.c_init_FUN_{CRT_INIT:08x}")]


# The target before anything is named: placeholders throughout, except that
# core_g's staticInit already carries its name
def game_functions():
    out = []
    for unit, start in zip(UNITS, STARTS):
        name = f"{unit}_staticInit_FUN_{start:08x}" if unit == "core_g.cpp" else f"FUN_{start:08x}"
        out.append(function(start, name))
        out.append(function(start + 0x40, f"FUN_{start + 0x40:08x}"))
        out.append(function(start + 0x80, f"FUN_{start + 0x80:08x}"))
    return out + [function(CRT_INIT, f"FUN_{CRT_INIT:08x}")]


# Anchors for a, e and i; everything between them is left for table order. The
# CRT's initialiser maps to a name with no unit in it.
def mapping_file(tmp_path):
    pairs = [{"a": f"{STARTS[i]:08x}", "b": f"{STARTS[i]:08x}",
              "name": f"{UNITS[i]}_staticInit_FUN_{STARTS[i]:08x}", "confidence": 0.99}
             for i in (0, 4, 8)]
    pairs.append({"a": f"{CRT_INIT:08x}", "b": f"{CRT_INIT:08x}", "name": "entry", "confidence": 0.9})
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps({"from": "sib.exe", "to": "game.exe", "pairs": pairs}))
    return path


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    annotations = install_programs(monkeypatch, tmp_path, {
        "sib.exe": (game_pe(), sibling_functions()),
        "game.exe": (game_pe(), game_functions())})
    # core_a's third function asserts its own file
    folder = annotations / "game.exe" / "reports"
    folder.mkdir(parents = True)
    (folder / "line_pins.json").write_text(json.dumps(
        {"pins": [{"file": "../core/a.cpp", "line": 10, "va": STARTS[0] + 0x84}]}))
    return annotations


def test_the_longest_run_of_entries_outside_code_is_the_table(programs):
    tables = wsi.find_init_tables(sibling_match.Image("game.exe"))
    assert len(tables) == 1
    assert (tables[0][0][0], len(tables[0])) == (TABLE, len(UNITS) + 2)
    assert tables[0][-1] == (TABLE + 6 * (len(UNITS) + 1), 0, 0, 0)


def test_a_run_too_short_or_pointing_outside_code_is_not_a_table(monkeypatch, tmp_path):
    entries = [(0, 64, STARTS[i]) for i in range(4)] + [(0, 64, DATA)] + [(0, 64, STARTS[0])] * 4
    install_programs(monkeypatch, tmp_path, {"short.exe": (game_pe(entries, terminated = False), [])})
    assert wsi.find_init_tables(sibling_match.Image("short.exe")) == []


def test_a_table_may_run_to_the_end_of_its_section(monkeypatch, tmp_path):
    entries = [(0, 64, start) for start in STARTS]
    install_programs(monkeypatch, tmp_path, {"open.exe": (game_pe(entries, terminated = False), [])})
    tables = wsi.find_init_tables(sibling_match.Image("open.exe"))
    assert [len(table) for table in tables] == [len(STARTS)]


@pytest.mark.parametrize("path, stems, unit", [
    ("../core/setutil.cpp", {}, "core_setutil.cpp"),
    ("..\\Engine\\DosIO.c", {"engine_dosio": "engine_dosio.cpp"}, "engine_dosio.cpp"),
    ("setutil.cpp", {}, None),
])
def test_a_pin_names_the_projects_unit(path, stems, unit):
    assert wsi.pin_unit(path, stems) == unit


@pytest.mark.parametrize("func, wears", [
    ({"name": "core_menu.cpp_FUN_0050cc90", "thunk": True, "thtarget": "0050cc90"}, True),
    ({"name": "core_main.c_FUN_00503290", "thunk": True, "thtarget": "0050cc90"}, False),
    ({"name": "core_menu.cpp_FUN_0050cc90", "thtarget": "0050cc90"}, False),
    ({"name": "entry", "thunk": True, "thtarget": "0050cc90"}, False),
])
def test_only_a_thunk_showing_its_targets_address_wears_its_name(func, wears):
    assert wsi.wears_target_name(func) is wears


@pytest.mark.parametrize("func, placeholder", [
    ({"name": "FUN_00401000"}, True),
    ({"name": "thunk_FUN_00597970", "thunk": True}, True),
    ({"name": "thunk_FUN_00597970"}, False),
    ({"name": "core_menu.cpp_FUN_0050cc90", "thunk": True, "thtarget": "0050cc90"}, True),
    ({"name": "core_a.cpp_FUN_00401000"}, False),
    ({"name": "unknown_afterammo.cpp_FUN_00401000"}, True),
    ({"name": "unkafter_ammo.cpp_FUN_00401000"}, True),
    ({"name": "crt_unknown.c_FUN_00401000"}, True),
    ({"name": "crt_unknown.c_memcpy_FUN_00401000"}, False),
])
def test_a_placeholder_is_ghidras_name_or_a_thunk_wearing_its_targets(func, placeholder):
    assert wsi.unlabelled(func) is placeholder


def test_pins_outrank_names_and_disagreeing_pins_say_nothing(monkeypatch, tmp_path):
    functions = [function(CODE, "core_x.cpp_f_FUN_00401000"), function(CODE + 0x10, "FUN_00401010"),
                 function(CODE + 0x20, "core_x.cpp_FUN_00401020", thunk = True, thtarget = "00401020"),
                 function(CODE + 0x30, "core_y.cpp_g_FUN_00401030"),
               function(CODE + 0x40, "unknown_afterx.cpp_FUN_00401040")]
    install_programs(monkeypatch, tmp_path, {"p.exe": (game_pe(), functions)})
    pins = [{"file": "../core/z.cpp", "line": 1, "va": CODE + 4},
            {"file": "../core/a.cpp", "line": 2, "va": CODE + 0x14},
            {"file": "../core/b.cpp", "line": 3, "va": CODE + 0x18}]
    evidence = wsi.function_evidence(sibling_match.Image("p.exe"), pins, {})
    assert evidence == {"00401000": ("core_z.cpp", "pin"), "00401030": ("core_y.cpp", "name")}


def test_the_longest_increasing_run_survives_a_wrong_early_pair():
    assert wsi.longest_increasing([(0, 0), (1, 9), (2, 2), (3, 3), (4, 5)]) == [(0, 0), (2, 2), (3, 3), (4, 5)]
    assert wsi.longest_increasing([(0, 4), (1, 1)]) == [(1, 1)]
    assert wsi.longest_increasing([]) == []


def entries(*funcs):
    return [{"func": f} for f in funcs]


SOURCE_UNITS = ["core_a.cpp", "core_b.cpp", "core_c.cpp", "core_d.cpp", "core_e.cpp"]


def staticinit(unit):
    return f"{unit}_staticInit_FUN_00000000"


def test_named_mapped_and_ordered_entries_resolve():
    rows = wsi.resolve_entries(entries("a", "b", "c", "d", "e"), {"a": staticinit("core_a.cpp")},
                               {"e": staticinit("core_e.cpp"), "b": "core_b.cpp_work_FUN_1"},
                               SOURCE_UNITS)
    assert [(r["unit"], r["status"]) for r in rows] == [
        ("core_a.cpp", "named"), ("core_b.cpp", "order"), ("core_c.cpp", "order"),
        ("core_d.cpp", "order"), ("core_e.cpp", "mapped")]


def test_an_anchor_out_of_table_order_is_a_conflict_and_no_anchor():
    rows = wsi.resolve_entries(entries("a", "x", "c"), {},
                               {"a": staticinit("core_a.cpp"), "x": staticinit("core_e.cpp"),
                                "c": staticinit("core_c.cpp")}, SOURCE_UNITS)
    assert [r["status"] for r in rows] == ["mapped", "conflict", "mapped"]


@pytest.mark.parametrize("why, funcs, mapped, source_units", [
    ("counts differ", ("a", "b", "e"), {"a": "core_a.cpp", "e": "core_e.cpp"}, SOURCE_UNITS),
    ("a gap entry already has a unit", ("a", "b", "x", "d", "e"),
     {"a": "core_a.cpp", "x": "core_z.cpp", "e": "core_e.cpp"}, SOURCE_UNITS),
    ("the sibling never named one", ("a", "b", "c", "d", "e"), {"a": "core_a.cpp", "e": "core_e.cpp"},
     ["core_a.cpp", None, "core_c.cpp", "core_d.cpp", "core_e.cpp"]),
    ("the result would break link order", ("a", "b", "c"), {"a": "core_a.cpp", "c": "core_c.cpp"},
     ["core_a.cpp", "core_z.cpp", "core_c.cpp"]),
])
def test_a_gap_that_cannot_be_paired_stays_unresolved(why, funcs, mapped, source_units):
    rows = wsi.resolve_entries(entries(*funcs), {}, {f: staticinit(u) for f, u in mapped.items()},
                               source_units)
    gap = [r for r in rows if r["func"] not in mapped]
    assert all(r["status"] == "unresolved" for r in gap), why


def test_adjacent_anchors_leave_nothing_to_pair():
    rows = wsi.resolve_entries(entries("a", "b"), {}, {"a": staticinit("core_a.cpp"),
                                                     "b": staticinit("core_b.cpp")}, SOURCE_UNITS)
    assert [r["status"] for r in rows] == ["mapped", "mapped"]


def test_a_bracket_fills_only_between_labels_of_one_unit():
    ordered = ["01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11"]
    labels = {"01": "core_a.cpp", "03": "core_a.c", "05": "core_b.cpp", "07": None,
              "08": "crt_x.c", "10": "crt_x.c", "11": None}
    assert wsi.bracket(ordered, labels) == [{"addr": "02", "unit": "core_a.cpp", "between": ["01", "03"]}]
    assert wsi.bracket(["01", "02", "03"], {"01": None, "03": None}) == []


def test_the_siblings_table_lists_its_units_in_order(programs):
    assert wsi.source_table_units("sib.exe") == UNITS
    assert wsi.source_table_units("game.exe") == [None] * 6 + ["core_g.cpp", None, None]


@pytest.fixture(name = "report")
def fixture_report(programs, tmp_path):
    return wsi.analyse("game.exe", str(mapping_file(tmp_path)))


def test_analysis_resolves_every_unit_and_labels_what_the_pins_prove(report):
    assert report["table"] == {"addr": f"{TABLE:08x}", "entries": len(UNITS) + 2,
                               "game_entries": len(UNITS), "other_tables": 0}
    assert [(r["unit"], r["status"]) for r in report["units"]] == [
        (u, "named" if u == "core_g.cpp" else "mapped" if u in ("core_a.cpp", "core_e.cpp", "core_i.cpp")
         else "order") for u in UNITS]
    assert report["assign"] == [
        {"addr": f"{STARTS[0] + 0x80:08x}", "unit": "core_a.cpp",
         "between": [f"{STARTS[0] + 0x80:08x}"] * 2},
        {"addr": f"{STARTS[0] + 0x40:08x}", "unit": "core_a.cpp",
         "between": [f"{STARTS[0]:08x}", f"{STARTS[0] + 0x80:08x}"]}]


def test_names_are_planned_for_placeholders_only(report):
    renames = wsi.plan_names(report)
    assert len(renames) == len(UNITS) - 1 + 2
    assert renames[0] == (f"{STARTS[0]:08x}", f"FUN_{STARTS[0]:08x}",
                          f"core_a.cpp_staticInit_FUN_{STARTS[0]:08x}")
    assert renames[-1][2] == f"core_a.cpp_FUN_{STARTS[0] + 0x40:08x}"


def test_a_conflict_or_a_missing_function_is_not_renamed():
    report = {"names": {"00000001": "FUN_00000001"}, "assign": [],
              "units": [{"func": "00000001", "unit": "core_a.cpp", "status": "conflict"},
                        {"func": "00000002", "unit": "core_b.cpp", "status": "mapped"}]}
    assert wsi.plan_names(report) == []


def test_analysis_without_a_table_stops(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"none.exe": (game_pe([], terminated = False), [])})
    with pytest.raises(SystemExit, match = "no static-initialiser table"):
        wsi.analyse("none.exe")


def test_analysis_needs_neither_pins_nor_a_mapping(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"game.exe": (game_pe(), game_functions())})
    report = wsi.analyse("game.exe")
    assert [r["status"] for r in report["units"]].count("unresolved") == len(UNITS) - 1


def test_the_report_names_conflicts_and_entries_with_no_function(capsys):
    report = {"program": "game.exe", "assign": [{"unit": "core_a.cpp"}],
              "table": {"addr": "00402003", "entries": 3, "game_entries": 2, "other_tables": 1},
              "units": [{"func": "00401000", "unit": "core_a.cpp", "status": "conflict", "in_program": False},
                        {"func": "00401100", "unit": None, "status": "unresolved", "in_program": True}]}
    wsi.print_report(report, [("00401100", "FUN_00401100", "core_b.cpp_FUN_00401100")], 5)
    out = capsys.readouterr().out
    assert "table at 00402003, 3 entries (2 priority 64), 1 other candidate run(s)" in out
    assert "conflict=1  unresolved=1" in out
    assert "1 entries point where the program has no function" in out
    assert "conflict 00401000  core_a.cpp is out of table order" in out
    assert "bracketed: 1 functions in 1 units" in out
    assert "00401100  FUN_00401100 -> core_b.cpp_FUN_00401100" in out


ENTRY_TYPE = StructureDataType("RuntimeHandlerEntry", length = 6)


def program_for(report, *data_types, user_label = False):
    program = Program()
    program.getDataTypeManager().add(*data_types)
    for r in report["units"][1:]:
        program.getFunctionManager().add(report["names"][r["func"]], int(r["func"], 16))
    if user_label:
        program.getSymbolTable().createLabel(Address(TABLE), "g_MyTable", SourceType.USER_DEFINED)
    return program


def test_applying_creates_types_labels_and_renames(report):
    program = program_for(report, ENTRY_TYPE)
    renames = wsi.plan_names(report)
    done = wsi.apply_to_program(program, report, renames)
    assert done == {"created": 1, "typed": True, "renamed": len(renames) - 2}
    array = program.getListing().getDefinedDataAt(Address(TABLE)).getDataType()
    assert (array.getDataType(), array.getNumElements(), array.getLength()) == (
        ENTRY_TYPE, len(UNITS) + 2, 6 * (len(UNITS) + 2))
    assert program.getSymbolTable().getPrimarySymbol(Address(TABLE)).getName() == "g_InitHandlers"
    start = program.getFunctionManager().getFunctionAt(Address(STARTS[0]))
    assert start.getName() == f"core_a.cpp_staticInit_FUN_{STARTS[0]:08x}"
    assert program.transactions == [["Watcom static-initialiser table", True]]


def test_applying_without_the_type_still_labels_and_keeps_a_users_label(report):
    program = program_for(report, user_label = True)
    done = wsi.apply_to_program(program, report, [])
    assert done == {"created": 1, "typed": False, "renamed": 0}
    assert program.getSymbolTable().getPrimarySymbol(Address(TABLE)).getName() == "g_MyTable"


def test_a_failed_apply_rolls_back(report):
    program = program_for(report)
    with pytest.raises(ValueError):
        wsi.apply_to_program(program, report, [("not an address", "x", "y")])
    assert program.transactions == [["Watcom static-initialiser table", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["watcom_static_init.py", *argv])
    wsi.main()


def test_main_reports_and_writes_json(monkeypatch, report, tmp_path, capsys):
    out = tmp_path / "report.json"
    run_main(monkeypatch, "game.exe", "--mapping", str(tmp_path / "mapping.json"), "--out", str(out))
    assert "renames planned: 10" in capsys.readouterr().out
    assert "names" not in json.loads(out.read_text())


def test_main_applies_to_a_project(monkeypatch, report, tmp_path, capsys):
    module = FakePyghidra(program_for(report, ENTRY_TYPE))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, "game.exe", "--apply", "--project", str(tmp_path), "NocturneEdit")
    assert module.opened == [(str(tmp_path), "NocturneEdit"), "/game.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    assert "created 1 functions, typed table: yes" in capsys.readouterr().out


def test_main_reports_a_missing_entry_type(monkeypatch, report, tmp_path, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program_for(report)))
    run_main(monkeypatch, "game.exe", "--apply", "--project", str(tmp_path), "NocturneEdit")
    assert "typed table: no (RuntimeHandlerEntry missing)" in capsys.readouterr().out


def test_apply_needs_a_project(monkeypatch, report):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, "game.exe", "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, programs, capsys):
    monkeypatch.setattr(sys, "argv", ["watcom_static_init.py", "game.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "watcom_static_init.py"), run_name = "__main__")
    assert f"game.exe: table at {TABLE:08x}" in capsys.readouterr().out
