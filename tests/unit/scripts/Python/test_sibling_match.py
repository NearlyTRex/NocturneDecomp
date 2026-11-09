# Imports
import builtins
import hashlib
import importlib
import json

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from sibling_images import function, install_programs, write_bucket
import sibling_match as sm

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)

# mov eax, <address in the image>; ret  /  mov eax, 0x50; ret  /  mov eax, ebx; ret
LOADS_ADDRESS = b"\xb8" + DATA.to_bytes(4, "little") + b"\xc3"
LOADS_OTHER_ADDRESS = b"\xb8" + (DATA + 8).to_bytes(4, "little") + b"\xc3"
LOADS_FIVE = b"\xb8\x50\x00\x00\x00\xc3"
MOVES_REGISTER = b"\x89\xd8\xc3"


# DGROUP maps 0x80 bytes, of which the file holds the first 0x40
def code_pe(code = b"", data = b"\0" * 0x40):
    return build_sectioned_pe([(".text", code.ljust(0x100, b"\xcc"), SECTION_EXECUTE),
                               ("DGROUP", data, 0, 0x80), (".bss", b"", 0)], BASE)


# --- names -------------------------------------------------------------------------

@pytest.mark.parametrize("name, unnamed", [
    ("FUN_00401000", True), ("thunk_FUN_00401000", True), ("LAB_1", True), ("SUB_1", True),
    ("UndefinedFunction_1", True), ("core_a.cpp_FUN_00401000", False), (None, False)])
def test_ghidras_placeholder_names_are_unnamed(name, unnamed):
    assert sm.is_unnamed(name) is unnamed


@pytest.mark.parametrize("unit, placeholder", [
    ("crt_unknown.c", True), ("unknown_afterammo.cpp", True), ("unkclass_hag.cpp", True),
    ("unkaddr_00401000.cpp", True), ("unkafter_2d.cpp", True), ("unkcore_hag.cpp", True),
    ("core_hag.cpp", False), ("unkclass", False), ("crt_string.c", False),
    ("core_unknown.cpp", False), (None, False), ("", False)])
def test_only_the_catch_all_and_virtual_units_are_placeholders(unit, placeholder):
    assert sm.is_placeholder_unit(unit) is placeholder


def test_the_address_suffix_comes_off():
    assert sm.strip_addr_suffix("core_box.cpp_CBox_expand_FUN_00420240") == "core_box.cpp_CBox_expand"
    assert sm.strip_addr_suffix(None) == ""


@pytest.mark.parametrize("name, unit", [
    ("core_box.cpp_CBox_expand_FUN_00420240", "core_box.cpp"), ("engine_2d.c_x_FUN_1", "engine_2d.c"),
    ("entry", None), (None, None)])
def test_the_unit_is_the_names_leading_file(name, unit):
    assert sm.tu_of(name) == unit


@pytest.mark.parametrize("name, split", [
    ("core_box.cpp_CBox_expand_FUN_00420240", ("core_box.cpp", "CBox_expand")),
    ("core_box.cpp_FUN_00420240", ("core_box.cpp", None)),
    ("thunk_FUN_00420240", (None, None)),
    ("crt_x.c_thunk_memcpy_FUN_00420240", ("crt_x.c", "memcpy")),
    ("entry", (None, "entry")),
    ("", (None, None)),
])
def test_a_name_splits_into_unit_and_core(name, split):
    assert sm.split_qualified_name(name) == split


# --- finding the PE ----------------------------------------------------------------

@pytest.fixture(name = "layout")
def fixture_layout(monkeypatch, tmp_path):
    monkeypatch.setattr(sm, "REPO_ROOT", str(tmp_path))
    monkeypatch.setattr(sm, "BINARIES", str(tmp_path / "bin"))
    monkeypatch.setattr(sm, "ANNOTATIONS", str(tmp_path / "annotations"))
    (tmp_path / "bin" / "a").mkdir(parents = True)
    return tmp_path


def record_md5(layout, program, data):
    folder = layout / "annotations" / program / "metadata"
    folder.mkdir(parents = True)
    (folder / "metadata.json").write_text(json.dumps({"md5": hashlib.md5(data).hexdigest().upper()}))


def test_without_metadata_the_name_finds_the_program(layout):
    exe = layout / "bin" / "a" / "Game.EXE"
    exe.write_bytes(b"x")
    (layout / "bin" / "notes.txt").write_text("not it")
    assert sm.find_program_exe("game.exe") == str(exe)
    with pytest.raises(FileNotFoundError, match = "no other.exe under"):
        sm.find_program_exe("other.exe")


def test_the_md5_finds_a_program_shipped_under_another_name(layout):
    (layout / "bin" / "a" / "nocturne.exe").write_bytes(b"retail")
    (layout / "bin" / "a" / "nocturne.txt").write_bytes(b"blair witch")
    wanted = layout / "bin" / "a" / "nocturne2.exe"
    wanted.write_bytes(b"blair witch")
    record_md5(layout, "bw1.exe", b"blair witch")
    assert sm.find_program_exe("bw1.exe") == str(wanted)


def test_the_name_breaks_a_tie_between_identical_files(layout):
    for name in ("tridx6.dll", "tridx7.dll"):
        (layout / "bin" / "a" / name).write_bytes(b"same")
    record_md5(layout, "tridx7.dll", b"same")
    assert sm.find_program_exe("tridx7.dll").endswith("tridx7.dll")


def test_no_file_with_the_md5_is_an_error(layout):
    (layout / "bin" / "a" / "bw1.exe").write_bytes(b"online copy")
    record_md5(layout, "bw1.exe", b"retail copy")
    with pytest.raises(FileNotFoundError, match = "put the copy Ghidra imported there"):
        sm.find_program_exe("bw1.exe")


# --- annotations ---------------------------------------------------------------------

def test_buckets_load_lists_records_and_maps_but_not_the_index(monkeypatch, tmp_path):
    monkeypatch.setattr(sm, "ANNOTATIONS", str(tmp_path))
    folder = tmp_path / "p.exe" / "vtables"
    folder.mkdir(parents = True)
    (folder / "vtables_bucket_00.json").write_text(json.dumps([{"addr": "1"}, 5]))
    (folder / "vtables_bucket_01.json").write_text(json.dumps({"addr": "2"}))
    (folder / "vtables_bucket_02.json").write_text(json.dumps({"x": {"addr": "3"}, "y": 7}))
    (folder / "vtables_bucket_03.json").write_text("12")
    (folder / "vtables_buckets.json").write_text(json.dumps({"bucket_count": 4}))
    assert sm._load_buckets("p.exe", "vtables") == [{"addr": "1"}, {"addr": "2"}, {"addr": "3"}]


@pytest.fixture(name = "image")
def fixture_image(monkeypatch, tmp_path):
    code = LOADS_ADDRESS.ljust(0x10, b"\x90") + LOADS_FIVE.ljust(0x10, b"\x90") + MOVES_REGISTER
    functions = [function(CODE, "core_a.cpp_load_FUN_00401000", size = 6),
                 function(CODE + 0x10, "core_a.cpp_five_FUN_00401010", size = 6),
                 function(CODE + 0x20, "core_b.cpp_FUN_00401020", size = 3),
                 {"addr": f"{CODE + 0x30:08x}", "name": "FUN_00401030",
                  "body": [{"start": "zz"}, {"end": "1"}]},
                 {"name": "no address"}]
    annotations = install_programs(monkeypatch, tmp_path, {"p.exe": (code_pe(code), functions)})
    write_bucket(annotations, "p.exe", "applied_strings", [
        {"addr": f"{DATA:08X}", "value": "CBox::expand - bad"}, {"value": "no address"},
        {"addr": f"{DATA + 8:08x}"}])
    write_bucket(annotations, "p.exe", "vtables", [{"addr": "1"}])
    write_bucket(annotations, "p.exe", "cross_references", [
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE + 0x12:08x}", "to": f"{CODE + 0x20:08x}"},
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE + 0x02:08x}", "to": f"{CODE + 0x20:08x}"},
        {"type": "COMPUTED_CALL", "from": f"{CODE + 0x01:08x}", "to": f"{CODE + 0x10:08x}"},
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE + 0x04:08x}", "to": f"{CODE:08x}"},
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE + 0x80:08x}", "to": f"{CODE:08x}"},
        {"type": "UNCONDITIONAL_CALL", "from": "zz", "to": f"{CODE:08x}"},
        {"type": "CONDITIONAL_JUMP", "from": f"{CODE + 0x12:08x}", "to": f"{CODE:08x}"},
        {"type": "DATA", "from": f"{CODE + 0x01:08x}", "to": f"{DATA:08x}"},
        {"type": "READ", "from": f"{CODE + 0x81:08x}", "to": f"{DATA:08x}"},
        {"type": "DATA", "to": f"{DATA:08x}"},
        {"type": "DATA", "from": f"{CODE:08x}", "to": f"{DATA + 8:08x}"},
        {"type": "UNCONDITIONAL_CALL", "from": f"{CODE:08x}"}])
    return sm.Image("p.exe")


def test_an_image_knows_its_span_and_functions(image, capsys):
    assert (image.image_base, image.va_lo, image.va_hi) == (BASE, CODE, DATA + 0x80)
    assert sorted(image.by_addr) == [f"{CODE + o:08x}" for o in (0, 0x10, 0x20, 0x30)]
    sm.Image("p.exe", exe_path = image.exe_path, verbose = True)
    assert "[p.exe] 5 functions, VA span 0x401000-0x402080" in capsys.readouterr().err


def test_an_address_maps_to_its_file_offset_only_where_the_file_has_bytes(image):
    assert image.va2off(CODE + 4) == 0x200 + 4
    assert image.va2off(DATA) == 0x200 + 0x100
    assert image.va2off(DATA + 0x40) is None
    assert image.va2off(DATA + 0x80) is None
    assert (image.is_mapped_va(CODE), image.is_mapped_va(BASE)) == (True, False)


def test_strings_and_vtables_load_once(image):
    strings, vtables = image.strings, image.vtables
    assert strings == {f"{DATA:08x}": "CBox::expand - bad", f"{DATA + 8:08x}": ""}
    assert vtables == [{"addr": "1"}]
    assert (image.strings, image.vtables) == (strings, vtables)
    assert image.strings is strings and image.vtables is vtables


def test_functions_group_by_unit_in_address_order(image):
    assert image.tu_groups() == {"core_a.cpp": [f"{CODE:08x}", f"{CODE + 0x10:08x}"],
                                 "core_b.cpp": [f"{CODE + 0x20:08x}"]}
    addrs = image.addrs_sorted
    assert addrs == [CODE + o for o in (0, 0x10, 0x20, 0x30)]
    assert image.addrs_sorted is addrs


def test_an_address_belongs_to_the_function_whose_body_covers_it(image):
    assert image.func_containing(CODE + 3) == f"{CODE:08x}"
    assert image.func_containing(CODE + 0x15) == f"{CODE + 0x10:08x}"
    assert image.func_containing(CODE + 8) is None
    assert image.func_containing(CODE - 1) is None
    assert len(image.body_index) == 3


def test_the_backward_walk_stops_beyond_the_longest_function(image):
    far = CODE + 0x30000
    image._body_index = [(CODE, CODE + 0x40000, "outer"), (CODE + 0x10, CODE + 0x11, "inner")]
    assert image.func_containing(far) is None
    image._body_index = [(CODE + 0x1000, CODE + 0x40000, "outer"), (far - 4, far - 2, "inner")]
    assert image.func_containing(far) == "outer"


def test_calls_form_the_graph_in_call_site_order(image):
    load, five, b = f"{CODE:08x}", f"{CODE + 0x10:08x}", f"{CODE + 0x20:08x}"
    graph, sites = image.callgraph, image.callsites
    assert graph == {five: {b}, load: {b, five}}
    assert sites == {five: [b], load: [five, b]}
    assert image.callgraph is graph and image.callsites is sites
    assert image.callers_of() == {b: {five, load}, five: {load}}


def test_a_function_knows_the_strings_it_reads(image):
    assert image.string_refs() == {f"{CODE:08x}": {"CBox::expand - bad"}}


def test_caves_come_from_the_programs_cave_file(image, tmp_path):
    caves = tmp_path / "annotations" / "p.exe" / "code_caves.json"
    assert image.cave_ranges == [] and not image.in_cave(CODE)
    caves.write_text(json.dumps({"caves": [{"start": f"{CODE + 0x10:08x}", "total_size": 0x10},
                                           {"start": f"{CODE + 0x40:08x}"}]}))
    image._cave_ranges = None
    assert image.cave_ranges == [(CODE + 0x10, CODE + 0x20), (CODE + 0x40, CODE + 0x40)]
    assert (image.in_cave(CODE + 0x18), image.in_cave(CODE + 0x20), image.in_cave(CODE)) == (True, False, False)
    for broken in ("not json", json.dumps({"caves": [{"total_size": 1}]})):
        caves.write_text(broken)
        image._cave_ranges = None
        assert image.cave_ranges == []


# --- shapes --------------------------------------------------------------------------

def test_a_shape_masks_addresses_but_keeps_constants(image):
    load = sm.compute_shape(image, image.by_addr[f"{CODE:08x}"])
    five = sm.compute_shape(image, image.by_addr[f"{CODE + 0x10:08x}"])
    assert (load.consts, load.nbytes, load.ninsn) == ((), 6, 2)
    assert five.consts == (0x50,)
    assert load.relaxed == five.relaxed and load.strict != five.strict


def test_the_same_code_at_another_address_has_the_same_strict_shape(monkeypatch, tmp_path):
    code = LOADS_ADDRESS.ljust(0x10, b"\x90") + LOADS_OTHER_ADDRESS
    install_programs(monkeypatch, tmp_path, {"q.exe": (code_pe(code), [
        function(CODE, "a", size = 6), function(CODE + 0x10, "b", size = 6)])})
    image = sm.Image("q.exe")
    a, b = (sm.compute_shape(image, f) for f in image.functions)
    assert a.strict == b.strict


@pytest.mark.parametrize("body", [
    [], None, [{"start": "zz", "end": "1"}], [{"start": f"{DATA + 0x80:08x}", "end": f"{DATA + 0x81:08x}"}],
    [{"start": f"{CODE + 4:08x}", "end": f"{CODE:08x}"}],
])
def test_a_body_that_cannot_be_read_has_no_shape(image, body):
    assert sm.compute_shape(image, {"addr": "x", "body": body}) is None


def test_a_body_of_undecodable_bytes_has_no_shape(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"r.exe": (code_pe(b"\xff\xff"), [function(CODE, "a", size = 2)])})
    image = sm.Image("r.exe")
    assert sm.compute_shape(image, image.functions[0]) is None


def test_a_cave_fragment_is_left_out_of_the_shape(image, tmp_path):
    (tmp_path / "annotations" / "p.exe" / "code_caves.json").write_text(
        json.dumps({"caves": [{"start": f"{CODE + 0x10:08x}", "total_size": 0x10}]}))
    with_cave = {"body": [{"start": f"{CODE:08x}", "end": f"{CODE + 5:08x}"},
                          {"start": f"{CODE + 0x10:08x}", "end": f"{CODE + 0x15:08x}"}]}
    alone = sm.compute_shape(image, image.by_addr[f"{CODE:08x}"])
    assert sm.compute_shape(image, with_cave).strict == alone.strict
    only_cave = {"body": [{"start": f"{CODE + 0x10:08x}", "end": f"{CODE + 0x15:08x}"}]}
    assert sm.compute_shape(image, only_cave) is None


def test_shapes_skip_the_tiny_and_the_unreadable_and_are_cached(image):
    shapes = sm.shapes_for(image, min_bytes = 4)
    assert sorted(shapes) == [f"{CODE:08x}", f"{CODE + 0x10:08x}"]
    assert sm.shapes_for(image, min_bytes = 4) is shapes
    index = sm.index_by(shapes, "relaxed")
    assert list(index.values()) == [[f"{CODE:08x}", f"{CODE + 0x10:08x}"]]


# --- alignment -----------------------------------------------------------------------

def test_slots_align_across_an_inserted_block():
    a = ["x", None, "y", "z", "w"]
    b = ["x", "e1", "e2", "y", "z", "q"]
    assert sm.lcs_anchors(a, b) == [(0, 0), (2, 3), (3, 4)]
    assert sm.lcs_anchors([], ["x"]) == []
    assert sm.lcs_anchors(["b", "a"], ["a", "b"]) == [(1, 0)]


def test_a_folded_stub_never_anchors():
    # "s" fills target slots 1 and 2, so pinning it to either would make the
    # gap between x and y unequal; without it the gap is two slots on each side.
    assert sm.lcs_anchors(["x", "s", None, "y"], ["x", "s", "s", "y"]) == [(0, 0), (3, 3)]
    # The same on the source side: two methods that map to one target function.
    assert sm.lcs_anchors(["x", "t", "t", "y"], ["x", "t", "u", "y"]) == [(0, 0), (3, 3)]


# --- conventions and pins --------------------------------------------------------------

CSPEC = """
<prototype name="__watcallRegister" extrapop="4" stackshift="4">
  <input><pentry><register name="EAX"/></pentry><pentry><register name="EDX"/></pentry></input>
</prototype>
<prototype name="__stdcall" extrapop="unknown" stackshift="4">
  <input><pentry><addr space="stack" offset="4"/></pentry><pentry><other/></pentry></input>
</prototype>
<prototype name="__odd" extrapop="lots"><output/></prototype>
<prototype name="__plain"><input></input></prototype>
"""


def test_conventions_are_read_from_the_cspec(tmp_path):
    path = tmp_path / "x86watcom.cspec"
    path.write_text(CSPEC)
    assert sm.load_conventions(str(path)) == {
        "__watcallRegister": {"extrapop": 4, "arg_regs": ["EAX", "EDX"], "has_stack": False},
        "__stdcall": {"extrapop": None, "arg_regs": [], "has_stack": True},
        "__odd": {"extrapop": None, "arg_regs": [], "has_stack": False},
        "__plain": {"extrapop": None, "arg_regs": [], "has_stack": False}}
    assert sm.load_conventions(str(tmp_path / "missing.cspec")) == {}


def test_pins_are_grouped_by_the_function_they_land_in(image, tmp_path):
    path = tmp_path / "pins.json"
    path.write_text(json.dumps({"pins": [{"file": "a.cpp", "line": 1, "va": CODE + 1},
                                         {"file": "a.cpp", "line": 2, "va": CODE + 2},
                                         {"file": "b.cpp", "line": 3, "va": CODE + 0x80}]}))
    pins = sm.load_pins(str(path))
    assert sm.pins_by_function(image, pins) == {f"{CODE:08x}": {("a.cpp", 1), ("a.cpp", 2)}}
    path.write_text("{}")
    assert sm.load_pins(str(path)) == []


def test_without_capstone_it_says_how_to_get_it(monkeypatch):
    real_import = builtins.__import__

    def no_capstone(name, *args, **kwargs):
        if name == "capstone":
            raise ImportError(name)
        return real_import(name, *args, **kwargs)

    monkeypatch.setattr(builtins, "__import__", no_capstone)
    try:
        with pytest.raises(SystemExit, match = "pip install capstone"):
            importlib.reload(sm)
    finally:
        monkeypatch.undo()
        importlib.reload(sm)
