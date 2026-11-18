# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import pass_by_value as pbv


def asm_text(insns, label = "core_a.cpp_caller_FUN_00401000", start = 0x401000):
    """An exported .asm: a header, then each instruction at the next address,
    with the function's label after the first and an XREF comment after each CALL."""
    lines = ["; *****", "; void __cdecl core_a_cpp_caller_FUN_00401000(void)", ";", "", "section .text", ""]
    for i, insn in enumerate(insns):
        lines.append(f"    {insn:<36}; {start + i:08x} | g_Note")
        if i == 0 and label:
            lines.append(f"        ;   Label: {label}")
        if insn.startswith("CALL"):
            lines.append("        ;   XREF to: 00500000 (UNCONDITIONAL_CALL)  ; CCodec * f(CCodec * this_ptr)")
    lines.append("        ;   Label: LAB_00402000")
    return "\n".join(lines) + "\n"


def write_asm(tmp_path, insns, name = "caller_FUN_00401000.asm", **kw):
    path = tmp_path / name
    path.write_text(asm_text(insns, **kw), encoding = "utf-8")
    return str(path)


# The frame, a local copy into it, then a by-value SRenderVertex pushed for f
FRAME_THEN_ARG = [
    "PUSH ESI", "SUB ESP,0x10", "MOV ECX,0x4", "MOV EDI,ESP", "MOV ESI,0x600000", "MOVSD.REP ES:EDI,ESI",
    "SUB ESP,0x30", "MOV ECX,0xc", "MOV EDI,ESP", "LEA ESI,[ESP + 0x30]", "MOVSD.REP ES:EDI,ESI",
    "CALL core_f.cpp_f_FUN_00500000", "ADD ESP,0x30",
]


def test_the_asm_is_parsed_from_the_body_with_the_first_label_as_the_name(tmp_path):
    name, insns = pbv.parse_asm_file(write_asm(tmp_path, ["PUSH ESI", "RET"]))
    # The XREF comment's `; CCodec` reads as hex but is no instruction
    assert name == "core_a.cpp_caller_FUN_00401000" and insns == [("00401000", "PUSH", "ESI"),
                                                                   ("00401001", "RET", "")]


def test_a_fragment_label_before_the_entry_does_not_name_the_function(tmp_path):
    text = asm_text(["PUSH ESI", "RET"]).replace("section .text\n", "section .text\n        ;   Label: LAB_00400ff0\n")
    path = tmp_path / "caller_FUN_00401000.asm"
    path.write_text(text, encoding = "utf-8")
    assert pbv.parse_asm_file(str(path))[0] == "core_a.cpp_caller_FUN_00401000"


@pytest.mark.parametrize("operands, callee", [
    ("core_f.cpp_f_FUN_00500000", "core_f.cpp_f_FUN_00500000"), ("dword ptr [EAX + 0x8]", None),
    ("[0x600000]", None), ("EAX", None),
])
def test_only_a_direct_call_has_a_callee(operands, callee):
    assert pbv.extract_callee_name(operands) == callee


def test_a_copy_onto_fresh_stack_before_a_call_is_a_by_value_argument(tmp_path):
    sites, movsd, count = pbv.analyze_single_file(write_asm(tmp_path, FRAME_THEN_ARG))
    # The copy into the prologue's frame is a local, not an argument
    assert (movsd, count) == (2, 1)
    assert sites == [pbv.CallSite("core_a.cpp_caller_FUN_00401000", "0040100b", "core_f.cpp_f_FUN_00500000",
                                  [0x30], 0x10)]


def test_a_copy_into_the_frame_alone_is_no_argument(tmp_path):
    insns = ["SUB ESP,0x8", "MOV ECX,0x2", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "PUSH EDI", "CALL fwrite"]
    assert pbv.analyze_single_file(write_asm(tmp_path, insns)) == ([], 1, 0)


def test_two_arguments_are_listed_nearest_the_call_first(tmp_path):
    insns = ["PUSH EBX", "CALL setup",
             "SUB ESP,0x18", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI",
             "SUB ESP,0xc", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL two"]
    sites, _, count = pbv.analyze_single_file(write_asm(tmp_path, insns, label = None))
    # With no label the file name stands in; no frame before the first call
    assert count == 2 and sites == [pbv.CallSite("caller_FUN_00401000", "00401008", "two", [0xc, 0x18], 0)]


@pytest.mark.parametrize("insns", [
    ["CALL g", "SUB ESP,0x30", "MOV EDI,ESP", "LEA EDI,[ESP + 0x4]", "MOVSD.REP ES:EDI,ESI", "CALL f"],  # local
    ["PUSH 0x1", "SUB ESP,0x30", "MOV ESI,EAX", "MOVSD.REP ES:EDI,ESI", "CALL f"],          # no MOV EDI,ESP
    ["CALL g", "PUSH 0x1", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL f"],                # no SUB ESP
    ["PUSH 0x1", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL f"],                          # nor any before
    ["CALL g", "SUB ESP,0x30", "CALL h", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL f"],  # a CALL between
    ["CALL g", "SUB ESP,EAX", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL f"],             # no constant size
    ["CALL g", "PUSH 0x1", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL dword ptr [EAX]"],  # indirect
])
def test_copies_that_are_not_stack_arguments_are_ignored(tmp_path, insns):
    assert pbv.analyze_single_file(write_asm(tmp_path, insns))[0] == []


def test_only_the_last_load_of_edi_before_the_copy_counts(tmp_path):
    insns = ["CALL g", "SUB ESP,0xc", "LEA EDI,[ESP + 0x4]", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI", "CALL f"]
    assert [s.arg_sizes for s in pbv.analyze_single_file(write_asm(tmp_path, insns))[0]] == [[0xc]]


def test_the_scan_stops_at_the_prologue_and_after_a_long_gap(tmp_path):
    arg = ["SUB ESP,0xc", "MOV EDI,ESP", "MOVSD.REP ES:EDI,ESI"]
    # MOV EBP,ESP ends the scan before the earlier copy
    insns = ["CALL g"] + arg + ["MOV EBP,ESP"] + arg + ["CALL f"]
    assert [s.arg_sizes for s in pbv.analyze_single_file(write_asm(tmp_path, insns))[0]] == [[0xc]]
    # An argument more than 12 instructions above the last one found belongs to other code
    insns = ["CALL g"] + arg + ["NOP"] * 13 + arg + ["CALL f"]
    assert [s.arg_sizes for s in pbv.analyze_single_file(write_asm(tmp_path, insns))[0]] == [[0xc]]


def test_an_empty_body_has_nothing(tmp_path):
    assert pbv.analyze_single_file(write_asm(tmp_path, [])) == ([], 0, 0)


@pytest.mark.parametrize("size, label", [(0x30, "SRenderVertex"), (0x44, "?struct_68")])
def test_struct_labels_name_the_known_sizes(size, label):
    assert pbv.struct_label(size) == label


def site(caller, address, callee, sizes, prologue = 0x20):
    return pbv.CallSite(caller, address, callee, sizes, prologue)


def test_the_report_groups_by_callee_in_a_fixed_order():
    sites = [
        site("zcaller", "00401000", "lone", [0x44]),
        site("bcaller", "00402000", "draw", [0x30]),
        site("acaller", "00403000", "draw", [0x30, 0x30]),
        site("acaller", "00403100", "draw", [0x30]),
        site("ccaller", "00404000", "mixed", [0x30, 0xc]),
        site("ccaller", "00404100", "mixed", [0x18]),
    ]
    report = pbv.format_report(sites, 9, 6)
    assert "3 functions with pass-by-value parameters (9 MOVSD.REP scanned, 6 are pass-by-value)" in report
    # Most sites first, then by name; whatever order the sites came in
    assert report == pbv.format_report(list(reversed(sites)), 9, 6)
    assert report.index("\ndraw\n") < report.index("\nmixed\n") < report.index("\nlone\n")
    assert "draw\n  Params: arg1=SRenderVertex (0x30)\n  Call sites (3):\n" in report
    assert ("    acaller                                  @ 0x00403000   2x SRenderVertex\n"
            "    acaller                                  @ 0x00403100   1x SRenderVertex\n") in report
    # A tie between patterns goes to the smaller one
    assert "mixed\n  Params: arg1=CBoundingBox3D (0x18)\n" in report
    assert "@ 0x00404000   SRenderVertex (0x30), CVector3f (0xc)" in report
    assert "@ 0x00401000   1x ?struct_68 (0x44)" in report
    fixes = report.split("CALLER FRAME SIZE FIXES")[1]
    assert fixes.index("acaller") < fixes.index("zcaller") < fixes.index("bcaller")
    assert "  acaller" + " " * 44 + "current: 0x20  required: 0x80  (+0x60 for by-value args)" in fixes


def test_a_report_with_no_sites_has_no_frame_fixes():
    report = pbv.format_report([], 3, 0)
    assert "0 functions with pass-by-value parameters (3 MOVSD.REP scanned" in report
    assert "CALLER FRAME SIZE FIXES" not in report
