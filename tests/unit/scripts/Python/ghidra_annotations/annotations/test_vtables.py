# Imports
import struct

# Local imports
from ghidra_program import Address, Program
from ghidra_annotations.annotations.vtables import export_vtables
from ghidra_annotations.util import load_json_file, load_json_files

METHODS = [0x401000, 0x401010, 0x401020, 0x401030]


def pointers(*targets):
    return b"".join(struct.pack("<I", t) for t in targets)


def program_with_tables(rdata, rdata_at = 0x500000):
    program = Program()
    memory = program.getMemory()
    memory.add_block(".text", 0x401000, b"\xc3" * 0x100, execute = True)
    memory.add_block(".rdata", rdata_at, rdata)
    for i, method in enumerate(METHODS):
        program.getFunctionManager().add(f"CThing_method{i}", method)
    program.getFunctionManager().getFunctionAt(Address(0x401010)).convention = "__thiscall"
    program.getFunctionManager().getFunctionAt(Address(0x401010)).parameter_count = 2
    return program


def test_runs_of_three_or_more_function_pointers_are_vtables(tmp_path, capsys):
    # A four-slot table, a pointer to nothing, then 122 slots: past the 100 the scan used to stop at
    rdata = pointers(*METHODS) + pointers(0x12345678) + pointers(*METHODS[:2]) + pointers(*METHODS * 30)
    export_vtables(program_with_tables(rdata), str(tmp_path))
    tables = sorted(load_json_files(str(tmp_path), "vtables"), key = lambda t: t["addr"])
    assert [(t["addr"], t["count"], t["size"]) for t in tables] == [("00500000", 4, 16), ("00500014", 122, 488)]
    assert tables[0]["functions"][1] == {"offset": 4, "ptr_addr": "00500004", "func_addr": "00401010",
        "func_name": "CThing_method1", "convention": "__thiscall", "param_count": 2}
    assert (tables[0]["block"], tables[0]["method"]) == (".rdata", "raw_scan")
    conventions = load_json_file(str(tmp_path), "vtable_conventions")
    assert conventions["convention_summary"] == {"__cdecl": 94, "__thiscall": 32}
    assert conventions["non_cdecl_count"] == 32
    assert conventions["non_cdecl_functions"][0] == {"vtable_addr": "00500000", "offset": 4,
        "func_addr": "00401010", "func_name": "CThing_method1", "convention": "__thiscall", "param_count": 2}
    log = capsys.readouterr().out
    assert "VTable 2: 00500014 (122 functions)" in log
    assert "... and 117 more functions" in log


def test_a_misaligned_block_is_scanned_from_its_first_aligned_slot(tmp_path):
    export_vtables(program_with_tables(b"\0\0" + pointers(*METHODS[:3]) + b"\0\0", rdata_at = 0x500002),
                   str(tmp_path))
    assert [t["addr"] for t in load_json_files(str(tmp_path), "vtables")] == ["00500004"]


def test_uninitialized_and_executable_blocks_are_not_scanned(tmp_path, capsys):
    program = program_with_tables(pointers(*METHODS))
    program.getMemory().getBlocks()[1].initialized = False
    program.getMemory().add_block(".code2", 0x600000, pointers(*METHODS), execute = True)
    export_vtables(program, str(tmp_path))
    assert load_json_files(str(tmp_path), "vtables") == []
    assert load_json_file(str(tmp_path), "vtable_conventions") == {"non_cdecl_count": 0}
    assert "No vtables found." in capsys.readouterr().out


def test_a_slot_at_the_end_of_memory_ends_the_table(tmp_path):
    export_vtables(program_with_tables(pointers(*METHODS[:3]) + b"\x10\x10"), str(tmp_path))
    assert [t["count"] for t in load_json_files(str(tmp_path), "vtables")] == [3]
