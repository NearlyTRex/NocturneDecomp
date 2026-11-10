# Imports
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, BuiltInDataType, FunctionDefinitionDataType, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from pe_helpers import call_rel32 as call, push_imm32 as push
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket
import actor_classes as ac
import sibling_match

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
NO_BYTES = CODE + 0xf00          # mapped code the file holds no bytes for
REGISTRAR = CODE + 0x200
OTHER = CODE + 0x210
STUB = CODE + 0x700
ROOT = DATA + 0x300
INFO = {"CAmmo": DATA + 0x320, "CBat": DATA + 0x340, "CAmmo_Mana": DATA + 0x2000}
VERSION = {"CAmmo": DATA + 0x310, "CBat": DATA + 0x314, "CAmmo_Mana": DATA + 0x318}
FACTORY = {"CAmmo": CODE + 0x500, "CBat": CODE + 0x510, "CAmmo_Mana": CODE + 0x520}
PARENT = {"CAmmo": ROOT, "CBat": INFO["CAmmo"], "CAmmo_Mana": ROOT}
STRINGS = {"CAmmo": DATA + 0x100, "CBat": DATA + 0x110, "CAmmo_Mana": DATA + 0x120, "CHag": DATA + 0x130}
VT_DEMON, VT_AMMO, VT_FAR = DATA + 0x500, DATA + 0x508, DATA + 0x3000
ENTRIES = [CODE + 0x10 * i for i in range(9)]


def registration(at, cls, name_ptr = None):
    body = (push(PARENT[cls]) + push(1) + push(VERSION[cls]) + push(FACTORY[cls])
            + push(name_ptr if name_ptr is not None else STRINGS[cls]) + push(INFO[cls]))
    return body + call(at + len(body), REGISTRAR) + b"\xc3"


def code_bytes():
    code = bytearray(b"\xcc" * 0xe00)

    def put(at, body):
        code[at - CODE:at - CODE + len(body)] = body
    put(ENTRIES[0], registration(ENTRIES[0], "CAmmo"))
    put(CODE + 0x100, registration(CODE + 0x100, "CBat"))
    put(CODE + 0x140, registration(CODE + 0x140, "CAmmo_Mana"))
    hag = push(FACTORY["CAmmo"]) + push(STRINGS["CHag"])
    put(CODE + 0x180, hag + call(CODE + 0x180 + len(hag), REGISTRAR) + b"\xc3")
    put(CODE + 0x1a0, push(1) + call(CODE + 0x1a5, OTHER) + b"\xc3")
    put(CODE + 0x1c0, registration(CODE + 0x1c0, "CBat", name_ptr = 0x10))
    for at in (REGISTRAR, OTHER, STUB, CODE + 0x800, CODE + 0x808, CODE + 0x830):
        put(at, b"\xc3")
    # CAmmo's constructor stores its base's vtable, then its own
    put(CODE + 0x600, b"\xc7\x00" + struct.pack("<I", VT_DEMON) + b"\xc7\x00" + struct.pack("<I", VT_AMMO) + b"\xc3")
    put(CODE + 0x620, b"\xc7\x00" + struct.pack("<I", 0x12345678) + b"\xc3")
    put(CODE + 0x900, b"\xb8" + struct.pack("<I", INFO["CAmmo"]) + b"\xc3")
    put(CODE + 0x910, b"\xb8" + struct.pack("<I", 1) + b"\xc3")
    put(CODE + 0x920, b"\x90\xc3")
    return bytes(code)


def record(ctor, copy, dtor, name_at):
    return struct.pack("<6I", 0x20100, ctor, copy, dtor, 8, name_at)


def data_bytes():
    data = bytearray(0x600)
    entries = b"".join(struct.pack("<BBI", 0, 64, f) for f in
                       [ENTRIES[0], CODE + 0x100, CODE + 0x140, CODE + 0x180, CODE + 0x1a0, CODE + 0x1c0]
                       + ENTRIES[6:9]) + struct.pack("<BBI", 0, 0, 0)
    data[3:3 + len(entries)] = entries
    for text, at in STRINGS.items():
        data[at - DATA:at - DATA + len(text) + 1] = text.encode() + b"\0"
    names = {"CAmmo": DATA + 0x5a0, "CBat": DATA + 0x5b0, "CAmmo_Mana": DATA + 0x5c0, "CX1": DATA + 0x5d0,
             "CX2": DATA + 0x5d8, "CX3": DATA + 0x5e0}
    for cls, at in names.items():
        mangled = f"${cls}$$".encode() + b"\0"
        data[at - DATA:at - DATA + len(mangled)] = mangled
    records = (record(CODE + 0x600, STUB, CODE + 0x610, names["CAmmo"])
               + record(CODE + 0x620, STUB, CODE + 0x630, names["CBat"])
               + record(NO_BYTES, CODE + 0x650, CODE + 0x660, names["CAmmo_Mana"])
               + b"".join(record(0, STUB, 0, names[c]) for c in ("CX1", "CX2", "CX3")))
    data[0x400:0x400 + len(records)] = records
    vtables = struct.pack("<4I", CODE + 0x800, CODE + 0x810, CODE + 0x830, DATA)
    data[VT_DEMON - DATA:VT_DEMON - DATA + len(vtables)] = vtables
    return bytes(data)


def pe():
    return build_sectioned_pe([(".text", code_bytes(), SECTION_EXECUTE, 0x1000), ("DGROUP", data_bytes(), 0)], BASE)


def functions(names):
    addrs = {a: 0x10 for a in ENTRIES + [CODE + 0x100, CODE + 0x140, CODE + 0x180, CODE + 0x1a0, CODE + 0x1c0]}
    addrs.update({REGISTRAR: 1, OTHER: 1, STUB: 1, CODE + 0x600: 0x10, CODE + 0x610: 1, CODE + 0x620: 0x10,
                  CODE + 0x650: 1, CODE + 0x660: 1, CODE + 0x800: 1, CODE + 0x808: 0x20, CODE + 0x900: 6,
                  CODE + 0x910: 6, CODE + 0x920: 2, NO_BYTES: 1, NO_BYTES + 0x10: 1})
    return [function(a, names.get(a, f"FUN_{a:08x}"), size = s) for a, s in addrs.items()]


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    mine = {CODE + 0x610: f"core_ammo.cpp_CAmmo_dtor_FUN_{CODE + 0x610:08x}",
            CODE + 0x660: f"unkaddr_{CODE + 0x660:08x}.cpp_FUN_{CODE + 0x660:08x}"}
    theirs = {REGISTRAR: f"core_actor.cpp_registerActorClass_FUN_{REGISTRAR:08x}",
              STUB: f"crt_cpp.c_pureVirtualStub_FUN_{STUB:08x}"}
    annotations = install_programs(monkeypatch, tmp_path, {
        "act.exe": (pe(), functions(mine)), "actsib.exe": (pe(), functions(theirs))})
    vtables = [{"addr": f"{VT_DEMON:08x}", "count": 1}, {"addr": f"{VT_AMMO:08x}", "count": 1},
               {"addr": f"{VT_FAR:08x}", "count": 1}]
    write_bucket(annotations, "act.exe", "vtables", vtables)
    write_bucket(annotations, "actsib.exe", "symbols_label", [{"addr": f"{ROOT:08x}", "name": "g_CDemonActorClassInfo"},
                                                              {"name": "no address"}])
    return annotations


def test_a_registration_gives_the_classes_globals_and_parent(programs):
    image = sibling_match.Image("act.exe")
    reg = f"{REGISTRAR:08x}"
    args = ac.registration_args(image, f"{ENTRIES[0]:08x}", reg)
    assert args == {"this": f"{INFO['CAmmo']:08x}", "class": "CAmmo", "factory": f"{FACTORY['CAmmo']:08x}",
                    "version_ptr": f"{VERSION['CAmmo']:08x}", "parent": f"{ROOT:08x}"}
    assert ac.registration_args(image, f"{CODE + 0x140:08x}", reg)["class"] == "CAmmoMana"
    for not_one in (CODE + 0x180, CODE + 0x1a0, CODE + 0x1c0):
        assert ac.registration_args(image, f"{not_one:08x}", reg) is None


def test_the_root_is_the_parent_most_classes_name_that_registers_nothing(programs):
    image = sibling_match.Image("act.exe")
    funcs = [f"{a:08x}" for a in (ENTRIES[0], CODE + 0x100, CODE + 0x140)]
    infos, root = ac.class_infos(image, funcs, f"{REGISTRAR:08x}")
    assert sorted(infos) == ["CAmmo", "CAmmoMana", "CBat"] and root == f"{ROOT:08x}"
    assert ac.class_infos(image, [], f"{REGISTRAR:08x}") == ({}, None)


def test_only_a_load_of_a_class_info_then_ret_is_a_getter(programs):
    image = sibling_match.Image("act.exe")
    infos = {"CAmmo": {"this": f"{INFO['CAmmo']:08x}"}}
    assert ac.actor_type_getters(image, infos) == {f"{CODE + 0x900:08x}": "CAmmo"}


def test_a_constructor_names_the_last_vtable_it_stores(programs):
    image = sibling_match.Image("act.exe")
    records = [{"class": "CAmmo", "ctor": f"{CODE + 0x600:08x}"}, {"class": "CBat", "ctor": f"{CODE + 0x620:08x}"},
               {"class": "CNone", "ctor": "00000000"}, {"class": "CFar", "ctor": f"{NO_BYTES:08x}"}]
    assert ac.ctor_vtables(image, records, {f"{VT_DEMON:08x}", f"{VT_AMMO:08x}"}) == {"CAmmo": f"{VT_AMMO:08x}"}


def test_slots_used_once_are_methods_and_the_much_shared_one_is_the_stub():
    records = [{"type": c, "ctor": f"0000000{i}", "copy": "000000ff", "dtor": "00000000"}
               for i, c in enumerate(("CA", "CB", "CC", "CD", "CE"), 1)]
    methods, shared = ac.slot_functions(records)
    assert shared == "000000ff" and methods["00000001"] == ("CA", "ctor") and len(methods) == 5
    assert ac.slot_functions(records[:2])[1] is None


def test_vtable_slots_are_read_past_the_exported_end(programs):
    image = sibling_match.Image("act.exe")
    assert ac.vtable_gaps(image, image.vtables) == [(f"{CODE + 0x810:08x}", f"{CODE + 0x808:08x}"),
                                                    (f"{CODE + 0x830:08x}", None)]


@pytest.mark.parametrize("current, unit, want", [
    ("FUN_00401600", "core_ammo.cpp", "core_ammo.cpp_CAmmo_ctor_FUN_00401600"),
    ("core_x.cpp_FUN_00401600", "core_ammo.cpp", "core_x.cpp_CAmmo_ctor_FUN_00401600"),
    ("unkaddr_1.cpp_FUN_00401600", "core_ammo.cpp", "core_ammo.cpp_CAmmo_ctor_FUN_00401600"),
    ("unkaddr_1.cpp_FUN_00401600", None, "unkaddr_1.cpp_CAmmo_ctor_FUN_00401600"),
    (None, None, "CAmmo_ctor_FUN_00401600"),
    ("core_ammo.cpp_CAmmo_ctor_FUN_00401600", None, None),
])
def test_a_method_is_named_only_where_it_has_no_name(current, unit, want):
    assert ac.method_name(current, unit, "CAmmo", "ctor", "00401600") == want


@pytest.fixture(name = "report")
def fixture_report(programs):
    return ac.analyse("act.exe", "actsib.exe")


def test_analysis_plans_methods_globals_and_gaps(report):
    wants = {int(m["addr"], 16) - CODE: (m["kind"], m["want"], m["exists"]) for m in report["methods"]}
    assert wants[0x600] == ("ctor", "core_ammo.cpp_CAmmo_ctor_FUN_00401600", True)
    assert wants[0x610] == ("dtor", None, True)
    assert wants[0x630] == ("dtor", "CBat_dtor_FUN_00401630", False)
    assert wants[0x660] == ("dtor", "unkaddr_00401660.cpp_CAmmoMana_dtor_FUN_00401660", True)
    assert wants[0x900] == ("getActorType", "core_ammo.cpp_CAmmo_getActorType_FUN_00401900", True)
    assert report["parents"] == {"CAmmo": None, "CBat": "CAmmo", "CAmmoMana": None}
    assert report["shared"] == {"addr": f"{STUB:08x}", "name": f"crt_cpp.c_pureVirtualStub_FUN_{STUB:08x}"}
    names = {g["name"]: g["addr"] for g in report["globals"]}
    assert names["g_CDemonActorClassInfo"] == f"{ROOT:08x}" and names["g_CAmmoVTable"] == f"{VT_AMMO:08x}"
    assert names["g_CAmmoManaClassInfo"] == f"{INFO['CAmmo_Mana']:08x}"
    assert len(report["gaps"]) == 2


def test_a_vtable_label_is_spelled_as_its_type(programs, monkeypatch):
    # ctor_vtables keys by the RTTI class, which bw3 underscores.
    monkeypatch.setattr(ac, "ctor_vtables", lambda *_args, **_kwargs: {"CAmmo_Mana": f"{VT_FAR:08x}"})
    names = {g["name"]: g["addr"] for g in ac.analyse("act.exe", "actsib.exe")["globals"]}
    assert names["g_CAmmoManaVTable"] == f"{VT_FAR:08x}"
    assert not any("_Mana" in name for name in names)


def test_without_a_sibling_nothing_is_borrowed(programs):
    report = ac.analyse("act.exe", "")
    assert report["shared"] is None
    assert "g_CDemonActorClassInfo" not in {g["name"] for g in report["globals"]}


def test_the_report_counts_what_is_planned(report, capsys):
    ac.print_report(report, 2)
    out = capsys.readouterr().out
    assert f"act.exe: 3 registered classes, registrar {REGISTRAR:08x}" in out
    assert "missing functions: 1" in out
    assert "vtable gaps: 2 (1 inside another function)" in out
    assert f"shared slot {STUB:08x} -> crt_cpp.c_pureVirtualStub_FUN_{STUB:08x}" in out
    report["shared"] = None
    ac.print_report(report, 0)
    assert "shared slot" not in capsys.readouterr().out


def builtin(name, length):
    return BuiltInDataType(name, length)


def program_for(report, with_bat = False):
    program = Program()
    types = [StructureDataType("CDemonActorType", length = 60), StructureDataType("CAmmo", length = 8),
             StructureDataType("CAmmoMana", length = 8), FunctionDefinitionDataType("CDemonActor_FactoryFunc"),
             builtin("char", 1), builtin("int", 4), builtin("uint", 4)]
    if with_bat:
        types.append(StructureDataType("CBat", length = 8))
    program.getDataTypeManager().add(*types)
    program.getMemory().add_block("DGROUP", DATA, bytes(0x600))
    fm = program.getFunctionManager()
    sizes = {0x808: 0x20}
    for m in report["methods"]:
        if m["exists"]:
            fm.add(sibling_match.Image("act.exe").by_addr[m["addr"]]["name"], int(m["addr"], 16))
    for at in (REGISTRAR, STUB, CODE + 0x800, CODE + 0x808):
        fm.add(f"FUN_{at:08x}", at, sizes.get(at - CODE, 1))
    return program


def test_applying_splits_creates_names_and_types(report):
    program = program_for(report)
    done = ac.apply_to_program(program, report)
    fm = program.getFunctionManager()
    split = fm.getFunctionAt(Address(CODE + 0x810))
    owner = fm.getFunctionAt(Address(CODE + 0x808))
    assert split is not None and not owner.getBody().contains(Address(CODE + 0x810))
    assert fm.getFunctionAt(Address(CODE + 0x600)).getName() == "core_ammo.cpp_CAmmo_ctor_FUN_00401600"
    ret, params = fm.getFunctionAt(Address(CODE + 0x600)).prototype[1:]
    assert (ret.args[0].getName(), [p.args[0] for p in params]) == ("CAmmo *", ["this_ptr"])
    assert fm.getFunctionAt(Address(CODE + 0x620)).getName() == "FUN_00401620"
    assert fm.getFunctionAt(Address(STUB)).getName() == f"crt_cpp.c_pureVirtualStub_FUN_{STUB:08x}"
    assert fm.getFunctionAt(Address(REGISTRAR)).prototype is not None
    labels = {s.getName() for s in program.getSymbolTable().symbols}
    assert {"g_CAmmoClassInfo", "g_CAmmoClassVersion", "g_CAmmoVTable", "g_CDemonActorClassInfo"} <= labels
    assert done["globals outside memory"] == 1 and done["gap functions"] == 2
    assert program.transactions == [["Actor classes", True]]


def test_a_named_shared_slot_and_a_missing_registrar_are_left_alone(report):
    program = program_for(report, with_bat = True)
    program.getFunctionManager().getFunctionAt(Address(STUB)).setName("crt_cpp.c_myStub_FUN_00401700", None)
    report["registrar"] = None
    done = ac.apply_to_program(program, report)
    assert program.getFunctionManager().getFunctionAt(Address(STUB)).getName() == "crt_cpp.c_myStub_FUN_00401700"
    assert "registrar prototype" not in done and done["methods named"] > 0
    report["shared"] = None
    report["methods"] = []
    report["registrar"] = f"{CODE + 0x123:08x}"
    assert "registrar prototype" not in ac.apply_to_program(Program(), dict(report, globals = [], gaps = []))


def test_a_type_resolves_by_name_with_its_pointer_stars(report):
    program = program_for(report)
    dtm = program.getDataTypeManager()
    assert ac.resolve(dtm, "CAmmo**").getDataType().getDataType().getName() == "CAmmo"
    assert ac.resolve(dtm, "nothing") is None


# Ghidra finds builtins by path even where a name search of the program misses them
class BuiltinsOnly:
    def __init__(self, data_type):
        self.data_type = data_type

    def findDataTypes(self, _name, _found):
        pass

    def getDataType(self, path):
        return self.data_type if path == "/" + self.data_type.getName() else None


def test_a_builtin_resolves_by_path():
    int_type = builtin("int", 4)
    assert ac.resolve(BuiltinsOnly(int_type), "int*").getDataType() is int_type


def test_a_prototype_with_a_missing_type_is_not_applied(report):
    program = program_for(report)
    func = program.getFunctionManager().getFunctionAt(Address(STUB))
    assert not ac.set_prototype(program, func, "CNothing*", [])
    assert not ac.set_prototype(program, func, "int", [("CNothing*", "this_ptr")])
    assert func.prototype is None


def test_an_existing_function_is_not_created_again(report):
    assert not ac.split_or_create(program_for(report), f"{STUB:08x}", None)


def test_a_constructor_past_the_byte_limit_still_counts_what_it_read(programs):
    image = sibling_match.Image("act.exe")
    records = [{"class": "CAmmo", "ctor": f"{CODE + 0x600:08x}"}]
    assert ac.ctor_vtables(image, records, {f"{VT_DEMON:08x}"}, limit = 6) == {"CAmmo": f"{VT_DEMON:08x}"}


def test_a_failed_apply_rolls_back(report):
    program = program_for(report)
    report["globals"] = [{"addr": "not an address", "name": "x", "type": None}]
    with pytest.raises(ValueError):
        ac.apply_to_program(program, report)
    assert program.transactions == [["Actor classes", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["actor_classes.py", *argv])
    ac.main()


def test_main_applies_to_a_project(monkeypatch, report, tmp_path, capsys):
    module = FakePyghidra(program_for(report))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, "act.exe", "--sibling", "actsib.exe", "--apply", "--project", str(tmp_path), "P")
    assert module.opened == [(str(tmp_path), "P"), "/act.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    assert "methods named=" in capsys.readouterr().out


def test_apply_needs_a_project(monkeypatch, programs):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, "act.exe", "--sibling", "actsib.exe", "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, programs, capsys):
    monkeypatch.setattr(sys, "argv", ["actor_classes.py", "act.exe", "--sibling", "actsib.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "actor_classes.py"), run_name = "__main__")
    assert "act.exe: 3 registered classes" in capsys.readouterr().out
