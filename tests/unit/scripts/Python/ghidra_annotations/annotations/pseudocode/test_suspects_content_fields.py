# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import fld, lines_of


VEC3 = [fld("x", 0, 4, "float"), fld("y", 4, 4, "float"), fld("z", 8, 4, "float")]
LAYOUT = {
    "CVector3f": VEC3,
    "CVector3i": [fld("x", 0, 4, "int"), fld("y", 4, 4, "int"), fld("z", 8, 4, "int")],
    "CPoly": [fld("normal", 0x40, 12, "CVector3f"), fld("material_id", 0x5c, 4, "int"), fld("flags", 0x60, 4, "int")],
    "CBox": [fld("min", 0, 12, "CVector3f"), fld("max", 12, 12, "CVector3f")],
    "COdd": [fld("x", 0, 4, "float"), {"name": "y", "type": "float"}, fld("z", 8, 4, "float")],
}


def field_copies(code, layout = None):
    return lines_of(content.identify_unrolled_field_copy(code, layout))


# --- unrolled field copies ------------------------------------------------------------

VECTOR = "  local_20.x = pCVar1->x;\n  local_20.y = pCVar1->y;\n  local_20.z = pCVar1->z;\n"


@pytest.mark.parametrize("code, expected", [
    ("", []),
    (VECTOR, [1]),
    # A matrix copy is one run across its rows
    ("".join(f"  local_60.m[{r}].{c} = src->m[{r}].{c};\n" for r in range(3) for c in "xyz"), [1]),
    # An alias for an element, then the element itself
    ("  pCVar3 = pCVar2 + 1;\n  pCVar3->x = pCVar1->x;\n  pCVar2[1].y = pCVar1->y;\n  pCVar2[1].z = pCVar1->z;\n", [2]),
    # An address-of alias, with the parens the rewrite keeps
    ("  pCVar6 = &(this_ptr->box).orient;\n  (pCVar6->vec).x = (this_ptr->init).vec.x;\n"
     "  (this_ptr->box).orient.vec.y = (this_ptr->init).vec.y;\n"
     "  (this_ptr->box).orient.vec.z = (this_ptr->init).vec.z;\n", [2]),
    # A reassigned alias no longer stands for the element
    ("  pCVar3 = pCVar2 + 1;\n  pCVar3 = f();\n  pCVar3->x = pCVar1->x;\n  pCVar2[1].y = pCVar1->y;\n"
     "  pCVar2[1].z = pCVar1->z;\n", []),
    # A spilled index names the same element
    ("  iVar2 = g_Count;\n  g_Verts[g_Count].x = pCVar7->x;\n  g_Verts[iVar2].y = pCVar7->y;\n"
     "  g_Verts[iVar2].z = pCVar7->z;\n", [2]),
    ("  iVar2 = g_Count;\n  g_Count = g_Count + 1;\n  g_Verts[g_Count].x = pCVar7->x;\n"
     "  g_Verts[iVar2].y = pCVar7->y;\n  g_Verts[iVar2].z = pCVar7->z;\n", []),
    ("  iVar2 = g_Count;\n  iVar3 = iVar2;\n  iVar2 = iVar2;\n  g_Verts[iVar3].x = pCVar7->x;\n"
     "  g_Verts[iVar3].y = pCVar7->y;\n  g_Verts[iVar3].z = pCVar7->z;\n", [4]),
    # Two lines, a repeat, a fan-out, two sources for one slot, or a changed root
    ("  local_20.x = pCVar1->x;\n  local_20.y = pCVar1->y;\n", []),
    ("  local_20.x = pCVar1->x;\n  local_20.x = pCVar1->x;\n  local_20.y = pCVar1->y;\n", []),
    ("  local_20.x = pCVar1->x;\n  local_30.x = pCVar1->x;\n  local_30.y = pCVar1->y;\n", []),
    ("  v.uv[0].u = a.uv[1].u;\n  v.uv[0].v = a.uv[2].v;\n  v.uv[1].u = a.uv[0].u;\n", []),
    ("  local_20.x = pCVar1->x;\n  local_20.y = pCVar2->y;\n  local_20.z = pCVar2->z;\n", []),
    # A `(&name)[i]` root has no leading identifier to group by
    ("  (&local_122c)[iVar10].x = pCVar11->x;\n  (&local_122c)[iVar10].y = pCVar11->y;\n"
     "  (&local_122c)[iVar10].z = pCVar11->z;\n", []),
    # Arithmetic or a cast is not a copy
    ("  local_20.x = a.x - b.x;\n  local_20.y = a.y - b.y;\n  local_20.z = a.z - b.z;\n", []),
    ("  (double)local_20.x = a.x;\n  (double)local_20.y = a.y;\n  (double)local_20.z = a.z;\n", []),
    # A cast inside the outer parens stays, so the run is not broken up
    ("  ((CVector3f *)pfVar1)->x = pCVar1->x;\n  ((CVector3f *)pfVar1)->y = pCVar1->y;\n"
     "  ((CVector3f *)pfVar1)->z = pCVar1->z;\n", [1]),
    # A struct returned by a call is a path too
    ("  local_20.x = (*pcVar2)(a).x;\n  local_20.y = (*pcVar2)(a).y;\n  local_20.z = (*pcVar2)(a).z;\n", [1]),
])
def test_a_run_of_same_field_assignments_is_a_struct_copy(code, expected):
    assert field_copies(code) == expected


@pytest.mark.parametrize("before, after, expected", [
    # A renamed field at the same level proves the two types differ
    ("", "  local_20.w = pCVar1->bits;\n", []),
    ("  local_20.w = pCVar1->bits;\n", "", []),
    # ...but not at another level, a computed rename, or the same field name
    ("", "  local_20.v.w = pCVar1->v.bits;\n", [1]),
    ("", "  local_20.w = pCVar1->a - pCVar2->bits;\n", [1]),
    ("", "  local_20.x = pCVar1->x;\n", [1]),
])
def test_a_renamed_neighbour_marks_a_cross_type_copy(before, after, expected):
    shift = 1 if before else 0
    assert field_copies(before + VECTOR + after) == [e + shift for e in expected]


def test_a_run_may_end_the_code():
    assert field_copies(VECTOR.rstrip("\n")) == [1]
    assert lines_of(content.identify_unrolled_offset_copy(offset_run("p", "p", 0x10).rstrip("\n"))) == [1]


def test_a_shuffle_within_one_array_is_not_a_copy():
    code = "  v[0].t = v[1].t;\n  v[1].u = v[2].u;\n  v[2].w = v[3].w;\n"
    assert field_copies(code) == []


@pytest.mark.parametrize("loop, expected", [
    ("  for (int i = 0; i < 4; i = i + 1) {\n", []),
    ("  for (int j = 0; j < 4; j = j + 1) {\n", [2]),
    ("  x = 1;\n", [2]),
])
def test_a_body_already_indexed_by_its_loop_is_not_reunrolled(loop, expected):
    code = loop + "    buf[i].r = color.r;\n    buf[i].g = color.g;\n    buf[i].b = color.b;\n"
    assert field_copies(code) == expected


@pytest.mark.parametrize("decls, run, expected", [
    # Same type: flagged; different types: an extraction, not a copy
    ("  CVector3f local_20;\n  CVector3f local_30;\n", VECTOR.replace("pCVar1->", "local_30."), [3]),
    ("  CVector3f local_20;\n  CVector3i local_30;\n", VECTOR.replace("pCVar1->", "local_30."), []),
    # Fields spread over the struct with gaps are a coincidence
    ("  CPoly local_20;\n  CPoly local_30;\n",
     "  local_20.material_id = local_30.material_id;\n  local_20.flags = local_30.flags;\n"
     "  local_20.normal = local_30.normal;\n", []),
    ("  CPoly local_20;\n  CPoly local_30;\n",
     "  local_20.normal = local_30.normal;\n  local_20.material_id = local_30.material_id;\n"
     "  local_20.flags = local_30.flags;\n", []),
    # An unknown type, a type with no layout, or a field with no extent stays flagged
    ("", VECTOR, [1]),
    ("  CThing local_20;\n  CThing local_30;\n", VECTOR.replace("pCVar1->", "local_30."), [3]),
    ("  COdd local_20;\n  COdd local_30;\n", VECTOR.replace("pCVar1->", "local_30."), [3]),
    # A nested matrix copy keeps the untyped rules
    ("  CBox local_20;\n  CVector3f local_30;\n",
     "  local_20.min.x = local_30.min.x;\n  local_20.max.y = local_30.max.y;\n  local_20.max.z = local_30.max.z;\n", [3]),
])
def test_with_a_layout_only_same_type_contiguous_copies_are_flagged(decls, run, expected):
    assert field_copies(decls + run, LAYOUT) == expected


def test_a_field_copy_says_when_it_may_collapse():
    suspects = content.identify_unrolled_field_copy(VECTOR)
    assert "3 consecutive" in suspects[0]["description"] and suspects[0]["text"] == "local_20.x = pCVar1->x;"


# --- partial struct copies ------------------------------------------------------------

PARTIAL = """  CVector3i local_84;
  CVector3i local_60;
  CVector3f *pCVar1;
  computeLight(&local_84);
  local_60.x = local_84.x;
  local_60.y = local_84.y;
{extra}  applyLight(this_ptr,&local_60);
"""


def partial(code):
    return content.identify_partial_struct_copy(code, LAYOUT)


def test_a_copy_missing_a_field_before_a_whole_struct_read_is_partial():
    suspects = partial(PARTIAL.format(extra = ""))
    assert lines_of(suspects) == [5]
    assert suspects[0]["match"] == "local_60.x = local_84.x; (partial CVector3i copy — 8/12 bytes)"
    assert "field(s) `z` are never assigned" in suspects[0]["description"]


@pytest.mark.parametrize("extra", [
    # The field is written elsewhere, or the copy is complete
    "  local_60.z = 0;\n",
    "  local_60.z = local_84.z;\n",
    # The destination is aliased, or is read before the copy
    "  pCVar1 = (CVector3f *)&local_60;\n",
])
def test_a_covered_or_aliased_destination_is_not_partial(extra):
    assert partial(PARTIAL.format(extra = extra)) == []


@pytest.mark.parametrize("code", [
    "",
    PARTIAL.format(extra = "").replace("  applyLight(this_ptr,&local_60);\n", ""),
    PARTIAL.format(extra = "").replace("computeLight(&local_84)", "initVector(&local_60)"),
    # Pointers, self-copies, other types, no layout or an unresolved field
    "  CVector3i *p;\n  CVector3i local_60;\n  local_60.x = p.x;\n  f(&local_60);\n",
    "  CVector3i local_60;\n  local_60.x = local_60.x;\n  f(&local_60);\n",
    PARTIAL.format(extra = "").replace("CVector3i local_84", "CVector3f local_84"),
    PARTIAL.format(extra = "").replace("CVector3i", "CThing"),
    PARTIAL.format(extra = "").replace("local_60.y = local_84.y", "local_60.w = local_84.w"),
    "  x = 1;\n",
])
def test_other_shapes_are_not_partial_copies(code):
    assert partial(code) == []


def test_without_a_layout_there_is_nothing_to_measure():
    assert content.identify_partial_struct_copy(PARTIAL.format(extra = ""), None) == []


def test_a_nested_field_counts_toward_coverage():
    code = ("  CBox local_84;\n  CBox local_60;\n  f(&local_84);\n"
            "  local_60.min = local_84.min;\n  local_60.max.x = local_84.max.x;\n  local_60.what = 1;\n  g(&local_60);\n")
    suspects = partial(code)
    assert lines_of(suspects) == [4] and "16/24 bytes" in suspects[0]["match"]


def test_a_gap_at_the_start_is_found():
    assert content._partial_copy_gaps([(4, 12)], [(0, 12)]) == [(0, 4)]
    assert content._partial_copy_gaps([(0, 4), (20, 24)], [(0, 12)]) == [(4, 12)]
    assert content._partial_copy_gaps([(0, 4), (2, 12)], [(0, 12)]) == []


# --- raw-offset copies ----------------------------------------------------------------

def offset_run(lbase, rbase, delta, kind = "uint", width = 4, count = 3, start = 0x224):
    return "".join(f"  *({kind} *)({lbase} + {start + k * width:#x}) = *({kind} *)({rbase} + {start + k * width + delta:#x});\n"
                   for k in range(count))


@pytest.mark.parametrize("code, expected", [
    ("", []),
    (offset_run("p", "p", 0x10), [1]),
    (offset_run("dst", "src", 0), [1]),
    (offset_run("p", "p", 2, "ushort", 2), [1]),
    # A no-op, too short, a gap, a changed delta, mixed types or an unknown type
    (offset_run("p", "p", 0), []),
    (offset_run("p", "p", 0x10, count = 2), []),
    (offset_run("p", "p", 0x10, count = 2) + offset_run("p", "p", 0x10, start = 0x300, count = 1), []),
    (offset_run("p", "p", 0x10, count = 2) + offset_run("p", "p", 0x14, start = 0x22c, count = 1), []),
    (offset_run("p", "p", 0x10, count = 2) + offset_run("p", "p", 0x10, "float", start = 0x22c, count = 1), []),
    (offset_run("p", "q", 0x10, count = 2) + offset_run("p", "p", 0x10, start = 0x22c, count = 1), []),
    ("  *(uint *)(p + 4) = *(int *)(p + 8);\n", []),
    (offset_run("p", "p", 0x10, "CThing"), []),
])
def test_a_contiguous_run_of_offset_word_copies_is_a_block_copy(code, expected):
    assert lines_of(content.identify_unrolled_offset_copy(code)) == expected
