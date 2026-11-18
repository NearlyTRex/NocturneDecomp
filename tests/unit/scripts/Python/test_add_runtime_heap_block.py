# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Program
from pe_helpers import build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
import add_runtime_heap_block as arhb

BSS = section_va(0x400000, 1)          # 0x402000
BSS_SIZE = 0x3000


def exe(tmp_path, vsize = 0):
    path = tmp_path / "game.exe"
    sections = [(".text", b"\xc3" * 16, 0x60000020), (".bss", b"\0" * BSS_SIZE, 0xc0000080, vsize)]
    path.write_bytes(build_sectioned_pe(sections))
    return str(path)


def program(bss_loaded, next_start = BSS + 0x4000, last = False):
    p = Program()
    p.getMemory().add_block(".text", 0x401000, b"\xc3" * 16, execute = True)
    p.getMemory().add_block(".bss", BSS, bytes(bss_loaded))
    if not last:
        p.getMemory().add_block(".reloc", next_start, b"\0" * 16)
    return p


def test_the_pe_extent_uses_the_raw_size_when_virtual_size_is_zero(tmp_path):
    assert arhb.pe_bss_extent(exe(tmp_path)) == (BSS, BSS + BSS_SIZE - 1)
    assert arhb.pe_bss_extent(exe(tmp_path, vsize = 0x10)) == (BSS, BSS + 0xf)
    with pytest.raises(ValueError, match = "no .data section"):
        arhb.pe_bss_extent(exe(tmp_path), ".data")


def test_the_hole_runs_from_the_block_to_the_next_one():
    block, start, end = arhb.find_hole(program(0x1000))
    assert (block.getName(), start, end) == (".bss", BSS + 0x1000, BSS + 0x3fff)
    assert arhb.find_hole(program(0x1000, next_start = BSS + 0x1000))[1:] == (None, None)
    assert arhb.find_hole(program(0x1000, last = True))[1:] == (None, None)
    with pytest.raises(ValueError, match = "no .data block"):
        arhb.find_hole(program(0x1000), ".data")


def test_the_plan_takes_the_hole_with_its_padding_or_refuses(capsys):
    pe_end = BSS + BSS_SIZE - 1
    assert arhb.plan(program(0x1000), ".bss", pe_end) == (arhb.OK, (BSS + 0x1000, 0x3000))
    assert "plus 4096 byte(s) of section-alignment padding" in capsys.readouterr().out
    assert arhb.plan(program(0x1000, next_start = BSS + 0x3000), ".bss", pe_end) == (
        arhb.OK, (BSS + 0x1000, 0x2000))
    assert "Hole covers the PE-declared .bss tail." in capsys.readouterr().out
    assert arhb.plan(program(0x1000, next_start = BSS + 0x2000), ".bss", pe_end) == (arhb.REFUSED, None)
    assert "REFUSING: PE-declared .bss end 00404fff is outside" in capsys.readouterr().out
    assert arhb.plan(program(0x1000, last = True), ".bss", pe_end) == (arhb.OK, None)
    assert "No hole after .bss" in capsys.readouterr().out


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(arhb.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        arhb.main([str(tmp_path), "P", "game.exe", exe(tmp_path), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys):
    prog = program(0x1000)
    code, fake = run_main(monkeypatch, tmp_path, prog)
    assert code == 0 and fake.closed == 1 and len(prog.getMemory().getBlocks()) == 3
    assert "[dry-run] would create uninitialized block 'RUNTIME_HEAP' at 00403000" in capsys.readouterr().out


def test_main_snapshots_then_creates_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(arhb.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program(0x1000)
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-runtime-heap"]
    heap = prog.getMemory().getBlock("RUNTIME_HEAP")
    assert (heap.getStart().getOffset(), heap.getSize(), heap.isInitialized()) == (BSS + 0x1000, 0x3000, False)
    assert (heap.isRead(), heap.isWrite(), heap.isExecute()) == (True, True, False)
    assert heap.source_name == "add_runtime_heap_block.py" and "SizeOfRawData" in heap.getComment()
    assert prog.transactions == [["Add RUNTIME_HEAP memory block", True]]
    assert prog.getDomainFile().saves == 1 and "Saved." in capsys.readouterr().out


def test_main_exits_with_the_plans_code_when_there_is_nothing_to_create(monkeypatch, tmp_path):
    assert run_main(monkeypatch, tmp_path, program(0x1000, next_start = BSS + 0x2000),
                    "--apply", "--no-snapshot")[0] == arhb.REFUSED


def test_a_block_that_cannot_be_created_rolls_back(monkeypatch, tmp_path, capsys):
    prog = program(0x1000)

    def refuse(*_args):
        raise RuntimeError("overlaps")
    monkeypatch.setattr(prog.getMemory(), "createUninitializedBlock", refuse)
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == arhb.FAILED
    assert prog.transactions == [["Add RUNTIME_HEAP memory block", False]]
    assert "ERROR creating block: overlaps" in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_an_error_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, Program(), "--no-snapshot")
    assert code == arhb.FAILED and fake.closed == 1
    assert "ERROR: no .bss block in the program" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(arhb.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == arhb.FAILED and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["add_runtime_heap_block.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "add_runtime_heap_block.py"), run_name = "__main__")
    assert exit_info.value.code == 0
