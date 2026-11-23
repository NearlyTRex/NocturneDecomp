# Imports
import argparse
import importlib
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from boundary_program import DeletableSymbol, JavaIterator
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, DataType, FunctionDefinitionDataType, IntegerDataType
from ghidra_program import DataTypeManager, Instruction
from patch_program import DisassembleCommand, PatchProgram, at
from pe_helpers import OPTIONAL_OFFSET, SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
import fix_import_thunks as fit

KERNEL, WSOCK = "KERNEL32.DLL", "WSOCK32.DLL"
# Each DLL imports one function twice, which a PE may do: both stubs share its external
IMPORTS = [(KERNEL, ["CreateFileA", "ReleaseMutex", "Sleep", "ReleaseMutex"]), (WSOCK, [9, 3, 200, 9])]
IDATA_RVA = 0x2000
STUBS = 0x1010


def idata(imports):
    """The import section at IDATA_RVA, IAT first. -> (bytes, descriptor RVA, [slot RVA per import])."""
    iat_size = 4 * sum(len(functions) + 1 for _, functions in imports)
    ilt_rva = IDATA_RVA + iat_size
    descriptor_rva = ilt_rva + iat_size
    names_rva = descriptor_rva + 20 * (len(imports) + 1)
    names, iat, descriptors, slots = bytearray(), bytearray(), bytearray(), []

    def place(text, hint):
        rva = names_rva + len(names)
        names.extend((b"\0\0" if hint else b"") + text.encode("ascii") + b"\0" + b"\0" * (len(text) % 2))
        return rva

    for dll, functions in imports:
        first = IDATA_RVA + len(iat)
        for function in functions:
            slots.append(IDATA_RVA + len(iat))
            iat += struct.pack("<I", 0x80000000 | function if isinstance(function, int) else place(function, True))
        iat += bytes(4)
        descriptors += struct.pack("<IIIII", ilt_rva + first - IDATA_RVA, 0, 0, place(dll, False), first)
    return bytes(iat + iat + descriptors + bytes(20) + names), descriptor_rva, slots


def text(slots, table):
    """A JMP through a slot off the grid, one through no slot, then the stub table from STUBS,
    which ends the section. Without `table`, code that jumps through no slot at all."""
    if not table:
        return b"\xcc" * 0x40
    stray = b"\xff\x25" + struct.pack("<I", slots[0]) + b"\xff\x25" + bytes(4)
    stubs = b"".join(b"\xff\x25" + struct.pack("<I", s) for s in slots)
    return stray + b"\xcc" * (STUBS - 0x1000 - len(stray)) + stubs


def write_pe(path, table = True):
    section, descriptor_rva, slots = idata(IMPORTS)
    code = text(slots, table)
    image = bytearray(build_sectioned_pe([(".text", code, SECTION_EXECUTE), (".idata", section, 0)], image_base = 0))
    struct.pack_into("<I", image, OPTIONAL_OFFSET + 96 + 8, descriptor_rva)
    path.write_bytes(bytes(image))
    return code


def test_the_import_directory_names_every_slot_by_name_or_ordinal(tmp_path):
    write_pe(tmp_path / "game.exe")
    base, iat, _data, r2f = fit.parse_pe_imports(str(tmp_path / "game.exe"))
    assert base == 0 and r2f(0x9000) is None
    assert sorted(iat.values(), key = str)[:3] == [(KERNEL, "CreateFileA", None), (KERNEL, "ReleaseMutex", None),
                                                 (KERNEL, "ReleaseMutex", None)]
    assert (WSOCK, "htons", 9) in iat.values() and (WSOCK, None, 200) in iat.values()


def test_a_file_that_is_not_a_pe_is_refused(tmp_path):
    (tmp_path / "x.exe").write_bytes(b"MZ" + bytes(0x3e) + b"\x40\0\0\0" + b"NOPE")
    with pytest.raises(ValueError, match = "not a PE"):
        fit.parse_pe_imports(str(tmp_path / "x.exe"))


def stubs_of(tmp_path):
    write_pe(tmp_path / "game.exe")
    base, iat, data, r2f = fit.parse_pe_imports(str(tmp_path / "game.exe"))
    return fit.find_stub_table(data, r2f, base, iat)


def test_the_stub_table_is_the_longest_run_on_a_six_byte_grid(tmp_path):
    found = stubs_of(tmp_path)
    assert [va for va, *_ in found] == [0x1000] + [STUBS + 6 * i for i in range(8)]
    run = fit.contiguous_run(found)
    assert [va for va, *_ in run] == [STUBS + 6 * i for i in range(8)]
    assert run[-1][:4] == (STUBS + 42, WSOCK, "htons", 9)               # ends on the blob's last byte
    assert fit.contiguous_run([]) == []
    assert [va for va, *_ in fit.contiguous_run(found[:3] + [(0x2000,)])] == [STUBS, STUBS + 6]


def test_names_follow_the_one_standard():
    assert fit.thunk_name(WSOCK, "htons") == "crt_wsock32.c_htons"
    assert not fit.is_decorated("htons", "htons") and not fit.is_decorated("Ordinal_9", "htons")
    assert fit.is_decorated("support_trisock.cpp_cleanupWinsock_FUN_005492a0", "WSACleanup")
    assert fit.is_decorated("crt_wsock32.c_htons", "htons") and fit.is_decorated("a.b", "b")
    assert fit.is_untyped("undefined f(undefined a)") and fit.is_untyped("void f(void)")
    assert not fit.is_untyped("void f(int a)") and not fit.is_untyped("int f(void)")


# --- Ghidra side ----------------------------------------------------------------------------------

class ExtFunction:
    def __init__(self, name, prototype, ordinal):
        self.name = name
        self.prototype = prototype
        self.thunk_target = None
        self.entry = Address(ordinal)
        self.entry.space_name = "EXTERNAL"

    def getSignature(self):
        return self

    def getPrototypeString(self):
        return self.prototype

    def getEntryPoint(self):
        return self.entry


class ExtLocation:
    def __init__(self, label, original, ordinal, function = None):
        self.label = label
        self.original = original
        self.address = f"EXTERNAL:{ordinal:08x}"
        self.function = function

    def getOriginalImportedName(self):
        return self.original

    def getLabel(self):
        return self.label

    def getExternalSpaceAddress(self):
        return self.address

    def getFunction(self):
        return self.function

    def getParentNameSpace(self):
        return "Global"

    def setName(self, _namespace, name, _source):
        self.label = name


class Externals:
    def __init__(self, libraries):
        self.libraries = libraries

    def getExternalLibraryNames(self):
        return list(self.libraries)

    def getExternalLocations(self, library):
        return JavaIterator(self.libraries[library])


# Types the external it is pointed at, unless the program refuses that function
class ApplySignature:
    def __init__(self, entry, definition, _source):
        self.entry = entry
        self.definition = definition

    def applyTo(self, program, _monitor):
        name = self.definition.getName()
        if name in program.refuse_types:
            return False
        program.ext_functions[name].prototype = f"int {name}(int a)"
        return True


class Archive:
    @staticmethod
    def openFileArchive(_file, _writable):
        return Archive()

    def getAllDataTypes(self):
        return JavaIterator([FunctionDefinitionDataType("CreateFileA"), IntegerDataType.dataType])


@pytest.fixture(name = "ghidra")
def fixture_ghidra(monkeypatch):
    monkeypatch.setattr(importlib.import_module("ghidra.app.cmd.disassemble"), "DisassembleCommand",
                        DisassembleCommand)
    monkeypatch.setattr(importlib.import_module("ghidra.app.cmd.function"), "ApplyFunctionSignatureCmd",
                        ApplySignature)
    monkeypatch.setattr(importlib.import_module("ghidra.program.model.data"), "FileDataTypeManager", Archive)


def program(code):
    """The table as Ghidra had it: a squatter at STUBS + 1, a referenced one at STUBS + 0x13,
    ReleaseMutex's stub an unnamed function, Sleep's already right, and the externals:
    ReleaseMutex renamed into a game function, CreateFileA and htons untyped, Sleep untyped
    with no prototype anywhere, closesocket never given a function."""
    prog = PatchProgram(code)
    funcs = {name: ExtFunction(name, proto, i) for i, (name, proto) in enumerate((
        ("CreateFileA", "undefined CreateFileA(undefined a)"), ("ReleaseMutex", "BOOL ReleaseMutex(HANDLE h)"),
        ("Sleep", "undefined Sleep(void)"), ("htons", "undefined htons(void)")))}
    prog.ext_functions, prog.refuse_types = funcs, set()
    prog.external_manager = Externals({
        "GDI32.DLL": [],
        "KERNEL32.DLL": [ExtLocation("CreateFileA", None, 1, funcs["CreateFileA"]),
                         ExtLocation("support_x.cpp_wait_FUN_00401000", "ReleaseMutex", 2, funcs["ReleaseMutex"]),
                         ExtLocation("Sleep", None, 3, funcs["Sleep"])],
        "WSOCK32.DLL": [ExtLocation("Ordinal_3", "Ordinal_3", 4), ExtLocation("htons", "Ordinal_9", 5, funcs["htons"])]})
    prog.data_type_manager = DataTypeManager([DataType("ushort", 2)])
    fm = prog.getFunctionManager()
    fm.add("crt_unknown.c_FUN_00001011", STUBS + 1, 11)
    table = prog.getSymbolTable()
    for name, kind in (("crt_unknown.c_FUN_00001011", "LABEL"), ("crt_unknown.c_FUN_00001011", "Function"),
                       ("LAB_00001011", "LABEL")):
        symbol = DeletableSymbol(name, at(STUBS + 1), symbol_type = kind)
        symbol.table = table
        table.symbols.append(symbol)
    fm.add("crt_unknown.c_FUN_00001023", STUBS + 0x13, 11)
    prog.getReferenceManager().add(0x5000, STUBS + 0x13)
    fm.add("FUN_00001016", STUBS + 6, 6).setThunkedFunction(funcs["ReleaseMutex"])
    fm.add("crt_kernel32.c_Sleep", STUBS + 12, 6).setThunkedFunction(funcs["Sleep"])
    for i in range(8):
        prog.getListing().add_instruction(STUBS + 6 * i, Instruction("JMP", length = 6))
    return prog


def args(**overrides):
    return argparse.Namespace(**{"force": False, "show": 12, "max_passes": 4, "apply": False, **overrides})


def planned(tmp_path, prog = None, **overrides):
    code = write_pe(tmp_path / "game.exe")
    prog = prog or program(code)
    stubs = fit.contiguous_run(stubs_of(tmp_path))
    rows, span = fit.plan(prog, stubs, args(**overrides), {"CreateFileA": FunctionDefinitionDataType("CreateFileA")})
    return prog, stubs, rows, span


def test_the_plan_sorts_every_stub_and_squatter(tmp_path):
    _prog, _stubs, rows, span = planned(tmp_path)
    assert span == (STUBS, STUBS + 47)
    assert rows["delete"] == [{"addr": "00001011", "name": "crt_unknown.c_FUN_00001011", "size": 11, "refs": 0,
                               "phase": 1}]
    assert [r["addr"] for r in rows["blocked"]] == ["00001023"]
    assert [r["want"] for r in rows["create"]] == ["crt_kernel32.c_CreateFileA", "crt_kernel32.c_ReleaseMutex",
                                                   "crt_wsock32.c_htons", "crt_wsock32.c_closesocket",
                                                   "crt_wsock32.c_htons"]
    assert [(r["have"], r["want"]) for r in rows["rename_thunk"]] == [("FUN_00001016", "crt_kernel32.c_ReleaseMutex")]
    assert [r["want"] for r in rows["ok_thunk"]] == ["crt_kernel32.c_Sleep"]
    assert rows["ext_rename"] == [{"addr": "EXTERNAL:00000002", "dll": KERNEL,
                                   "current": "support_x.cpp_wait_FUN_00401000", "want": "ReleaseMutex"}]
    assert [(r["api"], r["source"]) for r in rows["ext_sig"]] == [("CreateFileA", "win32-archive"),
                                                                  ("htons", "ordinal-table")]
    assert rows["no_prototype"] == [{"addr": "EXTERNAL:00000003", "api": "Sleep", "current": "undefined Sleep(void)"}]
    assert rows["unnamed_ordinal"] == [{"addr": "00001034", "dll": WSOCK, "ordinal": 200}]


def test_force_deletes_a_referenced_squatter_too(tmp_path):
    rows = planned(tmp_path, force = True)[2]
    assert [r["addr"] for r in rows["delete"]] == ["00001011", "00001023"] and rows["blocked"] == []


def test_the_report_shows_each_list_up_to_the_limit(tmp_path, capsys):
    _prog, stubs, rows, span = planned(tmp_path)
    fit.report("game.exe", rows, span, stubs, args(show = 1))
    out = capsys.readouterr().out
    assert "game.exe   import-thunk table 00001010..0000103f   8 stub(s)" in out
    assert "CREATE thunk                              5\n      00001010  crt_kernel32.c_CreateFileA\n" in out
    assert "      ... +4 more" in out and "already correct                           1" in out
    assert "00001034  WSOCK32.DLL ordinal 200" in out


def test_a_prototype_comes_from_the_ordinal_table_else_the_archive():
    prog = PatchProgram()
    prog.data_type_manager = DataTypeManager([DataType("ushort", 2), DataType("hostent", 16, category = "/winsock"),
                                              DataType("char", 1), IntegerDataType.dataType])
    htons = fit.build_signature(prog, "htons", {})
    assert htons.getName() == "htons" and [a.getName() for a in htons.getArguments()] == ["hostshort"]
    byname = fit.build_signature(prog, "gethostbyname", {})
    assert byname.getReturnType().getDataType().getName() == "hostent"
    assert fit.build_signature(prog, "closesocket", {}) is None                 # no _SOCKET type
    archived = FunctionDefinitionDataType("closesocket")
    assert fit.build_signature(prog, "closesocket", {"closesocket": archived}) is archived
    assert fit.build_signature(prog, "DirectSoundCreate", {}) is None           # no HRESULT
    assert fit.build_signature(prog, "Sleep", {}) is None


def test_the_archive_gives_its_function_definitions(tmp_path, ghidra, capsys):
    gdt = tmp_path / "windows.gdt"
    gdt.write_bytes(b"")
    assert list(fit.open_prototype_archive(str(gdt))) == ["CreateFileA"]
    assert "prototype archive: 1 function definition(s) from windows.gdt" in capsys.readouterr().out
    assert fit.open_prototype_archive(str(tmp_path / "none.gdt")) == {}


def test_an_external_is_found_by_its_original_name_in_its_own_library(tmp_path):
    prog = planned(tmp_path)[0]
    assert fit.external_for(prog, WSOCK, "htons", 9).getLabel() == "htons"
    assert fit.external_for(prog, KERNEL, "ReleaseMutex", None).getOriginalImportedName() == "ReleaseMutex"
    assert fit.external_for(prog, WSOCK, "CreateFileA", None) is None
    assert fit.external_for(prog, KERNEL, "Missing", None) is None


def test_the_pe_must_match_program_memory(tmp_path):
    code = write_pe(tmp_path / "game.exe")
    base, _iat, data, r2f = fit.parse_pe_imports(str(tmp_path / "game.exe"))
    prog = program(code)
    assert fit.verify_pe_matches(prog, base, data, r2f, STUBS)
    prog.memory.getBlock(at(STUBS)).data[0x1f] = 0
    assert not fit.verify_pe_matches(prog, base, data, r2f, STUBS)


def test_apply_rebuilds_the_table_and_fixes_the_externals(tmp_path, ghidra, capsys):
    prog, stubs, rows, span = planned(tmp_path)
    stats = fit.apply_plan(prog, rows, span, stubs, {"CreateFileA": FunctionDefinitionDataType("CreateFileA")})
    assert stats == {"deleted": 1, "created": 5, "renamed": 1, "ext_renamed": 1, "ext_typed": 2, "failed": 0}
    assert prog.transactions == [["Rebuild import-thunk table", True]]
    fm = prog.getFunctionManager()
    assert fm.getFunctionAt(at(STUBS + 1)) is None
    assert [s.getName() for s in prog.getSymbolTable().getSymbols(at(STUBS + 1))] == [
        "crt_unknown.c_FUN_00001011", "LAB_00001011"]
    # the clear took every stub's code, the ones that stay included; each is decoded again
    assert prog.disassembled[:8] == [STUBS + 6 * i for i in range(8)]
    assert prog.getListing().getInstructionAt(at(STUBS + 12)) is not None
    created = fm.getFunctionAt(at(STUBS))
    assert created.getName() == "crt_kernel32.c_CreateFileA"
    assert created.getThunkedFunction(False) is prog.ext_functions["CreateFileA"]
    renamed = fm.getFunctionAt(at(STUBS + 6))
    assert (renamed.getName(), renamed.getThunkedFunction(False)) == ("crt_kernel32.c_ReleaseMutex",
                                                                      prog.ext_functions["ReleaseMutex"])
    assert fm.getFunctionAt(at(STUBS + 30)).getThunkedFunction(False) is None        # closesocket: no function
    assert prog.external_manager.libraries[KERNEL][1].getLabel() == "ReleaseMutex"
    assert prog.ext_functions["htons"].prototype == "int htons(int a)"
    assert "applied: created=5, deleted=1, ext_renamed=1, ext_typed=2, failed=0, renamed=1" in capsys.readouterr().out


def test_without_squatters_the_table_is_not_cleared(tmp_path, ghidra):
    prog, stubs, rows, span = planned(tmp_path)
    rows["delete"] = []
    fit.apply_plan(prog, rows, span, stubs, {})
    assert prog.getListing().cleared == [] and STUBS + 6 not in prog.disassembled


def test_a_prototype_or_function_that_will_not_take_counts_as_failed(tmp_path, ghidra, monkeypatch):
    prog, stubs, rows, span = planned(tmp_path)
    prog.refuse_types.add("htons")

    class Refuse:
        def __init__(self, entry):
            self.entry = entry

        def applyTo(self, _program, _monitor):
            return False
    monkeypatch.setattr(importlib.import_module("ghidra.app.cmd.function"), "CreateFunctionCmd", Refuse)
    stats = fit.apply_plan(prog, rows, span, stubs, {})
    assert (stats["ext_typed"], stats["created"], stats["failed"]) == (0, 0, 7)       # CreateFileA has no archive


def test_an_error_rolls_the_pass_back(tmp_path, ghidra, capsys):
    prog, stubs, rows, span = planned(tmp_path)
    prog.external_manager.libraries[KERNEL][1].setName = None
    stats = fit.apply_plan(prog, rows, span, stubs, {})
    assert stats["error"] and prog.transactions == [["Rebuild import-thunk table", False]]
    assert "rolled back." in capsys.readouterr().out
    assert not fit.wrote_something(stats) and not fit.wrote_something(dict.fromkeys(("failed", "created"), 0))


# --- one program, and main -------------------------------------------------------------------------

def fix(tmp_path, prog = None, **overrides):
    prog, stubs, _rows, _span = planned(tmp_path, prog)
    return prog, fit.fix_program(prog, "game.exe", stubs, args(**overrides),
                                 {"CreateFileA": FunctionDefinitionDataType("CreateFileA")})


def test_a_dry_run_changes_nothing(tmp_path, capsys):
    prog, code = fix(tmp_path)
    assert code == 0 and prog.transactions == [] and "[dry-run]" in capsys.readouterr().out


def test_apply_iterates_to_a_fixpoint_then_saves(tmp_path, ghidra, capsys):
    prog, code = fix(tmp_path, apply = True)
    assert code == 0 and len(prog.transactions) == 1 and prog.getDomainFile().saves == 1
    assert "saved." in capsys.readouterr().out


def test_work_left_over_is_retried_each_pass_and_exits_1(tmp_path, ghidra, capsys):
    prog = program(write_pe(tmp_path / "game.exe"))
    prog.refuse_types.add("htons")
    prog, code = fix(tmp_path, prog, apply = True, max_passes = 3)
    assert code == 1 and len(prog.transactions) == 3 and prog.getDomainFile().saves == 1
    assert "-- pass 3: 1 row(s) still pending --" in capsys.readouterr().out


def test_a_pass_that_rolls_back_stops_the_passes_and_saves_nothing(tmp_path, ghidra, capsys):
    prog = program(write_pe(tmp_path / "game.exe"))
    prog.external_manager.libraries[KERNEL][1].setName = None
    prog, code = fix(tmp_path, prog, apply = True)
    assert code == 1 and len(prog.transactions) == 1 and prog.getDomainFile().saves == 0
    assert "nothing written for game.exe" in capsys.readouterr().out


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(fit.os, "_exit", sys.exit)
    monkeypatch.setenv("GHIDRA_INSTALL_DIR", str(tmp_path / "ghidra"))
    with pytest.raises(SystemExit) as exited:
        fit.main([str(tmp_path), "P", *argv])
    return exited.value.code, fake


def test_main_finds_the_pe_by_md5_and_says_when_there_is_none(monkeypatch, tmp_path, ghidra, capsys):
    code = write_pe(tmp_path / "game.exe")
    found = {"game.exe": str(tmp_path / "game.exe")}

    def find(name):
        if name not in found:
            raise FileNotFoundError(f"no copy of {name}")
        return found[name]
    monkeypatch.setattr(fit.sibling_match, "find_program_exe", find)
    exit_code, fake = run_main(monkeypatch, tmp_path, program(code), "game.exe", "other.exe")
    assert exit_code == 0 and fake.closed == 1
    out = capsys.readouterr().out
    assert "!! no copy of other.exe" in out and "!! no PE for other.exe at  - skipped" in out
    assert "NOTE: no Win32 prototype archive at" in out and "[dry-run]" in out


def test_main_takes_the_pe_from_a_folder_and_the_default_archive(monkeypatch, tmp_path, ghidra, capsys):
    code = write_pe(tmp_path / "game.exe")
    gdt = tmp_path / "ghidra" / "Ghidra" / "Features" / "Base" / "data" / "typeinfo" / "win32" / "windows_vs12_32.gdt"
    gdt.parent.mkdir(parents = True)
    gdt.write_bytes(b"")
    calls = []
    monkeypatch.setattr(fit.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program(code)
    exit_code, _ = run_main(monkeypatch, tmp_path, prog, "game.exe", "--pe-dir", str(tmp_path), "--apply")
    assert exit_code == 0 and calls[0][-2:] == ["--tag", "pre-import-thunks"] and prog.getDomainFile().saves == 1
    assert "prototype archive: 1 function definition(s)" in capsys.readouterr().out


def test_main_skips_a_pe_without_a_table_or_one_that_does_not_match(monkeypatch, tmp_path, ghidra, capsys):
    write_pe(tmp_path / "game.exe")
    (tmp_path / "bare").mkdir()
    write_pe(tmp_path / "bare" / "game.exe", table = False)
    assert run_main(monkeypatch, tmp_path, None, "game.exe", "--pe-dir", str(tmp_path / "bare"),
                    "--proto-archive", str(tmp_path / "none.gdt"))[0] == 0
    out = capsys.readouterr().out
    assert f"no Win32 prototype archive at {tmp_path / 'none.gdt'}" in out
    assert "!! game.exe: no import-thunk table in the PE - skipped" in out
    code, _ = run_main(monkeypatch, tmp_path, PatchProgram(bytes(0x40)), "game.exe", "--pe-dir", str(tmp_path))
    assert code == 1 and "on-disk PE does not match program memory - skipped" in capsys.readouterr().out


def test_an_error_still_closes_the_project(monkeypatch, tmp_path, ghidra, capsys):
    write_pe(tmp_path / "game.exe")
    code, fake = run_main(monkeypatch, tmp_path, PatchProgram(), "game.exe", "--pe-dir", str(tmp_path))
    assert code == 1 and fake.closed == 1 and "ERROR: no memory at 00001010" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(fit.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_import_thunks.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_import_thunks.py"), run_name = "__main__")
    assert exit_info.value.code == 0
