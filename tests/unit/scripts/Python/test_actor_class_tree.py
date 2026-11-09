# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import actor_class_tree as act

# One staticInit per form Ghidra prints a registration in.
ACTOR = """
void core_actor_cpp_staticInit_FUN_00401000(void)
{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDemonActorClassInfo,"CDemonActor",(CDemonActor_FactoryFunc *)0x0,
             &g_CDemonActorClassVersion,1,(CDemonActorType *)0x0);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCharacterActorType_00764800,"CCharacter",factory,(int *)0x5,2,
             &g_CDemonActorClassInfo);
}
"""
HERO = """
void core_hero_cpp_staticInit_FUN_00402000(void)
{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHeroClassInfo,(char *)0x5d99fc,(CDemonActor_FactoryFunc *)0x0,
             &g_CHeroClassVersion,0x11,&g_CCharacterActorType_00764800);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x1cedf54,"CHeroPlaceholder",f,&DAT_1,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)&DAT_007bcc4c,"?333?CTrigger" + 5,f,&DAT_2,2,
             (CDemonActorType *)0x1cedf54);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&DAT_007bcc50,"p\\x01CLight" + 0x2,f,&DAT_3,2,(CDemonActorType *)&DAT_007bcc4c);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&DAT_007bcc60,(char *)0x5d9a00,f,&DAT_4,2,&g_CHeroClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDocClassInfo,"CDoc",f,&DAT_5,2,&g_CBasicNPCActorType);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CStrayClassInfo,"CStray",f,&DAT_6,2,&DAT_00999999);
}
"""
DOC = """# Actor classes
- CDemonActor (abstract)
  - CCharacter (abstract)
    - CHero
  - CTrigger

  # comment
  - CDoc
"""


@pytest.fixture(name = "tree")
def fixture_tree(monkeypatch, tmp_path):
    src = tmp_path / "annotations" / "x.exe" / "pseudocode" / "src" / "core"
    for unit, text in (("actor.cpp", ACTOR), ("hero.cpp", HERO)):
        (src / unit).mkdir(parents = True)
        (src / unit / "staticInit.cpp").write_text(text)
    # Neither the function's own definition nor a keep is a registration.
    (src / "actor.cpp" / "registerActorClass_FUN_0040c160.cpp").write_text(
        "registerActorClass_FUN_0040c160(&g_CBogusClassInfo,\"CBogus\",f,&v,1,0)\n")
    (src / "actor.cpp" / "staticInit.keep.cpp").write_text(
        "registerActorClass_FUN_0040c160(&g_CKeptClassInfo,\"CKept\",f,&v,1,0)\n")
    (src / "actor.cpp" / "other.cpp").write_text("void f(void) {}\n")
    monkeypatch.setattr(act, "REPO_ROOT", str(tmp_path))
    return tmp_path


def write_doc(tree, text = DOC):
    doc = tree / "research" / "01-file_structure" / "actor_hierarchy.txt"
    doc.parent.mkdir(parents = True)
    doc.write_text(text)


def test_every_printed_form_of_a_registration_is_read(tree):
    unnamed = []
    parent, where = act.load("x.exe", unnamed)
    assert parent == {
        "CDemonActor": None,
        "CCharacter": "CDemonActor",
        # A name Ghidra never defined comes from the class's own global.
        "CHero": "CCharacter",
        "CHeroPlaceholder": "CDemonActor",
        # A tail-merged literal is read from its offset, escapes decoded first.
        "CTrigger": "CHeroPlaceholder",
        "CLight": "CTrigger",
        # A parent no registration names is decoded from its symbol, and one
        # that cannot be decoded keeps its spelling rather than passing for a root.
        "CDoc": "CBasicNPC",
        "CStray": "DAT_00999999",
    }
    assert where["CHeroPlaceholder"] == (os.path.join("core", "hero.cpp", "staticInit.cpp"), "0x1cedf54")
    assert where["CTrigger"][1] == "DAT_007bcc4c"
    assert unnamed == [("DAT_007bcc60", "0x5d9a00", os.path.join("core", "hero.cpp", "staticInit.cpp"))]
    assert act.load("x.exe")[0] == parent


def test_a_class_is_named_by_its_type_global():
    assert act._class_of_global("g_CBoxActorActorType_00764800") == "CBoxActor"
    assert act._class_of_global("g_CHeroClassInfo") == "CHero"
    assert act._class_of_global("DAT_00764800") is None
    assert act._class_of_global(None) is None


def test_ancestry_walks_to_the_root_and_stops_on_a_cycle():
    assert act.ancestry({"C": "B", "B": "A", "A": None}, "C") == ["C", "B", "A"]
    assert act.ancestry({"A": "B", "B": "A"}, "A") == ["A", "B"]
    assert act.ancestry({}, None) == []


def test_main_reports_roots_unresolved_parents_and_unnamed_calls(tree, capsys):
    act.main(["--program", "x.exe", "--tree"])
    out = capsys.readouterr().out
    assert "x.exe: 8 registered actor classes, 1 root(s)" in out
    assert "  roots: CDemonActor" in out
    assert "  parents naming an unregistered class: 2" in out
    assert "    CStray -> DAT_00999999" in out
    assert "  registrations with no recoverable name: 1" in out
    assert "    DAT_007bcc60 (name at 0x5d9a00) in" in out
    assert "- CDemonActor\n  - CCharacter\n    - CHero\n  - CHeroPlaceholder\n    - CTrigger\n      - CLight\n" in out


def test_main_compares_against_the_research_doc(tree, capsys):
    write_doc(tree)
    act.main(["--program", "x.exe", "--compare-doc"])
    out = capsys.readouterr().out
    assert "  5 classes in both, 2 disagree" in out
    assert "    CDoc: doc says CDemonActor, registration says CBasicNPC" in out
    assert "    CTrigger: doc says CDemonActor, registration says CHeroPlaceholder" in out


def test_main_writes_json_with_the_docs_abstract_marks(tree, capsys):
    out_json = tree / "tree.json"
    act.main(["--program", "x.exe", "--json", str(out_json)])
    data = json.loads(out_json.read_text())
    assert data["root"] == "CDemonActor"
    assert data["abstract"] == []
    assert data["parent"]["CHero"] == "CCharacter"
    assert "(8 classes, 0 marked abstract)" in capsys.readouterr().out

    write_doc(tree)
    act.main(["--program", "x.exe", "--json", str(out_json)])
    assert json.loads(out_json.read_text())["abstract"] == ["CCharacter", "CDemonActor"]


def test_main_lists_every_root_when_there_are_several(tree, capsys):
    (tree / "annotations" / "y.exe" / "pseudocode" / "src").mkdir(parents = True)
    out_json = tree / "empty.json"
    act.main(["--program", "y.exe", "--json", str(out_json)])
    assert "y.exe: 0 registered actor classes, 0 root(s)\n" in capsys.readouterr().out
    assert json.loads(out_json.read_text())["root"] == []


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["actor_class_tree.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "actor_class_tree.py"), run_name = "__main__")
    assert exit_info.value.code == 0
