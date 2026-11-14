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
from ghidra_fake import (BuiltInDataType, PointerDataType, StructureDataType, TypedefDataType)
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import export_typed_accesses as eta

INT = BuiltInDataType("int", 4)
ACTOR = StructureDataType("CActor", [(INT, "a"), (INT, "b")], length = 0x40)
VECTOR = StructureDataType("CVector3f", [(INT, "x"), (INT, "y"), (INT, "z")])


# A pcode address: the instruction an op came from
class Target:
    def __init__(self, offset):
        self.offset = offset

    def getOffset(self):
        return self.offset


class SeqNum:
    def __init__(self, offset):
        self.target = Target(offset)

    def getTarget(self):
        return self.target


class High:
    def __init__(self, data_type):
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


# A varnode: a constant, or a value with a type and the op that defined it
class Node:
    def __init__(self, data_type = None, const = None, define = None):
        self.high = High(data_type) if data_type is not None else None
        self.const = const
        self.define = define
        self.descendants = []

    def isConstant(self):
        return self.const is not None

    def getOffset(self):
        return self.const

    def getDef(self):
        return self.define

    def getHigh(self):
        return self.high

    def getDescendants(self):
        return iter(self.descendants)


class Op:
    def __init__(self, mnemonic, address, inputs, output = None):
        self.mnemonic = mnemonic
        self.address = address
        self.inputs = inputs
        self.output = output
        if output is not None:
            output.define = self
        for node in inputs:
            node.descendants.append(self)

    def getMnemonic(self):
        return self.mnemonic

    def getInput(self, index):
        return self.inputs[index]

    def getNumInputs(self):
        return len(self.inputs)

    def getSeqnum(self):
        return SeqNum(self.address)

    def getOutput(self):
        return self.output


class HighFunction:
    def __init__(self, ops):
        self.ops = ops

    def getPcodeOps(self):
        return iter(self.ops)


def const(value):
    return Node(const = value)


def step(mnemonic, address, base, *rest, data_type = None):
    """The node an op of `mnemonic` at `address` makes from `base` and `rest`."""
    out = Node(data_type)
    Op(mnemonic, address, [base, *rest], out)
    return out


THIS = Node(PointerDataType(ACTOR))


def test_a_pointer_names_the_struct_it_points_at_through_typedefs():
    assert eta.pointed_struct(PointerDataType(ACTOR)) is ACTOR
    assert eta.pointed_struct(TypedefDataType("PActor", PointerDataType(TypedefDataType("TActor", ACTOR)))) is ACTOR
    assert eta.pointed_struct(PointerDataType(INT)) is None
    assert eta.pointed_struct(ACTOR) is None
    assert eta.pointee(Node()) is None


def test_an_access_walks_back_to_the_register_value_within_its_instruction():
    field = step("PTRSUB", 0x10, THIS, const(0x14))
    assert eta.access_root(field, 0x10) == (ACTOR, 0x14)
    # An element of an array of vectors at a constant index, then a field of it
    element = step("PTRADD", 0x20, Node(PointerDataType(VECTOR)), const(2), const(12))
    assert eta.access_root(step("PTRSUB", 0x20, element, const(4)), 0x20) == (VECTOR, 28)
    # Adds with the constant on either side, a subtraction, casts and copies
    added = step("INT_ADD", 0x30, const(8), step("CAST", 0x30, THIS))
    assert eta.access_root(step("COPY", 0x30, added), 0x30) == (ACTOR, 8)
    assert eta.access_root(step("INT_SUB", 0x40, THIS, const(4)), 0x40) == (ACTOR, -4)
    # A step made by an earlier instruction is not crossed: eax already held &this->b
    member = step("PTRSUB", 0x50, THIS, const(4), data_type = PointerDataType(VECTOR))
    assert eta.access_root(step("PTRSUB", 0x54, member, const(8)), 0x54) == (VECTOR, 8)


def test_an_access_with_no_constant_offset_or_no_struct_is_not_recorded():
    assert eta.access_root(step("PTRADD", 0x10, THIS, Node(), const(4)), 0x10) is None
    assert eta.access_root(step("PTRSUB", 0x10, THIS, Node()), 0x10) is None
    assert eta.access_root(step("INT_ADD", 0x10, THIS, Node()), 0x10) is None
    assert eta.access_root(step("PTRSUB", 0x10, Node(PointerDataType(INT)), const(4)), 0x10) is None


def test_offsets_are_signed_32_bit():
    assert eta.signed(0xfffffff0) == -16 and eta.signed(0x10) == 0x10 and eta.signed(-4) == -4


def loads_and_stores():
    ops = []
    load_ptr = step("PTRSUB", 0x100, THIS, const(4))
    ops.append(Op("LOAD", 0x100, [const(0), load_ptr], Node()))
    store_ptr = step("PTRSUB", 0x104, THIS, const(0x10))
    ops.append(Op("STORE", 0x104, [const(0), store_ptr, Node()]))
    ops.append(Op("LOAD", 0x108, [const(0), Node(PointerDataType(INT))], Node()))
    ops.append(Op("INT_ADD", 0x10c, [Node(), const(1)], Node()))
    return ops


def test_a_function_lists_each_typed_load_and_store():
    sizes = {}
    assert eta.function_accesses(HighFunction(loads_and_stores()), sizes) == {
        0x100: [("CActor", 4)], 0x104: [("CActor", 0x10)]}
    assert sizes == {"CActor": 0x40}


def sized_code():
    ops = []
    # new CActor: the call's result cast to CActor*, passed its size
    raw = Node(PointerDataType(INT))
    Op("CALL", 0x200, [const(0x601000), const(0x40)], raw)
    Op("INT_ADD", 0x202, [raw, const(1)], Node())
    Op("CAST", 0x204, [raw], Node(PointerDataType(ACTOR)))
    ops.append(raw.getDef())
    # A call returning a CActor* but not passed its size; one returning no struct; one returning nothing
    other = Node(PointerDataType(ACTOR))
    ops.append(Op("CALL", 0x210, [const(0x601000), const(8)], other))
    ops.append(Op("CALL", 0x220, [const(0x601000)], Node(PointerDataType(INT))))
    ops.append(Op("CALL", 0x230, [const(0x601000)]))
    # vectors[i]: an array stride of the struct's size; a stride of another size; an index by a register
    vectors = Node(PointerDataType(VECTOR))
    ops.append(Op("PTRADD", 0x240, [vectors, Node(), const(12)], Node()))
    ops.append(Op("PTRADD", 0x244, [vectors, Node(), const(4)], Node()))
    ops.append(Op("PTRADD", 0x248, [vectors, Node(), Node()], Node()))
    ops.append(Op("PTRADD", 0x24c, [Node(PointerDataType(INT)), Node(), const(4)], Node()))
    return ops


def test_allocations_and_array_strides_spell_a_structs_size():
    sizes = {}
    assert eta.size_uses(HighFunction(sized_code()), sizes) == {
        0x200: [("CActor", 0x40, "alloc")], 0x240: [("CVector3f", 12, "stride")]}
    assert sizes == {"CActor": 0x40, "CVector3f": 12}


@pytest.fixture(name = "mappings")
def fixture_mappings(tmp_path):
    first = write_json(tmp_path / "one.json", {"pairs": [{"a": "00401000"}, {"a": "00401100"}]})
    second = write_json(tmp_path / "two.json", {"pairs": [{"a": "00401000"}, {"a": "00401200"}, {"a": "00401300"}]})
    return [first, second]


def test_the_wanted_functions_are_every_mappings_reference_side(mappings):
    assert eta.wanted(mappings) == [0x401000, 0x401100, 0x401200, 0x401300]


# Decompiles each function to the high function a test gave it, or fails
class Result:
    def __init__(self, hfunc):
        self.hfunc = hfunc

    def decompileCompleted(self):
        return self.hfunc is not None

    def getHighFunction(self):
        return self.hfunc


class Decompiler:
    bodies = {}

    def __init__(self):
        self.disposed = False
        self.program = None

    def openProgram(self, program):
        self.program = program

    def decompileFunction(self, func, _timeout, _monitor):
        return Result(self.bodies.get(func.getName()))

    def dispose(self):
        self.disposed = True


def reference_program():
    program = Program()
    fm = program.getFunctionManager()
    fm.add("f", 0x401000)
    fm.add("g", 0x401100)
    fm.add("failed", 0x401200)
    return program


def test_collect_counts_each_outcome_and_reports_progress(mappings, capsys):
    Decompiler.bodies = {"f": HighFunction(loads_and_stores()), "g": HighFunction(sized_code())}
    addresses = eta.wanted(mappings)
    accesses, uses, sizes, stats = eta.collect(reference_program(), addresses * 250, Decompiler(), None)
    assert accesses == {"00000100": [["CActor", 4]], "00000104": [["CActor", 16]]}
    assert uses == {"00000200": [["CActor", 64, "alloc"]], "00000240": [["CVector3f", 12, "stride"]]}
    assert sizes == {"CActor": 0x40, "CVector3f": 12}
    assert stats == {"decompiled": 500, "failed": 250, "missing": 250}
    assert "  500/1000" in capsys.readouterr().out


def test_main_writes_the_accesses_sizes_and_uses(mappings, monkeypatch, tmp_path, capsys):
    # By module name: an attribute path would meet the fake package's placeholders first
    decompiler = importlib.import_module("ghidra.app.decompiler")
    monkeypatch.setattr(decompiler, "DecompInterface", Decompiler, raising = False)
    Decompiler.bodies = {"f": HighFunction(loads_and_stores()), "g": HighFunction(sized_code())}
    module = FakePyghidra(reference_program())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    out = tmp_path / "typed.json"
    assert eta.main(["--mapping", mappings[0], "--mapping", mappings[1], "--project", str(tmp_path),
                     "--out", str(out), "--limit", "3"]) == 0
    doc = json.loads(out.read_text())
    assert doc["program"] == "nocedit.exe" and doc["sizes"] == {"CActor": 64, "CVector3f": 12}
    assert (doc["decompiled"], doc["failed"], doc["missing"]) == (2, 1, 0)
    assert doc["accesses"]["00000100"] == [["CActor", 4]] and "00000200" in doc["size_uses"]
    assert module.opened[-1] == "/nocedit.exe" and module.closed == 1
    printed = capsys.readouterr().out
    assert "nocedit.exe: 3 functions to decompile" in printed
    assert "2 typed accesses, 2 size uses" in printed


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["export_typed_accesses.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "export_typed_accesses.py"), run_name = "__main__")
    assert exit_info.value.code == 0
