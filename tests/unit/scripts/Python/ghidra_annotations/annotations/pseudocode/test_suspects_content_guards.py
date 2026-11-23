# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


# --- cascade constant fills -----------------------------------------------------------

CASCADE = "  local_c.z = 0.0;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n"


@pytest.mark.parametrize("code, expected", [
    ("", []),
    (CASCADE, [1]),
    ("  pCVar1->c = (CVector3f *)0x0;\n  pCVar1->b = pCVar1->c;\n  pCVar1->a = pCVar1->c;\n", [1]),
    # A step wrapped onto the next line
    ("  local_c.z = 0;\n  local_c.y =\n       local_c.z;\n  local_c.x = local_c.y;\n", [1]),
    # Through an alias declared before the run, not after it
    ("  pCVar1 = &local_c;\n  local_c.z = 0.0;\n  pCVar1->y = local_c.z;\n  local_c.x = pCVar1->y;\n", [2]),
    ("  local_c.z = 0.0;\n  pCVar1->y = local_c.z;\n  local_c.x = pCVar1->y;\n  pCVar1 = &local_c;\n", []),
    ("  pCVar1 = &local_d;\n  pCVar2 = &local_c;\n  local_c.z = 0.0;\n  pCVar1->y = local_c.z;\n"
     "  local_c.x = local_c.y;\n", []),
    # Through a saved temp
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  local_c.x = fVar1;\n", [1]),
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  pCVar1->x = fVar1;\n", []),
    ("  pCVar1 = &local_c;\n  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  pCVar1->x = fVar1;\n", [2]),
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  local_c.y = fVar1;\n", []),
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  f(fVar1);\n", []),
    # A temp saved from another struct is just an interleaved store
    ("  local_c.z = 0.0;\n  fVar1 = local_d.z;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", [1]),
    # Interleaved bookkeeping, up to two statements
    ("  local_c.z = 0.0;\n  local_1c = 1;\n  local_c.y = local_c.z;\n  *pSVar1 = 2;\n  local_c.x = local_c.z;\n", [1]),
    ("  local_c.z = 0.0;\n  a = 1;\n  b = 2;\n  c = 3;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  if (a) b = 1;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  f(local_c);\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  local_c = g;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  a = { 1 };\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  b = fVar1 + 1;\n  local_c.y = fVar1;\n", []),
    ("  local_c.z = 0.0;\n  fVar1 = local_c.z;\n  local_c.y = fVar1;\n  b = 1;\n", []),
    # The chain breaks on a field that holds no constant, a repeat, or another struct
    ("  local_c.z = 0.0;\n  local_c.y = local_c.w;\n  local_c.x = local_c.y;\n", []),
    ("  local_c.z = 0.0;\n  local_c.y = local_c.z;\n  local_c.y = local_c.z;\n", []),
    ("  local_c.z = 0.0;\n  local_d.y = local_c.z;\n  local_c.x = local_c.y;\n", []),
    # A block brace closes a statement; an unterminated tail is a statement too
    ("  {\n  local_c.z = 0.0;\n  local_c.y = local_c.z;\n  local_c.x = local_c.y;\n  },\n  }\n  x = f(a,", [2]),
])
def test_a_constant_forwarded_through_sibling_fields_is_a_fill(code, expected):
    assert lines_of(content.identify_cascade_constant_fill(code)) == expected


def test_a_cascade_may_end_the_code():
    assert lines_of(content.identify_cascade_constant_fill(CASCADE.rstrip("\n"))) == [1]


def test_a_cascade_names_its_constant():
    suspects = content.identify_cascade_constant_fill(CASCADE)
    assert "chained through prior store of `0.0`" in suspects[0]["description"]


# --- self-copy guards ----------------------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  if (&local_58 != &local_d0) {\n\n    local_58 = local_d0;\n    local_54 = local_cc;\n  }\n", [1]),
    ("  if (&local_58 != &local_58) {\n    local_58 = local_58;\n  }\n", []),
    ("  if (&local_58 != &local_d0) {\n    local_58 = local_cc;\n  }\n", []),
    ("  if (&local_58 != &local_d0) {\n    f();\n  }\n", []),
    ("  if (&local_58 != &local_d0) {\n\n", []),
])
def test_a_guard_between_two_stack_locals_is_dead(code, expected):
    suspects = content.identify_self_copy_guard(code)
    assert lines_of(suspects) == expected


@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  if (&CStack_3c == &CStack_54) goto LAB_005e2ed6;\n", [1]),
    ("  if (&local_1 == &local_2) { break; }\n", [1]),
    ("  if (&local_1 == &local_1) continue;\n", []),
    ("  if (&local_1 == pCVar2) goto LAB_1;\n", []),
])
def test_an_equality_of_two_stack_locals_is_always_false(code, expected):
    suspects = content.identify_dropped_self_copy(code)
    assert lines_of(suspects) == expected
    if expected:
        assert "Inverted (always-false) self-copy guard" in suspects[0]["description"]


@pytest.mark.parametrize("line, op, addr", [
    ("  if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z) {", "!=", "g_CDemonCameraInstance.camera_origin.z"),
    ("  if (&local_20 == (CVector3f *)0x0) goto LAB_1;", "==", "local_20"),
])
def test_an_address_against_a_sentinel_is_a_tautology(line, op, addr):
    suspects = content.identify_tautological_addr_guard(line)
    assert len(suspects) == 1 and suspects[0]["match"] == f"if ((T *)0x0 {op} &{addr})"
    assert ("always TRUE" if op == "!=" else "always FALSE") in suspects[0]["description"]


@pytest.mark.parametrize("code", [
    "", "  if (&stack0x00000004 != (int *)0x0) {", "  if (&pCVar1->x != (CVector3f *)0x0) {",
    "  if (&local_20[1] != (CVector3f *)0x0) {",
])
def test_pointer_based_addresses_may_really_be_null(code):
    assert content.identify_tautological_addr_guard(code) == []


# --- CONCAT reconstructions ----------------------------------------------------------

@pytest.mark.parametrize("line, match", [
    ("  lVar1 = CONCAT44(uVar2,uVar3);", "CONCAT44"),
    ("  uVar1 = CONCAT31 (extraout_var,bVar2);", "CONCAT31"),
])
def test_a_generic_concat_is_a_wide_value_artifact(line, match):
    suspects = content.identify_concat_reconstruction(line)
    assert len(suspects) == 1 and suspects[0]["match"] == match


@pytest.mark.parametrize("code", [
    "", "  // CONCAT44(a,b)", "  /* CONCAT44(a,b) */", "  x = 1;",
    "  d = (double)CONCAT44(a,b);", "  f(__BITCAST_DOUBLE(CONCAT44(a,b)));", "  u = CONCAT22(a,(b >> 0x10));",
])
def test_concats_with_their_own_detector_are_skipped(code):
    assert content.identify_concat_reconstruction(code) == []
