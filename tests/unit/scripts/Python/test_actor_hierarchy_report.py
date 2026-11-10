# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket, write_json
import actor_class_tree
import actor_hierarchy_report as ahr
import map_vtable_slots


def register(name, parent):
    parent_arg = f"&g_{parent}ClassInfo" if parent else "0"
    return f'core_x_cpp_registerActorClass_FUN_0040c160(&g_{name}ClassInfo,"{name}",f,&v,1,{parent_arg});\n'


def param(name, kind):
    return {"name": name, "type": kind}


# The reference build: CDemonActor's edit slot is gone from the target, and the
# target's CGhost moved from under CBox to under CDemonActor.
REF_FUNCS = [
    function(0x401000, "core_x.cpp_CDemonActor_setup_FUN_00401000", ret = "void",
             vars = {"params": [param("this_ptr", "CDemonActor*")]}),
    function(0x401010, "core_x.cpp_CDemonActor_process_FUN_00401010", ret = "void",
             vars = {"params": [param("this_ptr", "CDemonActor*"), param("delta_time", "float")]}),
    function(0x401020, "core_x.cpp_CDemonActor_edit_FUN_00401020"),
    function(0x401030, "core_x.cpp_CBox_setup_FUN_00401030"),
    function(0x401040, "core_x.cpp_CBox_open_FUN_00401040", ret = "int", vars = {"params": [{}]}),
]
REF_TABLES = {"CDemonActor": ["00401000", "00401010", "00401020"],
              "CBox": ["00401030", "00401010", "00401020", "00401040"]}
REF_TREE = [("CDemonActor", None), ("CBox", "CDemonActor"), ("CGhost", "CBox"), ("CLost", "CDemonActor")]
DST_TREE = [("CDemonActor", None), ("CBox", "CDemonActor"), ("CGhost", "CDemonActor"), ("CSolo", None)]


def slot(index, sibling, status, method, func):
    return {"slot": index, "sibling_slot": sibling, "status": status, "method": method, "target_func": func}


DST_CONTRACT = {
    "CDemonActor": {"slots": [slot(0, 0, "MAPPED", "setup", "00411000"),
                              slot(1, None, "AMBIGUOUS", None, "00411f00"),
                              slot(2, 1, "MAPPED-BY-HIERARCHY", "process", "00411010")]},
    "CBox": {"slots": [slot(0, 0, "MAPPED", "setup", "00411030"),
                       slot(1, None, "AMBIGUOUS", None, "00411f00"),
                       slot(2, 1, "MAPPED", "process", "00411010"),
                       slot(3, 3, "MAPPED", "open", "00411040"),
                       slot(4, None, "AMBIGUOUS", None, "00411050")]},
    # A class the reference has no table for: its slots have no reference method.
    "CSolo": {"slots": [slot(0, 0, "MAPPED", "setup", "00411060")]},
}
DST_SIGS = {"pairs": [{"b": "00411000", "sig_verdict": "agree"}, {"b": "00411010"},
                      {"b": "00411030", "sig_verdict": "conflict"}]}


@pytest.fixture(name = "builds")
def fixture_builds(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    annotations = install_programs(monkeypatch, tmp_path, {
        "ref.exe": (pe, REF_FUNCS),
        "dst.exe": (pe, [function(0x411f00, "core_actor.cpp_FUN_00411f00"),
                         function(0x411050, "core_box.cpp_FUN_00411050")])})
    write_bucket(annotations, "ref.exe", "vtables", [
        {"addr": f"0050{i}000", "functions": [{"func_addr": f} for f in funcs]}
        for i, funcs in enumerate(REF_TABLES.values())])
    write_bucket(annotations, "ref.exe", "symbols_label", [
        {"addr": f"0050{i}000", "name": f"g_{c}VTable"} for i, c in enumerate(REF_TABLES)])
    for program, tree in (("ref.exe", REF_TREE), ("dst.exe", DST_TREE)):
        unit = annotations / program / "pseudocode" / "src" / "core" / "x.cpp"
        unit.mkdir(parents = True)
        (unit / "staticInit.cpp").write_text("".join(register(c, p) for c, p in tree))
    for module in (actor_class_tree, map_vtable_slots):
        monkeypatch.setattr(module, "REPO_ROOT", str(tmp_path))
    return {"contract": write_json(tmp_path / "contract.json", DST_CONTRACT),
            "sigs": write_json(tmp_path / "sigs.json", DST_SIGS), "tmp": tmp_path}


def test_main_writes_the_tree_methods_and_classes(builds, capsys):
    out_dir = builds["tmp"] / "out"
    names = write_json(builds["tmp"] / "names.json", {"slots": [
        {"program": "dst.exe", "class": "CBox", "slot": 4, "name": "kick", "ret": "int",
         "params": [{"name": "force", "type": "float"}], "basis": "Plays \"kick_<name>.wav\"."}]})
    ahr.main(["--reference", "ref.exe", "--contract", f"dst.exe={builds['contract']}",
              "--sigs", f"dst.exe={builds['sigs']}", "--out-dir", str(out_dir), "--slot-names", names])
    assert f"wrote 4 files to {out_dir}: 5 classes, 4 reference methods, 2 new slots" in capsys.readouterr().out

    tree = (out_dir / "hierarchy.md").read_text()
    assert "`ref dst`" in tree
    assert "- `x x` CDemonActor\n  - `x x` CBox\n    - `x x` CGhost — parent differs (dst: CDemonActor)\n" in tree
    assert "  - `x .` CLost\n- `. x` CSolo\n" in tree

    methods = (out_dir / "virtual_methods.md").read_text()
    assert "## CDemonActor" in methods and "## CBox" in methods
    assert "| `setup` | `void setup()` | 0 | 0M | dst a1 c1 |" in methods
    assert "| `process` | `void process(float delta_time)` | 1 | 2H | dst u1 |" in methods
    assert "| `edit` | `? edit()` | 2 | — | — |" in methods
    assert "| `open` | `int open(? ?)` | 3 | 3M | dst u1 |" in methods
    assert "| dst | 1 | — | `00411f00` | core_actor.cpp | CDemonActor |" in methods
    assert "| dst | 4 | `kick` | `00411050` | core_box.cpp | CBox |" in methods
    # The names file is rendered whole, as the baseline for later names.
    assert "| dst | CBox | 4 | `int kick(float force)` | Plays \"kick_&lt;name&gt;.wav\". |" in methods

    classes = (out_dir / "classes.md").read_text()
    assert "## CBox\n\n- **ref**: parent CDemonActor, 4 slots; overrides open, setup\n" in classes
    assert "- **dst**: parent CDemonActor, 5 slots; overrides <new slot 4>, open, setup\n" in classes
    assert "## CGhost\n\n- **ref**: parent CBox, no labelled table\n" in classes
    assert "## CLost\n\n- **ref**: parent CDemonActor, no labelled table\n\n## CSolo" in classes
    assert "- **dst**: parent —, 1 slots; overrides setup\n" in classes

    data = json.loads((out_dir / "hierarchy.json").read_text())
    assert data["programs"] == ["ref.exe", "dst.exe"]
    assert data["classes"]["CGhost"]["parent"] == {"dst.exe": "CDemonActor", "ref.exe": "CBox"}
    assert "overrides" not in data["classes"]["CBox"]


def test_a_build_without_new_slots_or_units_still_renders():
    built = {"methods": [{"introducer": "CA", "method": None, "ref_func": "x", "slots": {"r": 0},
                          "evidence": {}, "params": {}}],
             "new_slots": {}, "classes": {}}

    class Img:
        by_addr = {}

    text = ahr.render_methods("r", ["r"], built, Img())
    assert "| `?` | `? ?()` | 0 | — |" in text
    assert "no reference method" not in text
    assert ahr.build("r", ["r"], {"r": {"CA": None}}, {"r": {"CA": {"slots": []}}}, {})["new_slots"] == {}
    # No ancestor has a table: everything the class holds is its own.
    assert ahr.nearest_tabled({"CA": "CB", "CB": None}, {}, "CA") is None


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["actor_hierarchy_report.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "actor_hierarchy_report.py"), run_name = "__main__")
    assert exit_info.value.code == 0
