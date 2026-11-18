# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidraPrograms
import ghidra_fake
import ghidra_program as gp
from repo_paths import SCRIPTS_DIR
import transfer_custom_storage as tcs

VariableStorage = ghidra_fake.VariableStorage
INT = ghidra_fake.DataType("int", 4)
CBOX = ghidra_fake.DataType("CBox", 8)
UNDEFINED = ghidra_fake.DataType("undefined4", 4)
ST0 = ghidra_fake.Register("ST0", 0, 80)


class Storage:
    """A variable's storage: its varnodes, whether it is void, and how Ghidra prints it."""

    def __init__(self, text, varnodes = (), void = False):
        self.text, self.varnodes, self.void = text, list(varnodes), void

    def getVarnodes(self):
        return self.varnodes

    def isVoidStorage(self):
        return self.void

    def __str__(self):
        return self.text


ST0_STORAGE = Storage("ST0:10", [ghidra_fake.Varnode(ST0, 10)])
STACK_STORAGE = Storage("Stack[0x4]:4", [ghidra_fake.Varnode(4, 4)])


def var(name, data_type, storage = ST0_STORAGE):
    return ghidra_fake.Variable(name, data_type, storage)


class Func:
    """A function with a prototype Ghidra may refuse, or accept and leave unreadable or short."""

    def __init__(self, entry, params = (), ret = None, custom = True, conv = "__fpustack", *, raises = False,
                 breaks = False, short = False, repair_raises = False, stuck = False):
        self.entry = gp.Address(entry)
        self.params = list(params)
        self.ret = ret if ret is not None else var("<RETURN>", INT)
        self.custom, self.conv = custom, conv
        self.raises, self.breaks, self.short = raises, breaks, short
        self.repair_raises, self.stuck = repair_raises, stuck
        self.broken = False
        self.updates, self.repaired = [], []

    def getEntryPoint(self):
        return self.entry

    def getParameters(self):
        if self.broken:
            raise RuntimeError("storage half-assigned")
        return list(self.params)

    def getParameterCount(self):
        return len(self.params) - (1 if self.short else 0)

    def getReturn(self):
        return self.ret

    def getReturnType(self):
        return None if self.ret is None else self.ret.getDataType()

    def getSignature(self):
        return "sig"

    def getSignatureSource(self):
        return "USER_DEFINED"

    def getCallingConventionName(self):
        return self.conv

    def hasCustomVariableStorage(self):
        return self.custom

    def setCustomVariableStorage(self, value):
        self.custom = value

    # The repair: an explicit return type after clearing the flag
    def setReturnType(self, data_type, source):
        self.repaired.append((repr(data_type), repr(source)))
        if self.repair_raises:
            raise RuntimeError("repair")
        self.broken = self.stuck

    def updateFunction(self, conv, ret, params, update_type, _force, _source):
        self.updates.append((conv, ret, list(params), update_type))
        if self.raises:
            self.broken = self.breaks
            raise ghidra_fake.IllegalArgumentException("no storage for ST0\nmore")
        self.params, self.ret, self.conv = list(params), ret, conv
        self.broken = self.breaks


def program(*funcs):
    prog = gp.Program()
    prog.data_type_manager.add(INT, CBOX)
    for f in funcs:
        prog.function_manager.functions[f.entry] = f
    return prog


def pair(a, b, **extra):
    return {"a": a, "b": b, "name": "core_a.cpp_f_FUN_" + a, "confidence": 0.99, **extra}


# --- choosing pairs -----------------------------------------------------------------

def test_a_pair_qualifies_on_the_appliers_signature_evidence():
    pairs = [pair("A1", "B1", sig_verdict = "agree"),
             pair("a2", "b2", sig_verdict = "unverifiable", sig_structural = True),
             pair("a3", "b3", sig_verdict = "unverifiable"),
             pair("a4", "b4", sig_verdict = "conflict", shape_agreement = "identical"),
             pair("a5", "b5", sig_verdict = "agree", ambiguous = True),
             pair("a6", "b6", sig_verdict = "agree", sig_rewrite = {"conv": "__stack_esi"}),
             pair("a7", "b7", sig_verdict = "unverifiable", shape_agreement = "identical", confidence = 0.5),
             pair("a8", "B8", sig_verdict = "agree"),
             pair("a9", "b9", sig_verdict = "unverifiable", shape_agreement = "identical"),
             pair("aa", "ba", sig_verdict = "agree", shape_agreement = "size_mismatch")]
    mapping = {"pairs": pairs}
    assert sorted(tcs.eligible_pairs(mapping, 0.9, {"b8"})) == ["a1", "a9"]
    assert sorted(tcs.eligible_pairs(mapping, 0.9, {"b8"}, trust_measured = True,
                                     trust_structural = True)) == ["a1", "a2", "a9", "aa"]
    assert tcs.eligible_pairs({}, 0.9) == {}


# --- reading a prototype ------------------------------------------------------------

def test_a_prototype_is_readable_only_if_every_part_enumerates():
    func = Func(0x10, [var("x", INT)])
    assert tcs.readable(func)
    func.ret = None
    assert tcs.readable(func)
    func.broken = True
    assert not tcs.readable(func)


def test_storage_is_compared_as_ghidra_prints_it():
    assert tcs.storage_key(var("x", INT)) == "ST0:10"
    assert tcs.storage_key(ghidra_fake.Variable("x", INT, None)) is not None
    nothing = var("x", INT)
    nothing.storage = None
    assert tcs.storage_key(nothing) == ""


def test_a_target_matches_only_with_the_same_custom_prototype():
    source = Func(0x10, [var("x", INT)])
    assert tcs.already_matches(source, Func(0x20, [var("x", INT)]))
    assert not tcs.already_matches(source, Func(0x20, [var("x", INT)], custom = False))
    assert not tcs.already_matches(source, Func(0x20, []))
    assert not tcs.already_matches(source, Func(0x20, [var("y", INT)]))
    assert not tcs.already_matches(source, Func(0x20, [var("x", CBOX)]))
    assert not tcs.already_matches(source, Func(0x20, [var("x", INT, STACK_STORAGE)]))
    assert not tcs.already_matches(source, Func(0x20, [var("x", INT)], ret = var("<RETURN>", CBOX)))
    assert not tcs.already_matches(source, Func(0x20, [var("x", INT)], ret = var("<RETURN>", INT, STACK_STORAGE)))
    broken = Func(0x20, [var("x", INT)])
    broken.broken = True
    assert not tcs.already_matches(source, broken)


def test_storage_is_rebuilt_against_the_target_or_is_a_singleton():
    target = object()
    rebuilt = tcs.storage_for(var("x", INT), target)
    assert isinstance(rebuilt, VariableStorage) and rebuilt.where == ST0_STORAGE.varnodes
    assert tcs.storage_for(var("x", INT, Storage("<VOID>", void = True)), target) is VariableStorage.VOID_STORAGE
    assert tcs.storage_for(var("x", INT, Storage("<UNASSIGNED>")), target) is VariableStorage.UNASSIGNED_STORAGE
    none = Storage("<UNASSIGNED>")
    none.varnodes = None
    assert tcs.storage_for(var("x", INT, none), target) is VariableStorage.UNASSIGNED_STORAGE


def test_types_resolve_by_name_in_the_target_or_name_what_is_missing():
    dtm = program().getDataTypeManager()
    pointer = ghidra_fake.DataType("CBox *", 4)
    types, missing = tcs.target_types(Func(0x10, [var("this", pointer), var("x", INT)]), dtm, {})
    assert missing is None and types[0] is INT and [t.getName() for t in types[1]][1] == "int"
    assert types[1][0].getDataType() is CBOX
    assert tcs.target_types(Func(0x10, [var("s", ghidra_fake.DataType("_ostream *"))]), dtm, {}) == (None,
                                                                                                    "_ostream *")
    assert tcs.target_types(Func(0x10, ret = var("<RETURN>", ghidra_fake.DataType("Nope"))), dtm, {}) == (None,
                                                                                                         "Nope")


# --- planning ---------------------------------------------------------------------

def test_jobs_are_eligible_sources_with_custom_storage_and_a_target():
    src = program(Func(0x10), Func(0x20, custom = False), Func(0x30), Func(0x40))
    dst = program(Func(0x110), Func(0x120))
    wanted = {"00000010": pair("00000010", "00000110"), "00000020": pair("00000020", "00000120"),
              "00000030": pair("00000030", "00000999")}
    jobs = tcs.find_jobs(src, dst, wanted)
    assert [(sf.entry.getOffset(), tf.entry.getOffset()) for sf, tf, _ in jobs] == [(0x10, 0x110)]


def test_the_plan_skips_a_match_a_typed_target_and_a_missing_type():
    dtm = program().getDataTypeManager()
    source = Func(0x10, [var("x", INT)])
    jobs = [(source, Func(0x20, [var("x", INT)]), pair("a", "b")),
            (source, Func(0x30, [var("x", INT)], custom = False), pair("a", "c")),
            (Func(0x10, [var("x", ghidra_fake.DataType("Nope"))]), Func(0x40, [var("x", UNDEFINED)], custom = False),
             pair("a", "d")),
            (source, Func(0x50, [var("x", UNDEFINED)], custom = False), pair("a", "e"))]
    planned = tcs.plan(jobs, dtm)
    assert [(action, detail) for _, action, detail, _ in planned] == [
        ("same", ""), ("typed", "target prototype already typed"), ("missing", "Nope"), ("write", "")]
    assert planned[3][3] == (INT, [INT])


# --- writing ----------------------------------------------------------------------

def write_row(target, source = None):
    source = source or Func(0x10, [var("x", INT)])
    return ((source, target, pair("a", "b")), "write", "", (INT, [INT]))


def test_a_write_copies_the_convention_types_and_storage():
    dst = program()
    target = Func(0x20, [var("x", UNDEFINED)], custom = False, conv = "__cdecl")
    same = ((Func(0x10), Func(0x30), pair("a", "c")), "same", "", None)
    done, problems, unrepaired = tcs.apply_plan(dst, [write_row(target), same])
    assert (done, problems, unrepaired) == (1, [], [])
    conv, ret, params, update = target.updates[0]
    assert (conv, ret.getDataType(), [p.getName() for p in params]) == ("__fpustack", INT, ["x"])
    assert params[0].getVariableStorage().where == ST0_STORAGE.varnodes
    assert repr(update) == "FunctionUpdateType.CUSTOM_STORAGE"
    assert dst.transactions == [["custom storage 00000020", True]]


@pytest.mark.parametrize("flags, message", [({"raises": True}, "no storage for ST0"),
                                            ({"breaks": True}, "unreadable after write"),
                                            ({"short": True}, "parameter count 0 != source 1")])
def test_a_refused_or_unreadable_write_is_rolled_back_and_repaired(flags, message):
    dst = program()
    target = Func(0x20, [var("x", UNDEFINED)], custom = False, **flags)
    if flags.get("short"):
        target.short = False
        target.updateFunction = shorten(target)
    done, problems, unrepaired = tcs.apply_plan(dst, [write_row(target)])
    assert (done, unrepaired) == (0, []) and problems == [("00000020", "__fpustack", message)]
    assert dst.transactions == [["custom storage 00000020", False], ["repair 00000020", True]]
    assert not target.custom and target.repaired == [("VoidDataType.dataType", "SourceType.USER_DEFINED")]


def shorten(target):
    original = target.updateFunction

    def update(*args):
        original(*args)
        target.short = bool(args[2])
    return update


def test_a_repair_that_cannot_make_it_readable_is_reported():
    dst = program()
    stuck = Func(0x20, custom = False, raises = True, breaks = True, stuck = True)
    refused = Func(0x30, custom = False, raises = True, breaks = True, repair_raises = True)
    _, problems, unrepaired = tcs.apply_plan(dst, [write_row(stuck), write_row(refused)])
    assert len(problems) == 2 and unrepaired == ["00000020", "00000030"]


def test_the_report_counts_actions_and_conventions(capsys):
    source = Func(0x10, conv = None)
    tcs.report([((source, Func(0x20), pair("a", "b")), "write", "", None),
                ((Func(0x10), Func(0x30), pair("a", "c")), "missing", "Nope", None)])
    out = capsys.readouterr().out
    assert "plan: write=1  missing=1" in out and "  ?                      1" in out
    assert "  missing 00000030 <- a  __fpustack         core_a.cpp_f_FUN_a  (Nope)" in out


# --- main ---------------------------------------------------------------------------

class Exit(Exception):
    pass


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    src = program(Func(0x10, [var("x", INT)]), Func(0x30, [var("x", INT)]))
    good = Func(0x110, [var("x", UNDEFINED)], custom = False)
    bad = Func(0x130, [var("x", UNDEFINED)], custom = False, raises = True)
    dst = program(good, bad)
    pairs = [pair("00000010", "00000110", sig_verdict = "agree"),
             pair("00000030", "00000130", sig_verdict = "unverifiable", sig_structural = True)]
    mapping = tmp_path / "map.json"
    mapping.write_text(json.dumps({"pairs": pairs}), encoding = "utf-8")
    wall = tmp_path / "wall.json"
    wall.write_text(json.dumps({"crt_interior": []}), encoding = "utf-8")
    pyghidra = FakePyghidraPrograms({"nocedit.exe": src, "bw1.exe": dst})
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)

    def fake_exit(code):
        raise Exit(code)

    monkeypatch.setattr(tcs.os, "_exit", fake_exit)
    return {"dst": dst, "good": good, "bad": bad, "mapping": mapping, "wall": wall, "pyghidra": pyghidra,
            "tmp": tmp_path}


def run_main(world, *extra):
    with pytest.raises(Exit) as exit_info:
        tcs.main([str(world["tmp"]), "Proj", "bw1.exe", "--mapping", str(world["mapping"]), *extra])
    return exit_info.value.args[0]


def test_a_dry_run_reports_and_writes_nothing(world, capsys):
    assert run_main(world, "--crt-wall", str(world["wall"])) == 0
    out = capsys.readouterr().out
    assert "1 pair(s) eligible" in out and "1 have custom storage and a target function" in out
    assert "[dry-run]" in out and not world["good"].updates and world["dst"].domain_file.saves == 0
    assert world["pyghidra"].opened[-2:] == ["/nocedit.exe", "/bw1.exe"] and world["pyghidra"].closed == 1


def test_apply_writes_reports_rejections_and_saves(world, capsys):
    assert run_main(world, "--apply", "--trust-structural-signature") == 0
    out = capsys.readouterr().out
    assert "transferred 1, rejected 1" in out and "00000130 conv=__fpustack" in out
    assert "confirm from a fresh process: repair_broken_signatures.py --program bw1.exe" in out
    assert "UNREADABLE" not in out and world["dst"].domain_file.saves == 1


def test_apply_names_what_it_left_unreadable(world, capsys):
    world["bad"].breaks = world["bad"].stuck = True
    run_main(world, "--apply", "--trust-structural-signature")
    assert "1 function(s) left UNREADABLE" in capsys.readouterr().out


def test_apply_with_nothing_to_write_saves_nothing(world, capsys):
    world["good"].custom = True
    world["good"].params = [var("x", INT)]
    assert run_main(world, "--apply") == 0
    assert "transferred 0, rejected 0" in capsys.readouterr().out and world["dst"].domain_file.saves == 0


def test_a_failure_exits_1(world, monkeypatch, capsys):
    def refuse(*_args):
        raise RuntimeError("locked")

    monkeypatch.setattr(world["pyghidra"], "open_project", refuse)
    assert run_main(world) == 1
    assert "ERROR: locked" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    called = []
    monkeypatch.setattr(sys, "argv", ["transfer_custom_storage.py", "--help"])
    with pytest.raises(SystemExit):
        runpy.run_path(os.path.join(SCRIPTS_DIR, "transfer_custom_storage.py"), run_name = "__main__")
    assert not called
