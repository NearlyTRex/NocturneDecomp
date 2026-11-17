# Imports
import importlib

# Third-party imports
import pytest

# Local imports
from infer_globals_world import BUILTINS, Placeholder
import ghidra_fake


# The Ghidra data-type module as apply_plan imports it, with the built-ins it uses
@pytest.fixture(name = "ghidra")
def fixture_ghidra(monkeypatch):
    ghidra_fake.install()
    data_module = importlib.import_module("ghidra.program.model.data")
    for name in BUILTINS:
        monkeypatch.setattr(data_module, name, type(name, (), {"dataType": Placeholder(name)}), raising = False)
    monkeypatch.setattr(data_module.TerminatedStringDataType, "dataType", data_module.TerminatedStringDataType(),
                        raising = False)
    monkeypatch.setattr(data_module, "PointerDataType", lambda target, dtm: Placeholder("pointer"))
    monkeypatch.setattr(data_module, "ArrayDataType", lambda dt, count, size: Placeholder("array", count * size))
    monkeypatch.setattr(data_module.Undefined, "isUndefined",
                        staticmethod(lambda t: t.getName() == "undefined1"), raising = False)
    return data_module
