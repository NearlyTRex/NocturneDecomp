# Imports
import importlib

# Third-party imports
import pytest

# Local imports
from boundary_program import BASE, BoundaryFunction, BoundaryProgram, at, described_function, function, label
from ghidra_fake import Variable
import fix_function_boundaries as ffb


# --- snapshot -----------------------------------------------------------------------------------

def test_a_snapshot_copies_what_a_rebuild_destroys():
    program = BoundaryProgram()
    snap = ffb.snapshot_function(program, described_function(program))
    assert {k: snap[k] for k in ("name", "namespace", "convention", "noreturn", "custom_storage", "varargs",
                                 "comment", "repeatable_comment", "capture_errors")} == {
        "name": "Thing_FUN_00001010", "namespace": "CThing", "convention": "__thiscall", "noreturn": True,
        "custom_storage": True, "varargs": True, "comment": "plate", "repeatable_comment": "seen everywhere",
        "capture_errors": []}
    assert snap["ret"].args == ("int", "EAX", program)
    assert [(p.getName(), p.getDataType()) for p in snap["params"]] == [("this_ptr", "CThing *")]
    assert [(v.getName(), v.getFirstUseOffset()) for v in snap["locals"]] == [("count", 4)]


def test_a_snapshot_records_what_it_could_not_copy(monkeypatch):
    def refuse(*_args):
        raise RuntimeError("no copy")

    listing = importlib.import_module("ghidra.program.model.listing")
    monkeypatch.setattr(listing, "ParameterImpl", refuse)
    monkeypatch.setattr(listing, "LocalVariableImpl", refuse)
    program = BoundaryProgram()
    func = described_function(program)
    func.return_variable = None
    assert ffb.snapshot_function(program, func)["capture_errors"] == [
        "return: 'NoneType' object has no attribute 'getDataType'",
        "param this_ptr: no copy", "local count: no copy"]


# --- names --------------------------------------------------------------------------------------

@pytest.mark.parametrize("name, entry, renamed", [
    ("Thing_FUN_00001010", 0x1020, ("Thing_FUN_00001020", True)),
    ("Thing_FUN_00001020", 0x1020, ("Thing_FUN_00001020", False)),
    ("Thing_FUN_0040", 0x1020, ("Thing_FUN_0040", False)),
])
def test_a_name_s_address_suffix_follows_the_entry(name, entry, renamed):
    assert ffb.retarget_name(name, at(entry)) == renamed


# --- restore ------------------------------------------------------------------------------------

def test_restoring_puts_everything_back_and_moves_the_name_suffix():
    program = BoundaryProgram()
    snap = ffb.snapshot_function(program, described_function(program))
    nf = function(program, 0x20)
    assert ffb.restore_function(program, nf, snap) == ([], "Thing_FUN_00001020")
    assert (nf.namespace, nf.name, nf.noreturn, nf.varargs) == ("CThing", "Thing_FUN_00001020", True, True)
    assert nf.prototype[0] == "__thiscall" and [p.getName() for p in nf.prototype[2]] == ["this_ptr"]
    assert [v.getName() for v in nf.local_variables] == ["count"]
    assert (nf.comment, nf.repeatable_comment) == ("plate", "seen everywhere")


def test_restoring_a_plain_function_keeps_ghidra_s_own_name_and_sets_nothing_extra():
    program = BoundaryProgram()
    snap = ffb.snapshot_function(program, function(program, 0x10))
    nf = function(program, 0x20)
    assert ffb.restore_function(program, nf, snap) == (
        ["return: 'NoneType' object has no attribute 'getDataType'"], None)
    assert (nf.name, nf.namespace, nf.noreturn, nf.comment) == ("FUN_00001020", None, False, None)
    snap["name"] = "Thing_FUN_00001020"
    assert ffb.restore_function(program, nf, snap)[1] is None and nf.name == "Thing_FUN_00001020"


# A recreated function that refuses every change
class Refusing(BoundaryFunction):
    def __init__(self):
        super().__init__("FUN_00001020", at(BASE + 0x20))
        self.local_variables = [Variable("count", "int")]

    def refuse(self, *_args):
        raise RuntimeError("refused")

    setParentNamespace = setName = updateFunction = setVarArgs = setNoReturn = setComment = refuse
    setRepeatableComment = refuse


def test_restoring_reports_every_part_that_would_not_apply():
    program = BoundaryProgram()
    snap = ffb.snapshot_function(program, described_function(program))
    problems, renamed = ffb.restore_function(program, Refusing(), snap)
    assert renamed is None
    assert problems == ["namespace: refused", "name: refused", "signature: refused", "varargs: refused",
                        "noreturn: refused", "local count: count", "comment: refused",
                        "repeatable_comment: refused"]
    assert ffb.restore_function(program, None, snap) == (["function was not recreated"], None)


def test_dynamic_storage_is_kept_for_a_function_without_custom_storage():
    program = BoundaryProgram()
    func = described_function(program)
    func.custom_storage = False
    nf = function(program, 0x20)
    assert ffb.restore_function(program, nf, ffb.snapshot_function(program, func)) == ([], "Thing_FUN_00001020")
    assert nf.prototype[0] == "__thiscall"


# --- the vacated symbol -------------------------------------------------------------------------

def test_only_the_old_name_s_non_function_label_is_cleared():
    program = BoundaryProgram()
    label(program, 2, "FUN_00001002")
    label(program, 2, "LAB_00001002")
    label(program, 2, "FUN_00001002", symbol_type = "FUNCTION")
    label(program, 2, "FUN_00001002", deletes = False)
    assert ffb.clear_vacated_symbol(program, at(BASE + 2), "FUN_00001002") == 1
    assert [s.getName() for s in program.getSymbolTable().symbols] == ["LAB_00001002", "FUN_00001002",
                                                                       "FUN_00001002"]


def test_a_symbol_table_that_fails_is_warned_about(monkeypatch, capsys):
    program = BoundaryProgram()

    def refuse(_address):
        raise RuntimeError("locked")

    monkeypatch.setattr(program.getSymbolTable(), "getSymbols", refuse)
    assert ffb.clear_vacated_symbol(program, at(BASE + 2), "x") == 0
    assert "WARN: could not clear stale symbol at 00001002: locked" in capsys.readouterr().out
