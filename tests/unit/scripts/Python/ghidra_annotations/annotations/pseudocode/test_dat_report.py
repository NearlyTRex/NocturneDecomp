# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import dat_report as dr


@pytest.fixture(autouse = True)
def fixture_fresh_size_cache(monkeypatch):
    monkeypatch.setattr(dr, "_struct_size_cache", None)
    monkeypatch.setattr(dr, "_struct_size_cache_dir", None)


def write_tree(root, files, data_types = None):
    """An exported program at root/exe: files maps paths under pseudocode/src to text or JSON."""
    src = root / "exe" / "pseudocode" / "src"
    src.mkdir(parents = True)
    for rel, content in files.items():
        path = src / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(content if isinstance(content, str) else json.dumps(content))
    if data_types is not None:
        (root / "exe" / "data_types").mkdir()
        (root / "exe" / "data_types" / "data_types.json").write_text(json.dumps(data_types))
    return str(src)


def function(name, *globals_):
    """A function JSON referencing (name, addr, type) globals."""
    return {"function": {"name": name}, "globals": [{"name": n, "addr": a, "type": t} for n, a, t in globals_]}


def asm_line(instruction, *refs, addr = "00401000"):
    return f"    {instruction:<34} ; {addr} | {' | '.join(refs)}\n"


def report(tmp_path, name):
    return (tmp_path / name).read_text().split("\n")


def section(lines, title):
    """The lines of a report section, from its title to the next rule's title."""
    start = next(i for i, line in enumerate(lines) if line.startswith(title))
    end = next((i for i in range(start + 2, len(lines)) if lines[i].startswith("-" * 80)), len(lines))
    return lines[start + 2:end]


# =============================================================================
# Struct sizes
# =============================================================================

def test_struct_sizes_come_from_the_programs_data_types(tmp_path):
    src = write_tree(tmp_path, {}, {"structs": [{"name": "CA", "len": 12}, {"name": "", "len": 4},
                                                {"name": "CNoLen"}, {"name": "CZero", "len": 0}],
                                    "unions": [{"name": "UB", "len": 8}]})
    cache = dr.build_struct_size_cache(src)
    assert cache == {"CA": 12, "UB": 8}
    assert dr.build_struct_size_cache(src) is cache


def unreadable_data_types(root):
    src = write_tree(root, {}, {})
    (root / "exe" / "data_types" / "data_types.json").write_text("{not json")
    return src


@pytest.mark.parametrize("make_src", [
    lambda root: "src",                                     # relative, no pseudocode/ above it
    lambda root: str(root / "nowhere" / "src"),             # absolute: the walk stops at the root
    lambda root: write_tree(root, {}),                      # no data_types.json
    unreadable_data_types,
])
def test_no_sizes_without_a_readable_data_types(tmp_path, make_src):
    assert dr.build_struct_size_cache(make_src(tmp_path)) == {}


# =============================================================================
# Type inference
# =============================================================================

@pytest.mark.parametrize("mnemonic, operands, expected", [
    ("FLD", "float ptr [0x500000]", ("float", "high")),
    ("FSTP.X", "dword ptr [0x500000]", ("float", "high")),
    ("FLD", "qword ptr [0x500000]", ("double", "high")),
    ("FLD", "double [0x500000]", ("double", "high")),
    ("FLDZ", "", ("float", "medium")),
    ("MOVSX", "EAX,byte ptr [0x500000]", ("char", "high")),
    ("MOVZX", "EAX,byte ptr [0x500000]", ("byte", "high")),
    ("CMP", "byte ptr [0x500000],0x1", ("byte", "medium")),
    ("ADD", "byte ptr [0x500000],0x1", (None, None)),
    ("MOVSX", "EAX,word ptr [0x500000]", ("short", "high")),
    ("MOVZX", "EAX,word ptr [0x500000]", ("ushort", "high")),
    ("MOV", "word ptr [0x500000],AX", ("short", "medium")),
    ("LEA", "EAX,dword ptr [0x500000]", ("void *", "medium")),
    ("MOV", "EAX,dword ptr [0x500000]", (None, None)),
    ("PUSH", "DAT_00500000", ("void *", "low")),
    ("PUSH", "[DAT_00500000]", (None, None)),
])
def test_an_instructions_operand_size_names_the_type(mnemonic, operands, expected):
    assert dr.infer_type_from_asm(mnemonic, operands, "DAT_00500000") == expected


@pytest.mark.parametrize("line, hints", [
    ("x = (float)DAT_1;", [("float", "high")]),
    ("p = (int *)&DAT_1;", [("int *", "high")]),
    ("DAT_1 = 1.5;", [("float", "medium")]),
    ("if (DAT_1 > 0.0) {", [("float", "medium")]),
    ("x = DAT_1[i];", [("array", "medium")]),
    ("(*DAT_1)(x);", [("function_ptr", "high")]),
    ("f = (code *)DAT_1;", [("code *", "high"), ("function_ptr", "high")]),
    ("strcpy(buf, DAT_1);", [("char *", "high")]),
    ("x = DAT_1;", []),
])
def test_pseudocode_use_names_the_type(line, hints):
    assert dr.infer_type_from_pseudocode([line], "DAT_1") == hints


# =============================================================================
# Address map and containment
# =============================================================================

def test_the_five_named_globals_closest_either_side_are_nearby():
    all_globals = {f"g_{i}": {"addr": f"{0x1000 + i * 0x10:x}", "type": "int"} for i in range(-8, 9) if i}
    all_globals.update({"DAT_1": {"addr": "1001"}, "g_bad": {"addr": "zz"}, "g_noaddr": {},
                        "g_far": {"addr": "2000"}, "g_same": {"addr": "1000"}})
    assert dr.find_nearby_named_globals(0x1000, all_globals) == [
        ("g_-1", "int", 0x10), ("g_1", "int", -0x10), ("g_-2", "int", 0x20), ("g_2", "int", -0x20),
        ("g_-3", "int", 0x30)]


@pytest.mark.parametrize("gtype, sizes, expected", [
    ("", {}, (4, False)),
    ("int[100]", {}, (400, True)),
    ("char[241][320]", {}, (241 * 320, True)),
    ("SFog[16]", {"SFog": 8}, (128, True)),
    ("SUnknown[6]", {}, (24, False)),
    ("TerminatedCString", {}, (256, False)),
    ("s_thing", {}, (256, False)),
    ("char[]", {}, (256, False)),
    ("double", {}, (8, True)),
    ("CActor *", {}, (4, True)),
    ("CActor", {"CActor": 0x40}, (0x40, True)),
    ("CActor", {}, (0, False)),
])
def test_a_globals_size_comes_from_its_type(gtype, sizes, expected):
    assert dr.estimate_global_size(gtype, sizes) == expected


def test_without_sizes_the_cached_program_sizes_are_used(monkeypatch):
    monkeypatch.setattr(dr, "_struct_size_cache", {"CActor": 0x40})
    assert dr.estimate_global_size("CActor") == (0x40, True)


@pytest.mark.parametrize("name, base", [
    ("g_Foo[0].bar.baz", "g_Foo"), ("g_Foo.x", "g_Foo"), ("g_Foo[3]", "g_Foo"), ("g_Foo[1][2]", "g_Foo"),
    ("g_Bar[0].x", None), ("g_Foo", None), ("g_Foo+4", None),
])
def test_a_sub_reference_names_its_base_global(name, base):
    assert dr._find_base_global_name(name, {"g_Foo": {}}) == base


def test_the_address_map_holds_only_top_level_named_globals():
    all_globals = {
        "g_Path": {"addr": "00500000", "type": "char[264]"},
        "g_Path+4": {"addr": "00500004", "type": "undefined4"},        # part of g_Path
        "g_Path+0x108": {"addr": "00500108", "type": "undefined4"},    # past its end
        "s_text_00500200": {"addr": "00500200", "type": "TerminatedCString"},
        "s_text_00500200+1": {"addr": "00500201", "type": "undefined4"},  # bounds the string's guess
        "g_Path[2]": {"addr": "00500002", "type": "char"},
        "DAT_00500300": {"addr": "00500300", "type": "undefined4"},
        "g_bad": {"addr": "zz"}, "g_noaddr": {},
        "g_Untyped": {"addr": "00400000"},
    }
    assert [e[1] for e in dr.build_global_address_map(all_globals)] == [
        "g_Untyped", "g_Path", "g_Path+0x108", "s_text_00500200", "s_text_00500200+1"]


CONTAINERS = {
    "g_Table": {"addr": "00500000", "type": "int[4]"},
    "g_Empty": {"addr": "00500100", "type": "int[0]"},
    "s_text_00500200": {"addr": "00500200", "type": "TerminatedCString"},
    "g_Thing": {"addr": "00501000", "type": "SThing"},
    "g_Next": {"addr": "00501100", "type": "int"},
    "g_Big": {"addr": "00502000", "type": "SBig"},
    "g_Far": {"addr": "00508000", "type": "int"},
    "g_Last": {"addr": "00600000", "type": "SLast"},
}


@pytest.mark.parametrize("addr, container", [
    (0x4fffff, None),                  # before every global
    (0x500000, None),                  # a global's own address
    (0x500008, "g_Table"),             # inside a known size
    (0x500010, None),                  # just past it
    (0x500104, None),                  # a zero-size array holds nothing
    (0x5002ff, "s_text_00500200"),     # within a string's 256-byte guess
    (0x500300, None),                  # past it
    (0x501080, "g_Thing"),             # unknown struct, well inside the gap to the next global
    (0x5010f0, None),                  # in the last quarter of that gap
    (0x502100, None),                  # a gap of 16KB or more is no bound
    (0x600100, None),                  # the last global has no next one to bound it
])
def test_a_dat_inside_a_named_globals_data_is_found(addr, container):
    assert dr.is_inside_named_global(addr, CONTAINERS) == container


def test_a_string_typed_by_name_gets_the_strings_bound():
    address_map = [(0x500000, "s_a", "s_a", 0, False)]
    assert dr.is_inside_named_global(0x500010, {}, address_map) == "s_a"


# =============================================================================
# Immediates
# =============================================================================

@pytest.mark.parametrize("operands, memory", [
    ("EAX,[0x00665f3a]", True),
    ("EAX,dword ptr [ECX + 0x665f3a]", True),
    ("EDX,0x665f3a", False),
    ("EDX,0x00665f3a", False),
    ("dword ptr [ESI + 0x18],0x665f3a", False),
    # no literal: Ghidra tracked the address in a register
    ("EAX,dword ptr [EAX + 0x14d144]", True),
    ("EAX", True),
    # 0x665f3a is not in 0x665f3ab or 0x1665f3a
    ("EDX,0x665f3ab", True),
    ("EDX,0x1665f3a", True),
])
def test_only_a_bracketed_literal_or_a_tracked_register_is_a_memory_use(operands, memory):
    assert dr.is_memory_reference(operands, "00665f3a") is memory


def test_a_dat_used_only_as_a_value_is_an_immediate(tmp_path):
    src = write_tree(tmp_path, {
        "a.cpp/f_FUN_00401000.asm": (asm_line("MOV EDX,0x550000", "DAT_00550000")
                                     + asm_line("MOV EAX,[0x00560000]", "DAT_00560000 | DAT_00550000")
                                     + asm_line("MOV EAX,0x1", "DAT_00570000")
                                     + asm_line("MOV EAX,0x1", "DAT_99999999")
                                     + ";   undefined4 DAT_00550000 | header\n"
                                     + "    MOV EAX,0x1 ; 00401000 DAT_00550000\n"),
    })
    results = dr.detect_immediate_references(src, {"DAT_00550000": {"addr": "00550000"},
                                                   "DAT_00560000": {"addr": "00560000"},
                                                   "DAT_00570000": {"addr": ""}})
    assert results["DAT_00550000"] == {
        "all_immediate": False, "immediate_count": 1, "memory_count": 1,
        "references": [("f", asm_line("MOV EDX,0x550000", "DAT_00550000").strip()),
                       ("f", asm_line("MOV EAX,[0x00560000]", "DAT_00560000 | DAT_00550000").strip())]}
    assert results["DAT_00560000"]["memory_count"] == 1
    assert results["DAT_00570000"] == {"all_immediate": True, "references": [], "immediate_count": 0,
                                       "memory_count": 0}


# =============================================================================
# Collecting and sorting the DAT_ globals
# =============================================================================

def test_globals_are_collected_with_every_function_that_uses_them(tmp_path):
    src = write_tree(tmp_path, {
        "a/f.json": function("f", ("g_A", "00500000", "int")),
        "a/g.json": function("g", ("g_A", "00500004", "float")),
        "a/h.json": {"globals": [{"name": "g_B"}]},
        "a/bad.json": "{not json",
        "a/dir.json/x.txt": "",
    })
    assert dr.collect_globals(src) == {
        "g_A": {"addr": "00500000", "type": "int", "funcs": {"f", "g"}},
        "g_B": {"addr": "", "type": "unknown", "funcs": {"?"}}}


def test_dat_globals_are_sorted_into_real_inside_outside_and_immediates(tmp_path):
    src = write_tree(tmp_path, {"a.cpp/f_FUN_00401000.asm": asm_line("MOV EDX,0x550000", "DAT_00550000")})
    all_globals = {
        "IMAGE_DOS_HEADER_00400000": {"addr": "00400000", "type": "IMAGE_DOS_HEADER"},
        "g_Table": {"addr": "00500000", "type": "int[4]"},
        "g_End": {"addr": "00600000", "type": "int"},
        "DAT_00500004": {"addr": "00500004", "type": "undefined4"},
        "DAT_00002424": {"addr": "00002424", "type": "undefined4"},
        "DAT_00600004": {"addr": "00600004", "type": "undefined4"},
        "DAT_00550000": {"addr": "00550000", "type": "undefined4"},
        "DAT_00560000": {"addr": "00560000", "type": "undefined4", "funcs": {"f"}},
        "DAT_zz": {"addr": "", "type": "undefined4"},
    }
    real, inside, outside, immediates = dr.sort_dat_globals(src, all_globals)
    assert real == {"DAT_00560000": {"addr": "00560000", "type": "undefined4", "funcs": {"f"}}}
    assert real["DAT_00560000"] is not all_globals["DAT_00560000"]
    assert inside == {"DAT_00500004": "g_Table"}
    assert outside == ["DAT_00002424", "DAT_00600004"]
    assert list(immediates) == ["DAT_00550000"]


def test_with_no_named_globals_no_dat_is_outside(tmp_path):
    src = write_tree(tmp_path, {})
    real, _, outside, _ = dr.sort_dat_globals(src, {"DAT_00002424": {"addr": "00002424", "type": "x"}})
    assert (list(real), outside) == (["DAT_00002424"], [])


def test_each_instruction_naming_a_dat_first_is_read(tmp_path):
    src = write_tree(tmp_path, {"a.cpp/f.asm": (asm_line("FLD dword ptr [0x00510000]", "DAT_00510000")
                                                 + asm_line("MOV EAX,[0x00510000]", "g_Foo | DAT_00510000")
                                                 + "    MOV EAX,DAT_00510000 ; 00401000 |\n"
                                                 + ";   undefined4 DAT_00510000 | DAT_00510000\n"
                                                 + "    MOV EAX,DAT_00510000\n")})
    assert list(dr.dat_instructions(src)) == [("DAT_00510000", "FLD", "dword ptr [0x00510000]")]


@pytest.mark.parametrize("hints, best", [
    ([("byte", "medium"), ("char *", "high")], ("char *", "high")),
    ([("void *", "low"), ("byte", "medium"), ("short", "medium")], ("byte", "medium")),
    ([("void *", "low"), ("int", "low")], ("void *", "low")),
])
def test_the_most_confident_hint_is_reported(hints, best):
    assert dr.best_hint(hints) == best


# =============================================================================
# DAT_ globals analysis report
# =============================================================================

DAT_TREE = {
    "core/a.json": function(
        "f",
        ("IMAGE_DOS_HEADER_00400000", "00400000", "IMAGE_DOS_HEADER"),
        ("g_Table", "00500000", "int[4]"),
        ("s_hello_00500100", "00500100", "TerminatedCString"),
        ("g_End", "00600000", "int"),
        ("DAT_00500004", "00500004", "undefined4"),
        ("DAT_00500110", "00500110", "undefined4"),
        ("DAT_00002424", "00002424", "undefined4"),
        ("DAT_00550000", "00550000", "undefined4"),
        ("DAT_00500200", "00500200", "undefined4"),
        ("DAT_00510000", "00510000", "undefined4"),
        ("DAT_00540000", "00540000", "float"),
        ("DAT_00520000", "00520000", "undefined4"),
        ("DAT_00530000", "00530000", "undefined4"),
        ("DAT_005fff00", "005fff00", "undefined4"),
        ("DAT_zz", "", "undefined4")),
    "core/b.json": function("g", ("DAT_00510000", "00510000", "undefined4")),
    "core/a.cpp/f_FUN_00401000.asm": (
        asm_line("MOV EDX,0x550000", "DAT_00550000")
        + asm_line("FLD dword ptr [0x00500200]", "DAT_00500200")
        + asm_line("MOV byte ptr [0x00510000],AL", "DAT_00510000")
        + asm_line("CMP byte ptr [0x00540000],0x1", "DAT_00540000")
        + asm_line("PUSH DAT_00520000", "DAT_00520000")
        + asm_line("MOV EAX,[0x00520000]", "DAT_00520000")
        + asm_line("MOV EAX,[0x00530000]", "DAT_00530000")
        + asm_line("MOV EAX,[0x005fff00]", "DAT_005fff00")
        + asm_line("MOV EAX,[0x00002424]", "DAT_00002424")),
    "core/a.cpp/f_FUN_00401000.cpp": "DAT_00500200 = 1.5;\nstrcpy(buf, DAT_00510000);\nx = DAT_00002424;\n",
}


def test_the_dat_report_sorts_dats_by_how_sure_their_type_is(tmp_path):
    src = write_tree(tmp_path, DAT_TREE)
    assert dr.generate_dat_report(src, str(tmp_path)) == 6
    lines = report(tmp_path, "dat_globals_analysis.txt")
    # DAT_zz has no address, so it is counted but sorted nowhere
    assert lines[4:10] == ["Total DAT_ globals found: 11", "Filtered out (inside named data): 2",
                           "Outside the program image: 1", "Immediate constants (not real globals): 1",
                           "Real globals remaining: 6", ""]
    assert lines[10:13] == ["Current type breakdown:", f"  {'undefined4':<30} 5", f"  {'float':<30} 1"]
    assert "DAT_ globals with type hints: 4 / 6" in lines
    assert section(lines, "HIGH CONFIDENCE") == [
        f"  {'DAT_00500200':<30}  addr={'00500200':<10}  current={'undefined4':<14}  likely={'float':<14}  refs=1",
        "    nearby: s_hello_00500100 (TerminatedCString) at offset +256",
        # the strcpy() names it better than the byte store does
        f"  {'DAT_00510000':<30}  addr={'00510000':<10}  current={'undefined4':<14}  likely={'char *':<14}  refs=2",
        ""]
    assert section(lines, "MEDIUM CONFIDENCE") == [
        f"  {'DAT_00540000':<30}  addr={'00540000':<10}  current={'float':<14}  likely={'byte':<14}  refs=1", ""]
    assert section(lines, "LOW CONFIDENCE") == [
        f"  {'DAT_00520000':<30}  addr={'00520000':<10}  current={'undefined4':<14}  maybe={'void *':<14}  refs=1", ""]
    assert section(lines, "NO TYPE HINTS") == [
        f"  {'DAT_00530000':<30}  addr={'00530000':<10}  type={'undefined4':<14}  refs=1",
        f"  {'DAT_005fff00':<30}  addr={'005fff00':<10}  type={'undefined4':<14}  refs=1  nearby: g_End at -256",
        ""]
    most = section(lines, "MOST REFERENCED")
    assert most[0] == (f"  {'DAT_00510000':<30}  addr={'00510000':<10}  refs=2     type={'undefined4':<14}"
                       "  likely=char *")
    assert f"  {'DAT_00530000':<30}  addr={'00530000':<10}  refs=1     type={'undefined4':<14}" in most
    assert section(lines, "IMMEDIATE CONSTANTS") == [
        "These DAT_ globals are never dereferenced as memory addresses.",
        "They appear only as inline constant values.", "",
        f"  {'DAT_00550000':<30}  value={'0x550000':<14}  refs=1", ""]
    assert section(lines, "OUTSIDE THE PROGRAM IMAGE") == [
        "No global lives at these addresses: they are constants, or addresses Ghidra",
        "computed from a register value.", "", "  DAT_00002424", ""]
    assert section(lines, "FILTERED OUT") == [
        "These DAT_ globals fall within the address range of a named",
        "string, array, or struct and are not standalone globals.", "",
        f"  {'DAT_00500004':<30}  inside g_Table", f"  {'DAT_00500110':<30}  inside s_hello_00500100", "", ""]


def test_a_dat_report_with_nothing_to_set_aside_has_no_such_sections(tmp_path):
    src = write_tree(tmp_path, {"a.json": function("f", ("g_A", "00500000", "int"), ("g_Z", "00600000", "int"),
                                                   ("DAT_00510000", "00510000", "undefined4"))})
    assert dr.generate_dat_report(src, str(tmp_path)) == 1
    text = (tmp_path / "dat_globals_analysis.txt").read_text()
    assert ("IMMEDIATE" not in text and "OUTSIDE THE" not in text and "FILTERED OUT" not in text
            and "NO TYPE HINTS (1)" in text)


# =============================================================================
# Clusters
# =============================================================================

def items(*addrs, funcs = ("f",)):
    return [(a, f"DAT_{a:08x}", {"funcs": set(funcs), "_name": f"DAT_{a:08x}", "type": "undefined4"})
            for a in addrs]


@pytest.mark.parametrize("addrs, clusters", [
    ((0, 4, 0x200, 0x400, 0x404, 0x504, 0x800), [[0, 4], [0x400, 0x404, 0x504]]),
    ((0, 0x200, 0x204), [[0x200, 0x204]]),
])
def test_dats_within_256_bytes_of_each_other_form_a_cluster(addrs, clusters):
    assert [[c[0] for c in cluster] for cluster in dr.detect_clusters(items(*addrs))] == clusters


@pytest.mark.parametrize("addrs, expected", [
    ((0, 4, 8), {"strides": [4, 4], "uniform": True, "stride": 4}),
    ((0, 4, 12, 16, 24), {"strides": [4, 8, 4, 8], "uniform": False, "stride": None,
                          "repeating_pattern": [4, 8], "repeating_period": 2, "struct_size": 12}),
    ((0, 4, 8, 88, 92, 96, 176), {"strides": [4, 4, 80, 4, 4, 80], "uniform": False, "stride": None,
                                  "repeating_pattern": [4, 4, 80], "repeating_period": 3, "struct_size": 88}),
    ((0, 4, 12, 16, 20), {"strides": [4, 8, 4, 4], "uniform": False, "stride": None}),
    ((0, 4, 12), {"strides": [4, 8], "uniform": False, "stride": None}),
])
def test_a_clusters_strides_show_its_layout(addrs, expected):
    assert dr.analyze_cluster_stride(items(*addrs)) == expected


@pytest.mark.parametrize("addrs, floats, classification, details", [
    ((0, 1, 2), 0, "char_array", {"type": "char[4]", "confidence": "high", "reason": "3 consecutive bytes"}),
    (tuple(range(0, 32, 4)), 5, "array",
     {"type": "float[8]", "confidence": "high", "reason": "8 elements at stride 4"}),
    ((0, 4, 8, 12), 2, "array", {"type": "int[4]", "confidence": "medium", "reason": "4 elements at stride 4"}),
    ((0, 12), 0, "struct_array", {"type": "CVector3f[2] or CVector3i[2]", "confidence": "medium",
                                  "reason": "2 elements at stride 12 (sizeof CVector3)"}),
    ((0, 8, 16), 0, "struct_array", {"type": "struct_8bytes[3]", "confidence": "medium",
                                     "reason": "3 elements at stride 8"}),
    ((0, 4, 8, 88, 92, 96, 176), 0, "struct_array",
     {"type": "struct { int/float a,b,c; char pad[72]; }[2]", "confidence": "medium",
      "reason": "repeating pattern [4, 4, 80], struct_size=88"}),
    ((0, 4, 12, 16, 24), 0, "struct_array",
     {"type": "struct_12bytes[2]", "confidence": "low", "reason": "repeating stride pattern [4, 8]"}),
    ((0, 4, 8, 108, 112, 116, 123), 0, "vector_groups",
     {"type": "likely contains CVector3i/f fields", "confidence": "medium",
      "reason": "2 groups of 3 consecutive ints found"}),
    ((0, 1, 2, 3, 8), 0, "byte_blob", {"type": "char[] or byte[]", "confidence": "medium",
                                        "reason": "3/4 strides are 1 byte"}),
    ((0, 4, 12, 28), 0, "struct", {"type": "struct (28 bytes span, 4 fields)", "confidence": "low",
                                   "reason": "mixed strides, shared by 1 functions"}),
    ((0, 4, 12), 0, "unknown", {"type": "unknown grouping", "confidence": "low", "reason": "3 items, span=12 bytes"}),
    ((0, 4), 0, "unknown", {"type": "unknown grouping", "confidence": "low", "reason": "2 items, span=4 bytes"}),
    ((0, 8), 0, "unknown", {"type": "unknown grouping", "confidence": "low", "reason": "2 items, span=8 bytes"}),
    ((0, 2, 4), 0, "unknown", {"type": "unknown grouping", "confidence": "low", "reason": "3 items, span=4 bytes"}),
])
def test_a_cluster_is_classified_by_its_strides(addrs, floats, classification, details):
    cluster = items(*addrs)
    hints = {entry[1]: [("float", "high")] for entry in cluster[:floats]}
    assert dr.classify_cluster(cluster, dr.analyze_cluster_stride(cluster), hints, {}) == (classification, details)


# =============================================================================
# Struct/array detection report
# =============================================================================

def struct_tree():
    named = [("IMAGE_DOS_HEADER_00400000", "00400000", "IMAGE_DOS_HEADER"), ("g_Anchor", "00700000", "int"),
             ("g_Mid", "00800080", "int"), ("g_Table", "00740000", "int[4]"), ("g_End", "03000000", "int")]
    array = [(f"DAT_{0x700100 + i * 4:08x}", f"{0x700100 + i * 4:08x}", "undefined4") for i in range(8)]
    chars = [(f"DAT_{0x710000 + i:08x}", f"{0x710000 + i:08x}", "undefined1") for i in range(3)]
    vectors = [("DAT_00720000", "00720000", "undefined4"), ("DAT_0072000c", "0072000c", "undefined4")]
    pattern = [(f"DAT_{0x730000 + o:08x}", f"{0x730000 + o:08x}", "undefined4") for o in (0, 4, 12, 16, 24)]
    isolated = [(f"DAT_{0x800000 + i * 0x1000:08x}", f"{0x800000 + i * 0x1000:08x}", "undefined4")
                for i in range(51)]
    others = [("DAT_00750000", "00750000", "undefined4"), ("DAT_02000000", "02000000", "undefined4"),
              ("DAT_00740004", "00740004", "undefined4"), ("DAT_00000065", "00000065", "undefined4")]
    long_operand = "dword ptr [ESI + EAX*0x1 + 0x18]," + "0x750000" + " " * 80
    asm = ("".join(asm_line(f"FLD dword ptr [0x{int(a, 16):08x}]", n) for n, a, _ in array[:5])
           + asm_line("MOVZX EAX,word ptr [0x00801000]", "DAT_00801000")
           + asm_line("MOV EAX,dword ptr [0x00720000]", "DAT_00720000")     # names no type
           + asm_line("MOV EDX,0x750000", "DAT_00750000")
           + asm_line("MOV ECX,0x750000", "DAT_00750000")
           + asm_line("MOV EAX,0x2000000", "DAT_02000000"))
    return {
        "a.json": function("f", *named, *array, *chars, *vectors, *pattern, *isolated, *others),
        "b.json": function("g", isolated[0]),
        "a.cpp/f_FUN_00401000.asm": asm,
        "b.cpp/g_FUN_00402000.asm": f"    MOV {long_operand} ; 00402000 | DAT_00750000\n",
    }


def test_the_struct_report_groups_neighbouring_dats(tmp_path):
    src = write_tree(tmp_path, struct_tree())
    assert dr.generate_struct_detection_report(src, str(tmp_path)) == 4
    lines = report(tmp_path, "dat_struct_detection.txt")
    assert lines[4:13] == ["Total DAT_ globals found: 73", "Filtered out (inside named data): 1",
                           "Outside the program image: 1", "Immediate constants (not real globals): 2",
                           "Real globals remaining: 69", "Clusters detected: 4", "DAT_ globals in clusters: 18", "",
                           "Classification summary:"]
    assert sorted(lines[13:16]) == [f"  {'array':<20} 1 clusters", f"  {'char_array':<20} 1 clusters",
                                    f"  {'struct_array':<20} 2 clusters"]
    imm = section(lines, "LIKELY IMMEDIATE CONSTANTS")
    assert imm[4:7] == ["  DAT_00750000  value=0x750000 (7667712)  refs=3", "    f",
                        "      " + asm_line("MOV EDX,0x750000", "DAT_00750000").strip()]
    assert imm[7] == "    g" and imm[8].endswith("...") and len(imm[8]) == 6 + 103
    assert imm[10] == "  DAT_02000000  value=0x2000000  refs=1"
    high = section(lines, "HIGH CONFIDENCE")
    assert high[1:7] == ["  0x00700100 - 0x0070011c  (8 items, 28 bytes span)", "    Classification: array",
                         "    Likely type: float[8]", "    Reason: 8 elements at stride 4",
                         "    Referenced by: 1 functions", "     near: g_Anchor (int) at +256"]
    assert high[7] == "      0x00700100  DAT_00700100  undefined4 [float]"
    assert high[12:14] == ["      0x00700114  DAT_00700114  undefined4", "      ... +2 more"]
    assert "    Classification: char_array" in high
    assert "    Likely type: CVector3f[2] or CVector3i[2]" in section(lines, "MEDIUM CONFIDENCE")
    assert "    Likely type: struct_12bytes[2]" in section(lines, "LOW CONFIDENCE")
    isolated = section(lines, "ISOLATED DAT_ GLOBALS")
    assert isolated[0] == (f"  {'DAT_00800000':<30}  addr={'00800000':<10}  type={'undefined4':<14}  refs=2"
                           "  near: g_Mid(-128)")
    assert f"  {'DAT_00801000':<30}  addr={'00801000':<10}  type={'undefined4':<14}  refs=1 [likely ushort]" in isolated
    assert isolated[-2:] == ["  ... +1 more", ""]
    assert section(lines, "OUTSIDE THE PROGRAM IMAGE")[3] == "  DAT_00000065"
    assert section(lines, "FILTERED OUT")[0] == f"  {'DAT_00740004':<30}  inside g_Table"


def test_a_struct_report_with_nothing_found_has_only_its_summary(tmp_path):
    src = write_tree(tmp_path, {"a.json": function("f", ("g_A", "00500000", "int"))})
    assert dr.generate_struct_detection_report(src, str(tmp_path)) == 0
    lines = report(tmp_path, "dat_struct_detection.txt")
    assert [line for line in lines if "CONFIDENCE" in line or "IMMEDIATE" in line or "FILTERED" in line] == []
    assert "ISOLATED DAT_ GLOBALS (0 - not part of any cluster)" in lines


# =============================================================================
# Globals gap report
# =============================================================================

GAP_TREE = {
    "a.json": function(
        "f",
        ("IMAGE_DOS_HEADER_00400000", "00400000", "IMAGE_DOS_HEADER"),
        ("g_A", "00500000", "int[4]"),
        ("g_B", "00500020", "int"),
        ("g_C", "00500022", "undefined4"),
        ("s_D_00500100", "00500100", "TerminatedCString"),
        ("g_E", "00600000", "int"),
        ("g_F", "00700000", "int"),
        ("DAT_00600010", "00600010", "undefined4"),
        ("DAT_00500020", "00500020", "undefined4"),
        ("DAT_00000065", "00000065", "undefined4"),
        ("DAT_zz", "", "undefined4")),
}


def test_the_gap_report_measures_the_space_between_globals(tmp_path):
    src = write_tree(tmp_path, GAP_TREE)
    dr.generate_globals_gap_report(src, str(tmp_path))
    lines = report(tmp_path, "globals_gap_analysis.txt")
    assert lines[4:15] == [
        # DAT_00500020 shares g_B's address, and the named global is kept
        "Total globals analyzed:      8", "  Named globals:             7", "  DAT_ globals:              2",
        "Gaps found:                  6", "  With exact size bounds:    2", "  With estimated bounds:     4",
        f"Total gap bytes:             {0xfffff + 0x10 + 0xda + 0xffe00 + 0xc + 0xfffec:,}",
        f"  Exact gap bytes:           {0x10 + 0xc:,}", "Overlaps (known sizes):      1", "", "-" * 80]
    assert section(lines, "GAP SIZE DISTRIBUTION") == [
        f"  {'5-16 bytes (small vars)':<45} 2", f"  {'65-256 bytes (medium data)':<45} 1",
        f"  {'64+ KB':<45} 3", ""]
    largest = section(lines, "LARGEST GAPS")
    assert largest[0:3] == [
        f"  {0xfffff:>10,} bytes ~  at 0x00400001",
        f"    after: {'IMAGE_DOS_HEADER_00400000':<40} {'IMAGE_DOS_HEADER':<20} at 0x00400000  size=?",
        f"    before: {'g_A':<40} {'int[4]':<20} at 0x00500000"]
    assert largest[6:8] == [f"  {0xffe00:>10,} bytes ~  at 0x00500200",
                            f"    after: {'s_D_00500100':<40} {'TerminatedCString':<20} at 0x00500100  size=256"]
    # g_C is undefined4, a label with no data: the gap after it is an estimate
    assert f"  {0xda:>10,} bytes ~  at 0x00500026" in largest
    assert section(lines, "ALL EXACT GAPS") == [
        f"  {0x10:>10,} bytes  at 0x00500010  between {'g_A':<30} and g_B",
        f"  {0xc:>10,} bytes  at 0x00600004  between {'g_E':<30} and DAT_00600010", ""]
    assert section(lines, "OVERLAPS") == [
        "  2 bytes overlap", f"    {'g_B':<40} {'int':<20} at 0x00500020  size=4",
        f"    {'g_C':<40} {'undefined4':<20} at 0x00500022", "", ""]


def test_a_gap_report_without_exact_gaps_or_overlaps_lists_neither(tmp_path):
    src = write_tree(tmp_path, {"a.json": function("f", ("g_S", "00500000", "SUnknown"),
                                                   ("g_T", "00500100", "int"))})
    dr.generate_globals_gap_report(src, str(tmp_path))
    text = (tmp_path / "globals_gap_analysis.txt").read_text()
    assert "ALL EXACT GAPS" not in text and "OVERLAPS (" not in text and "Gaps found:                  1" in text


def test_no_gap_report_without_two_named_globals(tmp_path):
    src = write_tree(tmp_path, {"a.json": function("f", ("g_S", "00500000", "int"))})
    assert dr.generate_globals_gap_report(src, str(tmp_path)) is None
    assert not (tmp_path / "globals_gap_analysis.txt").exists()


def test_a_directory_named_like_a_source_file_is_skipped(tmp_path):
    src = write_tree(tmp_path, {"drender.cpp/f.cpp": "x\n"})
    assert [path.rsplit("/", 2)[-2:] for path, _ in dr._source_files(src, "*.cpp")] == [["drender.cpp", "f.cpp"]]
