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
import derive_vtable_contract as dvc
import map_vtable_slots

# The sibling's tables, by slot. CDemonActor's slot 2 is an editor method the
# target dropped, and the target's CDemonActor and CCrate fill slot 1 with one
# shared stub, so only CBox -- which overrides process -- anchors it.
SOURCE = {
    "CDemonActor": ["setup", "process", "edit", "render", "dtor"],
    "CBox": ["CBox_setup", "CBox_process", "edit", "render", "CBox_dtor", "CBox_open"],
    "CCrate": ["CCrate_setup", "process", "edit", "render", "dtor"],
    "CGhost": ["CGhost_setup"],
}
TARGET = {
    "CDemonActor": ["setup", "stub", "render", "dtor"],
    "CBox": ["CBox_setup", "CBox_process", "render", "CBox_dtor", "CBox_open"],
    "CCrate": ["CCrate_setup", "stub", "render", "dtor"],
    "CGhost": ["CGhost_setup"],
}
TABLES = {"CDemonActor": 0x500000, "CBox": 0x500100, "CCrate": 0x500200, "CGhost": 0x500300}
# CBox_open has no pair: it fills the one-slot gap left after CBox_dtor.
UNPAIRED = {"stub", "CBox_open"}
REGISTRATIONS = """
  core_actor_cpp_registerActorClass_FUN_0040c160(&g_CDemonActorClassInfo,"CDemonActor",f,&v,1,0);
  core_actor_cpp_registerActorClass_FUN_0040c160(&g_CBoxClassInfo,"CBox",f,&v,1,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160(&g_CCrateClassInfo,"CCrate",f,&v,1,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160(&g_CGhostClassInfo,"CGhost",f,&v,1,&g_CBoxClassInfo);
"""


def addresses(base, names):
    """Distinct methods get distinct addresses; a repeated name is one function."""
    out = {}
    for name in names:
        out.setdefault(name, base + 0x10 * len(out))
    return out


def qualified(name):
    """`CBox_open` belongs to CBox; a bare method name to CDemonActor."""
    owner, method = name.split("_", 1) if "_" in name else ("CDemonActor", name)
    return f"core_x.cpp_{owner}_{method}"


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    source = addresses(0x401000, [n for ns in SOURCE.values() for n in ns])
    target = addresses(0x411000, [n for ns in TARGET.values() for n in ns])
    annotations = install_programs(monkeypatch, tmp_path, {
        "src.exe": (pe, [function(a, f"{qualified(n)}_FUN_{a:08x}") for n, a in source.items()]),
        "dst.exe": (pe, [function(a, f"core_x.cpp_FUN_{a:08x}") for a in target.values()])})
    for program, layout, where in (("src.exe", SOURCE, source), ("dst.exe", TARGET, target)):
        write_bucket(annotations, program, "vtables", [
            {"addr": f"{TABLES[c]:08x}",
             "functions": [{"func_addr": f"{where[n]:08x}", "param_count": i} for i, n in enumerate(slots)]}
            for c, slots in layout.items()] + [{"addr": "00509000", "functions": []}])
        write_bucket(annotations, program, "symbols_label", [
            {"addr": f"{a:08x}", "name": f"g_{c}VTable"} for c, a in TABLES.items()] + ["junk"])
    unit = annotations / "dst.exe" / "pseudocode" / "src" / "core" / "x.cpp"
    unit.mkdir(parents = True)
    (unit / "staticInit.cpp").write_text(REGISTRATIONS)
    for module in (actor_class_tree, map_vtable_slots):
        monkeypatch.setattr(module, "REPO_ROOT", str(tmp_path))
    pairs = [{"a": f"{source[n]:08x}", "b": f"{b:08x}"} for n, b in target.items() if n not in UNPAIRED]
    return {"mapping": write_json(tmp_path / "mapping.json", {"pairs": pairs}), "tmp": tmp_path}


class FakeImage:
    def __init__(self, names):
        self.by_addr = {a: {"name": n} for a, n in names.items()}


def row(slot, sibling, status = "MAPPED", method = None, declarer = None):
    return {"slot": slot, "sibling_slot": sibling, "status": status, "method": method, "declarer": declarer}


def editor(sibling, method):
    return {"sibling_slot": sibling, "declarer": "CDemonActor", "method": method, "func": f"f{sibling}"}


def test_a_method_is_read_off_its_qualified_name():
    img = FakeImage({"a": "core_x.cpp_CBox_open_FUN_00401000", "b": "core_x.cpp_open_FUN_00401010",
                     "c": "FUN_00401020"})
    assert dvc.method_of(img, "a") == ("CBox", "open")
    assert dvc.method_of(img, "b") == (None, "open")
    assert dvc.method_of(img, "c") == (None, None)
    assert dvc.method_of(img, "missing") == (None, None)


def test_parents_skip_classes_without_a_table_and_ancestors_come_first():
    tree = {"CDemonActor": None, "CBox": "CDemonActor", "CGhost": "CBox", "CWisp": "CGhost"}
    assert dvc.tabled_parents(tree, ["CDemonActor", "CWisp"]) == {"CWisp": "CDemonActor"}
    assert dvc.base_first(tree, ["CWisp", "CBox", "CDemonActor"]) == ["CDemonActor", "CBox", "CWisp"]


def test_structure_fills_a_one_slot_gap_from_the_one_method_left():
    per = {
        "CA": ([row(0, 0), row(1, None, "AMBIGUOUS"), row(2, 3)], [editor(1, "process"), editor(2, "edit")]),
        "CB": ([row(0, 0), row(1, 1), row(2, 3)], [editor(2, "edit")]),
    }
    assert dvc.resolve_by_structure(per, ["CA", "CB"]) == 1
    assert per["CA"][0][1] == row(1, 1, "MAPPED-BY-STRUCTURE", "process", "CDemonActor")
    assert per["CA"][1] == [editor(2, "edit")]


def test_structure_refuses_what_is_not_forced():
    edit = [editor(2, "edit")]
    per = {
        # Two target slots for one candidate: which one gets it is a guess.
        "CWide": ([row(0, 0), row(1, None, "AMBIGUOUS"), row(2, None, "AMBIGUOUS"), row(3, 3)],
                  [editor(1, "process"), *edit]),
        # Nothing anchors after the gap.
        "COpen": ([row(0, 0), row(1, None, "AMBIGUOUS")], list(edit)),
        # The one candidate is already placed elsewhere, so it is not on the list.
        "CUsed": ([row(0, 0), row(1, None, "AMBIGUOUS"), row(2, 3), row(3, 1)], list(edit)),
        # Two candidates.
        "CTwo": ([row(0, 0), row(1, None, "AMBIGUOUS"), row(2, 4)], list(edit)),
    }
    assert dvc.resolve_by_structure(per, list(per)) == 0
    assert all(r["status"] != "MAPPED-BY-STRUCTURE" for rows, _ in per.values() for r in rows)


def test_a_base_slot_is_placed_by_the_classes_that_share_it():
    img = FakeImage({"p": "core_x.cpp_CDemonActor_process_FUN_00000001",
                     "q": "core_x.cpp_CBox_process_FUN_00000002",
                     "o": "core_x.cpp_CBox_open_FUN_00000003",
                     "s": "core_x.cpp_CDemonActor_setup_FUN_00000004"})
    sibling = {"CDemonActor": ["s", "p"], "CBox": ["s", "q", "o"], "CCrate": ["s", "p"], "CLoop": ["s", "p"]}
    per = {
        "CDemonActor": ([row(0, 0, method = "setup"), row(1, None, "AMBIGUOUS")], [editor(1, "process")]),
        "CBox": ([row(0, 0, method = "setup"), row(1, 1, method = "process"), row(2, 2, method = "open")], []),
        "CCrate": ([row(0, 0, method = "setup"), row(1, None, "AMBIGUOUS")], [editor(1, "process")]),
        # A cyclic parent link stops the walk instead of looping.
        "CLoop": ([row(0, 0, method = "setup"), row(1, None, "AMBIGUOUS")], []),
    }
    parents = {"CBox": "CDemonActor", "CCrate": "CDemonActor", "CLoop": "CLoop"}
    assert dvc.resolve_by_hierarchy(per, list(per), parents, sibling, img) == 2
    assert per["CDemonActor"][0][1] == row(1, 1, "MAPPED-BY-HIERARCHY", "process", "CDemonActor")
    assert per["CDemonActor"][1] == []
    assert per["CCrate"][0][1]["status"] == "MAPPED-BY-HIERARCHY"
    assert per["CLoop"][0][1]["status"] == "AMBIGUOUS"


def test_hierarchy_refuses_dissent_and_double_placement():
    img = FakeImage({"p": "core_x.cpp_CDemonActor_process_FUN_00000001",
                     "t": "core_x.cpp_CDemonActor_think_FUN_00000002"})
    amb = row(1, None, "AMBIGUOUS")
    per = {
        "CDemonActor": ([row(0, 0, method = "setup"), dict(amb), row(2, None, "AMBIGUOUS")], []),
        # Two children disagree on slot 1.
        "CBox": ([row(0, 0, method = "setup"), row(1, 1, method = "process"), row(2, 2, method = "think")], []),
        "CCrate": ([row(0, 0, method = "setup"), row(1, 2, method = "think"), row(2, 1, method = "process")], []),
    }
    sibling = {"CDemonActor": ["s", "p", "t"], "CBox": ["s", "p", "t"], "CCrate": ["s", "p", "t"]}
    parents = {"CBox": "CDemonActor", "CCrate": "CDemonActor"}
    assert dvc.resolve_by_hierarchy(per, list(per), parents, sibling, img) == 0

    # The same dissent from a table shorter than its parent's is not counted.
    per = {
        "CDemonActor": ([row(0, 0, method = "setup"), dict(amb), row(2, 2, method = "think")], []),
        "CBox": ([row(0, 0, method = "setup"), row(1, 1, method = "process"), row(2, 2, method = "think")], []),
        "CStale": ([row(0, 0, method = "setup"), row(1, 2, method = "think")], []),
    }
    parents = {"CBox": "CDemonActor", "CStale": "CDemonActor"}
    assert dvc.stale_layouts(per, parents) == {"CStale"}
    assert dvc.resolve_by_hierarchy(per, list(per), parents, sibling, img) == 1
    assert per["CDemonActor"][0][1]["method"] == "process"

    # One voice, but the class already holds that method at another slot.
    per = {"CDemonActor": ([row(0, 1, method = "process"), dict(amb)], []),
           "CBox": ([row(0, 0, method = "setup"), row(1, 1, method = "process")], [])}
    sibling = {"CDemonActor": ["s", "p"], "CBox": ["s", "p"]}
    assert dvc.resolve_by_hierarchy(per, list(per), {"CBox": "CDemonActor"}, sibling, img) == 0

    # The voted slot is past the class's own sibling table, or holds another method there.
    per = {"CDemonActor": ([row(0, 0, method = "setup"), dict(amb)], []),
           "CBox": ([row(0, 0, method = "setup"), row(1, 1, method = "process")], [])}
    for short in (["s"], ["s", "t"]):
        sibling = {"CDemonActor": short, "CBox": ["s", "p"]}
        assert dvc.resolve_by_hierarchy(per, list(per), {"CBox": "CDemonActor"}, sibling, img) == 0


def test_main_derives_every_tabled_class_from_the_targets_own_tree(programs, capsys):
    md, js = programs["tmp"] / "contract.md", programs["tmp"] / "contract.json"
    dvc.main(["--mapping", programs["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
              "--out-md", str(md), "--out-json", str(js)])
    out = capsys.readouterr().out
    assert "  CDemonActor      4 slots  named=4   ambiguous=0  own-impl=4   unplaced=1" in out
    # Three of four classes drop the editor slot, so it alone is common and the
    # structure rule places process in both stub-filled tables.
    assert "  (2 slot(s) resolved by hierarchy structure)" in out
    assert "placed by the classes sharing them" not in out
    # CGhost's one-slot table cannot extend CBox's five: it was built against
    # an older CBox, and is reported rather than allowed to vote.
    assert ("  STALE LAYOUT CGhost: 1 slots under CBox's 5 -- built against an older "
            "CBox declaration") in out
    assert "=== methods of src.exe with no slot in dst.exe ===" in out
    assert "  CDemonActor: CDemonActor::edit" in out

    contract = json.loads(js.read_text())
    assert sorted(contract) == ["CBox", "CCrate", "CDemonActor", "CGhost"]
    assert contract["CDemonActor"]["slots"][1]["method"] == "process"
    assert contract["CBox"]["slots"][4]["method"] == "open"
    assert contract["CGhost"]["editor_only"] == []
    assert contract["CGhost"]["stale_layout"] and not contract["CBox"]["stale_layout"]
    assert contract["CCrate"]["target_vtable"] == "00500200"
    text = md.read_text()
    assert "### `CDemonActor` — slots 0..3" in text
    assert "| 1 | `process` | `CBox` | 1 |" in text
    assert "### `CBox` — slots 4..4 (on top of `CDemonActor`)" in text
    assert "### `CCrate` — adds no slots of its own" in text
    assert "### `CGhost` — adds no slots of its own" in text
    assert "(5 distinct slots across 4 classes)" in out


def test_main_takes_classes_and_parents_by_hand(programs, capsys):
    dvc.main(["--mapping", programs["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
              "--classes", "CDemonActor, CBox,,CCrate,CNope",
              "--parents", "CBox=CDemonActor,CCrate=CDemonActor,stray"])
    out = capsys.readouterr().out
    assert "no vtable for: CNope" in out
    # Without CGhost, process is dropped by two of three classes and counts as
    # common too, so structure has no candidate and CBox's override places it.
    assert "  (2 slot(s) placed by the classes sharing them)" in out
    assert "resolved by hierarchy structure" not in out
    assert "wrote" not in out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["derive_vtable_contract.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "derive_vtable_contract.py"), run_name = "__main__")
    assert exit_info.value.code == 0
