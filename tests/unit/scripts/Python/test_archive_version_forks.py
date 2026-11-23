# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import archive_version_forks as avf

HEADER = '// Name: x\n\n#include "nocturne.h"\n\nvoid __cdecl f(CX *this_ptr)\n\n'


def reads(text, names = ("g_CXClassVersion",)):
    return avf.reads_by_version(HEADER + text, set(names))


def put_source(root, program, unit, name, text):
    folder = root / program / "pseudocode" / "src" / unit
    folder.mkdir(parents = True, exist_ok = True)
    (folder / name).write_text(HEADER + text, encoding = "utf-8")


def register(cls, version, variable = None):
    return ('{\n  core_actor_cpp_registerActorClass_FUN_0040c160\n'
            f'            (&g_{cls}ClassInfo,"{cls}",(F *)0x0,\n'
            f'             &{variable or f"g_{cls}ClassVersion"},{version},&g_CDemonActorClassInfo);\n'
            '  return;\n}\n')


def archive(*lines):
    return "{\n" + "\n".join(lines) + "\n  return;\n}\n"


def field(kind, name, indent = "  "):
    return f'{indent}core_actor_cpp_archive{kind}_FUN_0040b670(&this_ptr->x,"{name}");'


def test_a_number_is_decimal_or_hex():
    assert avf.number("12") == 12
    assert avf.number("0xc") == 12


def test_the_body_starts_at_the_opening_brace_without_comments():
    assert avf.function_body("void f()\n{\n  a(); // note\n}") == "{\n  a(); \n}"
    assert avf.function_body("  a();") == "  a();"


def test_fields_read_at_every_version_follow_the_gates():
    found = reads(archive(
        field("Integer", "always"),
        "  if (1 < g_CXClassVersion) {", field("Float", "fromTwo", "    "), "  }",
        "  if (g_CXClassVersion < 4) {", field("Integer", "beforeFour", "    "), "  }",
        "  else {", field("Actor", "fromFour", "    "), "  }"))
    assert found[0] == ["Integer:always", "Integer:beforeFour"]
    assert found[2] == ["Integer:always", "Float:fromTwo", "Integer:beforeFour"]
    assert found[5] == ["Integer:always", "Float:fromTwo", "Actor:fromFour"]
    assert len(found) == avf.MAX_VERSION + 1


def test_an_early_return_inside_nested_gates_ends_the_reading():
    # BW1's CBackgroundActor: groundType from v2, castShadowsFlag from v3
    found = reads(archive(
        "  if (g_CXClassVersion < 2) {", "    if (g_CXClassVersion < 3) {", "      return;", "    }", "  }",
        "  else {", field("Integer", "groundType", "    "),
        "    if (g_CXClassVersion < 3) {", "      return;", "    }", "  }",
        field("Integer", "castShadowsFlag")))
    assert found[1] == []
    assert found[2] == ["Integer:groundType"]
    assert found[3] == ["Integer:groundType", "Integer:castShadowsFlag"]


def test_only_the_reading_path_counts():
    found = reads(archive(
        "  if (g_ActorReadingMode == 1) {", field("Integer", "read", "    "), "  }",
        "  else {", field("Integer", "written", "    "), "  }",
        "  if (g_ActorReadingMode != 1) {", field("Integer", "alsoWritten", "    "), "  }"))
    assert found[0] == ["Integer:read"]


def test_a_copy_of_the_version_gates_like_the_version():
    found = reads(archive(
        "  iVar2 = g_CXClassVersion;",
        "  if (10 < iVar2) {", field("Vector", "carry pos", "    "), "  }"))
    assert found[10] == []
    assert found[11] == ["Vector:carry pos"]


def test_and_or_and_equality_tests_are_evaluated():
    found = reads(archive(
        "  if ((7 < g_CXClassVersion) && (g_CXClassVersion < 0xc)) {", field("Integer", "between", "    "), "  }",
        "  if ((g_CXClassVersion == 5) || (g_CXClassVersion >= 0x13)) {", field("Integer", "either", "    "), "  }",
        "  if (g_CXClassVersion != 0xb) {", "    return;", "  }",
        field("Integer", "onlyEleven")))
    assert found[5] == ["Integer:either"]
    assert found[8] == ["Integer:between"]
    assert found[11] == ["Integer:between", "Integer:onlyEleven"]
    assert found[19] == ["Integer:either"]


def test_a_test_it_cannot_evaluate_runs_both_branches_and_never_returns():
    found = reads(archive(
        "  if (0 < local_20) {", field("Integer", "then", "    "), "    return;", "  }",
        "  else {", field("Integer", "other", "    "), "  }",
        "  if ((g_CXClassVersion < 3) && (local_8 == 0)) {", field("Integer", "unknownAnd", "    "), "  }",
        "  if ((g_CXClassVersion < 3) || (local_8 == 0)) {", field("Integer", "unknownOr", "    "), "  }",
        "  if (local_8 < local_9) {", field("Integer", "twoLocals", "    "), "  }",
        "  if (isReady(this_ptr)) {", field("Integer", "call", "    "), "  }",
        field("Integer", "after")))
    assert found[0] == ["Integer:then", "Integer:other", "Integer:unknownAnd", "Integer:unknownOr",
                        "Integer:twoLocals", "Integer:call", "Integer:after"]
    assert found[5] == ["Integer:then", "Integer:other", "Integer:unknownOr", "Integer:twoLocals",
                        "Integer:call", "Integer:after"]


def test_a_number_on_the_left_compares_the_other_way():
    found = reads(archive("  if (3 <= g_CXClassVersion) {", field("Integer", "fromThree", "    "), "  }"))
    assert found[2] == []
    assert found[3] == ["Integer:fromThree"]


def test_loops_and_switches_read_their_body_once():
    found = reads(archive(
        "  do {", field("Integer", "carry hand", "    "), "    local_14 = local_14 + 1;",
        "  } while (local_14 < 2);",
        "  while (local_8 != 0) {", field("Integer", "inWhile", "    "), "  }",
        "  for (i = 0; i < 3; i = i + 1) {", field("Integer", "inFor", "    "), "  }",
        "  switch(local_8) {", "  case 1:", field("Integer", "inSwitch", "    "), "    break;", "  }"))
    assert found[0] == ["Integer:carry hand", "Integer:inWhile", "Integer:inFor", "Integer:inSwitch"]


def test_raw_reads_and_strings_with_quotes_are_kept_in_order():
    found = reads(archive(
        '  _fscanf(g_ActorDataFile," \\"%[^\\"]\\"\\n",pcVar8);',
        "  c = ';';",
        '  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->s,"quoted \\"name\\"");',
        "  *(int *)this_ptr = 0;"))
    assert found[0] == ['Raw: \\"%[^\\"]\\"\\n', 'String:quoted \\"name\\"']


def test_an_unterminated_body_ends_at_its_end():
    found = avf.reads_by_version("{\n" + field("Integer", "only") + "\n", {"v"})
    assert found[0] == ["Integer:only"]
    found = avf.reads_by_version("{\n" + field("Integer", "last")[:-1], {"v"})
    assert found[0] == ["Integer:last"]


def test_a_string_in_a_test_doesnt_end_it():
    found = reads(archive('  if (_stricmp(name,")") == 0) {', field("Integer", "named", "    "), "  }"))
    assert found[0] == ["Integer:named"]


def test_a_statement_ends_at_a_closing_brace_without_a_semicolon():
    found = reads("{\n  if (g_CXClassVersion < 2) {\n    goto LAB_1\n  }\n" + field("Integer", "after") + "\n}\n")
    assert found[0] == ["Integer:after"]


def test_wrapping_parentheses_are_stripped_but_not_two_groups():
    assert avf.strip_parens("((a < 1))") == "a < 1"
    assert avf.strip_parens("(a) && (b)") == "(a) && (b)"


def write_builds(root):
    # CA: the same everywhere. CB: further along in bw1 and bw3 (linear). CC: a description renamed.
    # CD: bw1 and bw3 read different kinds at v2 (fork). CE: registered with no archive of its own.
    # CF: archived only, in one build, under an unnamed version global.
    put_source(root, "nocedit.exe", "core/a.cpp", "staticInit_FUN_00001000.cpp",
               register("CA", 1) + register("CB", 1) + register("CC", 2) + register("CD", 1) + register("CE", 1))
    put_source(root, "bw1.exe", "core/a.cpp", "staticInit_FUN_00002000.cpp",
               register("CA", 1) + register("CB", 2) + register("CC", 2) + register("CD", 2)
               + register("CF", "0x2", "g_INT_005fc4bc"))
    put_source(root, "bw3.exe", "core/a.cpp", "staticInit_FUN_00003000.cpp",
               register("CA", 1) + register("CB", 2) + register("CC", 2) + register("CD", 2))
    plain = archive(field("Integer", "a"))
    grown = archive(field("Integer", "a"), "  if (1 < g_CBClassVersion) {", field("Float", "b", "    "), "  }")
    for program in ("nocedit.exe", "bw1.exe", "bw3.exe"):
        put_source(root, program, "core/a.cpp", "CA_archive_FUN_00000010.cpp", plain)
        put_source(root, program, "core/a.cpp", "CB_archive_FUN_00000020.cpp",
                   plain if program == "nocedit.exe" else grown)
        put_source(root, program, "core/a.cpp", "CC_archive_FUN_00000030.cpp",
                   archive(field("Integer", "gunDrawn" if program == "bw3.exe" else "gunsDrawn")))
    put_source(root, "nocedit.exe", "core/a.cpp", "CD_archive_FUN_00000040.cpp", plain)
    for program, kind in (("bw1.exe", "Float"), ("bw3.exe", "Actor")):
        put_source(root, program, "core/a.cpp", "CD_archive_FUN_00000040.cpp",
                   archive(field("Integer", "a"), "  if (1 < g_CDClassVersion) {", field(kind, "b", "    "), "  }"))
    put_source(root, "bw1.exe", "core/f.cpp", "CF_archive_FUN_00000060.cpp",
               archive("  if (g_INT_005fc4bc < 2) {", "    return;", "  }", field("Integer", "f")))
    # Neither of these is read: a hand-kept copy, and a file that isn't source.
    put_source(root, "bw3.exe", "core/a.cpp", "CA_archive_FUN_00000010.keep.cpp", archive(field("Float", "kept")))
    put_source(root, "bw3.exe", "core/a.cpp", "CA_archive_FUN_00000010.json", "{}")
    return {"nocedit": "nocedit.exe", "bw1": "bw1.exe", "bw3": "bw3.exe"}


def test_each_class_is_classified_by_its_builds_histories(tmp_path):
    rows = {r["class"]: r for r in avf.scan(str(tmp_path), write_builds(tmp_path))}
    assert {c: r["kind"] for c, r in rows.items()} == {
        "CA": "same", "CB": "linear", "CC": "renamed", "CD": "fork", "CE": "no-archive", "CF": "same"}
    assert rows["CD"]["fork"] == 2
    assert rows["CC"]["fork"] is None and rows["CC"]["fork_by_description"] == 0
    assert rows["CB"]["versions"] == {"nocedit": 1, "bw1": 2, "bw3": 2}
    assert rows["CB"]["steps"]["bw1"] == {"0": ["Integer:a"], "2": ["Integer:a", "Float:b"]}
    assert rows["CF"]["steps"] == {"bw1": {"0": [], "2": ["Integer:f"]}}
    assert rows["CA"]["steps"]["bw3"] == {"0": ["Integer:a"]}
    assert rows["CA"]["versions"]["bw3"] == 1
    assert all(not r["reads_up_to"] for r in rows.values())


def test_a_build_that_reads_versions_past_its_own_can_fork_there(tmp_path):
    # BW2's CShadow: saved at v1, but its archive still reads v2, differently from bw1's
    put_source(tmp_path, "bw1.exe", "core/s.cpp", "staticInit_FUN_00001000.cpp", register("CS", 2))
    put_source(tmp_path, "blairwitch2.exe", "core/s.cpp", "staticInit_FUN_00002000.cpp", register("CS", 1))
    put_source(tmp_path, "bw1.exe", "core/s.cpp", "CS_archive_FUN_00000010.cpp", archive(
        "  if (1 < g_CSClassVersion) {", field("Integer", "lightUpEyes", "    "), field("Integer", "scared", "    "),
        "  }"))
    put_source(tmp_path, "blairwitch2.exe", "core/s.cpp", "CS_archive_FUN_00000010.cpp", archive(
        "  if (1 < g_CSClassVersion) {", field("Integer", "lightUpEyes", "    "), "  }"))
    [row] = avf.scan(str(tmp_path), {"bw1": "bw1.exe", "bw2": "blairwitch2.exe"})
    assert row["reads_up_to"] == {"bw2": 2}
    assert (row["kind"], row["fork"]) == ("fork", 2)


def test_a_class_archived_but_never_registered_reads_its_conventional_globals(tmp_path):
    put_source(tmp_path, "bw1.exe", "core/g.cpp", "CG_archive_FUN_00000070.cpp",
               archive("  if (1 < g_CGVersion) {", field("Integer", "g", "    "), "  }"))
    [row] = avf.scan(str(tmp_path), {"bw1": "bw1.exe"})
    assert row["versions"] == {}
    assert row["reads_up_to"] == {"bw1": 2}
    assert row["steps"]["bw1"]["2"] == ["Integer:g"]


def test_the_summary_counts_kinds_and_lists_forks_and_renames(tmp_path):
    rows = avf.scan(str(tmp_path), write_builds(tmp_path))
    assert avf.summary_lines(rows) == [
        "6 classes: 2 same, 1 linear, 1 renamed, 1 fork, 1 no-archive",
        "  fork     CD                       at v2  nocedit=1 bw1=2 bw3=2",
        "  renamed  CC                       at v0  nocedit=2 bw1=2 bw3=2",
    ]


def test_a_class_history_shows_what_each_version_adds():
    row = {"class": "CX", "kind": "fork", "versions": {"bw1": 2},
           "steps": {"bw1": {"0": [], "1": ["Integer:a"], "2": ["Float:b"], "3": ["Float:b"]}}}
    assert avf.class_lines(row) == ["CX: fork bw1=2", "  bw1 v0: +-", "  bw1 v1: +Integer:a",
                                    "  bw1 v2: Float:b", "  bw1 v3: +-"]


def test_the_command_prints_the_summary_one_class_or_writes_json(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(avf, "BUILDS", write_builds(tmp_path))
    out_json = tmp_path / "rows.json"
    assert avf.main(["--annotations", str(tmp_path), "--json", str(out_json)]) == 0
    assert capsys.readouterr().out.startswith("6 classes: ")
    assert [r["class"] for r in json.loads(out_json.read_text(encoding = "utf-8"))] == [
        "CA", "CB", "CC", "CD", "CE", "CF"]
    assert avf.main(["--annotations", str(tmp_path), "--class", "CD"]) == 0
    assert capsys.readouterr().out.splitlines()[0] == "CD: fork nocedit=1 bw1=2 bw3=2"
    assert avf.main(["--annotations", str(tmp_path), "--class", "CZ"]) == 1
    assert capsys.readouterr().out == "CZ: no build registers or archives it\n"


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["archive_version_forks.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "archive_version_forks.py"), run_name = "__main__")
    assert exit_info.value.code == 0
