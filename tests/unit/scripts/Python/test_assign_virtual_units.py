# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket
import assign_virtual_units as avu
import sibling_match

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)


@pytest.mark.parametrize("prev, unit", [
    (None, "unkaddr_00401010.cpp"), ("engine_2d.c", "unkafter_2d.cpp"),
    ("core_my-file.cpp", "unkafter_myfile.cpp"), ("core_tawiscara.cpp", "unkafter_tawiscar.cpp")])
def test_a_gap_is_named_for_the_unit_before_it_in_8_3(prev, unit):
    assert avu.virtual_unit(prev, "00401010") == unit


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
    assert (rows, line) == ([("1", "unkaddr_1.cpp", "between"), ("2", "unkaddr_1.cpp", "between")], None)


def functions():
    names = {
        0x000: "FUN_00401000",                     # before any evidence
        0x010: "core_a.cpp_f_FUN_00401010",
        0x020: "FUN_00401020",                     # bracketed by a
        0x030: "FUN_00401030",                     # asserts ../core/a.cpp
        0x040: "unkafter_a.cpp_FUN_00401040",      # already right
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
        (0x000, "unkaddr_00401000.cpp", "between"), (0x020, "core_a.cpp", "bracket"),
        (0x030, "core_a.cpp", "pin"), (0x040, "unkafter_a.cpp", "between"),
        (0x070, "unkafter_b.cpp", "between"), (0x090, "unkafter_c.cpp", "between"),
        (0x0b0, "crt_unknown.c", "crt"), (0x0c0, "crt_unknown.c", "crt")]
    assert [r[2] for r in report["renames"]] == [
        "unkaddr_00401000.cpp_FUN_00401000", "core_a.cpp_FUN_00401020", "core_a.cpp_FUN_00401030",
        "unkafter_b.cpp_FUN_00401070", "unkafter_c.cpp_FUN_00401090",
        "crt_unknown.c_FUN_004010b0"]


def test_without_pins_a_function_falls_back_on_its_position(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE)], BASE)
    install_programs(monkeypatch, tmp_path, {"bare.exe": (pe, functions())})
    rows = {int(a, 16) - CODE: (unit, why) for a, unit, why in avu.analyse("bare.exe")["rows"]}
    assert rows[0x030] == ("unkafter_a.cpp", "between")


def test_the_report_counts_reasons_and_virtual_units(program, capsys):
    avu.print_report(avu.analyse(program), 2)
    out = capsys.readouterr().out
    assert f"game.exe: 13 functions, 8 still without a unit; CRT line at {CODE + 0xa0:08x}" in out
    assert "between=4  bracket=1  crt=2  pin=1" in out
    assert "4 virtual units, largest: unkaddr_00401000.cpp (1)" in out
    assert "renames planned: 6" in out
    assert "00401000  between    FUN_00401000 -> unkaddr_00401000.cpp_FUN_00401000" in out


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


# --- evidence beyond names and pins ----------------------------------------------------

def test_a_function_knows_the_strings_it_reads(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE)], BASE)
    annotations = install_programs(monkeypatch, tmp_path, {"s.exe": (pe, functions())})
    write_bucket(annotations, "s.exe", "applied_strings", [{"addr": "00500000", "value": "a"}])
    write_bucket(annotations, "s.exe", "cross_references", [
        {"type": "DATA", "from": f"{CODE + 0x11:08x}", "to": "00500000"},
        {"type": "DATA", "from": f"{CODE + 0x900:08x}", "to": "00500000"},
        {"type": "DATA", "from": "zz", "to": "00500000"},
        {"type": "DATA", "from": f"{CODE:08x}", "to": "00500004"},
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE:08x}", "to": "00500000"},
        {"type": "DATA", "to": "00500000"}])
    assert avu.string_reads(sibling_match.Image("s.exe")) == {f"{CODE + 0x10:08x}": {0x500000}}


READS = {"a1": {10}, "a2": {30}, "b1": {50}, "shared": {30},
         "between": {20}, "edge": {5}, "torn": {20, 40}, "split": {50, 60}, "c1": {60}, "crt": {25}}
LABELS = {"a1": "core_a.cpp", "a2": "core_a.cpp", "b1": "core_b.cpp", "c1": "core_c.cpp",
          "crt": "crt_s.c"}


@pytest.mark.parametrize("func, unit", [
    ("between", "core_a.cpp"), ("shared", "core_a.cpp"), ("edge", None), ("torn", None),
    ("split", None), ("nothing", None)])
def test_a_string_inside_one_units_run_names_the_function(func, unit):
    reads = dict(READS, split = {55}, shared = {30})
    labels = dict(LABELS, c1x = "core_c.cpp")
    reads["c1x"] = {50}
    assert avu.string_verdicts(reads, labels, [func]).get(func) == unit


def test_a_string_two_units_both_read_names_neither():
    reads = {"x": {50}, "y": {50}, "q": {50}}
    assert avu.string_verdicts(reads, {"x": "core_a.cpp", "y": "core_b.cpp"}, ["q"]) == {}


def test_mapping_hints_keep_only_real_units():
    mapping = {"pairs": [{"b": "0040AA00", "name": "core_a.cpp_f_FUN_1"}, {"b": "2", "name": "entry"},
                         {"b": "3", "name": "unknown_aftera.cpp_FUN_3"}]}
    assert avu.mapping_hints(mapping) == {"0040aa00": "core_a.cpp"}
    assert avu.mapping_hints({}) == {}


@pytest.mark.parametrize("unit, prev, nxt, fit", [
    ("core_a.cpp", "core_a.cpp", "core_c.cpp", True), ("core_c.cpp", "core_a.cpp", "core_c.cpp", True),
    ("core_b.cpp", "core_a.cpp", "core_c.cpp", True), ("core_d.cpp", "core_a.cpp", "core_c.cpp", False),
    ("core_b.cpp", None, "core_c.cpp", False)])
def test_a_unit_fits_a_gap_it_could_have_been_linked_into(unit, prev, nxt, fit):
    assert avu.fits(unit, prev, nxt) is fit


def test_a_gaps_proposals_are_taken_only_together_and_in_link_order():
    ordered = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
    labels = {"1": "core_a.cpp", "4": "core_c.cpp", "7": "core_e.cpp"}
    proposals = {"2": "core_a.cpp", "3": "core_b.cpp", "5": "core_e.cpp", "6": "core_d.cpp", "8": "core_e.cpp"}
    assert avu.accept(ordered, labels, proposals) == {"2": "core_a.cpp", "3": "core_b.cpp", "8": "core_e.cpp"}
    assert avu.accept(ordered, labels, {"5": "core_z.cpp"}) == {}


def test_labels_grow_until_nothing_more_fits():
    ordered = ["1", "2", "3", "4", "5"]
    labels = {"1": "core_a.cpp", "5": "core_b.cpp"}
    reads = {"1": {10}, "2": {20}, "3": {15}, "5": {40}}
    hints = {"2": "core_a.cpp", "4": "crt_s.c"}
    grown, why = avu.grow_labels(ordered, labels, {"2", "3", "4"}, reads, hints)
    assert grown == {"1": "core_a.cpp", "2": "core_a.cpp", "3": "core_a.cpp", "5": "core_b.cpp"}
    assert why == {"2": "mapping", "3": "strings"}


def test_analysis_takes_mapping_hints_that_fit(program, tmp_path):
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps({"pairs": [{"b": f"{CODE + 0x70:08x}", "name": "core_c.cpp_g_FUN_1"}]}))
    rows = {int(a, 16) - CODE: (unit, why) for a, unit, why in avu.analyse(program, mapping_paths = [str(path)])["rows"]}
    assert rows[0x070] == ("core_c.cpp", "mapping")


def test_main_takes_a_mapping(monkeypatch, program, tmp_path, capsys):
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps({"pairs": []}))
    run_main(monkeypatch, program, "--mapping", str(path))
    assert "renames planned: 6" in capsys.readouterr().out


def test_hints_the_siblings_disagree_on_are_dropped():
    one = {"pairs": [{"b": "1", "name": "core_a.cpp_f_FUN_1"}, {"b": "2", "name": "core_b.cpp_g_FUN_2"}]}
    two = {"pairs": [{"b": "1", "name": "core_a.c_f_FUN_1"}, {"b": "2", "name": "core_c.cpp_g_FUN_2"},
                     {"b": "3", "name": "core_d.cpp_h_FUN_3"}]}
    assert avu.merged_hints([one, two]) == {"1": "core_a.cpp", "3": "core_d.cpp"}
    assert avu.merged_hints([]) == {}


GAP = ["1", "2", "3", "4", "5", "6", "7", "8"]


def split(starts, classes = None, files = None, labels = None, placeholders = None, actors = frozenset()):
    labels = labels or {"1": "core_a.cpp", "8": "core_z.cpp"}
    placeholders = placeholders if placeholders is not None else {a for a in GAP if a not in labels}
    return {a: (u, why) for a, u, why in avu.plan(GAP, labels, placeholders, starts, classes, files,
                                                    actors)[0]}


def test_an_unnamed_unit_start_splits_its_gap_and_takes_its_class():
    rows = split({"4"}, {"5": "CHag"})
    assert [rows[a] for a in GAP[1:7]] == [("unkafter_a.cpp", "between")] * 2 + [
        ("unkclass_hag.cpp", "unit start")] * 4
    assert split({"4"}, {"5": "CHag"}, actors = {"CHag"})["5"] == ("core_hag.cpp", "unit start")


@pytest.mark.parametrize("classes, files, unit", [
    ({"5": "CHag"}, {"CHag": "core_m.cpp"}, "core_m.cpp"),
    ({"5": "CHag"}, {"CHag": "core_zz.cpp"}, "unkclass_hag.cpp"),
    ({"5": "CHag", "6": "CDog"}, {}, "unkaddr_4.cpp"),
    (None, None, "unkaddr_4.cpp")])
def test_a_runs_class_file_is_used_only_where_it_fits(classes, files, unit):
    assert split({"4"}, classes, files)["5"] == (unit, "unit start")


def test_runs_whose_stems_collide_get_seven_letters_and_a_digit():
    names = avu.settle_names({"20": ("core", "confeder"), "10": ("core", "confeder"),
                              "30": ("core", "confeder"), "40": ("unkclass", "confeder"),
                              "50": "core_moon.cpp"})
    assert names == {"10": "core_confeder.cpp", "20": "core_confede1.cpp", "30": "core_confede2.cpp",
                     "40": "unkclass_confeder.cpp", "50": "core_moon.cpp"}


def test_a_name_another_unit_has_is_reused_only_beside_it():
    taken = {"core_doc.cpp", "core_dog.cpp"}
    bounds = {"10": ("core_doc.cpp", "core_z.cpp"), "20": ("core_a.cpp", "core_b.cpp")}
    names = avu.settle_names({"10": ("core", "doc"), "20": ("core", "dog")}, taken, bounds)
    assert names == {"10": "core_doc.cpp", "20": "core_dog1.cpp"}


def test_evidence_after_a_start_ends_its_run():
    rows = split({"4"}, labels = {"1": "core_a.cpp", "6": "core_m.cpp", "8": "core_z.cpp"})
    assert (rows["5"], rows["7"]) == (("unkaddr_4.cpp", "unit start"), ("unkafter_m.cpp", "between"))


def test_a_start_that_is_not_a_placeholder_still_begins_a_run():
    rows = split({"4"}, placeholders = {"2", "5", "6"})
    assert "4" not in rows and rows["5"] == ("unkaddr_4.cpp", "unit start")


# Class records for CDemonActor and four classes: CHag reaches its constructor
# through one without a record, CDog's first call goes elsewhere, CLoop's chain
# never ends, CBare calls nothing
def actor_records():
    def record(cls, ctor):
        return {"class": cls, "ctor": f"{ctor:08x}"}
    return [record("CDemonActor", CODE + 0x500), record("CHag", CODE + 0x300), record("CDog", CODE + 0x330),
            record("CLoop", CODE + 0x340), record("CBare", CODE + 0x360), {"class": "CNone", "ctor": "00000000"}]


def test_a_class_whose_constructor_builds_a_demon_actor_first_is_an_actor(monkeypatch, tmp_path):
    calls = [(0x300, 0x400), (0x300, 0x600), (0x400, 0x500), (0x330, 0x600), (0x340, 0x350), (0x350, 0x340)]
    functions_ = [function(CODE + o, f"FUN_{CODE + o:08x}") for o in (0x300, 0x330, 0x340, 0x350, 0x360,
                                                                       0x400, 0x500, 0x600)]
    annotations = install_programs(monkeypatch, tmp_path, {"a.exe": (table_and_classes_pe(), functions_)})
    write_bucket(annotations, "a.exe", "cross_references", [
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE + src + 1 + n:08x}", "to": f"{CODE + dst:08x}"}
        for n, (src, dst) in enumerate(calls)])
    image = sibling_match.Image("a.exe")
    assert avu.actor_classes(image, actor_records()) == {"CHag"}
    assert avu.actor_classes(image, actor_records()[1:]) == set()
    assert avu.actor_classes(image) == set()


# A program with an init table of nine game entries and two class records
# sharing a copy constructor
def table_and_classes_pe():
    entries = b"".join(struct.pack("<BBI", 0, 64, CODE + 0x10 * i) for i in range(9))
    entries += struct.pack("<BBI", 0, 32, CODE + 0x200) + struct.pack("<BBI", 0, 0, 0)
    names_at = DATA + 0x80
    records = (struct.pack("<6I", 0x20100, CODE + 0x300, CODE + 0x310, CODE + 0x320, 8, names_at)
               + struct.pack("<6I", 0x20100, 0, CODE + 0x310, CODE + 0x330, 12, names_at + 8))
    data = (entries.ljust(0x48, b"\xff") + records).ljust(0x80, b"\xff") + b"$CHag$$\0$CDog$$\0"
    return build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE), ("DGROUP", data, 0)], BASE)


def test_the_init_table_and_class_records_are_read(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"t.exe": (table_and_classes_pe(), [])})
    image = sibling_match.Image("t.exe")
    assert avu.table_starts(image) == {f"{CODE + 0x10 * i:08x}" for i in range(9)}
    assert avu.class_slots(image) == {f"{CODE + 0x300:08x}": "CHag", f"{CODE + 0x320:08x}": "CHag",
                                      f"{CODE + 0x330:08x}": "CDog"}


def test_a_program_without_a_table_has_no_starts(program):
    assert avu.table_starts(sibling_match.Image(program)) == set()


def test_class_files_come_from_the_type_info_export(program, tmp_path):
    assert avu.class_files(program) == {}
    folder = tmp_path / "annotations" / program / "type_info"
    folder.mkdir()
    (folder / "type_info.json").write_text(json.dumps({"type_info": [
        {"name": "CMoon", "file": "..\\core\\moon.cpp"}, {"name": "CHag"}, {"name": "CX", "file": "x.cpp"}]}))
    assert avu.class_files(program) == {"CMoon": "core_moon.cpp"}


@pytest.mark.parametrize("prev, nxt, nxt_addr, known, tail", [
    ("core_armour.cpp", "core_backgnd.cpp", "9", {"armour", "backgnd"}, True),
    ("core_armour.cpp", "core_backgnd.cpp", "8", set(), False),
    ("core_armour.cpp", "core_backgnd.cpp", "9", {"ammo", "baron", "bat"}, True),
    ("core_armour.cpp", "core_backgnd.cpp", "9", {"arrow"}, False),
    ("crt_s.c", "core_backgnd.cpp", "9", set(), False),
    ("core_armour.cpp", "crt_s.c", "9", set(), False),
    (None, "core_backgnd.cpp", "9", set(), False),
    ("core_zombie.cpp", "core_goggles.cpp", "9", set(), False),
])
def test_a_gap_is_the_previous_units_tail_only_when_nothing_else_fits(prev, nxt, nxt_addr, known, tail):
    assert avu.is_tail(prev, nxt, nxt_addr, {"9"}, known) is tail


def test_a_tail_gap_takes_the_unit_before_it():
    ordered = ["1", "2", "3", "4"]
    labels = {"1": "core_armour.cpp", "4": "core_backgnd.cpp"}
    rows = avu.plan(ordered, labels, {"2", "3"}, unit_starts = {"4"}, known = {"armour", "backgnd"})[0]
    assert rows == [("2", "core_armour.cpp", "tail"), ("3", "core_armour.cpp", "tail")]
    rows = avu.plan(ordered, labels, {"2", "3"}, unit_starts = {"4"}, known = {"armour", "attack", "backgnd"})[0]
    assert [why for _, _, why in rows] == ["between", "between"]
