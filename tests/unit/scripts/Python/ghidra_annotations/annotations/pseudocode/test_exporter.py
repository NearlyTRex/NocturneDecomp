# Standard library imports
import json
import os
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import exporter as e
from ghidra_annotations.annotations.pseudocode import asm_transform, chunk_transform
from ghidra_annotations.annotations.pseudocode import adjacency_sentinel_transform as adjacency


@pytest.fixture(name = "logs")
def fixture_logs(monkeypatch):
    lines = []
    monkeypatch.setattr(e, "log_info", lines.append)
    monkeypatch.setattr(e, "log_warning", lambda text: lines.append("WARN " + text))
    return lines


class Clock:
    """time.time() that advances by `step` each call."""

    def __init__(self, step = 1.0):
        self.now, self.step = 0.0, step

    def __call__(self):
        self.now += self.step
        return self.now


class Callback:
    """DecompileCallback / HighFunction: records registrations and clears."""

    def __init__(self):
        self.calls = []

    def __getattr__(self, name):
        def call(*args):
            self.calls.append((name,) + args)
            return True
        return call


# --- PhaseTimer -------------------------------------------------------------------------

def test_a_phase_runs_until_the_next_one_starts(monkeypatch):
    monkeypatch.setattr(e.time, "time", Clock())
    timer = e.PhaseTimer()
    assert timer.get_total_time() == 0.0
    timer.start_total()
    timer.start_phase("a")
    timer.start_phase("b")
    timer.end_phase()
    timer.end_phase()
    assert timer.phases == [("a", 1.0), ("b", 1.0)]


@pytest.mark.parametrize("seconds, text", [(5, "5.00s"), (125.5, "2m 5.5s"), (3725, "1h 2m 5.0s")])
def test_a_duration_reads_in_the_largest_unit(seconds, text):
    assert e.PhaseTimer().format_duration(seconds) == text


def test_the_summary_shows_each_phase_and_the_time_no_phase_covered(monkeypatch, logs):
    monkeypatch.setattr(e.time, "time", Clock())
    timer = e.PhaseTimer()
    timer.start_total()
    timer.start_phase("decompile")
    timer.end_phase()
    assert timer.log_summary() == 3.0
    assert any("decompile" in line and "33.3%" in line for line in logs)
    assert any("(overhead/untracked)" in line and "66.7%" in line for line in logs)


def test_a_summary_before_the_start_has_no_overhead(logs):
    timer = e.PhaseTimer()
    timer.phases = [("a", 0.0)]
    assert timer.log_summary() == 0.0
    assert any("a " in line and "0.0%" in line for line in logs)
    assert not any("overhead" in line for line in logs)


# --- register_pcode_overrides -----------------------------------------------------------

def test_overrides_register_from_each_function_json(tmp_path, monkeypatch, logs):
    callback, cached = Callback(), []
    monkeypatch.setattr(e, "DecompileCallback", callback)
    monkeypatch.setattr(e.pcode_overrides_cache, "set_cache", lambda path, value: cached.append((os.path.basename(path), value)))
    files = {
        "a.json": {"function": {"address": "0x401000"}, "pcode_overrides": {"0x401005": ["COPY", "INT_ADD"], "401009": ["RETURN"]}},
        "no_overrides.json": {"function": {"address": "00401000"}},
        "list_overrides.json": {"function": {"address": "00401000"}, "pcode_overrides": ["COPY"]},
        "no_address.json": {"pcode_overrides": {"00402000": ["COPY"]}},
        "bad_addr.json": {"function": {"address": "00403000"}, "pcode_overrides": {"zz": ["COPY"]}},
    }
    (tmp_path / "sub").mkdir()
    for name, data in files.items():
        (tmp_path / "sub" / name).write_text(json.dumps(data))
    (tmp_path / "broken.json").write_text("{")
    (tmp_path / "notes.txt").write_text("{}")
    assert e.register_pcode_overrides(str(tmp_path)) == 2
    assert sorted(callback.calls) == [
        ("registerPcodeOverride", 0x401000, 0x401005, ["COPY", "INT_ADD"]),
        ("registerPcodeOverride", 0x401000, 0x401009, ["RETURN"])]
    # Every file with overrides is cached for the output JSON, registered or not
    assert sorted(name for name, _ in cached) == ["a.json", "bad_addr.json", "no_address.json"]


def test_no_source_dir_has_no_overrides(tmp_path):
    assert e.register_pcode_overrides(str(tmp_path / "missing")) == 0


# --- build_prototypes_from_decompile_results --------------------------------------------

class Func:
    def __init__(self, name, addr, convention, prototype = None):
        self.name, self.addr, self.convention, self.prototype = name, addr, convention, prototype

    def getName(self):
        return self.name

    def getEntryPoint(self):
        return self.addr

    def getCallingConventionName(self):
        return self.convention

    def getPrototypeString(self, formal, include_convention):
        assert (formal, include_convention) == (True, False)
        return self.prototype


def test_prototypes_take_the_decompiled_signature_and_name_the_convention(logs):
    results = [SimpleNamespace(func_addr = "00401000", func_signature = "int core_a.cpp_f_FUN_00401000(int x)"),
               SimpleNamespace(func_addr = "00402000", func_signature = "")]
    funcs = [Func("core_a.cpp_f_FUN_00401000", "00401000", "cdecl"),
             Func("g", "00402000", "__stdcall", "void g()"),
             Func("h", "00403000", "unknown", "void __unknown h();"),
             Func("k", "00404000", None, None)]
    assert e.build_prototypes_from_decompile_results(results, funcs) == [
        {"name": "core_a.cpp_f_FUN_00401000", "c_name": "core_a_cpp_f_FUN_00401000", "address": "00401000",
         "signature": "int __cdecl core_a_cpp_f_FUN_00401000(int x)", "convention": "__cdecl"},
        {"name": "g", "c_name": "g", "address": "00402000", "signature": "void __stdcall g(void)", "convention": "__stdcall"},
        {"name": "h", "c_name": "h", "address": "00403000", "signature": "void h(void);", "convention": None},
        {"name": "k", "c_name": "k", "address": "00404000", "signature": "void k(void)", "convention": None}]
    assert logs == ["Built 4 function prototypes from decompile results"]


# --- process_python_only ----------------------------------------------------------------

OUTPUT_ARGS = ("pseudocode_src_dir", "source_filename", "func_name", "func_addr", "func_addr_range",
               "func_convention", "func_signature", "decompiled_code", "assembly_code", "func_xrefs",
               "func_globals", "func_calls", "stack_frame", "suspects", "complexity", "custom_replacements",
               "stack_patterns", "param_estimates", "vtable_info", "pcode_data", "pcode_overrides",
               "resolved_suspects", "is_ebp_frame", "proto_overrides", "decompiler_fixes")


def suspect(kind, match, **extra):
    return {"type": kind, "match": match, **extra}


class Post:
    """process_python_only's collaborators, answering from tables keyed by source text."""

    def __init__(self, monkeypatch, tmp_path):
        self.src = tmp_path / "src"
        self.src.mkdir()
        self.source = "core/a.cpp/f_FUN_00401000.cpp"
        self.content, self.cave, self.phantom, self.fyl2x, self.stale = {}, {}, {}, {}, {}
        self.asm, self.memcpy, self.memset, self.displaced, self.special = [], [], [], [], []
        self.pcode, self.pcode_resolved = [], []
        self.variadic, self.variadic_resolved = [], []
        self.align, self.align_resolved, self.call_esp, self.call_esp_resolved = [], [], [], []
        self.lea, self.param_mismatch, self.replacements, self.chunked = [], None, None, False
        self.mmx = self.byval = None
        self.virtual = "core/a.cpp"
        self.output, self.seen = None, {}
        self.contents = {"cpp_path": "x"}
        def table(name):
            return lambda code, *a, **k: [dict(s) for s in getattr(self, name).get(code, [])]

        def fixed(name):
            return lambda *a, **k: [dict(s) for s in getattr(self, name)]

        def pair(a, b):
            return lambda *x, **k: ([dict(s) for s in getattr(self, a)], [dict(s) for s in getattr(self, b)])

        patches = {
            "replace_constants_in_code": self.see("constants", lambda code, constants: code),
            "apply_all_transforms": lambda code, func_name = None: code,
            "generate_source_filename": lambda name, code: self.source,
            "apply_custom_replacements": lambda code, replacements: code + "\n// replaced",
            "summarize_stack_patterns": lambda raw: {"raw": raw},
            "detect_content_suspects": table("content"),
            "get_struct_layout_map": lambda src: {},
            "get_struct_size_map": lambda src: {},
            "get_enum_value_map": lambda src: {},
            "identify_assembly_suspects": fixed("asm"),
            "identify_missing_cave_copy": table("cave"),
            "identify_phantom_float_to_int": table("phantom"),
            "identify_dropped_fyl2x": table("fyl2x"),
            "identify_stale_enum_name": table("stale"),
            "extract_unreachable_block_addrs": lambda code: set(),
            "identify_unrolled_memset_blocks": fixed("memset"),
            "identify_unrolled_memcpy_blocks": fixed("memcpy"),
            "identify_pcode_suspects": pair("pcode", "pcode_resolved"),
            "identify_param_count_mismatch": lambda *a: self.param_mismatch,
            "identify_variadic_calls": self.see("variadic", pair("variadic", "variadic_resolved")),
            "identify_stack_align_anchor": pair("align", "align_resolved"),
            "identify_direct_call_esp_uncertainty": pair("call_esp", "call_esp_resolved"),
            "identify_lea_esp_stack_addr": fixed("lea"),
            "identify_special_functions": fixed("special"),
            "identify_displaced_global_access": fixed("displaced"),
            "calculate_complexity_metrics": lambda *a: {"lines": 1},
            "extract_virtual_filename": lambda name: self.virtual,
            "generate_function_file_contents": self.write,
        }
        for name, value in patches.items():
            monkeypatch.setattr(e, name, value)
        for cache, value in ((e.replacements_cache, lambda: self.replacements), (e.pcode_overrides_cache, lambda: {"p": 1}),
                             (e.proto_cache, lambda: {"q": 2}), (e.per_function_fixes_cache, lambda: {"r": 3})):
            monkeypatch.setattr(cache, "load_for_function", self.see("json_path", lambda path, value = value: value()))
        monkeypatch.setattr(asm_transform, "generate_mmx_asm_cpp", lambda result, code: self.mmx or code)
        monkeypatch.setattr(asm_transform, "generate_byval_asm_cpp", lambda result, code: self.byval or code)
        monkeypatch.setattr(chunk_transform, "is_chunked", self.is_chunked)
        monkeypatch.setattr(chunk_transform, "generate_chunked_code", lambda code, name: "CHUNKED")

    def see(self, key, func):
        def call(*args, **kwargs):
            self.seen[key] = args
            return func(*args, **kwargs)
        return call

    def is_chunked(self, path):
        if self.chunked == "raise":
            raise ValueError("bad config")
        return self.chunked

    def write(self, *args, **kwargs):
        self.output = dict(zip(OUTPUT_ARGS, args), **kwargs)
        return self.contents

    def keep(self, text, ext = ".keep.cpp"):
        base = self.source.rsplit(".", 1)[0]
        path = self.src / (base + ext)
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text)

    def run(self, code = "CPP", **fields):
        result = SimpleNamespace(
            func_name = "core_a.cpp_f_FUN_00401000", func_addr = "00401000", raw_decompiled_code = code,
            func_convention = "__cdecl", func_signature = "", stack_patterns_raw = "raw", func_globals = [],
            func_calls = [], assembly_code = "ASM", pcode_data = {}, param_estimates = {}, vtable_info = None,
            stack_frame = {}, is_ebp_frame = False, func_xrefs = [], func_addr_range = [],
            decompile_time = 1.0, assembly_time = 2.0, metadata_time = 3.0)
        for name, value in fields.items():
            setattr(result, name, value)
        processed = e.process_python_only(result, str(self.src), {"K": 1})
        return processed, self.output


@pytest.fixture(name = "post")
def fixture_post(monkeypatch, tmp_path, logs):
    return Post(monkeypatch, tmp_path)


def kinds(suspects):
    return [(s["type"], s["match"]) + tuple(s[k] for k in ("resolution_source", "introduced_by") if k in s)
            for s in suspects]


def test_a_function_without_a_keep_reports_every_detector(post):
    post.content = {"CPP": [suspect("raw_hex", "0x10"), suspect("decompiler_intrinsic", "ROUND")]}
    post.cave = {"CPP": [suspect("missing_cave_copy", "a")]}
    post.asm = [suspect("mmx_assembly", "PADDW"), suspect("asm_x", "y")]
    post.pcode, post.pcode_resolved = [suspect("badspacebase", "b")], [suspect("callind", "c")]
    post.param_mismatch = suspect("param_count_mismatch", "3")
    post.variadic_resolved = [suspect("variadic", "v", resolution_source = "proto")]
    post.align, post.call_esp, post.lea = [suspect("stack_align_anchor", "s")], [suspect("call_esp", "e")], [suspect("lea", "l")]
    post.special, post.displaced = [suspect("special_crt_function", "crt")], [suspect("displaced_global_access", "d")]
    post.align_resolved, post.call_esp_resolved = [suspect("a_r", "1")], [suspect("c_r", "2")]
    processed, out = post.run()
    assert kinds(out["suspects"]) == [("raw_hex", "0x10"), ("asm_x", "y"), ("missing_cave_copy", "a"),
                                      ("badspacebase", "b"), ("param_count_mismatch", "3"), ("call_esp", "e"),
                                      ("lea", "l"), ("displaced_global_access", "d")]
    # Resolved entries carry where they were resolved; pcode is the default
    assert kinds(out["resolved_suspects"]) == [("callind", "c", "pcode"), ("variadic", "v", "proto"),
                                               ("a_r", "1", "pcode"), ("c_r", "2", "pcode")]
    # The stack issue reaches the variadic detector
    assert post.seen["variadic"][2] is True
    assert out["compile_source"] == "cpp" and out["chunked"] is False and out["chunked_decompiled_code"] is None
    assert out["mmx_decompiled_code"] is None and out["byval_decompiled_code"] is None
    assert out["custom_replacements"] is None and out["decompiled_code"] == "CPP"
    assert (out["pcode_overrides"], out["proto_overrides"], out["decompiler_fixes"]) == ({"p": 1}, {"q": 2}, {"r": 3})
    assert post.seen["json_path"] == (str(post.src / "core/a.cpp/f_FUN_00401000.json"),)
    assert processed["success"] and processed["suspect_count"] == 8 and processed["virtual_filename"] == "core/a.cpp"
    assert processed["function_group_entry"] == {"name": "core_a.cpp_f_FUN_00401000", "address": "00401000", "signature": ""}
    assert processed["contents"] == {"cpp_path": "x"}
    assert processed["total_time"] >= 6.0


def test_the_variants_replacements_and_chunks_reach_the_output(post):
    post.mmx, post.byval, post.replacements, post.chunked, post.virtual = "MMX", "BYVAL", [{"a": "b"}], True, None
    post.contents = None
    processed, out = post.run()
    assert (out["mmx_decompiled_code"], out["byval_decompiled_code"]) == ("MMX", "BYVAL")
    assert out["decompiled_code"] == "CPP\n// replaced" and out["custom_replacements"] == [{"a": "b"}]
    assert out["chunked"] is True and out["chunked_decompiled_code"] == "CHUNKED"
    assert processed["function_group_entry"] is None and processed["success"] is False


def test_a_chunk_config_that_fails_leaves_the_function_unchunked(post, logs):
    post.chunked = "raise"
    out = post.run()[1]
    assert out["chunked"] is False
    assert "Chunk transform failed for core_a.cpp_f_FUN_00401000: bad config" in logs


@pytest.mark.parametrize("code, signature, convention, expected_sig, expected_code", [
    # The convention goes in and the spacing is normalized; warnings before the signature stay
    ("/* WARNING: x */\n\nint\nf(int a,\n  int b)\n\n{\n}", "int f (int a, int b)", "__stdcall",
     "int __stdcall f(int a,int b)", "/* WARNING: x */\n\nint __stdcall f(int a,int b)\n\n{\n}"),
    ("int\nf(void)\n\n{\n}", "int f(void)", "unknown", "int f(void)", "int f(void)\n\n{\n}"),
    ("/* WARNING: y */\n\n{\n}", "int f(void)", None, "int f(void)", "/* WARNING: y */\nint f(void)\n\n{\n}"),
    # No body to find: the code is left as it is
    ("int f(void);", "int f(void)", None, "int f(void)", "int f(void);"),
])
def test_the_signature_in_the_code_is_the_clean_one(post, code, signature, convention, expected_sig, expected_code):
    out = post.run(code, func_signature = signature, func_convention = convention)[1]
    assert out["func_signature"] == expected_sig and post.seen["constants"] == (expected_code, {"K": 1})


@pytest.mark.parametrize("source, keep_ext, compile_source", [
    ("core/a.c/f_FUN_00401000.c", ".keep.c", "keep.c"),
    ("core/a.c/f_FUN_00401000.c", None, "c"),
    ("core/a.cpp/f_FUN_00401000.cpp", ".keep.c", "cpp"),
    ("core/a/f_FUN_00401000", None, "c"),
])
def test_the_compile_source_is_the_keep_when_there_is_one(post, source, keep_ext, compile_source):
    post.source = source
    if keep_ext:
        post.keep("KEEP", keep_ext)
    assert post.run()[1]["compile_source"] == compile_source


def test_a_keep_resolves_what_it_fixed_and_reports_what_it_introduced(post):
    a, b, c = suspect("raw_hex", "0x10"), suspect("adj", "p"), suspect("new_in_keep", "n")
    post.content = {"CPP": [a, a, b], "KEEP": [a, c, suspect("decompiler_intrinsic", "ROUND")]}
    post.cave = {"CPP": [suspect("missing_cave_copy", "m")]}
    post.phantom = {"CPP": [suspect("phantom_f2i", "f")], "KEEP": [suspect("phantom_f2i", "f")]}
    post.fyl2x = {"KEEP": [suspect("dropped_fyl2x", "l")]}
    post.stale = {"KEEP": [suspect("stale_enum_name", "E_X")]}
    post.asm = [suspect("asm_x", "y")]
    post.keep("KEEP")
    out = post.run()[1]
    assert kinds(out["suspects"]) == [
        ("raw_hex", "0x10"), ("asm_x", "y"), ("phantom_f2i", "f"),
        ("new_in_keep", "n", "keep"), ("dropped_fyl2x", "l", "keep"), ("stale_enum_name", "E_X", "keep")]
    assert kinds(out["resolved_suspects"]) == [("raw_hex", "0x10", "keep"), ("adj", "p", "keep"),
                                               ("missing_cave_copy", "m", "keep")]
    assert out["compile_source"] == "keep.cpp"


MOVS = [suspect("unrolled_memcpy", "MOVSD.REP 0x401010"), suspect("unrolled_memcpy", "MOVSD.REP 0x401020"),
        suspect("unrolled_memcpy", None)]
STOS = [suspect("unrolled_memset", "STOSD.REP 0x401030"), suspect("unrolled_memset", "STOSD.REP 0x401040")]


@pytest.mark.parametrize("cpp, keep, memcpys, memsets", [
    # Each memcpy()/memset() the keep adds answers one REP site
    ("CPP", "void f(void)\n{\n  memcpy(a,b,4);\n  memset(c,0,4);\n  g();\n}", 1, 1),
    # A keep that is only one memcpy() stands for every REP MOVS in the binary. A call in a
    # comment adds nothing, and a brace in a comment or literal does not end the body.
    ("CPP", "// memset(x)\nvoid f(void)\n{\n  /* { */ memcpy(a, \"if\", sizeof(x));\n}", 2, 0),
    ("CPP memcpy(", "void f(void)\n{\n  return memset(a,'{',4);\n}", 0, 2),
    ("CPP", "void f(void)\n{\n  { memcpy(a,b,4); }\n}", 2, 0),
    # Not wrappers: control flow, no body, an unclosed body, or no call at all
    ("CPP", "void f(void)\n{\n  if (a) memcpy(a,b,4);\n}", 1, 0),
    ("CPP", "memcpy(a,b,4);", 1, 0),
    ("CPP", "void f(void)\n{\n  memcpy(a,b,4);\n", 1, 0),
    ("CPP memset(a", "void f(void)\n{\n  memcpy(a,b,4);\n}", 2, 0),
    ("CPP", "", 0, 0),
])
def test_memcpy_and_memset_in_the_keep_answer_the_rep_sites(post, cpp, keep, memcpys, memsets):
    post.memcpy, post.memset = MOVS, STOS
    post.keep(keep)
    out = post.run(cpp)[1]
    resolved = [s["match"] for s in out["resolved_suspects"]]
    assert sum(m.startswith("MOVS") for m in resolved) == memcpys
    assert sum(m.startswith("STOS") for m in resolved) == memsets
    assert len(out["suspects"]) == 5 - memcpys - memsets


LOOP = "for (i = 4; i != 0; i = i + -1) { *d = *s; }"
WALK = "for (i = 4; s = s->n, i != 0; i = i + -1) { }"
WHILE = "while ( true ) { if (n == 0) break; n = n + -1; *d = *s; }"


@pytest.mark.parametrize("cpp, keep, detected, credited", [
    # A countdown loop the keep collapsed is one REP MOVS answered
    (LOOP, "*d = *s;", False, 1),
    (WALK, "*d = *s;", False, 1),
    (WHILE, "*d = *s;", False, 1),
    # The source detector's own match is not credited twice
    (LOOP, "*d = *s;", True, 1),
    (LOOP + LOOP, LOOP, True, 1),
    (LOOP, LOOP, False, 0),
])
def test_a_collapsed_copy_loop_answers_one_rep_movs(post, cpp, keep, detected, credited):
    post.memcpy = MOVS[:2]
    if detected:
        post.content = {cpp: [suspect("unrolled_memcpy", "for (i = 4; ...)")] * cpp.count("for")}
        post.content[keep] = [suspect("unrolled_memcpy", "for (i = 4; ...)")] * keep.count("for")
    post.keep(keep)
    out = post.run(cpp)[1]
    assert sum((s["match"] or "").startswith("MOVS") for s in out["resolved_suspects"]) == credited


def test_a_keep_that_names_the_intended_global_resolves_the_displaced_access(post):
    post.displaced = [suspect("displaced_global_access", "a", intended_global = "g_Table[2].x"),
                      suspect("displaced_global_access", "b", intended_global = "g_Other"),
                      suspect("displaced_global_access", "c", intended_global = ""),
                      suspect("displaced_global_access", "d", intended_global = "[3]"),
                      suspect("displaced_global_access", "e", intended_global = "g_Tab")]
    post.keep("x = g_Table[2].x; y = g_Others;")
    out = post.run()[1]
    assert [s["match"] for s in out["suspects"]] == ["b", "c", "d", "e"]
    assert kinds(out["resolved_suspects"]) == [("displaced_global_access", "a", "keep")]


def test_a_keep_the_detectors_cannot_read_keeps_the_raw_suspects(post, logs, monkeypatch):
    def detect(code, **kwargs):
        if code == "KEEP":
            raise ValueError("bad keep")
        return [suspect("raw_hex", "0x10"), suspect("decompiler_intrinsic", "ROUND")]
    monkeypatch.setattr(e, "detect_content_suspects", detect)
    post.keep("KEEP")
    out = post.run()[1]
    assert kinds(out["suspects"]) == [("raw_hex", "0x10")] and out["resolved_suspects"] == []
    assert "keep-resolution failed for core_a.cpp_f_FUN_00401000: bad keep" in logs


# --- export_pseudocode -------------------------------------------------------------------

class Program:
    def __init__(self, funcs):
        self.funcs = funcs

    def getListing(self):
        return SimpleNamespace(getDefinedData = lambda forward: [])

    def getFunctionManager(self):
        return SimpleNamespace(getFunctions = lambda forward: list(self.funcs))

    def getReferenceManager(self):
        return "references"

    def getSymbolTable(self):
        return "symbols"


def processed(name, suspects = 0, contents = None, virtual = None, success = True):
    return {"func_name": name, "func_addr": "0", "total_time": 1.0, "decompile_time": 0.5, "assembly_time": 0.2,
            "transform_time": 0.2, "output_time": 0.1, "success": success, "suspect_count": suspects,
            "contents": {"cpp_path": name + ".cpp", "cpp_content": "x"} if contents is None else contents,
            "virtual_filename": virtual, "function_group_entry": {"name": name} if virtual else None}


def decompiled(name, success = True, processed = None, process_error = None, code = "int f(void)"):
    return SimpleNamespace(func_name = name, success = success, error = "bad" if not success else None,
                           decompile_time = 1.0, assembly_time = 0.5, pcode_time = 0.25,
                           raw_decompiled_code = code, process_error = process_error, processed = processed)


STUBS = {
    "register_pcode_overrides": 0, "preload_decompiler_fixes": None, "preload_per_function_decompiler_fixes": None,
    "delete_pseudocode": None, "generate_callfixups_file": "callfixups.json", "register_callfixups": 0,
    "generate_proto_overrides_file": "proto.json", "register_proto_overrides": 0, "apply_proto_overrides": None,
    "generate_decompiler_fixes_file": "fixes.json", "export_header_files": {"T": "types/t.h"},
    "build_string_map": {}, "build_write_xref_addresses": set(), "extract_globals_and_constants": ([], []),
    "build_global_symbols_map": {}, "load_vtable_data": {"func_to_vtables": {"a": 1}, "vtable_addrs": {1, 2}},
    "load_switch_table_data": {"s": 1}, "load_noreturn_functions": {1}, "register_decompiler_fixes": 0,
    "build_constants_map": {}, "build_global_interval_map": [], "clear_decompiler_fixes": None,
    "dispose_decompilers": 1, "build_prototypes_from_decompile_results": [{"name": "f"}],
    "split_data_by_address_range": {"0x400000": ["a"], "0x500000": ["b"]},
    "generate_prototypes_header_file": "PROTOS", "write_header_file": None, "generate_crt_header": "",
    "generate_system_aggregate": None, "constant_range_dependencies": {"0x400000": [], "0x500000": []},
    "extract_function_references_from_constants": [], "get_function_address_ranges": [],
    "generate_constants_file": "CONSTS", "generate_globals_header_file": "GLOBALS_H",
    "generate_globals_cpp_file": "GLOBALS_CPP", "verify_headers_after_export": True,
    "verify_globals_after_export": True, "verify_shims_after_export": True, "write_batched_files": None,
    "export_function_prototypes": None, "update_vtable_indirect_callers": None,
    "compile_functions_after_export": None, "run_static_analysis_after_export": None,
    "run_static_analysis_suspects_pass": None, "generate_analysis_report": None, "generate_dat_report": None,
    "generate_struct_detection_report": None, "generate_globals_gap_report": None,
    "generate_adj_pointer_report": None, "generate_actor_cast_report": None, "generate_keep_sync_report": None,
    "generate_keep_drift_report": None,
}


class Export:
    """export_pseudocode with every collaborator recorded and answering from `answers`."""

    def __init__(self, monkeypatch, tmp_path):
        self.path = tmp_path / "nocedit.exe"
        self.path.mkdir()
        self.calls, self.answers, self.results = [], dict(STUBS), {}
        self.callback, self.high = Callback(), Callback()
        for name in STUBS:
            monkeypatch.setattr(e, name, self.stub(name))
        monkeypatch.setattr(e, "DecompileCallback", self.callback)
        monkeypatch.setattr(e, "HighFunction", self.high)
        monkeypatch.setattr(e, "DEFAULT_NUM_THREADS", 1)
        monkeypatch.setattr(e, "PROCESS_BATCH_SIZE", 1)
        monkeypatch.setattr(e, "is_function_external", lambda program, func: func == "external")
        monkeypatch.setattr(e, "DecompilerThreadLocal", lambda program: SimpleNamespace(get = lambda: "interface"))
        monkeypatch.setattr(e, "DecompileWorker", self.worker)
        for cache in (e.callfixups_cache, e.proto_cache):
            monkeypatch.setattr(cache, "preload_global", self.stub("preload_global"))
        monkeypatch.setattr(e.proto_cache, "preload_directory", self.stub("proto_preload_directory"))
        monkeypatch.setattr(e.proto_cache, "function_entries", lambda: [])
        monkeypatch.setattr(e.replacements_cache, "preload_directory", self.stub("replacements_preload_directory"))
        monkeypatch.setattr(chunk_transform, "preload_chunked_flags", self.stub("preload_chunked_flags"))
        monkeypatch.setattr(adjacency, "init_context", self.stub("init_adjacency"))
        monkeypatch.setattr(adjacency, "write_rewrite_report", self.stub("write_adjacency_report"))

    def stub(self, name):
        def call(*args, **kwargs):
            self.calls.append((name, args, kwargs))
            answer = self.answers.get(name)
            return answer(*args) if callable(answer) else answer
        return call

    def worker(self, func, *args, **kwargs):
        def run():
            answer = self.results[func]
            if isinstance(answer, Exception):
                raise answer
            return answer
        return run

    def called(self, name):
        return [c for c in self.calls if c[0] == name]

    def run(self, funcs, **flags):
        e.export_pseudocode(Program(funcs), str(self.path), **flags)


@pytest.fixture(name = "export")
def fixture_export(monkeypatch, tmp_path, logs):
    return Export(monkeypatch, tmp_path)


def test_a_full_export_writes_every_file_and_report(export, logs):
    export.answers.update({
        "register_pcode_overrides": 3, "register_callfixups": 2, "register_proto_overrides": 1,
        "register_decompiler_fixes": 4, "generate_crt_header": "CRT",
        "extract_globals_and_constants": (["g1", "g2"], ["c1", "c2"]),
        "extract_function_references_from_constants": lambda consts: ["f"] if consts == ["a"] else [],
        "compile_functions_after_export": {"successful": 9, "total": 10, "success_rate": 90.0},
        "run_static_analysis_after_export": {"total_files": 5, "total_diagnostics": 7}})
    for name in ("vtables", "functions", "switch_tables", "func_conventions"):
        (export.path / name).mkdir()
    (export.path / "switch_tables" / "switch_tables.json").write_text("{}")
    (export.path / "func_conventions" / "func_conventions.json").write_text('{"f": "__stdcall"}')
    # A globals .cpp that cannot be written does not stop the export
    (export.path / "pseudocode" / "src" / "globals" / "globals_400000.cpp").mkdir(parents = True)
    every_file = {"cpp_path": "a.cpp", "cpp_content": "a", "mmx_cpp_path": "a.mmx.cpp", "mmx_cpp_content": "m",
                  "byval_cpp_path": "a.byval.cpp", "byval_cpp_content": "b", "chunked_cpp_path": "a.chunked.cpp",
                  "chunked_cpp_content": "c", "asm_path": "a.asm", "asm_content": "s", "json_path": "a.json",
                  "json_content": "j", "pcode_path": "a.pcode", "pcode_content": "p"}
    special = {0: decompiled("f0", processed = processed("f0"), code = "// Decompilation failed\n// too big"),
               4: decompiled("f4", processed = {}),
               5: decompiled("f5", processed = processed("f5", suspects = 2, contents = every_file, virtual = "core/a.cpp")),
               6: decompiled("f6", processed = processed("f6", virtual = "core/a.cpp")),
               7: decompiled("f7", processed = None),
               8: decompiled("f8", processed = processed("f8", success = False)),
               9: decompiled("f9", processed = processed("f9", contents = {}))}
    for i in range(10, 19):
        special[i] = decompiled(f"f{i}", process_error = "boom")
    funcs = ["raises", "fails", "external"] + [f"f{i}" for i in range(100)]
    export.results = {"raises": RuntimeError("worker died"), "fails": decompiled("fails", success = False)}
    for i in range(100):
        export.results[f"f{i}"] = special.get(i) or decompiled(f"f{i}", processed = processed(f"f{i}"))
    export.run(funcs)

    include = export.path / "pseudocode" / "include"
    written = sorted(os.path.relpath(c[1][0], str(include)) for c in export.called("write_header_file"))
    assert written == ["constants.h", "constants/constants_400000.h", "constants/constants_500000.h", "globals.h",
                       "globals/globals_400000.h", "globals/globals_500000.h", "prototypes.h",
                       "prototypes/prototypes_400000.h", "prototypes/prototypes_500000.h", "system/crt.h"]
    assert (export.path / "pseudocode" / "src" / "globals" / "globals_500000.cpp").read_text() == "GLOBALS_CPP\n"
    assert any(line.startswith("Failed to write globals_400000.cpp") for line in logs)
    assert "Loaded 3 P-code overrides from JSON files" in logs and "Loaded function conventions: 1 function definitions" in logs
    assert [c[0] for c in export.callback.calls] == ["hasPcodeOverrides", "hasCallFixups", "clearPcodeOverrides", "clearCallFixups"]
    assert [c[0] for c in export.high.calls] == ["hasRegisteredProtoOverrides", "clearProtoOverrides"]
    assert export.called("clear_decompiler_fixes") and export.called("update_vtable_indirect_callers")
    assert export.called("run_static_analysis_suspects_pass") and export.called("generate_system_aggregate")
    assert "WARN Decompiler refused f0: // too big" in logs
    assert export.called("export_function_prototypes")[0][1][2] == {"core/a.cpp": [{"name": "f5"}, {"name": "f6"}]}
    # Files go out in batches of 4 or more; f5's 7 fill one alone, and 2 are left for the end
    batches = [c[1][0] for c in export.called("write_batched_files")]
    assert sum(len(b) for b in batches) == 7 + 86 and [len(b) for b in batches].count(7) == 1
    assert "Writing final batch of 2 files" in logs
    assert any(line.startswith("  Constants range 0x400000 references 1 functions") for line in logs)
    assert not any(line.startswith("  Constants range 0x500000") for line in logs)
    report = (export.path / "reports" / "decompilation_errors.txt").read_text()
    assert "Decompilation failures: 2\n  - Processing failures: 12\n" in report
    assert "Decompile exception: worker died" in report and "Decompile failed fails: bad" in report
    assert "Process missing for f7" in report and "Process failed: f8" in report
    assert "Process exception f4: 'func_name'" in report and "Process exception f10: boom" in report
    assert "  ... and 4 more errors (see report for full list)" in logs
    assert "Decompiled: 100/102" in " ".join(logs) and "Collected: 100/100" in " ".join(logs)
    assert "Function compilation: 9/10 successful (90.0%)" in logs
    assert "Static analysis: 5 files analyzed, 7 findings" in logs
    assert "  Found 2 suspect patterns in f5" in logs and "THROUGHPUT STATISTICS" in logs


def test_an_export_of_nothing_skips_what_it_was_told_to(export, logs):
    export.run([], header_compile = False, function_compile = False, static_analysis = False)
    assert "Skipping header, globals and shim compilation (--no-header-compile)" in logs
    assert "Skipping function compilation (--no-function-compile)" in logs
    assert "Skipping static analysis (--no-static-analysis)" in logs
    assert "Skipping vtable indirect caller analysis (no vtables directory)" in logs
    assert any(line.startswith("No switch_tables.json found") for line in logs)
    assert any(line.startswith("No functions directory found") for line in logs)
    assert any(line.startswith("No func_conventions.json found") for line in logs)
    assert "Functions with zero suspects: 0 (0.0%)" in logs and "THROUGHPUT STATISTICS" not in logs
    assert not (export.path / "reports" / "decompilation_errors.txt").exists()
    assert export.callback.calls == [("clearPcodeOverrides",), ("clearCallFixups",)]
    assert not export.called("clear_decompiler_fixes") and not export.called("generate_system_aggregate")


def test_failed_checks_do_not_stop_an_export_that_is_not_strict(export, logs):
    export.answers.update({"verify_headers_after_export": False, "verify_globals_after_export": False,
                           "verify_shims_after_export": False})
    (export.path / "func_conventions").mkdir()
    (export.path / "func_conventions" / "func_conventions.json").write_text("{")
    export.results = {"fails": decompiled("fails", success = False)}
    export.run(["fails"])
    assert "  Decompile failed fails: bad" in logs and not any("more errors" in line for line in logs)
    assert "ERROR: Header compilation failed" in logs and "ERROR: Globals compilation failed" in logs
    assert "WARNING: Shim compilation had failures (non-blocking)" in logs
    assert any(line.startswith("Failed to load func_conventions.json") for line in logs)
    assert not any(line.startswith(("Function compilation:", "Static analysis:")) for line in logs)


@pytest.mark.parametrize("failing, message", [
    ("verify_headers_after_export", "Header compilation failed"),
    ("verify_globals_after_export", "Globals compilation failed"),
])
def test_a_strict_export_stops_at_a_failed_check(export, failing, message):
    export.answers[failing] = False
    with pytest.raises(RuntimeError, match = message):
        export.run([], strict = True)
