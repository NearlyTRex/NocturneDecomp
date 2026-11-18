# Imports
import json
import os
import re
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import find_render_sim_writes as frsw


def test_strings_and_comments_are_blanked_in_one_pass():
    text = 'a = "x // y"; b = 1; /* c\n d */ e = "/*"; f = 2; // g\nh'
    assert frsw.strip_comments(text) == 'a = ""; b = 1;  \n e = ""; f = 2; \nh'


def test_a_path_opening_with_a_paren_is_extended_to_its_root():
    body = "x = 1; ((CBat *)p)->hp = 2;"
    start = body.index(")->hp")
    assert frsw.full_path(body, start, ")->hp") == "((CBat*)p)->hp"
    assert frsw.full_path(body, 0, "p->hp") == "p->hp"
    # unbalanced: there is no '(' to stop at
    assert frsw.full_path(")->hp", 0, ")->hp") == ")->hp"


def test_the_last_field_and_root_of_a_path():
    assert frsw.last_field("(a->b).c[2]") == "c"
    assert frsw.last_field("a[2]") is None
    assert frsw.path_root(" ((CBat*)p)->hp") == "CBat"
    assert frsw.path_root("(*(CBat**)p)->hp") == ""


def func(body, name = "CBat_renderBurn", tu = "core/bat.cpp", raw = None):
    return {"name": name, "method": name.split("_")[-1] if name[:1] == "C" else name, "tu": tu,
            "file": f"{tu}/{name}.cpp", "raw": raw if raw is not None else body, "body": body}


def test_writes_are_found_through_members_and_globals_but_not_locals():
    body = """
  iVar1 = this_ptr->burn_state;
  this_ptr->is_burned = 1;
  (this_ptr->base).pos.x = 2;
  local_10.count = 3;
  local_10->count = 3;
  local_10[2] = 1;
  g_RenderCount.frames += 1;
  this_ptr->flags <<= 1;
  this_ptr->burn_state = 5;
  this_ptr->burn_state = iVar1;
  g_CDemonRenderer->x = 1;
  if (this_ptr->is_burned == 1) { }
"""
    out = frsw.writes_in(func(body), re.compile(frsw.DEFAULT_IGNORE))
    got = [(w["path"], w["rhs"], w["line"], w["restored"]) for w in out]
    assert got == [
        ("this_ptr->is_burned", "1", 3, False),
        ("(this_ptr->base).pos.x", "2", 4, False),
        ("local_10->count", "3", 6, False),
        ("g_RenderCount.frames", "1", 8, False),
        ("this_ptr->flags", "1", 9, False),
        ("this_ptr->burn_state", "5", 10, True),       # the last write puts back what was read
        ("this_ptr->burn_state", "iVar1", 11, True),
    ]


def test_the_render_side_grows_by_functions_only_it_calls():
    funcs = {
        "a": func("CBat_helper_FUN_000000b0(); CBat_shared_FUN_000000c0(); CBat_renderBurn_FUN_000000a0();",
                  name = "CBat_renderBurn"),
        "b": func("", name = "CBat_helper"),
        "c": func("", name = "CBat_shared"),
        "d": func("CBat_shared_FUN_000000c0();", name = "CBat_process"),
        "e": func("", name = "orphan"),
    }
    funcs = {f"000000{k}0": v for k, v in funcs.items()}
    assert frsw.render_side(funcs, r"^render", False) == {"000000a0"}
    assert frsw.render_side(funcs, r"^render", True) == {"000000a0", "000000b0"}


def test_the_sim_side_follows_calls_and_virtual_slots_but_not_into_excluded_code():
    funcs = {
        "000000a0": func("CBat_think_FUN_000000b0(); (*this->vt->fly)(this); undefined_FUN_000000ff();",
                         name = "CGame_process"),
        "000000b0": func("(*this->vt->fly)(this); CBat_renderBurn_FUN_000000d0();", name = "CBat_think"),
        "000000c0": func("", name = "CBat_fly"),
        "000000d0": func("", name = "CBat_renderBurn"),
        "000000e0": func("", name = "CBat_process"),
        "000000f0": func("", name = "freeFunction"),
    }
    sim = frsw.sim_side(funcs, frsw.SIM_PATTERN, frsw.SIM_ROOTS, {"000000d0", "000000e0"})
    assert sim == {"000000a0", "000000b0", "000000c0"}


def test_off_sim_code_is_named_by_unit_method_or_class():
    funcs = {"1": func("", tu = "engine/console.cpp", name = "CConsole_print"),
             "2": func("", name = "CBat_load"),
             "3": func("", tu = "shape/x.cpp", name = "f"),
             "4": func("", name = "CDemonCamera_move"),
             "5": func("", name = "CBat_process")}
    assert frsw.off_sim(funcs, {"engine/console.cpp"}) == {"1", "2", "3", "4"}


RENDER = """\
void CBat_renderBurn(CBat *this_ptr)
{
  sprintf(buf, "// not a comment"); this_ptr->is_burned = 1;
  this_ptr->glow = 2;
  g_Scene.x = 3;
  DAT_00601000.y = 4;
  iVar1 = this_ptr->spin; this_ptr->spin = 9; this_ptr->spin = iVar1;
  (*this_ptr->vtable->setGlow)(this_ptr);
  CBat_helper_FUN_00401100(this_ptr);
  CBat_renderBurn_FUN_00401000(this_ptr);
  CBat_unknown_FUN_00409990(this_ptr);
}
"""


def write_tree(root, program = "nocedit.exe", extra = None):
    """A program's pseudocode: a render function, its helper, sim readers and a header."""
    pseudo = root / "annotations" / program / "pseudocode"
    files = {
        "src/core/bat.cpp/CBat_renderBurn_FUN_00401000.cpp": "raw, replaced by the keep",
        "src/core/bat.cpp/CBat_renderBurn_FUN_00401000.keep.cpp": RENDER,
        "src/core/bat.cpp/CBat_helper_FUN_00401100.cpp":
            "void f(CBat *p) { (*p->vtable->setSpeed)(p); (*p->vtable->setGlow)(p); }",
        "src/core/bat.cpp/CBat_process_FUN_00402000.cpp":
            "void f(CBat *p) { if (p->is_burned != 0) { } p->glow += 1; g_Scene.x = 0; }",
        "src/core/bat.cpp/CBat_process_FUN_00402000.c": "a raw file after the .cpp: skipped",
        "src/core/bat.cpp/CBat_think_FUN_00402100.cpp": "void f(CBat *p) { x = p->is_burned; y = g_Scene.x; }",
        "src/core/bat.cpp/CBat_renderEditor_FUN_00403000.cpp":
            "void f(CBat *p) { if (is_in_editor) { p->glow = 1; } }",
        "src/core/bat.cpp/CBat_renderNet_FUN_00403100.keep.cpp":
            "#if NOCTURNE_AUTHENTIC_NETPLAY\nvoid f(CBat *p) { p->is_burned = 1; }\n#endif\n",
        "src/core/bat.cpp/notes.txt": "not a function",
        "include/types/Game/CBat.h":
            "typedef struct CBat {\n  int glow; // 0x4\n  int is_burned; // 0x8\n} CBat;\n",
        "include/types/Game/CMoth.h": "typedef struct CMoth {\n  int glow; // 0x4\n} CMoth;\n",
        "include/types/Game/readme.txt": "skipped",
        "include/types/Game/loose.h": "  int stray; // 0x0\n",
    }
    files.update(extra or {})
    for rel, text in files.items():
        path = pseudo / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text)
    return pseudo


@pytest.fixture(name = "tree")
def fixture_tree(tmp_path, monkeypatch):
    monkeypatch.setattr(frsw, "ROOT", str(tmp_path))
    # os.walk order is the directory's; the keep must win in either order
    real_walk = os.walk
    monkeypatch.setattr(os, "walk", lambda top: ((d, s, sorted(f, reverse = "src" in d)) for d, s, f in real_walk(top)))
    return write_tree(tmp_path)


def test_a_program_without_source_exits(tree, capsys):
    with pytest.raises(SystemExit) as exc:
        frsw.main(["--program", "none.exe"])
    assert "no source tree at" in str(exc.value)


def test_render_writes_with_sim_readers_are_reported(tree, capsys, tmp_path):
    frsw.main(["--json", str(tmp_path / "out.json")])
    out = capsys.readouterr().out
    # is_burned and glow twice each, g_Scene.x, DAT_00601000.y and spin twice
    assert out.startswith("render side: 3 functions; 8 field writes; 3 candidates in 3 groups\n")
    assert "\nis_burned\n    written CBat_renderBurn:3\n    target  this_ptr->is_burned\n" in out
    assert "    read by CBat_process, CBat_think\n" in out
    # glow is defined in two structs; += reads it, so CBat_process is a reader
    assert "\nglow [ambiguous]\n    written CBat_renderBurn:4\n" in out
    assert "setter calls reachable from the render side" in out
    assert "    CBat_renderBurn                              setGlow\n" in out
    assert "setSpeed via CBat_helper" in out
    doc = json.loads((tmp_path / "out.json").read_text())
    assert doc["render_side"] == ["CBat_renderBurn", "CBat_renderEditor", "CBat_renderNet"]
    assert {(r["field"], r["target"]) for r in doc["writes"]} >= {("x", "g_Scene.x"), ("y", "DAT_00601000.y")}
    assert {"render": "CBat_renderBurn", "via": "CBat_helper", "setter": "setSpeed"} in doc["setters"]


def test_all_lists_tagged_and_unread_writes_too(tree, capsys):
    frsw.main(["--all"])
    out = capsys.readouterr().out
    assert "\nglow [ambiguous, editor]\n" in out
    assert "\nis_burned [netplay-gated]\n" in out
    # g_Scene.x is read by CBat_think, which names g_Scene; DAT_00601000.y by nothing
    assert "\nx\n    written CBat_renderBurn:5\n    target  g_Scene.x\n    read by CBat_think\n" in out
    assert "\ny\n    written CBat_renderBurn:6\n    target  DAT_00601000.y\n    read by nothing on the sim side\n" in out
    assert "\nspin [restored]\n    written CBat_renderBurn:7\n" in out


def test_one_field_any_reader_and_a_custom_unit_list(tree, capsys):
    frsw.main(["--field", "is_burned", "--any-reader", "--off-sim-tu", "engine/3d.c", "--transitive"])
    out = capsys.readouterr().out
    assert out.startswith("render side: 4 functions (transitive); 2 field writes; 1 candidates in 1 groups\n")
    assert "setter calls" not in out


def test_long_writer_and_reader_lists_are_cut(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(frsw, "ROOT", str(tmp_path))
    extra = {}
    for i in range(9):
        extra[f"src/w/w.cpp/CBat_render{i}_FUN_0050{i:04x}.cpp"] = "void f(CBat *p) { p->hp = 1; }"
    for i in range(7):
        extra[f"src/r/r.cpp/CBat_process{i}_FUN_0060{i:04x}.cpp"] = "void f(CBat *p) { x = p->hp; }"
    write_tree(tmp_path, extra = extra)
    frsw.main([])
    out = capsys.readouterr().out
    assert "    written ... +1 more\n" in out
    assert " (+1 more)\n" in out


def test_with_no_render_writes_nothing_is_read(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(frsw, "ROOT", str(tmp_path))
    write_tree(tmp_path)
    frsw.main(["--render-pattern", "^nothingMatches$"])
    assert capsys.readouterr().out == "render side: 0 functions; 0 field writes; 0 candidates in 0 groups\n"


def test_the_script_runs_as_main(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["find_render_sim_writes.py", "--program", "no-such-program.exe"])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_render_sim_writes.py"), run_name = "__main__")
    assert "no source tree at" in str(exc.value)
