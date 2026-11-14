# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, call_rel32
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs, write_bucket, write_json
import sibling_match
import verify_sibling_signatures as vss


def param(offset = 4, size = 4, stack = True):
    return {"storage": {"stack": stack, "offset": offset, "size": size}}


def func(params = (), conv = "__cdecl"):
    return {"conv": conv, "vars": {"params": list(params)}}


@pytest.mark.parametrize("params, expected", [
    ((), (0, 0, "")),
    ((param(4), param(8)), (8, 0, "")),
    ((param(stack = False), param(4, 2)), (4, 1, "")),
    ((param(4, 8),), (8, 0, "")),
    ((param(4, 12),), (None, 0, "by-value aggregate on stack")),
])
def test_only_stack_parameters_count_towards_the_argument_bytes(params, expected):
    assert vss.expected_param_bytes(func(params)) == expected


def test_a_function_without_vars_wants_nothing():
    assert vss.expected_param_bytes({}) == (0, 0, "")


def test_only_a_callee_clean_convention_pops_its_own_arguments():
    assert vss.callee_pop_bytes("__cdecl4") == 4
    assert vss.callee_pop_bytes("__cdecl0") == 0
    assert vss.callee_pop_bytes("__cdecl") is None
    assert vss.callee_pop_bytes("nonsense") is None
    assert vss.callee_pop_bytes(None) is None


# Callees, then callers that reveal their argument bytes three ways.
RET8, RET_MIXED, RET_BARE, NO_RET = 0x00, 0x10, 0x20, 0x30
CALLER_PUSH_POP, CALLER_STORE, CALLER_POP_ECX = 0x100, 0x120, 0x140


def caller_push_pop():
    at_call = at(CALLER_PUSH_POP) + 2
    return b"\x50\x51" + call_rel32(at_call, at(RET_BARE)) + b"\x83\xc4\x08\xc3"


def caller_store():
    # call (an earlier one, where the store scan stops) ; mov [esp+4], eax ; mov [esp], ecx ; call ; ret
    return (call_rel32(at(CALLER_STORE), at(NO_RET)) + b"\x89\x44\x24\x04\x89\x0c\x24"
            + call_rel32(at(CALLER_STORE) + 12, at(RET_BARE)) + b"\xc3")


def caller_pop_ecx():
    return b"\x50" + call_rel32(at(CALLER_POP_ECX) + 1, at(RET_BARE)) + b"\x59\xc3"


BODIES = {RET8: b"\xc2\x08\x00", RET_MIXED: b"\xc2\x04\x00\xc2\x08\x00", RET_BARE: b"\xc3", NO_RET: b"\x90",
          CALLER_PUSH_POP: caller_push_pop(), CALLER_STORE: caller_store(), CALLER_POP_ECX: caller_pop_ecx()}


def program(bodies):
    code = bytearray(b"\xcc" * 0x200)
    records = []
    for offset, body in bodies.items():
        code[offset:offset + len(body)] = body
        records.append(function(at(offset), f"core_a.cpp_f{offset:x}_FUN_{at(offset):08x}", size = len(body)))
    return build_sectioned_pe([(".text", bytes(code), SECTION_EXECUTE)]), records


@pytest.fixture(name = "image")
def fixture_image(monkeypatch, tmp_path):
    annotations = install_programs(monkeypatch, tmp_path, {"b.exe": program(BODIES)})
    write_bucket(annotations, "b.exe", "cross_references", [
        {"from": f"{at(CALLER_PUSH_POP) + 2:08x}", "to": f"{at(RET_BARE):08x}", "type": "UNCONDITIONAL_CALL"},
        {"from": f"{at(CALLER_STORE) + 12:08x}", "to": f"{at(RET_BARE):08x}", "type": "COMPUTED_CALL"},
        {"from": "00401f00", "to": f"{at(RET8):08x}", "type": "DATA"},
        {"from": "nonsense", "to": f"{at(RET8):08x}", "type": "UNCONDITIONAL_CALL"}])
    return sibling_match.Image("b.exe")


def test_a_ret_imm16_states_the_callees_argument_bytes(image):
    def ret(offset):
        return vss.observed_ret_imm(image, image.by_addr[f"{at(offset):08x}"])
    assert (ret(RET8), ret(RET_BARE), ret(RET_MIXED), ret(NO_RET)) == (8, 0, None, None)
    assert vss.observed_ret_imm(image, {"body": [{"start": "zz"}, {"start": "00300000", "end": "00300004"}]}) is None


def test_call_sites_come_from_call_xrefs_only(image):
    assert vss.call_sites_to(image) == {f"{at(RET_BARE):08x}": [at(CALLER_PUSH_POP) + 2, at(CALLER_STORE) + 12]}


def test_callers_show_their_pushes_pops_and_stores(image):
    sites = [at(CALLER_PUSH_POP) + 2]
    assert vss.observed_arg_bytes(image, sites, {}) == (8, 8, None)
    assert vss.observed_arg_bytes(image, [at(CALLER_STORE) + 12], {}) == (0, 0, 8)
    assert vss.observed_arg_bytes(image, [at(CALLER_POP_ECX) + 1], {}) == (4, 4, None)


def test_measurements_without_a_majority_or_a_caller_say_nothing(image):
    cache = {}
    sites = [at(CALLER_PUSH_POP) + 2, at(CALLER_POP_ECX) + 1]
    assert vss.observed_arg_bytes(image, sites, cache) == (None, None, None)
    # Outside any function, and inside an instruction rather than at one.
    assert vss.observed_arg_bytes(image, [0x00300000, at(CALLER_PUSH_POP) + 3], cache) == (None, None, None)
    assert vss._function_insns(image, cache, "00300000") == []


def test_an_unparseable_cleanup_counts_as_none(monkeypatch, image):
    insns = [(0x10, "push", "eax"), (0x11, "call", "x"), (0x16, "add", "esp, nonsense")]
    monkeypatch.setattr(vss, "_function_insns", lambda image, cache, addr: insns)
    monkeypatch.setattr(image, "func_containing", lambda va: "f")
    assert vss.observed_arg_bytes(image, [0x11], {}) == (4, None, None)


def test_an_unreadable_body_has_no_instructions(image):
    image.by_addr["00300000"] = {"body": [{"start": "00300000", "end": "00300004"}]}
    assert vss._function_insns(image, {}, "00300000") == []


@pytest.fixture(name = "measured")
def fixture_measured(monkeypatch):
    def set_measurements(ret = None, args = (None, None, None)):
        monkeypatch.setattr(vss, "observed_ret_imm", lambda image, f: ret)
        monkeypatch.setattr(vss, "observed_arg_bytes", lambda image, sites, cache: args)
    return set_measurements


@pytest.mark.parametrize("a_func, ret, args, verdict, detail", [
    (func(conv = "__fake"), None, (None, None, None), "unverifiable", "convention __fake not in the cspec"),
    (func([param(4, 12)]), None, (None, None, None), "unverifiable", "by-value aggregate on stack"),
    (func([param(4)], "__cdecl4"), None, (None, None, None), "unverifiable", "__cdecl4 declares RET 4 but none found"),
    (func([param(4)], "__cdecl4"), 4, (None, None, None), "agree", "RET 4 == 4 stack bytes"),
    (func([param(4)], "__cdecl4"), 8, (None, None, None), "conflict", "RET 8 vs __cdecl4 extrapop 4 vs 4 stack bytes"),
    (func([param(4), param(stack = False)]), 4, (None, None, None), "agree", "RET 4 == 4 stack bytes (+1 in registers)"),
    (func([param(4)]), 8, (None, None, None), "conflict", "RET 8 vs 4 stack bytes"),
    (func([param(4)]), None, (None, 4, None), "agree", "callers pop 4 == 4 stack bytes"),
    (func([param(4)]), None, (4, None, None), "agree", "callers push 4 == 4 stack bytes"),
    (func([param(4)]), None, (None, None, 4), "agree", "callers store 4 == 4 stack bytes"),
    (func([param(4)]), None, (None, 8, None), "conflict", "callers pop 8 vs 4 stack bytes (push None, store None)"),
    (func([param(4)]), None, (12, 8, None), "unverifiable", "no conclusive measurement; wants 4 (pop 8, push 12, store None)"),
])
def test_a_pair_is_judged_by_what_the_targets_bytes_measure(measured, a_func, ret, args, verdict, detail):
    measured(ret, args)
    assert vss.verify_pair(a_func, {}, None, (), {}) == (verdict, detail)


# CBase's table and two derived tables that inherit slot 0 and override slot 1; an unrelated
# class sharing only a folded stub; a branch sharing only slot 0 with the first.
def table(*slots):
    return {"functions": [{"func_addr": s} for s in slots] + [{}]}


VTABLES = [table("B0", "B1", "STUB", "STUB"), table("B0", "D1", "STUB"), table("B0", "E1", "E2"),
           table("X0", "X1", "STUB"), table("B0", "")]


def test_overrides_of_one_virtual_are_found_through_tables_that_share_a_deeper_slot():
    peers = vss.override_peers([table("B0", "B1", "B2"), table("B0", "D1", "B2"), table("B0", "E1")])
    assert peers["b1"] == {("d1", 1)} and peers["d1"] == {("b1", 1)}
    assert "e1" not in peers


def test_a_folded_stub_links_nothing_and_a_shared_base_alone_says_nothing_past_it():
    peers = vss.override_peers(VTABLES)
    assert peers == {}


def result(b, verdict):
    return {"b": b, "sig_verdict": verdict, "sig_detail": ""}


def test_an_unverifiable_override_takes_the_size_its_verified_peers_agree_on():
    peers = {"f": {("g", 3), ("h", 3)}, "k": {("g", 3)}, "m": {("g", 3), ("n", 3)}, "q": {("x", 3)}}
    results = [result("g", "agree"), result("h", "agree"), result("n", "agree"), result("f", "unverifiable"),
               result("k", "unverifiable"), result("m", "unverifiable"), result("q", "unverifiable"),
               result("z", "unverifiable")]
    expected = {"g": 8, "h": 8, "n": 4, "f": 8, "k": 4, "m": 8, "q": 8, "z": None}
    assert vss.propagate_through_slots(results, expected, peers) == 1
    assert results[3] == {"b": "f", "sig_verdict": "agree",
                          "sig_detail": "vtable slot 3 shares 8 stack bytes with verified override g"}
    assert [r["sig_verdict"] for r in results[4:]] == ["unverifiable"] * 4


# -- the whole run -------------------------------------------------------------------------

@pytest.fixture(name = "mapping")
def fixture_mapping(monkeypatch, tmp_path):
    source = [function(at(0x10 * i), f"core_a.cpp_CX_m{i}_FUN_{at(0x10 * i):08x}", conv = "__cdecl",
                       vars = {"params": [param(4)]}) for i in range(4)]
    target_code = {0x00: b"\xc2\x04\x00", 0x10: b"\xc2\x08\x00", 0x20: b"\xc3", 0x30: b"\xc3"}
    pe, target = program(target_code)
    annotations = install_programs(monkeypatch, tmp_path, {
        "a.exe": (build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)]), source), "b.exe": (pe, target)})
    # b's first and third functions override one virtual; the fourth has no peer.
    write_bucket(annotations, "b.exe", "vtables", [
        table(f"{at(0x00):08x}", "S1", "Z"), table(f"{at(0x20):08x}", "S1", "Z")])
    pairs = [{"a": f"{at(0x10 * i):08x}", "b": f"{at(0x10 * i):08x}", "name": f"core_a.cpp_CX_m{i}",
              "confidence": c} for i, c in enumerate((0.99, 0.92, 0.85, 0.5))]
    pairs.append({"a": "00300000", "b": f"{at(0):08x}", "name": "gone", "confidence": 0.9})
    return write_json(tmp_path / "mapping.json", {"from": "a.exe", "to": "b.exe", "pairs": pairs})


def test_main_verifies_every_pair_and_writes_the_verdicts(mapping, tmp_path, capsys):
    out = tmp_path / "verified.json"
    vss.main([mapping, "--out", str(out), "--list-conflicts"])
    printed = capsys.readouterr().out
    assert "verified 4 pairs" in printed
    assert "agree        :     2" in printed and "conflict     :     1" in printed
    assert "(1 of the agreements through a verified override of the same virtual)" in printed
    assert "of the 3 measurable pairs, 66.7% agree" in printed
    assert "1 of 1 signature conflicts" in printed and "RET 8 vs 4 stack bytes" in printed
    verdicts = [p["sig_verdict"] for p in json.loads(out.read_text())["pairs"]]
    assert verdicts == ["agree", "conflict", "agree", "unverifiable"]


def test_main_without_conflicts_or_output_only_reports(mapping, tmp_path, capsys):
    doc = json.loads((tmp_path / "mapping.json").read_text())
    doc["pairs"] = doc["pairs"][3:4]
    write_json(tmp_path / "mapping.json", doc)
    vss.main([mapping, "--show", "0"])
    printed = capsys.readouterr().out
    assert "unverifiable :     1" in printed and "measurable" not in printed and "through a verified" not in printed


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["verify_sibling_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "verify_sibling_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
