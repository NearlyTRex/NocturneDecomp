# Imports
import importlib
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import BuiltInDataType, ParameterImpl, PointerDataType, StructureDataType, Variable
from ghidra_program import Address, Program
from repo_paths import SCRIPTS_DIR
import fix_this_ptr as ftp

INT = BuiltInDataType("int", 4)
UNDEFINED = BuiltInDataType("undefined", 1)
CHAR_P = PointerDataType(BuiltInDataType("char", 1))
PAGE = StructureDataType("SPageResource", length = 24)
HERO = StructureDataType("CHero", length = 16)


def program_with(*types):
    program = Program()
    program.getDataTypeManager().add(INT, UNDEFINED, *types)
    return program


def method(program, name, entry, params = (), conv = "__cdecl", ret = UNDEFINED):
    f = program.getFunctionManager().add(name, entry)
    f.parameters = [ParameterImpl(n, t, program) for n, t in params]
    f.convention, f.return_type = conv, ret
    return f


def stack(name, kind, offset):
    return (name, kind, offset)


def names(rows):
    return {k: [r.get("name", r.get("have")) for r in v] for k, v in rows.items() if v}


def test_the_schema_takes_classes_and_structs():
    assert ftp.METHOD_RE.match("core_fldnotes.cpp_SPageResource_draw_FUN_004ba930").group("cls") == "SPageResource"
    assert ftp.METHOD_RE.match("core_hero.cpp_CHero_ctor_FUN_00401000").group("cls") == "CHero"
    assert ftp.METHOD_RE.match("core_hero.cpp_heroThing_FUN_00401000") is None
    assert (ftp.norm(" a * "), ftp.norm(None)) == ("a*", "")


def test_the_skip_file_drops_comments_and_blanks(tmp_path):
    path = tmp_path / "skip.txt"
    path.write_text("# header\n\nx.cpp_CA_m_FUN_1  # why\nbw1.exe:y\n")
    assert ftp.load_skip(str(path)) == {"x.cpp_CA_m_FUN_1", "bw1.exe:y"}
    assert ftp.load_skip(str(tmp_path / "absent.txt")) == set()


def test_the_resolver_finds_types_by_path_or_name_and_wraps_pointers():
    program = program_with(PAGE)
    resolve = ftp.make_resolver(program)
    assert resolve("SPageResource") is PAGE
    assert resolve("SPageResource **").getDataType().getDataType() is PAGE
    assert resolve("SNone *") is None
    # Cached, so a second ask is the same object
    first = resolve("SPageResource **")
    assert resolve("SPageResource **") is first
    # Either of Ghidra's overloads finds nothing
    program.getDataTypeManager().getDataType = lambda _path_or_category, _name = None: None
    assert ftp.make_resolver(program)("int") is INT


def test_a_parameterless_member_takes_the_decompilers_prototype():
    program = program_with(PAGE)
    f = method(program, "core_fldnotes.cpp_SPageResource_setLink_FUN_004ba78e", 0x4ba78e, conv = "unknown")
    inferred = ([stack("param_1", INT, 4), stack("param_2", CHAR_P, 8)], INT)
    _total, rows = ftp.plan(program, "bw1.exe", set(), lambda _f: inferred)
    (row,) = rows["derive"]
    assert [(n, ftp.type_text(t)) for n, t in row["params"]] == [("this_ptr", "SPageResource *"),
                                                               ("param_2", "char *")]
    assert row["ret"] is INT
    assert ftp.apply_plan(program, rows)
    conv, _ret, params = f.prototype
    assert conv == "__cdecl" and [p.getName() for p in params] == ["this_ptr", "param_2"]


def test_a_defined_return_type_is_kept_over_the_decompilers():
    program = program_with(PAGE)
    f = method(program, "a.cpp_SPageResource_m_FUN_00000010", 0x10, ret = INT)
    params, ret = ftp.derive(f, "SPageResource", ([stack("p", INT, 4)], UNDEFINED), ftp.make_resolver(program))
    assert ret is INT and params[0][0] == "this_ptr"
    f.return_type = None
    assert ftp.derive(f, "SPageResource", ([stack("p", INT, 4)], UNDEFINED), ftp.make_resolver(program))[1] is UNDEFINED


@pytest.mark.parametrize("conv, cls, inferred, why", [
    ("__stack2_esi", "SPageResource", ([stack("p", INT, 4)], INT), "convention __stack2_esi is not cdecl"),
    (None, "SNone", ([stack("p", INT, 4)], INT), "SNone is not a type in this program"),
    ("__cdecl", "SPageResource", None, "the decompiler could not infer its parameters"),
    ("__cdecl", "SPageResource", ([], INT), "it reads no arguments"),
    ("__cdecl", "SPageResource", ([stack("p", INT, None)], INT), "not consecutive stack arguments"),
    ("__cdecl", "SPageResource", ([stack("p", INT, 8)], INT), "not consecutive stack arguments"),
    ("__cdecl", "SPageResource", ([stack("p", INT, 4), stack("q", INT, 4)], INT), "not consecutive"),
])
def test_a_receiver_is_derived_only_from_the_first_cdecl_stack_slot(conv, cls, inferred, why):
    program = program_with(PAGE)
    f = method(program, "a.cpp_SPageResource_m_FUN_00000010", 0x10, conv = conv)
    params, reason = ftp.derive(f, cls, inferred, ftp.make_resolver(program))
    assert params is None and why in reason


def test_a_stub_reading_nothing_takes_this_alone_when_its_vtable_holds_it():
    program = program_with(PAGE)
    held = method(program, "a.cpp_SPageResource_getName_FUN_00000100", 0x100, conv = "unknown")
    other = method(program, "a.cpp_SPageResource_tell_FUN_00000200", 0x200)
    stray = method(program, "a.cpp_SPageResource_seek_FUN_00000300", 0x300)
    lone = method(program, "a.cpp_SPageResource_lone_FUN_00000400", 0x400)
    symbols, refs = program.getSymbolTable(), program.getReferenceManager()
    symbols.createLabel(Address(0x5000), "g_SPageResourceVTable", None)
    symbols.createLabel(Address(0x6000), "g_SOtherVTable", None)
    symbols.createLabel(Address(0x7000), "DAT_00007000", None)
    refs.add(0x5008, 0x100)  # third slot of its own class's table
    refs.add(0x6004, 0x200)  # another class's table
    refs.add(0x7004, 0x300)  # the nearest label is not a vtable
    refs.add(0x9000, 0x400)  # no label within the slots looked back over
    owners = ftp.vtable_owners(program)
    assert (owners(held), owners(other), owners(stray), owners(lone)) == ({"SPageResource"}, {"SOther"},
                                                                          set(), set())
    _total, rows = ftp.plan(program, "bw1.exe", set(), lambda _f: ([], UNDEFINED))
    (row,) = rows["derive"]
    assert row["name"] == held.getName() and [n for n, _t in row["params"]] == ["this_ptr"]
    assert len(rows["blocked"]) == 3


def test_without_a_decompiler_a_parameterless_member_is_blocked():
    program = program_with(PAGE)
    method(program, "a.cpp_SPageResource_m_FUN_00000010", 0x10)
    _total, rows = ftp.plan(program, "bw1.exe", set())
    assert rows["blocked"][0]["why"] == "declares no parameters: the decompiler could not infer its parameters"


def test_each_receiver_defect_gets_its_own_repair():
    minecar = StructureDataType("CMineCar", length = 8)
    program = program_with(PAGE, HERO, minecar)
    method(program, "a.cpp_CHero_ok_FUN_00000010", 0x10, [("this_ptr", PointerDataType(HERO))])
    method(program, "a.cpp_SPageResource_arrdtor2_FUN_00000020", 0x20,
           [("objs", PointerDataType(PAGE)), ("count", INT)])
    method(program, "a.cpp_CMinecar_m_FUN_00000030", 0x30, [("this_ptr", PointerDataType(minecar))])
    method(program, "a.cpp_CHero_bad_FUN_00000040", 0x40, [("value", INT)])
    method(program, "a.cpp_CHero_skipped_FUN_00000050", 0x50)
    method(program, "a.cpp_CHero_skipped2_FUN_00000060", 0x60)
    method(program, "a.cpp_freeFunction_FUN_00000070", 0x70)
    skip = {"a.cpp_CHero_skipped_FUN_00000050", "bw1.exe:a.cpp_CHero_skipped2_FUN_00000060"}
    total, rows = ftp.plan(program, "bw1.exe", skip)
    assert total == 6
    assert names(rows) == {"param_rename": ["a.cpp_SPageResource_arrdtor2_FUN_00000020"],
                           "func_rename": ["a.cpp_CMinecar_m_FUN_00000030"],
                           "blocked": ["a.cpp_CHero_bad_FUN_00000040"]}
    assert rows["func_rename"][0]["want"] == "a.cpp_CMineCar_m_FUN_00000030"
    assert "neither side is provably right" in rows["blocked"][0]["why"]
    assert ftp.apply_plan(program, rows)
    fm = program.getFunctionManager()
    assert fm.getFunctionAt(program.getAddressFactory().getAddress("00000020")).getParameters()[0].getName() \
        == "this_ptr"
    assert fm.getFunctionAt(program.getAddressFactory().getAddress("00000030")).getName() \
        == "a.cpp_CMineCar_m_FUN_00000030"


SCAT_FIX = {"program": "nocturne.exe", "addr": "004fcd20",
            "expect": "core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd20",
            "name": "core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20",
            "ret": "int", "conv": "__cdecl", "params": [("this_ptr", "CScat *")], "note": "n"}
KEYS_FIX = {"program": "nocturne.exe", "addr": "004c41b0",
            "expect": "engine_keys.cpp_CKeys_clearKeypresses_FUN_004c41b0",
            "name": "engine_keys.cpp_clearKeypresses_FUN_004c41b0",
            "ret": "void", "conv": "__cdecl", "params": [], "note": "n"}
POD_FIX = {"program": "nocturne.exe", "addr": "004f8570",
           "expect": "engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570",
           "name": "engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570",
           "ret": "CPodAuditRecord *", "conv": "__stack2_esi",
           "params": [("this_ptr", "CPodFile *"), ("record_index", "int"),
                      ("out_record", "CPodAuditRecord *")], "note": "n"}
LOCAL_FIX = {"program": "nocedit.exe", "addr": "00478010",
             "func": "core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010",
             "renames": [("this_ptr", "bounds_ptr_bits"), ("this_ptr_00", "frame_bounds_ptr")],
             "note": "n"}
FIXES = {"prototypes": [SCAT_FIX, KEYS_FIX, POD_FIX], "local_renames": [LOCAL_FIX]}


def test_curated_repairs_load_from_a_json_file(tmp_path):
    assert ftp.load_fixes(None) == {"prototypes": [], "local_renames": []}
    path = tmp_path / "fixes.json"
    path.write_text(json.dumps(FIXES))
    assert ftp.load_fixes(str(path)) == FIXES
    path.write_text("{}")
    assert ftp.load_fixes(str(path)) == {"prototypes": [], "local_renames": []}


def curated_program(name, params = (), conv = "__cdecl", ret = None):
    program = program_with(StructureDataType("CScat", length = 8))
    f = method(program, name, 0x4fcd20, params, conv = conv, ret = ret or UNDEFINED)
    return program, f


def test_a_curated_entry_wins_over_derivation_and_applies_its_prototype():
    program, f = curated_program("core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd20")
    _total, rows = ftp.plan(program, "nocturne.exe", set(), lambda _f: pytest.fail("not derived"), FIXES)
    assert names(rows) == {"proto": ["core_scat.cpp_CScat_handlePureVirtualCall_FUN_004fcd20"]}
    assert ftp.apply_plan(program, rows)
    assert f.getName() == "core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20"
    assert [p.getName() for p in f.prototype[2]] == ["this_ptr"]


def test_a_curated_entry_already_applied_is_left():
    scat = PointerDataType(StructureDataType("CScat", length = 8))
    program, f = curated_program("core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20", [("this_ptr", scat)], ret = INT)
    assert not any(ftp.plan(program, "nocturne.exe", set(), fixes = FIXES)[1].values())
    # Named right already, typed wrong: only the prototype is written
    f.return_type = UNDEFINED
    assert ftp.apply_plan(program, ftp.plan(program, "nocturne.exe", set(), fixes = FIXES)[1])
    assert f.prototype is not None and f.getSource() == "DEFAULT"


def test_a_curated_entry_reports_each_difference():
    _program, f = curated_program("x", [("me", INT)], conv = "__stdcall")
    assert [d[0] for d in ftp.proto_diffs(f, SCAT_FIX)] == ["name", "ret", "conv", "params"]


def test_a_curated_entry_is_blocked_when_stale_or_missing_types():
    program, _f = curated_program("core_scat.cpp_somethingElse_FUN_004fcd20")
    assert ftp.plan(program, "nocturne.exe", set(), fixes = FIXES)[1]["blocked"][0]["why"].startswith("STALE")
    program = program_with()
    method(program, "engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570", 0x4f8570)
    why = ftp.plan(program, "nocturne.exe", set(), fixes = FIXES)[1]["blocked"][0]["why"]
    assert why == "type(s) not in this program's database: CPodAuditRecord *, CPodFile *"


def local_program(*locals_):
    program = program_with()
    f = method(program, "core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010", 0x478010,
               [("this_ptr", PointerDataType(StructureDataType("CKeyFramedModel")))])
    f.local_variables = [Variable(n, INT) for n in locals_]
    return program, f


def test_a_local_squatting_on_the_receiver_name_moves_first():
    program, f = local_program("this_ptr", "this_ptr_00", "frame_bounds_ptr")
    rows = ftp.plan(program, "nocedit.exe", set(), fixes = FIXES)[1]
    assert rows["local_rename"][0]["renames"] == [("this_ptr", "bounds_ptr_bits")]
    assert ftp.apply_plan(program, rows)
    assert [v.getName() for v in f.getLocalVariables()] == ["bounds_ptr_bits", "this_ptr_00", "frame_bounds_ptr"]
    # Another program, a function that is not there, or no fixes file has nothing to move
    assert ftp.plan(program, "bw1.exe", set(), fixes = FIXES)[1]["local_rename"] == []
    assert ftp.plan_locals(program_with(), "nocedit.exe", [LOCAL_FIX]) == []
    assert ftp.plan(local_program("other")[0], "nocedit.exe", set(), fixes = FIXES)[1]["local_rename"] == []
    assert ftp.plan(local_program("this_ptr")[0], "nocedit.exe", set())[1]["local_rename"] == []


def test_a_failed_edit_is_counted_and_the_rest_still_land(capsys):
    program, f = local_program("other")
    rows = {k: [] for k in ftp.ROW_KINDS}
    rows["local_rename"] = [{"addr": "00478010", "name": f.getName(), "renames": [("gone", "x")]}]
    assert not ftp.apply_plan(program, rows)
    out = capsys.readouterr().out
    assert f"!! {f.getName()} local gone: no local gone" in out and "failed=1" in out
    assert program.transactions == [["Fix class-method receivers", True]]


def every_kind_of_row():
    page = PointerDataType(PAGE)
    return {
        "local_rename": [{"addr": "1", "name": "L", "renames": [("this_ptr", "x")]}],
        "param_rename": [{"addr": "2", "name": f"P{i}", "from": "objs", "type": "SPageResource *"}
                         for i in range(3)],
        "func_rename": [{"addr": "3", "name": "F", "want": "G", "cls": "CMinecar", "have_cls": "CMineCar"}],
        "derive": [{"addr": "4", "name": "D", "params": [("this_ptr", page), ("b", INT)], "ret": INT}],
        "proto": [{"addr": "5", "have": "C", "fix": SCAT_FIX},
                  {"addr": "6", "have": "K", "fix": KEYS_FIX}],
        "blocked": [{"addr": "7", "name": "B", "why": "because"}],
    }


def test_the_report_shows_every_kind_up_to_the_limit(capsys):
    ftp.report("bw1.exe", 9, every_kind_of_row(), 2)
    out = capsys.readouterr().out
    assert "bw1.exe   9 function(s) match the class-method schema" in out
    assert "        this_ptr  ->  x" in out and "  ... 1 more" in out
    assert "        -> G   (CMinecar is not a type, CMineCar is)" in out
    assert "-> int D(SPageResource * this_ptr, int b) [__cdecl]" in out
    assert "-> int core_scat.cpp_CScat_isWeaponDrawn_FUN_004fcd20(CScat * this_ptr) [__cdecl]" in out
    assert "-> void engine_keys.cpp_clearKeypresses_FUN_004c41b0(void) [__cdecl]" in out
    assert "  7  B\n        because" in out
    ftp.report("bw1.exe", 0, {k: [] for k in ftp.ROW_KINDS}, 2)
    assert "--" not in capsys.readouterr().out


class FakeDecompiler:
    """DecompInterface: one HighFunction per function, or none when it failed."""
    opened, disposed = [], []
    highs = {}

    def openProgram(self, program):
        self.opened.append(program)

    def decompileFunction(self, f, _timeout, _monitor):
        return FakeResult(self.highs.get(f.getName()))

    def dispose(self):
        self.disposed.append(True)


class FakeResult:
    def __init__(self, high):
        self.high = high

    def getHighFunction(self):
        return self.high


class FakeStorage:
    def __init__(self, offset):
        self.offset = offset

    def isStackStorage(self):
        return self.offset is not None

    def getStackOffset(self):
        return self.offset


class FakeSymbol:
    def __init__(self, name, kind, offset):
        self.name, self.kind, self.storage = name, kind, FakeStorage(offset)

    def getName(self):
        return self.name

    def getDataType(self):
        return self.kind

    def getStorage(self):
        return self.storage


class FakeHigh:
    def __init__(self, symbols, ret):
        self.symbols, self.ret = symbols, ret

    def getLocalSymbolMap(self):
        return self

    def getNumParams(self):
        return len(self.symbols)

    def getParamSymbol(self, i):
        return self.symbols[i]

    def getFunctionPrototype(self):
        return self

    def getReturnType(self):
        return self.ret


@pytest.fixture(name = "decompiler")
def fixture_decompiler(monkeypatch):
    monkeypatch.setattr(importlib.import_module("ghidra.app.decompiler"), "DecompInterface", FakeDecompiler)
    monkeypatch.setattr(FakeDecompiler, "highs", {})
    monkeypatch.setattr(FakeDecompiler, "disposed", [])
    return FakeDecompiler


def test_the_decompiler_inference_reads_the_high_functions_parameters(decompiler):
    program = program_with()
    decompiler.highs["f"] = FakeHigh([FakeSymbol("param_1", INT, 4), FakeSymbol("in_EAX", INT, None)], INT)
    infer, dispose = ftp.decompiler_inference(program)
    assert infer(method(program, "f", 0x10)) == ([("param_1", INT, 4), ("in_EAX", INT, None)], INT)
    assert infer(method(program, "g", 0x20)) is None
    dispose()
    assert decompiler.disposed == [True]


def run_main(monkeypatch, pyghidra, *argv):
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    monkeypatch.setattr(sys, "argv", ["fix_this_ptr.py", "proj", "P", *argv])
    monkeypatch.setattr(ftp.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        ftp.main()
    return exited.value.code


def bw_program(decompiler):
    program = program_with(PAGE)
    f = method(program, "core_fldnotes.cpp_SPageResource_draw_FUN_004ba930", 0x4ba930, conv = "unknown")
    decompiler.highs[f.getName()] = FakeHigh([FakeSymbol("param_1", INT, 4)], UNDEFINED)
    return program, f


def test_main_reports_without_writing(monkeypatch, capsys, tmp_path, decompiler):
    program, f = bw_program(decompiler)
    skip = tmp_path / "skip.txt"
    skip.write_text("nothing\n")
    fixes = tmp_path / "fixes.json"
    fixes.write_text(json.dumps(FIXES))
    assert run_main(monkeypatch, FakePyghidra(program), "bw1.exe", "--skip-file", str(skip),
                    "--fixes", str(fixes)) == 0
    out = capsys.readouterr().out
    assert "skip.txt: 1 exemption(s)" in out and "[dry-run]" in out
    assert f.prototype is None and program.getDomainFile().saves == 0


def test_main_applies_and_saves_after_a_snapshot(monkeypatch, capsys, decompiler):
    program, f = bw_program(decompiler)
    calls = []
    monkeypatch.setattr(ftp.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    assert run_main(monkeypatch, FakePyghidra(program), "bw1.exe", "--apply") == 0
    assert calls[0][-2:] == ["--tag", "pre-this-ptr"]
    assert f.prototype[0] == "__cdecl" and program.getDomainFile().saves == 1
    assert "saved." in capsys.readouterr().out
    # Nothing left to do: nothing written
    f.parameters = f.prototype[2]
    assert run_main(monkeypatch, FakePyghidra(program), "bw1.exe", "--apply", "--no-snapshot") == 0
    assert "nothing written for bw1.exe" in capsys.readouterr().out


def test_main_refuses_to_mutate_without_a_snapshot(monkeypatch, capsys):
    monkeypatch.setattr(ftp.subprocess, "call", lambda cmd: 1)
    assert run_main(monkeypatch, FakePyghidra(None), "--apply") == 1
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_this_ptr.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_this_ptr.py"), run_name = "__main__")
    assert exit_info.value.code == 0


def test_main_reports_an_error_and_exits_nonzero(monkeypatch, capsys, decompiler):
    program, _f = bw_program(decompiler)
    def explode(*_args):
        raise RuntimeError("boom")

    monkeypatch.setattr(ftp, "plan", explode)
    assert run_main(monkeypatch, FakePyghidra(program), "bw1.exe") == 1
    assert "ERROR: boom" in capsys.readouterr().out
    assert decompiler.disposed == [True]
