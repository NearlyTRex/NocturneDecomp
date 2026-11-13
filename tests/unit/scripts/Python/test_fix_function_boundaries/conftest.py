# Imports
import importlib
import sys

# Third-party imports
import pytest

# Local imports
from boundary_program import CreateFunctionCmd, DisassembleCommand, Pseudo
import fix_function_boundaries as ffb


@pytest.fixture(autouse = True)
def ghidra(monkeypatch):
    for name, attr, value in [("ghidra.app.util", "PseudoDisassembler", Pseudo),
                              ("ghidra.app.cmd.disassemble", "DisassembleCommand", DisassembleCommand),
                              ("ghidra.app.cmd.function", "CreateFunctionCmd", CreateFunctionCmd)]:
        monkeypatch.setattr(importlib.import_module(name), attr, value)


# A repository root of its own, where the script finds annotations/ and its byte patches
@pytest.fixture
def repo(tmp_path, monkeypatch):
    scripts = tmp_path / "scripts" / "Python"
    scripts.mkdir(parents = True)
    monkeypatch.setattr(ffb, "__file__", str(scripts / "fix_function_boundaries.py"))
    return tmp_path


# Runs main with a pyghidra stand-in and arguments, and returns its exit code
@pytest.fixture
def launch(monkeypatch, repo):
    monkeypatch.setattr(ffb.os, "_exit", sys.exit)

    def go(pyghidra, *args):
        monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
        monkeypatch.setattr(sys, "argv", ["fix_function_boundaries.py", *args])
        with pytest.raises(SystemExit) as stop:
            ffb.main()
        return stop.value.code
    return go
