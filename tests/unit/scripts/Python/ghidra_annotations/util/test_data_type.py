# Third-party imports
import pytest

# Local imports
from ghidra_program import Program
from ghidra_fake import (ArrayDataType, BuiltInDataType, BuiltInDataTypeManager, DataType, DataTypeComponent,
                         DefaultDataType, FunctionDefinitionDataType, Pointer, PointerDataType, StructureDataType,
                         TerminatedStringDataType, TypedefDataType, Undefined, UndefinedDataType, UnionDataType)
from ghidra_annotations.util import data_type as dt

INT = BuiltInDataType("int", 4)


# --- primitives --------------------------------------------------------------------

def test_primitives_cover_the_builtins_and_undefined_sizes():
    primitives = dt.get_primitive_data_types()
    assert primitives["int"].getName() == "int"
    assert [primitives[f"undefined{size}"].getLength() for size in (1, 2, 4, 8, 16, 32)] == [1, 2, 4, 8, 16, 32]
    assert primitives["undefined"] is primitives["undefined1"]


def test_primitives_leave_out_what_ghidra_does_not_have(monkeypatch):
    def undefined(size):
        if size == 16:
            raise ValueError("no such size")
        return None if size == 32 else UndefinedDataType(size)

    manager = BuiltInDataTypeManager()
    monkeypatch.setattr(manager, "getDataType", lambda path: None if path == "/ubyte" else BuiltInDataType(path[1:]))
    monkeypatch.setattr(BuiltInDataTypeManager, "getDataTypeManager", classmethod(lambda cls: manager))
    monkeypatch.setattr(Undefined, "getUndefinedDataType", staticmethod(undefined))
    primitives = dt.get_primitive_data_types()
    assert "ubyte" not in primitives
    assert {"undefined16", "undefined32"}.isdisjoint(primitives)
    assert "undefined8" in primitives


@pytest.mark.parametrize("name, normalized", [
    ("CHero *", "CHero"), ("int[4]", "int"), ("char * [2]", "char"), (" word ", "word")])
def test_normalize_data_type_name(name, normalized):
    assert dt.normalize_data_type_name(name) == normalized


# --- resolving a name to a type -----------------------------------------------------------

@pytest.fixture
def program():
    program = Program()
    program.getDataTypeManager().add(
        StructureDataType("CHero", category = "/actors"),
        StructureDataType("CMoon", category = "/actors"),
        TypedefDataType("HANDLE", PointerDataType(BuiltInDataType("void")), category = "/winnt"),
        StructureDataType("CSet", category = "/"))
    return program


def test_resolve_returns_nothing_for_no_name(program):
    assert dt.resolve_data_type_obj(program, "") is None


@pytest.mark.parametrize("name, category, expected", [
    ("CHero", "/actors", "CHero"),
    ("CSet", None, "CSet"),
    ("CMoon", None, "CMoon"),
    ("HANDLE", None, "HANDLE"),
])
def test_resolve_finds_the_programs_own_types(program, name, category, expected):
    assert dt.resolve_data_type_obj(program, name, category).getName() == expected


def test_resolve_by_full_path_and_by_normalized_name(program):
    assert dt.resolve_data_type_obj(program, "/CSet").getName() == "CSet"
    pointer = dt.resolve_data_type_obj(program, "CHero *")
    assert isinstance(pointer, Pointer) and pointer.getDataType().getName() == "CHero"


@pytest.mark.parametrize("name, expected_type, expected_name", [
    ("TerminatedCString", TerminatedStringDataType, "TerminatedCString"),
    ("undefined", UndefinedDataType, "undefined1"),
    ("undefined4", UndefinedDataType, "undefined4"),
    ("undefined4x", UndefinedDataType, "undefined1"),
    ("uint", BuiltInDataType, "uint"),
    ("NoSuchType", DefaultDataType, "undefined"),
])
def test_resolve_falls_back_through_strings_undefined_primitives_and_default(program, name, expected_type,
                                                                           expected_name):
    resolved = dt.resolve_data_type_obj(program, name)
    assert isinstance(resolved, expected_type)
    assert resolved.getName() == expected_name


def test_resolve_wraps_pointers_to_their_depth(program):
    resolved = dt.resolve_data_type_obj(program, "uint **")
    assert resolved.getDataType().getDataType().getName() == "uint"
    assert dt.resolve_data_type_obj(program, "NoSuchType *") is DefaultDataType.dataType


def test_resolve_builds_an_array_of_the_resolved_element(program):
    array = dt.resolve_data_type_obj(program, "CHero[3]")
    assert (array.getNumElements(), array.getDataType().getName()) == (3, "CHero")
    unknown = dt.resolve_data_type_obj(program, "Ghost[2]")
    assert unknown.getDataType() is DefaultDataType.dataType


def test_resolve_makes_a_function_pointer_a_pointer_to_a_function(program):
    resolved = dt.resolve_data_type_obj(program, "void (*)(int)")
    assert isinstance(resolved, Pointer)
    assert resolved.getDataType().getName() == "FunctionPointer"


# --- naming a type ------------------------------------------------------------------------------

@pytest.mark.parametrize("type_obj, name", [
    (None, "void"),
    (UndefinedDataType(4), "undefined4"),
    (DataType("undefined"), "undefined1"),
    (TypedefDataType("HANDLE", PointerDataType(BuiltInDataType("void"))), "HANDLE"),
    (BuiltInDataType("dword"), "dword"),
    (PointerDataType(PointerDataType(StructureDataType("CHero"))), "CHero**"),
    (ArrayDataType(ArrayDataType(BuiltInDataType("float"), 4, 4), 3, 16), "float[3][4]"),
    (StructureDataType("CMoon"), "CMoon"),
])
def test_resolve_data_type_name(type_obj, name):
    assert dt.resolve_data_type_name(Program(), type_obj) == name


def test_resolve_data_type_name_can_see_through_typedefs():
    handle = TypedefDataType("HANDLE", PointerDataType(BuiltInDataType("void")))
    assert dt.resolve_data_type_name(Program(), handle, preserve_typedefs = False) == "HANDLE"
    assert dt.resolve_data_type_name(Program(), PointerDataType(handle), preserve_typedefs = False) == "HANDLE*"


def test_resolve_data_type_name_stops_at_a_type_already_seen():
    assert dt.resolve_data_type_name(Program(), StructureDataType("CNode"), seen = {"CNode"}) == "CNode"


# --- dependencies -------------------------------------------------------------------------------

@pytest.mark.parametrize("name, tracked", [
    ("", False), ("int", False), ("dword:31", False), ("undefined4", False), ("undefined24", False), ("word_t", False),
    ("string", False), ("CHero", True), ("CDemon::CPart", True), ("CHero:x", True), ("BYTE_ARRAY", False),
])
def test_should_track_as_dependency(name, tracked):
    assert dt.should_track_as_dependency(name) is tracked


def test_ghidra_primitive_types():
    assert {"undefined4", "pointer", "ulonglong"} <= dt.get_ghidra_primitive_types()


def test_collect_typedef_deps_follows_typedefs_arrays_and_members():
    inner = StructureDataType("CInner", [INT])
    alias = TypedefDataType("InnerAlias", inner)
    outer = StructureDataType("COuter", [alias, ArrayDataType(inner, 2, 4), PointerDataType(StructureDataType("CPtr")),
                                         PointerDataType(None), BuiltInDataType("int")])
    assert dt.collect_typedef_deps(Program(), outer) == {"CInner"}
    assert dt.collect_typedef_deps(Program(), None) == set()


def test_collect_typedef_deps_allows_self_reference_only_through_pointers():
    node = StructureDataType("CNode", universal_id = 1)
    node.components = [DataTypeComponent(PointerDataType(node)), DataTypeComponent(None),
                       DataTypeComponent(StructureDataType("CNode", universal_id = 2))]
    assert dt.collect_typedef_deps(Program(), node) == set()


@pytest.mark.parametrize("type_obj", [
    TypedefDataType("INT32", BuiltInDataType("int")),
    PointerDataType(None),
    DataType("EDirection"),
])
def test_collect_typedef_deps_finds_nothing_beyond_primitives(type_obj):
    assert dt.collect_typedef_deps(Program(), type_obj) == set()


def test_collect_typedef_deps_visits_each_type_once():
    shared = TypedefDataType("Shared", StructureDataType("CBase"), universal_id = 7)
    seen = dt.collect_typedef_deps(Program(), StructureDataType("CTop", [shared, shared]))
    assert seen == {"CBase"}


class NoUniversalId(StructureDataType):
    def getUniversalID(self):
        raise AttributeError("getUniversalID")


def test_collect_typedef_deps_keys_a_type_without_an_id_by_identity():
    leaf = TypedefDataType("Leaf", StructureDataType("CLeaf"))
    root = NoUniversalId("CRoot", [TypedefDataType("Alias", leaf)])
    assert dt.collect_typedef_deps(Program(), root) == {"Leaf", "CLeaf"}


# Pointers, arrays and built-ins have no universal ID in Ghidra. Keyed by ID
# alone, every one of them looked like the first, so the second typedef-of-pointer
# here was never entered and TB's base went missing.
def test_dependency_walk_tells_apart_types_without_an_id():
    t1 = TypedefDataType("T1", PointerDataType(TypedefDataType("TA", StructureDataType("CA"))))
    t2 = TypedefDataType("T2", PointerDataType(TypedefDataType("TB", StructureDataType("CB"))))
    root = StructureDataType("CRoot", [t1, t2])
    assert dt.collect_typedef_deps(Program(), root) == {"TA", "CA", "TB", "CB"}


def test_dependency_walk_key():
    assert dt.get_dependency_walk_key(StructureDataType("CHero", universal_id = 7)) == ("id", "7")
    assert dt.get_dependency_walk_key(PointerDataType(StructureDataType("CHero"))) == ("path", "/CHero *")
    plain = object()
    assert dt.get_dependency_walk_key(plain) == ("object", id(plain))


# An array is named after its element ("First[2]" -> "First"); guarding the walk
# by name took the element for the array itself and never entered it
def test_dependency_walk_enters_an_array_of_a_typedef():
    root = StructureDataType("CRoot", [ArrayDataType(TypedefDataType("First", StructureDataType("CFirst")), 2, 4)])
    assert dt.collect_typedef_deps(Program(), root) == {"CFirst"}
    assert context_deps(root) == ({"First", "CFirst"}, set())


# --- dependencies with context: what needs a full definition, what a forward declaration ---------

def context_deps(type_obj):
    return dt.collect_type_dependencies_with_context(Program(), type_obj)


def test_context_deps_of_nothing():
    assert context_deps(None) == (set(), set())


def test_context_deps_through_a_typedef():
    target = StructureDataType("CTarget")
    assert context_deps(TypedefDataType("Alias", target)) == ({"CTarget"}, set())
    assert context_deps(TypedefDataType("INT32", BuiltInDataType("int"))) == (set(), set())
    assert context_deps(TypedefDataType("CSame", StructureDataType("CSame"))) == (set(), set())


# A pointer or array asked about directly is named like what it holds
# ("CHero *" -> "CHero"), which the walk takes for the type it started from,
# so it reports nothing; as a member (below) its target is reported.
@pytest.mark.parametrize("type_obj", [
    PointerDataType(PointerDataType(StructureDataType("CHero"))),
    PointerDataType(TypedefDataType("Callback", PointerDataType(FunctionDefinitionDataType("CallbackFn")))),
    PointerDataType(BuiltInDataType("char")),
    PointerDataType(None),
    ArrayDataType(StructureDataType("CCell"), 4, 8),
    ArrayDataType(BuiltInDataType("float"), 4, 4),
])
def test_context_deps_of_a_bare_pointer_or_array_are_empty(type_obj):
    assert context_deps(type_obj) == (set(), set())


def test_context_deps_of_a_typedef_of_a_pointer():
    to_struct = TypedefDataType("HANDLE", PointerDataType(StructureDataType("CHero")))
    assert context_deps(to_struct) == ({"CHero"}, {"CHero"})
    to_typedef = TypedefDataType("PCALLBACK", PointerDataType(TypedefDataType("Callback", StructureDataType("CFn"))))
    assert context_deps(to_typedef) == ({"Callback", "CFn"}, set())


def test_context_deps_of_members():
    node = StructureDataType("CNode")
    alias = TypedefDataType("Count", StructureDataType("CCounter"))
    node.components = [DataTypeComponent(dt_) for dt_ in (
        None, PointerDataType(None), PointerDataType(node), PointerDataType(PointerDataType(StructureDataType("CPeer"))),
        PointerDataType(TypedefDataType("Fn", FunctionDefinitionDataType("FnDef"))), PointerDataType(INT),
        StructureDataType("CEmbedded"), alias, ArrayDataType(StructureDataType("CSlot"), 2, 4), INT,
        StructureDataType("CNode", universal_id = 99))]
    direct, pointer = context_deps(node)
    assert pointer == {"CPeer"}
    assert direct == {"Fn", "FnDef", "CEmbedded", "Count", "CCounter", "CSlot"}


def test_context_deps_walk_a_shared_member_type_once():
    shared = TypedefDataType("Shared", StructureDataType("CBase"))
    assert context_deps(StructureDataType("CTop", [shared, shared])) == ({"Shared", "CBase"}, set())


def test_context_deps_of_unions_follow_members_too():
    assert context_deps(UnionDataType("UPair", [StructureDataType("CLeft")])) == ({"CLeft"}, set())


def function(return_type = None, arguments = ()):
    return FunctionDefinitionDataType("FnDef", return_type, arguments)


def test_context_deps_of_a_function_definition():
    hero = StructureDataType("CHero")
    alias = TypedefDataType("Handle", StructureDataType("CHandleImpl"))
    signature = function(PointerDataType(PointerDataType(hero)),
                         [PointerDataType(PointerDataType(UnionDataType("UArg"))), PointerDataType(alias),
                          StructureDataType("CVec"),
                          INT, PointerDataType(None), None, PointerDataType(INT)])
    assert context_deps(signature) == ({"Handle", "CHandleImpl", "CVec"}, {"CHero", "UArg"})


@pytest.mark.parametrize("return_type, expected", [
    (None, (set(), set())),
    (INT, (set(), set())),
    (StructureDataType("CResult"), ({"CResult"}, set())),
    (PointerDataType(TypedefDataType("Ret", StructureDataType("CRet"))), ({"Ret", "CRet"}, set())),
    (PointerDataType(None), (set(), set())),
    (PointerDataType(PointerDataType(INT)), (set(), set())),
])
def test_context_deps_of_a_function_return_type(return_type, expected):
    assert context_deps(function(return_type)) == expected


def test_context_deps_ignore_other_kinds_of_type():
    assert context_deps(DataType("EDirection")) == (set(), set())


def test_context_deps_key_a_type_without_an_id_by_identity_and_respect_the_path():
    assert context_deps(NoUniversalId("CRoot", [StructureDataType("CPart")])) == ({"CPart"}, set())
    same_name = StructureDataType("CLoop")
    same_name.components = [DataTypeComponent(TypedefDataType("Wrap", StructureDataType("CLoop", universal_id = 5)))]
    assert context_deps(same_name) == ({"Wrap", "CLoop"}, set())


# --- ordering ----------------------------------------------------------------------------

def test_resolve_circular_dependencies_orders_dependencies_first():
    deps = {"CHero": {"CActor", "int"}, "CActor": {"CObject"}, "CObject": set(), "CExtern": {"CActor"}}
    defs = {name: {} for name in ("CHero", "CActor", "CObject")}
    assert dt.resolve_circular_dependencies(deps, defs) == ["CObject", "CActor", "CHero"]


def test_resolve_circular_dependencies_exits_on_a_missing_definition(capsys):
    with pytest.raises(SystemExit):
        dt.resolve_circular_dependencies({"CHero": {"CGhost"}}, {"CHero": {}})
    assert "Missing definitions for dependencies: ['CGhost']" in capsys.readouterr().out


def test_resolve_circular_dependencies_breaks_a_cycle_inside_it(capsys):
    deps = {"A": {"B"}, "B": {"A"}, "C": {"B"}}
    assert dt.resolve_circular_dependencies(deps, {"A": {}, "B": {}, "C": {}}) == ["A", "B", "C"]
    assert deps == {"A": set(), "B": {"A"}, "C": {"B"}}
    assert "Broke potential cycle: A -> B" in capsys.readouterr().out


def test_resolve_circular_dependencies_drops_self_dependencies_first(capsys):
    deps = {"A": {"A", "B"}, "B": {"A"}}
    assert dt.resolve_circular_dependencies(deps, {"A": {}, "B": {}}) == ["A", "B"]
    out = capsys.readouterr().out
    assert out.index("Removed self-dependency: A -> A") < out.index("Broke potential cycle: A -> B")


def test_resolve_circular_dependencies_gives_up_at_the_depth_limit(capsys):
    with pytest.raises(SystemExit):
        dt.resolve_circular_dependencies({"A": {"B"}, "B": {"A"}}, {"A": {}, "B": {}}, max_depth = 0)
    out = capsys.readouterr().out
    assert "Maximum recursion depth (0) exceeded" in out
    assert "Remaining types in cycle: ['A', 'B']" in out
    assert "[ERROR] Consider manually breaking the cycle" in out


@pytest.mark.parametrize("path, standard", [("/", True), ("/windows.h", True), ("/PE", False), ("/a/b.h", False)])
def test_is_standard_ghidra_category(path, standard):
    assert bool(dt.is_standard_ghidra_category(path)) is standard
