# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs, write_bucket
import sibling_match
import wall_off_crt as woc

BASE = 0x400000
CODE = section_va(BASE, 0)


def addr(offset):
    return f"{at(offset):08x}"


@pytest.mark.parametrize("name, kind", [
    ("crt_kernel32.c_GetFileTime", ("import", "crt_kernel32.c_GetFileTime")),
    ("crt_stdio.c_sprintf_FUN_00401000", ("crt_named", "crt_stdio.c_sprintf_FUN_00401000")),
    ("core_x.cpp_f_FUN_00401000", ("game", None)),
    ("core_x.cpp_FUN_00401000", ("game", None)),
    ("core_x.cpp_label", None),
    ("crt_unknown.c_FUN_00401000", None),
    ("unkafter_x.cpp_FUN_00401000", None),
    ("FUN_00401000", None),
    ("caseD_1", None),
])
def test_an_unpaired_function_is_judged_by_its_own_name(name, kind):
    assert woc.own_kind(name) == kind


def test_a_function_takes_the_kind_most_of_its_nearest_neighbours_have():
    mapped = [(0x10, False), (0x20, True), (0x30, True), (0x40, True), (0x50, False)]
    assert woc.neighbourhood_is_crt(mapped, 0x35, k = 3)
    assert not woc.neighbourhood_is_crt(mapped, 0x35, k = 5)
    assert woc.neighbourhood_is_crt(mapped, 0x60, k = 3, threshold = 0.6)
    assert not woc.neighbourhood_is_crt(mapped, 0x05, k = 2)
    assert not woc.neighbourhood_is_crt([], 0x10)


# Game code, then well after it the runtime: one stray unnamed function in each, the
# runtime's first function called from game code and its second only from other runtime code.
R = 0x300                                          # where the runtime starts
PRINTF, VPRINTF, STRAY, PLACEHOLDER, IMPORT = R, R + 0x10, R + 0x20, R + 0x30, R + 0x40


def named(offset, name):
    return f"{name}_FUN_{at(offset):08x}"


NAMES = {
    0x000: named(0x000, "core_a.cpp_main"),
    0x010: named(0x010, "core_a.cpp_helper"),      # named but unpaired: game by its own name
    0x020: f"FUN_{at(0x020):08x}",                 # among game code
    0x030: named(0x030, "core_a.cpp_tail"),
    # the rest of the game, named as the sibling transfer leaves it
    **{0x040 + 0x10 * i: named(0x040 + 0x10 * i, f"core_b.cpp_g{i}") for i in range(9)},
    PRINTF: named(PRINTF, "crt_stdio.c_printf"),           # paired with a crt_ name
    VPRINTF: named(VPRINTF, "crt_stdio.c_vprintf"),        # named by itself
    STRAY: f"FUN_{at(STRAY):08x}",                         # among runtime code
    PLACEHOLDER: named(PLACEHOLDER, "crt_unknown.c"),      # placeholder, among runtime code
    IMPORT: "crt_kernel32.c_WriteFile",                    # an import thunk
    # the rest of the runtime, named as nocedit's is
    **{R + 0x50 + 0x10 * i: named(R + 0x50 + 0x10 * i, f"crt_math.c_f{i}") for i in range(9)},
}
# The runtime pair for STRAY is weak: --min-confidence drops it, and STRAY is then unidentified.
PAIRS = {0x000: ("core_a.cpp_main_FUN_00500000", 0.95), 0x030: ("core_a.cpp_tail_FUN_00500030", 0.95),
         PRINTF: ("crt_stdio.c_printf_FUN_00500100", 0.95), STRAY: ("crt_stdio.c_vfprintf_FUN_00500120", 0.5)}
CALLS = [(0x004, PRINTF), (0x014, STRAY), (PRINTF + 4, VPRINTF), (STRAY + 4, PLACEHOLDER),
         (VPRINTF + 4, IMPORT)]


@pytest.fixture(name = "mapping")
def fixture_mapping(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE)], BASE)
    annotations = install_programs(monkeypatch, tmp_path, {
        "game.exe": (pe, [function(at(o), n) for o, n in NAMES.items()])})
    write_bucket(annotations, "game.exe", "cross_references", [
        {"from": addr(src), "to": addr(dst), "type": "UNCONDITIONAL_CALL"} for src, dst in CALLS])
    doc = {"from": "editor.exe", "to": "game.exe", "pairs": [
        {"a": "00500000", "b": addr(o), "name": n, "confidence": c} for o, (n, c) in PAIRS.items()]}
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps(doc))
    return path


def test_every_function_is_classified_by_its_pair_its_name_or_its_neighbours(mapping):
    doc = json.loads(mapping.read_text())
    kinds = woc.classify(sibling_match.Image("game.exe"), doc)
    kinds = {int(a, 16) - CODE: k for a, (k, _) in kinds.items()}
    assert {o: kinds[o] for o in (0x000, 0x010, 0x020, 0x030, PRINTF, VPRINTF, STRAY, PLACEHOLDER, IMPORT)} == {
        0x000: "game", 0x010: "game", 0x020: "game", 0x030: "game", PRINTF: "crt_named",
        VPRINTF: "crt_named", STRAY: "crt_named", PLACEHOLDER: "crt_region", IMPORT: "import"}


def test_the_boundary_is_the_runtime_game_code_calls(mapping, capsys):
    woc.main([str(mapping)])
    printed = capsys.readouterr().out
    assert "game.exe: 27 functions" in printed
    assert "called directly from game code : 2" in printed
    assert "2 already carry a CRT name, from editor.exe or their own" in printed
    assert f"{addr(STRAY)}     1 game callers  crt_stdio.c_vfprintf" in printed
    assert "name these" not in printed


def test_without_its_weak_pair_a_boundary_function_is_unidentified(mapping, tmp_path, capsys):
    out = tmp_path / "wall.json"
    woc.main([str(mapping), "--min-confidence", "0.9", "--out", str(out), "--list-boundary"])
    printed = capsys.readouterr().out
    assert "crt_region :     2" in printed
    assert f"{addr(STRAY)}     1 game callers  (unidentified)" in printed
    assert f"{addr(STRAY)}     1 game callers\n" in printed
    assert f"{addr(PRINTF)}     1  crt_stdio.c_printf" in printed
    assert f"{addr(STRAY)}     1  (unidentified)" in printed
    wall = json.loads(out.read_text())
    assert wall["region_start"] == addr(PRINTF)
    assert [b["addr"] for b in wall["crt_boundary"]] == [addr(PRINTF), addr(STRAY)]
    assert wall["crt_interior"][:2] == [addr(VPRINTF), addr(PLACEHOLDER)]


def test_a_program_without_runtime_has_no_region(monkeypatch, tmp_path, capsys):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)], BASE)
    install_programs(monkeypatch, tmp_path, {"game.exe": (pe, [function(at(0), "core_a.cpp_f_FUN_00401000")])})
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps({"from": "e.exe", "to": "game.exe", "pairs": []}))
    out = tmp_path / "wall.json"
    woc.main([str(path), "--out", str(out)])
    printed = capsys.readouterr().out
    assert "most-called" not in printed and "name these" not in printed
    assert json.loads(out.read_text())["region_start"] is None


def test_runs_as_a_script(mapping, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["wall_off_crt.py", str(mapping)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "wall_off_crt.py"), run_name = "__main__")
    assert "game.exe: 27 functions" in capsys.readouterr().out
