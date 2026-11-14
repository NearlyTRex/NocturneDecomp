# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Address, Program
from repo_paths import SCRIPTS_DIR
import set_missing_conventions as smc

BASE = 0x1000


class Image:
    """Bytes at BASE, with the functions the plan reads."""

    def __init__(self, code = b"", functions = ()):
        self.data = code
        self.functions = list(functions)

    def va2off(self, va):
        return va - BASE if BASE <= va < BASE + len(self.data) else None


def stack(offset = 4):
    return {"name": "p", "type": "int", "storage": {"stack": True, "offset": offset, "size": 4}}


def record(addr = "00001000", name = "core_a.cpp_f_FUN_00001000", params = (), ret_storage = None, **extra):
    out = {"addr": addr, "name": name, "ret": "int", "vars": {"params": list(params)}, **extra}
    if ret_storage is not None:
        out["vars"]["ret_storage"] = ret_storage
    return out


@pytest.mark.parametrize("code, live", [
    (bytes.fromhex("8b0e c3"), ["esi"]),                    # mov ecx,[esi]; ret
    (bytes.fromhex("56 8b742408 8b06 c3"), []),             # push esi; mov esi,[esp+8]; mov eax,[esi]
    (bytes.fromhex("31c0 01d0 01d0 c3"), ["edx"]),          # xor eax,eax; add eax,edx (twice)
    (bytes.fromhex("e800000000 8b06"), []),                 # a call ends the scan
    (bytes.fromhex("29db 8b03 c3"), []),                    # sub ebx,ebx zeroes, not reads
    (bytes.fromhex("8b03"), ["ebx"]),                       # the bytes end before any branch
])
def test_an_argument_register_read_before_it_is_written_is_live_on_entry(code, live):
    assert smc.live_on_entry(Image(code), record()) == live


def test_an_entry_outside_the_image_reads_nothing():
    assert smc.live_on_entry(Image(b""), record()) == []


def test_only_committed_non_thunk_game_functions_without_a_convention_are_candidates():
    rows = [record(), record(conv = "__cdecl"), record(sig = "analysis"), record(thunk = True),
            record(name = "crt_x.c_f"), {"name": "no address"}]
    assert smc.candidates(rows) == [rows[0]]


@pytest.fixture(name = "verdicts")
def fixture_verdicts(monkeypatch):
    def set_verdict(verdict, detail = "detail"):
        monkeypatch.setattr(smc.vss, "verify_pair", lambda a, b, image, sites, cache: (verdict, detail))
    return set_verdict


CLEAN = Image(bytes.fromhex("c3"))


@pytest.mark.parametrize("rec, twins, measured, expected", [
    (record(), [record(conv = "__stack_esi")], "agree", ("twin", "__stack_esi", "__stack_esi, same types")),
    (record(params = [stack()]), [record(conv = "__stack_esi")], "agree",
     ("review", None, "twin is __stack_esi with other types: int()")),
    (record(params = [{"storage": {"stack": False}}]), [], "agree", ("review", None, "register parameter")),
    (record(ret_storage = {"size": 4}), [], "agree", ("review", None, "return not in a register")),
    (record(ret_storage = {"reg": "EAX"}), [record(conv = "__cdecl")], "conflict", ("review", None, "detail")),
    (record(), [], "agree", ("cdecl", "__cdecl", "callers agree")),
    (record(), [record(), record()], "unverifiable", ("cdecl, unmeasured", "__cdecl", "no measuring call site")),
])
def test_a_candidate_takes_a_twins_convention_or_cdecl_only_when_nothing_contradicts_it(
        verdicts, rec, twins, measured, expected):
    verdicts(measured)
    assert smc.classify(rec, twins, CLEAN, (), {}) == expected


def test_a_function_reading_a_register_on_entry_is_left_for_review(verdicts):
    verdicts("agree")
    assert smc.classify(record(), [], Image(bytes.fromhex("8b06c3")), (), {}) == ("review", None, "reads esi on entry")


ROWS = [record("00001000", "core_a.cpp_CA_f_FUN_00001000"),
        record("00001001", "core_a.cpp_CA_g_FUN_00001001"),
        record("00001002", "core_a.cpp_CA_h_FUN_00001002", conv = "__cdecl")]
REFERENCE = [record("00009000", "core_a.cpp_CA_g_FUN_00009000", conv = "__stack_esi")]


def test_the_plan_lists_review_first_and_the_report_groups_by_verdict(verdicts, monkeypatch):
    verdicts("unverifiable")
    monkeypatch.setattr(smc.vss, "call_sites_to", lambda image: {})
    rows = smc.plan(ROWS, REFERENCE, Image(bytes.fromhex("c3c3c3")))
    assert [(r["addr"], v) for r, v, _c, _d in rows] == [("00001001", "twin"), ("00001000", "cdecl, unmeasured")]
    lines = smc.render("bw1.exe", "nocedit.exe", rows)
    assert lines[0] == ("bw1.exe: 2 committed signature(s) with no convention, against nocedit.exe: "
                        "1 twin, 1 cdecl, unmeasured")
    assert "-- twin --  1" in lines
    assert [(r["addr"], c) for r, c in smc.to_set(rows)] == [("00001001", "__stack_esi"), ("00001000", "__cdecl")]
    assert smc.render("e.exe", "n.exe", []) == ["e.exe: 0 committed signature(s) with no convention, against n.exe: "]


def program_with_functions():
    program = Program()
    fm = program.getFunctionManager()
    for name, addr, conv in (("core_a.cpp_CA_f_FUN_00001000", 0x1000, "unknown"),
                             ("core_a.cpp_CA_g_FUN_00001001", 0x1001, "__cdecl"),
                             ("renamed", 0x1002, "unknown")):
        fm.add(name, addr).convention = conv
    return program


CHOSEN = [(ROWS[0], "__cdecl"), (ROWS[1], "__stack_esi"),
          (record("00001002", "core_a.cpp_CA_h_FUN_00001002"), "__cdecl"), (record("00002000"), "__cdecl")]


def test_setting_takes_only_a_function_still_named_as_exported_and_still_unknown():
    program = program_with_functions()
    done = smc.set_conventions(program, CHOSEN)
    assert dict(done) == {"set __cdecl": 1, "already set": 1, "changed since export": 2}
    assert program.getFunctionManager().getFunctionAt(Address(0x1000)).getCallingConventionName() == "__cdecl"
    assert program.transactions == [["Set missing calling conventions", True]]


@pytest.fixture(name = "loaded")
def fixture_loaded(monkeypatch, verdicts):
    verdicts("agree")
    monkeypatch.setattr(smc.sm, "Image", lambda program: Image(bytes.fromhex("c3c3c3"), ROWS))
    monkeypatch.setattr(smc.sm, "_load_buckets", lambda program, kind: REFERENCE)
    monkeypatch.setattr(smc.vss, "call_sites_to", lambda image: {})


def test_main_reports_without_applying(loaded, capsys):
    assert smc.main(["proj", "P", "bw1.exe"]) == 0
    out = capsys.readouterr().out
    assert out.startswith("bw1.exe: 2 committed") and out.rstrip().endswith("(dry run -- --apply sets 2)")


def test_main_sets_and_saves(loaded, monkeypatch, capsys):
    program = program_with_functions()
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    assert smc.main(["proj", "P", "bw1.exe", "--apply"]) == 0
    assert capsys.readouterr().out.rstrip().endswith("already set=1  set __cdecl=1")
    assert program.getDomainFile().saves == 1 and pyghidra.closed == 1
    assert pyghidra.opened == [(os.path.abspath("proj"), "P"), "/bw1.exe"]


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["set_missing_conventions.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "set_missing_conventions.py"), run_name = "__main__")
    assert exit_info.value.code == 0
