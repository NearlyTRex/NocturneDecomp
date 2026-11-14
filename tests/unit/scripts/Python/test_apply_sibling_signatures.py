# Imports
import importlib
import json
import os
import runpy
import sys
from collections import Counter
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
import ghidra_fake
import ghidra_program as gp
from repo_paths import SCRIPTS_DIR
import apply_sibling_signatures as ass

SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

INT = ghidra_fake.DataType("int", 4)
VOID = ghidra_fake.DataType("void", 0)
CBOX = ghidra_fake.DataType("CBox", 8, category = "/Nocturne")


def fn(name, addr, ret = "undefined", params = (), **extra):
    return {"name": name, "addr": addr, "ret": ret,
            "vars": {"params": [{"name": n, "type": t} for n, t in params]}, **extra}


SRC = [
    fn("core_a.cpp_CBox_grow_FUN_00400010", "00400010", "void", [("this_ptr", "CBox *")], conv = "__cdecl"),
    fn("core_a.cpp_signed_FUN_00400020", "00400020", "int"),
    fn("core_a.cpp_unsigned_FUN_00400030", "00400030"),
    fn("core_a.cpp_thunked_FUN_00400040", "00400040", "int"),
    fn("core_a.cpp_fpu_FUN_00400050", "00400050", "float10", conv = "__fpucall"),
    fn("core_a.cpp_CBox_virt_FUN_00400060", "00400060", "int"),
    fn("core_a.cpp_CBox_norecv_FUN_00400070", "00400070", "int"),
    fn("core_a.cpp_CBox_wrong_FUN_00400080", "00400080", "int", [("this_ptr", "CMoon *")]),
    fn("free_FUN_00400090", "00400090", "int", [("x", "int")]),
    fn("core_a.cpp_dup_FUN_004000a0", "004000a0", "int"),
    fn("core_b.cpp_dup_FUN_004000b0", "004000b0", "int"),
    fn("core_a.cpp_FUN_004000c0", "004000c0", "int"),
    fn("core_a.cpp_fpu2_FUN_004000d0", "004000d0", "int", custom_storage = True),
    fn("core_a.cpp_fpu3_FUN_004000e0", "004000e0", "int", conv = "__fpucall"),
    fn("core_a.cpp_fpu4_FUN_004000f0", "004000f0", "float10"),
    "not a record",
    {"addr": "00400100"},
]
DST = [
    fn("core_a.cpp_CBox_grow_FUN_00500010", "00500010"),
    fn("core_a.cpp_signed_FUN_00500020", "00500020", "int", [("x", "int")]),
    fn("core_a.cpp_unsigned_FUN_00500030", "00500030"),
    fn("thunk_core_a.cpp_thunked_FUN_00500040", "00500040", thunk = True),
    fn("core_a.cpp_fpu_FUN_00500050", "00500050"),
    fn("core_a.cpp_CBox_virt_FUN_00500060", "00500060"),
    fn("core_a.cpp_CBox_norecv_FUN_00500070", "00500070"),
    fn("core_a.cpp_CBox_wrong_FUN_00500080", "00500080"),
    fn("free_FUN_00500090", "00500090"),
    fn("core_a.cpp_dup_FUN_005000a0", "005000a0"),
    fn("core_a.cpp_fpu2_FUN_005000d0", "005000d0", "int"),
    fn("core_a.cpp_fpu3_FUN_005000e0", "005000e0", "int", thunk = True),
    fn("core_a.cpp_fpu4_FUN_005000f0", "005000f0", "int", custom_storage = True),
]


@pytest.fixture(name = "repo")
def fixture_repo(tmp_path, monkeypatch):
    """Two builds' exported functions, the target's types and vtables."""
    def put(prog, sub, name, data):
        folder = tmp_path / "annotations" / prog / sub
        folder.mkdir(parents = True, exist_ok = True)
        (folder / name).write_text(json.dumps(data), encoding = "utf-8")

    put("src.exe", "functions", "functions_bucket_00.json", SRC)
    put("dst.exe", "functions", "functions_bucket_00.json", DST)
    put("dst.exe", "data_types", "data_types.json",
        {"structs": [{"name": "CBox"}], "enums": [{"name": "EMode"}], "unions": [{}]})
    put("dst.exe", "vtables", "vtables_bucket_00.json",
        ["junk", {"functions": [None, {"func_addr": "00500010"}, {"func_addr": "00500060"}, {}]}, {}])
    monkeypatch.setattr(ass, "REPO", str(tmp_path))
    return tmp_path


# --- reading the exports --------------------------------------------------------------

def test_functions_are_the_named_records(repo):
    assert [f["addr"] for f in ass.load_functions("src.exe")][-1] == "004000f0"
    assert len(ass.load_functions("src.exe")) == 15
    with pytest.raises(SystemExit, match = "no function annotations"):
        ass.load_functions("none.exe")
    assert ass.annotations_dir("dst.exe") == os.path.join(str(repo), "annotations", "dst.exe")


def test_type_names_and_vtable_members_come_from_the_target(repo):
    assert ass.load_type_names("dst.exe") == {"CBox", "EMode"}
    assert ass.load_vtable_members("dst.exe") == {"00500010", "00500060"}


@pytest.mark.parametrize("name, core", [
    ("core_a.cpp_CBox_grow_FUN_00400010", "CBox_grow"),
    ("thunk_core_a.cpp_f_FUN_00400010", "f"),
    ("core_a.cpp_thunk_f_FUN_00400010", "f"),
    ("f_FUN_00400010", "f"),
    ("core_a.cpp_FUN_00400010", None),
    ("core_a.cpp_", None),
    ("", None),
    (None, None),
])
def test_the_core_drops_unit_thunk_prefix_and_address(name, core):
    assert ass.core_of(name) == core


def test_the_class_is_the_longest_known_type_prefix():
    types = {"CBox", "CBox_Inner"}
    assert ass.split_class_method("CBox_Inner_grow", types) == ("CBox_Inner", "grow")
    assert ass.split_class_method("CMoon_grow", types) == (None, None)
    assert ass.split_class_method(None, types) == (None, None)


def test_a_signature_is_parameters_or_a_defined_return():
    assert ass.has_signature(fn("f", "1", "int"))
    assert ass.has_signature(fn("f", "1", params = [("x", "int")]))
    assert not ass.has_signature(fn("f", "1", "undefined4"))
    assert not ass.has_signature({"name": "f", "vars": {"params": ["junk"]}})
    assert ass.strip_ptr(" CBox * ") == "CBox" and ass.strip_ptr(None) == ""


@pytest.mark.parametrize("func, custom", [
    ({"conv": "__fpucall"}, True), ({"ret": "float10"}, True), ({"custom_storage": True}, True),
    ({"conv": "__stack_esi", "ret": "int"}, False), ({}, False)])
def test_custom_storage_is_an_fpu_return_or_hand_assigned(func, custom):
    assert ass.needs_custom_storage(func) is custom


# --- the namecore plan ----------------------------------------------------------------

def test_the_namecore_plan_takes_only_what_it_can_stand_behind(repo):
    plan, skipped, src_dupes, dst_dupes = ass.build_plan_namecore("src.exe", "dst.exe")
    assert [p["core"] for p in plan] == ["CBox_grow", "free"]
    grow, free = plan[0], plan[1]
    assert grow["receiver"] == "CBox" and grow["corroborated"] and grow["conv"] == "__cdecl"
    assert grow["params"] == [{"name": "this_ptr", "type": "CBox *"}] and grow["name"] is None
    assert free["receiver"] is None and not free["corroborated"]
    assert skipped == Counter({"already_signed": 4, "source_unsigned": 1, "thunk": 1, "needs_custom_storage": 1,
                               "source_virtual_without_this": 1, "source_has_no_receiver": 1,
                               "source_receiver_mismatch": 1})
    assert src_dupes == {"dup"} and dst_dupes == set()


def test_the_report_counts_and_shows_examples(repo, capsys):
    plan, skipped, src_dupes, dst_dupes = ass.build_plan_namecore("src.exe", "dst.exe")
    ass.report(plan, skipped, src_dupes, dst_dupes, 1, "src.exe", "dst.exe")
    out = capsys.readouterr().out
    assert "SIGNATURE TRANSFER PLAN  (src.exe -> dst.exe)" in out
    assert "    receiver corroborated     : 1  (name AND vtable agree)" in out
    assert "    ambiguous cores           : 1 src, 0 dst" in out
    assert "    core_a.cpp                 1" in out and "    ?                          1" in out
    assert "  examples (1 of 2):" in out and "        void (CBox * this_ptr)   [__cdecl]  +vtable" in out


# --- the ledger -----------------------------------------------------------------------

def entry(**overrides):
    base = {"program": "dst.exe", "address": "00500010", "name": "core_a.cpp_CBox_grow_FUN_00500010",
            "ret": "void", "conv": "__cdecl", "params": [{"name": "this_ptr", "type": "CBox *"}],
            "expect": {"name": "core_a.cpp_FUN_00500010", "range": ["00500010", "00500010"]},
            "basis": "sibling",
            "source": {"program": "src.exe", "address": "00400010", "name": "x", "note": "same body",
                       "confidence": "high"}}
    base.update(overrides)
    return base


def test_the_basis_is_stated_or_read_from_the_source():
    assert ass.basis_of({"basis": "derived"}) == "derived"
    assert ass.basis_of({"source": {"program": "a"}}) == "sibling"
    assert ass.basis_of({}) == "derived"


def test_a_ledger_needs_schema_1_and_a_list(tmp_path):
    path = tmp_path / "l.json"
    with pytest.raises(SystemExit, match = "no ledger"):
        ass.load_ledger(str(path))
    path.write_text(json.dumps({"schema": 2}), encoding = "utf-8")
    with pytest.raises(SystemExit, match = "unsupported schema 2"):
        ass.load_ledger(str(path))
    path.write_text(json.dumps({"schema": 1, "entries": {}}), encoding = "utf-8")
    with pytest.raises(SystemExit, match = "'entries' must be a list"):
        ass.load_ledger(str(path))
    path.write_text(json.dumps({"schema": 1, "entries": [entry()]}), encoding = "utf-8")
    assert ass.load_ledger(str(path)) == [entry()]


def test_a_clean_ledger_lints_clean(capsys):
    derived = entry(address = "00500030", name = None, basis = "derived",
                    source = {"note": "asserts", "confidence": "medium"})
    assert ass.lint_ledger([entry(), entry(address = "00500020", name = None), derived], "l.json") == 0
    assert capsys.readouterr().out == "lint l.json: 3 entries, 0 problem(s)\n  dst.exe: 3\n"


def test_lint_names_every_structural_problem(capsys):
    derived = {"note": "asserts", "program": "src.exe"}
    entries = [
        "junk",
        entry(ret = None, address = "0x500010"),
        entry(),
        entry(),
        entry(address = "00500030", params = [{"name": "a"}, {"name": "__return_storage_ptr__", "type": "int"},
                                              {"name": "__auto_this", "type": "int"}]),
        entry(address = "00500040", name = "core_a.cpp_f"),
        entry(address = "00500050", name = "core_a.cpp_f_FUN_00400010"),
        entry(address = "00500060", name = "core_a.cpp_f_FUN_00400099"),
        entry(address = "00500070", name = None, conv = "__fpucall", source = {}),
        entry(address = "00500080", name = None, basis = "guess"),
        entry(address = "00500090", name = None, basis = "derived", source = derived),
        entry(address = "005000a0", name = None, source = {"note": "n", "confidence": "sure"}),
        entry(address = "005000b0", name = None, expect = {"range": ["00500010"]}),
    ]
    assert ass.lint_ledger(entries, "l.json") == 1
    out = capsys.readouterr().out
    for problem in [
        "entry[0]: not an object",
        "entry[1] dst.exe:0x500010: missing required key 'ret'",
        "entry[1] dst.exe:0x500010: address must be lowercase hex, no 0x",
        "entry[3] dst.exe:00500010: duplicate of entry[2]",
        "params[0] needs both 'name' and 'type'",
        "params[1] is the Ghidra auto-parameter '__return_storage_ptr__'",
        "params[2] is the Ghidra auto-parameter '__auto_this'",
        "name 'core_a.cpp_f' has no _FUN_<address> suffix",
        "name suffix _FUN_00400010 does not match address 00500050  <- that is the sibling's address",
        "entry[7] dst.exe:00500060: name suffix _FUN_00400099 does not match address 00500060\n",
        "__fpucall / ret void needs CUSTOM_STORAGE",
        "entry[8] dst.exe:00500070: source.note is required",
        "basis must be one of ('sibling', 'derived'), got 'guess'",
        "basis 'derived' must not set source.program",
        "basis 'derived' requires source.confidence",
        "source.confidence must be one of ('high', 'medium', 'low'), got 'sure'",
        "basis 'sibling' requires source.program",
        "expect.range must be [start, end]",
    ]:
        assert problem in out


def test_the_ledger_plan_filters_then_sorts_by_address():
    entries = [
        entry(address = "00500020", name = "core_a.cpp_g_FUN_00500020", expect = {}),
        entry(),
        entry(program = "other.exe"),
        entry(address = "00500030", name = None, basis = "derived",
              source = {"note": "n", "confidence": "low"}),
        entry(address = "00500040", name = None, conv = "__fpucall"),
    ]
    plan, skipped = ass.build_plan_ledger(entries, "dst.exe")
    assert [p["addr"] for p in plan] == ["00500010", "00500020", "00500030"]
    assert plan[0]["expect_range"] == ("00500010", "00500010") and plan[1]["expect_range"] is None
    assert plan[2]["dst_name"] == "FUN_00500030" and plan[2]["core"] == "00500030"
    assert skipped == Counter({"other_program": 1, "needs_custom_storage": 1})
    _, skipped = ass.build_plan_ledger(entries, "dst.exe", only = "g_FUN")
    assert skipped["filtered_out"] == 3
    plan, _ = ass.build_plan_ledger(entries, "dst.exe", only = "00500030")
    assert [p["addr"] for p in plan] == ["00500030"]
    _, skipped = ass.build_plan_ledger(entries, "dst.exe", basis = "sibling")
    assert skipped["basis_derived"] == 1
    _, skipped = ass.build_plan_ledger(entries, "dst.exe", min_conf = "medium")
    assert skipped["below_confidence(low)"] == 1


def test_a_ledger_without_to_targets_its_one_program():
    assert ass.ledger_program([entry(), "junk", {"address": "1"}]) == "dst.exe"
    with pytest.raises(SystemExit, match = "names dst.exe, other.exe; pass --to"):
        ass.ledger_program([entry(), entry(program = "other.exe")])
    with pytest.raises(SystemExit, match = "names no program"):
        ass.ledger_program([])


# --- reverting custom storage ---------------------------------------------------------

def test_revert_lists_signed_custom_storage_targets_it_owns(repo):
    items = ass.build_revert_list("src.exe", "dst.exe")
    assert [i["core"] for i in items] == ["fpu2"]
    assert items[0] == {"core": "fpu2", "addr": "005000d0", "dst_name": "core_a.cpp_fpu2_FUN_005000d0",
                        "conv": None, "src_ret": "int"}


class Exit(Exception):
    pass


@pytest.fixture(name = "exits")
def fixture_exits(monkeypatch):
    def fake_exit(code):
        raise Exit(code)

    monkeypatch.setattr(ass.os, "_exit", fake_exit)


class Func(gp.Function):
    """A function whose prototype can be refused, unreadable afterwards, or broken already."""

    def __init__(self, name, entry_offset, refuse = False, unreadable = False, broken = False):
        super().__init__(name, gp.Address(entry_offset))
        self.refuse, self.unreadable, self.broken = refuse, unreadable, broken
        self.updates = []

    def getReturnType(self):
        if self.broken:
            raise RuntimeError("IndexOutOfBounds")
        return self.return_type

    def setCustomVariableStorage(self, value):
        self.custom_storage = value

    def updateFunction(self, convention, ret, params, update_type, force, source):
        if self.refuse:
            raise ghidra_fake.IllegalArgumentException("refused")
        self.updates.append((convention, ret, list(params), source))
        self.broken = self.unreadable


def program_with(*funcs):
    program = gp.Program()
    for func in funcs:
        program.function_manager.functions[func.entry] = func
    program.data_type_manager.add(INT, VOID, CBOX)
    return program


def args_for(**overrides):
    base = {"project_dir": "/p", "project_name": "Proj", "dst": "dst.exe", "src": "src.exe", "apply": False,
            "ignore_drift": False, "allow_custom_storage": False, "show": 15, "source": "ledger"}
    base.update(overrides)
    return SimpleNamespace(**base)


def test_a_revert_report_writes_nothing(repo, capsys):
    assert ass.revert(args_for()) == 0
    out = capsys.readouterr().out
    assert "  to revert: 1" in out and "(report only" in out


def test_revert_resets_each_target_and_counts_failures(repo, exits, monkeypatch, capsys):
    good = Func("core_a.cpp_fpu2_FUN_005000d0", 0x5000d0)
    program = program_with(good)
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    with pytest.raises(Exit) as exit_info:
        ass.revert(args_for(apply = True))
    assert exit_info.value.args[0] == 0 and good.updates[0][2] == [] and good.updates[0][3] == SourceType.DEFAULT
    assert program.transactions == [["revert custom-storage prototypes", True]] and pyghidra.closed == 1
    good.refuse = True
    with pytest.raises(Exit) as exit_info:
        ass.revert(args_for(apply = True))
    assert exit_info.value.args[0] == 1 and "FAILED core_a.cpp_fpu2_FUN_005000d0: refused" in capsys.readouterr().out
    program.function_manager.functions.clear()
    with pytest.raises(Exit) as exit_info:
        ass.revert(args_for(apply = True))
    assert exit_info.value.args[0] == 1 and "reverted 0, failed 1" in capsys.readouterr().out


# --- the live diff --------------------------------------------------------------------

def test_types_resolve_at_the_root_then_anywhere_with_pointers_rebuilt():
    program = program_with()
    resolve = ass.make_resolver(program)
    assert resolve("int") is INT and resolve("int") is INT
    pointer = resolve("CBox **")
    assert pointer.getName() == "CBox * *" and pointer.getDataType().getDataType() is CBOX
    assert resolve("Nope") is None and resolve(None) is None


def item_for(**overrides):
    base = {"name": "core_a.cpp_CBox_grow_FUN_00500010", "conv": "__cdecl", "ret": "void",
            "params": [{"name": "this_ptr", "type": "CBox *"}], "varargs": None, "expect_name": None,
            "expect_range": None, "dst_name": "core_a.cpp_FUN_00500010", "addr": "00500010", "basis": "sibling",
            "confidence": "high"}
    base.update(overrides)
    return base


def matching_func():
    func = Func("core_a.cpp_CBox_grow_FUN_00500010", 0x500010)
    func.return_type = VOID
    func.parameters = [ghidra_fake.Variable("this_ptr", ghidra_fake.PointerDataType(CBOX))]
    return func


def test_a_function_that_already_matches_has_no_diff():
    diffs, blocked = ass.diff_live(item_for(), matching_func(), ass.make_resolver(program_with()))
    assert (diffs, blocked) == ([], None)


def test_the_diff_names_each_field_that_differs():
    resolve = ass.make_resolver(program_with())
    func = Func("old", 0x500010)
    func.convention = "__stdcall"
    func.return_type = INT
    func.parameters = [ghidra_fake.Variable("self", INT)]
    diffs, _ = ass.diff_live(item_for(varargs = True), func, resolve)
    assert diffs == [("name", "old", "core_a.cpp_CBox_grow_FUN_00500010"), ("conv", "__stdcall", "__cdecl"),
                     ("ret", "int", "void"), ("param0.name", "self", "this_ptr"),
                     ("param0.type", "int", "CBox *"), ("varargs", "False", "True")]
    func.parameters = []
    func.return_type = None
    diffs, _ = ass.diff_live(item_for(name = None, conv = None), func, resolve)
    assert diffs == [("ret", "<none>", "void"), ("params", "0 param(s)", "1 param(s)")]


def test_an_unresolved_type_or_broken_storage_blocks():
    resolve = ass.make_resolver(program_with())
    assert ass.diff_live(item_for(ret = "Nope", params = [{"name": "a", "type": "Gone"}]), matching_func(),
                         resolve) == (None, "unresolved type(s): Gone, Nope")
    broken = matching_func()
    broken.broken = True
    diffs, blocked = ass.diff_live(item_for(), broken, resolve)
    assert diffs is None and blocked.startswith("getReturnType() raised (IndexOutOfBounds)")


def test_the_guards_catch_a_renamed_or_reshaped_function():
    func = Func("core_a.cpp_other_FUN_00500010", 0x500010)
    assert ass.check_guards(item_for(expect_name = "core_a.cpp_FUN_00500010"), func, False)[0] == "STALE"
    func.name = "core_a.cpp_CBox_grow_FUN_00500010"
    assert ass.check_guards(item_for(expect_name = "x"), func, False) == (None, None)
    reshaped = item_for(expect_range = ("00500010", "00500020"))
    action, detail = ass.check_guards(reshaped, func, False)
    assert action == "DRIFT" and detail.startswith("body is 00500010-00500010, ledger recorded 00500010-00500020")
    assert ass.check_guards(reshaped, func, True) == (None, None)
    assert ass.check_guards(item_for(expect_range = ("00500010", "00500010")), func, False) == (None, None)


def test_writing_touches_only_the_fields_that_differ():
    resolve = ass.make_resolver(program_with())
    func = Func("old", 0x500010)
    item = item_for(varargs = True)
    item["_diffs"] = [("name", "old", item["name"]), ("varargs", "False", "True")]
    ass.diff_live(item, func, resolve)
    ass.write_item(None, item, func)
    assert func.getName() == item["name"] and func.varargs and not func.updates
    item["_diffs"] = [("ret", "int", "void")]
    func.parameters = [ghidra_fake.Variable("this_ptr", INT)]
    ass.write_item(None, item, func)
    convention, ret, params, source = func.updates[0]
    assert (convention, ret.args[0], [p.getName() for p in params], source) == \
        ("__cdecl", VOID, ["this_ptr"], SourceType.USER_DEFINED)
    func.unreadable = True
    with pytest.raises(RuntimeError):
        ass.write_item(None, item, func)


def ghidra_plan():
    return [
        item_for(),                                                                    # APPLY
        item_for(addr = "00500020", name = "core_a.cpp_g_FUN_00500020", dst_name = "g"),   # ALREADY
        item_for(addr = "00500030", dst_name = "gone"),                                  # NO-FUNCTION
        item_for(addr = "00500040", name = None, expect_name = "core_a.cpp_FUN_00500040"),  # STALE
        item_for(addr = "00500050", name = None),                                        # BLOCKED custom
        item_for(addr = "00500060", name = None, ret = "Nope"),                          # BLOCKED type
        item_for(addr = "00500070", name = None, basis = None, confidence = None),       # APPLY, refused
    ]


def ghidra_program():
    already = matching_func()
    already.entry = gp.Address(0x500020)
    already.name = "core_a.cpp_g_FUN_00500020"
    stale = Func("core_a.cpp_moved_FUN_00500040", 0x500040)
    custom = Func("c", 0x500050)
    custom.custom_storage = True
    return program_with(Func("core_a.cpp_FUN_00500010", 0x500010), already, stale, custom, Func("t", 0x500060),
                        Func("r", 0x500070, refuse = True))


def test_a_dry_run_diffs_everything_and_writes_nothing(capsys):
    program = ghidra_program()
    plan = ghidra_plan()
    assert ass.diff_and_apply(program, plan, args_for(show = 1), ghidra_fake.JavaObject) == 0
    assert [p["action"] for p in plan] == ["APPLY", "ALREADY", "NO-FUNCTION", "STALE", "BLOCKED", "BLOCKED",
                                           "APPLY"]
    out = capsys.readouterr().out
    assert "LIVE DIFF vs dst.exe   (source: ledger)" in out
    assert "  APPLY        2\n  ALREADY      1\n  STALE        1\n  BLOCKED      2\n  NO-FUNCTION  1\n" in out
    assert "  BLOCKED -- not written:" in out and "    ... and 1 more\n" in out
    assert "  APPLY -- 2 function(s) [?=1  sibling=1], changed fields only:" in out
    assert "    00500010  core_a.cpp_FUN_00500010   (sibling/high)" in out
    assert "    ... and 1 more (raise --show)" in out
    assert "(dry run -- re-run with --apply to write 2 change(s))" in out and not program.transactions


def test_apply_writes_saves_and_reports_what_ghidra_refused(capsys):
    program = ghidra_program()
    plan = ghidra_plan()
    assert ass.diff_and_apply(program, plan, args_for(apply = True, allow_custom_storage = True),
                              ghidra_fake.JavaObject) == 1
    assert plan[4]["action"] == "APPLY" and plan[6]["action"] == "FAILED"
    out = capsys.readouterr().out
    assert "applied 2, failed 1" in out and "  FAILED core_a.cpp_FUN_00500010: refused" in out
    assert program.transactions == [["apply sibling signatures", True]] and program.getDomainFile().saves == 1


def test_a_clean_apply_exits_0_and_nothing_to_apply_writes_nothing(capsys):
    program = ghidra_program()
    plan = ghidra_plan()[:1]
    assert ass.diff_and_apply(program, plan, args_for(apply = True), ghidra_fake.JavaObject) == 0
    assert "Re-export and re-run" in capsys.readouterr().out
    assert ass.diff_and_apply(program, ghidra_plan()[1:2], args_for(apply = True), ghidra_fake.JavaObject) == 0
    assert "Nothing to apply." in capsys.readouterr().out and len(program.transactions) == 1


def test_run_ghidra_exits_with_the_code_and_closes_the_project(exits, monkeypatch):
    pyghidra = FakePyghidra(ghidra_program())
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    with pytest.raises(Exit) as exit_info:
        ass.run_ghidra(ghidra_plan()[:2], args_for())
    assert exit_info.value.args[0] == 0 and pyghidra.closed == 1 and pyghidra.opened[-1] == "/dst.exe"


# --- main -----------------------------------------------------------------------------

@pytest.fixture(name = "ledger_file")
def fixture_ledger_file(tmp_path):
    path = tmp_path / "ledger.json"
    path.write_text(json.dumps({"schema": 1, "entries": [entry()]}), encoding = "utf-8")
    return path


def test_main_lints_a_ledger(ledger_file):
    assert ass.main(["--source", "ledger", "--ledger", str(ledger_file), "--lint"]) == 0


def test_main_diffs_a_ledger_against_its_own_program(ledger_file, exits, monkeypatch, tmp_path, capsys):
    pyghidra = FakePyghidra(ghidra_program())
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    out = tmp_path / "plan.json"
    with pytest.raises(Exit):
        ass.main(["--source", "ledger", "--ledger", str(ledger_file), "--out", str(out)])
    assert pyghidra.opened[-1] == "/dst.exe"
    assert json.loads(out.read_text(encoding = "utf-8"))[0]["addr"] == "00500010"
    assert "ledger " in capsys.readouterr().out


def test_main_stops_on_a_ledger_with_nothing_for_the_target(ledger_file, capsys):
    assert ass.main(["--source", "ledger", "--ledger", str(ledger_file), "--to", "other.exe"]) == 0
    assert "0 entr(ies) for other.exe  (skipped: {'other_program': 1})" in capsys.readouterr().out


def test_main_namecore_reports_offline_unless_applying(repo, exits, monkeypatch, capsys):
    assert ass.main(["--from", "src.exe", "--to", "dst.exe"]) == 0
    assert "(offline report" in capsys.readouterr().out
    assert ass.main(["--from", "src.exe", "--to", "dst.exe", "--no-ghidra", "--apply"]) == 0
    assert "(offline report" not in capsys.readouterr().out
    with pytest.raises(SystemExit, match = "--lint applies to --source ledger"):
        ass.main(["--from", "src.exe", "--to", "dst.exe", "--lint"])
    pyghidra = FakePyghidra(program_with())
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    with pytest.raises(Exit):
        ass.main(["--from", "src.exe", "--to", "dst.exe", "--apply"])
    assert pyghidra.opened[-1] == "/dst.exe"


def test_main_namecore_targets_nocturne_by_default(repo, monkeypatch):
    seen = []
    monkeypatch.setattr(ass, "build_plan_namecore", lambda src, dst: seen.append((src, dst)) or ([], {}, set(), set()))
    assert ass.main([]) == 0 and seen == [("nocedit.exe", "nocturne.exe")]


def test_main_reverts_custom_storage(repo, monkeypatch):
    seen = []
    monkeypatch.setattr(ass, "revert", lambda args: seen.append(args.dst) or 0)
    assert ass.main(["--revert-custom-storage"]) == 0 and seen == ["nocturne.exe"]


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["apply_sibling_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "apply_sibling_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
