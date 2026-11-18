# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_bucket, write_json
import map_factory_pairs as mfp

BASE = 0x1000
TABLE = 0x1000                       # g_InitHandlers sits at the start of the image
NAMES = 0x1100                       # class-name strings
SIZE = 0x200
MAPPED_END = 0x8000                  # the functions live past the data, up to here


class Image:
    """SIZE bytes of data at BASE; the mapping runs on to MAPPED_END, as a .bss would."""

    def __init__(self, data):
        self.data = data

    def va2off(self, va):
        off = va - BASE
        return off if 0 <= off < len(self.data) else None

    def is_mapped_va(self, va):
        return BASE <= va < MAPPED_END


def image(handlers, names = ()):
    data = bytearray(SIZE)
    for i, fn in enumerate(handlers):
        struct.pack_into("<BBI", data, TABLE - BASE + i * mfp.ENTRY_SIZE, 0, 0, fn)
    for va, text in names:
        data[va - BASE:va - BASE + len(text)] = text
    return Image(bytes(data))


def write_asm(root, program, addr, lines):
    folder = root / "annotations" / program / "pseudocode" / "src" / "core" / "x.cpp"
    folder.mkdir(parents = True, exist_ok = True)
    (folder / f"staticInit_FUN_{addr}.asm").write_text("".join(f"{ln}\n" for ln in lines), encoding = "utf-8")


def register(cls_push, factory, call = "core_actor.cpp_registerActorClass_FUN_0000c2e0"):
    """A staticInit body: the pushes of a register call, newest argument last."""
    return ["section .text", "    PUSH 0x0                            ; 00002000",
            f"    PUSH {factory}                       ; 00002002", cls_push,
            "    PUSH 0x1180                         ; 00002008 | g_ClassInfo",
            f"    CALL {call} ; 0000200d"]


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    monkeypatch.setattr(mfp, "REPO", str(tmp_path))
    images = {}
    monkeypatch.setattr(mfp.sm, "Image", lambda program: images[program])

    def add(program, handlers, asm, names = (), functions = (), labels = None):
        images[program] = image(handlers, names)
        annotations = tmp_path / "annotations"
        write_bucket(annotations, program, "functions", [{"addr": f, "name": n} for f, n in functions])
        write_bucket(annotations, program, "symbols_label",
                      [{"name": "other"}, {"name": mfp.INIT_TABLE}, {"name": mfp.INIT_TABLE, "addr": "00001000"}]
                      if labels is None else labels)
        for addr, lines in asm.items():
            write_asm(tmp_path, program, addr, lines)
    return add


def test_function_addrs_are_lowercased_and_keep_unnamed_entries(world):
    world("a.exe", [], {}, functions = [("0000F000", "factoryFunc"), ("0000f100", None)])
    assert mfp.function_addrs("a.exe") == {"0000f000": "factoryFunc", "0000f100": None}


def test_the_init_table_is_read_until_a_null_or_unmapped_entry(world):
    world("a.exe", [0x2000, 0x2100, 0x9000], {})
    img = mfp.sm.Image("a.exe")
    assert mfp.init_handlers(img, "a.exe") == ["00002000", "00002100"]           # 0x9000 is unmapped
    assert mfp.init_handlers(img, "a.exe", limit = 1) == ["00002000"]
    world("b.exe", [0x2000, 0x2100], {})
    assert mfp.init_handlers(mfp.sm.Image("b.exe"), "b.exe") == ["00002000", "00002100"]   # ends at the null


def test_the_init_table_ends_at_the_end_of_the_image(world):
    world("a.exe", [0x2000] * (SIZE // mfp.ENTRY_SIZE), {})
    assert len(mfp.init_handlers(mfp.sm.Image("a.exe"), "a.exe")) == SIZE // mfp.ENTRY_SIZE


def test_no_table_or_a_table_without_bytes_has_no_handlers(world):
    world("a.exe", [0x2000], {}, labels = [])
    assert mfp.init_handlers(mfp.sm.Image("a.exe"), "a.exe") == []
    world("b.exe", [0x2000], {}, labels = [{"name": mfp.INIT_TABLE, "addr": "00001300"}])
    assert mfp.init_handlers(mfp.sm.Image("b.exe"), "b.exe") == []


def test_a_name_is_read_from_the_image_when_the_asm_has_none(world):
    world("a.exe", [], {}, names = [(NAMES, b"CAmmo\0"), (NAMES + 0x10, b"\x07\0\0\0")])
    img = mfp.sm.Image("a.exe")
    assert mfp.image_string(img, f"{NAMES:08x}") == "CAmmo"
    assert mfp.image_string(img, f"{NAMES + 0x10:08x}") is None                    # not an identifier
    assert mfp.image_string(img, "00009000") is None                               # no bytes there


def factory_world(world):
    """a.exe comments its class names; b.exe leaves them in the image. Each handler shows one case."""
    asm_a = {
        "00002000": register('    PUSH 0x1100                         ; 00002005 | = "CAmmo"', "0x3000"),
        "00002100": register('    PUSH 0x1110                         ; 00002105 | = "CBox"', "0x3100"),
        # two register calls in one TU: each is read, here naming one class twice
        "00002200": [*register('    PUSH 0x1120                         ; 00002205 | = "CLid"', "0x3200"),
                     *register('    PUSH 0x1120                         ; 00002215 | = "CLid"', "0x3300")[1:]],
        "00002300": ["    PUSH 0x3400                         ; 00002300",
                     "    CALL operator_new ; 00002305", "    RET"],                    # no register call
        "00002400": register("    PUSH 0x0                            ; 00002405", "0x3500"),   # no name
        "00002500": register('    PUSH 0x1130                         ; 00002505 | = "CNoFac"', "0x0"),
    }
    funcs = [("00003000", "factoryFunc"), ("00003100", None), ("00003200", "factoryFunc"),
             ("00003300", "factoryFunc"), ("00003500", "factoryFunc")]
    world("a.exe", [0x2000, 0x2100, 0x2200, 0x2300, 0x2400, 0x2500, 0x2600], asm_a, functions = funcs)
    asm_b = {
        "00002000": ["    PUSH 0x1               ; 00002000", "    CALL helper ; 00002002",   # its args are dropped
                     *register("    PUSH 0x1100                         ; 00002005", "0x4000")],
        "00002100": register("    PUSH 0x1110                         ; 00002105", "0x4100"),
        "00002200": register("    PUSH 0x1120                         ; 00002205", "0x4200"),
    }
    world("b.exe", [0x2000, 0x2100, 0x2200], asm_b,
          names = [(0x1100, b"CAmmo\0"), (0x1110, b"CBox\0"), (0x1120, b"CLid\0")],
          functions = [("00004000", "factoryFunc"), ("00004100", "factoryFunc"), ("00004200", "factoryFunc")])


def test_each_register_call_gives_its_class_and_factory(world, capsys):
    factory_world(world)
    # 2600 has no asm, 2300 never registers, 2400's class has no name and 2500's no factory
    assert mfp.class_to_factory("a.exe", verbose = True) == {
        "CAmmo": {"00003000"}, "CBox": {"00003100"}, "CLid": {"00003200", "00003300"}}
    assert capsys.readouterr().out == ("  a.exe: 6 init handler(s) read, 1 without a register call, "
                                       "3 class key(s)\n")
    assert mfp.class_to_factory("b.exe") == {"CAmmo": {"00004000"}, "CBox": {"00004100"}, "CLid": {"00004200"}}


def mapping(tmp_path, *pairs):
    """A mapping file pairing each (a, b)."""
    return write_json(tmp_path / "mapping.json", {"pairs": [{"a": a, "b": b} for a, b in pairs]})


def test_the_registry_agrees_conflicts_or_adds_to_a_mapping(world, tmp_path, capsys):
    factory_world(world)
    res = mfp.analyse("a.exe", "b.exe", mapping(tmp_path, ("00003000", "00004000")))
    assert res["agree"] == [("CAmmo", "00003000", "00004000")]
    assert res["new"] == [("CBox", "00003100", "00004100")]
    assert res["ambiguous"] == [("CLid", ["00003200", "00003300"], ["00004200"])]
    assert capsys.readouterr().out.startswith("Reading static-init registries...\n")
    res = mfp.analyse("a.exe", "b.exe", mapping(tmp_path, ("00003000", "000000ff"), ("000000ee", "00004100")),
                      verbose = False)
    assert res["conflicts"] == [("CAmmo", "00003000", "00004000", "mapping pairs 00003000 with 000000ff"),
                                ("CBox", "00003100", "00004100", "mapping pairs 00004100 with 000000ee")]


def test_the_report_lists_new_pairs_and_conflicts(capsys):
    res = {"agree": [], "new": [("CA", "a", "b"), ("CB", "c", "d")], "ambiguous": [], "a_keys": 2, "b_keys": 2,
           "conflicts": [("CC", "e", "f", "mapping pairs e with g")]}
    mfp.report(res, show = 1)
    out = capsys.readouterr().out
    assert f"    {'CA':26} a <-> b\n    ... and 1 more\n" in out
    assert f"    {'CC':26} factory e <-> f\n        mapping pairs e with g\n" in out
    mfp.report({**res, "new": [], "conflicts": []}, show = 1)
    out = capsys.readouterr().out
    assert "NEW pairs" not in out and "CONFLICTS" not in out


def test_main_writes_the_new_pairs_named_after_the_source(world, tmp_path, capsys):
    factory_world(world)
    out_pairs = tmp_path / "pairs.json"
    assert mfp.main(["--from-program", "a.exe", "--program", "b.exe", "-q", "--out-pairs", str(out_pairs)]) == 0
    written = json.loads(out_pairs.read_text(encoding = "utf-8"))
    assert [(p["a"], p["name"], p["evidence"]) for p in written["pairs"]] == [
        ("00003000", "factoryFunc", ["factory_registry:CAmmo"]),
        ("00003100", "FUN_00003100", ["factory_registry:CBox"])]
    assert f"wrote {out_pairs} (2 pairs)" in capsys.readouterr().out


def test_main_fails_on_a_conflict_only_when_asked(world, tmp_path, capsys):
    factory_world(world)
    args = ["--from-program", "a.exe", "--program", "b.exe", "-q",
            "--mapping", mapping(tmp_path, ("00003000", "000000ff"))]
    assert mfp.main(args) == 0
    assert mfp.main([*args, "--fail-on-conflict"]) == 2
    assert "FAILING: registry/mapping conflict" in capsys.readouterr().out


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["map_factory_pairs.py", "--help"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "map_factory_pairs.py"), run_name = "__main__")
    assert stop.value.code == 0
    assert "Pair actor factory functions across sibling builds" in capsys.readouterr().out
