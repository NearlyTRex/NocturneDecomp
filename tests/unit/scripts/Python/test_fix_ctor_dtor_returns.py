# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
import ghidra_fake
from ghidra_program import FlowType, Instruction, Program
from repo_paths import SCRIPTS_DIR
import fix_ctor_dtor_returns as fcd

ghidra_fake.install()


class Insn(Instruction):
    """An instruction whose result objects (the registers it writes) are given."""

    def __init__(self, mnemonic, *operands, writes = (), call = False):
        super().__init__(mnemonic, *operands, flow = FlowType(call = call))
        self.writes = writes

    def getResultObjects(self):
        return list(self.writes)


class Param:
    def __init__(self, data_type):
        self.data_type = data_type

    def getDataType(self):
        return self.data_type

    def setDataType(self, data_type, _source):
        self.data_type = data_type


def mov(dest, src, writes = ()):
    return Insn("MOV", dest, src, writes = writes)


def stack(reg, offset):
    return mov(reg, f"dword ptr [ESP + 0x{offset:x}]")


RET = Insn("RET")


# --- reading the assembly --------------------------------------------------------------------------

@pytest.mark.parametrize("name, kind", [
    ("core_chain.cpp_CChain_ctor_FUN_00401000", "ctor"), ("core_bat.cpp_CBat_dtor", "dtor"),
    ("core_bat.cpp_CBat_arrdtor2_FUN_00401010", "arrdtor"), ("core_bat.cpp_CBat_ctorLike_FUN_00401020", None),
])
def test_a_name_gives_its_kind(name, kind):
    assert fcd.kind_of(name) == kind


def test_an_instruction_reads_as_the_asm_export_writes_it():
    assert fcd.insn_text(Insn("mov", "EAX", "EBX")) == ("MOV", "EAX,EBX")


@pytest.mark.parametrize("insn, tag", [
    (Insn("CALL", "0x401000", call = True), "call"),
    (mov("EAX", "EBX", writes = ("EAX",)), "EAX"),
    (Insn("OR", "AH", "0x1"), "AH"),                         # missed by getResultObjects
    (Insn("CMP", "EAX", "0x1"), None),
    (Insn("PUSH", "EAX"), None),
    (Insn("RET"), None),
    (mov("EBX", "EAX", writes = ("EBX",)), None),
])
def test_what_writes_eax(insn, tag):
    assert fcd.writes_eax(insn, *fcd.insn_text(insn)) == tag


def test_the_receiver_register_is_read_past_the_entry_pushes_and_frame():
    insns = [Insn("PUSH", "EBX"), Insn("SUB", "ESP", "0x8"), Insn("SUB", "ESP", "EAX"), stack("EBX", 0x10)]
    assert fcd.find_receiver_reg(insns) == ("EBX", 0x10)
    assert fcd.find_receiver_reg([stack("ESI", 0x8)]) == (None, None)        # not parameter 0's slot
    assert fcd.find_receiver_reg([Insn("CALL", "x", call = True), stack("ESI", 0x4)]) == (None, None)
    assert fcd.find_receiver_reg([Insn("NOP")]) == (None, None)


@pytest.mark.parametrize("insns, reg, off, verdict", [
    ([], None, None, (fcd.NO_EVIDENCE, "no instructions")),
    ([Insn("NOP")], None, None, (fcd.NO_EVIDENCE, "no RET in the body")),
    ([Insn("NOP"), RET], None, None, (fcd.NO_EVIDENCE, "EAX is never written")),
    ([stack("EBX", 4), mov("EAX", "EBX", ("EAX",)), Insn("POP", "EBX"), RET], "EBX", 4,
     (fcd.RETURNS_THIS, "MOV EAX,EBX")),
    ([stack("EAX", 4), RET], "EAX", 4, (fcd.RETURNS_THIS, "MOV EAX,[ESP+0x4] (the receiver slot)")),
    ([stack("EAX", 8), RET], None, None, (fcd.NOT_THIS, "EAX last written by MOV EAX,dword ptr [ESP + 0x8]")),
    ([Insn("CALL", "x", call = True), RET], None, None, (fcd.VIA_CALL, "EAX is the result of a tail CALL")),
    # CExternalRenderer_ctor: AH used as a scratch after the receiver went into EAX
    ([stack("EBX", 4), mov("EAX", "EBX"), Insn("OR", "AH", "0x1"), RET], "EBX", 4,
     (fcd.NOT_THIS, "EAX last written by OR AH,0x1")),
    # one path returns this, another the callee's: this wins
    ([mov("EAX", "EBX"), RET, Insn("CALL", "x", call = True), RET], "EBX", 4, (fcd.RETURNS_THIS, "MOV EAX,EBX")),
])
def test_the_evidence_from_each_ret(insns, reg, off, verdict):
    assert fcd.gather_evidence(insns, reg, off) == verdict


# --- deciding --------------------------------------------------------------------------------------

@pytest.mark.parametrize("ret, recv, evidence, tu, include_crt, action", [
    ("CBat *", None, fcd.RETURNS_THIS, "core_bat.cpp", False, "REVIEW"),
    ("CBat *", "CBat *", fcd.NOT_THIS, "core_bat.cpp", False, "OK"),
    ("void *", "istream *", fcd.RETURNS_THIS, "crt_fstream.cpp", False, "EXEMPT_CRT"),
    ("void", "CBat *", fcd.NOT_THIS, "core_bat.cpp", False, "LEAVE"),
    ("void", "CBat *", fcd.VIA_CALL, "core_bat.cpp", False, "REVIEW"),
    ("istream *", "void *", fcd.RETURNS_THIS, "crt_fstream.cpp", True, "FIX_RECEIVER"),
    ("void", "CBat *", fcd.RETURNS_THIS, "core_bat.cpp", False, "FIX_RETURN"),
    ("undefined4", "void *", fcd.RETURNS_THIS, "core_bat.cpp", False, "FIX_RETURN"),
])
def test_each_combination_gets_its_action(ret, recv, evidence, tu, include_crt, action):
    assert fcd.classify(ret, recv, evidence, tu, include_crt)[0] == action


def test_a_vague_type_is_void_or_undefined_however_spaced():
    assert fcd.is_vague(None) and fcd.is_vague("undefined *") and fcd.is_vague("void*")
    assert not fcd.is_vague("CBat *")


def test_the_translation_unit_comes_from_the_name():
    assert fcd.tu_of("crt_fstream.cpp_ifstream_ctor_FUN_00401000") == "crt_fstream.cpp"
    assert fcd.tu_of("CBat_ctor") == "CBat"


# --- a program -------------------------------------------------------------------------------------

def add(prog, offset, name, ret, recv, insns):
    func = prog.getFunctionManager().add(name, offset, size = len(insns))
    func.return_type = ret
    func.parameters = [Param(recv)] if recv is not None else []
    for i, insn in enumerate(insns):
        prog.getListing().add_instruction(offset + i, insn)
    return func


def program():
    """Functions covering each action, and two types to retype with."""
    prog = Program()
    bat, fstream = ghidra_fake.StructureDataType("CBat", length = 8), ghidra_fake.StructureDataType("istream")
    bat.category = "/Nocturne/Game"
    prog.getDataTypeManager().add(bat, fstream)
    returns_this = [stack("EBX", 4), mov("EAX", "EBX", ("EAX",)), Insn("RET")]
    add(prog, 0x1000, "core_bat.cpp_CBat_ctor_FUN_00001000", "void", "CBat *", returns_this)
    add(prog, 0x1100, "crt_fstream.cpp_istream_ctor_FUN_00001100", "istream *", "void *", list(returns_this))
    add(prog, 0x1200, "core_bat.cpp_CBat_dtor_FUN_00001200", "CBat *", "CBat *", [Insn("RET")])
    add(prog, 0x1300, "core_bat.cpp_CBat_arrdtor_FUN_00001300", "void", None, [Insn("RET")])
    add(prog, 0x1400, "core_bat.cpp_CBat_open_FUN_00001400", "void", "CBat *", [Insn("RET")])
    add(prog, 0x1500, "core_bat.cpp_CLid_ctor_FUN_00001500", "void", "CLid *", list(returns_this))
    return prog


def by_name(rows):
    return {r["name"].split("_FUN_")[0].split(".cpp_")[1]: r for r in rows}


def test_gather_reads_each_ctor_and_dtor():
    rows = by_name(fcd.gather(program(), None, False))
    assert sorted(rows) == ["CBat_arrdtor", "CBat_ctor", "CBat_dtor", "CLid_ctor", "istream_ctor"]
    assert (rows["CBat_ctor"]["action"], rows["CBat_ctor"]["recv_reg"], rows["CBat_ctor"]["entry"]) == (
        "FIX_RETURN", "EBX", "00001000")
    assert rows["istream_ctor"]["action"] == "EXEMPT_CRT" and rows["CBat_dtor"]["action"] == "OK"
    assert rows["CBat_arrdtor"]["param0"] is None and rows["CBat_arrdtor"]["action"] == "REVIEW"
    assert [r["name"] for r in fcd.gather(program(), {"00001200"}, False)] == ["core_bat.cpp_CBat_dtor_FUN_00001200"]


def test_the_report_lists_all_but_the_consistent(tmp_path, capsys):
    rows = fcd.gather(program(), None, True)
    counts = fcd.report(rows, str(tmp_path / "r.txt"))
    assert counts == {"FIX_RETURN": 2, "FIX_RECEIVER": 1, "REVIEW": 1, "LEAVE": 0, "EXEMPT_CRT": 0, "OK": 1}
    text = (tmp_path / "r.txt").read_text()
    assert "      CHANGE   : return void -> CBat *" in text
    assert "      CHANGE   : parameter 0 void * -> istream *" in text
    assert "      receiver : CBat *  (in EBX)" in text and "      receiver : None\n" in text
    assert "OK  (" not in text and "Report written to: " in capsys.readouterr().out
    fcd.report(rows, None)


def test_a_type_resolves_from_the_root_or_by_name_with_its_pointers():
    dtm = program().getDataTypeManager()
    found = fcd.resolve(dtm, "CBat * *")
    assert found.getName() == "CBat * *" and found.getDataType().getDataType().getName() == "CBat"
    assert fcd.resolve(dtm, "istream").getName() == "istream"
    assert fcd.resolve(dtm, "CNone *") is None


def test_apply_retypes_the_return_or_the_receiver(capsys):
    prog = program()
    rows = fcd.gather(prog, None, True)
    assert fcd.apply(prog, rows, None) == (True, 2)
    funcs = prog.getFunctionManager()
    assert funcs.getFunctionAt(ghidra_fake.Address(0x1000)).return_type.getName() == "CBat *"
    assert funcs.getFunctionAt(ghidra_fake.Address(0x1100)).parameters[0].getDataType().getName() == "istream *"
    assert "SKIP - cannot resolve type 'CLid *'" in capsys.readouterr().out
    assert prog.transactions == [["ctor/dtor return consistency", True]]


def test_only_one_kind_of_fix_and_nothing_to_do(capsys):
    prog = program()
    rows = fcd.gather(prog, None, True)
    assert fcd.apply(prog, rows, "FIX_RECEIVER") == (True, 1)
    assert fcd.apply(prog, [r for r in rows if r["action"] == "OK"], None) == (True, 0)
    assert "Nothing to apply." in capsys.readouterr().out


def test_an_error_rolls_the_retyping_back(monkeypatch, capsys):
    prog = program()
    rows = fcd.gather(prog, None, False)

    def refuse(_data_type, _source):
        raise RuntimeError("locked")
    monkeypatch.setattr(rows[0]["func"], "setReturnType", refuse)
    assert fcd.apply(prog, rows, None) == (False, 0)
    assert prog.transactions[0][1] is False and "ERROR during apply: locked" in capsys.readouterr().out


# --- main ------------------------------------------------------------------------------------------

def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(fcd.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        fcd.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_changing(monkeypatch, tmp_path, capsys):
    prog = program()
    code, fake = run_main(monkeypatch, tmp_path, prog, "--addr", "0x1000")
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "[dry-run] re-run with --apply" in capsys.readouterr().out
    assert "1 ctor/dtor/arrdtor function(s) examined" in (tmp_path / "out.txt").read_text()


def test_main_snapshots_then_retypes_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(fcd.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-ctor-dtor-returns"]
    assert prog.getDomainFile().saves == 1 and "Saved." in capsys.readouterr().out


def test_main_saves_nothing_when_nothing_changed(monkeypatch, tmp_path):
    prog = program()
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot", "--addr", "1200")[0] == 0
    assert prog.getDomainFile().saves == 0


def test_main_exits_1_when_the_apply_failed(monkeypatch, tmp_path):
    prog = program()
    monkeypatch.setattr(prog.getDataTypeManager(), "getDataType", None)
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 1
    assert prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(fcd.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_the_default_report_is_named_for_the_program(monkeypatch, tmp_path):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program()))
    monkeypatch.setattr(fcd.os, "_exit", sys.exit)
    with pytest.raises(SystemExit):
        fcd.main([str(tmp_path), "P"])
    assert (tmp_path / "nocturne.exe_ctor_dtor_returns.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_ctor_dtor_returns.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_ctor_dtor_returns.py"), run_name = "__main__")
    assert exit_info.value.code == 0
