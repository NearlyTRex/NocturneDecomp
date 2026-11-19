# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import stack as sk


def ins(addr, assembly, *pcode, **fields):
    """One extract_function_pcode() entry."""
    return dict({"address": addr, "assembly": assembly, "pcode": list(pcode)}, **fields)


CALLIND = "CALLIND (register,0x0,4)"
RETURN = "RETURN (register,0x0,4)"


def call(target):
    return f"CALL (ram,0x{target},4)"


def only(suspects):
    """The one suspect a detector returned."""
    assert len(suspects) == 1, suspects
    return suspects[0]


EBP_FRAME = [ins("00401000", "PUSH EBP"), ins("00401001", "MOV EBP, ESP"), ins("00401003", "SUB ESP, 0x10")]
NO_FRAME = [ins("00401000", "PUSH EBX"), ins("00401001", "PUSH ESI")]


# calculate_complexity_metrics

def test_complexity_counts_lines_suspects_and_the_worst_severity():
    suspects = [{"type": "a", "severity": "moderate"}, {"type": "a"}, {"type": "b", "severity": "odd"}]
    metrics = sk.calculate_complexity_metrics("x;\n\ny;\n", "a\n\n", suspects, [1], [1, 2], [1, 2, 3])
    assert metrics == {
        "pseudocode_lines": 2, "assembly_lines": 1, "total_lines": 3, "suspect_count": 3,
        "suspect_types": ["a", "b"], "max_suspect_severity": "moderate", "cross_reference_count": 1,
        "global_count": 2, "function_call_count": 3, "complexity_score": 2 + 30 + 10}


def test_a_function_without_suspects_or_references_is_clean():
    metrics = sk.calculate_complexity_metrics("", "", [], None, None, None)
    assert (metrics["max_suspect_severity"], metrics["cross_reference_count"], metrics["global_count"],
            metrics["function_call_count"], metrics["complexity_score"]) == ("clean", 0, 0, 0, 0)


# small parsers

@pytest.mark.parametrize("asm, value", [
    ("ADD ESP, 0x10", 16), ("add esp,8", 8), ("ADD ESP, 010", 10), ("ADD ESP, EAX", None), ("SUB ESP, 0x4", None)])
def test_the_add_esp_value_is_read_as_ghidra_prints_it(asm, value):
    assert sk._parse_add_esp_value(asm) == value


@pytest.mark.parametrize("asm, target", [
    ("CALL dword ptr [EAX*0x4 + 0x66df88]", ("scaled_index", {"reg": "EAX", "scale": 4, "offset": 0x66df88})),
    ("CALL dword ptr [esi + 24]", ("reg_offset", {"reg": "ESI", "offset": 24})),
    ("CALL dword ptr [ESP + 0x18]", ("reg_offset", {"reg": "ESP", "offset": 0x18})),
    ("CALL dword ptr [EDX]", ("reg_deref", "EDX")),
    ("CALL dword ptr CS:[0x6114c8]", ("mem_absolute", 0x6114c8)),
    ("CALL [0x00684ee4]", ("mem_absolute", 0x684ee4)),
    ("CALL EBP", ("register", "EBP")),
    ("CALL si ; note", ("register", "SI")),
])
def test_each_indirect_call_target_shape_is_named(asm, target):
    assert sk._parse_callind_target(asm) == target


def test_an_unknown_indirect_call_target_is_an_error():
    with pytest.raises(sk.UnhandledCallIndirectError, match="Unhandled CALLIND pattern"):
        sk._parse_callind_target("CALL dword ptr [EAX + EBX]")


# prologue and frame

@pytest.mark.parametrize("asms, result", [
    ([], (0, False)),
    (["PUSH EBP", "MOV EBP, ESP", "PUSH EBX", "SUB ESP, 0x10", "PUSH EAX"], (24, True)),
    # register moves may come before the SUB ESP
    (["PUSH EBX", "MOV EBX, EAX", "LEA ECX, [EAX + 0x4]", "NOP ", "SUB ESP, 8"], (12, False)),
    # a PUSH after a move is a call argument, and a later SUB ESP is the body's
    (["PUSH EBX", "MOV EDX, dword ptr [ESP + 0xc]", "PUSH EDX", "CALL 0x0040cfd0", "SUB ESP, 0x8"], (4, False)),
    (["PUSH EBX", "PUSH EBP", "TEST EBX, EBX", "PUSH EDI", "SUB ESP, 0x20"], (8, False)),
    (["MOV EAX, dword ptr [ESP + 0x4]", "RET"], (0, False)),
])
def test_the_prologue_is_the_leading_pushes_and_sub_esp(asms, result):
    pcode = [ins(f"{0x401000 + n:08x}", asm) for n, asm in enumerate(asms)]
    assert sk.get_prologue_offset(pcode) == result


def test_none_has_no_prologue():
    assert sk.get_prologue_offset(None) == (0, False)


@pytest.mark.parametrize("asms, offset", [
    (["SUB ESP, 0x8", "PUSH EBP", "MOV EBP, ESP"], None),  # the SUB before the frame does not count
    (["PUSH EBP", "MOV EBP, ESP", "PUSH EBX", "SUB ESP, 0x40"], 0x40),
    (["PUSH EBP", "MOV EBP, ESP", "POP EBP"], None),
    (["PUSH EBX"], None),
])
def test_the_frame_offset_is_the_sub_esp_after_mov_ebp_esp(asms, offset):
    assert sk.get_frame_offset_from_pcode([ins("0", asm) for asm in asms]) == offset


# CALLIND anchors

def callind_body(certainty = "computed", esp = -8, add = "ADD ESP, 0x8", target = "CALL dword ptr [EAX + 0x4]", **fields):
    return [ins("00401010", target, CALLIND, esp_offset = esp, **fields),
            ins("00401013", add, esp_certainty = certainty)]


def test_a_callind_in_an_ebp_frame_is_anchored_at_its_add_esp():
    suspects, resolved = sk.identify_pcode_suspects(EBP_FRAME + callind_body(), "// unused")
    assert resolved == []
    assert suspects == [{
        "type": "callind_anchor", "match": "CALLIND...ADD ESP",
        "text": "CALLIND at 00401010, ADD ESP at 00401013",
        "description": "CALLIND makes ESP uncertain; fixable with ESP anchor",
        "fix_type": "esp_anchor_after_callind", "fix_address": "00401013", "callind_address": "00401010",
        "add_esp_value": 8, "frame_offset": 0x10}]


def test_an_anchor_with_an_override_at_its_add_esp_is_resolved():
    suspects, resolved = sk.identify_pcode_suspects(EBP_FRAME + callind_body(), None, {"0x00401013": []})
    assert (suspects, [s["type"] for s in resolved]) == ([], ["callind_anchor"])


def test_a_callind_without_a_frame_is_preserved_from_its_esp():
    suspect = only(sk._detect_callind_anchor(NO_FRAME + callind_body(esp_certainty = "known")))
    assert suspect == {
        "type": "callind_preserve", "match": "CALLIND...ADD ESP",
        "text": "CALLIND at 00401010, ADD ESP at 00401013 (no EBP frame)",
        "description": "CALLIND makes ESP uncertain; fixable with ESP preserve",
        "fix_address": "00401013", "callind_address": "00401010",
        "callind_assembly": "CALL dword ptr [EAX + 0x4]", "return_address": "00401013",
        "call_target_type": "reg_offset", "call_target_value": {"reg": "EAX", "offset": 4},
        "add_esp_value": 8, "prologue_offset": 8, "esp_at_callind": -8, "expected_esp_offset": 0}


def test_a_preserve_is_resolved_by_an_override_at_the_callind_itself():
    suspects, resolved = sk.identify_pcode_suspects(NO_FRAME + callind_body(), None, {"00401010": []})
    assert (suspects, [s["type"] for s in resolved]) == ([], ["callind_preserve"])


def test_an_add_esp_by_a_register_has_no_expected_offset():
    suspect = only(sk._detect_callind_anchor(NO_FRAME + callind_body(add = "ADD ESP, EAX")))
    assert (suspect["add_esp_value"], suspect["expected_esp_offset"]) == (None, None)


@pytest.mark.parametrize("fields", [{"esp": None}, {"esp_certainty": "conflict"}])
def test_a_callind_with_lost_tracking_carries_no_esp(fields):
    body = callind_body(esp = fields.get("esp", -8), **{k: v for k, v in fields.items() if k != "esp"})
    suspect = only(sk._detect_callind_anchor(NO_FRAME + body))
    assert suspect["type"] == "callind_preserve_lost"
    assert suspect["description"] == "CALLIND with lost ESP tracking (branching code)"
    assert "esp_at_callind" not in suspect and "expected_esp_offset" not in suspect


@pytest.mark.parametrize("pcode", [
    None,
    NO_FRAME + callind_body(certainty = "known"),                                   # ESP is certain
    NO_FRAME + [ins("00401010", "CALL EAX", CALLIND), ins("00401012", "CALL 0x1", call("1")),
                ins("00401017", "ADD ESP, 0x4")],                                   # another call first
    NO_FRAME + [ins("00401010", "CALL EAX", CALLIND)] + [ins("0", "NOP ")] * 4,     # no ADD ESP nearby
    NO_FRAME + [ins("00401010", "MOV EAX, EBX")],                                   # no CALLIND
])
def test_only_an_uncertain_add_esp_soon_after_a_callind_is_a_suspect(pcode):
    assert sk._detect_callind_anchor(pcode) == []


def test_an_unknown_callind_target_names_its_address():
    with pytest.raises(sk.UnhandledCallIndirectError, match="At address 00401010: Unhandled"):
        sk._detect_callind_anchor(NO_FRAME + callind_body(target = "CALL dword ptr [EAX + EBX]"))


# param count

SITES_SHORT = [{"method": "push_count", "instructions_analyzed": 2, "estimated_params": 1}]


def estimates(declared, estimated, **fields):
    return dict({"declared_params": declared, "estimated_params": estimated, "call_site_count": 1}, **fields)


@pytest.mark.parametrize("params, vtable, sig", [
    (None, None, None),
    (estimates(2, 3), {"in_vtable": True}, None),
    (estimates(2, 3), None, "int f(char *, ...)"),
    (estimates(None, 3), None, None),
    (estimates(2, None), None, None),
    (estimates(2, 3, call_site_count = 0), None, None),
    (estimates(2, 2), None, None),
    (estimates(2, 3, matches_declared = True), None, None),
    (estimates(2, 3, declared_stack_bytes = 12), None, None),                      # a double takes two slots
    # too many: one site sees the full count, or every site ran short
    (estimates(3, 1, call_sites = [{"estimated_params": 1}, {"estimated_params": 3}]), None, None),
    (estimates(3, 1, call_sites = SITES_SHORT), None, None),
    # too few: an add_esp site agrees, or every site ran short
    (estimates(2, 3, call_sites = [{"method": "add_esp", "estimated_params": 2}]), None, None),
    (estimates(2, 3, call_sites = SITES_SHORT), None, None),
])
def test_no_param_count_suspect_without_evidence_against_the_signature(params, vtable, sig):
    assert sk.identify_param_count_mismatch(params, vtable, sig) is None


@pytest.mark.parametrize("params, kind, word, delta", [
    (estimates(2, 4, call_sites = [{"method": "add_esp", "estimated_params": 4}]), "param_count_too_few", "2 missing", 2),
    (estimates(2, 4), "param_count_too_few", "2 missing", 2),
    (estimates(3, 1, call_sites = [{"method": "add_esp", "estimated_params": 1}]), "param_count_too_many", "2 extra", -2),
    (estimates(3, 1, call_sites = [{"method": "push_count", "instructions_analyzed": 9, "estimated_params": 1}]),
     "param_count_too_many", "2 extra", -2),
])
def test_call_sites_that_disagree_with_the_signature_are_reported(params, kind, word, delta):
    suspect = sk.identify_param_count_mismatch(params, {"in_vtable": False}, "void f(int)")
    assert (suspect["type"], suspect["param_delta"], suspect["call_site_count"]) == (kind, delta, 1)
    assert word in suspect["text"]


# variadic calls

VARIADIC = [{"addr": "0x00402000", "name": "sprintf", "is_variadic": True}, {"addr": "00403000", "name": "f"}]


def variadic_call(*after):
    return [ins("00401010", "CALL 0x00402000", "COPY (unique,0x0,4) = (const,0x0,4)", call("00402000"),
                esp_certainty = "known")] + list(after)


def test_a_variadic_call_in_an_ebp_frame_is_anchored_at_its_add_esp():
    pcode = EBP_FRAME + variadic_call(ins("00401015", "ADD ESP, 0xc", esp_certainty = "computed"))
    suspects, resolved = sk.identify_variadic_calls(pcode, VARIADIC, True)
    assert resolved == []
    assert suspects == [{
        "type": "variadic_anchor", "match": "CALL sprintf",
        "text": "Call to variadic function sprintf at 00401010 (EBP frame + ADD ESP)",
        "description": "Variadic call in EBP-frame function; fix by anchoring ESP at ADD ESP",
        "call_address": "00401010", "return_address": "00401015", "target_address": "0x402000",
        "target_function": "sprintf", "fix_address": "00401015", "frame_offset": 0x10, "add_esp_value": 12,
        "esp_certainty_at_call": "known", "esp_certainty_after": "computed", "caller_has_stack_issues": True}]


def test_a_variadic_anchor_with_an_override_is_resolved():
    pcode = EBP_FRAME + variadic_call(ins("00401015", "ADD ESP, 0xc"))
    suspects, resolved = sk.identify_variadic_calls(pcode, VARIADIC, existing_overrides = {"00401015": []})
    assert (suspects, [s["type"] for s in resolved]) == ([], ["variadic_anchor"])


def test_a_variadic_call_in_a_frame_without_add_esp_is_preserved_across_the_call():
    frame = [ins("00401000", "PUSH EBP"), ins("00401001", "MOV EBP, ESP")]
    suspects, resolved = sk.identify_variadic_calls(frame + variadic_call(), VARIADIC, stack_frame = {"local_size": 0x20})
    assert resolved == []
    assert [(s["type"], s["frame_offset"], s["return_address"], s["esp_certainty_after"]) for s in suspects] == [
        ("variadic_preserve_ebp", 0x20, None, "unknown")]


def test_a_variadic_call_without_a_frame_is_preserved_and_resolved_at_the_call():
    suspects, resolved = sk.identify_variadic_calls(NO_FRAME + variadic_call(), VARIADIC, existing_overrides = {"00401010": []})
    assert (suspects, [(s["type"], s["prologue_offset"]) for s in resolved]) == ([], [("variadic_preserve", 8)])


@pytest.mark.parametrize("pcode, calls", [
    (None, VARIADIC),
    (NO_FRAME + variadic_call(), None),
    (NO_FRAME + variadic_call(), [{"addr": "00402000", "name": "printf"}]),         # not marked variadic
    (NO_FRAME + [ins("00401010", "CALL 0x00403000", call("00403000"))], VARIADIC),   # a different callee
])
def test_only_calls_to_variadic_functions_are_suspects(pcode, calls):
    assert sk.identify_variadic_calls(pcode, calls) == ([], [])


def test_a_frame_with_no_sub_esp_and_no_local_size_is_preserved_without_a_frame_offset():
    frame = [ins("00401000", "PUSH EBP"), ins("00401001", "MOV EBP, ESP")]
    suspects, _ = sk.identify_variadic_calls(frame + variadic_call(), VARIADIC, stack_frame = {"local_size": 0})
    assert [s["type"] for s in suspects] == ["variadic_preserve"]


# stack alignment

def align_json(ebp = True, patterns = ({"pattern_id": "stack_alignment", "address": "0x00401006"},)):
    return {"function": {"is_ebp_frame": ebp}, "stack_patterns": {"patterns": list(patterns)}}


def test_stack_alignment_in_an_ebp_frame_is_anchored_from_its_sub_esp():
    suspects, resolved = sk.identify_stack_align_anchor(align_json(), EBP_FRAME, {"00409999": []})
    assert resolved == []
    assert suspects == [{
        "type": "stack_align_anchor", "match": "AND ESP", "text": "Stack alignment at 0x00401006 (SUB ESP, 0x10 before)",
        "description": "Stack alignment can be anchored: ESP = EBP - 0x10", "fix_address": "0x00401006",
        "sub_esp_offset": 0x10, "frame_offset": 0x10, "align_instruction": "AND ESP,0xfffffff8"}]


def test_stack_alignment_is_resolved_only_by_an_override_at_its_own_address():
    # An override anywhere else used to count: `x or '0' == y` is just x.
    suspects, resolved = sk.identify_stack_align_anchor(align_json(), EBP_FRAME, {"00401006": []})
    assert (suspects, [s["type"] for s in resolved]) == ([], ["stack_align_anchor"])


@pytest.mark.parametrize("json_data, pcode", [
    (None, EBP_FRAME),
    (align_json(), []),
    ({"function": {"is_ebp_frame": True}, "stack_patterns": None}, EBP_FRAME),
    (align_json(patterns = [{"pattern_id": "pushf"}]), EBP_FRAME),
    (align_json(ebp = False), EBP_FRAME),
    (align_json(), [ins("00401000", "PUSH EBP"), ins("00401001", "SUB ESP, EAX")]),
])
def test_no_alignment_anchor_without_an_alignment_ebp_frame_and_sub_esp(json_data, pcode):
    assert sk.identify_stack_align_anchor(json_data, pcode) == ([], [])


# direct calls

def direct_call(target = "00403000", certainty = "computed", add = "ADD ESP, 0x4", extra = ()):
    return [ins("00401010", "CALL 0x" + target, call(target), *extra), ins("00401015", add, esp_certainty = certainty)]


def test_a_direct_call_in_an_ebp_frame_is_anchored_at_its_add_esp():
    suspects, resolved = sk.identify_direct_call_esp_uncertainty(EBP_FRAME + direct_call(), VARIADIC)
    assert resolved == []
    assert suspects == [{
        "type": "call_esp_anchor", "match": "CALL...ADD ESP",
        "text": "Direct CALL at 00401010, ADD ESP at 00401015 with uncertain ESP",
        "description": "Direct CALL makes ESP uncertain; fixable with ESP anchor",
        "call_address": "00401010", "fix_address": "00401015", "return_address": "00401015",
        "target_address": "0x403000", "add_esp_value": 4, "frame_offset": 0x10, "esp_certainty": "computed"}]


def test_a_direct_call_anchor_takes_the_frame_from_local_size_and_resolves_at_the_add_esp():
    frame = [ins("00401000", "PUSH EBP"), ins("00401001", "MOV EBP, ESP")]
    suspects, resolved = sk.identify_direct_call_esp_uncertainty(
        frame + direct_call(), None, {"00401015": []}, {"stack_frame": {"local_size": 0x30}})
    assert (suspects, [(s["type"], s["frame_offset"]) for s in resolved]) == ([], [("call_esp_anchor", 0x30)])


def test_a_direct_call_without_a_frame_is_preserved_and_resolved_at_the_call():
    suspects, resolved = sk.identify_direct_call_esp_uncertainty(
        NO_FRAME + direct_call(), None, {"00401010": []}, {"stack_frame": None})
    assert (suspects, [(s["type"], s["prologue_offset"]) for s in resolved]) == ([], [("call_esp_preserve", 8)])
    unresolved, _ = sk.identify_direct_call_esp_uncertainty(NO_FRAME + direct_call())
    assert [s["text"] for s in unresolved] == ["Direct CALL at 00401010, ADD ESP at 00401015 (no EBP frame)"]


@pytest.mark.parametrize("pcode", [
    None,
    NO_FRAME + [ins("00401010", "MOV EAX, EBX")],                         # no call
    NO_FRAME + direct_call(extra = [CALLIND]),                           # a CALLIND, not a direct call
    NO_FRAME + direct_call(target = "00402000"),                         # variadic: handled elsewhere
    NO_FRAME + direct_call(add = "MOV EAX, 0x1"),                        # no ADD ESP after it
    NO_FRAME + direct_call(certainty = "known"),                         # ESP is certain
])
def test_only_an_uncertain_add_esp_after_a_plain_direct_call_is_a_suspect(pcode):
    assert sk.identify_direct_call_esp_uncertainty(pcode, VARIADIC) == ([], [])


# LEA of an ESP slot

def test_lea_of_an_esp_slot_without_a_frame_is_reported():
    pcode = [ins("00401000", "LEA EAX, [ESP + 0x10]"), ins("00401004", "LEA ECX, [ESP]"), ins("00401007", "LEA EDX, [EBX + 0x4]")]
    assert [(s["address"], s["esp_offset"], s["instruction"]) for s in sk.identify_lea_esp_stack_addr(pcode)] == [
        ("00401000", 16, "LEA EAX, [ESP + 0x10]"), ("00401004", None, "LEA ECX, [ESP]")]


@pytest.mark.parametrize("pcode, json_data", [
    (None, None), ([ins("00401000", "LEA EAX, [ESP + 0x10]")], {"function": {"is_ebp_frame": True}})])
def test_lea_of_an_esp_slot_is_fine_with_a_frame_or_without_code(pcode, json_data):
    assert sk.identify_lea_esp_stack_addr(pcode, json_data) == []


# special functions

@pytest.mark.parametrize("name, kind, field, value", [
    ("entry", "special_entry_point", "function_name", "entry"),
    ("crt_startup_entry", "special_entry_point", "function_name", "crt_startup_entry"),
    ("crt_math_cos", "special_math_intrinsic", "math_function", "cos"),
    ("core_vec_sqrt_FUN_00401000", "special_math_intrinsic", "math_function", "sqrt"),
    ("engine_atan2", "special_math_intrinsic", "math_function", "atan2"),
    ("crt_stackCheck", "special_crt_function", "crt_type", "stack manipulation"),
    ("crt_raiseException", "special_crt_function", "crt_type", "exception handling"),
    ("crt_sehHandler", "special_crt_function", "crt_type", "exception handling"),
    ("crt_securityInit", "special_crt_function", "crt_type", "security cookie"),
    ("crt_initCookie", "special_crt_function", "crt_type", "security cookie"),
    ("lib/crt/malloc", "special_crt_function", "crt_type", "runtime support"),
    ("engine_detectMMX_FUN_00401000", "special_cpu_detection", "cpu_function", "detectmmx"),
])
def test_special_functions_are_classified_by_name(name, kind, field, value):
    suspect = only(sk.identify_special_functions({"function": {"name": name}}, "00401000"))
    assert (suspect["type"], suspect[field], suspect["address"]) == (kind, value, "00401000")


@pytest.mark.parametrize("json_data", [None, {}, {"function": {"name": "core_actor_update_FUN_00401000"}}])
def test_ordinary_functions_are_not_special(json_data):
    assert sk.identify_special_functions(json_data, "00401000") == []
