# Imports
import json

# Third-party imports
import pytest

# Local imports
import itinerary_bw as ib


def twin(addr, cls = "identical", by = "name"):
    out = {"addr": addr, "by": by}
    if cls:
        out["class"] = cls
    return out


# nocedit 0x100 differs in all three builds, bw1 and bw3 sharing one body; 0x200 is the same everywhere;
# 0x300 differs only in bw2, whose twin has no body; 0x400 has no twin at all
SIBLINGS = {
    "nocedit.exe": {
        "00000100": {"bw1.exe": twin("00001100", "logic-change"), "blairwitch2.exe": twin("00002100", "const-change"),
                     "bw3.exe": twin("00003100", "logic-change")},
        "00000200": {"bw1.exe": twin("00001200"), "bw3.exe": twin("00003200", "layout-drift")},
        "00000300": {"blairwitch2.exe": twin("00002300", None), "nocturne.exe": twin("00009300")},
    },
    "bw1.exe": {
        "00001100": {"bw3.exe": twin("00003100"), "blairwitch2.exe": twin("00002100", "logic-change"),
                     "nocedit.exe": twin("00000100", "logic-change")},
        "00001500": {"bw3.exe": twin("00003500", "logic-change", "body"), "nocturne.exe": twin("00009500")},
        "00001600": {},
        "00001700": {"blairwitch2.exe": twin("0000dead")},
    },
    "blairwitch2.exe": {"00002800": {}},
    "bw3.exe": {
        "00003100": {"bw1.exe": twin("00001100"), "nocedit.exe": twin("00000100", "logic-change")},
        "00003500": {"bw1.exe": twin("00001500", "logic-change", "body")},
        # no nocedit twin, but its bw1 twin has one: a variant nothing has named, not BW code
        "00003900": {"bw1.exe": twin("00001900", "identical", "body")},
    },
}
SIBLINGS["bw1.exe"]["00001900"] = {"bw3.exe": twin("00003900", "identical", "body"),
                                   "nocedit.exe": twin("00000900", "logic-change", "body")}


def record(addr, tu, method, cls = None, instructions = 10):
    out = {"addr": addr, "tu": tu, "method": method, "instructions": instructions}
    if cls:
        out["cls"] = cls
    return out


FUNCTIONS = {
    "bw1": {"00001100": record("00001100", "core/a.cpp", "f", "CA"),
            "00001500": record("00001500", "core/doc.cpp", "think", "CDoc", 40),
            "00001600": record("00001600", "core/doc.cpp", "FUN_00001600", instructions = 7),
            "00001700": record("00001700", "core/zed.cpp", "helper", instructions = 3),
            "00001800": record("00001800", "crt/string.c", "strstr")},
    "bw2": {"00002800": record("00002800", "core/doc.cpp", "", instructions = 2)},
    "bw3": {"00003100": record("00003100", "core/a.cpp", "f", "CA"),
            "00003500": record("00003500", "core/prye.cpp", "think", "CPrye", 42),
            "00003900": record("00003900", "core/b.cpp", "FUN_00003900")},
}
FUNCTIONS["bw1"]["00001900"] = record("00001900", "core/b.cpp", "FUN_00001900")


@pytest.fixture(name = "bw")
def fixture_bw():
    return ib.BlairWitch(SIBLINGS, FUNCTIONS, {("bw3", "00003500"), ("bw2", "00002300")})


def test_builds_sharing_a_body_make_one_variant(bw):
    assert bw.variants("00000100") == [(["bw1", "bw3"], {"bw1": "00001100", "bw3": "00003100"}, "logic-change"),
                                       (["bw2"], {"bw2": "00002100"}, "const-change")]
    assert bw.variants("00000200") == [] and bw.variants("00000400") == []
    assert bw.variants("00000300") == [(["bw2"], {"bw2": "00002300"}, "no body")]


def test_a_variant_line_ticks_what_the_recreation_has_ported(bw):
    assert bw.variant_lines("00000100") == [
        "    - BW: [ ] bw1 0x00001100 = bw3 0x00003100 (logic-change); [ ] bw2 0x00002100 (const-change)"]
    assert bw.variant_lines("00000300") == ["    - BW: [x] bw2 0x00002300 (no body)"]
    assert bw.variant_lines("00000200") == []
    assert bw.variant_counts(["00000100", "00000200", "00000300"]) == (2, 1)


def test_blair_witch_only_code_is_listed_once_across_builds(bw):
    groups = {tuple(g[1]): g for g in bw.only()}
    assert sorted(groups) == [(("bw1", "00001500"), ("bw3", "00003500")), (("bw1", "00001600"),),
                              (("bw1", "00001700"),), (("bw2", "00002800"),)]
    tu, _members, f, differs, in_nocturne = groups[(("bw1", "00001500"), ("bw3", "00003500"))]
    assert (tu, f["method"], differs, in_nocturne) == ("core/doc.cpp", "think", True, True)
    assert groups[(("bw1", "00001600"),)][3:] == (False, False)


def test_the_blair_witch_only_section_has_a_table_and_a_list_per_unit(bw):
    lines = bw.only_lines()
    assert lines[1] == "## Blair Witch only"
    table = lines[lines.index("| Unit | Functions | Named | Instructions | Done |") + 2:]
    assert table[:4] == ["| `core/doc.cpp` | 3 | 1 | 49 | 1 |", "| `core/zed.cpp` | 1 | 1 | 3 | 0 |",
                         "| **All** | **4** | **2** | **52** | **1** |", ""]
    doc = lines.index("### `core/doc.cpp`")
    assert lines[doc + 1:doc + 4] == [
        "- [x] `CDoc::think` bw1 0x00001500, bw3 0x00003500 (40, differs, in nocturne)",
        "- [ ] unnamed bw1 0x00001600 (7)",
        "- [ ] unnamed bw2 0x00002800 (2)"]
    assert lines[-1] == "- [ ] `helper` bw1 0x00001700 (3)"


def test_siblings_are_read_from_each_function_json(tmp_path):
    unit = tmp_path / "bw1.exe" / "pseudocode" / "src" / "core" / "a.cpp"
    unit.mkdir(parents = True)
    (unit / "CA_f_FUN_00001100.json").write_text(json.dumps({"siblings": {"bw3.exe": twin("00003100")}}))
    (unit / "FUN_00001200.json").write_text(json.dumps({"function": {}}))
    assert ib.read_siblings("bw1.exe", str(tmp_path)) == {"00001100": {"bw3.exe": twin("00003100")}}


def test_ported_lines_are_found_in_sources_and_headers(tmp_path):
    (tmp_path / "core").mkdir()
    (tmp_path / "core" / "a.cpp").write_text("// nocedit 0x00000100\n// bw1 0x00001100\n  // bw3 0x00003100\nint f();\n")
    (tmp_path / "a.h").write_text("// bw2 0x00002100\n// bw4 0x00004100\n")
    (tmp_path / "notes.md").write_text("// bw1 0x00009999\n")
    assert ib.ported(str(tmp_path)) == {("bw1", "00001100"), ("bw3", "00003100"), ("bw2", "00002100")}


def test_load_reads_every_program_and_the_recreation(tmp_path, monkeypatch):
    monkeypatch.setattr(ib, "read_siblings", lambda program: {"program": program})
    monkeypatch.setattr(ib.scaffold, "load_buckets", lambda program, part: [{"addr": program, "part": part}])
    (tmp_path / "a.cpp").write_text("// bw1 0x00001100\n")
    bw = ib.BlairWitch.load(str(tmp_path))
    assert sorted(bw.siblings) == ["blairwitch2.exe", "bw1.exe", "bw3.exe", "nocedit.exe"]
    assert bw.functions["bw2"] == {"blairwitch2.exe": {"addr": "blairwitch2.exe", "part": "functions"}}
    assert bw.done == {("bw1", "00001100")}


def test_a_function_is_labelled_by_class_and_method_or_as_unnamed():
    assert ib.label(record("1", "t", "f", "CA")) == "`CA::f`"
    assert ib.label(record("1", "t", "helper")) == "`helper`"
    assert ib.label(record("1", "t", "FUN_00000001")) == "unnamed"
