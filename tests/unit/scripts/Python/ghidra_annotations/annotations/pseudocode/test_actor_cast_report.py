# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import actor_cast_report as acr


CAST = "core_actor_cpp_castToClassHash_FUN_0040d890"
CREATE = "core_actor_cpp_createActorByName_FUN_0040d540"


def write(path, text):
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(text)
    return path


def pseudocode_tree(tmp_path):
    """Headers for CBat -> CEnemy -> CDemonActor, CGun -> CDemonActor and a vtable, the
    ClassInfo globals, and src/ for the functions."""
    classes = tmp_path / "pseudocode" / "include" / "types" / "classes"
    write(classes / "CBat.h", "typedef struct CBat {\n    CEnemy base; // 0x0\n} CBat;\n")
    write(classes / "CEnemy.h", "typedef struct CEnemy {\n    CDemonActor base; // 0x0\n} CEnemy;\n")
    write(classes / "CGun.h", "typedef struct CGun {\n    CDemonActor base; // 0x0\n} CGun;\n")
    write(classes / "CDemonActor.h", "typedef struct CDemonActor {\n    int x; // 0x0\n} CDemonActor;\n")
    write(classes / "CBat_vtable.h", "typedef struct CBat_vtable {\n    CFoo base; // 0x0\n} CBat_vtable;\n")
    write(classes / "anon.h", "typedef int CNothing;\n")
    write(tmp_path / "pseudocode" / "include" / "globals" / "globals_400000.h",
          "extern CDemonActorType g_CBatClassInfo;\nextern CDemonActorType g_CGunClassInfo;\nextern int g_x;\n")
    return tmp_path / "pseudocode" / "src"


def test_the_hierarchy_comes_from_each_class_headers_base_member(tmp_path):
    pseudocode_tree(tmp_path)
    hierarchy = acr._build_class_hierarchy(str(tmp_path / "pseudocode" / "include" / "types" / "classes"))
    assert hierarchy == {"CBat": "CEnemy", "CEnemy": "CDemonActor", "CGun": "CDemonActor"}


@pytest.mark.parametrize("cast, expected, ok", [
    ("CBat", "CBat", True), ("CBat", "CEnemy", True),     # the class itself, or a downcast
    ("CDemonActor", "CBat", False), ("CGun", "CBat", False),
])
def test_a_cast_must_be_the_class_or_below_it(cast, expected, ok):
    hierarchy = {"CBat": "CEnemy", "CEnemy": "CDemonActor", "CGun": "CDemonActor"}
    assert acr._is_compatible_type(cast, expected, hierarchy) is ok


def test_an_ancestor_chain_stops_at_a_cycle():
    assert acr._get_ancestor_chain("CA", {"CA": "CB", "CB": "CA"}) == ["CA", "CB"]


@pytest.mark.parametrize("line, found", [
    (f"  p = {CAST}(a, h);", True),
    ("  p = core_actor_cpp_castToClassHashX_FUN_0040d890(a, h);", False),
    ("  p = core_script_cpp_getActorType_FUN_00400000(a);", False),
    ("  p = xcastToClassHash_FUN_0040d890(a);", False),
])
def test_a_call_is_found_by_name_whatever_its_address(line, found):
    assert (acr._call_re("castToClassHash").search(line) is not None) is found


GAP = ["  ;"] * 5          # keeps each case out of its neighbours' ClassInfo windows


def test_calls_are_matched_to_their_classinfo_and_their_cast(tmp_path):
    src = pseudocode_tree(tmp_path)
    code = "\n".join([
        f"CBat * __cdecl {CAST}(CDemonActor *a, int h)",                                 # 1: its own signature
        "{",
        f"  // {CAST}(a, g_CBatClassInfo.name_hash);",                                   # 3: a comment
        "  CBat *bat;",
        "  CGun *gun;  /* g_CGunClassInfo */",
        f"  bat = (CBat *){CAST}(a, g_CBatClassInfo.name_hash);",                        # 6: the nearer ClassInfo
        *GAP,
        f"  gun = {CAST}(a, g_CBatClassInfo.name_hash);",                                # 12: declared CGun
        *GAP,
        "  x = (CBat *)b;",
        f"  y = {CAST}(a, g_CGunClassInfo.name_hash);",                                  # 19: y has no class type
        *GAP,
        "  pCVar1 = (CDemonActor *)",
        f"      {CAST}(a, g_CGunClassInfo.name_hash);",                                  # 26: split over lines
        *GAP,
        f"  if ({CAST}(a, h) == (CDemonActor *)0x0) {{",                                 # 32: no ClassInfo near
        *GAP,
        f"  {CREATE}(\"CBat\", 0);",                                                       # 38: by name
        *GAP,
        f"  {CREATE}(name, 0);",                                                         # 44: name in a variable
    ])
    path = write(src / "core" / "actor.cpp" / "castToClassHash_FUN_0040d890.cpp", code)
    calls = acr._find_resolution_calls(str(path), {"g_CBatClassInfo": "CBat", "g_CGunClassInfo": "CGun"})
    got = [(c["line_no"], c["function"], c["expected_class"], c["cast_type"]) for c in calls]
    assert got == [
        (6, "castToClassHash", "CBat", "CBat"), (12, "castToClassHash", "CBat", "CGun"),
        (19, "castToClassHash", "CGun", "(unknown)"), (26, "castToClassHash", "CGun", "CDemonActor"),
        (32, "castToClassHash", None, None),
        (38, "createActorByName", "CBat", "(unknown)"), (44, "createActorByName", None, None),
    ]
    assert calls[4]["window"].splitlines()[0] == "    30:   ;"


def test_a_call_on_a_line_of_its_own_is_found_in_the_functions_own_file(tmp_path):
    src = pseudocode_tree(tmp_path)
    path = write(src / "core" / "actor.cpp" / "castToClassHash_FUN_0040d890.cpp",
                 f"  pCVar1 = (CBat *)\n      {CAST}(a, g_CBatClassInfo.name_hash);\n")
    calls = acr._find_resolution_calls(str(path), {"g_CBatClassInfo": "CBat"})
    assert [(c["line_no"], c["cast_type"]) for c in calls] == [(2, "CBat")]


def test_the_report_lists_mismatches_and_unresolved_calls(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(acr, "log_info", logged.append)
    src = pseudocode_tree(tmp_path)
    unit = src / "core" / "bat.cpp"
    write(unit / "CBat_think_FUN_00401000.cpp",
          f"  CDemonActor *p = (CDemonActor *){CAST}(a, g_CBatClassInfo.name_hash);\n"
          f"  q = (CGun *){CAST}(a, g_CBatClassInfo.name_hash);\n")
    write(unit / "CBat_find_FUN_00401300.cpp", f"  r = {CAST}(a, h);\n")
    # The keep stands in for its .cpp
    write(unit / "CBat_move_FUN_00401100.cpp", f"  q = (CGun *){CAST}(a, g_CBatClassInfo.name_hash);\n")
    write(unit / "CBat_move_FUN_00401100.keep.cpp", f"  q = (CBat *){CAST}(a, g_CBatClassInfo.name_hash);\n")
    write(unit / "CBat_eat_FUN_00401200.cpp", f"  q = {CAST}(a, g_CBatClassInfo.name_hash);\n")
    reports = tmp_path / "reports"
    reports.mkdir()
    acr.generate_actor_cast_report(str(src), str(reports))
    text = (reports / "actor_cast_mismatches.txt").read_text()
    assert "Total resolution calls found:  4" in text and "Type mismatches found:         2" in text
    assert "    castToClassHash                4 calls" in text
    assert "    CBat                      2 mismatches" in text
    assert "    CDemonActor               1 times (should be: CBat)" in text
    assert "    Actual cast:    CGun                 (CGun -> CDemonActor)" in text
    assert "UNRESOLVED CALLS" in text and "  Line 1: castToClassHash()\n    1:   r = " in text
    assert logged[-1].startswith("Actor cast report: 4 calls, 2 mismatches, 1 unresolved -> ")


def test_a_report_with_no_calls_says_so(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(acr, "log_info", logged.append)
    src = pseudocode_tree(tmp_path)
    write(src / "core" / "a.cpp" / "f_FUN_00401000.cpp", "  return;\n")
    acr.generate_actor_cast_report(str(src), str(tmp_path))
    text = (tmp_path / "actor_cast_mismatches.txt").read_text()
    assert "Total resolution calls found:  0" in text and "DETAILED FINDINGS" not in text
    assert logged[-1].startswith("Actor cast report: 0 calls, 0 mismatches -> ")
