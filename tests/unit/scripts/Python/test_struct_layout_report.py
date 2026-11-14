# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import sibling_match
import struct_layout_report as slr


def field(name, kind, offset, size):
    return {"name": name, "type": kind, "offset": offset, "len": size}


def struct(name, size, fields = (), cat = "/Nocturne/Class/Game"):
    return {"name": name, "len": size, "cat": cat, "fields": list(fields)}


# The reference lays CActor out; the target grew it by 8 bytes ahead of `hp`
# and has not placed `name`; CGone is only in the reference; CPlaceholder is a stub.
REF = [struct("CActor", 16, [field("base", "CBase", 0, 4), field("hp", "float", 4, 4), field("name", "char*", 8, 4)]),
       struct("CGone", 8, [field("x", "int", 0, 4)]),
       struct("CSame", 8, [field("x", "int", 0, 4)]),
       struct("SPoint", 8, [field("x", "int", 0, 4)], "/Nocturne/Struct/Game"),
       struct("CActor_vtable", 8), struct("SSys", 4, cat = "/Nocturne/Struct/System")]
DST = [struct("CActor", 24, [field("base", "CBase", 0, 4), field("hp", "float", 12, 4)]),
       struct("CSame", 8, [field("x", "int", 0, 4)]),
       struct("CPlaceholder", 40), struct("SPoint", 8, [field("x", "int", 0, 4)], "/Nocturne/Struct/Game")]


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    for program, types, rtti in (("ref.exe", REF, {"CActor": 16}), ("dst.exe", DST, {"CActor": 24, "CPlaceholder": 40})):
        folder = tmp_path / program
        (folder / "data_types").mkdir(parents = True)
        write_json(folder / "data_types" / "data_types.json", {"structs": types + [{"len": 4}]})
        (folder / "type_info").mkdir()
        write_json(folder / "type_info" / "type_info.json",
                   {"type_info": [{"name": n, "typeinfo_size": s} for n, s in rtti.items()]})
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(tmp_path))
    return tmp_path


def test_undefined_bytes_are_the_gaps_and_the_tail():
    assert slr.gaps(DST[0]) == [(4, 8), (16, 8)]
    assert slr.gaps(struct("CEmpty", 40)) == []
    assert slr.gaps(struct("CFull", 4, [field("x", "int", 0, 4)])) == []


def test_an_empty_stub_has_no_size_unless_rtti_says_one_byte():
    assert slr.size_of(struct("CEmpty", 1), None) is None
    assert slr.size_of(struct("CEmpty", 1), 1) == 1
    assert slr.size_of(struct("CByte", 1, [field("x", "char", 0, 1)]), None) == 1
    assert slr.size_cell({"size": None, "state": "stub", "rtti": None}) == "unsized (placeholder)"


def test_each_struct_is_followed_through_every_build(annotations):
    built = slr.build(["ref.exe", "dst.exe"])
    assert sorted(built) == ["CActor", "CGone", "CPlaceholder", "CSame", "SPoint"]
    actor = built["CActor"]
    assert actor["builds"]["dst.exe"] == {"size": 24, "state": "laid", "rtti": 24, "gaps": [(4, 8), (16, 8)]}
    assert actor["fields"][1] == {"name": "hp", "type": "float", "offsets": {"ref.exe": 4, "dst.exe": 12}}
    assert built["CPlaceholder"]["builds"]["dst.exe"]["state"] == "stub"
    assert "dst.exe" not in built["CGone"]["builds"]


def test_the_reports_show_sizes_changes_and_fields(annotations):
    programs = ["ref.exe", "dst.exe"]
    built = slr.build(programs)
    index = slr.render_index(programs, built)
    assert "| [CActor](structs/CActor.md) | 16 ✓ | 24 ✓ |" in index
    assert "| [CPlaceholder](structs/CPlaceholder.md) | — | 40 (placeholder) |" in index
    assert "## /Nocturne/Struct/Game" in index
    changes = slr.render_changes(programs, built)
    assert "1 struct(s) changed size." in changes
    assert "| [CActor](structs/CActor.md) | +8 | 1 | 1 of 3 |" in changes
    page = slr.render_struct("CActor", programs, built["CActor"])
    assert "| `hp` | `float` | 0x4 | 0xc |" in page and "| `name` | `char*` | 0x8 |  |" in page
    assert "- **dst**: 0x4+0x8, 0x10+0x8" in page
    stub = slr.render_struct("CPlaceholder", programs, built["CPlaceholder"])
    assert "| dst | 40 | placeholder | 40 |" in stub and "## Fields" not in stub
    assert "| ref | 8 | fields | — |" in slr.render_struct("CGone", programs, built["CGone"])


def test_a_build_with_no_change_says_so(annotations):
    built = slr.build(["dst.exe", "dst.exe"])
    assert "0 struct(s) changed size." in slr.render_changes(["dst.exe", "dst.exe"], built)


def test_main_writes_the_folder_and_drops_stale_pages(annotations, capsys):
    out = annotations / "out"
    (out / "structs").mkdir(parents = True)
    (out / "structs" / "COld.md").write_text("gone\n")
    (out / "structs" / "notes.txt").write_text("kept\n")
    assert slr.main(["--program", "ref.exe", "--program", "dst.exe", "--out-dir", str(out)]) == 0
    assert "wrote 5 struct pages and 3 files" in capsys.readouterr().out
    assert sorted(os.listdir(out / "structs")) == ["CActor.md", "CGone.md", "CPlaceholder.md", "CSame.md",
                                                    "SPoint.md", "notes.txt"]
    assert json.loads((out / "structs.json").read_text())["programs"] == ["ref.exe", "dst.exe"]


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["struct_layout_report.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "struct_layout_report.py"), run_name = "__main__")
    assert exit_info.value.code == 0
