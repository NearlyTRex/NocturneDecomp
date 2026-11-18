# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import struct_report as sr


@pytest.mark.parametrize("name, kind", [
    ("unk1", "unknown"), ("unknown_E2", "unknown"), ("pad", "padding"), ("padding_0x44", "padding"),
    ("Padding", "padding"), ("pad2", "padding"), ("padding_size", None), ("padded_width", None),
    ("Reserved", "reserved"), ("reserved2", "reserved"), ("field_0x4", "default"), ("field_20", "default"),
    ("field3_0xc", "default"), ("field_name", None), ("health", None),
])
def test_each_field_name_is_classified(name, kind):
    assert sr.classify_field(name) == kind


def test_each_structs_completeness_counts_its_clean_fields():
    rows = sr.analyze_struct_fields([
        {"name": "CEmpty", "cat": "/Game"},
        {"name": "CBat", "fields": [{"name": "hp"}, {"name": "unk1"}, {"name": "pad"},
                                    {"name": "reserved"}, {"name": "field_0x10"}]},
    ])
    assert rows[0]["completeness"] == 100.0 and rows[0]["category"] == "/Game"
    bat = rows[1]
    assert (bat["clean_fields"], bat["completeness"]) == (1, 20.0)
    assert bat["problematic_fields"] == ["unk1", "pad", "reserved", "field_0x10"]
    assert [bat[k] for k in ("unknown_count", "padding_count", "reserved_count", "default_count")] == [1, 1, 1, 1]


def test_a_struct_is_referenced_by_code_headers_or_another_structs_fields(tmp_path):
    src = tmp_path / "src"
    (src / "checks").mkdir(parents = True)
    (src / "a.cpp").write_text("CBat *bat;\n")
    (src / "checks" / "layout.cpp").write_text("CUnused CMoon\n")       # generated: not a reference
    (src / "notes.txt").write_text("CMoon\n")
    globals_dir = tmp_path / "globals"
    globals_dir.mkdir()
    (globals_dir / "g.h").write_text("extern CFire g_Fire;\n")
    names = {"CBat", "CFire", "CMoon", "CUnused", "CBatty"}
    assert sr.find_referenced_structs(str(src), names, [str(globals_dir), str(tmp_path / "none")]) == {
        "CBat", "CFire"}
    assert sr.find_referenced_structs(str(src), set()) == set()
    assert sr.find_referenced_structs(str(src), names) == {"CBat"}
    structs = [{"name": "CMoon", "fields": [{"type": "CMoon *"}, {"type": "CBat[4]"}]}, {"name": "CBat"}]
    assert sr.find_struct_cross_references(structs, names) == {"CBat"}


def test_the_report_lists_unreferenced_problem_and_clean_structs(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(sr, "log_info", logged.append)
    data = tmp_path / "data_types.json"
    data.write_text(json.dumps({"structs": [
        {"name": "CBat", "cat": "/Nocturne/Game", "fields": [{"name": "hp"}, {"name": "unk1"}]},
        {"name": "CMoon", "cat": "/Nocturne/Game", "fields": [{"name": "pad"}, {"name": "reserved"},
                                                              {"name": "field_0x8"}, {"name": "glow"}]},
        {"name": "CFire", "cat": "/Nocturne/Game", "fields": [{"name": "flame"}]},
        {"name": "POINT", "cat": "/Nocturne/Struct/System", "fields": [{"name": "x"}]},
    ]}))
    pseudocode = tmp_path / "annotations" / "pseudocode"
    src = pseudocode / "src"
    src.mkdir(parents = True)
    (src / "a.cpp").write_text("CBat *b;\n")
    (pseudocode / "include" / "globals").mkdir(parents = True)
    (pseudocode / "include" / "globals" / "g.h").write_text("CFire g_Fire;\n")
    reports = tmp_path / "reports"
    reports.mkdir()
    sr.generate_struct_report(str(data), str(src), str(reports))
    text = (reports / "struct_quality.txt").read_text()
    assert "Total structs:              3" in text and "Unreferenced structs:       1" in text
    assert "Overall field quality:      42.9%" in text
    assert "  CMoon" in text.split("UNREFERENCED STRUCTS (1)")[1].split("STRUCTS WITH")[0]
    problems = text.split("STRUCTS WITH PROBLEMATIC FIELDS (2)")[1]
    assert problems.index("CMoon") < problems.index("CBat")      # worst first
    assert "25.0% complete  (1/4 fields clean) [unreferenced]" in problems
    assert "  Issues: 1 padding, 1 reserved, 1 default" in problems
    assert "FULLY CLEAN STRUCTS (1)\n" + "-" * 70 + "\n  CFire" in text
    assert logged[1] == "Found 3 game structs (skipped 1 non-game)"


def test_a_report_with_no_fields_is_fully_clean(tmp_path, monkeypatch):
    monkeypatch.setattr(sr, "log_info", lambda _msg: None)
    data = tmp_path / "data_types.json"
    data.write_text(json.dumps({}))
    sr.generate_struct_report(str(data), str(tmp_path / "src"), str(tmp_path))
    assert "Overall field quality:      100.0%" in (tmp_path / "struct_quality.txt").read_text()
