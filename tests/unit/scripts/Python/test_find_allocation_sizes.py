# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs, write_json
import find_allocation_sizes as fas
import sibling_match

ALLOC, FOO_CTOR, BAR_CTOR, NOWHERE = 0x000, 0x010, 0x020, 0x1f0
VT_BAR, VT_BAZ, VT_QUX, SINGLE, OPAQUE = 0x450000, 0x450010, 0x450020, 0x460000, 0x460010


def call(at_offset, target):
    return b"\xe8" + struct.pack("<i", target - (at_offset + 5))


def push(value):
    return b"\x68" + struct.pack("<I", value)


def store_vtable(value):
    return b"\xc7\x40\x14" + struct.pack("<I", value)  # mov dword ptr [eax + 0x14], value


def code(offset, *parts):
    """The parts laid end to end from `offset`; a part that is a target offset becomes a call to it."""
    out = b""
    for part in parts:
        out += call(offset + len(out), part) if isinstance(part, int) else part
    return out


# Each factory, at its offset: what it allocates and how its result is used
FACTORIES = {
    0x040: ("core_a.cpp_factoryFoo", (push(0x34c), ALLOC, b"\x83\xc4\x04\x85\xc0\x75\x01\xc3\x50", FOO_CTOR, b"\xc3")),
    # Through a copy of eax, past a register that held it and was overwritten
    0x080: ("core_a.cpp_factoryBar", (push(0x10), ALLOC, b"\x89\xc1\xb9\x05\x00\x00\x00\x89\xc3\x53", BAR_CTOR, b"\xc3")),
    # CBaz has no constructor of its own: its base's, then its vtable
    0x0c0: ("core_a.cpp_factoryBaz", (push(0x20), ALLOC, b"\x50", FOO_CTOR, b"\x83\xc4\x04", store_vtable(VT_BAZ), b"\xc3")),
    0x100: ("core_a.cpp_makeSingle", (push(0x40), ALLOC, b"\xa3" + struct.pack("<I", SINGLE), b"\xc3")),
    0x120: ("core_a.cpp_makeOpaque", (push(0x44), ALLOC, b"\xa3" + struct.pack("<I", OPAQUE), b"\xc3")),
    # The size push a step before the call; an unrelated register set; eax pushed and popped
    0x200: ("core_a.cpp_makeQux", (push(0x30), b"\xb9\x01\x00\x00\x00", ALLOC, b"\xb9\x05\x00\x00\x00\x50\x58",
                                   store_vtable(0x123), store_vtable(VT_QUX), b"\xc3")),
    0x1c0: ("core_a.cpp_makeBare", (b"\x31\xc0", ALLOC, b"\xc3")),
    # A size from a register; and a call that takes the result nowhere known
    0x160: ("core_a.cpp_makeAny", (b"\x53", ALLOC, b"\x50", NOWHERE, b"\xc3")),
    0x180: ("core_a.cpp_makeLost", (push(0x18), ALLOC, FOO_CTOR, b"\xc3")),
}


def program():
    image = bytearray(b"\xcc" * 0x240)
    records = [function(at(ALLOC), f"crt_unknown.c_debugAllocTracked1_FUN_{at(ALLOC):08x}", size = 1),
               function(at(FOO_CTOR), f"core_a.cpp_CFoo_ctor_FUN_{at(FOO_CTOR):08x}", size = 1),
               function(at(BAR_CTOR), f"core_a.cpp_FUN_{at(BAR_CTOR):08x}", size = 8)]
    image[ALLOC] = image[FOO_CTOR] = 0xc3
    image[BAR_CTOR:BAR_CTOR + 8] = b"\x8b\x44\x24\x04" + b"\x90\x90\x90\xc3"
    image[BAR_CTOR + 4:BAR_CTOR + 11] = store_vtable(VT_BAR)
    image[BAR_CTOR + 11] = 0xc3
    records[2] = function(at(BAR_CTOR), f"core_a.cpp_FUN_{at(BAR_CTOR):08x}", size = 12)
    for offset, (name, parts) in FACTORIES.items():
        body = code(offset, *parts)
        image[offset:offset + len(body)] = body
        records.append(function(at(offset), f"{name}_FUN_{at(offset):08x}", size = len(body)))
    return build_sectioned_pe([(".text", bytes(image), SECTION_EXECUTE)]), records


@pytest.fixture(name = "build")
def fixture_build(monkeypatch, tmp_path):
    annotations = install_programs(monkeypatch, tmp_path, {"bw.exe": program()})
    for kind, rows in (("symbols_label", [{"addr": f"{VT_BAR:08x}", "name": "g_CBarVTable"},
                                          {"addr": f"{VT_BAZ:08x}", "name": "g_CBazVTable"},
                                          {"addr": f"{VT_QUX:08x}", "name": "g_CQuxVTable"},
                                          {"addr": f"{SINGLE:08x}", "name": "g_TheSingle"}, {"name": "x"}]),
                       ("applied_pointers", [{"addr": f"{SINGLE:08x}", "to": "SSingle"},
                                             {"addr": f"{OPAQUE:08x}", "to": "void"}, {"to": "y"}])):
        (annotations / "bw.exe" / kind).mkdir()
        write_json(annotations / "bw.exe" / kind / f"{kind}_bucket_00.json", rows)
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(annotations))
    return annotations


def by_function(rows):
    return {r["function"].split(".cpp_")[1].split("_FUN_")[0]: r for r in rows}


def test_each_allocation_is_sized_and_classed_by_its_use(build):
    img = sibling_match.Image("bw.exe")
    rows = by_function(fas.allocations(img, fas.labels("bw.exe"), fas.pointer_types("bw.exe")))
    assert (rows["factoryFoo"]["size"], rows["factoryFoo"]["class"]) == (0x34c, "CFoo")
    assert (rows["factoryBar"]["size"], rows["factoryBar"]["class"]) == (0x10, "CBar")
    assert (rows["factoryBaz"]["class"], rows["factoryBaz"]["via"]) == ("CBaz", f"ctor {at(FOO_CTOR):08x} + vtable")
    assert (rows["makeSingle"]["class"], rows["makeSingle"]["via"]) == ("SSingle", f"global {SINGLE:08x} g_TheSingle")
    assert (rows["makeOpaque"]["class"], rows["makeOpaque"]["via"]) == (None, f"global {OPAQUE:08x}")
    assert (rows["makeQux"]["class"], rows["makeQux"]["via"]) == ("CQux", "inline vtable")
    assert (rows["makeAny"]["size"], rows["makeAny"]["class"]) == (None, None)
    assert (rows["makeLost"]["class"], rows["makeLost"]["via"]) == (None, None)
    assert rows["makeBare"]["size"] is None
    assert fas.sizes(rows.values()) == {"CFoo": {0x34c: 1}, "CBar": {0x10: 1}, "CBaz": {0x20: 1},
                                        "SSingle": {0x40: 1}, "CQux": {0x30: 1}}


def test_an_unclassed_allocation_takes_its_matched_functions_class():
    rows = [{"site": "1", "function": "f_FUN_00000010", "class": None, "via": "global 1"},
            {"site": "2", "function": "f_FUN_00000010", "class": "CKept", "via": "ctor"},
            {"site": "3", "function": "g_FUN_00000020", "class": None, "via": None},
            {"site": "4", "function": "h_FUN_00000030", "class": None, "via": None}]
    reference = [{"site": "a", "function": "f_FUN_000000aa", "class": "CTexture"},
                 {"site": "b", "function": "f_FUN_000000aa", "class": "COther"},
                 {"site": "c", "function": "g_FUN_000000bb", "class": "CTwo"},
                 {"site": "d", "function": "g_FUN_000000bb", "class": "CTwo"}]
    pairs = [{"a": "000000aa", "b": "00000010"}, {"a": "000000bb", "b": "00000020"}]
    out = fas.paired(rows, reference, pairs)
    assert out[0]["class"] == "CTexture" and out[0]["via"] == "global 1; as nocedit a"
    assert out[1]["class"] == "CKept"
    assert out[2]["class"] is None and out[3]["class"] is None  # counts differ; no match


def test_main_reports_and_writes(build, tmp_path, capsys):
    out = tmp_path / "sizes.json"
    reference = write_json(tmp_path / "ref.json", {"allocations": []})
    mapping = write_json(tmp_path / "mapping.json", {"pairs": []})
    assert fas.main(["--program", "bw.exe", "--out", str(out), "--reference", reference,
                     "--mapping", mapping, "--unresolved", "1"]) == 0
    printed = capsys.readouterr().out
    assert "bw.exe: 9 allocations; 5 classes sized; 4 with no class; 2 with no constant size" in printed
    assert "  CFoo                             {844: 1}" in printed
    assert printed.count("  ? ") == 1
    doc = json.loads(out.read_text())
    assert doc["sizes"]["CBar"] == {"16": 1} and len(doc["allocations"]) == 9
    assert fas.main(["--program", "bw.exe"]) == 0


def test_two_sizes_for_one_class_are_flagged(build, capsys, monkeypatch):
    monkeypatch.setattr(fas, "sizes", lambda rows: {"CFoo": {844: 1, 848: 1}})
    fas.main(["--program", "bw.exe", "--unresolved", "0"])
    assert "<-- sizes disagree" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["find_allocation_sizes.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_allocation_sizes.py"), run_name = "__main__")
    assert exit_info.value.code == 0
