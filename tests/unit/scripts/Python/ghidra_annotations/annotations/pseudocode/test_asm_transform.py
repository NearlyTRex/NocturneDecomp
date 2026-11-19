# Imports
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import asm_transform as at


CODE = "void __cdecl f(void)\n{\n  CONCAT44(x);\n}"


def asm(*lines):
    """Rich assembly: an 'ADDR: INSTR' line, or an annotation line passed as is."""
    return "\n".join(line if line.startswith("//") else f"// {line}" for line in lines) + "\n"


def result(assembly, func_globals = None, func_calls = None):
    return SimpleNamespace(assembly_code = assembly, func_globals = func_globals, func_calls = func_calls)


WATCOM = asm(
    "00401000: PUSH EBX", "00401001: PUSH ESI", "00401002: PUSH EDI", "00401003: PUSH EBP",
    "00401004: MOV EBP,ESP", "00401006: SUB ESP,0x10",
    "00401009: MOVQ qword ptr [0x02d05258],MM0  ; g_SavedMMX0 | = \"text\"",
    "//   XREF to: 00401020 (CONDITIONAL_JUMP)",
    "00401010: JZ 0x00401020",
    "00401012: MOV EAX,dword ptr [EDX*0x4 + 0x2db87c0]",
    "00401019: CALL wincore_wddvmem.cpp_flip_FUN_005ed580",
    "//   Label: LAB_00401019",
    "0040101e: CALL dword ptr CS:[0x611570]",
    "00401020: MOV ESP,EBP",
    "//   Label: LAB_00401020",
    "00401022: POP EBP", "00401023: EMMS", "00401024: POP EDI", "00401025: POP ESI", "00401026: POP EBX",
    "00401027: RET",
)


def test_a_watcom_frame_is_left_out_and_the_body_names_its_globals_and_labels():
    out = at.generate_mmx_asm_cpp(result(WATCOM, [{"addr": "02db87c0", "name": "g_HeroActors"},
                                                  {"addr": "02db8000", "name": "g_Matrix[1][0]"},
                                                  {"addr": "02db9000", "name": ""}]), CODE)
    assert out == ("void __cdecl f(void)\n{\n__asm {\n"
                   "        movq qword ptr [g_SavedMMX0],MM0\n"
                   "        jz LAB_00401020\n"
                   "        mov EAX,dword ptr [g_HeroActors + EDX*0x4]\n"
                   "    LAB_00401019:\n"
                   "        call wincore_wddvmem_cpp_flip_FUN_005ed580\n"
                   "        call dword ptr [0x611570]\n"
                   # the exit's label moves to the next instruction kept, the EMMS
                   "    LAB_00401020:\n"
                   "        emms\n"
                   "}\n}")


def test_a_label_on_the_last_instructions_left_out_closes_the_block():
    code = asm("00401000: PUSH EBP", "00401001: MOV EBP,ESP", "00401003: XOR EAX,EAX",
               "00401005: LEAVE", "//   Label: LAB_00401005", "00401006: RET")
    calls = [{"name": "engine_line.cpp_clipAndDrawLine2D_FUN_00407d70"}]
    assert at.generate_byval_asm_cpp(result(code, func_calls = calls), CODE).endswith(
        "        xor EAX,EAX\n    LAB_00401005:\n}\n}")


def test_a_frameless_reserve_is_freed_by_the_matching_add():
    code = asm("00401000: PUSH ESI", "00401001: SUB ESP, 0x8", "00401004: ADD ESP,0x4", "00401007: EMMS",
               "00401008: ADD ESP,0x8", "0040100b: POP ESI", "0040100c: RETN 0x4")
    assert at.generate_mmx_asm_cpp(result(code), CODE).split("__asm {\n")[1] == (
        "        add ESP,0x4\n        emms\n}\n}")


def test_an_add_without_a_reserve_and_a_function_without_a_return_are_kept():
    code = asm("00401000: EMMS", "00401001: ADD ESP,0x4", "00401004: POP EBX")
    assert at.generate_mmx_asm_cpp(result(code), CODE).split("__asm {\n")[1] == (
        "        emms\n        add ESP,0x4\n}\n}")


@pytest.mark.parametrize("instruction, line", [
    ("MOVSB.REP ES:EDI,ESI", "rep movsb"), ("SCASB.REPNE ES:EDI", "repne scasb"),
    ("CMPSB.REPNZ ES:EDI,ESI", "repne cmpsb"), ("MOVSD ES:EDI,ESI", "movsd"), ("STOSB AL", "stosb AL"),
    ("LODSB", "lodsb"), ("FLD ST1", "fld ST(1)"), ("JMP EAX", "jmp EAX"), ("JMP 0x00402000", "jmp 0x00402000"),
    ("MOV EAX,[0x0040a000]", "mov EAX,[0x0040a000]"), ("MOV EAX,[ECX + ESI*0x1 + 0x8]", "mov EAX,[ECX + ESI*0x1 + 0x8]"),
    ("MOV EAX,[+ 0x2db87c0]", "mov EAX,[g_HeroActors]"), ("MOV EAX,[+ ECX + 0x2db87c0]", "mov EAX,[g_HeroActors + ECX]"),
    ("MOV EAX,[0x2db87c0 + ECX]", "mov EAX,[g_HeroActors + ECX]"), ("TEST [0x2db87c0],0x2db87c0", "test [g_HeroActors],0x2db87c0"),
])
def test_each_instruction_is_written_the_way_masm_reads_it(instruction, line):
    globals_map = {"2db87c0": "g_HeroActors"}
    assert at._format_instruction(instruction, {}, globals_map) == "        " + line


def test_names_in_comments_name_the_addresses_their_instruction_uses():
    entries = at._parse_raw_assembly(asm(
        "//   Label: core_f_FUN_00401000",
        "00401000: MOV EAX,[0x0040a000]  ; g_Count | CALL f(int) | 0x10",
        "//   Label: core_f_FUN_00401000",
        "00401005: MOV EAX,[0x0040b000]",
        "",
        "00401008: MOV EAX,[0x0040c000]  ; g_Other",
    ))
    assert at._build_global_map([{"addr": "0040c000", "name": "g_Known"}], entries) == {
        "40a000": "g_Count", "40c000": "g_Known"}
    assert at._build_label_map(entries) == {}


def test_only_calls_to_the_by_value_functions_get_an_asm_version():
    code = asm("00401000: XOR EAX,EAX", "00401002: RET")
    assert at.generate_byval_asm_cpp(result(code, func_calls = None), CODE) == CODE
    others = [{"name": "x"}, {"addr": "00407d70"}, {"name": "core_a.cpp_notCSfxSlot_mix_FUN_00401000"}]
    assert at.generate_byval_asm_cpp(result(code, func_calls = others), CODE) == CODE
    # By name, so a sibling build's callee at its own address counts too
    bw1 = [{"addr": "00571420", "name": "sound_sfx.cpp_CSfxSlot_mix_FUN_00571420"}]
    assert "xor EAX,EAX" in at.generate_byval_asm_cpp(result(code, func_calls = bw1), CODE)


@pytest.mark.parametrize("assembly, code", [
    (None, CODE), ("", CODE),
    (asm("00401000: MOV EAX,0x1", "00401002: RET"), CODE),                  # no MMX
    (asm("00401000: PUSH EBP", "00401001: EMMS"), "void f(void);"),         # no body to replace
    (asm("00401000: EMMS"), "} void f(void) {"),                            # no closing brace after it
])
def test_the_mmx_version_is_only_made_for_mmx_code_with_a_body(assembly, code):
    assert at.generate_mmx_asm_cpp(result(assembly), code) == code


@pytest.mark.parametrize("assembly", [
    None,
    asm("00401000: PUSH EBP", "00401001: MOV EBP,ESP"),                     # all prologue
    asm("00401000: PUSH EBP", "00401001: POP EBP", "00401002: RET"),        # all frame
])
def test_a_function_that_is_all_frame_keeps_its_pseudocode(assembly):
    calls = [{"name": "clipAndDrawLine3D_FUN_00408070"}]
    assert at.generate_byval_asm_cpp(result(assembly, func_calls = calls), CODE) == CODE
