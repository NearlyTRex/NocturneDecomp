# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import headers as hd
import ghidra_fake as gf

INT = gf.BuiltInDataType("int", 4)
UINT = gf.BuiltInDataType("uint", 4)


class Ref:
    def __init__(self, address, op):
        self.address = address
        self.op = op

    def getAddress(self):
        return self.address

    def getOpIndex(self):
        return self.op


class Equate:
    def __init__(self, name, value, refs = ()):
        self.name = name
        self.value = value
        self.refs = list(refs)

    def getName(self):
        return self.name

    def getValue(self):
        return self.value

    def getReferences(self):
        return iter(self.refs)


class Program:
    def __init__(self, types = (), equates = (), name = "nocedit.exe"):
        self.types = list(types)
        self.equates = equates
        self.name = name

    def getEquateTable(self):
        if isinstance(self.equates, Exception):
            raise self.equates
        return self

    def getEquates(self):
        return iter(self.equates)

    def getDataTypeManager(self):
        return self

    def getAllDataTypes(self):
        return iter(self.types)

    def getDomainFile(self):
        return self

    def getName(self):
        return self.name


class Struct(gf.StructureDataType):
    """Fields end to end, no filler."""
    def getNumDefinedComponents(self):
        return len(self.components)


def struct(name, fields = (), category = "/"):
    return Struct(name, fields, category = category)


@pytest.fixture(name = "deps")
def fixture_deps(monkeypatch):
    """A type's (direct, pointer) dependencies, as the header writers see them, by name.

    test_headers_types covers how they are collected; here they are given.
    """
    table = {}

    def collect(program, dt):
        direct, pointer = table.get(dt.getName(), ((), ()))
        return set(direct), set(pointer)

    monkeypatch.setattr(hd, "collect_type_dependencies", collect)
    return table


def read(path):
    """A written header's lines, from after the generated-file notice."""
    lines = path.read_text().split("\n")
    return lines[lines.index("#pragma once"):]


# --- equates ----------------------------------------------------------------------------

@pytest.mark.parametrize("name, valid", [
    ("", False), ("9ABC", False), ("A-B", False), ("ABCDEF", False), ("_X1", True), ("GAME_X", True)])
def test_define_names(name, valid):
    assert hd.is_valid_define_name(name) is valid


@pytest.mark.parametrize("value, text", [
    (0, "0"), (255, "255"), (256, "0x100"), (300, "300"), (0x1001, "0x1001"), (-128, "-128"), (-129, "0xFFFFFF7F")])
def test_equate_values(value, text):
    assert hd.format_equate_value(value) == text


def test_equates_are_grouped_by_prefix_with_the_other_base_beside_them():
    equates = [
        {"name": "GAME_A", "value": 0x100, "formatted_value": "0x100", "refs": [1, 2]},
        {"name": "GAME_Z", "value": 0, "formatted_value": "0x0"},
        {"name": "GAME_B", "value": 300, "formatted_value": "300", "binary_value": 200},
        {"name": "GAME_C", "value": 5, "formatted_value": "5"},
        {"name": "LONE", "value": 12, "formatted_value": "12"},
    ]
    lines = hd.generate_equates_header(None, equates).split("\n")
    def pad(name):
        return f"#define {name}".ljust(50)
    assert lines == [
        "#pragma once", "", "// Equates / Constants", "", "// GAME Constants",
        pad("GAME_A") + "0x100  // 256",
        "// OVERRIDDEN (EQUATE_VALUE_OVERRIDES in headers.py): the binary's value is 200 (0xC8)",
        pad("GAME_B") + "300  // 0x12C", pad("GAME_C") + "5", pad("GAME_Z") + "0x0", "",
        "// MISC Constants", pad("LONE") + "12  // 0xC", "",
        "// Total equates: 5", "// Total references: 2", ""]


def test_program_equates_are_read_with_their_references_and_overrides():
    program = Program(equates = [
        Equate("GAME_SCREEN_MAX_HEIGHT", 1200, [Ref("00401000", 1)]),
        Equate("system_flag", 3), Equate("bad name", 1), Equate("ABCD", 2)])
    by_category = hd.organize_equates_by_category(program)
    assert sorted(by_category) == ["defines/game", "defines/system"]
    height, table = by_category["defines/game"]
    assert height == {"name": "GAME_SCREEN_MAX_HEIGHT", "value": 2160, "binary_value": 1200,
                      "refs": [{"addr": "00401000", "opIndex": 1}], "formatted_value": "2160"}
    assert table["name"] == "GAME_RECIPROCAL_TABLE_SIZE"
    assert [e["name"] for e in by_category["defines/system"]] == ["system_flag"]


def test_defines_h_is_written_even_without_equates(tmp_path, monkeypatch):
    hd.export_equates_file(None, str(tmp_path), {"defines/game": [
        {"name": "GAME_A", "value": 1, "formatted_value": "1"}]})
    assert "#define GAME_A" in (tmp_path / "defines.h").read_text()
    hd.export_equates_file(None, str(tmp_path), {})
    assert "// No equates defined in Ghidra" in (tmp_path / "defines.h").read_text()
    logged = []
    monkeypatch.setattr(hd, "log_info", logged.append)
    hd.export_equates_file(None, str(tmp_path), {"defines/game": [{"name": "X"}]})
    assert logged[1] == "ERROR exporting equates: 'formatted_value'"


# --- game type files --------------------------------------------------------------------

def test_each_game_type_gets_its_own_header(tmp_path, deps):
    types = [struct("S", [(INT, "a")]), gf.UnionDataType("U", [INT]), gf.EnumDataType("E", 4, {"A": 1}),
             gf.TypedefDataType("T", INT), gf.FunctionDefinitionDataType("F", INT), INT]
    infos = [{"data_type": dt, "export_path": path, "original_path": "/Nocturne/X/Game", "name": dt.getName()}
             for dt, path in zip(types, ["/types/structs", "types/unions", "types/enums", "types/typedefs",
                                         "types/funcdefs", ""])]
    hd.export_individual_game_files(None, str(tmp_path), infos, {})
    for path in ("types/structs/S.h", "types/unions/U.h", "types/enums/E.h", "types/typedefs/T.h", "types/funcdefs/F.h"):
        assert (tmp_path / path).exists()
    assert not (tmp_path / "int.h").exists()
    hd.export_individual_game_files(None, str(tmp_path / "none"), [])
    assert not (tmp_path / "none").exists()


# --- system headers ---------------------------------------------------------------------

def grouped(**kinds):
    group = {kind: [] for kind in hd._SYSTEM_TYPE_KINDS}
    group.update(kinds)
    return group


def test_headers_that_include_each_other_fold_into_the_largest(deps):
    a1, a2, b1, c1, d1 = struct("A1"), struct("A2"), struct("B1"), struct("C1"), struct("D1")
    deps["A1"] = ({"B1", "uint", "A2", "Nowhere"}, set())
    deps["B1"] = ({"struct A1"}, {"C1"})
    deps["C1"] = ({"A1"}, set())
    deps["D1"] = ({"A1"}, set())
    types = {"system/a": grouped(structs = [a1, a2, gf.TypedefDataType("uint", INT)]), "system/b": grouped(structs = [b1]),
             "system/c": grouped(structs = [c1]), "system/d": grouped(structs = [d1])}
    paths = {"A1": "system/a.h", "A2": "system/a.h", "B1": "system/b.h", "C1": "system/c.h", "D1": "system/d.h",
             "uint": "system/basetypes.h"}
    folded = hd.merge_include_cycles(None, types, paths, {"uint"})
    assert folded == {"system/b": "system/a", "system/c": "system/a"}
    assert sorted(t.getName() for t in types["system/a"]["structs"]) == ["A1", "A2", "B1", "C1", "uint"]
    assert types["system/b"]["structs"] == [] and paths["B1"] == paths["C1"] == "system/a.h"
    # Nothing to fold
    assert hd.merge_include_cycles(None, {"system/d": grouped(structs = [d1])}, paths, set()) == {}


def test_runtime_declarations_follow_the_program():
    assert set(hd.get_header_injections("nocedit.exe")) == {"watcom", "winsock", "ddraw", "dsound"}
    injections = hd.get_header_injections("tridx7.dll")
    assert set(injections) == {"ddraw", "winbase"}
    assert any("DirectDrawEnumerateExA" in line for line in injections["ddraw"]())
    assert any("ShowCursor" in line for line in injections["winbase"]())
    assert any("__vec_new" in line for line in hd.generate_watcom_runtime_inlines())
    assert any("DirectDrawCreate" in line for line in hd.generate_ddraw_api_functions())
    assert any("DirectSoundCreate" in line for line in hd.generate_dsound_api_functions())


def test_system_headers_are_written_in_dependency_order(tmp_path, deps):
    va = struct("va_list_t", [(gf.ArrayDataType(gf.PointerDataType(gf.BuiltInDataType("char", 1)), 1), "value")])
    f = gf.FunctionDefinitionDataType("CALLBACK", INT)
    wsadata = struct("WSADATA", [(INT, "w")])
    later_union = gf.UnionDataType("LATER", [INT])
    deps["CALLBACK"] = (set(), {"union LATER", "struct WSADATA", "Elsewhere", "uint"})
    # SOCKET * is filed under winsock.h without being one of its types: no self-include
    deps["WSADATA"] = ({"HOSTENT", "OTHER", "uint", "Unknown", "BUSY", "SOCKET *"}, set())
    types = {
        "system/winsock": grouped(function_definitions = [f], structs = [wsadata], unions = [later_union],
                                  typedefs = [gf.TypedefDataType("uint", INT)]),
        "system/stdarg": grouped(structs = [va]),
        "system/stdint": grouped(typedefs = [gf.TypedefDataType("int32_t", INT)]),
        "system/basetsd": grouped(typedefs = [gf.TypedefDataType("intptr_t", INT)]),
        "system/empty": grouped(),
        "system/x": grouped(structs = [struct("BUSY")]),
        "system/y": grouped(structs = [struct("OTHER")]),
    }
    # Alphabetically LATER would come first; it holds a WSADATA, so it follows it
    deps["LATER"] = ({"WSADATA"}, set())
    deps["BUSY"] = ({"OTHER"}, set())
    deps["OTHER"] = ({"BUSY"}, set())
    paths = {"HOSTENT": "system/hostent.h", "OTHER": "system/y.h", "BUSY": "system/x.h", "uint": "system/basetypes.h",
             "WSADATA": "system/winsock.h", "CALLBACK": "system/winsock.h", "LATER": "system/winsock.h",
             "SOCKET *": "system/winsock.h"}
    hd.export_system_grouped_files(Program(), str(tmp_path), types, paths)
    system = tmp_path / "system"
    winsock = read(system / "winsock.h")
    assert winsock[:7] == ["#pragma once", "", "// Dependencies", '#include "system/basetypes.h"',
                           '#include "system/hostent.h"', '#include "system/x.h"', ""]
    assert "// Forward declarations" in winsock and "struct Elsewhere;" in winsock and "union LATER;" in winsock
    assert "extern int WSACleanup(void);" in winsock and '#include "system/winsock.h"' not in winsock
    assert winsock.index("typedef struct WSADATA {") < winsock.index("typedef union LATER {")
    assert "#define VA_END_T(ap) do { (ap).value[0] = (char*)0; } while(0)" in read(system / "stdarg.h")
    assert "#include <stdint.h>" in read(system / "stdint.h")
    assert "// Every type this header declared is now provided by the host toolchain or" in read(system / "basetsd.h")
    assert not (system / "empty.h").exists()
    # x and y needed each other: one holds both, the other includes it
    assert '#include "system/x.h"' in read(system / "y.h") and "typedef struct OTHER {" in read(system / "x.h")
    assert "typedef unsigned char byte;" in read(system / "basetypes.h")


def test_system_headers_without_a_path_map(tmp_path, deps):
    deps["S"] = ({"T"}, set())
    hd.export_system_grouped_files(Program(name = "tridx7.dll"), str(tmp_path), {"system/winbase": grouped(structs = [struct("S")])})
    text = read(tmp_path / "system" / "winbase.h")
    assert text[:4] == ["#pragma once", "", "// Dependencies", '#include "system/basetypes.h"']
    assert "extern int ShowCursor(BOOL bShow);" in text


# --- aggregates -------------------------------------------------------------------------

def test_aggregates(tmp_path):
    include = str(tmp_path)
    assert hd.generate_type_category_aggregate(include, "classes") == 0
    (tmp_path / "types" / "classes").mkdir(parents = True)
    assert hd.generate_type_category_aggregate(include, "classes") == 0
    (tmp_path / "types" / "classes" / "B.h").write_text("")
    (tmp_path / "types" / "classes" / "A.h").write_text("")
    (tmp_path / "types" / "classes" / "notes.txt").write_text("")
    hd.generate_types_aggregate(include)
    def includes(path):
        return [line for line in read(path) if line.startswith("#include")]
    assert includes(tmp_path / "types" / "classes.h") == ['#include "types/classes/A.h"', '#include "types/classes/B.h"']
    assert includes(tmp_path / "types.h") == ['#include "types/classes.h"']

    hd.generate_system_aggregate(include)
    assert not (tmp_path / "system.h").exists()
    (tmp_path / "system").mkdir()
    for name in ("winnt.h", "crt.h", "basetypes.h", "system.h"):
        (tmp_path / "system" / name).write_text("")
    hd.generate_system_aggregate(include)
    assert includes(tmp_path / "system.h") == ['#include "system/crt.h"', '#include "system/basetypes.h"',
                                               '#include "system/misc.h"', '#include "system/winnt.h"']
    assert (tmp_path / "system" / "misc.h").exists()
    # An existing misc.h is left as it is, and without crt.h or basetypes.h the rest are alphabetical
    (tmp_path / "system" / "misc.h").write_text("mine")
    for name in ("crt.h", "basetypes.h"):
        (tmp_path / "system" / name).unlink()
    hd.generate_system_aggregate(include)
    assert (tmp_path / "system" / "misc.h").read_text() == "mine"
    assert includes(tmp_path / "system.h") == ['#include "system/misc.h"', '#include "system/winnt.h"']

    hd.generate_master_include(include)
    assert '#include "prototypes.h"' in read(tmp_path / "nocturne.h")


def test_a_default_stdarg_header_only_when_there_is_none(tmp_path):
    hd.ensure_default_stdarg_header(str(tmp_path))
    stdarg = tmp_path / "system" / "stdarg.h"
    assert "// STDARG - System Header (default)" in stdarg.read_text()
    stdarg.write_text("mine")
    hd.ensure_default_stdarg_header(str(tmp_path))
    assert stdarg.read_text() == "mine"


# --- the whole export -------------------------------------------------------------------

def test_the_export_files_every_type_by_its_category(tmp_path, deps):
    game = struct("CGame", [(INT, "a")], category = "/Nocturne/Class/Game")
    union = gf.UnionDataType("UGame", [INT], category = "/Nocturne/Union/Game")
    system_types = [
        struct("DDSURFACEDESC", [(INT, "a")], category = "/Nocturne/System/ddraw.h"),
        gf.UnionDataType("DDUNION", [INT], category = "/Nocturne/System/ddraw.h"),
        gf.EnumDataType("DDENUM", 4, {"A": 1}, category = "/Nocturne/System/ddraw.h"),
        gf.TypedefDataType("LPDDS", gf.PointerDataType(INT), category = "/Nocturne/System/ddraw.h"),
        gf.FunctionDefinitionDataType("DDCALLBACK", INT, category = "/Nocturne/System/ddraw.h"),
        gf.PointerDataType(INT),
    ]
    system_types[-1].category = "/Nocturne/System/ddraw.h"
    skipped = [gf.DataType("undefined4"), gf.DataType("__x"), gf.DataType(""), gf.BuiltInDataType("int"),
               struct("RootLoose", category = "/"), gf.TypedefDataType("Hidden", INT, category = "/winnt.h"),
               struct("CGame", category = "/Nocturne/Struct/Game")]
    skipped[4] = gf.TypedefDataType("Rooted", INT, category = "/")
    program = Program([game, union, struct("IMAGE_DOS_HEADER", [(INT, "e")], category = "/")] + system_types + skipped,
                      equates = [Equate("GAME_X", 7)])
    paths = hd.export_header_files(program, str(tmp_path))
    assert paths["CGame"] == "types/classes/CGame.h" and paths["UGame"] == "types/unions/UGame.h"
    assert paths["DDSURFACEDESC"] == paths["int *"] == "system/ddraw.h" and paths["IMAGE_DOS_HEADER"] == "system/dos.h"
    assert paths["uint"] == paths["pointer"] == "system/basetypes.h" and "Hidden" not in paths and "Rooted" not in paths
    assert (tmp_path / "types" / "classes" / "CGame.h").exists() and (tmp_path / "system" / "dos.h").exists()
    ddraw = (tmp_path / "system" / "ddraw.h").read_text()
    for name in ("DDSURFACEDESC", "DDUNION", "DDENUM", "LPDDS", "DDCALLBACK", "DirectDrawCreate"):
        assert name in ddraw
    assert "#define GAME_X" in (tmp_path / "defines.h").read_text()
    for name in ("nocturne.h", "system.h", "types.h", "system/stdarg.h", "system/intrinsics.h"):
        assert (tmp_path / name).exists()


def test_an_export_whose_equates_fail_still_writes_its_headers(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(hd, "log_info", logged.append)
    hd.export_header_files(Program(equates = RuntimeError("no table")), str(tmp_path))
    assert "ERROR collecting equates: no table" in logged
    assert "// No equates defined in Ghidra" in (tmp_path / "defines.h").read_text()
