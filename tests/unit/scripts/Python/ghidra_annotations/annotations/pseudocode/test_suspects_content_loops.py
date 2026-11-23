# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


# --- pre-increment array walks -------------------------------------------------------

def walk(body, cond = "pX != end", before = "  pX = start;\n"):
    return before + "  do {\n" + body + "  } while (%s);\n" % cond


@pytest.mark.parametrize("code", [
    # Single-variable advance through a field, with the `pX = pX;` marker
    walk("    pX = (CFoo *)&(pX->field)->next;\n    pX->array[0].field = value;\n    pX = pX;\n"),
    # A flat int walker
    walk("    pX = pX + 0xd;\n    pX[2] = value;\n    pX = pX;\n"),
    walk("    pX = pX + 0xd;\n    *pX = value;\n    pX = pX;\n"),
    # Two-variable ping-pong with a nested const-index store
    walk("    pTmp = &(pA->base).carry_hands[1].carry_actor;\n    (pA->base).carry_hands[0].carry_actor = 0;\n"
         "    pA = (CHero *)pTmp;\n", "pTmp != end"),
    # A bare advance and a later store through it, the loop testing something else
    walk("    x = f();\n    pX = pX + 2;\n    if (x) {\n      y = 1;\n    }\n    *pX = v;\n", "i < n"),
])
def test_a_walk_storing_through_its_pre_advanced_pointer_is_flagged(code):
    suspects = content.identify_preinc_loop_idiom(code)
    assert lines_of(suspects) == [2] and suspects[0]["type"] == "preinc_loop_idiom"


@pytest.mark.parametrize("code", [
    "",
    "  x = 1;\n",
    # An advance with no marker and no store, or a marker for another variable
    walk("    pX = (CFoo *)&pX->next;\n    pX->count = 1;\n"),
    walk("    pX = pX + 2;\n    pY = pY;\n    pX[1] = v;\n", "i < n"),
    # A marker but no constant-index store
    walk("    pX = pX + 2;\n    total = total + pX->count;\n    pX = pX;\n"),
    # Ping-pong with another temp, or no store
    walk("    pTmp = &(pA->base).next;\n    pA = (CHero *)pOther;\n    (pA->base).list[0] = 0;\n"),
    walk("    pTmp = &(pA->base).next;\n    pA = (CHero *)pTmp;\n    if (pA->count == 0) break;\n"),
    # The walker is the loop condition, the first element was primed, or the store is after an inner loop
    walk("    pX = pX + 2;\n    *pX = v;\n", "pX != end"),
    walk("    pX = pX + 2;\n    *pX = v;\n", "i < n", "  *pX = 0;\n  pX = start;\n"),
    walk("    do {\n      pX = pX + 2;\n    } while (i < 4);\n    *pX = v;\n", "i < n"),
    walk("    pX = pX + 2;\n    if (a) {\n      *pX = v;\n    }\n", "i < n"),
])
def test_ordinary_walks_are_not_flagged(code):
    assert content.identify_preinc_loop_idiom(code) == []


@pytest.mark.parametrize("detector", [content.identify_preinc_loop_idiom, content.identify_loop_clobbered_constant])
def test_a_loop_cut_off_by_the_end_of_the_code_is_not_flagged(detector):
    assert detector("  do {\n    pX = pX + 2;\n    y = 1;") == []


# --- loop-clobbered constants --------------------------------------------------------

CLOBBERED = """  base = (float10)2;
  fVar7 = (float10)0.25;
  iVar4 = 0;
  do {
    fVar5 = (float10)-iVar4 * fVar7;
    fVar6 = pow(base, (float10)-iVar4 * fVar7);
    base = fVar7;
    fVar7 = fVar5;
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 200);
"""


def test_a_swap_chain_over_a_constant_used_in_the_math_is_flagged():
    suspects = content.identify_loop_clobbered_constant(CLOBBERED)
    assert lines_of(suspects) == [7] and "`base = fVar7; fVar7 = fVar5;`" in suspects[0]["description"]


@pytest.mark.parametrize("old, new", [
    # A linked-list step, a two-way swap, or a chain that does not share its middle
    ("    base = fVar7;\n    fVar7 = fVar5;\n", "    prev = curr;\n    curr = next;\n"),
    ("    base = fVar7;\n    fVar7 = fVar5;\n", "    base = fVar7;\n    fVar7 = base;\n"),
    ("    base = fVar7;\n    fVar7 = fVar5;\n", "    base = fVar7;\n    fVar8 = fVar5;\n"),
    ("    base = fVar7;\n    fVar7 = fVar5;\n", "    base = fVar7;\n    fVar7 = fVar7;\n"),
    # The clobbered variable is never read, or was never a literal
    ("    fVar6 = pow(base, (float10)-iVar4 * fVar7);\n", "    fVar6 = pow(fVar7, (float10)-iVar4);\n    base = fVar6;\n"),
    ("  base = (float10)2;\n", "  base = f();\n"),
])
def test_other_assignment_chains_are_not_clobbered_constants(old, new):
    assert old in CLOBBERED
    assert content.identify_loop_clobbered_constant(CLOBBERED.replace(old, new)) == []


def test_the_constant_must_be_set_shortly_before_the_loop():
    code = CLOBBERED.replace("  iVar4 = 0;\n", "  x = 1;\n" * 20)
    assert content.identify_loop_clobbered_constant(code) == []
    assert content.identify_loop_clobbered_constant("") == []
