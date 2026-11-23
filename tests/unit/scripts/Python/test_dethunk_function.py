# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from ghidra_fake import IntegerDataType, ParameterImpl
from ghidra_program import Instruction
from fake_pyghidra import FakePyghidra
from patch_program import BASE, PatchFunction, PatchProgram, at
from repo_paths import SCRIPTS_DIR
import dethunk_function as dt

INT = IntegerDataType.dataType


# A thunk whose signature Ghidra drops when the thunk is broken, as it does
class Dropping(PatchFunction):
    def setThunkedFunction(self, target):
        super().setThunkedFunction(target)
        if target is None:
            self.name = f"FUN_{self.entry.getOffset():08x}"
            self.parameters = []


def jmp32(source, target):
    return b"\xe9" + (target - source - 5).to_bytes(4, "little", signed = True)


def thunk(prog, offset, target, length, name, cls = PatchFunction):
    """A function at BASE + offset whose body is one JMP of `length` bytes to `target`."""
    fm = prog.getFunctionManager()
    func = cls(name, at(BASE + offset), length)
    fm.functions[at(BASE + offset)] = func
    func.setThunkedFunction(target)
    prog.getListing().add_instruction(BASE + offset, Instruction("JMP", length = length))
    return func


def world():
    """matrixPush at 0x100 and matrixPop at 0x60; a JMP rel32 wrapper of matrixPush at 0,
    a JMP rel8 wrapper of matrixPop at 0x20, and a wrapper of that wrapper at 0x80.
    Every slot is 16 bytes, padded with INT3."""
    image = bytearray(b"\xcc" * 0x200)
    image[0:5] = jmp32(BASE, BASE + 0x100)
    image[0x20:0x22] = b"\xeb\x3e"                                  # 0x22 + 0x3e = 0x60
    image[0x80:0x85] = jmp32(BASE + 0x80, BASE + 0x20)
    prog = PatchProgram(bytes(image))
    fm = prog.getFunctionManager()
    push = fm.add("matrixPush", BASE + 0x100, 0x20)
    pop = fm.add("matrixPop", BASE + 0x60, 0x10)
    wrapper = thunk(prog, 0, push, 5, "CDemonRenderer_matrixPush", Dropping)
    wrapper.parameters = [ParameterImpl("this", INT, prog)]
    wrapper.return_type = INT
    wrapper.comment, wrapper.repeatable_comment = "plate", "repeat"
    short = thunk(prog, 0x20, pop, 2, "CDemonRenderer_matrixPop")
    short.return_type = INT
    nested = thunk(prog, 0x80, short, 5, "CScene_matrixPop")
    nested.return_type = INT
    fm.add("next", BASE + 0x10)
    return prog


def test_padding_is_int3_nop_zero_and_watcoms_multi_byte_nops():
    assert dt.is_padding(b"") and dt.is_padding(b"\xcc\x90\x00\x8d\x52\x00\x8b\xdb\x8d\x80\x00\x00\x00\x00")
    assert not dt.is_padding(b"\xcc\x55") and not dt.is_padding(b"\x8d\x52\x01")


def test_a_rel32_thunk_becomes_a_call_to_the_same_target_then_ret():
    prog = world()
    info = dt.gather(prog, BASE, force = False)
    assert info["skip"] is None and info["old_bytes"] == jmp32(BASE, BASE + 0x100)
    assert info["new_bytes"] == b"\xe8" + info["old_bytes"][1:] + b"\xc3"
    assert (info["need"], info["boundary"], info["slack"], info["tail_is_pad"]) == (1, BASE + 0x10, 11, True)
    assert dt.format_signature(info["sig"]) == "__cdecl int CDemonRenderer_matrixPush(int this)"


def test_a_rel8_thunk_needs_four_more_bytes_and_counts_its_call_from_entry_plus_five():
    info = dt.gather(world(), BASE + 0x20, force = False)
    assert (info["old_bytes"], info["need"]) == (b"\xeb\x3e", 4)
    assert info["new_bytes"] == b"\xe8" + (0x60 - 0x25).to_bytes(4, "little") + b"\xc3"
    assert info["boundary"] == BASE + 0x30 and info["target_name"] == "matrixPop"


def test_the_padding_ends_at_the_next_label_or_function_in_the_slot():
    prog = world()
    prog.getSymbolTable().createLabel(at(BASE + 0x2a), "LAB_0000102a", "USER_DEFINED")
    info = dt.gather(prog, BASE + 0x20, force = False)
    assert (info["boundary"], info["slack"], info["tail_bytes"]) == (BASE + 0x2a, 8, b"\xcc" * 8)


def test_a_thunk_of_a_thunk_still_calls_the_function_it_jumps_to():
    info = dt.gather(world(), BASE + 0x80, force = False)
    assert info["target_name"] == "matrixPop"                          # where the chain ends
    assert info["new_bytes"] == b"\xe8" + jmp32(BASE + 0x80, BASE + 0x20)[1:] + b"\xc3"


def skip_of(prog, offset, force = False):
    return dt.gather(prog, BASE + offset, force)["skip"]


def test_what_is_not_a_convertible_thunk_is_skipped():
    prog = world()
    assert skip_of(prog, 0x40) == "no function at this address"
    assert skip_of(prog, 0x10) == "not a thunk"
    prog.memory.getBlock(at(BASE)).data[0x10:0x16] = b"\xe8\x00\x00\x00\x00\xc3"
    info = dt.gather(prog, BASE + 0x10, False)
    assert info["already"] and info["skip"].startswith("already converted")
    lost = thunk(prog, 0xa0, prog.getFunctionManager().getFunctionAt(at(BASE + 0x100)), 5, "lost")
    lost.getThunkedFunction = lambda _recursive: None
    assert skip_of(prog, 0xa0) == "thunk with no resolvable target"


def test_an_import_thunk_is_never_patched():
    prog = world()
    fm = prog.getFunctionManager()
    imported = fm.add("CreateFileA", BASE + 0x180)
    imported.external = True
    thunk(prog, 0xa0, imported, 5, "crt_kernel32.c_CreateFileA")
    assert skip_of(prog, 0xa0) == "target CreateFileA is external - import thunk, do not patch"
    imported.external = False
    imported.entry.space_name = "EXTERNAL"
    assert skip_of(prog, 0xa0).startswith("target CreateFileA is external")


def test_a_body_that_is_not_one_relative_jmp_is_skipped():
    prog = world()
    prog.getListing().add_instruction(BASE + 2, Instruction("NOP"))
    assert skip_of(prog, 0) == "body is 2 instructions, expected a single JMP"
    for offset in (3, 4):
        prog.getListing().add_instruction(BASE + offset, Instruction("NOP"))
    assert skip_of(prog, 0) == "body is 3 instructions, expected a single JMP"
    prog = world()
    prog.memory.getBlock(at(BASE)).data[0] = 0xff
    assert skip_of(prog, 0) == "body opcode is 0xff, not a relative JMP (0xe9/0xeb)"
    prog = world()
    prog.getListing().getInstructionAt(at(BASE)).length = 2
    assert skip_of(prog, 0) == "JMP is 2 bytes, opcode 0xe9 implies 5"


def test_the_bytes_a_call_ret_grows_into_must_be_unowned():
    prog = world()
    prog.getFunctionManager().add("squat", BASE + 0x24, 4)
    assert skip_of(prog, 0x20) == "no room: 0x1024 is inside squat"
    prog = world()
    prog.getSymbolTable().createLabel(at(BASE + 0x23), "LAB_00001023", "USER_DEFINED")
    assert skip_of(prog, 0x20) == "no room: 0x1023 carries symbol LAB_00001023"
    prog = world()
    prog.getReferenceManager().add(0x9000, BASE + 5)
    prog.getReferenceManager().add(0x9004, BASE + 5)
    assert skip_of(prog, 0) == "no room: 0x1005 has 2 incoming reference(s)"


def test_trailing_bytes_that_are_not_padding_need_force():
    prog = world()
    prog.memory.getBlock(at(BASE)).data[0x28] = 0x55
    assert skip_of(prog, 0x20) == ("trailing bytes cccccccccccc55cccccccccccccc are not recognised padding "
                                   "(--force to override)")
    info = dt.gather(prog, BASE + 0x20, force = True)
    assert info["skip"] is None and not info["tail_is_pad"]


def test_a_signature_formats_varargs_and_noreturn():
    sig = {"name": "f", "conv": "__cdecl", "ret_dt": INT, "params": [], "varargs": True, "noreturn": True}
    assert dt.format_signature(sig) == "__cdecl int f(...)  /* noreturn */"
    sig["params"] = [("fmt", INT)]
    assert dt.format_signature(sig) == "__cdecl int f(int fmt, ...)  /* noreturn */"


def test_the_report_counts_convertible_already_and_skipped(capsys):
    prog = world()
    prog.memory.getBlock(at(BASE)).data[0x10:0x16] = b"\xe8\x00\x00\x00\x00\xc3"
    prog.memory.getBlock(at(BASE)).data[0x28] = 0x55
    infos = [dt.gather(prog, BASE + o, force) for o, force in ((0, False), (0x10, False), (0x40, False),
                                                               (0x20, True))]
    assert dt.report(infos) == [infos[0], infos[3]]
    out = capsys.readouterr().out
    assert "0x00001040  <no function>\n    SKIP        : no function at this address" in out
    assert "    forwards to : matrixPush (0x00001100)" in out
    assert "    bytes       : e9fb000000  ->  e8fb000000c3" in out
    assert "needs 1 extra byte(s), 11 free before the next owned address (0x00001010)" in out
    assert "    trailing    : cccccccccccccccccccccc  (padding)" in out
    assert "  (NOT recognised padding)" in out
    assert "2 convertible, 1 already converted, 1 skipped" in out


def test_the_scan_lists_internal_relative_jmp_thunks(capsys):
    prog = world()
    imported = prog.getFunctionManager().add("CreateFileA", BASE + 0x180)
    imported.external = True
    thunk(prog, 0xa0, imported, 5, "crt_kernel32.c_CreateFileA")
    prog.memory.getBlock(at(BASE)).data[0xc0:0xc2] = b"\xff\x25"
    thunk(prog, 0xc0, prog.getFunctionManager().getFunctionAt(at(BASE + 0x100)), 6, "indirect")
    found = dt.scan(prog)
    assert [row[:2] for row in found] == [
        (BASE, "CDemonRenderer_matrixPush"), (BASE + 0x20, "CDemonRenderer_matrixPop"), (BASE + 0x80, "CScene_matrixPop")]
    out = capsys.readouterr().out
    assert "00001000   CDemonRenderer_matrixPush" in out and "3 candidate(s)" in out


def test_convert_patches_breaks_the_thunk_and_restores_its_signature(commands):
    prog = world()
    info = dt.gather(prog, BASE, force = False)
    ok, message = dt.convert(prog, info)
    assert ok and message == "converted -> __cdecl int CDemonRenderer_matrixPush(int this)"
    func = prog.getFunctionManager().getFunctionAt(at(BASE))
    assert prog.bytes_at(BASE, 6) == info["new_bytes"] and not func.isThunk()
    assert prog.disassembled == [BASE] and func.getBody().ranges == [(BASE, BASE + 5)]
    assert prog.getListing().cleared[0][:2] == (at(BASE), at(BASE + 0xf))
    assert (func.getComment(), func.getRepeatableComment(), str(func.source)) == ("plate", "repeat", "USER_DEFINED")


def test_convert_keeps_a_name_ghidra_leaves_and_sets_no_empty_comment(commands):
    prog = world()
    info = dt.gather(prog, BASE + 0x20, force = False)
    assert dt.convert(prog, info)[0]
    func = prog.getFunctionManager().getFunctionAt(at(BASE + 0x20))
    assert (func.getName(), func.source, func.getComment()) == ("CDemonRenderer_matrixPop", "DEFAULT", None)


def test_convert_says_when_the_bytes_or_the_thunk_flag_did_not_take(commands, monkeypatch):
    prog = world()
    info = dt.gather(prog, BASE, force = False)
    with monkeypatch.context() as patched:
        patched.setattr(dt, "write_bytes", lambda *_args: None)
        assert dt.convert(prog, info) == (False, "verify failed: memory reads e9fb000000cc")
    prog = world()
    info = dt.gather(prog, BASE + 0x20, force = False)
    info["func"].setThunkedFunction = lambda _target: None
    assert dt.convert(prog, info) == (False, "verify failed: still flagged as a thunk")


def test_applied_patches_are_recorded_for_a_fresh_import(tmp_path, commands):
    path = tmp_path / "byte_patches.json"
    path.write_text(json.dumps({"groups": [{"name": "thunk_to_real_function", "program": "other.exe",
                                            "patches": [], "clear_thunks": []}]}))
    prog = world()
    infos = [dt.gather(prog, BASE + o, False) for o in (0, 0x20)]
    assert dt.record_patches(str(path), "game.exe", infos) == 2
    group = json.loads(path.read_text())["groups"][1]
    assert group["program"] == "game.exe" and group["clear_thunks"] == ["0x00001000", "0x00001020"]
    first, second = group["patches"]
    assert first["name"] == "CDemonRenderer_matrixPush: JMP->CALL+RET for this"
    assert (first["original"], first["patched"]) == ("e9fb000000cc", "e8fb000000c3")
    assert second["name"] == "CDemonRenderer_matrixPop: JMP->CALL+RET for own signature"
    assert second["original"] == "eb3ecccccccc" and "JMP matrixPop to CALL" in second["description"]
    assert dt.record_patches(str(path), "game.exe", infos) == 0          # already there: file untouched
    group["clear_thunks"] = ["0x00001000"]
    group["patches"] = group["patches"][1:]
    path.write_text(json.dumps({"groups": [group]}))
    assert dt.record_patches(str(path), "game.exe", infos) == 1
    assert json.loads(path.read_text())["groups"][0]["clear_thunks"] == ["0x00001000"]


# --- main ---------------------------------------------------------------------------------------

def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(dt.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        dt.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "report.txt"),
                 "--patches-file", str(tmp_path / "patches.json"), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys, commands):
    prog = world()
    code, fake = run_main(monkeypatch, tmp_path, prog, "--addr", "1000", "--addr", "0x1040")
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert (tmp_path / "report.txt").read_text() == (
        "De-thunk report: game.exe\nrequested: 2  convertible: 1  mode: report\n\n"
        "00001000  CDemonRenderer_matrixPush                      convertible\n"
        "00001040  <none>                                         SKIP: no function at this address\n")
    assert "[dry-run] re-run with --apply to execute." in capsys.readouterr().out


def test_main_snapshots_converts_saves_and_records(monkeypatch, tmp_path, capsys, commands):
    calls = []
    monkeypatch.setattr(dt.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    (tmp_path / "patches.json").write_text(json.dumps({"groups": []}))
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1000", "--addr", "1020", "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-dethunk"]
    assert prog.transactions == [["De-thunk JMP wrappers", True]] and prog.getDomainFile().saves == 1
    assert len(json.loads((tmp_path / "patches.json").read_text())["groups"][0]["patches"]) == 2
    assert "Recorded 2 patch(es) in" in capsys.readouterr().out


def test_main_with_no_record_leaves_the_patches_file(monkeypatch, tmp_path, commands):
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1000", "--apply", "--no-snapshot", "--no-record")
    assert code == 0 and prog.getDomainFile().saves == 1 and not (tmp_path / "patches.json").exists()


def test_main_with_nothing_convertible_does_not_open_a_transaction(monkeypatch, tmp_path, capsys):
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1010", "--apply", "--no-snapshot")
    assert code == 0 and prog.transactions == []
    assert "Nothing convertible to apply." in capsys.readouterr().out


def test_a_failed_conversion_rolls_every_one_back_and_exits_1(monkeypatch, tmp_path, capsys, commands):
    prog = world()
    prog.getFunctionManager().getFunctionAt(at(BASE + 0x20)).setThunkedFunction = lambda _target: None
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1000", "--addr", "1020", "--apply", "--no-snapshot")
    assert code == 1 and prog.transactions == [["De-thunk JMP wrappers", False]]
    assert prog.getDomainFile().saves == 0
    out = capsys.readouterr().out
    assert "0x00001000 CDemonRenderer_matrixPush: converted" in out and "rolled back - nothing saved" in out


def test_an_error_during_apply_rolls_back(monkeypatch, tmp_path, capsys, commands):
    def explode(*_args):
        raise RuntimeError("locked")
    monkeypatch.setattr(dt, "write_bytes", explode)
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1000", "--apply", "--no-snapshot")
    assert code == 1 and prog.transactions == [["De-thunk JMP wrappers", False]]
    assert "ERROR during apply: locked" in capsys.readouterr().out


def test_main_scans_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(dt.subprocess, "call", lambda cmd: pytest.fail("snapshot for a scan"))
    code, fake = run_main(monkeypatch, tmp_path, world(), "--scan", "--apply")
    assert code == 0 and fake.closed == 1 and "3 candidate(s)" in capsys.readouterr().out


def test_an_error_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, world(), "--addr", "zz")
    assert code == 1 and fake.closed == 1 and "ERROR: invalid literal for int()" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(dt.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--addr", "1000", "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_main_needs_an_address_or_a_scan(monkeypatch, tmp_path, capsys):
    assert run_main(monkeypatch, tmp_path, None)[0] == 2
    assert "give at least one --addr, or --scan" in capsys.readouterr().err


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["dethunk_function.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "dethunk_function.py"), run_name = "__main__")
    assert exit_info.value.code == 0
