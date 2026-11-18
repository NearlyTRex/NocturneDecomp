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
from patch_program import BASE, PatchProgram, at
from repo_paths import SCRIPTS_DIR
import fix_byte_patches as fbp


def write_patches(tmp_path, groups, **extra):
    path = tmp_path / "patches.json"
    path.write_text(json.dumps({"groups": groups, **extra}))
    return str(path)


def patch(name, offset, original, patched, description = "fix"):
    return {"name": name, "address": f"0x{BASE + offset:08x}", "original": original, "patched": patched,
            "description": description}


GROUPS = [
    {"name": "reads", "patches": [patch("split", 0, "8b45", "8b4d")]},
    {"name": "thunks", "program": "game.exe", "description": "JMP to CALL",
     "patches": [patch("wrap", 0x10, "e9eb000000cc", "e8eb000000c3")], "clear_thunks": ["0x00001010"]},
    {"name": "thunks", "program": "other.exe", "patches": [patch("elsewhere", 0x20, "90", "c3")],
     "clear_thunks": ["0x00001020"]},
]


@pytest.fixture(name = "patches")
def fixture_patches(tmp_path):
    return write_patches(tmp_path, GROUPS)


def test_a_group_pinned_to_another_program_is_left_out(patches):
    assert [p["name"] for p in fbp.load_patches(patches, program_name = "game.exe")] == ["split", "wrap"]
    assert [p["name"] for p in fbp.load_patches(patches)] == ["split", "wrap", "elsewhere"]
    loaded = fbp.load_patches(patches, group_filter = "reads")
    split = loaded[0]
    assert len(loaded) == 1 and (split["group"], split["address"], split["original"], split["patched"]) == (
        "reads", BASE, b"\x8b\x45", b"\x8b\x4d")
    assert fbp.load_clear_thunks(patches, program_name = "game.exe") == [BASE + 0x10]
    assert fbp.load_clear_thunks(patches, group_filter = "reads") == []


def test_a_patch_must_keep_its_length(tmp_path):
    path = write_patches(tmp_path, [{"name": "bad", "patches": [patch("grow", 0, "90", "9090")]}])
    with pytest.raises(ValueError, match = "Patch 'grow': original and patched must be same length"):
        fbp.load_patches(path)


def test_cave_comments_and_body_extensions_load(tmp_path):
    path = write_patches(tmp_path, [], cave_comments = [{"address": "0x1040", "comment": "CODE_CAVE"}],
                         function_body_extensions = [{"function": "0x1000", "cave_start": "0x1040", "cave_size": 8}])
    assert fbp.load_cave_comments(path) == [{"address": 0x1040, "comment": "CODE_CAVE"}]
    assert fbp.load_function_body_extensions(path) == [{"function": 0x1000, "cave_start": 0x1040, "cave_size": 8}]
    assert fbp.load_cave_comments(write_patches(tmp_path, [])) == []


def test_the_groups_are_listed_with_their_program(patches, capsys):
    fbp.list_groups(patches)
    out = capsys.readouterr().out.splitlines()
    assert out[0].split() == ["reads", "any", "1", "patch(es)"]
    assert out[1].split() == ["thunks", "game.exe", "1", "patch(es)", "JMP", "to", "CALL"]


@pytest.mark.parametrize("original, current, said", [
    (b"\x90" * 5, b"\xe9\x10\x00\x00\x00", "already patched (different cave) — site has JMP to 0x1015"),
    (b"\x90" * 3, b"\xcc" * 3, "cave area is empty (all 0xCC) — expected original code"),
    (b"\xcc" * 3, b"\xcc\x90\xcc", "cave area occupied at offset 1 (0x1001) — another patch"),
    (b"\x8b\x45\x08", b"\x8b\x45\x0c", "partial mismatch at 0x1000 — first 2 bytes match, diverges at offset 2"),
    (b"\x8b\x45", b"\x89\x45", "byte mismatch at 0x1000 (expected 8b 45, got 89 45)"),
])
def test_a_mismatch_is_diagnosed(original, current, said):
    assert fbp._diagnose_mismatch(BASE, original, current).startswith(said)


def program():
    """A function at 0 holding the split read, a thunk at 0x10, and CRT code at 0x30."""
    image = bytearray(b"\xcc" * 0x60)
    image[0:2] = b"\x8b\x45"
    image[0x10:0x16] = b"\xe9\xeb\x00\x00\x00\xcc"
    image[0x30:0x31] = b"\x90"
    prog = PatchProgram(bytes(image))
    fm = prog.getFunctionManager()
    fm.add("CBat_hit", BASE, 0x10)
    fm.add("CBat_run", BASE + 0x10, 5).setThunkedFunction(fm.add("CBat_go", BASE + 0x100))
    fm.add("crt_memcpy", BASE + 0x30, 4)
    return prog


def test_a_patch_is_checked_then_written_and_redecoded(patches, commands):
    prog = program()
    split = fbp.load_patches(patches, program_name = "game.exe")[0]
    assert fbp.apply_patch(prog, split) == (True, "would patch") and prog.bytes_at(BASE, 2) == b"\x8b\x45"
    assert fbp.apply_patch(prog, split, dry_run = False) == (True, "patched")
    assert prog.bytes_at(BASE, 2) == b"\x8b\x4d" and prog.disassembled == [BASE]
    assert fbp.apply_patch(prog, split) == (True, "already patched")
    prog.memory.getBlock(at(BASE)).data[0] = 0x89
    assert fbp.apply_patch(prog, split)[0] is False


class Decompiled:
    def __init__(self, code):
        self.code = code

    def getC(self):
        return self.code


class Results:
    def __init__(self, code):
        self.code = code

    def decompileCompleted(self):
        return self.code != "timeout"

    def getDecompiledFunction(self):
        return Decompiled(self.code) if self.code is not None else None


# Decompiles by the program's `decompile`: the function to its C, "timeout", or None
class DecompInterface:
    def __init__(self):
        self.program = None

    def openProgram(self, program):
        self.program = program

    def decompileFunction(self, func, _timeout, _monitor):
        return Results(self.program.decompile(self.program, func))

    def dispose(self):
        self.program = None


@pytest.fixture(name = "decompiler")
def fixture_decompiler(monkeypatch, commands):
    monkeypatch.setattr(importlib.import_module("ghidra.app.decompiler"), "DecompInterface", DecompInterface)


def test_a_function_decompiles_or_says_why_not(decompiler):
    prog = program()
    prog.decompile = lambda _prog, func: {"CBat_hit": "timeout", "CBat_run": None}.get(func.getName(), "int f;")
    assert fbp.decompile_function_at(prog, BASE + 0x50) == "// No function at 0x1050\n"
    assert fbp.decompile_function_at(prog, BASE) == "// Decompilation failed or timed out\n"
    assert fbp.decompile_function_at(prog, BASE + 0x10) == "// No decompiled output\n"
    assert fbp.decompile_function_at(prog, BASE + 0x30) == "int f;"


def test_artifacts_are_counted():
    arts = fbp.count_artifacts("undefined4 a = CONCAT44(extraout_EAX, unaff_EBX); SUB41(in_stack_0x4) "
                               "__BITCAST_x bVar1 * -2")
    assert [arts[k] for k in ("undefined", "CONCAT", "extraout_", "unaff_", "in_stack_", "BITCAST", "SUB_",
                              "bVar_mul", "total")] == [1, 1, 1, 1, 1, 1, 1, 1, 8]


def by_bytes(prog, func):
    """A decompile that reads the patched byte: CONCAT before the fix, clean after."""
    if func.getName() == "CBat_hit":
        return "CONCAT44(a,b);\n" if prog.bytes_at(BASE + 1, 1) == b"\x45" else "a;\n"
    return "f();" if func.isThunk() else "undefined g();"


def extra_patch(name, offset, original, patched):
    return {"group": "x", "name": name, "address": BASE + offset, "original": original, "patched": patched,
            "description": name}


def test_test_mode_decompiles_before_and_after_then_rolls_back(patches, decompiler, capsys):
    prog = program()
    prog.decompile = by_bytes
    loaded = fbp.load_patches(patches, program_name = "game.exe") + [
        extra_patch("cave", 0x50, b"\xcc", b"\x90"), extra_patch("crt", 0x30, b"\x90", b"\x90"),
        extra_patch("same", 2, b"\xcc", b"\xcc")]
    fbp.run_test_mode(prog, loaded, clear_thunks = [BASE + 0x10],
                      body_extensions = [{"function": BASE, "cave_start": BASE + 0x50, "cave_size": 4}])
    assert prog.transactions == [["Test all patches", False]]
    out = capsys.readouterr().out
    assert "Function: CBat_hit\n  Patch: split (0x1000)\n  Patch: same (0x1002)" in out
    assert "Result: IMPROVED (-1 artifacts)" in out and "Result: WORSE (+1 artifacts)" in out
    assert "  -CONCAT44(a,b);\n  +a;\n" in out and "  +undefined g();\n" in out
    assert "Function: crt_memcpy" not in out and "Extended CBat_hit body" in out


def test_test_mode_keeps_the_before_code_when_a_patch_does_not_match(patches, decompiler, capsys):
    prog = program()
    prog.decompile = by_bytes
    prog.memory.getBlock(at(BASE)).data[1] = 0x55
    fbp.run_test_mode(prog, fbp.load_patches(patches, group_filter = "reads"))
    out = capsys.readouterr().out
    assert "  SKIP split: partial mismatch" in out
    assert "Result: NO CHANGE" in out and "No difference in decompiled output." in out


def test_cave_comments_go_on_the_code_unit_at_or_around_the_address(capsys):
    prog = program()
    prog.getListing().add_data(BASE + 0x40, None, length = 8)
    fbp.apply_cave_comments(prog, [{"address": BASE + 0x40, "comment": "CODE_CAVE a"},
                                   {"address": BASE + 0x44, "comment": "CODE_CAVE b"},
                                   {"address": BASE + 0x58, "comment": "CODE_CAVE c"}])
    assert prog.getListing().getCodeUnitAt(at(BASE + 0x40)).getComment("PLATE_COMMENT") == "CODE_CAVE b"
    assert "WARNING: No code unit at 0x1058 for cave comment" in capsys.readouterr().out


def test_thunk_flags_are_cleared_where_they_are_set(capsys):
    prog = program()
    fbp.apply_clear_thunks(prog, [BASE + 0x10, BASE, BASE + 0x50])
    assert not prog.getFunctionManager().getFunctionAt(at(BASE + 0x10)).isThunk()
    out = capsys.readouterr().out
    assert "Cleared thunk status on CBat_run at 0x1010" in out
    assert "CBat_hit at 0x1000 is not a thunk, skipping" in out
    assert "WARNING: No function at 0x1050 for thunk clearing" in out


def test_a_cave_joins_the_body_of_the_function_at_or_around_it(capsys):
    prog = program()
    fbp.apply_function_body_extensions(prog, [
        {"function": BASE + 4, "cave_start": BASE + 0x40, "cave_size": 8},
        {"function": BASE, "cave_start": BASE + 0x44, "cave_size": 2},
        {"function": BASE + 0x50, "cave_start": BASE + 0x58, "cave_size": 2}])
    assert prog.getFunctionManager().getFunctionAt(at(BASE)).getBody().ranges == [(BASE, BASE + 0xf),
                                                                                  (BASE + 0x40, BASE + 0x47)]
    out = capsys.readouterr().out
    assert "Extended CBat_hit body: added 0x1040-0x1047 (8 bytes)" in out
    assert "Cave 0x1044 already in CBat_hit body, skipping" in out
    assert "WARNING: No function at 0x1050 for body extension" in out


def test_a_dry_run_reports_and_exits_1_on_a_mismatch(patches, capsys):
    prog = program()
    loaded = fbp.load_patches(patches, program_name = "game.exe")
    assert fbp.run_apply_or_dry(prog, loaded, dry_run = True) == 0
    prog.memory.getBlock(at(BASE)).data[0] = 0x89
    assert fbp.run_apply_or_dry(prog, loaded, dry_run = True) == 1
    out = capsys.readouterr().out
    assert "[reads]\n  split (0x1000): would patch" in out and "1 patch(es) do not match the program." in out
    assert prog.transactions == []


def test_apply_writes_everything_or_nothing(patches, commands, capsys):
    prog = program()
    loaded = fbp.load_patches(patches, program_name = "game.exe")
    prog.getListing().add_data(BASE + 0x40, None, length = 8)
    assert fbp.run_apply_or_dry(prog, loaded, False, [{"address": BASE + 0x40, "comment": "CAVE"}],
                                [{"function": BASE, "cave_start": BASE + 0x40, "cave_size": 8}], [BASE + 0x10]) == 0
    assert prog.transactions == [["Apply byte patches", True]] and prog.getDomainFile().saves == 1
    assert not prog.getFunctionManager().getFunctionAt(at(BASE + 0x10)).isThunk()
    assert "Updated cave comment at 0x1040: CAVE" in capsys.readouterr().out
    prog = program()
    prog.memory.getBlock(at(BASE)).data[0x10] = 0xe8
    assert fbp.run_apply_or_dry(prog, loaded, False, clear_thunks = [BASE + 0x10]) == 1
    assert prog.transactions == [["Apply byte patches", False]] and prog.getDomainFile().saves == 0
    assert prog.getFunctionManager().getFunctionAt(at(BASE + 0x10)).isThunk()
    assert "1 patch(es) do not match the program - rolled back, nothing saved." in capsys.readouterr().out


def test_a_group_heading_is_printed_once_for_its_patches(capsys):
    assert fbp.check_or_patch(program(), [extra_patch("a", 0x50, b"\xcc", b"\x90"),
                                          extra_patch("b", 0x51, b"\xcc", b"\x90")], dry_run = True) == 0
    assert capsys.readouterr().out == "\n[x]\n  a (0x1050): would patch\n  b (0x1051): would patch\n"


def test_apply_with_only_patches_saves_them(patches, commands):
    prog = program()
    assert fbp.run_apply_or_dry(prog, fbp.load_patches(patches, group_filter = "reads"), False) == 0
    assert prog.bytes_at(BASE, 2) == b"\x8b\x4d"


# --- main ---------------------------------------------------------------------------------------

def run_main(monkeypatch, patches, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(fbp.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        fbp.main([os.path.dirname(patches), "P", "game.exe", "--patches-file", patches, *argv])
    return exited.value.code, fake


def test_main_dry_run(monkeypatch, patches, capsys):
    prog = program()
    code, fake = run_main(monkeypatch, patches, prog)
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    out = capsys.readouterr().out
    assert "DRY RUN MODE - no changes will be made" in out and "2 patch(es) loaded" in out


def test_main_snapshots_then_applies(monkeypatch, patches, commands, capsys):
    calls = []
    monkeypatch.setattr(fbp.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program()
    code, _ = run_main(monkeypatch, patches, prog, "--apply", "--group", "thunks")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-byte-patches"]
    assert prog.bytes_at(BASE + 0x10, 6) == b"\xe8\xeb\x00\x00\x00\xc3" and prog.getDomainFile().saves == 1
    assert "Group filter: thunks" in capsys.readouterr().out


def test_main_test_mode_never_snapshots(monkeypatch, patches, decompiler, capsys):
    monkeypatch.setattr(fbp.subprocess, "call", lambda cmd: pytest.fail("snapshot in test mode"))
    prog = program()
    prog.decompile = by_bytes
    code, _ = run_main(monkeypatch, patches, prog, "--test", "--apply")
    assert code == 0 and prog.transactions == [["Test all patches", False]]
    assert "TEST MODE - patches will be applied and rolled back" in capsys.readouterr().out


def test_main_exits_1_when_a_patch_does_not_match(monkeypatch, patches, commands):
    prog = program()
    prog.memory.getBlock(at(BASE)).data[0] = 0x89
    assert run_main(monkeypatch, patches, prog, "--apply", "--no-snapshot")[0] == 1
    assert prog.getDomainFile().saves == 0


def test_an_error_still_closes_the_project(monkeypatch, patches, capsys):
    code, fake = run_main(monkeypatch, patches, PatchProgram())
    assert code == 1 and fake.closed == 1 and "ERROR: no memory at 00001000" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, patches, capsys):
    monkeypatch.setattr(fbp.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, patches, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_main_lists_groups(monkeypatch, patches, capsys):
    assert run_main(monkeypatch, patches, None, "--list-groups")[0] == 0
    assert "Available patch groups:" in capsys.readouterr().out


def test_main_with_no_patches_exits_1(monkeypatch, patches, tmp_path, capsys):
    assert run_main(monkeypatch, patches, None, "--group", "none")[0] == 1
    assert "No patches found for group 'none'." in capsys.readouterr().out
    assert run_main(monkeypatch, write_patches(tmp_path, []), None)[0] == 1
    assert "No patches found." in capsys.readouterr().out


def test_main_without_a_patches_file_exits_1(monkeypatch, tmp_path, capsys):
    assert run_main(monkeypatch, str(tmp_path / "none.json"), None)[0] == 1
    assert "ERROR: Patches file not found:" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_byte_patches.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_byte_patches.py"), run_name = "__main__")
    assert exit_info.value.code == 0
