# Imports
import json
import os

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import analysis as an


SAFE = {"type": "decompiler_intrinsic", "match": "ROUND", "text": "ROUND(x)", "line": 3}


def suspect(stype = "register_param", match = "in_ECX", line = 5, text = "x = in_ECX;"):
    return {"type": stype, "match": match, "line": line, "text": text}


def fn(name, vfile = "core/a.cpp", suspects = (), lines = 10, score = 1, address = "00401000", **extra):
    """A function record the way load_function_data hands it to the reports."""
    suspects = list(suspects)
    data = {
        "function": {"name": name, "address": address, "signature": f"void __cdecl {name}(void)"},
        "_virtual_file": vfile,
        "suspects": suspects,
        "complexity": {"suspect_count": len(suspects), "pseudocode_lines": lines, "complexity_score": score,
                       "suspect_types": sorted(set(s["type"] for s in suspects))},
    }
    data.update(extra)
    return data


def read(path):
    """A file's text; the `logs` fixture comes from conftest.py."""
    with open(path, encoding = "utf-8") as f:
        return f.read()


# --- helpers -----------------------------------------------------------------------

def test_a_report_that_cannot_be_written_is_logged_not_raised(tmp_path, logs):
    an._write_report(str(tmp_path / "missing" / "r.txt"), "x", "thing report")
    assert len(logs) == 1 and logs[0].startswith("Failed to write thing report: ")


def test_a_written_report_logs_its_path_and_detail(tmp_path, logs):
    an._write_report(str(tmp_path / "r.txt"), "body", "thing report", " (3 items)")
    assert read(tmp_path / "r.txt") == "body" and logs == [f"Wrote thing report: {tmp_path / 'r.txt'} (3 items)"]


@pytest.mark.parametrize("path, expected", [
    ("/a/pseudocode/src/core", "/a/pseudocode"),
    ("/a/pseudocode", "/a/pseudocode"),
    # An absolute path without one used to spin forever at '/'
    ("/a/b/src", None),
    ("a/b", None),
    ("", None),
])
def test_the_pseudocode_base_is_found_or_absent(path, expected):
    assert an._pseudocode_base(path) == expected


def test_numbers_get_thousands_separators():
    assert an.fmt_num(1234567) == "1,234,567"


@pytest.mark.parametrize("vfile, expected", [("crt/stdio.c", True), ("entry", True), ("core/crtx.cpp", False)])
def test_crt_and_entry_are_out_of_scope(vfile, expected):
    assert an._is_crt_or_entry(vfile) is expected


@pytest.mark.parametrize("record, expected", [
    (fn("f"), True),
    (fn("f", suspects = [SAFE]), True),
    (fn("f", suspects = [suspect()]), False),
])
def test_a_function_is_clean_with_no_suspects_or_only_safe_ones(record, expected):
    assert an._is_effectively_clean(record) is expected


# --- SVG charts ----------------------------------------------------------------------

@pytest.mark.parametrize("data", [[], [("a", 0), ("b", 0)]])
def test_an_empty_pie_is_not_drawn(tmp_path, data):
    an.create_pie_chart_svg(data, "T", "p.svg", str(tmp_path))
    assert not (tmp_path / "p.svg").exists()


def test_a_pie_draws_each_nonzero_slice_and_a_legend_of_nine(tmp_path, logs):
    data = [("big", 60), ("none", 0), ("a_very_long_label_here", 30)] + [(f"s{i}", 1) for i in range(10)]
    an.create_pie_chart_svg(data, "Title", "p.svg", str(tmp_path))
    svg = read(tmp_path / "p.svg")
    # The 60% slice spans more than half the circle
    assert svg.count("<path") == 12 and " 0 1,1 " in svg and "a_very_long_lab...</text>" in svg
    assert "none" not in svg and svg.count('class="label"') == 8 and logs[0].startswith("Wrote SVG pie chart")


def test_a_single_slice_is_a_whole_circle(tmp_path):
    an.create_pie_chart_svg([("all", 5)], "T", "p.svg", str(tmp_path), colors = ["#123456"])
    svg = read(tmp_path / "p.svg")
    assert '<circle cx="180" cy="180" r="140" fill="#123456"' in svg and "<path" not in svg


def test_no_functions_draw_no_progress(tmp_path):
    an.create_overall_progress_svg([], {}, str(tmp_path / "o.svg"))
    assert not (tmp_path / "o.svg").exists()


def test_progress_counts_only_the_functions_in_scope(tmp_path):
    functions = [fn("a"), fn("b", suspects = [suspect()]), fn("c"), fn("crt", vfile = "crt/x.c")]
    # The compile results hold the CRT function too; it used to push "Compiles" past 100%
    results = {"a": {"success": True}, "b": {"success": True}, "crt": {"success": True}, "c": {"success": False}}
    an.create_overall_progress_svg(functions, results, str(tmp_path / "o.svg"))
    svg = read(tmp_path / "o.svg")
    assert "33.3% (1/3)" in svg and "66.7%</text>" in svg
    assert "3 functions total | 2 clean | 2 compile | 1 fully complete" in svg


def test_progress_with_nothing_done_draws_only_the_backgrounds(tmp_path):
    an.create_overall_progress_svg([fn("a", suspects = [suspect()])], None, str(tmp_path / "o.svg"))
    svg = read(tmp_path / "o.svg")
    assert svg.count("<rect") == 4 and "0.0% (0/1)" in svg


def test_no_files_draw_no_decompilation_chart(tmp_path):
    an.create_all_files_decompilation_svg({}, str(tmp_path / "d.svg"))
    assert not (tmp_path / "d.svg").exists()


def test_the_decompilation_chart_stacks_clean_on_suspect(tmp_path):
    files = {
        "core/" + "x" * 50: {"total_count": 4, "clean_count": 1, "clean_percent": 25.0},
        "core/clean.cpp": {"total_count": 2, "clean_count": 2, "clean_percent": 100.0},
        "core/dirty.cpp": {"total_count": 2, "clean_count": 0, "clean_percent": 0.0},
        "core/empty.cpp": {"total_count": 0, "clean_count": 0, "clean_percent": 0.0},
        "crt/stdio.c": {"total_count": 9, "clean_count": 0, "clean_percent": 0.0},
    }
    an.create_all_files_decompilation_svg(files, str(tmp_path / "d.svg"))
    svg = read(tmp_path / "d.svg")
    assert "(All 4 Files)" in svg and "crt/" not in svg and ">..." + "x" * 39 + "</text>" in svg
    assert "4 files | 3/8 functions clean (37.5%)" in svg and "1/4 (25%)" in svg


def test_no_results_draw_no_compilation_chart(tmp_path):
    an.create_all_files_compilation_svg({}, str(tmp_path), str(tmp_path / "c.svg"))
    an.create_all_files_compilation_svg({"f": {"cpp_path": str(tmp_path / "crt" / "a.c" / "f.c")}}, str(tmp_path),
                                        str(tmp_path / "c.svg"))
    assert not (tmp_path / "c.svg").exists()


def test_the_compilation_chart_groups_results_by_unit(tmp_path):
    src = str(tmp_path)
    long_unit = "core/" + "y" * 50
    results = {
        "a": {"cpp_path": os.path.join(src, "core/a.cpp/a.cpp"), "success": True},
        "b": {"cpp_path": os.path.join(src, "core/a.cpp/b.cpp"), "success": False},
        "c": {"cpp_path": os.path.join(src, long_unit, "c.cpp"), "success": True},
        "d": {"cpp_path": os.path.join(src, "core/d.cpp/d.cpp"), "success": False},
        "nopath": {"success": True},
    }
    an.create_all_files_compilation_svg(results, src, str(tmp_path / "c.svg"))
    svg = read(tmp_path / "c.svg")
    assert "(All 3 Files)" in svg and "3 files | 2/4 functions compile (50.0%)" in svg
    assert ">..." + "y" * 39 + "</text>" in svg and "1/2 (50%)" in svg


def test_a_unit_relpath_cannot_reach_falls_back_to_its_directory(tmp_path, monkeypatch):
    def different_drive(path, start):
        raise ValueError("path is on mount 'C:', start on mount 'D:'")
    monkeypatch.setattr(an.os.path, "relpath", different_drive)
    an.create_all_files_compilation_svg({"a": {"cpp_path": "/x/core/a.cpp/a.cpp", "success": True}}, "/src",
                                        str(tmp_path / "c.svg"))
    assert "/x/core/a.cpp</text>" in read(tmp_path / "c.svg")


def test_no_compile_results_draw_no_overview(tmp_path):
    an.create_compilation_overview_svg({"f": {"cpp_path": "src/entry/f.cpp"}}, str(tmp_path / "v.svg"))
    assert not (tmp_path / "v.svg").exists()


def test_the_overview_shows_the_split_and_the_top_error_categories(tmp_path):
    results = {"ok": {"cpp_path": "core/a.cpp/ok.cpp", "success": True},
               "crt": {"cpp_path": "src\\crt\\x.c\\crt.c", "success": False, "errors": [{"category": "skip_me"}]}}
    for i in range(9):
        results[f"bad{i}"] = {"cpp_path": "core/b.cpp/bad.cpp", "success": False,
                              "errors": [{"category": f"cat_{i}"}] * (20 - 2 * i) + [{}]}
    an.create_compilation_overview_svg(results, str(tmp_path / "v.svg"))
    svg = read(tmp_path / "v.svg")
    # Eight categories: cat_7 (6) and cat_8 (4) lose to "other" (9)
    assert "skip_me" not in svg and "Cat 7" not in svg and svg.count("<path") == 2
    # A long bar holds its label; a short one puts it beside the bar
    assert 'class="bar-label">Cat 0<' in svg and 'class="bar-label">Other<' in svg
    assert 'class="bar-label-dark">Cat 6<' in svg
    assert "Successful: 1 (10.0%)" in svg and "10 functions total | 1 successful | 10.0% success rate" in svg


def test_an_all_success_overview_is_a_whole_circle_with_no_bars(tmp_path):
    an.create_compilation_overview_svg({"ok": {"cpp_path": "core/a.cpp/ok.cpp", "success": True}}, str(tmp_path / "v.svg"))
    svg = read(tmp_path / "v.svg")
    assert "<circle" in svg and "Error Categories" not in svg and "Failed:" not in svg


def test_the_graphs_cover_progress_completion_suspects_and_files(tmp_path):
    functions = [fn("a", compilation_status = {"success": True}), fn("b", suspects = [suspect()]),
                 fn("c", vfile = "crt/x.c", suspects = [suspect("crt_only")], compilation_status = {"skipped": True})]
    files = an.analyze_by_virtual_file(functions)
    an.generate_graphs(functions, files, str(tmp_path))
    assert sorted(os.listdir(tmp_path)) == ["all_files_decompilation.svg", "completion_pie.svg", "overall_progress.svg",
                                            "suspect_breakdown.svg"]
    assert "crt_only" not in read(tmp_path / "suspect_breakdown.svg")
    assert "(2 total)" in read(tmp_path / "completion_pie.svg")


def test_clean_functions_draw_no_suspect_chart(tmp_path):
    an.generate_graphs([fn("a")], an.analyze_by_virtual_file([fn("a")]), str(tmp_path))
    assert not (tmp_path / "suspect_breakdown.svg").exists()


# --- loading --------------------------------------------------------------------------

def write_function(folder, name, address, sources = (".cpp",), text = None):
    os.makedirs(folder, exist_ok = True)
    with open(os.path.join(folder, name + ".json"), "w", encoding = "utf-8") as f:
        f.write(text if text is not None else json.dumps({"function": {"name": name, "address": address}}))
    for ext in sources:
        with open(os.path.join(folder, name + ext), "w", encoding = "utf-8"):
            pass


def test_functions_load_with_their_unit_and_the_source_the_build_uses(tmp_path, logs):
    pseudo = tmp_path / "pseudocode"
    unit = str(pseudo / "src" / "core" / "a.cpp")
    write_function(unit, "keep", "3", (".keep.cpp", ".cpp"))
    write_function(unit, "keepc", "2", (".keep.c", ".c"))
    write_function(unit, "plain", "1")
    write_function(unit, "cfile", "5", (".c",))
    write_function(unit, "none", "4", ())
    write_function(unit, "broken", "9", text = "{")
    with open(os.path.join(unit, "notes.txt"), "w", encoding = "utf-8"):
        pass
    # Handed the pseudocode dir, the unit still drops its src/ prefix
    functions = an.load_function_data(str(pseudo))
    assert [f["function"]["name"] for f in functions] == ["plain", "keepc", "keep", "none", "cfile"]
    assert set(f["_virtual_file"] for f in functions) == {os.path.join("core", "a.cpp")}
    paths = {f["function"]["name"]: os.path.basename(f["_cpp_path"]) for f in functions}
    assert paths == {"keep": "keep.keep.cpp", "keepc": "keepc.keep.c", "plain": "plain.cpp", "cfile": "cfile.c",
                     "none": "none.cpp"}
    assert functions[0]["_asm_path"] == os.path.join(unit, "plain.asm")
    assert len(logs) == 1 and logs[0].startswith("Warning: Failed to load")


def test_only_the_extension_becomes_asm(tmp_path):
    # The whole path went through replace('.json', '.asm')
    unit = str(tmp_path / "src" / "notes.json.d")
    write_function(unit, "f", "1")
    assert an.load_function_data(str(tmp_path / "src"))[0]["_asm_path"] == os.path.join(unit, "f.asm")


def test_units_total_their_clean_and_suspect_functions():
    files = an.analyze_by_virtual_file([
        fn("a", lines = 5), fn("b", suspects = [SAFE], lines = 7),
        fn("c", suspects = [suspect(), suspect("stack_param")], lines = 1), {"function": {"name": "bare"}}])
    unit = files["core/a.cpp"]
    assert (unit["total_count"], unit["clean_count"], unit["suspect_count"], unit["total_lines"]) == (3, 2, 2, 13)
    assert dict(unit["suspect_types"]) == {"register_param": 1, "stack_param": 1}
    assert unit["remaining"] == 1 and round(unit["clean_percent"], 1) == 66.7
    assert files["unknown"]["clean_percent"] == 100.0


# --- text reports from function records ------------------------------------------------

def unit(functions):
    return an.analyze_by_virtual_file(functions)


def test_the_unit_report_sorts_units_into_completion_bands(tmp_path):
    functions = ([fn("done", vfile = "core/done.cpp")]
                 + [fn(f"n{i}", vfile = "core/ninety.cpp") for i in range(9)]
                 + [fn("bad9", vfile = "core/ninety.cpp", suspects = [suspect()])]
                 + [fn("half", vfile = "core/half.cpp"), fn("bad2", vfile = "core/half.cpp", suspects = [suspect()])]
                 + [fn("bad3", vfile = "core/low.cpp", suspects = [suspect()]),
                    fn("bad4", vfile = "core/low.cpp", suspects = [suspect()]), fn("low_ok", vfile = "core/low.cpp"),
                    fn("crt", vfile = "crt/a.c")])
    text = an.generate_virtual_file_report(unit(functions), str(tmp_path))
    assert "Total virtual files: 4" in text and "Clean functions: 12 (75.0%)" in text
    assert "  core/done.cpp: 1 functions, 10 lines" in text
    assert "   90.0% | core/ninety.cpp" in text and "           - bad9 (10 lines) [register_param]" in text
    assert "   50.0% | core/half.cpp" in text and "           - bad2 (10 lines)" in text
    assert "   33.3% | core/low.cpp" in text and "           - bad3 (10 lines)" in text and "low_ok" not in text
    assert "crt/a.c" not in text and read(tmp_path / "virtual_file_completion.txt") == text


def test_an_empty_unit_report_still_has_its_sections(tmp_path):
    text = an.generate_virtual_file_report({}, str(tmp_path))
    assert "Clean functions: 0 (0.0%)" in text and text.count("Total: 0 files") == 4


def test_the_breakdown_groups_one_suspect_functions_by_type(tmp_path):
    functions = [fn("clean"), fn("one", suspects = [suspect(text = "y" * 80)], lines = 30),
                 fn("one_b", suspects = [suspect()], lines = 3), fn("odd", lines = 1),
                 fn("two", suspects = [suspect(), suspect("stack_param")]),
                 fn("crt", vfile = "crt/a.c", suspects = [suspect()])]
    # A count of one with no suspect listed has no type to file it under
    functions[3]["complexity"]["suspect_count"] = 1
    text = an.generate_function_breakdown(functions, str(tmp_path))
    assert "  0 suspects: 1 functions" in text and "  1 suspects: 3 functions" in text
    assert "  [register_param] (2 functions)" in text and text.index("one_b") < text.index("one ")
    assert "      " + "y" * 60 + "..." in text and "odd" not in text
    assert "    File: core/a.cpp, Lines: 10, Types: ['register_param', 'stack_param']" in text and "crt" not in text


def test_the_suspect_type_analysis_counts_patterns_and_functions(tmp_path):
    functions = [fn("a", suspects = [suspect(), suspect()]), fn("b", suspects = [suspect(match = "in_EDX")]),
                 fn("c", suspects = [suspect("stack_param", "in_stack_4")]), fn("crt", vfile = "crt/x.c", suspects = [suspect()]),
                 {"function": {}, "suspects": [{}]}]
    text = an.generate_suspect_type_analysis(functions, str(tmp_path))
    assert "  register_param                     3 ( 60.0%)" in text and "  unknown" in text
    assert "     2x  in_ECX" in text and "TYPE: stack_param (1 occurrences)" in text
    assert text.index("TYPE: register_param") < text.index("TYPE: stack_param")


def test_easy_wins_list_each_function_once_by_priority(tmp_path):
    almost = [fn("a1", vfile = "core/almost.cpp", suspects = [suspect()]), fn("a2", vfile = "core/almost.cpp")]
    ninety = [fn(f"n{i}", vfile = "core/ninety.cpp") for i in range(19)] + [
        fn("n_bad", vfile = "core/ninety.cpp", suspects = [suspect()], lines = 80)]
    many = [fn(f"m{i}", vfile = "core/many.cpp", suspects = [suspect(), suspect()]) for i in range(4)]
    # A count of one with no suspect listed counts as clean, so it is no win to list
    blank = fn("blank", vfile = "core/many.cpp", lines = 2)
    blank["complexity"]["suspect_count"] = 1
    functions = almost + ninety + many + [blank, fn("crt", vfile = "crt/x.c", suspects = [suspect()])]
    files = unit(functions)
    text = an.generate_easy_wins_list(functions, files, str(tmp_path))
    assert "  core/almost.cpp (1 remaining of 2)" in text and "      Suspects: register_param" in text
    assert "  [register_param] - 1 functions" in text and "a1" in text.split("PRIORITY 3", maxsplit = 1)[0]
    assert "  core/ninety.cpp (95.0% complete)" in text and "      n_bad (80 lines)" in text
    remaining = text.split("ALL REMAINING FILES")[1]
    assert "core/many.cpp" in remaining and "almost" not in remaining and "ninety" not in remaining
    assert "crt" not in text


def test_no_stack_patterns_is_said(tmp_path):
    text = an.generate_stack_pattern_report([fn("a"), fn("b", stack_patterns = {"patterns": []})], str(tmp_path))
    assert "No functions with stack manipulation patterns detected." in text


def test_stack_patterns_list_by_severity_and_correlate_with_suspects(tmp_path):
    def patterned(name, severity, n = 1):
        return fn(name, suspects = [suspect()] * n, stack_patterns = {
            "severity": severity, "note": "push before call",
            "patterns": [{"pattern_id": "PUSH_ESP", "address": "00401000", "instruction": "PUSH ESP"}, {}]})
    functions = ([patterned("hi", "high", 3), patterned("odd", "unknown")]
                 + [patterned(f"med{i:02d}", "medium") for i in range(52)] + [patterned("lo", "low"), fn("plain")])
    text = an.generate_stack_pattern_report(functions, str(tmp_path))
    assert "Functions with stack patterns: 55 / 56" in text and "  PUSH_ESP                          55" in text
    assert "    Note: push before call" in text and "    - [PUSH_ESP] at 00401000: PUSH ESP" in text
    assert "  med49" in text and "  med50" not in text and "  ... and 2 more functions" in text
    assert "avg 1.0 suspects/function" in text and "avg 0.0 suspects/function" in text


def test_no_high_or_medium_stack_patterns_leave_those_sections_out(tmp_path):
    text = an.generate_stack_pattern_report([fn("lo", stack_patterns = {"severity": "low", "patterns": [{}]})], str(tmp_path))
    assert "HIGH SEVERITY" not in text and "MEDIUM SEVERITY" not in text and "Without stack patterns: avg 0.0" in text


def test_a_few_medium_stack_patterns_are_all_listed(tmp_path):
    text = an.generate_stack_pattern_report(
        [fn(f"m{i}", stack_patterns = {"severity": "medium", "patterns": [{}]}) for i in range(3)], str(tmp_path))
    assert "  m2\n" in text and "more functions" not in text


def estimate(declared, estimated, confidence = "high", sites = None, **extra):
    data = {"declared_params": declared, "estimated_params": estimated, "confidence": confidence,
            "call_site_count": len(sites) if sites is not None else 3, "call_sites": sites or []}
    data.update(extra)
    return data


def test_param_mismatches_are_sorted_by_confidence_and_size(tmp_path):
    site = {"caller": "c" * 40, "call_addr": "00402000", "reg_params": ["ECX"], "stack_params": 2, "stack_bytes": 8}
    functions = [
        fn("none"),
        fn("lonely", param_estimates = estimate(1, 2, sites = [])),
        fn("same", param_estimates = estimate(2, 2)),
        # A double takes two slots: 1 declared param, 2 estimated, the same 8 bytes
        fn("double", param_estimates = estimate(1, 2, sites = [{"stack_bytes": 8}], declared_stack_bytes = 8)),
        fn("big", param_estimates = estimate(1, 4, sites = [site, site, {"stack_bytes": 12}, {}])),
        fn("small", param_estimates = estimate(3, 1, sites = [{"reg_params": []}])),
        fn("odd", param_estimates = estimate(1, 2, confidence = "weird")),
    ] + [fn(f"med{i:02d}", param_estimates = estimate(1, 3, "medium")) for i in range(52)] + [
        fn(f"lo{i:02d}", param_estimates = estimate(2, 1, "low")) for i in range(11)]
    text = an.generate_param_mismatch_report(functions, str(tmp_path))
    assert "Functions with parameter estimates: 69" in text and "Functions with no callers: 1" in text
    assert "Parameter mismatches detected: 66" in text and "Signature accuracy rate: 2.9%" in text
    assert text.index("  big") < text.index("  small")
    assert "    Declared: 1 params (4 bytes), Estimated: 4 stack slots (8 bytes) [+3]" in text
    assert f"      {'c' * 30} at 00402000: 1 reg [ECX], 2 stack (8 bytes, via push_count)" in text
    assert "    Declared: 3 params (12 bytes), Estimated: 1 stack slots (4 bytes) [-2]" in text
    assert "  ... and 2 more" in text and "  12 functions with low-confidence mismatches" in text
    assert "lo09" not in text and "  +2 params: 52 functions" in text and "  -1 params: 11 functions" in text
    assert "Functions where declaration has MORE params than estimated: 12" in text


def test_a_mismatch_without_recorded_call_sites_shows_none(tmp_path):
    text = an.generate_param_mismatch_report([fn("high", param_estimates = estimate(1, 3)),
                                              fn("med", param_estimates = estimate(1, 2, "medium"))], str(tmp_path))
    assert "    Signature: void __cdecl high(void)\n\n" in text and "Sample call sites" not in text
    assert "  med " in text and "more" not in text


def test_param_estimates_with_only_uncalled_functions_have_no_accuracy(tmp_path):
    text = an.generate_param_mismatch_report([fn("lonely", param_estimates = estimate(1, 1, sites = []))], str(tmp_path))
    assert "Signature accuracy rate: 0.0%" in text and "HIGH CONFIDENCE" not in text


def test_no_param_estimates_leave_out_the_accuracy_rate(tmp_path):
    assert "accuracy rate" not in an.generate_param_mismatch_report([fn("a")], str(tmp_path))


COMPILE_REPORTS = [
    (an.generate_compilation_summary_report, "compilation_summary.txt"),
    (an.generate_compilation_detailed_report, "compilation_detailed.txt"),
    (an.generate_compilation_by_function_report, "compilation_by_function.txt"),
]


@pytest.mark.parametrize("report, filename", COMPILE_REPORTS)
def test_a_compile_report_without_compile_data_says_so(tmp_path, report, filename):
    text = report([fn("a")], str(tmp_path))
    assert "No compilation status data available." in text and read(tmp_path / filename) == text


def failing(name, errors):
    return fn(name, suspects = [suspect()], compilation_status = {"success": False, "errors": errors})


def compile_functions():
    return ([fn("ok", compilation_status = {"success": True}), fn("ok_sus", suspects = [suspect()],
                                                                    compilation_status = {"success": True}),
             failing("bad_one", [{"category": "syntax", "message": "expected ';'", "line": 4}]),
             failing("bad_two", [{"category": "syntax", "message": "", "line": 9},
                                 {"category": "syntax", "message": "again", "line": 2}, {"message": "m" * 90}]),
             failing("bad_none", [])]
            + [failing(f"many{i:02d}", [{"category": "types", "message": f"unknown type {i}", "line": i}])
               for i in range(31)])


def test_the_compile_summary_groups_errors_and_dedups_each_function(tmp_path):
    text = an.generate_compilation_summary_report(compile_functions(), str(tmp_path))
    assert "Total functions compiled: 36" in text and "Successful: 2 (5.6%)" in text and "Failed: 34" in text
    assert "  types                             31" in text and "CATEGORY: syntax (3 errors)" in text
    assert "  bad_two\n  bad_one\n    Line 4: expected ';'..." in text
    assert "    Line 0: " + "m" * 80 + "..." in text and "  ... and 1 more errors" in text
    assert "Average suspects in successfully compiled functions: 0.50" in text
    assert "Average suspects in failed compilations: 1.00" in text
    assert "Functions that compile but have suspect patterns: 1" in text


def test_a_compile_summary_with_every_function_passing_has_no_categories(tmp_path):
    text = an.generate_compilation_summary_report([fn("ok", compilation_status = {"success": True})], str(tmp_path))
    assert "ERROR CATEGORIES" not in text and "failed compilations" not in text


def test_a_compile_summary_with_every_function_failing_has_no_success_average(tmp_path):
    text = an.generate_compilation_summary_report([failing("bad", [])], str(tmp_path))
    assert "successfully compiled functions" not in text and "ERROR CATEGORIES" not in text


def test_the_detailed_compile_report_keeps_every_function(tmp_path):
    text = an.generate_compilation_detailed_report(compile_functions(), str(tmp_path))
    assert "    Line 30: unknown type 30" in text and "    Line 0: " + "m" * 90 in text
    assert "  bad_two\n  bad_one" in text and "more errors" not in text


def test_the_detailed_compile_report_without_errors_has_no_categories(tmp_path):
    text = an.generate_compilation_detailed_report([fn("ok", compilation_status = {"success": True})], str(tmp_path))
    assert "ERROR CATEGORIES" not in text and "Successful: 1 (100.0%)" in text


def test_the_by_function_compile_report_lists_errors_by_line(tmp_path):
    text = an.generate_compilation_by_function_report(compile_functions(), str(tmp_path))
    assert "bad_one (1 error)\n" in text and "bad_two (3 errors)" in text and "bad_none" not in text
    assert text.index("  Line 0 [other]") < text.index("  Line 2 [syntax]: again") < text.index("  Line 9 [syntax]: ")


def test_suspects_by_function_list_every_suspect_by_line(tmp_path):
    functions = [fn("b", suspects = [suspect(line = 9, text = "  later  "), suspect("stack_param", line = 2)]),
                 fn("a", vfile = ""), fn("clean"), fn("crt", vfile = "crt/x.c", suspects = [suspect()])]
    functions[1]["suspects"] = [{}]
    text = an.generate_suspect_by_function_report(functions, str(tmp_path))
    assert "Total functions analyzed: 3" in text and "Clean: 1 (33.3%)" in text and "Total suspects: 3" in text
    assert "a (1 suspect)\n====" in text and "b (2 suspects)\n  File: core/a.cpp" in text
    assert text.index("  Line 2 [stack_param]") < text.index("  Line 9 [register_param]: later")


def test_suspects_by_function_with_no_functions_is_empty(tmp_path):
    assert "Clean: 0 (0.0%)" in an.generate_suspect_by_function_report([], str(tmp_path))


def test_the_csvs_hold_one_row_per_unit_and_function(tmp_path):
    functions = [fn("a", suspects = [suspect()]), fn("b", vfile = "core/b.cpp")]
    an.generate_csv_data(functions, unit(functions), str(tmp_path))
    assert read(tmp_path / "virtual_files.csv").splitlines() == [
        "virtual_file,total_functions,clean_functions,remaining,clean_percent,total_lines,total_suspects",
        "core/a.cpp,1,0,1,0.0,10,1", "core/b.cpp,1,1,0,100.0,10,0"]
    with open(tmp_path / "functions.csv", newline = "", encoding = "utf-8") as f:
        assert f.read().split("\r\n")[1] == "a,00401000,core/a.cpp,10,1,register_param,1"


def test_the_summary_skips_a_program_with_only_crt(tmp_path, logs):
    an.generate_summary_report([fn("crt", vfile = "crt/x.c")], {}, str(tmp_path))
    assert logs == ["No function data found for report"] and not os.listdir(tmp_path)


def summary_functions(root):
    functions = [fn(f"clean{i:02d}", lines = i, score = i, _cpp_path = os.path.join(root, "src", f"c{i:02d}.cpp"))
                 for i in range(52)]
    functions += [fn(f"sus{i:02d}", suspects = [suspect()], score = 100 + i, address = f"0050{i:04d}",
                     _cpp_path = "/elsewhere/s.cpp", compilation_status = {"success": i % 2 == 0}) for i in range(12)]
    functions[-1]["suspects"].append(suspect("stack_param"))
    functions[-1]["complexity"]["suspect_types"].append("stack_param")
    return functions


def test_the_summary_reports_totals_and_relative_file_lists(tmp_path):
    repo = tmp_path / "repo"
    (repo / ".git").mkdir(parents = True)
    out = repo / "annotations" / "reports"
    out.mkdir(parents = True)
    functions = summary_functions(str(repo))
    an.generate_summary_report(functions + [fn("crt", vfile = "crt/x.c")], unit(functions), str(out))
    text = read(out / "analysis_report.txt")
    assert "Total functions: 64" in text and "Clean functions: 52 (81.2%)" in text
    assert "Functions compiled: 12" in text and "Successful: 6 (50.0%)" in text
    assert "  Min: 0, Max: 51, Average: 22.6" in text and "  ... and 2 more" in text
    assert text.index("score: 111") < text.index("score: 110") and "  register_param (12 functions):" in text
    assert "    ... and 2 more" in text and "  stack_param (1 functions):\n    00500011: sus11" in text
    listed = read(out / "zero_suspect_functions.txt").splitlines()
    assert listed[0] == os.path.join("src", "c00.cpp") and len(listed) == 52
    assert read(out / "functions_by_complexity.txt").splitlines()[-1] == "/elsewhere/s.cpp"


def test_the_summary_without_a_repo_keeps_paths_under_the_reports(tmp_path):
    functions = [fn("a", _cpp_path = str(tmp_path / "x.cpp")), fn("b")]
    an.generate_summary_report(functions, unit(functions), str(tmp_path))
    text = read(tmp_path / "analysis_report.txt")
    assert "COMPILATION STATUS" not in text and read(tmp_path / "zero_suspect_functions.txt") == "x.cpp\n\n"


def test_the_summary_from_a_relative_reports_dir_stops_at_the_top(tmp_path, monkeypatch):
    monkeypatch.chdir(tmp_path)
    os.makedirs("reports")
    an.generate_summary_report([fn("a", _cpp_path = "reports/a.cpp")], {}, "reports")
    assert read(tmp_path / "reports" / "zero_suspect_functions.txt") == "a.cpp\n"


def test_pass_by_value_sites_come_from_each_readable_listing(tmp_path, monkeypatch):
    from ghidra_annotations.annotations.pseudocode import pass_by_value as pbv
    good, bad = tmp_path / "good.asm", tmp_path / "bad.asm"
    good.write_text("x")
    bad.write_text("x")

    def analyze(path):
        if path == str(bad):
            raise ValueError("unreadable")
        return (["site"], 3, 1)
    seen = []
    monkeypatch.setattr(pbv, "analyze_single_file", analyze)
    monkeypatch.setattr(pbv, "format_report", lambda sites, movsd, count: seen.append((sites, movsd, count)) or "R")
    functions = [fn("a", _asm_path = str(good)), fn("b", _asm_path = str(bad)), fn("c", _asm_path = str(tmp_path / "no.asm")),
                 fn("d")]
    assert an.generate_pass_by_value_report(functions, str(tmp_path)) == "R"
    assert seen == [(["site"], 3, 1)] and read(tmp_path / "pass_by_value_report.txt") == "R"


# --- double usage ------------------------------------------------------------------------

def test_double_usage_lists_returns_and_params(tmp_path):
    split = {"type": "sub84_truncation", "match": "SUB84(x,0)"}
    functions = [
        fn("ret", suspects = [split, {"type": "decompiler_intrinsic", "match": "CONCAT44(a,b)"}, suspect()]),
        fn("param", stack_frame = {"variables": [{"is_param": True, "type": "double", "name": "dist"},
                                                 {"is_param": False, "type": "double"}]}),
        fn("sig_only"), fn("pointer"), fn("plain"), fn("crt", vfile = "crt/math.c"),
    ]
    functions[0]["function"]["signature"] = "double __cdecl ret(void)"
    functions[2]["function"]["signature"] = "void __cdecl sig_only(long double x)"
    # A double * is a pointer: it used to be listed as a double parameter
    functions[3]["function"]["signature"] = "void __cdecl pointer(double *max_dimensions)"
    functions[4]["function"]["signature"] = "void plain"
    functions[5]["function"]["signature"] = "double __cdecl crt(double x)"
    text = an.generate_double_usage_report(functions, str(tmp_path))
    assert "Functions returning double:         1" in text and "Functions with double parameter(s): 2" in text
    assert "    Address: 00401000  File: core/a.cpp [2 double-related suspects]" in text
    assert "    Double params: dist" in text and "    Double params: (from signature)" in text
    assert "pointer" not in text and "crt" not in text


def test_no_double_usage_is_none_in_both_sections(tmp_path):
    assert an.generate_double_usage_report([], str(tmp_path)).count("  (none)") == 2


# --- static analysis reports ---------------------------------------------------------------

@pytest.mark.parametrize("key, base, display", [
    ("clang_analyzer_quick", "clang_analyzer", "Clang Static Analyzer (quick)"),
    ("cppcheck", "cppcheck", "Cppcheck"),
    ("clang_tidy_deep", "clang_tidy", "Clang-Tidy (deep)"),
    ("pvs", "pvs", "pvs"),
])
def test_tool_keys_name_their_tool_and_mode(key, base, display):
    assert an._get_tool_base(key) == base and an._get_tool_display_name(key) == display


@pytest.mark.parametrize("tool, diag, expected", [
    ("clang_analyzer_quick", {"checker": "core.X"}, "core.X"),
    ("cppcheck_deep", {"check_id": "nullPointer"}, "nullPointer"),
    ("clang_tidy", {"check_name": "cert-x"}, "cert-x"),
    ("clang_tidy", {}, "unknown"),
    ("pvs", {"checker": "V1"}, "unknown"),
])
def test_each_tool_files_a_finding_under_its_own_check_field(tool, diag, expected):
    assert an._get_tool_check_id(tool, diag) == expected


def test_tool_keys_leave_out_the_file_fields():
    assert an._get_all_tool_keys({"analyzed_file": "f", "file_variant": "keep", "cppcheck_quick": {}}) == ["cppcheck_quick"]


def analyzed(name, variant = "keep", **tools):
    return fn(name, static_analysis = dict({"analyzed_file": name + ".cpp", "file_variant": variant}, **tools))


def static_functions():
    many = [{"checker": "core.Null", "line": i, "message": f"null {i}"} for i in range(16)]
    return [
        fn("none"),
        analyzed("both", clang_analyzer_quick = {"diagnostics": many + [{"checker": "deadcode.X", "line": 1, "message": "dead"}]},
                 cppcheck_quick = {"diagnostics": [{"check_id": "invalidscanf", "line": 3, "message": "scanf"}]}),
        analyzed("raw", variant = "raw", clang_analyzer_quick = {"diagnostics": [{"checker": "core.Null", "line": 2,
                                                                               "message": "x"}], "error": None}),
        analyzed("broken", clang_analyzer_quick = {"diagnostics": [], "error": "Does not compile"},
                 cppcheck_quick = None),
        analyzed("tidy", variant = "raw", clang_tidy_quick = {"diagnostics": []}),
    ]


def test_the_static_summary_counts_files_findings_and_artifacts(tmp_path):
    an.generate_static_analysis_summary_report(static_functions(), str(tmp_path))
    text = read(tmp_path / "static_analysis_summary.txt")
    assert "  Functions with static analysis data: 4" in text and "Functions flagged by multiple tools: 1" in text
    clang = text.split("  Clang Static Analyzer (quick):")[1]
    assert clang.startswith("\n    Files analyzed:      3\n    Files with findings: 2\n    Total diagnostics:   18\n    Tool errors:         1")
    assert "core.Null" in text and "[likely decompiler artifact]" in text and "TOP FINDINGS - Clang-Tidy" not in text


def test_a_static_summary_with_no_results_says_so(tmp_path):
    an.generate_static_analysis_summary_report([fn("a"), analyzed("b", cppcheck_quick = {})], str(tmp_path))
    assert "No static analysis results found." in read(tmp_path / "static_analysis_summary.txt")


def test_the_detailed_static_report_groups_findings_by_tool_and_check(tmp_path):
    an.generate_static_analysis_detailed_report(static_functions(), str(tmp_path))
    text = read(tmp_path / "static_analysis_detailed.txt")
    assert "Clang Static Analyzer (quick) (18 diagnostics)" in text and "core.Null (17)" in text
    assert "Cppcheck (quick) (1 diagnostics)" in text and "Clang-Tidy" not in text
    assert "    File: core/a.cpp\n    scanf" in text


def test_a_detailed_static_report_with_no_findings_says_so(tmp_path):
    an.generate_static_analysis_detailed_report([fn("a"), analyzed("t", clang_tidy_quick = {"diagnostics": []})], str(tmp_path))
    assert "  No static analysis results found." in read(tmp_path / "static_analysis_detailed.txt")


def test_the_by_function_static_report_puts_the_busiest_first(tmp_path):
    an.generate_static_analysis_by_function_report(static_functions(), str(tmp_path))
    text = read(tmp_path / "static_analysis_by_function.txt")
    assert "  Functions with findings: 2" in text and "  Total diagnostics: 19" in text
    assert "  .keep.cpp files: 1, raw .cpp files: 1" in text and text.index("both  [.keep]") < text.index("raw  [.cpp]")
    assert "[.keep] [Clang Static Analyzer (quick), Cppcheck (quick)]" in text
    assert text.index("  Line    1: [deadcode.X] dead") < text.index("  Line    3: [invalidscanf] scanf")


def test_a_by_function_static_report_with_no_findings_says_so(tmp_path):
    an.generate_static_analysis_by_function_report([analyzed("t", cppcheck_quick = {"diagnostics": []})], str(tmp_path))
    assert "  No static analysis findings." in read(tmp_path / "static_analysis_by_function.txt")
