# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from struct_types import install_struct_types, write
import compare_sibling_struct_sizes as css


@pytest.fixture(name = "types")
def fixture_types(monkeypatch, tmp_path):
    return install_struct_types(monkeypatch, tmp_path)


def test_each_build_records_its_own_sizes_and_the_source_its_layouts(types):
    assert css.load_type_info_sizes("to.exe")["COnlyTo"] == 8
    layouts, typedefs = css.load_layouts("from.exe")
    assert layouts["CBase"]["len"] == 16 and "UOnly" in layouts
    assert typedefs["TBase"] == "TBase2" and typedefs["TBase2"] == "CBase"


@pytest.mark.parametrize("rtti, size, layout", [
    ("CBase", None, "CBase"), ("SfxSample", 40, "CSfxSample"), ("SfxSample", 41, None),
    ("Sample", 40, "CSfxSample"), ("Missing", None, None), ("Missing", 8, None)])
def test_a_renamed_class_is_found_only_at_the_size_its_build_recorded(types, rtti, size, layout):
    layouts, _ = css.load_layouts("from.exe")
    assert css.resolve_layout_alias(rtti, layouts, size) == layout


def model(types, truth):
    layouts, typedefs = css.load_layouts("from.exe")
    return css.DeltaModel(truth, layouts, typedefs)


@pytest.mark.parametrize("field_type, resolved", [
    ("CBase *", (None, 0)), ("CBase[2][3]", ("CBase", 6)), ("TBase", ("CBase", 1)), ("int", (None, 0)),
    ("TLoop", (None, 0))])
def test_a_field_carries_a_delta_only_through_a_struct_it_embeds(types, field_type, resolved):
    assert model(types, {}).resolve_field_type(field_type) == resolved


def test_deltas_propagate_bottom_up_and_the_remainder_is_a_classs_own(types):
    m = model(types, {"CBase": 4, "CDerived": 4, "CCycA": 2})
    assert m.compute("CDerived") == 4 and m.residual["CDerived"] == 0
    assert m.contributors["CDerived"] == [{"field": "base", "type": "CBase", "count": 1, "delta": 4, "offset": 0}]
    assert m.compute("CHolder") == 4 and m.residual["CHolder"] is None
    assert m.compute("CCycB") == 2
    assert m.compute("CSelf") == 0
    assert sorted(m.subclasses_of("CBase")) == ["CDerived", "CHolder2"]


def run(*args):
    return css.main(["--from-program", "from.exe", "--to-program", "to.exe", *args])


def test_the_report_separates_roots_from_what_follows_them(types, tmp_path, capsys):
    out = tmp_path / "drift.json"
    assert run("--json", str(out)) == 0
    printed = capsys.readouterr().out
    assert "8 classes measured on both sides, 1 via from.exe's Ghidra layout" in printed
    assert "  CBase                             4          4   0x10 -> 0xc" in printed
    assert "renamed in Ghidra, RTTI calls it SfxSample" in printed
    assert "  COnlyTo                           2          2   0xa -> 0x8" in printed
    assert "CHolder2                          +4   CONTRADICTED by CHolder2Sub +4" in printed
    assert "CLonely                          +12   no RTTI subclasses to check it against" in printed
    assert "CHolder " not in printed.split("INFERRED")[1].split("UNDECOMPOSABLE")[0]
    assert "CNoLayout                         +4   (8 -> 4)" in printed
    assert "CWrong                     ghidra=24        rtti=20        (+4)" in printed
    assert "+4 from CBase  (1 classes)" in printed
    doc = json.loads(out.read_text())
    roots = {r["name"]: (r["from_size"], r["to_size"], r["own_delta"]) for r in doc["roots"]}
    assert roots["CSfxSample"] == (40, 36, -4)
    assert roots["COnlyTo"] == (10, 8, 2)
    assert doc["suspect_layouts"] == [["CWrong", 24, 20]]


def test_one_class_is_explained_by_its_parts_and_heirs(types, capsys):
    assert run("--class", "SfxSample") == 0
    printed = capsys.readouterr().out
    assert "CSfxSample (RTTI SfxSample): from.exe=40  to.exe=36  delta=+4" in printed
    assert "own change: -4" in printed
    assert "via CBase                            +8  parts[2] @0x0" in printed
    assert run("--class", "CBase") == 0
    assert "2 subclass(es) inherit this: CDerived, CHolder2" in capsys.readouterr().out
    assert run("--class", "CLonely") == 0
    assert "from.exe=48  to.exe=?  delta=+0" in capsys.readouterr().out
    assert run("--class", "Nope") == 1
    assert "No layout for Nope" in capsys.readouterr().out


def test_builds_that_agree_report_no_layout_problems(types, capsys):
    for program in ("a.exe", "b.exe"):
        write(types / program / "type_info", "type_info.json", {"type_info": [{"name": "CBase", "typeinfo_size": 16}]})
    write(types / "a.exe" / "data_types", "data_types.json", {"structs": [{"name": "CBase", "len": 16}]})
    assert css.main(["--from-program", "a.exe", "--to-program", "b.exe"]) == 0
    printed = capsys.readouterr().out
    assert "0 differ in size" in printed
    assert "UNDECOMPOSABLE" not in printed and "SUSPECT" not in printed and "Wrote" not in printed


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["compare_sibling_struct_sizes.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "compare_sibling_struct_sizes.py"), run_name = "__main__")
    assert exit_info.value.code == 0
