# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_tu_alignment as cta


def fn(name, addr, **extra):
    return {"name": f"{name}_FUN_{addr:08x}", "addr": f"{addr:08x}", **extra}


def skip_file(tmp_path, text):
    path = tmp_path / "skip.txt"
    path.write_text(text)
    return str(path)


# --- the skip file ----------------------------------------------------------------------------

def test_a_missing_skip_file_exempts_nothing(tmp_path):
    ex = cta.load_skip(str(tmp_path / "none.txt"))
    assert ex == {"contiguity": set(), "order": set(), "dos83": set(), "folder": set(), "all": set(),
                  "appended": {}}


def test_skip_lines_exempt_everywhere_one_check_or_an_appended_tail(tmp_path):
    ex = cta.load_skip(skip_file(tmp_path, "# comment\n\ncore_a.cpp  # why\norder:core_b.cpp\n"
                                           "appended:bw3.exe:core_zombie.cpp\n"))
    assert (ex["all"], ex["order"], ex["appended"]) == ({"core_a.cpp"}, {"core_b.cpp"},
                                                        {"bw3.exe": "core_zombie.cpp"})


def test_an_unknown_check_stops_the_run(tmp_path):
    with pytest.raises(SystemExit, match = "skip.txt:1: unknown check 'size'"):
        cta.load_skip(skip_file(tmp_path, "size:core_a.cpp\n"))


# --- names --------------------------------------------------------------------------------------

def test_names_split_into_folder_basename_and_stem():
    assert cta.is_crt("crt_stdio.c") and not cta.is_crt("core_crt.cpp")
    assert cta.basename("engine_3d.c") == "3d.c"
    assert cta.stem("engine/dosio.c") == cta.stem("engine_dosio.cpp") == "dosio"


def test_a_tus_asserted_path_comes_from_its_own_disassembly(tmp_path, monkeypatch):
    monkeypatch.setattr(cta.sm, "ANNOTATIONS", str(tmp_path))
    unit = tmp_path / "game.exe" / "pseudocode" / "src" / "core" / "actor.cpp"
    unit.mkdir(parents = True)
    assert cta.path_literal("game.exe", "core_actor.cpp") is None
    (unit / "a.cpp").write_text(r'"..\core\actor.cpp"')
    (unit / "b.asm").mkdir()
    (unit / "c.asm").write_text("no path here")
    assert cta.path_literal("game.exe", "core_actor.cpp") is None
    (unit / "d.asm").write_text(r'push "..\\CORE\\Actor.CPP"')
    assert cta.path_literal("game.exe", "core_actor.cpp") == "core/actor.cpp"
    assert cta.path_literal("game.exe", "core_absent.cpp") is None


# --- runs and spans -----------------------------------------------------------------------------

FUNCTIONS = [
    fn("core_a.cpp_f", 0x10), fn("core_a.cpp_g", 0x20), fn("core_b.cpp_f", 0x30),
    fn("core_a.cpp_h", 0x40), {"name": "no address"}, {"addr": "00000050", "name": "plain"},
    fn("core_c.cpp_f", 0x60, thunk = True), fn("crt_stdio.c_f", 0x70),
]


def test_runs_follow_address_order_and_skip_thunks_and_unnamed():
    runs = cta.tu_runs(cta.Functions(list(reversed(FUNCTIONS))))
    assert [(tu, lo, hi, len(names)) for tu, lo, hi, names in runs] == [
        ("core_a.cpp", 0x10, 0x20, 2), ("core_b.cpp", 0x30, 0x30, 1), ("core_a.cpp", 0x40, 0x40, 1),
        ("crt_stdio.c", 0x70, 0x70, 1)]


def test_a_tus_territory_is_its_largest_run():
    runs = cta.tu_runs(cta.Functions(FUNCTIONS))
    assert cta.largest_run(runs) == {"core_a.cpp": 2, "core_b.cpp": 1, "crt_stdio.c": 1}
    assert cta.main_spans(runs, lambda tu: not cta.is_crt(tu)) == {
        "core_a.cpp": (0x10, 0x20), "core_b.cpp": (0x30, 0x30)}


# --- contiguity ---------------------------------------------------------------------------------

def runs_of(*layout):
    out, addr = [], 0x1000
    for tu, count in layout:
        names = [f"{tu}_f{i}" for i in range(count)]
        out.append([tu, addr, addr + 0x10 * (count - 1), names])
        addr += 0x10 * count
    return out


def test_a_run_splitting_another_tus_body_is_an_intruder_and_a_stray_one_a_trailer():
    runs = runs_of(("core_a.cpp", 3), ("core_x.cpp", 1), ("core_a.cpp", 3), ("core_b.cpp", 3),
                   ("core_y.cpp", 2), ("core_y.cpp", 1), ("core_c.cpp", 2), ("core_b.cpp", 1))
    runs[5][0] = "core_y.cpp"
    spans = cta.main_spans(runs, lambda tu: True)
    found = cta.check_contiguity(runs, spans, lambda tu: tu != "core_c.cpp")
    assert [(f["tu"], f["kind"], f["host"]) for f in found] == [
        ("core_x.cpp", "INTRUDER", "core_a.cpp"), ("core_a.cpp", "TRAILER", None),
        ("core_y.cpp", "TRAILER", None), ("core_b.cpp", "TRAILER", None)]


def test_a_body_between_two_runs_of_its_neighbour_is_not_the_intruder():
    runs = runs_of(("cockpit_pkbitmap.cpp", 5), ("cockpit_pkbmpset.cpp", 4), ("cockpit_pkbitmap.cpp", 2))
    spans = cta.main_spans(runs, lambda tu: True)
    found = cta.check_contiguity(runs, spans, lambda tu: True)
    assert [(f["tu"], f["kind"]) for f in found] == [("cockpit_pkbitmap.cpp", "TRAILER")]


# --- 8.3, folders, order ------------------------------------------------------------------------

def test_names_dos_could_not_hold_are_listed_with_why():
    found = cta.check_dos83(["core_ok.cpp", "core_toolongname.cpp", "core_a.cppx", "core_a+b.cpp",
                             "longfolder_a.cpp", "core_skipped9.cpp"], {"core_skipped9.cpp"})
    assert [(f["tu"], f["why"]) for f in found] == [
        ("core_a+b.cpp", ["stem has characters 8.3 forbids"]),
        ("core_a.cppx", ["extension is 4 chars, 8.3 allows 3"]),
        ("core_toolongname.cpp", ["stem is 11 chars, 8.3 allows 8"]),
        ("longfolder_a.cpp", ["directory is 10 chars, 8.3 allows 8"])]


def test_a_placeholder_folder_is_not_a_directory():
    assert cta.check_folders({"core_a.cpp", "unkafter_a.cpp", "unkaddr_00401000.cpp", "unkclass_b.cpp"},
                             {"unkclass_b.cpp"}) == [
        {"tu": "unkaddr_00401000.cpp", "folder": "unkaddr"}, {"tu": "unkafter_a.cpp", "folder": "unkafter"}]


ORDER_SPANS = {"core_alpha.cpp": (0x10, 0x20), "core_zed.cpp": (0x30, 0x40), "core_beta.cpp": (0x50, 0x60),
               "core_gamma.cpp": (0x70, 0x80)}


def test_order_names_the_displaced_tu_and_its_window(monkeypatch):
    monkeypatch.setattr(cta, "path_literal", lambda program, tu: None)
    found = cta.check_order(ORDER_SPANS, "bw1.exe", {"core_zed.cpp": 5})
    assert [(f["tu"], f["prev"], f["next"], f["proven"], f["no_body"]) for f in found] == [
        ("core_zed.cpp", "core_alpha.cpp", "core_beta.cpp", False, False)]
    assert cta.unproven(found) == found
    assert cta.check_order(ORDER_SPANS, "bw1.exe", {}, {"core_zed.cpp"}) == []


def test_an_asserted_name_from_either_nocturne_build_is_proven(monkeypatch):
    monkeypatch.setattr(cta, "path_literal",
                        lambda program, tu: "core/zed.cpp" if program == "nocturne.exe" else None)
    found = cta.check_order(ORDER_SPANS, "nocedit.exe", {"core_zed.cpp": 1})
    assert [(f["literal_from"], f["proven"], f["no_body"]) for f in found] == [("nocturne.exe", True, True)]
    assert cta.unproven(found) == []


def test_an_appended_tail_is_left_out_of_the_order():
    assert cta.sorted_part(ORDER_SPANS, None) is ORDER_SPANS
    assert cta.sorted_part(ORDER_SPANS, "core_absent.cpp") is ORDER_SPANS
    assert list(cta.sorted_part(ORDER_SPANS, "core_zed.cpp")) == ["core_alpha.cpp", "core_zed.cpp"]


# --- the export's gate --------------------------------------------------------------------------

def test_the_gate_lists_each_rule_a_name_breaks(tmp_path, monkeypatch):
    monkeypatch.setattr(cta, "path_literal", lambda program, tu: None)
    functions = [fn(f"{tu}_f{i}", base + i) for tu, base in (
        ("core_alpha.cpp", 0x10), ("core_zed.cpp", 0x20), ("core_beta.cpp", 0x30),
        ("unkafter_beta.cpp", 0x40), ("core_toolongname.cpp", 0x50)) for i in range(3)]
    skip = skip_file(tmp_path, "")
    assert cta.gate("bw1.exe", functions, skip) == [
        "unkafter_beta.cpp: folder unkafter is a placeholder, not a source directory",
        "core_toolongname.cpp: stem is 11 chars, 8.3 allows 8"]
    skip = skip_file(tmp_path, "folder:unkafter_beta.cpp\ndos83:core_toolongname.cpp\n")
    assert cta.gate("bw1.exe", functions, skip) == []


# --- the report and the command line ------------------------------------------------------------

def test_the_report_prints_every_kind_of_finding_and_counts_the_failures(capsys):
    contiguity = [
        {"tu": "core_x.cpp", "lo": 1, "hi": 2, "names": ["a", "b", "c"], "kind": "INTRUDER",
         "host": "core_a.cpp", "prev": "core_a.cpp", "next": "core_a.cpp"},
        {"tu": "core_y.cpp", "lo": 3, "hi": 3, "names": ["d"], "kind": "TRAILER", "host": None,
         "prev": None, "next": None}]
    base = {"addr": 0x10, "actual": 2, "expected": 1, "prev": "core_a.cpp", "next": "core_b.cpp",
            "literal": None, "literal_from": "bw1.exe", "proven": False, "no_body": False, "body_size": 4}
    order = [dict(base, tu = "core_u.cpp"),
             dict(base, tu = "core_n.cpp", no_body = True, body_size = 1),
             dict(base, tu = "core_p.cpp", proven = True, literal = "core/p.cpp"),
             dict(base, tu = "core_q.cpp", proven = True, literal = "core/q.cpp", literal_from = "nocedit.exe"),
             dict(base, tu = "core_c.cpp", literal = "core/other.cpp")]
    failures = cta.report("bw1.exe", [], {}, contiguity, order, [{"tu": "core_long9.cpp", "why": ["w"]}], 2,
                          [{"tu": "unkafter_a.cpp", "folder": "unkafter"}])
    out = capsys.readouterr().out
    assert failures == 1 + 1 + 1
    for text in ("splits core_a.cpp", "between <start> and <end>", "... 1 more", "UNPROVEN", "NO BODY",
                 "PROVEN  __FILE__ says core/p.cpp --", "(via nocedit.exe)", "CONFLICT  __FILE__ says core/other",
                 "real basename sorts in (a.cpp .. b.cpp)", "core_long9.cpp", "folder unkafter is not"):
        assert text in out


class FakeImage:
    def __init__(self, program):
        self.functions = {"bad.exe": [fn("unkafter_a.cpp_f", 0x10)]}.get(program, [fn("core_a.cpp_f", 0x10)])


@pytest.mark.parametrize("program, code, verdict", [("good.exe", 0, "OK:"), ("bad.exe", 1, "FAIL: 1 finding")])
def test_main_exits_non_zero_on_any_failure(monkeypatch, tmp_path, capsys, program, code, verdict):
    monkeypatch.setattr(cta.sm, "Image", FakeImage)
    monkeypatch.setattr(sys, "argv", ["check_tu_alignment.py", program, "--skip-file",
                                      skip_file(tmp_path, "core_z.cpp\n")])
    assert cta.main() == code
    out = capsys.readouterr().out
    assert "skip.txt: 1 all" in out and verdict in out


def test_runs_as_a_script(monkeypatch, tmp_path):
    monkeypatch.setattr(sys, "argv", ["check_tu_alignment.py", "nothing.exe", "--skip-file",
                                      str(tmp_path / "none.txt")])
    monkeypatch.setattr("sibling_match.Image", FakeImage)
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_tu_alignment.py"), run_name = "__main__")
    assert exit_info.value.code == 0
