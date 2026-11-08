# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs
import assign_virtual_units as avu

BASE = 0x400000
CODE = section_va(BASE, 0)


@pytest.mark.parametrize("prev, unit", [
    (None, "unknown_start.cpp"), ("engine_2d.c", "unknown_after2d.cpp"),
    ("core_my-file.cpp", "unknown_aftermyfile.cpp")])
def test_a_virtual_unit_is_named_for_the_unit_before_it(prev, unit):
    assert avu.virtual_unit(prev) == unit


@pytest.mark.parametrize("labels, line", [
    ({"1": "core_a.cpp", "2": "crt_s.c", "3": "core_b.cpp", "4": "crt_x.c"}, 3),
    ({"1": "core_a.cpp", "2": "crt_s.c"}, 1),
    ({"1": "crt_s.c"}, 0),
    ({"1": "core_a.cpp", "4": "core_b.cpp"}, None),
    ({}, None),
])
def test_the_crt_line_is_the_first_crt_after_the_last_game_code(labels, line):
    assert avu.crt_line(["1", "2", "3", "4"], labels) == line


def test_crt_islands_inside_the_game_are_runtime_code():
    ordered = ["1", "2", "3", "4", "5", "6", "7"]
    labels = {"1": "core_a.cpp", "2": "crt_s.c", "4": "crt_s.c", "6": "crt_m.c", "7": "core_b.cpp"}
    rows, line = avu.plan(ordered, labels, {"3", "5"})
    assert line is None
    assert rows == [("3", "crt_unknown.c", "crt island"), ("5", "crt_unknown.c", "crt island")]


def test_without_any_evidence_everything_is_at_the_start():
    rows, line = avu.plan(["1", "2"], {}, {"1", "2"})
    assert (rows, line) == ([("1", "unknown_start.cpp", "between"), ("2", "unknown_start.cpp", "between")], None)


def functions():
    names = {
        0x000: "FUN_00401000",                     # before any evidence
        0x010: "core_a.cpp_f_FUN_00401010",
        0x020: "FUN_00401020",                     # bracketed by a
        0x030: "FUN_00401030",                     # asserts ../core/a.cpp
        0x040: "unknown_aftera.cpp_FUN_00401040",  # already right
        0x050: "core_b.cpp_g_FUN_00401050",
        0x060: "crt_string.c_memcpy_FUN_00401060",
        0x070: "FUN_00401070",                     # after a CRT island, before game code
        0x080: "core_c.cpp_h_FUN_00401080",
        0x090: "FUN_00401090",                     # between c and the runtime
        0x0a0: "crt_init.c_x_FUN_004010a0",
        0x0b0: "FUN_004010b0",                     # past the CRT line
        0x0c0: "crt_unknown.c_FUN_004010c0",       # already right
    }
    return [function(CODE + offset, name) for offset, name in names.items()]


@pytest.fixture(name = "program")
def fixture_program(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE)], BASE)
    annotations = install_programs(monkeypatch, tmp_path, {"game.exe": (pe, functions())})
    folder = annotations / "game.exe" / "reports"
    folder.mkdir(parents = True)
    (folder / "line_pins.json").write_text(json.dumps(
        {"pins": [{"file": "../core/a.cpp", "line": 3, "va": CODE + 0x34}]}))
    return "game.exe"


def test_every_placeholder_is_given_the_unit_its_position_allows(program):
    report = avu.analyse(program)
    assert report["crt_line"] == f"{CODE + 0xa0:08x}"
    assert [(int(a, 16) - CODE, unit, why) for a, unit, why in report["rows"]] == [
        (0x000, "unknown_start.cpp", "between"), (0x020, "core_a.cpp", "bracket"),
        (0x030, "core_a.cpp", "pin"), (0x040, "unknown_aftera.cpp", "between"),
        (0x070, "unknown_afterb.cpp", "between"), (0x090, "unknown_afterc.cpp", "between"),
        (0x0b0, "crt_unknown.c", "crt"), (0x0c0, "crt_unknown.c", "crt")]
    assert [r[2] for r in report["renames"]] == [
        "unknown_start.cpp_FUN_00401000", "core_a.cpp_FUN_00401020", "core_a.cpp_FUN_00401030",
        "unknown_afterb.cpp_FUN_00401070", "unknown_afterc.cpp_FUN_00401090",
        "crt_unknown.c_FUN_004010b0"]


def test_without_pins_a_function_falls_back_on_its_position(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE)], BASE)
    install_programs(monkeypatch, tmp_path, {"bare.exe": (pe, functions())})
    rows = {int(a, 16) - CODE: (unit, why) for a, unit, why in avu.analyse("bare.exe")["rows"]}
    assert rows[0x030] == ("unknown_aftera.cpp", "between")


def test_the_report_counts_reasons_and_virtual_units(program, capsys):
    avu.print_report(avu.analyse(program), 2)
    out = capsys.readouterr().out
    assert f"game.exe: 13 functions, 8 still without a unit; CRT line at {CODE + 0xa0:08x}" in out
    assert "between=4  bracket=1  crt=2  pin=1" in out
    assert "4 virtual units, largest: unknown_start.cpp (1)" in out
    assert "renames planned: 6" in out
    assert "00401000  between    FUN_00401000 -> unknown_start.cpp_FUN_00401000" in out


def program_for(report):
    ghidra = Program()
    for addr, cur, _, _ in report["renames"][1:]:
        ghidra.getFunctionManager().add(cur, int(addr, 16))
    return ghidra


def test_applying_renames_what_the_program_has(program):
    report = avu.analyse(program)
    ghidra = program_for(report)
    assert avu.apply_to_program(ghidra, report["renames"]) == len(report["renames"]) - 1
    renamed = ghidra.getFunctionManager().getFunctionAt(Address(CODE + 0xb0))
    assert renamed.getName() == "crt_unknown.c_FUN_004010b0"
    assert ghidra.transactions == [["Assign virtual units", True]]


def test_a_failed_apply_rolls_back():
    ghidra = Program()
    with pytest.raises(ValueError):
        avu.apply_to_program(ghidra, [("not an address", "x", "y", "why")])
    assert ghidra.transactions == [["Assign virtual units", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["assign_virtual_units.py", *argv])
    avu.main()


def test_main_applies_to_a_project(monkeypatch, program, tmp_path, capsys):
    module = FakePyghidra(program_for(avu.analyse(program)))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, program, "--apply", "--project", str(tmp_path), "P")
    assert module.opened == [(str(tmp_path), "P"), "/game.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    assert "renamed 5" in capsys.readouterr().out


def test_apply_needs_a_project(monkeypatch, program):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, program, "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, program, capsys):
    monkeypatch.setattr(sys, "argv", ["assign_virtual_units.py", program])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "assign_virtual_units.py"), run_name = "__main__")
    assert "renames planned: 6" in capsys.readouterr().out
