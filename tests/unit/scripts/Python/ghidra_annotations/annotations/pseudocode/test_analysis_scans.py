# Imports
import json
import os
import re

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import analysis as an


def fn(name, vfile = "core/a.cpp", suspects = (), address = "00401000", signature = None, **extra):
    suspects = list(suspects)
    data = {"function": {"name": name, "address": address, "convention": "__cdecl",
                         "signature": signature if signature is not None else f"void __cdecl {name}(void)"},
            "_virtual_file": vfile, "suspects": suspects,
            "complexity": {"suspect_count": len(suspects), "pseudocode_lines": 10, "complexity_score": 1}}
    data.update(extra)
    return data


def suspect(stype, match):
    return {"type": stype, "match": match}


def report(folder, name):
    """A report the generator wrote into `folder`; `logs` comes from conftest.py."""
    return (folder / name).read_text(encoding = "utf-8")


def write(path, text = ""):
    os.makedirs(os.path.dirname(str(path)), exist_ok = True)
    with open(str(path), "w", encoding = "utf-8") as f:
        f.write(text)


# --- names -----------------------------------------------------------------------------

@pytest.mark.parametrize("name, vfile, expected", [
    ("core_a.cpp_CFoo_run_FUN_00401000", "core/a.cpp", "CFoo_run"),
    ("core_a.cpp_FUN_00401000", "core/a.cpp", "FUN_00401000"),
    ("core_a.cpp__FUN_00401000", "core/a.cpp", "FUN_00401000"),
    ("other_b.cpp_run_FUN_00401000", "core/a.cpp", "other_b.cpp_run"),
    ("run_FUN_00401000", "", "run"),
    ("plainName", "core/a.cpp", "plainName"),
])
def test_a_display_name_drops_the_unit_and_address(name, vfile, expected):
    assert an._get_function_display_name({"function": {"name": name}, "_virtual_file": vfile}) == expected


@pytest.mark.parametrize("name, vfile, expected", [
    ("FUN_00401000", "", True),
    ("run_FUN_00401000", "", False),
    ("core_a.cpp_FUN_00401000", "core/a.cpp", True),
    ("core_a.cpp_FUN_zz", "core/a.cpp", False),
    ("core_a.cpp_CGabriella_FUN_004d4890", "core/a.cpp", True),
    ("core_a.cpp_SDamageInfo_FUN_004d4890", "core/a.cpp", True),
    ("core_a.cpp_CGabriella_process_FUN_004d4890", "core/a.cpp", False),
    # A named export that starts with a capital is not a bare class name: all 37
    # of tridx7's APIDLL functions were reported unnamed
    ("dll_dx7.cpp_APIDLLkill_FUN_10002460", "dll/dx7.cpp", False),
    ("other_b.cpp_CFoo_FUN_00401000", "core/a.cpp", False),
])
def test_a_function_is_unnamed_while_ghidra_named_it(name, vfile, expected):
    assert an._is_unnamed_function({"function": {"name": name}, "_virtual_file": vfile}) is expected


def test_callers_count_each_calling_function_once():
    functions = [{"function_calls": [{"addr": "a"}, {"addr": "a"}, {"addr": "b"}, {}]}, {"function_calls": [{"addr": "a"}]}, {}]
    assert dict(an._build_caller_counts(functions)) == {"a": 2, "b": 1}


# --- annotation quality ---------------------------------------------------------------------

def frame(*variables):
    return {"variables": [dict(zip(("name", "type", "is_param"), v)) for v in variables]}


def quality_functions():
    unnamed = [fn("core_a.cpp_FUN_00401000", function_calls = [{"addr": "00402000"}]),
               fn("core_a.cpp_FUN_00402000", address = "00402000"),
               fn("core_b.cpp_FUN_00403000", vfile = "core/b.cpp", address = "00403000",
                  function_calls = [{"addr": "00402000"}])]
    return unnamed + [
        fn("core_a.cpp_params_FUN_00404000", address = "00404000",
           stack_frame = frame(("param_1", "int", True), ("count", "int", True), ("param_2", "char *", True))),
        fn("core_a.cpp_only_FUN_00405000", address = "00405000", stack_frame = frame(("param_1", "undefined4", True))),
        fn("core_a.cpp_voidret_FUN_00406000", address = "00406000",
           suspects = [suspect("extra_output", "extraout_EAX"), suspect("extra_output", "extraout_ECX")]),
        fn("core_a.cpp_wide_FUN_00407000", address = "00407000", signature = "longlong __cdecl wide(void)",
           suspects = [suspect("extra_output", "extraout_EDX"), suspect("extra_output", "extraout_EAX_EAX")]),
        fn("core_a.cpp_eaxeax_FUN_00408000", address = "00408000", suspects = [suspect("extra_output", "extraout_EAX_EAX")]),
        fn("core_a.cpp_nothing_FUN_00409000", address = "00409000", signature = "int __cdecl nothing(void)",
           suspects = [suspect("extra_output", "extraout_EAX")]),
        fn("core_a.cpp_thiscall_FUN_0040a000", address = "0040a000", suspects = [suspect("register_param", "in_ECX")]),
        fn("core_a.cpp_fastcall_FUN_0040b000", address = "0040b000",
           suspects = [suspect("register_param", "in_ECX"), suspect("register_param", "in_EDX")]),
        fn("core_a.cpp_eax_FUN_0040c000", address = "0040c000", suspects = [suspect("register_param", "in_EAX")]),
        fn("core_a.cpp_unaff_FUN_0040d000", address = "0040d000", suspects = [suspect("unaffected_reg", "unaff_EBX"),
                                                                                suspect("stack_param", "in_stack_4")],
           stack_frame = frame(("uVar1", "undefined4", False), ("param_1", "undefined2", True), ("ok", "int", False))),
        fn("core_a.cpp_keep_FUN_0040e000", address = "0040e000", _cpp_path = "x/keep_FUN_0040e000.keep.cpp",
           suspects = [suspect("unaffected_reg", "unaff_ESI"), suspect("stack_param", "in_stack_8")],
           stack_frame = frame(("uVar1", "undefined4", False))),
        fn("core_a.cpp_mmx_FUN_0040f000", address = "0040f000", _cpp_path = "x/mmx_FUN_0040f000.mmx.cpp",
           suspects = [suspect("unaffected_reg", "unaff_EDI"), suspect("stack_param", "in_stack_c")],
           stack_frame = frame(("uVar1", "undefined1", False))),
        fn("core_a.cpp_mmxtag_FUN_00410000", address = "00410000",
           suspects = [suspect("register_param", "in_EAX"), suspect("mmx_assembly", "MMX")]),
        fn("core_a.cpp_byval_FUN_00411000", address = "00411000",
           suspects = [suspect("unaffected_reg", "unaff_EBP"), suspect("stack_param", "in_stack_10"),
                       suspect("byvalue_struct_passing", "REP MOVSD")],
           stack_frame = frame(("local", "undefined8", False))),
        # Renamed at a new address without its suffix following
        fn("core_a.cpp_moved_FUN_00412000", address = "00499000"),
        fn("core_a.cpp_dup_FUN_00413000", address = "00413000", signature = "void dup(" + "int a, " * 10 + "int z)"),
        fn("core_a.cpp_dup_FUN_00414000", address = "00414000", signature = "no parens"),
        fn("crt_x.c_FUN_00415000", vfile = "crt/x.c", address = "00415000"),
    ]


def test_the_quality_report_lists_names_params_and_type_issues(tmp_path):
    text = an.generate_annotation_quality_report(quality_functions(), str(tmp_path))
    assert "  Total functions analyzed:          20" in text and "Unnamed functions (FUN_):          3 (15.0%)" in text
    assert "  Functions with type issues:        9 (45.0%)" in text and "    Missing register params:           4" in text
    assert "  core/a.cpp (2 unnamed)\n    0x00402000  __cdecl       2 callers\n    0x00401000" in text
    assert text.index("core/a.cpp (2 unnamed)") < text.index("core/b.cpp (1 unnamed)")
    assert "    Unnamed: param_1 (int), param_2 (char *)\n    Named:   count (int)" in text
    assert "  only\n    Address: 0x00405000  File: core/a.cpp\n    Unnamed: param_1 (undefined4)\n\n" in text
    assert "    Params:  param_1 (undefined4)\n    Suggested: Resolve" in text
    assert "    Evidence: extraout_EAX\n    Signature: void __cdecl core_a.cpp_voidret_FUN_00406000(void)\n" \
           "    Suggested: Likely returns int or void*" in text
    assert "Likely returns longlong or void*" in text and "    Evidence: extraout_EDX\n" in text
    assert "Likely __thiscall (ECX = this pointer)" in text and "Likely __fastcall (ECX, EDX params)" in text
    assert text.count("Likely register-based calling convention") == 2
    assert "    Params:  param_1 (undefined2)\n    Locals:  uVar1 (undefined4)" in text
    assert "  Excluded (.keep / MMX / by-value):   3 functions" in text
    assert "Wrong calling convention - .keep overrides (1)" in text and "Undefined types - by-value struct passing (1)" in text
    assert "Wrong calling convention - MMX functions (1)" in text and "Unresolved stack params - MMX functions (1)" in text
    assert "    FUN_ says: 0x00412000   actual: 0x00499000   file: core/a.cpp" in text
    # The unnamed functions used to form a "duplicate" group named after their unit
    assert "DUPLICATE FUNCTION NAMES (1 groups)" in text and "    0x00414000  (?)" in text
    assert "  core_a.cpp  (" not in text
    assert "    0x00413000  (" + ("int a, " * 10)[:57] + "...)" in text and "crt_x" not in text
    assert report(tmp_path, "annotation_quality.txt") == text


def test_a_clean_program_has_nothing_to_annotate(tmp_path):
    text = an.generate_annotation_quality_report([fn("core_a.cpp_run_FUN_00401000"), fn("bare", address = "")], str(tmp_path))
    assert text.count("  (none)") == 8 and "EXCLUDED" not in text
    assert "  No mismatches found." in text and "  No duplicate names found." in text


def test_an_empty_program_has_no_percentages(tmp_path):
    assert "Total functions analyzed:          0" in an.generate_annotation_quality_report([], str(tmp_path))


@pytest.mark.parametrize("excluded, shown, hidden", [
    ("unaffected_reg", "Wrong calling convention - .keep", "Unresolved stack params - .keep"),
    ("stack_param", "Unresolved stack params - .keep", "Undefined types - .keep"),
])
def test_only_the_override_kinds_present_are_listed(tmp_path, excluded, shown, hidden):
    keep = fn("core_a.cpp_k_FUN_00401000", _cpp_path = "k.keep.cpp", suspects = [suspect(excluded, "x")])
    text = an.generate_annotation_quality_report([keep], str(tmp_path))
    assert shown in text and hidden not in text


# --- wrong global resolution -----------------------------------------------------------------

def function_files(src, name, globals_list, code, ext = ".cpp", json_text = None):
    unit = os.path.join(src, "core", "a.cpp")
    write(os.path.join(unit, name + ".json"),
          json_text if json_text is not None else json.dumps({"function": {"name": "core_a.cpp_" + name},
                                                              "globals": [{"name": g} for g in globals_list]}))
    if code is not None:
        write(os.path.join(unit, name + ext), code)


def test_globals_from_the_json_drop_fields_and_indexes(tmp_path):
    write(tmp_path / "f.json", json.dumps({"globals": [{"name": "g_A.x"}, {"name": "g_B[3]"}, {"name": ""}, {}]}))
    write(tmp_path / "bad.json", "{")
    assert an._extract_json_globals(str(tmp_path / "f.json")) == {"g_A", "g_B"}
    assert an._extract_json_globals(str(tmp_path / "bad.json")) == set()
    assert an._extract_json_globals(str(tmp_path / "none.json")) == set()


def test_globals_in_the_code_skip_comments_and_keep_their_lines(tmp_path):
    write(tmp_path / "f.cpp", "// g_Header\n#include g_Inc\nx = g_A.y + DAT_00401000;\ny = g_A;\n")
    assert an._extract_cpp_globals(str(tmp_path / "f.cpp")) == {"g_A": [3, 4], "DAT_00401000": [3]}
    assert an._extract_cpp_globals(str(tmp_path / "none.cpp")) == {}


def test_globals_the_code_uses_but_the_references_lack_are_suspicious(tmp_path):
    src = str(tmp_path / "src")
    many = "".join(f"x = DAT_{i:08x};\n" for i in range(22))
    function_files(src, "raw", ["g_Known"], "a = g_Known;\nb = g_Shifted;\n" * 6 + "c = FLOAT_00405000;\n")
    function_files(src, "kept", [], many + "d = g_Shifted;\n", ".keep.cpp")
    function_files(src, "keptc", [], "e = g_C;\n", ".keep.c")
    function_files(src, "plainc", ["g_C"], "e = g_C;\n", ".c")
    function_files(src, "noglobals", [], "return 0;\n")
    function_files(src, "nocode", [], None)
    function_files(src, "f.mmx", [], "f = g_M;\n", ".cpp")
    function_files(src, "broken", [], "g = g_B;\n", json_text = "{")
    an.generate_wrong_global_report(src, str(tmp_path))
    text = report(tmp_path, "wrong_global_resolution.txt")
    assert "  Functions checked: 6" in text and "  Functions with suspicious globals: 4" in text
    assert "  Total suspicious global references: 26" in text and "    g_Shifted" in text
    assert "  .keep files with issues: 2 (these need manual review)" in text and "  Raw .cpp files with issues: 2" in text
    assert text.index("core_a.cpp_kept  [.keep]") < text.index("core_a.cpp_keptc  [.keep]") < text.index("[.cpp]")
    assert "    Used at lines: 2, 4, 6, 8, 10, ...\n" in text and "broken  [.cpp]" in text and "g_M" not in text
    assert "FLOAT_" not in text and "    Used at lines: 1\n" in text


def test_no_suspicious_globals_is_said(tmp_path):
    src = str(tmp_path / "src")
    function_files(src, "raw", ["g_Known"], "a = g_Known;\n")
    an.generate_wrong_global_report(src, str(tmp_path))
    assert "  No suspicious global resolutions detected." in report(tmp_path, "wrong_global_resolution.txt")


@pytest.mark.parametrize("ext, shown, hidden", [
    (".keep.cpp", ".keep files with issues: 1", "Raw .cpp files"),
    (".cpp", "Raw .cpp files with issues: 1", ".keep files with issues"),
])
def test_a_lone_issue_lists_only_its_own_kind(tmp_path, ext, shown, hidden):
    src = str(tmp_path / "src")
    function_files(src, "f", [], "d = g_Shifted;\n", ext)
    an.generate_wrong_global_report(src, str(tmp_path))
    text = report(tmp_path, "wrong_global_resolution.txt")
    assert shown in text and hidden not in text


# --- vtable union members -------------------------------------------------------------------

CLASSES = {
    "CDemonActor": None, "CCharacter": "CDemonActor", "CHero": "CCharacter", "CEnemy": "CCharacter",
    "CWeapon": "CDemonActor", "CItem": None,
}
VTABLES = {
    "CDemonActor_vtable.h": [("process", 0x0)],
    "CCharacter_vtable.h": [("walk", 0x0), ("getMuzzle_c", 0x8)],
    "CWeapon_vtable.h": [("getMuzzlePoint", 0x8), ("fire", 0x0)],
    "CHero_vtable.h": [("heroThing", 0x0)],
}


def vtable_tree(tmp_path, sources):
    classes = tmp_path / "pseudocode" / "include" / "types" / "classes"
    for name, base in CLASSES.items():
        member = f"    {base} base; // 0x0\n" if base else "    int x; // 0x0\n"
        write(classes / (name + ".h"), f"typedef struct {name} {{\n{member}}} {name};\n")
    write(classes / "SFoo.h", "typedef struct SFoo {\n    CDemonActor base; // 0x0\n} SFoo;\n")
    write(classes / "CItem_full_vtable.h", "typedef struct CItem_full_vtable {\n    CDemonActor base; // 0x0\n};\n")
    for name, methods in VTABLES.items():
        write(classes / name, "".join(f"    F_{m}* {m}; // 0x{off:x}\n" for m, off in methods) + "  junk\n")
    src = tmp_path / "pseudocode" / "src"
    for path, text in sources.items():
        write(src / path, text)
    return str(src)


VTABLE_SOURCE = """\
void __cdecl core_w_cpp_f_FUN_1(CWeapon *this_ptr)
{
  CHero *hero;
  CEnemy *enemy = 0;
  CItem *item;
  CCharacter *ch;
  (*((this_ptr->base).vtable._uc)->walk)(this_ptr);
  (*(((hero->base).base.vtable._uw)->_uw).getMuzzlePoint)(hero);
  (*(((enemy->base).base.vtable._uh)->_uh).heroThing)(enemy);
  (*(((enemy->base).base.vtable._uw)->_uw).fire)(enemy);
  use(hero.vtable._uw, 1);
  (*((item->base).vtable._uc)->walk)(item);
  (*((ch->base).vtable._uc)->walk)(ch);
  (*((stranger->base).vtable._uc)->walk)(stranger);
  (*((this_ptr->base).vtable._ub)->process)(this_ptr);
  (*(base.vtable._uc)->walk)(x);
  this_ptr->base.vtable._uc = &g_Table;
  p = this_ptr->base.vtable._uc;
}
"""


def test_wrong_union_members_name_the_member_and_method_to_use(tmp_path, logs):
    no_this = "void h(void)\n{\n  CWeapon *w;\n  (*((w->base).vtable._uc)->walk)(w);\n}\n"
    src = vtable_tree(tmp_path, {"core/w.cpp/f_FUN_1.cpp": VTABLE_SOURCE, "core/w.cpp/g_FUN_2.cpp": "int x;\n",
                                 "core/w.cpp/h_FUN_3.cpp": no_this})
    an.generate_vtable_union_mismatch_report(src, str(tmp_path))
    text = report(tmp_path, "vtable_union_mismatches.txt")
    # Only the classes with a base member: CDemonActor and CItem are roots
    assert logs[0] == "Vtable union report: 4 classes in hierarchy"
    assert "  Total mismatches found: 6" in text and "    h_FUN_3" in text
    assert "    f_FUN_1" in text and "this_ptr on CWeapon          used _uc, need _uw  walk -> fire" in text
    # A hero's slot at 0xec+8 is CCharacter's, not CHero's: _uh starts at 0x154
    assert "hero on CHero            used _uw, need _uc  getMuzzlePoint -> getMuzzle_c" in text
    assert "enemy on CEnemy           used _uh, need _ue  heroThing -> ?" in text
    assert "enemy on CEnemy           used _uw, need _uc  fire -> walk" in text
    assert "hero on CHero            used _uw, need _uh\n" in text
    assert "  0xf4      getMuzzle_c                     getMuzzlePoint" in text
    assert "  0x154     -                               heroThing" in text
    assert "    _uc (CCharacter_vtable): 2" in text and "    CHero                     2  (CHero -> CCharacter -> CDemonActor)" in text


def test_no_wrong_union_members_is_said(tmp_path, logs):
    src = vtable_tree(tmp_path, {"core/w.cpp/f.cpp": "void f(CCharacter *this_ptr)\n{\n  (this_ptr->base).vtable._uc;\n}\n"})
    an.generate_vtable_union_mismatch_report(src, str(tmp_path))
    assert "  No mismatches detected." in report(tmp_path, "vtable_union_mismatches.txt")


def test_no_class_headers_skip_the_union_report(tmp_path, logs):
    an.generate_vtable_union_mismatch_report(str(tmp_path / "pseudocode" / "src"), str(tmp_path))
    assert logs == ["Skipping vtable union mismatch report: headers dir not found"]


# --- code caves -----------------------------------------------------------------------------------

@pytest.mark.parametrize("files, message", [
    (None, "Skipping code cave report: annotations dir not found"),
    ({}, "Skipping code cave report: %s not found"),
    ({"code_caves.json": "{"}, "Failed to load code_caves.json: "),
    ({"code_caves.json": "{}"}, "No code caves found in code_caves.json"),
])
def test_a_missing_or_empty_cave_file_writes_no_report(tmp_path, logs, files, message):
    for name, text in (files or {}).items():
        write(tmp_path / name, text)
    an.generate_code_cave_report(str(tmp_path) if files is not None else None, str(tmp_path))
    expected = message % (tmp_path / "code_caves.json") if "%s" in message else message
    assert logs[0].startswith(expected) and not (tmp_path / "code_cave_analysis.txt").exists()


def test_the_cave_report_lists_each_cave_and_its_allocations(tmp_path, logs):
    caves = {"caves": [
        {"name": "full", "start": "00402000", "total_size": 16, "free_offset": 16, "removed_functions": ["deadA"],
         "allocations": [{"name": "movsd_401000", "offset": 0, "size": 16, "used_by": ["f", "g"], "description": "copy"}]},
        {"name": "part", "start": "00401000", "total_size": 32, "free_offset": 8,
         "allocations": [{"name": "thunk", "offset": 0, "size": 8}]},
        {"name": "free", "start": "00403000", "total_size": 64},
    ]}
    write(tmp_path / "code_caves.json", json.dumps(caves))
    an.generate_code_cave_report(str(tmp_path), str(tmp_path))
    text = report(tmp_path, "code_cave_analysis.txt")
    assert "Total caves:        3" in text and "Total bytes:        112" in text and "Total free:         88" in text
    assert text.index("part") < text.index("full") < text.index("  free")
    assert "[FULL]" in text and "[8/32 used]" in text and "[FREE]" in text and "    removed: deadA" in text
    assert "      +0x0000   16 bytes  movsd_401000               f, g\n               copy" in text
    assert "    Free space: 24 bytes (offset 0x0008 - 0x0020)" in text and "(entirely free" in text
    assert logs[-1].endswith(" (3 caves)")


# --- MOVSD sites -----------------------------------------------------------------------------------

def asm(*insns):
    """A listing in the exporter's format: instruction, then '; address'."""
    lines = ["; header", "section .text", ""]
    for addr, text in insns:
        lines.append(f"    {text:<36}; {addr:08x}")
        lines.append("        ;   Label: x")
    lines.append("LAB_end:")
    return "\n".join(lines) + "\n"


MOVSD = "MOVSD ES:EDI,ESI"


def movsd_tree(tmp_path, caves = None):
    src = tmp_path / "pseudocode" / "src"
    unit = src / "core" / "m.cpp"
    # Two copies that borrow the MOV after them, and a small REP copy: all fixable,
    # the pseudocode has the bVar artifact
    write(unit / "fix.asm", asm((0x401000, "PUSH ESI"), (0x401001, MOVSD), (0x401002, MOVSD), (0x401003, MOVSD),
                                (0x401004, "MOV EAX,0x1"), (0x401009, MOVSD), (0x40100a, MOVSD), (0x40100b, MOVSD),
                                (0x40100c, "MOV EAX,0x1"), (0x401011, "MOV ECX,0x2"), (0x401016, "MOVSD.REP ES:EDI,ESI"),
                                (0x401018, "RET")))
    write(unit / "fix.cpp", "p = bVar1 * -4;\n")
    # The same shape with a .c and no artifact
    write(unit / "ok.asm", asm((0x402000, MOVSD), (0x402001, "MOV EAX,0x1"), (0x402006, MOVSD), (0x402007, "MOV EAX,0x1"),
                               (0x40200c, "RET")))
    write(unit / "ok.c", "clean\n")
    # No pseudocode at all
    write(unit / "bare.asm", asm((0x402100, MOVSD), (0x402101, "MOV EAX,0x1"), (0x402106, "RET")))
    # Hemmed in by a CALL and a RET, twice
    write(unit / "tight.asm", asm((0x403000, "CALL 0x00409000"), (0x403005, MOVSD), (0x403006, "RET"), (0x403007, MOVSD),
                                  (0x403008, "RET")))
    # The instruction before is in another range
    write(unit / "gapbefore.asm", asm((0x300000, "MOV EAX,0x1"), (0x406200, MOVSD), (0x406201, "RET")))
    # A jump lands on the copy itself, inside the patch range
    write(unit / "target.asm", asm((0x404000, "MOV EAX,EBX"), (0x404002, MOVSD), (0x404003, "MOV ECX,EDX"),
                                   (0x404005, "JMP 0x00404002")))
    # The instruction after is a jump target; so is the one before
    write(unit / "edges.asm", asm((0x405000, "MOV EAX,EBX"), (0x405002, MOVSD), (0x405003, "MOV ECX,EDX"),
                                  (0x405005, "JZ 0x00405003"), (0x405007, "JNZ 0x00405000")))
    # The next listed instruction is in another address range: a gap is not a size
    write(unit / "gap.asm", asm((0x406000, MOVSD), (0x500000, "MOV EAX,0x1")))
    # The last instruction has no next one to size it by
    write(unit / "last.asm", asm((0x406100, "PUSH EAX"), (0x406101, MOVSD), (0x406102, "MOV EAX,0x1")))
    write(unit / "patched.asm", asm((0x407000, MOVSD), (0x407001, "RET"), (0x407002, "MOVSD.REP ES:EDI,ESI")))
    # Pass-by-value: the copy lands on a SUB ESP'd stack through EDI = ESP
    write(unit / "byval.asm", asm((0x408000, "SUB ESP,0x10"), (0x408003, "SUB ESP,8"), (0x408006, "MOV EDI,ESP"),
                                  (0x408008, "MOV ECX,0x4"), (0x40800d, "MOVSD.REP ES:EDI,ESI")))
    # The nearest MOV ECX is the count
    write(unit / "repfix.asm", asm((0x408100, "MOV ECX,0x2"), (0x408105, "MOV ECX,3"), (0x40810a, "MOVSD.REP ES:EDI,ESI")))
    write(unit / "repfix.cpp", "q = bVar2 * -8;\n")
    write(unit / "repbig.asm", asm((0x408200, "MOV ECX,0x20"), (0x408205, "MOVSD.REP ES:EDI,ESI")))
    write(unit / "repdyn.asm", asm((0x408300, "MOV ECX,EAX"), (0x408302, "MOVSD.REP ES:EDI,ESI")))
    write(unit / "repok.asm", asm((0x409000, "MOV ECX,0x5"), (0x409005, "MOVSD.REP ES:EDI,ESI"),
                                  (0x409007, "MOV ECX,0x6"), (0x40900c, "MOVSD.REP ES:EDI,ESI")))
    write(unit / "short.asm", asm((0x40a000, MOVSD)))
    write(src / "crt" / "memory.c" / "realloc.asm", asm((0x601000, "MOV ECX,0x2"), (0x601005, "MOVSD.REP ES:EDI,ESI")))
    if caves is not None:
        write(tmp_path / "code_caves.json", caves)
    return str(src)


def test_movsd_sites_are_sorted_into_fixable_and_not(tmp_path, logs):
    caves = json.dumps({"caves": [{"allocations": [{"name": "movsd_407000"}, {"name": "movsd_407002"}, {"name": "thunk"}]}]})
    an.generate_movsd_report(movsd_tree(tmp_path, caves), str(tmp_path))
    text = report(tmp_path, "movsd_analysis.txt")
    assert "Already patched (cave):    2 sites" in text and "  patched " not in text
    assert "Consecutive MOVSD groups:  12" in text and "  3x MOVSD (12 bytes):   2 sites" in text
    assert "  1x MOVSD ( 4 bytes):   10 sites" in text and "  Fixable (cave patch):   2" in text
    assert "  No artifacts (OK):      3" in text and "  Unfixable:              7" in text
    assert "  Est. cave space:        ~66 bytes" in text
    assert re.search(r"\n  fix +2 sites  ~66 bytes\n", text) and re.search(r"\n  ok +2 sites\n", text)
    assert "    0x00401001  3x MOVSD (12 bytes copy, 8 bytes borrowable)" in text
    assert "    0x00406200  1x MOVSD (4 bytes copy)  only 1 bytes available (need 5)" in text
    assert re.search(r"\n  tight +2 sites\n", text)
    assert "    0x00403005  1x MOVSD (4 bytes copy)  only 1 bytes available (need 5)" in text
    assert "    0x00404002  1x MOVSD (4 bytes copy)  branch target inside patch range" in text
    # A gap to another range used to count as a 1 MB borrowable instruction
    assert "    0x00406000  1x MOVSD (4 bytes copy)  only 1 bytes available (need 5)" in text
    assert "    0x00406101  1x MOVSD (4 bytes copy)  only 2 bytes available (need 5)" in text
    assert "    0x00405002  1x MOVSD (4 bytes copy)  only 1 bytes available (need 5)" in text
    assert "REP MOVSD sites:           7" in text and "  Pass-by-value:          1" in text
    fixable_rep = text.split("FIXABLE REP MOVSD")[1]
    assert "    0x0040810a  REP MOVSD 3 dwords (12 bytes)" in fixable_rep
    assert "    0x00401016  REP MOVSD 2 dwords (8 bytes)" in fixable_rep
    assert "    0x00408205  REP MOVSD 32 dwords (128 bytes)" in text and "    0x0040800d  REP MOVSD 4 dwords" in text
    assert "    0x00408302  REP MOVSD (dynamic count)" in text and "    unknown count:        1 sites" in text
    no_artifacts_rep = text.split("NO ARTIFACTS")[-1]
    assert "    0x00409005  REP MOVSD 5 dwords" in no_artifacts_rep and "    0x0040900c  REP MOVSD 6 dwords" in no_artifacts_rep
    # CRT is not game code; it used to be listed, the path test looked for src/crt/
    assert "realloc" not in text and "short" not in text
    assert logs[-1].endswith("(12 consecutive [2 fixable], 7 REP [2 fixable, 2 no-artifact, 1 too-large, 1 dynamic, 1 byval])")


def test_an_unreadable_cave_file_patches_nothing(tmp_path):
    an.generate_movsd_report(movsd_tree(tmp_path, "{"), str(tmp_path))
    text = report(tmp_path, "movsd_analysis.txt")
    assert "Already patched" not in text and "Consecutive MOVSD groups:  13" in text and "REP MOVSD sites:           8" in text


def test_no_movsd_sites_leave_only_the_summary(tmp_path):
    src = tmp_path / "elsewhere" / "src"
    write(src / "core" / "a.cpp" / "f.asm", asm((0x401000, "NOP"), (0x401001, "RET")))
    an.generate_movsd_report(str(src), str(tmp_path))
    text = report(tmp_path, "movsd_analysis.txt")
    assert "Total MOVSD sites:         0" in text and "REP MOVSD by copy size" not in text and "FIXABLE" not in text


# --- the whole run -------------------------------------------------------------------------------

def program_tree(tmp_path, data_types = True):
    exe = tmp_path / "annotations" / "x.exe"
    unit = exe / "pseudocode" / "src" / "core" / "a.cpp"
    write(unit / "f.json", json.dumps({"function": {"name": "core_a.cpp_f_FUN_00401000", "address": "00401000"},
                                       "suspects": [], "complexity": {"suspect_count": 0}}))
    write(unit / "f.cpp", "int f(void) { return 0; }\n")
    write(unit / "f.asm", asm((0x401000, "RET"), (0x401001, "NOP")))
    if data_types:
        write(exe / "data_types" / "data_types.json", "{}")
    reports = tmp_path / "reports"
    reports.mkdir()
    return str(exe / "pseudocode" / "src"), str(reports)


def test_the_run_writes_every_report(tmp_path, logs, monkeypatch):
    structs = []
    monkeypatch.setattr(an, "generate_struct_report", lambda types, src, out: structs.append(types))
    src, reports = program_tree(tmp_path)
    an.generate_analysis_report(src, reports)
    assert structs == [str(tmp_path / "annotations" / "x.exe" / "data_types" / "data_types.json")]
    assert {"analysis_report.txt", "annotation_quality.txt", "movsd_analysis.txt", "overall_progress.svg",
            "static_analysis_summary.txt", "functions.csv"} <= set(os.listdir(reports))
    assert f"Skipping code cave report: {tmp_path / 'annotations' / 'x.exe' / 'code_caves.json'} not found" in logs
    assert "  Clean functions: 1 (100.0%)" in logs and "  Files at 100%: 1" in logs


def test_a_program_without_data_types_skips_the_struct_report(tmp_path, logs):
    src, reports = program_tree(tmp_path, data_types = False)
    an.generate_analysis_report(src, reports)
    assert any(m.startswith("Skipping struct report: ") and m.endswith("not found") for m in logs)


def test_a_tree_outside_a_pseudocode_dir_still_reports(tmp_path, logs):
    # An absolute path with no pseudocode dir above it used to loop forever at '/'
    src = tmp_path / "loose" / "src"
    write(src / "core" / "a.cpp" / "f.json", json.dumps({"function": {"name": "f"}, "suspects": [{"type": "x"}],
                                                          "complexity": {"suspect_count": 1}}))
    reports = tmp_path / "reports"
    reports.mkdir()
    an.generate_analysis_report(str(src), str(reports))
    assert "Skipping struct report: could not locate pseudocode base dir" in logs
    assert "Skipping code cave report: annotations dir not found" in logs and "  Clean functions: 0 (0.0%)" in logs


def test_no_function_data_writes_no_reports(tmp_path, logs):
    an.generate_analysis_report(str(tmp_path), str(tmp_path))
    assert logs[-1] == "No function data found for report generation" and not os.listdir(tmp_path)


def test_a_program_of_only_crt_has_no_clean_rate(tmp_path, logs):
    src = tmp_path / "pseudocode" / "src"
    write(src / "crt" / "x.c" / "f.json", json.dumps({"function": {"name": "f"}}))
    reports = tmp_path / "reports"
    reports.mkdir()
    an.generate_analysis_report(str(src), str(reports))
    assert "  Total functions: 0" in logs and "  Clean functions: 0 (0.0%)" in logs
