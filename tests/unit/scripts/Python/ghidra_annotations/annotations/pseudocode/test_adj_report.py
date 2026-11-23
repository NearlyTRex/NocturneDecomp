# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import adj_report as ar


def asm_text(*instructions):
    """An exported .asm body: a header comment, then one instruction a line."""
    lines = ["; FUNCTION", "section .text", ""]
    for i, ins in enumerate(instructions):
        lines.append(f"    {ins:<36}; {0x401000 + i:08x}")
        if i == 0:
            lines.append("        ;   Label: f")
    return "\n".join(lines) + "\n"


def write_asm(tmp_path, *instructions, name = "f.asm"):
    path = tmp_path / name
    path.write_text(asm_text(*instructions))
    return str(path)


def analyze(tmp_path, *instructions):
    return ar.analyze_asm(write_asm(tmp_path, *instructions))


SUB_CTOR = "core_a.cpp_CPart_ctor_FUN_00402000"


def test_instructions_are_read_with_and_without_operands(tmp_path):
    path = write_asm(tmp_path, "PUSH EBX", "MOVSD.REP ES:EDI,ESI", "RET")
    assert ar.parse_instructions(path) == [("PUSH", "EBX", "00401000"), ("MOVSD", "ES:EDI,ESI", "00401001"),
                                           ("RET", "", "00401002")]


@pytest.mark.parametrize("name, info", [
    ("CBox_ctor_FUN_00401000.asm", ("CBox", "ctor")), ("CBox_dtor_FUN_00401000.asm", ("CBox", "dtor")),
    ("CBox_ctor_extra.asm", (None, None)),
])
def test_the_class_and_kind_come_from_the_file_name(name, info):
    assert ar.extract_info(f"/x/{name}") == info


@pytest.mark.parametrize("target, short", [
    ("core_a.cpp_CPart_ctor_FUN_00402000", "CPart_ctor"),
    ("core_armour.cpp_CFlame_arrdtor50_FUN_00412720", "CFlame_arrdtor50"),
    ("core_b.cpp_SButton_arrdtor50Chem_FUN_004144a0", "SButton_arrdtor50Chem"),
    ("core_b.cpp_CPart_init_FUN_00402000", "CPart_init"),
    ("init_FUN_00402000", "init"),
    ("crt_memory.c___arrinit", "crt_memory.c___arrinit"),
])
def test_a_call_target_is_shortened_to_class_and_kind(target, short):
    assert ar.short_call_name(target) == short


@pytest.mark.parametrize("target, sub", [
    (SUB_CTOR, True), ("x_CPart_dtor_FUN_1", True), ("crt_memory.c___arrinit", True),
    ("x_CFlame_arrdtor50_FUN_1", True), ("x_CPart_init_FUN_1", False),
])
def test_sub_object_calls_are_ctors_dtors_and_array_helpers(target, sub):
    assert ar.is_subobj_call(target) is sub


def test_an_ebp_frame_finds_this_above_its_pushes():
    info = ar.compute_this_ptr_offsets([("PUSH", "EBP", ""), ("PUSH", "ESI", ""), ("MOV", "EBP,ESP", ""),
                                        ("AND", "ESP,0xfffffff0", "")])
    assert info == {"ebp_offset": 12, "has_frame": True, "has_and_esp": True}
    assert ar.compute_this_ptr_offsets([("RET", "", "")]) == {"ebp_offset": None, "has_frame": False,
                                                            "has_and_esp": False}


def test_this_is_followed_through_loads_adds_leas_and_returned_this(tmp_path):
    calls = analyze(tmp_path,
                    "PUSH EBX",
                    "MOV EBX,dword ptr [ESP + 0x8]",          # this, above one push
                    "ADD EBX,0x10",
                    "PUSH EBX",
                    f"CALL {SUB_CTOR}",                          # this+0x10
                    "ADD ESP,0x4",
                    "SUB EAX,0x8",                              # the ctor returned this+0x10
                    "PUSH EAX",
                    "CALL x_CFlame_arrdtor50_FUN_1",            # this+0x8
                    "LEA ESI,[EAX + -0x8]",
                    "XCHG ESI,EDI",
                    "PUSH EDI",
                    "CALL x_CPart_dtor_FUN_1",                  # this
                    "LEA ECX,[EAX]",
                    "MOV EDX,ECX",
                    "PUSH EDX",
                    "CALL crt_memory.c___arrinit")              # this, through LEA [reg] and MOV reg,reg
    assert calls == [(SUB_CTOR, 0x10), ("x_CFlame_arrdtor50_FUN_1", 8), ("x_CPart_dtor_FUN_1", 0),
                     ("crt_memory.c___arrinit", 0)]


@pytest.mark.parametrize("clobber", [
    "MOV EBX,dword ptr [EBX + 0x4]", "MOV EBX,0x0", "XOR EBX,EBX", "INC EBX", "MOV BL,0x1",
    "LEA EBX,[EBX + EAX*0x4]", "LEA EBX,[ECX + 0x4]", "ADD EBX,ECX", "POP EBX", "CDQ",
])
def test_a_write_the_tracker_does_not_model_leaves_the_register_unknown(tmp_path, clobber):
    dest = "EDX" if clobber == "CDQ" else "EBX"
    calls = analyze(tmp_path, f"MOV {dest},dword ptr [ESP + 0x4]", f"ADD {dest},0x10", clobber,
                    f"PUSH {dest}", f"CALL {SUB_CTOR}")
    assert calls == [(SUB_CTOR, None)]


@pytest.mark.parametrize("keep", ["CMP EBX,0x0", "TEST EBX,EBX", "JMP EBX", "ADD dword ptr [EBX],0x1",
                                  "XCHG EBX,dword ptr [ESP]", "FLD dword ptr [EBX]"])
def test_reads_and_memory_writes_leave_a_register_known(tmp_path, keep):
    calls = analyze(tmp_path, "MOV EBX,dword ptr [ESP + 0x4]", "ADD EBX,0x10", keep, "PUSH EBX", f"CALL {SUB_CTOR}")
    expected = None if keep.startswith("XCHG") else 0x10      # XCHG with memory loads EBX from it
    assert calls == [(SUB_CTOR, expected)]


def test_the_stack_tracks_pushes_pops_releases_and_reservations(tmp_path):
    calls = analyze(tmp_path,
                    "SUB ESP,0x8",                              # reserved: this is now at +0xc
                    "MOV ESI,dword ptr [ESP + 0xc]",
                    "PUSH ESI",
                    "PUSH 0x1",
                    "ADD ESP,0x2",                              # under a slot: pops nothing
                    "POP ECX",                                  # the 0x1
                    "POP EDI",                                  # this
                    "ADD ESP,-0x4",                             # reserves, as SUB ESP would
                    "SUB ESP,-0x4",                             # releases
                    "ADD ESP,0x10",                             # more than was pushed
                    "POP EAX",                                  # nothing left to pop
                    "PUSH EDI",
                    "PUSH 0x40",
                    "CALL x__STK_FUN_1",                        # takes its size argument
                    "CALL x__STK_FUN_1",
                    "CALL x__STK_FUN_1",                        # nothing left for it
                    f"CALL {SUB_CTOR}",
                    "CALL x_CPart_init_FUN_1",                  # returns nothing known
                    "PUSH EAX",
                    f"CALL {SUB_CTOR}")
    assert calls == [(SUB_CTOR, None), (SUB_CTOR, None)]


def test_a_pop_into_memory_still_pops(tmp_path):
    calls = analyze(tmp_path, "MOV EBX,dword ptr [ESP + 0x4]", "PUSH EBX", "PUSH 0x1", "POP dword ptr [EAX]",
                    f"CALL {SUB_CTOR}")
    assert calls == [(SUB_CTOR, 0)]


def test_a_sub_object_call_with_nothing_pushed_has_no_offset(tmp_path):
    assert analyze(tmp_path, f"CALL {SUB_CTOR}") == [(SUB_CTOR, None)]


def test_this_is_found_through_an_ebp_frame(tmp_path):
    calls = analyze(tmp_path, "PUSH EBP", "MOV EBP,ESP", "MOV EAX,dword ptr [EBP + 0x8]", "ADD EAX,0x20",
                    "PUSH EAX", f"CALL {SUB_CTOR}", "MOV ECX,dword ptr [EBP + 0xc]", "PUSH ECX", f"CALL {SUB_CTOR}")
    assert calls == [(SUB_CTOR, 0x20), (SUB_CTOR, None)]


def test_a_realigned_stack_hides_this(tmp_path):
    calls = analyze(tmp_path, "AND ESP,0xfffffff0", "MOV EAX,dword ptr [ESP + 0x4]", "PUSH EAX", f"CALL {SUB_CTOR}")
    assert calls == [(SUB_CTOR, None)]


def test_an_empty_listing_has_no_calls(tmp_path):
    assert analyze(tmp_path) == []


@pytest.mark.parametrize("path, unit", [
    ("/p/src/core/zombie.cpp/CZombie_dtor_FUN_1.asm", "core/zombie.cpp"),
    ("/p/src/core/zombie.c/CZombie_dtor_FUN_1.asm", "unknown"),
])
def test_a_function_is_grouped_under_its_unit(path, unit):
    assert ar._source_unit(path) == unit


def put(src, rel, *instructions, cpp = ""):
    path = src / rel
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(asm_text(*instructions))
    if cpp is not None:
        path.with_suffix(".cpp").write_text(cpp)


def test_the_report_splits_finished_unfinished_and_unknown(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(ar, "log_info", logged.append)
    src = tmp_path / "src"
    offset = ("MOV EBX,dword ptr [ESP + 0x4]", "ADD EBX,0x158", "PUSH EBX", f"CALL {SUB_CTOR}")
    put(src, "core/zombie.cpp/CZombie_ctor_FUN_00401000.asm", *offset, cpp = "f(ADJ(this_ptr, 0x158));")
    put(src, "core/bat.cpp/CBat_ctor_FUN_00402000.asm", *offset)
    put(src, "core/bat.cpp/CBat_dtor_FUN_00402100.asm", f"CALL {SUB_CTOR}")
    put(src, "core/bat.cpp/CBat_dtor_FUN_00402200.asm", "RET", cpp = None)        # no sub-objects: never read
    put(src, "core/bat.cpp/CBat_ctor_extra.asm", *offset, cpp = None)              # not a ctor's own file
    put(src, "crt/new.c/CNew_ctor_FUN_00403000.asm", *offset, cpp = None)
    reports = tmp_path / "reports"
    reports.mkdir()
    assert ar.generate_adj_pointer_report(str(src), str(reports)) == 2
    text = (reports / "adj_pointer_types.txt").read_text()
    assert text.startswith(f"Scanning 5 ctor/dtor asm files in {src}...")
    assert "UNFINISHED CTORS/DTORS (2 files still need ADJ)" in text
    assert ("  [core/bat.cpp]\n    CBat_ctor_FUN_00402000:\n      CPart_ctor @ this+0x158 (344) -> CBat_ptr_344\n"
            "    CBat_dtor_FUN_00402100:\n      CPart_ctor @ ??? (UNKNOWN)\n") in text
    assert "ALREADY FINISHED (1 files have ADJ)\n" + "=" * 70 + "\n  CZombie_ctor_FUN_00401000\n" in text
    assert "  CBat_ptr_344  (0x158)\n  CZombie_ptr_344  (0x158)\n\nTotal: 2 types across 2 classes" in text
    assert text.endswith("MANUAL REVIEW NEEDED (1 calls with unknown offset)\n" + "=" * 70
                         + "\n  CBat_dtor_FUN_00402100.asm: CPart_ctor\n")
    assert logged[-1].endswith("(2 needed types)")


def test_a_report_with_nothing_to_adjust_has_no_optional_sections(tmp_path, monkeypatch):
    monkeypatch.setattr(ar, "log_info", lambda _msg: None)
    src = tmp_path / "src"
    put(src, "core/bat.cpp/CBat_ctor_FUN_00402000.asm", "RET")
    assert ar.generate_adj_pointer_report(str(src), str(tmp_path)) == 0
    text = (tmp_path / "adj_pointer_types.txt").read_text()
    assert "ALREADY FINISHED" not in text and "MANUAL REVIEW" not in text
    assert "UNFINISHED CTORS/DTORS (0 files still need ADJ)" in text
