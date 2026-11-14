# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import itinerary_bw
import recreation_itinerary as ri


def function(addr, tu, method, cls = None, instructions = 5, **extra):
    out = dict(extra, addr = addr, tu = tu, method = method, instructions = instructions)
    if cls:
        out["cls"] = cls
    return out


class FakeModel:
    """scaffold.Model's walk inputs: every function, which are replaced, which lie outside scope."""

    def __init__(self, functions, replaced = (), outside = (), vtables = (), copy_ctors = ()):
        self.functions = {f["addr"]: f for f in functions}
        self.replaced = {a: self.functions[a] for a in replaced}
        self.in_scope = {a: f for a, f in self.functions.items()
                         if a not in self.replaced and a not in outside}
        self.vtables = list(vtables)
        self.copy_ctors = set(copy_ctors)


# Startup is 0x10 (initializeGameSystems, naming 0x20, 0x30, 0x40), 0x50 (the menu, walked from
# its retail body) and 0x60 (teardown, through one platform function kept and one dropped).
PROGRAM = [
    function("00000001", "common/math.cpp", "add", "CVector3f"),
    function("00000010", "core/main.cpp", "initializeGameSystems"),
    function("00000020", "engine/a.cpp", "load", "CA", 12, calls = ["00000021", "00000080"]),
    function("00000021", "engine/a.cpp", "dtor", "CA", 1),
    function("00000030", "engine/b.cpp", "think", "CB", 20,
             data_refs = ["00007000", "00000033", "00008000"]),
    function("00000031", "engine/b.cpp", "ctor", "CB", 2),
    function("00000032", "engine/b.cpp", "assign", "CB", 3, params = [{"type": {"name": "CB"}}]),
    function("00000033", "engine/c.cpp", "callback"),
    function("00000040", "core/err.cpp", "displayErrorAndQuit", calls = ["00000041"]),
    function("00000041", "core/err.cpp", "teardown"),
    function("00000050", "core/menu.cpp", "enterMainGameMenu"),
    function("00000051", "core/menu.cpp", "drawMenu"),
    function("00000060", "core/main.cpp", "finalizeGameSystems", calls = ["00000061", "00000063"]),
    function("00000061", "platform/win.cpp", "closeWindow", calls = ["00000062"],
             boundary = "platform::Window"),
    function("00000062", "core/fin.cpp", "saveSettings"),
    function("00000063", "platform/dd.cpp", "release", calls = ["00000064"], boundary = "dropped"),
    function("00000064", "shape/x.cpp", "drawX"),
    function("00000070", "core/main.cpp", "staticInit", instructions = 1),
    function("00000071", "core/main.cpp", "copy", "CCopy", 4),
    function("00000072", "core/main.cpp", "ctor", "CC", 2, params = [{"type": {"name": "int"}}]),
    function("00000080", "common/fs.cpp", "openFile", calls = ["00000081"]),
    function("00000081", "common/fs.cpp", "readFile"),
    function("00000082", "common/fs.cpp", "checksum"),
    function("00000090", "sound/snd.cpp", "initSound"),
    function("00000100", "crt/string.c", "strlen"),
]
UNITS = [
    {"label": "Files", "tus": {"common/fs.cpp"}, "extra": set(), "exclude": {"00000082"},
     "anchor": "00000021", "where": "before"},
    {"label": "Sound", "tus": {"sound/snd.cpp"}, "extra": {"00000033"}, "exclude": set(),
     "anchor": "00000031", "where": "after"},
]
SOURCES = {
    "core/main.cpp/initializeGameSystems_FUN_00000010.cpp":
        "FUN_00000020(); FUN_00000030(); FUN_00000040(); FUN_00000010(); FUN_00000020(); FUN_00000999();",
    "core/main.cpp/initializeGameSystems_FUN_00000010.keep.cpp": "FUN_00000062();",
    "core/main.cpp/initializeGameSystems_FUN_00000010.chunked.cpp": "FUN_00000062();",
    "core/main.cpp/initializeGameSystems_FUN_00000010.json": "{}",
    "core/main.cpp/notes.cpp": "FUN_00000062();",
    "core/menu.cpp/enterMainGameMenu_FUN_00000050.cpp": "FUN_00000062();",
}
RETAIL_SOURCES = {"core/menu.cpp/enterMainGameMenu_FUN_00005050.c": "FUN_00005051(); FUN_00005099();"}
PAIRS = [{"a": "00000050", "b": "00005050"}, {"a": "00000051", "b": "00005051"}]
RECREATION = {
    "game/a.cpp": "// deferred: the cache, with the pods\n//   it fills\n// nocedit 0x00000020\n"
                  "int load();\n// nocedit 0x00000051\n",
    "game/a.h": "    // unverified: a path, by hand\n    // nocedit 0x00000999\n",
    "notes.md": "// deferred: ignored\n",
}
# nocedit's 0x20 has a twin in bw1 with another body.
BW = itinerary_bw.BlairWitch(
    {"nocedit.exe": {"00000020": {"bw1.exe": {"addr": "00001020", "class": "logic-change"}}},
     "bw1.exe": {}, "blairwitch2.exe": {}, "bw3.exe": {}},
    {"bw1": {}, "bw2": {}, "bw3": {}}, {("bw1", "00001020")})


def write_tree(root, files):
    for relpath, text in files.items():
        path = root / relpath
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text)


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    """A tiny export, recreation and mapping, with the walk's constants pointed at them."""
    write_tree(tmp_path / "src", SOURCES)
    write_tree(tmp_path / "retail", RETAIL_SOURCES)
    write_tree(tmp_path / "recreation", RECREATION)
    (tmp_path / "mapping.json").write_text(json.dumps({"pairs": PAIRS}))
    model = FakeModel(PROGRAM, replaced = ["00000061", "00000063"], outside = ["00000100"],
                      vtables = [{"addr": "00007000", "slots": [{"addr": "00000031"}, {"addr": "00000032"}]}],
                      copy_ctors = ["00000071"])
    monkeypatch.setattr(ri.scaffold, "Model", lambda: model)
    monkeypatch.setattr(ri.scaffold, "boundary_destination", lambda f: f.get("boundary"))
    monkeypatch.setattr(itinerary_bw.BlairWitch, "load", lambda root: BW)
    monkeypatch.setattr(ri, "ROOT", str(tmp_path))
    monkeypatch.setattr(ri, "SOURCE", str(tmp_path / "src"))
    monkeypatch.setattr(ri, "RETAIL_SOURCE", str(tmp_path / "retail"))
    monkeypatch.setattr(ri, "MAPPING", str(tmp_path / "mapping.json"))
    monkeypatch.setattr(ri, "RECREATION", str(tmp_path / "recreation"))
    monkeypatch.setattr(ri, "STARTUP", ["00000010", "00000050", "00000060"])
    monkeypatch.setattr(ri, "INITIALIZE", "00000010")
    monkeypatch.setattr(ri, "THROWS", {"00000040"})
    monkeypatch.setattr(ri, "RETAIL_BODIES", {"00000050"})
    monkeypatch.setattr(ri, "UNITS", UNITS)
    return tmp_path


@pytest.fixture(name = "itinerary")
def fixture_itinerary(world):
    assert world.is_dir()
    return ri.Itinerary(3, 3)


def test_deferred_items_gather_continuations_and_report_orphans():
    lines = ["// deferred: a, with b", "//   and c", "//   and d", "// nocedit 0x00000001",
             "//   not a continuation without an item", "  // unverified: e, by f", "// plain comment",
             "// nocedit 0x00000002", "// nocedit 0x00000003",
             "// deferred: lost", "int x;", "// unverified: also lost"]
    found, orphans = ri.deferred_items(lines)
    assert found == {"00000001": ["deferred: a, with b and c and d"], "00000002": ["unverified: e, by f"],
                     "00000003": []}
    assert orphans == [10, 12]


def test_an_item_with_no_address_line_under_it_is_fatal(world, monkeypatch):
    write_tree(world / "recreation", {"game/b.cpp": "// deferred: x, with y\n"})
    with pytest.raises(SystemExit) as raised:
        ri.done_addresses()
    assert str(raised.value) == "deferred or unverified items with no address line under them:\n  " \
                                "recreation/game/b.cpp:1"
    monkeypatch.setattr(ri, "RECREATION", str(world / "src"))
    assert not ri.done_addresses()


def test_source_files_skip_keeps_chunks_and_names_without_an_address(world):
    assert ri.source_files(str(world / "src")) == {
        "00000010": str(world / "src/core/main.cpp/initializeGameSystems_FUN_00000010.cpp"),
        "00000050": str(world / "src/core/menu.cpp/enterMainGameMenu_FUN_00000050.cpp")}


def test_percent_rounds_down_and_survives_nothing():
    assert ri.percent(2, 3) == "66.6%"
    assert ri.percent(3, 3) == "100.0%"
    assert ri.percent(0, 0) == "0.0%"


def test_compiler_generated_functions_count_as_done(itinerary):
    assert itinerary.generated == {"00000021", "00000031", "00000032", "00000070", "00000071"}
    assert itinerary.done == itinerary.generated | {"00000051"}
    assert itinerary.deferred == {"00000020": ["deferred: the cache, with the pods it fills"],
                                  "00000999": ["unverified: a path, by hand"]}


def test_a_body_names_its_walkable_callees_once_in_order(itinerary):
    assert itinerary.names_in_source("00000010") == ["00000020", "00000030", "00000040"]
    assert itinerary.names_in_source("00000020") == []


def test_a_retail_body_stands_in_for_the_editors(itinerary):
    # The nocedit body names 0x62; retail's names 0x5051 (0x51) and an unpaired 0x5099.
    assert itinerary.successors("00000050") == ["00000051"]


def test_successors_follow_vtable_slots_and_referenced_functions(itinerary):
    assert itinerary.successors("00000030") == ["00000031", "00000032", "00000033"]
    assert itinerary.successors("00000040") == []
    assert itinerary.successors("00000063") == []
    assert itinerary.successors("00000061") == ["00000062"]


def test_the_walk_follows_startup_and_places_units_before_and_after_their_anchors(itinerary):
    itinerary.build()
    assert [(step.label, sorted(step.addrs)) for step in itinerary.steps] == [
        ("Math value types", ["00000001"]),
        ("Files", ["00000080", "00000081"]),
        ("`CA::load`, `CB::think`", ["00000020", "00000021", "00000030", "00000031", "00000032"]),
        ("Sound", ["00000033", "00000090"]),
        ("`displayErrorAndQuit`, `initializeGameSystems`, `enterMainGameMenu`",
         ["00000010", "00000040", "00000050", "00000051"]),
        ("`finalizeGameSystems`", ["00000060", "00000062"]),
        ("Not reached from startup: `common/`", ["00000082"]),
        ("Not reached from startup: `shape/`", ["00000064"]),
        ("Not reached from startup: `core/` (part 1 of 2)", ["00000041"]),
        ("Not reached from startup: `core/` (part 2 of 2)", ["00000070", "00000071", "00000072"]),
    ]


def test_the_render_has_a_table_and_a_list_per_step(itinerary):
    itinerary.build()
    lines = itinerary.render().splitlines()
    assert "| 2 | `CA::load`, `CB::think` | 2 | 5 | 38 | 3 | 1 | 60.0% | 1 | 1 |" in lines
    assert "| | **All** | | **22** | **115** | **6** | **1** | **27.2%** | **1** | **1** |" in lines
    step = lines.index("## Step 2: `CA::load`, `CB::think`")
    assert lines[step + 1:step + 9] == [
        "", "### `engine/a.cpp` (2 functions, 13 instructions, 1 done, 1 partial)", "- class `CA`",
        "  - [x] `dtor` 0x00000021 (1, compiler-generated)", "  - [~] `load` 0x00000020 (12)",
        "    - deferred: the cache, with the pods it fills", "    - BW: [x] bw1 0x00001020 (logic-change)", ""]
    assert "## Blair Witch only" in lines
    assert lines[-4:] == ["## Partial outside the itinerary", "", "- 0x00000999",
                          "  - unverified: a path, by hand"]


def test_nothing_in_scope_makes_no_step_or_part(itinerary):
    itinerary.record("platform only", {"00000061"}, {})
    assert not itinerary.steps
    assert not itinerary.split_by_tu(set(), {})


def test_with_nothing_partial_outside_the_render_has_no_such_section(itinerary):
    del itinerary.deferred["00000999"]
    assert "## Partial outside the itinerary" not in itinerary.render()


def chain_program():
    """0x1 calls 0x2 calls ... 0x6, each naming the next in its body."""
    addrs = [f"{i:08x}" for i in range(1, 7)]
    sources = {f"core/c.cpp/f{i}_FUN_{a}.cpp": f"FUN_{b}();" for i, (a, b) in enumerate(zip(addrs, addrs[1:]))}
    return [function(a, "core/c.cpp", f"f{i}") for i, a in enumerate(addrs)], sources


def test_a_large_step_splits_into_its_calls_down_to_a_limit(world, monkeypatch):
    functions, sources = chain_program()
    write_tree(world / "src", sources)
    monkeypatch.setattr(ri.scaffold, "Model", lambda: FakeModel(functions))
    itinerary = ri.Itinerary(0, 1)
    itinerary.add_step(["00000001"], "root")
    assert [(step.label, sorted(step.addrs)) for step in itinerary.steps] == [
        ("`f4`", ["00000005", "00000006"]), ("`f3`", ["00000004"]), ("`f2`", ["00000003"]),
        ("`f1`", ["00000002"]), ("root", ["00000001"])]


def test_small_steps_join_and_a_lone_one_folds_into_the_next(itinerary):
    sizes = [9, 1, 1, 5, 2, 4, 1]
    itinerary.steps = [ri.Step(f"s{i}", {f"{i}.{j}" for j in range(n)}, {f"{i}.{j}": j for j in range(n)})
                       for i, n in enumerate(sizes)]
    itinerary.merge_small()
    assert [(step.label, len(step.addrs)) for step in itinerary.steps] == [
        ("s0", 9), ("s1, s2, s3", 7), ("s4, s5", 6), ("s6", 1)]
    assert itinerary.steps[1].order == {"1.0": 0, "2.0": 1, "3.0": 2, "3.1": 3, "3.2": 4, "3.3": 5, "3.4": 6}


def test_main_writes_the_itinerary(world, monkeypatch, capsys):
    out = world / "docs" / "itinerary.md"
    out.parent.mkdir()
    monkeypatch.setattr(sys, "argv", ["recreation_itinerary.py", "--out", str(out), "--split", "3",
                                      "--merge", "3"])
    assert ri.main() == 0
    assert capsys.readouterr().out == "wrote docs/itinerary.md: 10 steps\n"
    expected = ri.Itinerary(3, 3)
    expected.build()
    assert out.read_text() == expected.render()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["recreation_itinerary.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "recreation_itinerary.py"), run_name = "__main__")
    assert exit_info.value.code == 0
