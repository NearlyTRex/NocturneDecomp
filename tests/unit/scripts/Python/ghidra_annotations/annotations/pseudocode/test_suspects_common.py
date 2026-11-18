# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import _common as c


@pytest.mark.parametrize("suspect, safe", [
    ({"type": "decompiler_intrinsic", "match": "SQRT"}, True),
    ({"type": "decompiler_intrinsic", "match": "NAN"}, False),
    ({"type": "warning_inlined_function"}, True),
    ({"type": "warning_is_inlined"}, True),
    ({"type": "warning_unreachable"}, True),
    ({"type": "warning_jumptable"}, False),
    ({"type": "warning_type_propagation"}, False),
    ({"type": "warning_indirect_jump"}, False),
    ({"type": "unnamed_param"}, False),
    ({}, False),
    ({"type": "warning_noreturn", "callee": "dll_dx7_cpp_fatalError_FUN_10002340"}, True),
    ({"type": "warning_noreturn", "callee": "ExitProcess"}, True),
    ({"type": "warning_noreturn", "callee": "core_main_c_displayErrorAndQuit_FUN_00506f10"}, False),
    ({"type": "warning_noreturn", "callee": None}, False),
    ({"type": "warning_noreturn"}, False),
])
def test_safe_suspects_are_safe_intrinsics_and_benign_warnings(suspect, safe):
    assert c.is_safe_suspect(suspect) is safe


@pytest.mark.parametrize("name, exits", [
    ("ExitThread", True), ("wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920", True),
    ("fatalError_FUN_10002340", True), ("notfatalError", False), ("fatalErrorLog", False),
    ("stack_overflow_handler", False), ("", False), (None, False),
])
def test_exit_functions_match_bare_or_exported_names(name, exits):
    assert c.is_exit_function(name) is exits


def test_call_after_reads_the_next_code_line():
    lines = ["  if (x) {", "    /* WARNING: Subroutine does not return */", "", "    fatalError(\"x\");", "  }"]
    assert c.call_after(lines, 1) == "fatalError"
    assert c.call_after(["/* WARNING */", "  (*g_ExitProcessFunc)(1);"], 0) is None
    assert c.call_after(["/* WARNING */", "   "], 0) is None


def test_a_function_is_effectively_clean_with_only_safe_suspects():
    assert c.has_only_safe_suspects([])
    assert c.has_only_safe_suspects([{"type": "warning_inlined_function"},
                                     {"type": "decompiler_intrinsic", "match": "ABS"}])
    assert not c.has_only_safe_suspects([{"type": "warning_unreachable"}, {"type": "warning_jumptable"}])


def test_the_interval_map_skips_globals_without_an_address_or_size_and_sorts():
    intervals = c.build_global_interval_map([
        {"name": "b", "address": "0x2000", "size": 8, "type": "int[2]"},
        {"name": "a", "address": "1000", "size": 4, "type": "int"},
        {"name": "no_size", "address": "3000", "size": 0},
        {"name": "no_address", "size": 4},
        {"name": "bad", "address": "zz", "size": 4},
        {"name": "not_text", "address": 5, "size": 4},
    ])
    assert intervals == [(0x1000, 0x1004, "a", "int"), (0x2000, 0x2008, "b", "int[2]")]


MAP = [(0x1000, 0x1004, "a", "int"), (0x1004, 0x1008, "b", "int"), (0x2000, 0x2010, "c", "char[16]")]


def test_find_global_at_returns_the_global_holding_an_address():
    assert c._find_global_at(0x0fff, MAP) is None
    assert c._find_global_at(0x1005, MAP) == ("b", "int", 0x1004)
    assert c._find_global_at(0x1800, MAP) is None


def test_find_global_in_range_skips_the_excluded_name_and_stops_past_high():
    assert c._find_global_in_range(0x1000, 0x1004, MAP) == ("b", "int", 0x1004)
    assert c._find_global_in_range(0x1000, 0x2000, MAP, exclude_name = "b") == ("c", "char[16]", 0x2000)
    assert c._find_global_in_range(0x1000, 0x1fff, MAP, exclude_name = "b") is None
    assert c._find_global_in_range(0x2000, 0x3000, MAP) is None


def test_find_neighbor_after_returns_the_next_global():
    assert c._find_neighbor_after(0x1000, []) is None
    assert c._find_neighbor_after(0x1000, MAP) == ("b", "int", 0x1004)
    assert c._find_neighbor_after(0x2000, MAP) is None


def test_balanced_parens():
    assert c._extract_balanced_parens("(a(b)c) + d") == "(a(b)c)"
    assert c._extract_balanced_parens("(a(b") is None
    assert c._extract_balanced_parens("a(b)") is None
    assert c._extract_balanced_parens("") is None


@pytest.mark.parametrize("addr, out", [("0x00401000", "401000"), ("00ABC", "abc"), ("0x0", "0"), ("000", "0")])
def test_normalize_addr(addr, out):
    assert c._normalize_addr(addr) == out


@pytest.mark.parametrize("fmt, n", [
    ("", 0), (None, 0), ("plain", 0), ("100%%", 0), ("%d %s", 2), ("%*d", 2), ("%.*f", 2),
    ("%*.*s", 3), ("%-+ #08.3lld", 1), ("%hhx %zu %Lf", 3), ("%y", 0), ("end %", 0), ("%5", 0),
])
def test_count_format_specifiers(fmt, n):
    assert c.count_format_specifiers(fmt) == n


def test_parse_call_arguments():
    line = 'f(a, g(b, c), "x, (y", "q\\"r", d)'
    assert c._parse_call_arguments(line, 2) == ["a", "g(b, c)", '"x, (y"', '"q\\"r"', "d"]
    assert c._parse_call_arguments("f()", 2) == []
    assert c._parse_call_arguments("f(  )", 2) == []
    assert c._parse_call_arguments("f(a, (b", 2) is None
    assert c._parse_call_arguments("f(a,)", 2) == ["a"]


def test_find_format_string_index():
    assert c._find_format_string_index(["fh", '"plain"', '"%s: %d"', "x"]) == (2, "%s: %d")
    assert c._find_format_string_index(['"a" NOCTURNE_FMT_PTR "b"']) == (0, "a%08Xb")
    assert c._find_format_string_index(["x", '"no specs"']) == (None, None)
