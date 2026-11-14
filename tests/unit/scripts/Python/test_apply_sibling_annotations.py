# Imports
import importlib
import json
import os
import re
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
import ghidra_fake
import ghidra_program as gp
from repo_paths import SCRIPTS_DIR
import apply_sibling_annotations as asa

SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

INT = ghidra_fake.DataType("int", 4)
CHAR = ghidra_fake.DataType("char", 1)
CBOX = ghidra_fake.DataType("CBox", 8, category = "/Nocturne/Struct")


def pair(a, b, name, confidence = 0.99, **extra):
    """A mapped pair. `name` is the source's, written `..._FUN_<a>` for short; it gets a real suffix."""
    core = re.sub(r"_FUN_\w+$", "", name)
    return {"a": a, "b": b, "name": f"{core}_FUN_00900000", "confidence": confidence, **extra}


def by_b(rows):
    return {r["b"]: r for r in rows}


# --- the gates ----------------------------------------------------------------------

def test_custom_storage_is_an_fpu_convention_or_a_register_pinned_parameter():
    assert asa.needs_custom_storage("__fpucall", None)
    assert asa.needs_custom_storage("__cdecl", {"params": [{"storage": {"reg": "EAX"}}]})
    assert not asa.needs_custom_storage("__cdecl", {"params": [{"storage": {}}, {}]})
    assert not asa.needs_custom_storage(None, {"params": None})


@pytest.mark.parametrize("shape, verdict, confidence, supported", [
    ("size_mismatch", "agree", 1.0, False),
    ("similar_size", "agree", 0.5, True),
    ("identical", "unverifiable", 0.95, True),
    ("same_mnemonics", "unverifiable", 0.5, False),
    ("identical", "conflict", 1.0, False),
    ("similar_size", "unverifiable", 1.0, False),
])
def test_a_signature_needs_a_measurement_or_a_proven_shape(shape, verdict, confidence, supported):
    assert asa.signature_supported(shape, verdict, confidence, 0.9) is supported


@pytest.mark.parametrize("shape, verdict, pairing_ok, trust, measured", [
    ("size_mismatch", "agree", True, True, True),
    ("size_mismatch", "agree", True, False, False),
    ("size_mismatch", "agree", False, True, False),
    ("size_mismatch", "conflict", True, True, False),
    ("size_mismatch", "unverifiable", True, True, False),
    ("similar_size", "agree", True, True, False),
])
def test_a_measurement_stands_in_for_the_shape_only_when_trusted(shape, verdict, pairing_ok, trust, measured):
    assert asa.measured_despite_shape(shape, verdict, pairing_ok, trust) is measured


def test_a_trusted_measurement_names_an_edited_body_with_its_receiver():
    pairs = [pair("a", "00000001", "core_a.cpp_CBox_grow_FUN_a", shape_agreement = "size_mismatch",
                  sig_verdict = "agree"),
             pair("b", "00000002", "core_a.cpp_CBox_grow_FUN_b", shape_agreement = "size_mismatch",
                  sig_verdict = "conflict"),
             pair("c", "00000003", "core_a.cpp_CBox_grow_FUN_c", confidence = 0.5, shape_agreement = "size_mismatch",
                  sig_verdict = "agree"),
             pair("d", "00000004", "core_a.cpp_grow_FUN_d", shape_agreement = "size_mismatch", sig_verdict = "agree")]
    untrusted = run_plan(pairs, {})
    assert [r["action"] for r in untrusted.values()] == ["SKIP_NO_RECEIVER", "SKIP_NO_RECEIVER", "SKIP_CONF",
                                                         "SKIP_SHAPE"]
    trusted = run_plan(pairs, {}, trust_measured = True)
    assert [r["action"] for r in trusted.values()] == ["NAME_SIG", "SKIP_NO_RECEIVER", "SKIP_CONF", "NAME_SIG"]
    approved = run_plan(pairs[2:3], {}, trust_measured = True, ledger = {"00000003": {"status": "approve"}})
    assert approved["00000003"]["action"] == "NAME_SIG"


@pytest.mark.parametrize("verdict, structural, pairing_ok, trust, supported", [
    ("unverifiable", True, True, True, True),
    ("unverifiable", True, True, False, False),
    ("unverifiable", True, False, True, False),
    ("unverifiable", False, True, True, False),
    ("conflict", True, True, True, False),
    ("unverifiable", None, True, True, False),
])
def test_a_structural_match_carries_only_an_unmeasured_trusted_pair(verdict, structural, pairing_ok, trust,
                                                                    supported):
    assert asa.structural_supported(verdict, structural, pairing_ok, trust) is supported


def test_a_trusted_structural_match_names_a_virtual_with_its_receiver():
    pairs = [pair("a", "00000001", "core_a.cpp_CBox_grow_FUN_a", sig_structural = True),
             pair("b", "00000002", "core_a.cpp_CBox_grow_FUN_b", sig_structural = False),
             pair("c", "00000003", "core_a.cpp_CBox_grow_FUN_c", sig_structural = True, sig_verdict = "conflict")]
    assert [r["action"] for r in run_plan(pairs, {}).values()] == ["SKIP_NO_RECEIVER"] * 3
    trusted = run_plan(pairs, {}, trust_structural = True)
    assert [r["action"] for r in trusted.values()] == ["NAME_SIG", "SKIP_NO_RECEIVER", "SKIP_NO_RECEIVER"]


def test_the_target_keeps_its_own_unit_unless_it_is_a_placeholder():
    assert asa.target_name("core_a.cpp_CA_f_FUN_00000001", "core_b.cpp_FUN_00000010", "00000010") == \
        "core_b.cpp_CA_f_FUN_00000010"
    assert asa.target_name("core_a.cpp_CA_f_FUN_00000001", "unkafter_x.cpp_FUN_00000010", "00000010") == \
        "core_a.cpp_CA_f_FUN_00000010"
    assert asa.target_name("CA_f_FUN_00000001", None, "0000001A") == "CA_f_FUN_0000001a"
    assert asa.target_name("core_a.cpp_FUN_00000001", None, "00000010") is None


@pytest.mark.parametrize("want, cls", [
    ("core_a.cpp_CBox_grow_FUN_00000010", "CBox"),
    ("CBox_grow_FUN_00000010", "CBox"),
    ("core_a.cpp_SVec_dot_FUN_00000010", "SVec"),
    ("core_a.cpp_CBox_set_size_FUN_00000010", "CBox"),
    ("core_a.cpp_grow_FUN_00000010", None),
    ("core_a.cpp_Cabbage_FUN_00000010", None),
    (None, None),
])
def test_the_claimed_class_is_read_with_or_without_a_unit(want, cls):
    assert asa.claimed_class(want) == cls


def run_plan(pairs, current, **kwargs):
    kwargs.setdefault("want_signatures", True)
    return by_b(asa.plan({"pairs": pairs}, kwargs.pop("crt_wall", None), 0.9,
                         kwargs.pop("want_signatures"), current, **kwargs))


def test_each_gate_gives_its_own_action():
    pairs = [
        pair("a1", "00000001", "crt_a.c_f_FUN_a1"),
        pair("a2", "00000002", "core_a.cpp_FUN_a2"),
        pair("a3", "00000003", "core_a.cpp_g_FUN_a3"),
        pair("a4", "00000004", "core_a.cpp_h_FUN_a4"),
        pair("a5", "00000005", "core_b.cpp_k_FUN_a5"),
        pair("a6", "00000006", "core_a.cpp_m_FUN_a6"),
        pair("a7", "00000007", "core_a.cpp_n_FUN_a7", confidence = 0.5, shape_agreement = "identical",
             sig_verdict = "agree"),
        pair("a8", "00000008", "core_a.cpp_p_FUN_a8", confidence = 0.5),
        pair("a9", "00000009", "core_a.cpp_q_FUN_a9", ambiguous = True),
        pair("b1", "0000000A", "core_a.cpp_r_FUN_b1", shape_agreement = "size_mismatch"),
        pair("b2", "0000000b", "core_a.cpp_s_FUN_b2", shape_agreement = "identical"),
        pair("b3", "0000000c", "core_a.cpp_t_FUN_b3"),
    ]
    current = {"00000003": "core_a.cpp_g_FUN_00000003", "00000004": "core_a.cpp_other_FUN_00000004",
               "00000005": "core_a.cpp_FUN_00000005", "00000006": "core_a.cpp_FUN_00000006"}
    ledger = {"00000006": {"status": "reject", "note": "read both"}}
    rows = run_plan(pairs, current, crt_wall = {"crt_interior": ["00000001"]}, ledger = ledger)
    actions = {b: (r["action"], r["detail"]) for b, r in rows.items()}
    assert actions == {
        "00000001": ("SKIP_CRT", ""),
        "00000002": ("SKIP_NAMED", "source name carries no class/method core"),
        "00000003": ("ALREADY", ""),
        "00000004": ("SKIP_NAMED", "already named core_a.cpp_other_FUN_00000004"),
        "00000005": ("SKIP_TU", "unit disagrees: nocturne core_a.cpp vs nocedit core_b.cpp"),
        "00000006": ("SKIP_LEDGER", "rejected on review: read both"),
        "00000007": ("SIG_ONLY", "confidence 0.50: prototype only, name withheld"),
        "00000008": ("SKIP_CONF", "confidence 0.50"),
        "00000009": ("SKIP_CONF", "ambiguous"),
        "0000000a": ("SKIP_SHAPE", "size_mismatch"),
        "0000000b": ("NAME_SIG", ""),
        "0000000c": ("NAME", "signature unverifiable"),
    }
    assert list(rows) == sorted(rows)


def test_without_signatures_a_name_carries_no_detail_and_nothing_is_signatured():
    rows = run_plan([pair("a", "00000001", "core_a.cpp_f_FUN_a", sig_verdict = "agree")], {},
                    want_signatures = False)
    assert (rows["00000001"]["action"], rows["00000001"]["detail"]) == ("NAME", "")


def test_a_supported_signature_names_and_signatures():
    rows = run_plan([pair("a", "00000001", "core_a.cpp_f_FUN_a", sig_verdict = "agree")], {})
    assert rows["00000001"]["action"] == "NAME_SIG"


def test_refresh_resignatures_an_already_named_function_only_on_evidence():
    pairs = [pair("a", "00000001", "core_a.cpp_f_FUN_a", sig_verdict = "agree"),
             pair("b", "00000002", "core_a.cpp_g_FUN_b")]
    current = {"00000001": "core_a.cpp_f_FUN_00000001", "00000002": "core_a.cpp_g_FUN_00000002"}
    rows = run_plan(pairs, current, refresh_signatures = True)
    assert [r["action"] for r in rows.values()] == ["NAME_SIG", "ALREADY"]


def test_a_unit_conflict_can_be_waived_and_a_placeholder_unit_is_no_conflict():
    pairs = [pair("a", "00000001", "core_b.cpp_f_FUN_a"), pair("b", "00000002", "core_b.cpp_g_FUN_b")]
    current = {"00000001": "core_a.cpp_FUN_00000001", "00000002": "crt_unknown.c_FUN_00000002"}
    assert run_plan(pairs[:1], current, require_tu_match = False)["00000001"]["action"] == "NAME"
    assert run_plan(pairs[1:], current)["00000002"]["action"] == "NAME"


def test_an_approved_row_passes_the_confidence_and_shape_gates_but_not_ambiguity():
    pairs = [pair("a", "00000001", "core_a.cpp_f_FUN_a", confidence = 0.3, shape_agreement = "size_mismatch"),
             pair("b", "00000002", "core_a.cpp_g_FUN_b", confidence = 0.3, ambiguous = True)]
    ledger = {"00000001": {"status": "approve"}, "00000002": {"status": "approve"}}
    rows = run_plan(pairs, {}, ledger = ledger)
    assert (rows["00000001"]["action"], rows["00000002"]["action"]) == ("NAME", "SKIP_CONF")


def test_a_bare_class_takes_a_method_only_with_the_upgrade():
    pairs = [pair("a", "00000001", "core_a.cpp_CBox_grow_FUN_a", sig_verdict = "agree"),
             pair("b", "00000002", "core_a.cpp_CBox_grow_FUN_b", sig_verdict = "agree")]
    current = {"00000001": "core_a.cpp_CBox_FUN_00000001", "00000002": "core_a.cpp_CMoon_FUN_00000002"}
    assert run_plan(pairs, current)["00000001"]["action"] == "SKIP_NAMED"
    rows = run_plan(pairs, current, upgrade_class_only = True)
    assert (rows["00000001"]["action"], rows["00000002"]["action"]) == ("NAME_SIG", "SKIP_NAMED")


def test_a_class_name_needs_a_receiver_the_target_has_or_the_signature_brings():
    pairs = [pair("a", "00000001", "core_a.cpp_CBox_grow_FUN_a"),
             pair("b", "00000002", "core_a.cpp_CBox_grow_FUN_b"),
             pair("c", "00000003", "core_a.cpp_CBox_grow_FUN_c"),
             pair("d", "00000004", "core_a.cpp_CBox_grow_FUN_d", sig_verdict = "agree"),
             pair("e", "00000005", "core_a.cpp_CBox_grow_FUN_e")]
    params = {"00000002": 1, "00000003": 2, "00000004": 0, "00000005": 1}
    receiver = {"00000002": "CMoon *", "00000003": "CBox *", "00000005": ""}
    rows = run_plan(pairs, {}, current_params = params, current_receiver = receiver)
    assert {b: r["action"] for b, r in rows.items()} == {
        "00000001": "SKIP_NO_RECEIVER", "00000002": "SKIP_NO_RECEIVER", "00000003": "NAME",
        "00000004": "NAME_SIG", "00000005": "NAME"}
    assert rows["00000002"]["detail"].startswith("name claims class CBox but the target's parameter 0 is CMoon*")
    assert rows["00000001"]["detail"].endswith("needs a signature first")
    assert rows["00000004"]["receiver_from_signature"] and not rows["00000003"]["receiver_from_signature"]


# --- types and signatures ----------------------------------------------------------

def dtm():
    return gp.DataTypeManager([INT, CHAR, CBOX])


def test_a_type_resolves_by_path_then_by_name_with_its_suffixes_rebuilt():
    cache = {}
    manager = dtm()
    assert asa.resolve_type(manager, "int", cache) is INT
    assert asa.resolve_type(manager, "CBox", cache) is CBOX
    pointer = asa.resolve_type(manager, " CBox ** ", cache)
    assert pointer.getName() == "CBox * *" and pointer.getDataType().getDataType() is CBOX
    array = asa.resolve_type(manager, "char [16]", cache)
    assert (array.getNumElements(), array.getDataType()) == (16, CHAR)
    assert asa.resolve_type(manager, "Nope", cache) is None and cache["Nope"] is None
    manager.types.clear()
    assert asa.resolve_type(manager, "int", cache) is INT  # from the cache
    assert asa.resolve_type(manager, None, cache) is None
    assert asa.resolve_type(manager, "  ", cache) is None


def test_a_signature_is_all_or_nothing():
    func = Func("f", 0x10)
    spec = {"ret": "int", "params": [{"name": "this_ptr", "type": "CBox *"}, {"type": "char"}]}
    ret, params = asa.build_signature(dtm(), func, spec, {})
    assert ret.args[0] is INT
    assert [(p.getName(), p.getDataType().getName()) for p in params] == [("this_ptr", "CBox *"),
                                                                        ("param_2", "char")]
    assert asa.build_signature(dtm(), func, {"ret": "Nope"}, {}) is None
    assert asa.build_signature(dtm(), func, {"ret": "int", "params": [{"type": "Nope"}]}, {}) is None
    assert asa.build_signature(dtm(), func, {"ret": "int"}, {})[1] == []


class Func(gp.Function):
    """A function whose prototype Ghidra can refuse, or accept and leave unreadable."""

    def __init__(self, name, entry, reject = False, breaks = False, stuck = False, custom_raises = False,
                 strip_raises = False, rename_raises = False):
        super().__init__(name, gp.Address(entry))
        self.reject, self.breaks, self.stuck = reject, breaks, stuck
        self.custom_raises, self.strip_raises, self.rename_raises = custom_raises, strip_raises, rename_raises
        self.broken = False
        self.updates = []

    def getProgram(self):
        return None

    def getSignature(self):
        if self.broken:
            raise RuntimeError("storage half-assigned")
        return self.name

    def setCustomVariableStorage(self, value):
        if self.custom_raises:
            raise RuntimeError("custom storage")
        super().setCustomVariableStorage(value)

    def setName(self, name, source):
        if self.rename_raises:
            raise RuntimeError("duplicate name")
        super().setName(name, source)

    def updateFunction(self, convention, ret, params, update_type, force, source):
        self.updates.append((convention, list(params), source))
        if not params:  # make_readable stripping the prototype
            if self.strip_raises:
                raise RuntimeError("strip")
            self.broken = self.stuck
            return
        if self.reject:
            self.broken = self.breaks
            raise ghidra_fake.IllegalArgumentException("no storage for ST0")
        super().updateFunction(convention, ret, params, update_type, force, source)
        self.broken = self.breaks


def test_a_readable_signature_enumerates_every_part():
    func = Func("f", 0x10)
    func.parameters = [ghidra_fake.Variable("p", INT)]
    func.return_type = INT
    assert asa.signature_readable(func)
    func.broken = True
    assert not asa.signature_readable(func)


def test_making_readable_strips_the_prototype_when_it_must():
    assert asa.make_readable(Func("f", 0x10, custom_raises = True))
    broken = Func("f", 0x10)
    broken.broken = True
    assert asa.make_readable(broken) and broken.updates[-1][2] == SourceType.ANALYSIS
    stuck = Func("f", 0x10, stuck = True)
    stuck.broken = True
    assert not asa.make_readable(stuck)
    refused = Func("f", 0x10, strip_raises = True)
    refused.broken = True
    assert not asa.make_readable(refused)


SPEC = {"ret": "int", "params": [{"name": "this_ptr", "type": "CBox *"}]}


def row(action, **extra):
    return {"action": action, "want": "core_a.cpp_CBox_grow_FUN_00000010", "current": "core_a.cpp_FUN_00000010",
            "sig": SPEC, "conv": "__cdecl", **extra}


def apply(func, the_row, want_signatures = True, manager = "default"):
    return asa.apply_row(None, func, the_row, want_signatures, dtm() if manager == "default" else manager)


def test_a_name_without_signatures_is_only_a_name():
    func = Func("old", 0x10)
    assert apply(func, row("NAME_SIG"), want_signatures = False) == "name"
    assert func.getName() == "core_a.cpp_CBox_grow_FUN_00000010" and not func.updates


def test_a_name_sig_row_names_and_signatures():
    func = Func("old", 0x10)
    assert asa.apply_row(None, func, row("NAME_SIG"), True, dtm()) == "name+signature"
    convention, params, source = func.updates[0]
    assert (convention, [p.getName() for p in params], source) == ("__cdecl", ["this_ptr"], SourceType.USER_DEFINED)


def test_a_sig_only_row_signatures_and_keeps_the_name():
    func = Func("old", 0x10)
    assert apply(func, row("SIG_ONLY")) == "signature" and func.getName() == "old"


def test_custom_storage_is_left_to_its_own_tool():
    func = Func("old", 0x10)
    assert apply(func, row("NAME_SIG", conv = "__fpucall")) == "name (custom storage)"
    assert apply(Func("old", 0x10), row("SIG_ONLY", conv = "__fpucall")) == "skipped (custom storage)"
    assert not func.updates


def test_an_unbuildable_prototype_leaves_a_convention_or_nothing():
    func = Func("old", 0x10)
    assert apply(func, row("NAME_SIG", sig = {"ret": "Nope"})) == "name+conv" and func.convention == "__cdecl"
    func.convention = "unknown"
    assert apply(func, row("NAME_SIG", conv = None), manager = None) == "name+conv"
    assert func.convention == "unknown"
    assert apply(Func("old", 0x10), row("SIG_ONLY", sig = None)) == "skipped (no prototype)"


def test_a_receiver_only_the_signature_brings_is_never_named_without_it():
    func = Func("old", 0x10)
    assert apply(func, row("NAME_SIG", sig = None, receiver_from_signature = True)) == "skipped (no receiver)"
    assert func.getName() == "old"


def test_the_plan_defers_a_receiver_its_prototype_cannot_bring():
    funcs = {"00000010": Func("old", 0x10)}
    here = {"b": "00000010", "receiver_from_signature": True}
    rows = [row("NAME_SIG", conv = "__fpucall", **here), row("NAME_SIG", sig = {"ret": "Nope"}, **here),
            row("NAME_SIG", sig = None, **here), row("NAME_SIG", **here), row("NAME_SIG", b = "00000010"),
            row("SIG_ONLY", conv = "__fpucall", **here), row("NAME_SIG", b = "00000099", receiver_from_signature = True)]
    asa.defer_unbuildable_receivers(rows, funcs, dtm(), {})
    assert [r["action"] for r in rows] == ["SKIP_NO_RECEIVER"] * 3 + ["NAME_SIG", "NAME_SIG", "SIG_ONLY", "NAME_SIG"]
    assert "custom storage" in rows[0]["detail"] and "a type this program lacks" in rows[1]["detail"]
    assert rows[2]["detail"].startswith("name claims class CBox and only its prototype supplies this_ptr")


def test_an_unreadable_result_is_reset_and_the_receiver_name_undone():
    func = Func("old", 0x10, breaks = True)
    assert apply(func, row("NAME_SIG", receiver_from_signature = True)) == "unreadable, reset"
    assert func.getName() == "core_a.cpp_FUN_00000010"
    stuck = Func("old", 0x10, breaks = True, stuck = True)
    assert apply(stuck, row("NAME_SIG")) == "UNREADABLE"
    assert stuck.getName() == "core_a.cpp_CBox_grow_FUN_00000010"


def test_a_rejected_prototype_says_what_was_kept():
    assert apply(Func("old", 0x10, reject = True), row("NAME_SIG")) == "name (prototype rejected)"
    assert apply(Func("old", 0x10, reject = True), row("SIG_ONLY")) == "prototype rejected"
    func = Func("old", 0x10, reject = True)
    assert apply(func, row("NAME_SIG", receiver_from_signature = True)) == \
        "skipped (prototype rejected, no receiver)"
    assert func.getName() == "core_a.cpp_FUN_00000010"


def test_an_unreadable_rejection_still_puts_the_old_name_back():
    func = Func("old", 0x10, reject = True, breaks = True, stuck = True)
    assert apply(func, row("NAME_SIG", receiver_from_signature = True)) == "UNREADABLE"
    assert func.getName() == "core_a.cpp_FUN_00000010"


def test_undoing_a_name_is_only_for_a_receiver_the_signature_was_to_bring():
    func = Func("new", 0x10)
    assert not asa.undo_receiver_name(func, row("NAME_SIG"))
    assert not asa.undo_receiver_name(func, row("SIG_ONLY", receiver_from_signature = True))
    assert asa.undo_receiver_name(func, row("NAME_SIG", receiver_from_signature = True))
    assert func.getName() == "core_a.cpp_FUN_00000010"


# --- main ---------------------------------------------------------------------------

class SourceImage:
    """The source build's annotations, as sibling_match.Image reads them."""
    by_addr = {"a1": {"ret": "int", "vars": {"params": [{"name": "this_ptr", "type": "CBox *"}]}},
               "a2": {"ret": "Nope"},
               "a4": {"ret": "int"}}

    def __init__(self, program):
        self.program = program


class Exit(Exception):
    pass


def add(program, func):
    program.function_manager.functions[func.entry] = func
    return func


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    """A target program with functions for every outcome, its mapping, wall and ledger on disk."""
    program = gp.Program()
    funcs = {
        "f1": add(program, Func("core_a.cpp_FUN_00000010", 0x10)),
        "f2": add(program, Func("core_a.cpp_FUN_00000020", 0x20)),
        "f3": add(program, Func("core_a.cpp_FUN_00000030", 0x30, rename_raises = True)),
        "f4": add(program, Func("core_a.cpp_FUN_00000040", 0x40)),
        "crt": add(program, Func("crt_a.c_FUN_00000050", 0x50)),
    }
    funcs["f1"].parameters = [ghidra_fake.Variable("this_ptr", ghidra_fake.PointerDataType(CBOX))]
    funcs["f1"].parameter_count = 1
    thunk = add(program, Func("core_a.cpp_FUN_00000010", 0x60))
    thunk.thunk_target = funcs["f1"]
    thunk.source = SourceType.DEFAULT
    program.data_type_manager.add(INT, CBOX)
    pairs = [pair("a1", "00000010", "core_a.cpp_CBox_grow_FUN_a1", sig_verdict = "agree", conv = "__cdecl"),
             pair("a2", "00000020", "core_a.cpp_g_FUN_a2", sig_verdict = "agree"),
             pair("a3", "00000030", "core_a.cpp_h_FUN_a3"),
             pair("a4", "00000040", "core_a.cpp_k_FUN_a4", confidence = 0.4, shape_agreement = "identical",
                  sig_verdict = "agree"),
             pair("a5", "00000050", "crt_a.c_m_FUN_a5"),
             pair("a6", "00000070", "core_a.cpp_n_FUN_a6"),
             pair("a7", "00000099", "core_a.cpp_p_FUN_a7", confidence = 0.2)]
    paths = {"mapping": tmp_path / "map.json", "wall": tmp_path / "wall.json", "ledger": tmp_path / "ledger.json",
             "out": tmp_path / "report.txt"}
    paths["mapping"].write_text(json.dumps({"from": "src.exe", "pairs": pairs}), encoding = "utf-8")
    paths["wall"].write_text(json.dumps({"crt_interior": ["00000050"]}), encoding = "utf-8")
    paths["ledger"].write_text(json.dumps({"entries": [
        {"b": "00000099", "status": "approve"}, {"b": "000000AA", "status": "reject"},
        {"b": "000000BB", "status": "pending"}]}), encoding = "utf-8")
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    monkeypatch.setattr(asa.sm, "Image", SourceImage)

    def fake_exit(code):
        raise Exit(code)

    monkeypatch.setattr(asa.os, "_exit", fake_exit)
    return {"program": program, "funcs": funcs, "thunk": thunk, "paths": paths, "pyghidra": pyghidra,
            "tmp": tmp_path}


def run_main(world, *extra):
    p = world["paths"]
    argv = [str(world["tmp"]), "Proj", "target.exe", "--mapping", str(p["mapping"]), "--crt-wall", str(p["wall"]),
            "--ledger", str(p["ledger"]), "--out", str(p["out"]), *extra]
    with pytest.raises(Exit) as exit_info:
        asa.main(argv)
    return exit_info.value.args[0]


def test_a_dry_run_reports_every_action_and_changes_nothing(world, capsys):
    assert run_main(world, "--signatures") == 0
    out = capsys.readouterr().out
    assert "Ledger: 3 reviewed row(s) -- 1 approved, 1 rejected" in out
    assert "CRT wall: 1 interior functions will be left anonymous" in out
    assert "Loaded prototypes for 3 source functions" in out and "[dry-run]" in out
    report = world["paths"]["out"].read_text(encoding = "utf-8")
    assert report.startswith("Sibling annotation report: target.exe <- src.exe\n")
    assert "mode: report   NAME_SIG=2  NAME=1  SIG_ONLY=1  SKIP_CRT=1  SKIP_NAMED=2" in report
    assert "  00000040 <- a4  0.40  identical      core_a.cpp_FUN_00000040  <- confidence 0.40" in report
    assert "  00000070 <- a6  0.99  unshaped       core_a.cpp_n_FUN_00000070  <- no function at this address" \
        in report
    assert "  00000010 <- a1  0.99  unshaped       core_a.cpp_CBox_grow_FUN_00000010\n" in report
    assert "== THUNK (1) ==\n  00000060 -> 00000010  core_a.cpp_CBox_grow_FUN_00000060\n" in report
    assert world["funcs"]["f1"].getName() == "core_a.cpp_FUN_00000010"
    assert not world["program"].transactions and world["pyghidra"].closed == 1


def test_apply_names_signatures_and_saves_once(world, capsys):
    assert run_main(world, "--signatures", "--apply") == 0
    out = capsys.readouterr().out
    funcs = world["funcs"]
    assert funcs["f1"].getName() == "core_a.cpp_CBox_grow_FUN_00000010" and funcs["f1"].updates
    assert funcs["f2"].getName() == "core_a.cpp_g_FUN_00000020" and funcs["f2"].convention == "__cdecl"
    assert funcs["f4"].getName() == "core_a.cpp_FUN_00000040" and funcs["f4"].updates
    assert world["thunk"].getName() == "core_a.cpp_CBox_grow_FUN_00000060"
    assert "  1 function(s) Ghidra refused; left unchanged:" in out
    assert "      00000030  conv=None  duplicate name" in out
    assert "  1 type(s) the target does not have" in out and "      Nope" in out
    assert world["program"].transactions == [["Apply sibling annotations", True]]
    assert world["program"].getDomainFile().saves == 1 and "Saved." in out


def test_a_rewritten_prototype_replaces_the_sources_convention_and_parameters(world):
    mapping = world["paths"]["mapping"]
    doc = json.loads(mapping.read_text(encoding = "utf-8"))
    doc["pairs"][3]["sig_rewrite"] = {"kind": "esi_output", "output": "out", "conv": "__stack_esi",
                                      "params": [{"name": "count", "type": "int"}, {"name": "out", "type": "int"}]}
    mapping.write_text(json.dumps(doc), encoding = "utf-8")
    assert run_main(world, "--signatures", "--apply") == 0
    convention, params, _ = world["funcs"]["f4"].updates[0]
    assert convention == "__stack_esi" and [p.getName() for p in params] == ["count", "out"]


def test_a_thunk_is_named_only_after_a_name_that_landed(world, monkeypatch):
    def refuse(_program, _func, the_row, *_args):
        return "skipped (no receiver)" if the_row["b"] == "00000010" else "name"

    monkeypatch.setattr(asa, "apply_row", refuse)
    assert run_main(world, "--apply") == 0
    # The report planned the thunk after the name; with its target unnamed it is a placeholder.
    assert "core_a.cpp_CBox_grow_FUN_00000060" in world["paths"]["out"].read_text(encoding = "utf-8")
    assert world["thunk"].getName() == "thunk_FUN_00000010"


@pytest.mark.parametrize("unchanged", ["skipped (no receiver)", "prototype rejected"])
def test_only_rows_that_changed_something_count_as_applied(world, monkeypatch, capsys, unchanged):
    def outcome(_program, _func, the_row, *_args):
        return unchanged if the_row["b"] == "00000010" else "name"

    monkeypatch.setattr(asa, "apply_row", outcome)
    assert run_main(world, "--apply") == 0
    # 00000020 and 00000030 named, and the thunk; 00000010 changed nothing
    assert "Applied 3. Saving..." in capsys.readouterr().out


def test_a_limit_samples_signature_rows_first(world, capsys):
    assert run_main(world, "--signatures", "--apply", "--limit", "1") == 0
    assert "[limit] applying only 1 row(s)" in capsys.readouterr().out
    assert world["funcs"]["f1"].getName() == "core_a.cpp_CBox_grow_FUN_00000010"
    assert world["funcs"]["f2"].getName() == "core_a.cpp_FUN_00000020"


def test_a_failure_outside_one_row_rolls_the_whole_run_back(world, capsys):
    world["thunk"].rename_raises = True
    assert run_main(world, "--apply") == 0
    out = capsys.readouterr().out
    assert "ERROR: duplicate name" in out
    assert world["program"].transactions == [["Apply sibling annotations", False]]
    assert world["program"].getDomainFile().saves == 0


def test_nothing_applied_is_nothing_saved(world):
    for func in world["funcs"].values():
        func.rename_raises = True
    world["thunk"].thunk_target = None
    assert run_main(world, "--apply") == 0
    assert world["program"].transactions == [["Apply sibling annotations", True]]
    assert world["program"].getDomainFile().saves == 0


def test_apply_with_nothing_to_do_opens_no_transaction(world, capsys):
    p = world["paths"]
    p["mapping"].write_text(json.dumps({"pairs": []}), encoding = "utf-8")
    world["thunk"].thunk_target = None
    assert run_main(world, "--apply") == 0
    out = capsys.readouterr().out
    assert "[dry-run]" not in out and not world["program"].transactions
    assert "Sibling annotation report: target.exe <- ?" in p["out"].read_text(encoding = "utf-8")


def test_a_failed_open_exits_1_and_still_closes_the_project(world, monkeypatch, capsys):
    def broken(*_args):
        raise RuntimeError("locked")

    monkeypatch.setattr(world["pyghidra"], "program_context", broken)
    assert run_main(world) == 1
    assert "ERROR: locked" in capsys.readouterr().out and world["pyghidra"].closed == 1


def test_the_report_defaults_to_the_programs_name_without_wall_or_ledger(world, monkeypatch):
    monkeypatch.chdir(world["tmp"])
    argv = [str(world["tmp"]), "Proj", "--mapping", str(world["paths"]["mapping"])]
    with pytest.raises(Exit):
        asa.main(argv)
    assert (world["tmp"] / "nocturne.exe_sibling_annotations.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["apply_sibling_annotations.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "apply_sibling_annotations.py"), run_name = "__main__")
    assert exit_info.value.code == 0
