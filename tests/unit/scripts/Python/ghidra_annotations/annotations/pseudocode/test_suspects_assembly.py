# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import assembly as sa


# The two listing forms the detectors read: the export's rich text and the .asm on disk


def export_form(*lines):
    """Rich listing: 'ADDR: INSTR' becomes '// ADDR: INSTR', a note '//   NOTE'."""
    return "\n".join(f"// {ln}" if ln[:8].isalnum() and ln[8:9] == ":" else f"//   {ln}" for ln in lines)


def disk_form(*lines):
    """On-disk listing: 'ADDR: INSTR' becomes 'INSTR ; ADDR', a note ';   NOTE'."""
    out = []
    for ln in lines:
        if ln[:8].isalnum() and ln[8:9] == ":":
            out.append(f"    {ln[10:]:<35} ; {ln[:8]}")
        else:
            out.append(f"        ;   {ln}")
    return "\n".join(out)


FORMS = pytest.mark.parametrize("form", [export_form, disk_form])


def cave(pairs, start = 0x401000):
    """`pairs` dword copies out of [ESI] into [EDI], each copy's first line labelled."""
    lines = []
    for k in range(pairs):
        addr = start + 6 * k
        src = f" + {4 * k:#x}" if k else ""
        lines += [f"{addr:08x}: MOV ECX,dword ptr [ESI{src}]", f"Label: LAB_{addr:08x}",
                  f"{addr + 3:08x}: MOV dword ptr [EDI{src}],ECX"]
    return lines


def types(suspects):
    return [(s["line"], s["type"]) for s in suspects]


def single_suspect(found):
    """found's one entry, failing the test when there are more or none."""
    if len(found) != 1:
        pytest.fail(f"expected one suspect, got {found}")
    return found[0]


# identify_assembly_suspects


@FORMS
def test_mmx_is_one_suspect_named_by_its_instructions(form):
    code = form("00401000: PUSH EBX", "00401001: MOVQ MM0,qword ptr [EAX]", "Label: LAB_00401001",
                "00401004: EMMS", "00401005: POP EBX")
    assert sa.identify_assembly_suspects(code) == [{
        "line": 2, "type": "mmx_assembly", "match": "EMMS, MOVQ", "text": "Function uses MMX instructions",
        "description": "MMX/SIMD assembly - may not decompile to clean C code"}]


def test_an_mm_register_alone_is_mmx_too_and_marks_the_first_line():
    code = export_form("00401000: MOV EAX,MM3", "00401003: MOVQ MM1,MM3", "00401006: MOV EBX,MM1")
    suspect = single_suspect(sa.identify_assembly_suspects(code))
    assert (suspect["line"], suspect["match"]) == (1, "MOVQ")
    alone = sa.identify_assembly_suspects(export_form("00401000: MOV EAX,MM3"))
    assert [(s["line"], s["match"]) for s in alone] == [(1, "MMX")]


@pytest.mark.parametrize("note", [
    "XREF to: 00405000 (UNCONDITIONAL_CALL)  ; void f_FUN_00405000(int por, int mm0)",
    "Label: cpuid",
])
def test_a_note_is_not_an_instruction_in_the_export_form(note):
    assert sa.identify_assembly_suspects(export_form("00401000: CALL f", note)) == []


@pytest.mark.parametrize("lines, description", [
    (("00401000: PUSHFD", "00401001: CPUID", "00401003: CPUID"), "CPU detection code using CPUID with EFLAGS manipulation"),
    (("00401000: XOR EAX,EAX", "00401002: CPUID"), "CPU detection code using CPUID"),
])
def test_cpuid_is_reported_once_with_or_without_flag_juggling(lines, description):
    suspects = sa.identify_assembly_suspects(disk_form(*lines) + "\n\n")
    assert [(s["type"], s["description"]) for s in suspects] == [
        ("cpuid_assembly", f"{description} - expected unusual decompilation patterns")]
    assert suspects[0]["line"] == len(lines) - (1 if len(lines) == 3 else 0)


def test_calls_to_by_value_callees_are_named():
    code = export_form("00401000: RET")
    calls = [{"name": "engine_line.cpp_clipAndDrawLine2D_FUN_00407d70"}, {"name": "other_FUN_00401000"},
             {"name": "sound_sfx.cpp_CSfxSlot_mix_FUN_00571420"}, {"name": "engine_line.cpp_clipAndDrawLine2D_FUN_00407d70"}]
    suspect = single_suspect(sa.identify_assembly_suspects(code, calls))
    assert suspect["match"] == "CSfxSlot_mix, clipAndDrawLine2D"
    assert suspect["description"] == "Calls CSfxSlot_mix, clipAndDrawLine2D - decompiler cannot recognize by-value pattern"
    assert sa.identify_assembly_suspects(code, [{"name": "other_FUN_00401000"}]) == []
    assert sa.identify_assembly_suspects("", calls) == []


# identify_displaced_global_access


GLOBALS = [
    (0x500000, 0x500008, "g_Pair", "int[2]"),
    (0x500008, 0x50000c, "g_Next", "int"),
    (0x500010, 0x500040, "g_Table", "int[12]"),
    (0x500040, 0x500044, "DAT_00500040", "int"),
    (0x500044, 0x500048, "g_Tiny", "int"),
    (0x500048, 0x50004c, "g_AfterTiny", "int"),
    (0x500050, 0x500060, "switchdata_00500050", "int[4]"),
    (0x500060, 0x500064, "g_AfterSwitch", "int"),
]


@FORMS
def test_an_index_base_shifted_into_the_next_global_is_named_with_its_instruction(form):
    code = form("00401000: MOV EAX,dword ptr [ECX*0x8 + 0x500004]", "Label: LAB_00401000",
                "00401007: MOV EBX,dword ptr [EDX*0x8 + 0x500004]",
                "0040100e: MOV EBX,dword ptr [EDX*0x8 + 0x500004]  ; g_Pair")
    suspects = sa.identify_displaced_global_access(code, GLOBALS)
    # Each instruction is its own suspect; the export form once gave them all
    # an empty address and kept only the first
    assert [(s["line"], s["instruction_address"]) for s in suspects] == [
        (1, "00401000"), (3, "00401007"), (4, "0040100e")]
    assert suspects[0]["description"] == (
        "Compiler displaced index base: [reg*8 + 0x500004] lands in g_Pair but intended target is "
        "g_Next at 0x500008 (displaced by 4 bytes)")
    assert (suspects[0]["displaced_from"], suspects[0]["intended_global"], suspects[0]["scale"],
            suspects[0]["displacement"], suspects[0]["severity"]) == ("g_Pair", "g_Next", 8, "0x500004", "moderate")


def test_one_instruction_is_reported_once():
    line = "    MOV EAX,dword ptr [ECX*0x8 + 0x500004]  ; 00401000\n"
    assert len(sa.identify_displaced_global_access(line * 2, GLOBALS)) == 1
    # an instruction without an address still counts once
    bare = "MOV EAX,dword ptr [ECX*0x8 + 0x500004]\n"
    assert sa.identify_displaced_global_access(bare * 2, GLOBALS)[0]["instruction_address"] == ""


@pytest.mark.parametrize("operand", [
    "[ECX*0x1 + 0x500004]",     # not an array stride
    "[ECX*0x80 + 0x500004]",    # beyond any element size
    "[ECX*0x4 + 0x600000]",     # in no global
    "[ECX*0x4 + 0x500010]",     # the start of an array big enough for the stride
    "[ECX*0x2 + 0x500012]",     # inside g_Table, no other global within 2 bytes
    "[ECX*0x4 + 0x500058]",     # switch table data
])
def test_ordinary_indexing_is_not_displaced(operand):
    code = f"    MOV EAX,dword ptr {operand}  ; 00401000\n;   MOV EAX,[ECX*0x8 + 0x500004]\n\n"
    assert sa.identify_displaced_global_access(code, GLOBALS) == []


def test_an_unnamed_global_just_past_the_end_is_a_target_but_one_inside_is_not():
    found = sa.identify_displaced_global_access("MOV EAX,[ECX*0x8 + 0x50003c]", GLOBALS)
    assert [s["intended_global"] for s in found] == ["DAT_00500040"]
    inside = [(0x500000, 0x500010, "g_Arr", "int[4]"), (0x500004, 0x500008, "DAT_00500004", "int"),
              (0x500004, 0x500008, "g_Arr[1]", "int")]
    assert sa.identify_displaced_global_access("MOV EAX,[ECX*0x4 + 0x500002]", inside[:2]) == []
    assert sa.identify_displaced_global_access("MOV EAX,[ECX*0x4 + 0x500002]", [inside[0], inside[2]]) == []
    dotted = [inside[0], (0x500004, 0x500008, "g_Arr.next", "int")]
    assert sa.identify_displaced_global_access("MOV EAX,[ECX*0x4 + 0x500002]", dotted) == []


def test_a_small_global_at_its_own_start_can_still_be_displaced():
    found = sa.identify_displaced_global_access("MOV EAX,[ECX*0x4 + 0x500044]  ; 00401000", GLOBALS)
    assert [(s["displaced_from"], s["intended_global"]) for s in found] == [("g_Tiny", "g_AfterTiny")]


@pytest.mark.parametrize("container, target", [("switchdata_00500000", "g_B"), ("PTR_caseD_0", "g_B"),
                                               ("g_A", "switchdata_00500004"), ("g_A", "PTR_caseD_1")])
def test_switch_tables_are_not_globals(container, target):
    intervals = [(0x500000, 0x500004, container, "int"), (0x500004, 0x500008, target, "int")]
    assert sa.identify_displaced_global_access("MOV EAX,[ECX*0x4 + 0x500002]", intervals) == []


@pytest.mark.parametrize("code, intervals", [("", GLOBALS), ("MOV EAX,[ECX*0x8 + 0x500004]", None)])
def test_displacement_needs_code_and_a_global_map(code, intervals):
    assert sa.identify_displaced_global_access(code, intervals) == []


# The cave copy blocks


@FORMS
def test_labels_after_a_cave_copy_instruction_do_not_split_its_run(form):
    # The Label note follows the instruction it labels, inside the run
    code = form(*cave(3), "00401020: RET", *cave(12, 0x401100), "00401180: NOP", *cave(2, 0x401200),
                "00401300: NOP", *cave(4, 0x401400))
    assert sa._find_cave_copy_blocks(code) == [12, 48, 16]


def test_a_blank_line_ends_a_run_and_no_listing_has_none():
    assert sa._find_cave_copy_blocks(disk_form(*cave(3)) + "\n\n" + disk_form(*cave(2))) == [12]
    assert sa._find_cave_copy_blocks("") == []


# identify_missing_cave_copy


def function(*body):
    return "void f(void)\n{\n" + "\n".join(f"  {ln}" for ln in body) + "\n}"


CAVE12 = disk_form(*cave(3))
CAVE48 = disk_form(*cave(12))


@pytest.mark.parametrize("asm", [CAVE12, export_form(*cave(3))])
def test_two_locals_each_passed_once_are_the_dropped_copy(asm):
    code = function("CVector3f local_a;", "CVector3f local_b;", "int i;",
                    "get_FUN_00401000(&local_a);", "use_FUN_00402000(&local_b);")
    suspects = sa.identify_missing_cave_copy(code, asm)
    assert types(suspects) == [(3, "missing_cave_copy"), (4, "missing_cave_copy")]
    assert suspects[0]["match"] == "CVector3f local_a; ... f(&local_a, ...);"
    assert suspects[0]["text"] == "CVector3f local_a;"
    assert "the `.asm` has 1 cave-block struct copies of its size" in suspects[0]["description"]


def test_a_matrix_sized_cave_also_fits_a_3x3_destination():
    code = function("CMatrix3x3f local_a;", "CMatrix3x4f local_b;", "get_FUN_00401000(&local_a);",
                    "use_FUN_00402000(&local_b);")
    suspects = sa.identify_missing_cave_copy(code, CAVE48)
    assert [s["text"] for s in suspects] == ["CMatrix3x3f local_a;", "CMatrix3x4f local_b;"]
    # The 3x3 destination counts the 48-byte copy, the 3x4 source its own size
    assert [s["description"].split("has ")[1][:2] for s in suspects] == ["1 ", "1 "]


@pytest.mark.parametrize("code, asm", [
    ("", CAVE12), (function("CVector3f a;"), ""),
    (function("CVector3f a;", "CVector3f b;", "f_FUN_1(&a);", "g_FUN_2(&b);"), disk_form("00401000: RET")),
    # a 20-byte cave fits no struct
    (function("CVector3f a;", "CVector3f b;", "f_FUN_1(&a);", "g_FUN_2(&b);"), disk_form(*cave(5))),
    # a 12-byte cave cannot be a matrix copy
    (function("CMatrix3x4f a;", "CMatrix3x4f b;", "f_FUN_1(&a);", "g_FUN_2(&b);"), CAVE12),
])
def test_both_sides_must_show_the_copy(code, asm):
    assert sa.identify_missing_cave_copy(code, asm) == []


@pytest.mark.parametrize("use", [
    ["get_FUN_00401000(&local_b);", "x = local_b.x;"],     # used twice
    ["x = local_b.x;"],                                    # not by address
    ["same = &local_b == p;"],                             # neither passed nor kept
    # used twice on one line (computeVisibleFrustumBounds' cave-side compare)
    ["if ((get_FUN_00401000(&local_b), 0x1f400 < local_b.z)) {", "}"],
    ["if (out != &local_b) {", "}"],                       # a test, not a call
    ["n = sizeof(&local_b);"],
])
def test_only_a_local_passed_once_by_address_is_a_candidate(use):
    code = function("CVector3f local_a;", "CVector3f local_b;", "get_FUN_00401000(&local_a);", *use)
    assert sa.identify_missing_cave_copy(code, CAVE12) == []


@pytest.mark.parametrize("use", [
    ["use_FUN_00402000(1,", "                 &local_b);"],     # a wrapped call
    ["pCVar3 = &local_b;", "use_FUN_00402000(pCVar3);"],         # through a pointer
    ["pCVar3 = (CVector3f *)&local_b;"],
])
def test_an_address_passed_in_a_wrapped_call_or_through_a_pointer_counts(use):
    # The old check looked for a parenthesis on the line or the one before it,
    # so a pointer kept after a line without one was missed
    code = function("CVector3f local_a;", "CVector3f local_b;", "get_FUN_00401000(&local_a);", "x = 1;", *use)
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE12)] == ["CVector3f local_a;", "CVector3f local_b;"]


@pytest.mark.parametrize("arg", ["local_5c", "&local_5c[0]", "local_5c[0]"])
def test_a_struct_array_handed_to_a_call_is_the_other_half(arg):
    # msnedit screenToWorldPosition: screenToWorldCoord(.., local_5c); the cave
    # copies local_5c[0] to local_38, which screenToWorldTransform reads
    code = function("CVector3i local_5c [3];", "CVector3i local_38;",
                    f"coord_FUN_00401000(cam,x,y,{arg});", "xform_FUN_00402000(cam,&local_38,&out);")
    suspects = sa.identify_missing_cave_copy(code, CAVE12)
    assert [s["match"] for s in suspects] == ["CVector3i local_5c[]; ... f(local_5c, ...);",
                                              "CVector3i local_38; ... f(&local_38, ...);"]


@pytest.mark.parametrize("use", [
    "x = local_5c[1].x;",                       # not passed to a call
    "coord_FUN_00401000(local_5c + 1);",        # not the array itself
    "if (p != local_5c) {",                     # a test, not a call
    "coord_FUN_00401000(local_5c;",             # a call that never closes
])
def test_a_struct_array_must_be_passed_whole(use):
    code = function("CVector3i local_5c [3];", "CVector3i local_38;", use, "xform_FUN_00402000(&local_38);")
    assert sa.identify_missing_cave_copy(code, CAVE12) == []


def test_a_struct_array_the_callee_returns_is_read_through_the_return():
    code = function("CVector3f local_g [2];", "CVector3f local_h;", "CVector3f local_i;",
                    "pv = m_FUN_00405000(local_g, &local_h);", "x = pv->x;", "use_FUN_00402000(&local_i);")
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE12 + "\n" + SIGS)] == [
        "CVector3f local_h;", "CVector3f local_i;"]


def test_a_struct_array_source_names_its_first_element():
    code = function("CMatrix3x4f local_c4 [2];", "CMatrix3x4f local_f4;",
                    "getBoneModelMatrix_FUN_00403000(model, 3, local_c4);", TRANSFORM, TRANSFORM)
    suspects = sa.identify_missing_cave_copy(code, CAVE48 + "\n" + SIGS)
    assert [s["match"] for s in suspects] == [
        "CMatrix3x4f local_f4; read-only, never written; local_c4[0] written, never read "
        "(expected local_f4 = local_c4[0];)"]


SIGS = disk_form(
    "00401000: CALL m_FUN_00405000",
    "XREF to: 00405000 (UNCONDITIONAL_CALL)  ; CVector3f * m_FUN_00405000(CVector3f * out, CVector3f * in)",
    "00401005: CALL t_FUN_00406000",
    "XREF to: 00406000 (UNCONDITIONAL_CALL)  ; CVector3f * t_FUN_00406000(CVector3f * in, CVector3f * out, CMatrix3x4f * m)",
)


def test_an_output_buffer_the_callee_returns_is_read_through_the_return():
    code = function("CVector3f local_g;", "CVector3f local_h;", "CVector3f local_i;",
                    "pv = m_FUN_00405000(&local_g, &local_h);", "x = pv->x;", "use_FUN_00402000(&local_i);")
    # local_g is the returned output, local_h the input it was meant to read
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE12 + "\n" + SIGS)] == [
        "CVector3f local_h;", "CVector3f local_i;"]


@pytest.mark.parametrize("statement, flagged", [
    (["pv = m_FUN_00405000(&local_g,", "                   &local_h);"], False),  # wrapped
    (["pv = m_FUN_00405000(&local_g;"], True),                                    # no closing parenthesis
    (["pv = q_FUN_00407000(&local_g);"], True),                                   # callee returns nothing known
    (["pv = m_FUN_00405000(&local_h, &local_g);"], True),                         # not at the output position
])
def test_the_returned_output_exclusion_needs_the_whole_call(statement, flagged):
    code = function("CVector3f local_g;", "CVector3f local_k;", *statement, "x = pv->x;", "use_FUN_00402000(&local_k);")
    found = [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE12 + "\n" + SIGS)]
    assert ("CVector3f local_g;" in found) is flagged


def test_a_returned_output_reached_through_a_pointer_is_read_through_the_return():
    # CPathMap::findPathToDestination: pCVar1 = &local_d0; pCVar1 = convert(pCVar1, dir)
    code = function("CVector3f local_d0;", "CVector3f local_f4;", "pCVar1 = &local_d0;", "x = pCVar1 != 0;",
                    "pCVar1 = m_FUN_00405000(pCVar1, dir);", "pCVar2 = &local_f4;",
                    "pCVar2 = m_FUN_00405000(dir, pCVar2);", "y = pCVar2->x;")
    # local_d0 is the returned output; local_f4 sits at the input position
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE12 + "\n" + SIGS)] == []
    other = code.replace("CVector3f local_f4;", "CVector3f local_f4;\n  CVector3f local_q;") + "\nuse_FUN_1(&local_q);"
    assert [s["text"] for s in sa.identify_missing_cave_copy(other, CAVE12 + "\n" + SIGS)] == [
        "CVector3f local_f4;", "CVector3f local_q;"]


def test_a_returned_output_whose_return_is_never_read_is_still_dead():
    code = function("CVector3f local_g;", "CVector3f local_k;", "pv = m_FUN_00405000(&local_g);",
                    "use_FUN_00402000(&local_k);")
    assert len(sa.identify_missing_cave_copy(code, CAVE12 + "\n" + SIGS)) == 2


ORPHAN = "multiply_FUN_00403000(&a, &b, (CMatrix3x4f *)&stack0x00000010);"


def test_a_destination_only_read_by_consumers_beside_an_orphan_source():
    code = function("CMatrix3x4f local_13c;", "CMatrix3x4f local_x;", "CMatrix3x4f local_unused;", "CVector3f local_v;",
                    ORPHAN, "getTranslation_FUN_00404000(&local_13c, &pos);",
                    "matrixToEulerAngles_FUN_00405000(&local_13c, &e); matrixToEulerAngles_FUN_00405000(&local_13c, &e);",
                    "getTranslation_FUN_00404000(&local_x, &pos); local_x.m[0].x = 0;",
                    "build_FUN_00406000(&local_v); build_FUN_00406000(&local_v);")
    suspects = sa.identify_missing_cave_copy(code, CAVE48)
    assert [s["text"] for s in suspects] == ["CMatrix3x4f local_13c;"]
    assert suspects[0]["match"] == ("CMatrix3x4f local_13c; (read-only by consumer, never produced; "
                                    "orphan stack0x cave source)")


def test_an_orphan_source_does_not_report_a_local_twice():
    code = function("CMatrix3x4f local_a;", "CMatrix3x4f local_b;", ORPHAN,
                    "getTranslation_FUN_00404000(&local_a, &pos);", "getTranslation_FUN_00404000(&local_b, &pos);")
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE48)] == [
        "CMatrix3x4f local_a;", "CMatrix3x4f local_b;"]


def stale(*middle, consumer = "matrixToQuaternion_FUN_00402000(&stale, &q);"):
    return function("buildMatrix_FUN_00400000(&stale, 1);", "matrixToQuaternion_FUN_00402000(&early, &q);",
                    "multiplyMatrix3x4_FUN_00401000(&a, &b, &out);", "pos->x = out.m[0].z;", *middle, consumer)


def test_an_orientation_read_from_an_older_matrix_than_the_position():
    suspects = sa.identify_missing_cave_copy(stale(), CAVE48)
    assert types(suspects) == [(7, "missing_cave_copy")]
    assert suspects[0]["match"] == ("matrixTo...(&stale) reads stale matrix; cave copy `stale = out` "
                                    "(multiply output) was dropped")
    assert suspects[0]["text"] == "matrixToQuaternion_FUN_00402000(&stale, &q);"


@pytest.mark.parametrize("code, asm", [
    (stale(), CAVE12),                                                               # no matrix cave
    (stale().replace("out.m[0]", "out.x"), CAVE48),                                  # OUT not decomposed
    (stale(consumer = "matrixToQuaternion_FUN_00402000(&out, &q);"), CAVE48),        # OUT is the one read
    (stale(*["x = 1;"] * 25), CAVE48),                                               # consumer too far away
    (stale().replace("buildMatrix_FUN_00400000(&stale, 1);", "x = 1;"), CAVE48),    # stale never produced
    (function("multiplyMatrix3x4_FUN_00401000(&a, &b, &out);", "y = out.m[0].x;"), CAVE48),  # no consumer
])
def test_a_stale_read_needs_a_decomposed_output_and_a_produced_matrix(code, asm):
    assert sa.identify_missing_cave_copy(code, asm) == []


def test_matrix_production_spans_wrapped_calls():
    # The multiply pattern once stopped at a line break before the output argument
    assert sa._matrix_is_produced("multiplyMatrix3x4_FUN_1(&a,\n  &b, &m)", "m")
    assert sa._matrix_is_produced("buildMatrix_FUN_1(\n  &m, 1)", "m")
    assert not sa._matrix_is_produced("multiplyMatrix3x4_FUN_1(&m, &b, &c)", "m")


def partial(*extra, copy = "local_60.z = local_84.z;"):
    return function("CVector3f local_60;", "CVector3f local_84;", "get_FUN_00401000(&local_84);",
                    copy, *extra, "use_FUN_00402000(&local_60);")


def test_a_struct_copy_truncated_to_one_field():
    suspects = sa.identify_missing_cave_copy(partial(), CAVE12)
    assert types(suspects) == [(6, "missing_cave_copy")]
    assert suspects[0]["match"] == "local_60.z = local_84.z; (partial struct copy — expected local_60 = local_84;)"


@pytest.mark.parametrize("code", [
    partial(copy = "local_60.z = local_60.z;"),
    partial(copy = "local_60.z = local_84.y;"),
    partial(copy = "local_99.z = local_84.z;"),
    partial("local_60.x = 0;"),                                                         # another field written
    partial().replace("use_FUN_00402000(&local_60);", "x = local_60.x;"),               # not passed by address
    partial().replace("get_FUN_00401000(&local_84);", "local_84 = g;"),                 # source not filled
])
def test_a_partial_copy_is_one_field_between_two_filled_structs(code):
    assert sa.identify_missing_cave_copy(code, CAVE12) == []


def single(*partner_uses, partner = "CMatrix3x4f local_f4;"):
    return function("CMatrix3x4f local_c4;", partner, "CVector3f local_v;",
                    "getBoneModelMatrix_FUN_00403000(model, 3, &local_c4);", *partner_uses)


TRANSFORM = "t_FUN_00406000(&v, &out, &local_f4);"


def test_a_statement_is_found_whole_from_any_of_its_lines():
    lines = ["t_FUN_1(&a,", "  &b);", "x = 1;", "", "y(", "  2", "  );"]
    assert sa._statement_at(lines, 1) == (0, 1, "t_FUN_1(&a, &b);")
    assert sa._statement_at(lines, 5) == (4, 6, "y( 2 );")


@pytest.mark.parametrize("asm", [CAVE48 + "\n" + SIGS, export_form(*cave(12)) + "\n" + SIGS.replace(";   ", "//   ")])
def test_one_dead_source_and_a_partner_that_is_only_read(asm):
    code = single(TRANSFORM, "", "t_FUN_00406000(g(w),", "    &out2, &local_f4);")
    suspects = sa.identify_missing_cave_copy(code, asm)
    assert types(suspects) == [(4, "missing_cave_copy")]
    assert suspects[0]["match"] == ("CMatrix3x4f local_f4; read-only, never written; local_c4 written, never read "
                                    "(expected local_f4 = local_c4;)")


@pytest.mark.parametrize("uses", [
    ["q_FUN_00407000(&local_f4);"] * 2,                   # callee unknown
    ["t_FUN_00406000(&v, &local_f4, &m);"] * 2,           # the returned output
    ["t_FUN_00406000(&v, &out, &local_f4);", "x = local_f4.m[0].x;"],  # read directly
    [],                                                   # never used
    ["t_FUN_00406000(&v, &out, &local_f4"] * 2,           # never closed
])
def test_the_partner_must_only_be_a_read_only_argument(uses):
    assert sa.identify_missing_cave_copy(single(*uses), CAVE48 + "\n" + SIGS) == []


def test_the_partner_has_the_source_type_and_is_reported_once():
    other_type = single(TRANSFORM, TRANSFORM, partner = "CMatrix3x3f local_f4;")
    assert sa.identify_missing_cave_copy(other_type, CAVE48 + "\n" + SIGS) == []
    consumer = disk_form("XREF to: 00408000 (UNCONDITIONAL_CALL)  ; "
                         "CVector3f * matrixToEulerAngles_FUN_00408000(CMatrix3x4f * m, CVector3f * out)")
    code = single(ORPHAN, *["matrixToEulerAngles_FUN_00408000(&local_f4, &e);"] * 2)
    assert [s["text"] for s in sa.identify_missing_cave_copy(code, CAVE48 + "\n" + consumer)] == ["CMatrix3x4f local_f4;"]


# Callee signatures from the XREF notes


@pytest.mark.parametrize("signature, sigs", [
    ("CVector3f * a_FUN_00401000(CVector3f * out_euler, CQuaternion4f * quat)", {"00401000": 0}),
    ("CVector3f * a_FUN_00401000(CVector3f * in, CVector3f * dst)", {"00401000": 1}),
    ("CVector3f * a_FUN_00401000(CVector3f * out, CVector3f * result)", {}),   # two outputs
    ("CVector3f * a_FUN_00401000(CVector3f * a, CVector3f * b)", {}),          # neither named
    ("CVector3f * a_FUN_00401000(void)", {}),
    ("int a_FUN_00401000(int x)", {}),
    ("a_FUN_00401000", {}),
])
def test_a_returned_pointer_names_the_output_argument(signature, sigs):
    code = disk_form("00401000: CALL a", f"XREF to: 00401000 (UNCONDITIONAL_CALL)  ; {signature}",
                     "XREF to: 00401010 (CONDITIONAL_JUMP)  ; LAB_00401010")
    assert sa._parse_callee_signatures(code) == sigs


def test_top_level_commas_split_arguments():
    assert sa._split_top_level("f(a, b), c[1, 2], d,") == ["f(a, b)", " c[1, 2]", " d"]


# identify_phantom_float_to_int


LAYOUT = {"CQuat": [{"name": "z", "offset": 8, "len": 4, "n": None, "type": "float"},
                    {"name": "count", "offset": 12, "len": 4, "n": None, "type": "int"}]}
NO_FIST = disk_form("00401000: FLD dword ptr [EAX]", "00401002: FSTP dword ptr [EBX]")


def test_a_float_field_cast_to_int_without_any_fist_is_fabricated():
    code = function("CQuat local_6c;", "", "// (int)local_6c.z in a comment", "blend_FUN_1(t, (int)local_6c.z);")
    suspect = single_suspect(sa.identify_phantom_float_to_int(code, NO_FIST, LAYOUT))
    assert (suspect["line"], suspect["match"], suspect["text"]) == (6, "(int)local_6c.z", "blend_FUN_1(t, (int)local_6c.z);")
    assert suspect["description"].startswith("`(int)local_6c.z` numerically converts float field `local_6c.z`")


@pytest.mark.parametrize("line", [
    "x = (int)local_6c.count;",                  # an int field
    "x = (int)local_6c.z < 0x40c00001;",         # bit-pattern compare
    "x = 0x40c00001 < (int)local_6c.z;",
    "x = (int)local_6c.z >> 1 + g_FastSqrtMagic;",
    "x = (int)pq.z;", "x = (int)arr.z;", "x = (int)sp.z;",   # pointer and array roots
])
def test_casts_other_detectors_own_or_that_are_real_are_left(line):
    code = ("// Signature: void f(CQuat * sp,int n)\n"
            + function("CQuat local_6c;", "CQuat *pq;", "CQuat arr[2];", line))
    assert sa.identify_phantom_float_to_int(code, NO_FIST, LAYOUT) == []


@pytest.mark.parametrize("code, asm, layout", [
    ("", NO_FIST, LAYOUT), ("x = (int)q.z;", "", LAYOUT), ("x = (int)q.z;", NO_FIST, None),
    (function("CQuat q;", "x = (int)q.z;"), disk_form("00401000: FISTP dword ptr [EAX]"), LAYOUT),
])
def test_a_fist_or_missing_input_means_no_phantom(code, asm, layout):
    assert sa.identify_phantom_float_to_int(code, asm, layout) == []


# The REP string instructions


def test_unreachable_block_addresses_are_normalized():
    code = "/* WARNING: Removing unreachable block (ram,0x0040100a) */\n/* warning: removing unreachable block (ram,0x00401100) */"
    assert sa.extract_unreachable_block_addrs(code) == {"40100a", "401100"}
    assert sa.extract_unreachable_block_addrs("") == set()


@FORMS
def test_a_dword_fill_and_its_byte_tail_are_one_memset(form):
    code = form("00401000: MOV ECX,0x10", "00401005: STOSD.REP ES:EDI", "Label: LAB_00401005",
                "XREF to: 00401020 (CONDITIONAL_JUMP)", "00401007: MOV ECX,EDX", "00401009: AND ECX,0x3",
                "Label: LAB_00401009", "XREF to: 00401030 (CONDITIONAL_JUMP)", "0040100c: NOP", "0040100d: NOP",
                "0040100e: STOSB.REP ES:EDI")
    suspect = single_suspect(sa.identify_unrolled_memset_blocks(code))
    assert (suspect["line"], suspect["match"]) == (2, "STOSD.REP")
    assert suspect["description"] == (
        "Watcom inline memset (REP STOSD at 00401005, 4-byte stride). Ghidra reconstructs this as a countdown "
        "for-loop with element-by-element writes; replace the loop with memset(dst, value, count * 4) in a .keep.")


@pytest.mark.parametrize("lines, matches", [
    (("00401000: STOSW.REP ES:EDI", "00401002: STOSB.REP ES:EDI"), ["STOSW.REP"]),
    (("00401000: STOSD.REP ES:EDI", "00401002: STOSD.REP ES:EDI"), ["STOSD.REP", "STOSD.REP"]),
    (("00401000: STOSB.REP ES:EDI", "00401002: STOSB.REP ES:EDI"), ["STOSB.REP", "STOSB.REP"]),
    (("00401000: STOSD.REP ES:EDI", *[f"0040100{k}: NOP" for k in range(6)], "00401008: STOSB.REP ES:EDI"),
     ["STOSD.REP", "STOSB.REP"]),
    (("00401000: STOSD ES:EDI",), []),
])
def test_only_a_chunk_then_byte_pair_close_together_is_one_site(lines, matches):
    assert [s["match"] for s in sa.identify_unrolled_memset_blocks(disk_form(*lines))] == matches


def test_a_memset_in_an_unreachable_block_or_without_an_address():
    code = disk_form("00401000: STOSD.REP ES:EDI", "0040100a: STOSW.REP ES:EDI")
    assert [s["match"] for s in sa.identify_unrolled_memset_blocks(code, {"40100a"})] == ["STOSD.REP"]
    assert "(REP STOSB at ????????," in sa.identify_unrolled_memset_blocks("STOSB.REP ES:EDI")[0]["description"]
    assert sa.identify_unrolled_memset_blocks("") == []


@FORMS
def test_a_copy_into_the_outgoing_arguments_is_a_by_value_pass(form):
    code = form("00401000: SUB ESP,0xc", "00401003: MOV EDI,ESP", "Label: LAB_00401003", "00401005: MOV ECX,0x3",
                "00401008: MOVSD.REP ES:EDI,ESI", "0040100a: CALL f")
    assert sa.identify_unrolled_memcpy_blocks(code) == []


@pytest.mark.parametrize("lines", [
    ("00401000: MOV EDI,ESP", "00401002: LEA EDI,[EBP + -0x20]", "00401005: MOVSD.REP ES:EDI,ESI"),
    ("00401000: MOV EDI,ESP", *[f"{0x401002 + k:08x}: NOP" for k in range(24)], "00401020: MOVSD.REP ES:EDI,ESI"),
    ("00401000: MOVSD.REP ES:EDI,ESI",),
])
def test_a_copy_aimed_elsewhere_is_a_memcpy(lines):
    suspect = single_suspect(sa.identify_unrolled_memcpy_blocks(disk_form(*lines)))
    assert suspect["type"] == "unrolled_memcpy" and suspect["match"] == "MOVSD.REP"


def test_a_cave_that_jumps_back_to_the_copy_carries_its_setup():
    by_value = disk_form("00401000: MOVSD.REP ES:EDI,ESI", "00401002: CALL f", "00401007: RET",
                         "00402000: SUB ESP,0xc", "00402003: MOV EDI,ESP", "00402005: JMP 0x00401000")
    assert sa.identify_unrolled_memcpy_blocks(by_value) == []
    elsewhere = by_value.replace("MOV EDI,ESP", "MOV EDI,EAX")
    assert [s["line"] for s in sa.identify_unrolled_memcpy_blocks(elsewhere)] == [1]


def test_memcpy_pairs_byte_tails_and_skips_unreachable_or_unaddressed_copies():
    code = disk_form("00401000: MOVSD.REP ES:EDI,ESI", "00401002: MOVSB.REP ES:EDI,ESI", "0040100a: MOVSW.REP ES:EDI,ESI")
    suspect = single_suspect(sa.identify_unrolled_memcpy_blocks(code, {"40100a"}))
    assert suspect["description"] == (
        "Watcom inline memcpy (REP MOVSD at 00401000, 4-byte stride). Ghidra reconstructs this as a countdown "
        "for-loop with element-by-element copies; replace the loop with memcpy(dst, src, count * 4) or a struct "
        "assignment in a .keep.")
    assert "REP MOVSB at ????????" in sa.identify_unrolled_memcpy_blocks("MOVSB.REP ES:EDI,ESI")[0]["description"]
    assert sa.identify_unrolled_memcpy_blocks("") == []


# identify_dropped_fyl2x


FYL2X = disk_form("00401000: FLDLN2", "00401002: FXCH", "00401004: FYL2X", "00401006: FYL2X")


def test_a_log_constant_times_a_value_is_a_dropped_logarithm():
    code = function("x = 0.6931471805599453 * (float10)v;", "y = scale * 1.4426950408889634;",
                    "// 0.6931471805599453 * v", "* 0.6931471805599453 * v", "z = log(v) * 0.6931471805599453;",
                    "w = 0.6931471805599453;", "u = v * 2.0;")
    suspects = sa.identify_dropped_fyl2x(code, FYL2X)
    assert [(s["line"], s["severity"]) for s in suspects] == [(3, "major"), (4, "major")]
    assert suspects[0]["description"].startswith("x87 log constant multiplied by `v` in a function whose asm has 2 FYL2X.")
    assert "multiplied by `scale`" in suspects[1]["description"]


@pytest.mark.parametrize("code, asm", [("", FYL2X), ("x = 0.6931471805599453 * v;", ""),
                                       ("x = 0.6931471805599453 * v;", NO_FIST)])
def test_a_logarithm_is_only_dropped_where_the_asm_computes_one(code, asm):
    assert sa.identify_dropped_fyl2x(code, asm) == []
