# Imports
import importlib
import os
import runpy
import struct
import sys
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, BuiltInDataType, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from pe_helpers import call_rel32 as call, push_imm32 as push
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket
import sibling_match
import watcom_static_objects as wso
import watcom_type_info as wti

# The faked Ghidra module's, so it is the constant the script compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
NO_BYTES = CODE + 0x800          # mapped code the file holds no bytes for
DECOY, INIT_GAME, INIT_MOON, REGISTRAR = CODE, CODE + 0x10, CODE + 0x40, CODE + 0x60
DTOR_GAME, DTOR_POOL, DTOR_BAD, ARRFINI = CODE + 0x70, CODE + 0x80, CODE + 0xa0, CODE + 0xc0
DTOR_BITMAP, DTOR_UNKNOWN = CODE + 0xd0, CODE + 0xe0
RECORD_GAME, RECORD_STAKE = DATA, DATA + wti.RECORD.size
OBJ = {k: 0x800000 + 0x100 * i for i, k in enumerate(
    ("game", "pool", "bitmap1", "bitmap2", "bad", "unknown", "nobytes", "orphan"))}
OBJ["bitmap2"] = OBJ["bitmap1"] + 0x10
DTORS = {"game": DTOR_GAME, "pool": DTOR_POOL, "bitmap1": DTOR_BITMAP, "bitmap2": DTOR_BITMAP,
         "bad": DTOR_BAD, "unknown": DTOR_UNKNOWN, "nobytes": NO_BYTES, "orphan": DTOR_GAME}
CALL = {k: DATA + 0x200 + 12 * i for i, k in enumerate(DTORS)}
NODE = {k: DATA + 0x300 + 16 * i for i, k in enumerate(DTORS)}
# Watcom packs some nodes on no boundary
NODE["bitmap2"] = DATA + 0x3e1
PTR_GAME, PTR_POOL_A, PTR_POOL_B = DATA + 0x400, DATA + 0x404, DATA + 0x408


def registering(at, *nodes):
    body = b""
    for node in nodes:
        body += push(NODE[node])
        body += call(at + len(body), REGISTRAR)
    return body + b"\xc3"


def array_dtor(at, type_info, extent):
    body = push(type_info) + push(extent) + b"\x8b\x54\x24\x0c\x52"
    return body + call(at + len(body), ARRFINI) + b"\xc3"


def code_bytes():
    code = bytearray(b"\xcc" * 0x400)

    def put(at, body):
        code[at - CODE:at - CODE + len(body)] = body
    put(DECOY, push(NODE["game"]) + b"\xc3")
    put(INIT_GAME, registering(INIT_GAME, "game", "bitmap1", "bitmap2"))
    put(INIT_MOON, registering(INIT_MOON, "pool", "bad"))
    put(DTOR_POOL, array_dtor(DTOR_POOL, RECORD_STAKE, 0x100))
    put(DTOR_BAD, array_dtor(DTOR_BAD, 0x1234, 4))
    for at in (REGISTRAR, DTOR_GAME, ARRFINI, DTOR_BITMAP, DTOR_UNKNOWN):
        put(at, b"\xc3")
    return bytes(code)


def data_bytes():
    data = bytearray(0x500)

    def words(at, *values):
        data[at - DATA:at - DATA + 4 * len(values)] = struct.pack(f"<{len(values)}I", *values)
    names = {"CGame": DATA + 0x100, "CStake": DATA + 0x110}
    for cls, at in names.items():
        data[at - DATA:at - DATA + len(cls) + 5] = f"${cls}$$".encode() + b"\0"
    data[0:wti.RECORD.size * 2] = (wti.RECORD.pack(0x20100, 0, 0, DTOR_GAME, 8, names["CGame"])
                                   + wti.RECORD.pack(0x20100, 0, 0, 0, 4, names["CStake"]))
    for k, dtor in DTORS.items():
        words(CALL[k], wso.CALL_FLAGS, dtor, OBJ[k])
        words(NODE[k], 0, CALL[k], 2 if k == "orphan" else wso.NODE_KIND, OBJ[k])
    words(PTR_GAME, OBJ["game"], OBJ["pool"], OBJ["pool"])
    # A 4 before a word that is not a function is no call
    words(DATA + 0x480, wso.CALL_FLAGS, 0x12345678, 5)
    return bytes(data)


def pe():
    return build_sectioned_pe([(".text", code_bytes(), SECTION_EXECUTE, 0x1000), ("DGROUP", data_bytes(), 0),
                               (".bss", b"", 0)], BASE)


def functions(names):
    addrs = (DECOY, INIT_GAME, INIT_MOON, REGISTRAR, DTOR_GAME, DTOR_POOL, DTOR_BAD, ARRFINI, DTOR_BITMAP,
             DTOR_UNKNOWN, NO_BYTES)
    return [function(a, names.get(a, f"FUN_{a:08x}")) for a in addrs]


def hexed(value):
    return f"{value:08x}"


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    bitmap_dtor = f"engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_{DTOR_BITMAP:08x}"
    mine = {INIT_GAME: f"core_game.cpp_staticInit_FUN_{INIT_GAME:08x}",
            INIT_MOON: f"core_msnedit.cpp_staticInit_FUN_{INIT_MOON:08x}",
            DTOR_POOL: f"unkafter_moon.cpp_FUN_{DTOR_POOL:08x}", DTOR_BITMAP: bitmap_dtor}
    theirs = {**mine, INIT_MOON: f"core_moon.cpp_staticInit_FUN_{INIT_MOON:08x}"}
    annotations = install_programs(monkeypatch, tmp_path, {
        "game.exe": (pe(), functions(mine)), "sib.exe": (pe(), functions(theirs))})
    labels = {PTR_GAME: "g_CGamePtr", OBJ["game"]: "g_CGameInstance", NODE["game"]: "g_CGameDestructorNode",
              CALL["game"]: f"WatcomDestructorCall_{CALL['game']:08x}", OBJ["pool"]: "g_StakePool",
              PTR_POOL_A: "g_StakesA", PTR_POOL_B: "g_StakesB", OBJ["bitmap1"]: "g_BitmapOne",
              OBJ["bitmap2"]: f"DAT_{OBJ['bitmap2']:08x}"}
    write_bucket(annotations, "sib.exe", "symbols_label",
                 [{"addr": hexed(a), "name": n} for a, n in labels.items()] + [{"name": "no address"}])
    return annotations


def test_each_registered_object_has_its_class_unit_and_pointers(programs):
    image = sibling_match.Image("game.exe")
    rows = {r["addr"]: r for r in wso.static_objects(image, wti.scan_type_info(image))}
    assert hexed(OBJ["orphan"]) not in rows and len(rows) == 7
    game = rows[hexed(OBJ["game"])]
    assert (game["class"], game["extent"], game["unit"], game["ptrs"]) == (
        "CGame", None, "core_game.cpp", [hexed(PTR_GAME)])
    assert (game["node"], game["call"], game["dtor"]) == (hexed(NODE["game"]), hexed(CALL["game"]), hexed(DTOR_GAME))
    pool = rows[hexed(OBJ["pool"])]
    assert (pool["class"], pool["extent"], pool["unit"], pool["ptrs"]) == (
        "CStake", 256, "core_msnedit.cpp", [hexed(PTR_POOL_A), hexed(PTR_POOL_B)])
    assert rows[hexed(OBJ["bitmap1"])]["class"] == "CAlphaBitmap"
    for unclassed in ("bad", "unknown", "nobytes"):
        assert rows[hexed(OBJ[unclassed])]["class"] is None
    assert rows[hexed(OBJ["unknown"])]["unit"] is None


def test_an_offset_outside_every_section_has_no_address(programs):
    image = sibling_match.Image("game.exe")
    assert wso.offset_va(image, 0) is None
    assert wso.offset_va(image, image.sections[1].raw_off) == DATA


def test_an_array_destructor_is_read_from_its_pushes(programs):
    image = sibling_match.Image("game.exe")
    assert wso.array_extent(image, hexed(DTOR_POOL)) == (hexed(RECORD_STAKE), 256)
    assert wso.array_extent(image, hexed(DTOR_GAME)) is None
    assert wso.array_extent(image, hexed(NO_BYTES)) is None


def obj(addr, cls, unit = "core_a.cpp", extent = None, ptrs = ()):
    return {"addr": addr, "class": cls, "unit": unit, "extent": extent, "ptrs": list(ptrs),
            "node": addr + "n", "call": addr + "c", "dtor": "d" + addr}


def test_objects_pair_by_unit_then_by_program_where_the_counts_agree():
    mine = [obj("1", "CA"), obj("2", "CB", unit = "core_x.cpp"), obj("3", "CC"), obj("4", "CC"), obj("5", None)]
    theirs = [obj("a", "CA"), obj("b", "CB", unit = "core_y.cpp"), obj("c", "CC")]
    paired = wso.pair_objects(mine, theirs)
    assert {k: v["addr"] for k, v in paired.items()} == {"1": "a", "2": "b"}


def test_a_unit_holding_another_units_only_arrays_is_misnamed():
    mine = [obj("1", "CS", unit = "core_msnedit.cpp", extent = 256), obj("2", "CT", unit = "core_ok.cpp", extent = 4),
            obj("3", "CU", unit = "unkaddr_1.cpp", extent = 2), obj("4", "CV", unit = "core_two.cpp", extent = 3),
            obj("5", "CW", unit = "core_two.cpp", extent = 5), obj("6", "CX", unit = "core_new.cpp", extent = 9),
            obj("7", "CY", unit = "core_dup.cpp", extent = 8), obj("8", "CY", unit = "core_dup2.cpp", extent = 8),
            obj("9", "CZ")]
    theirs = [obj("a", "CS", unit = "core_moon.cpp", extent = 256), obj("b", "CT", unit = "core_ok.cpp", extent = 4),
              obj("c", "CU", unit = "core_u.cpp", extent = 2), obj("d", "CV", unit = "core_p.cpp", extent = 3),
              obj("e", "CW", unit = "core_q.cpp", extent = 5), obj("f", "CY", unit = "core_moon.cpp", extent = 8)]
    assert wso.unit_conflicts(mine, theirs) == {"core_msnedit.cpp": "core_moon.cpp"}


def test_names_are_borrowed_or_given_by_the_singleton_rule():
    mine = [obj("1", "CGame", ptrs = ["p1"]), obj("2", "CPool", extent = 8, ptrs = ["p2"]),
            obj("3", "CBmp", ptrs = ["p3", "p4"]), obj("4", "CBmp"), obj("5", "COne", ptrs = ["p5", "p6"])]
    paired = {"2": obj("s2", "CPool", extent = 8, ptrs = ["q2"]), "3": obj("s3", "CBmp", ptrs = ["q3"])}
    labels = {"s2": "g_Pool", "q2": "g_PoolPtr", "s2n": "g_PoolNode", "s2c": "WatcomDestructorCall_00401000",
              "s3": "DAT_00800000"}
    rows = {r["addr"]: r for r in wso.plan_data(mine, paired, labels)}
    assert (rows["1"]["name"], rows["p1"]["name"], rows["p1"]["pointer"]) == ("g_CGameInstance", "g_CGamePtr", True)
    assert (rows["2"]["name"], rows["p2"]["name"], rows["2n"]["name"], rows["2c"]["name"]) == (
        "g_Pool", "g_PoolPtr", "g_PoolNode", None)
    assert (rows["2"]["extent"], rows["2n"]["type"], rows["2c"]["type"]) == (8, wso.NODE_TYPE, wso.CALL_TYPE)
    assert [rows[a]["name"] for a in ("3", "p3", "p4", "4")] == [None, None, None, None]
    assert (rows["5"]["name"], rows["p5"]["name"]) == ("g_COneInstance", None)


def test_an_array_destructor_is_named_in_its_registering_unit_unless_that_conflicts():
    image = SimpleNamespace(by_addr={"d1": {"name": "FUN_00401000"}, "d2": {"name": "unkafter_m.cpp_FUN_00401010"},
                                     "d3": {"name": "core_a.cpp_CQ_arrdtor4_FUN_00401020"}, "d4": {"name": "x"}})
    objs = [dict(obj("1", "CP", extent = 4), dtor = "d1"), dict(obj("2", "CS", unit = "core_bad.cpp", extent = 2),
                                                                 dtor = "d2"),
            dict(obj("3", "CQ", extent = 4), dtor = "d3"), dict(obj("4", "CQ", extent = 4), dtor = "d3"),
            dict(obj("5", "CR"), dtor = "d4"), dict(obj("6", None, extent = 3), dtor = "d4")]
    plans = wso.plan_functions(image, objs, {"core_bad.cpp": "core_moon.cpp"})
    assert [(p["addr"], p["want"]) for p in plans] == [
        ("d1", "core_a.cpp_CP_arrdtor4_FUN_d1"), ("d2", "unkafter_m.cpp_CS_arrdtor2_FUN_d2"), ("d3", None)]


@pytest.fixture(name = "report")
def fixture_report(programs):
    return wso.analyse("game.exe", "sib.exe")


def test_analysis_pairs_with_the_sibling_and_flags_the_misnamed_unit(report):
    names = {r["addr"]: r["name"] for r in report["data"]}
    assert names[hexed(OBJ["game"])] == "g_CGameInstance" and names[hexed(NODE["game"])] == "g_CGameDestructorNode"
    assert names[hexed(CALL["game"])] is None
    assert (names[hexed(OBJ["pool"])], names[hexed(PTR_POOL_B)]) == ("g_StakePool", "g_StakesB")
    assert (names[hexed(OBJ["bitmap1"])], names[hexed(OBJ["bitmap2"])]) == ("g_BitmapOne", None)
    assert report["conflicts"] == {"core_msnedit.cpp": "core_moon.cpp"}
    assert report["functions"] == [{"addr": hexed(DTOR_POOL), "class": "CStake",
                                    "want": f"unkafter_moon.cpp_CStake_arrdtor256_FUN_{DTOR_POOL:08x}"}]
    assert report["paired"] == 4


def test_without_a_sibling_singletons_take_the_default_names(programs):
    report = wso.analyse("game.exe", "")
    names = {r["addr"]: r["name"] for r in report["data"]}
    assert (names[hexed(OBJ["game"])], names[hexed(PTR_GAME)]) == ("g_CGameInstance", "g_CGamePtr")
    assert (report["paired"], report["conflicts"]) == (0, {})
    assert report["functions"][0]["want"] == f"core_msnedit.cpp_CStake_arrdtor256_FUN_{DTOR_POOL:08x}"


def test_the_report_lists_names_unclassed_objects_and_conflicts(report, capsys):
    wso.print_report(report, 50)
    out = capsys.readouterr().out
    assert "game.exe: 7 static objects, 4 classed, 4 paired with sib.exe, 3 pointer globals" in out
    assert f"{OBJ['pool']:08x}  g_StakePool" in out and "CStake[256]" in out and "CGame*" in out
    assert f"unclassed {OBJ['bad']:08x}  dtor {DTOR_BAD:08x}" in out
    assert "unit core_msnedit.cpp registers the objects sib.exe has in core_moon.cpp" in out
    wso.print_report(dict(report, sibling = ""), 0)
    assert "with no sibling" in capsys.readouterr().out


def program_for(report):
    program = Program()
    program.getDataTypeManager().add(
        StructureDataType("CGame", length = 8), StructureDataType("CStake", length = 4),
        StructureDataType(wso.CALL_TYPE, length = 12), StructureDataType(wso.NODE_TYPE, length = 16),
        BuiltInDataType("uint", 4))
    program.getMemory().add_block("DGROUP", DATA, bytes(0x500))
    program.getMemory().add_block("RUNTIME_HEAP", 0x800000, bytes(0x100))
    fm = program.getFunctionManager()
    fm.add(f"unkafter_moon.cpp_FUN_{DTOR_POOL:08x}", DTOR_POOL)
    fm.add(f"FUN_{DTOR_BITMAP:08x}", DTOR_BITMAP)
    symbols = program.getSymbolTable()
    symbols.createLabel(Address(PTR_GAME), "g_MyGamePtr", SourceType.USER_DEFINED)
    symbols.createLabel(Address(OBJ["game"]), "DAT_00800000", SourceType.ANALYSIS)
    report["functions"] += [{"addr": hexed(DTOR_BITMAP), "class": "CMissing", "want": "x_CMissing_arrdtor2_FUN_1"},
                            {"addr": hexed(DTOR_BITMAP), "class": "CGame", "want": None},
                            {"addr": hexed(CODE + 0x3f0), "class": "CGame", "want": "y"}]
    return program


def test_applying_names_types_and_keeps_hand_labels(report):
    program = program_for(report)
    done = wso.apply_to_program(program, report)
    fm = program.getFunctionManager()
    assert fm.getFunctionAt(Address(DTOR_POOL)).getName() == f"unkafter_moon.cpp_CStake_arrdtor256_FUN_{DTOR_POOL:08x}"
    assert fm.getFunctionAt(Address(DTOR_BITMAP)).getName() == f"FUN_{DTOR_BITMAP:08x}"
    listing, symbols = program.getListing(), program.getSymbolTable()
    assert listing.getDefinedDataAt(Address(OBJ["game"])).getDataType().getName() == "CGame"
    assert listing.getDefinedDataAt(Address(PTR_POOL_A)).getDataType().getName() == "CStake *"
    assert listing.getDefinedDataAt(Address(NODE["game"])).getDataType().getName() == wso.NODE_TYPE
    assert symbols.getPrimarySymbol(Address(PTR_GAME)).getName() == "g_MyGamePtr"
    assert symbols.getPrimarySymbol(Address(OBJ["game"])).getName() == "g_CGameInstance"
    assert (done["array destructors named"], done["outside memory"], done["thunks"]) == (1, 1, 0)
    # The three unclassed objects and the two bitmaps, whose class the program lacks
    assert done["untyped"] == 5
    assert program.transactions == [["Watcom static objects", True]]


def test_a_failed_apply_rolls_back(report):
    program = program_for(report)
    report["data"] = [{"addr": "not an address", "name": None, "type": None, "extent": None, "pointer": False}]
    with pytest.raises(ValueError):
        wso.apply_to_program(program, report)
    assert program.transactions == [["Watcom static objects", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["watcom_static_objects.py", *argv])
    wso.main()


def test_main_applies_to_a_project(monkeypatch, report, tmp_path, capsys):
    module = FakePyghidra(program_for(report))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--apply", "--project", str(tmp_path), "P")
    assert module.opened == [(str(tmp_path), "P"), "/game.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    assert "labelled=" in capsys.readouterr().out


def test_apply_needs_a_project(monkeypatch, programs):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, programs, capsys):
    monkeypatch.setattr(sys, "argv", ["watcom_static_objects.py", "game.exe", "--sibling", "sib.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "watcom_static_objects.py"), run_name = "__main__")
    assert "game.exe: 7 static objects" in capsys.readouterr().out
