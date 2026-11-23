# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


# --- signed shift of a global --------------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  cVar2 = (char)((g_FlatShadingLightLevel + (g_FlatShadingLightLevel >> 0x1f) * -0x100));", [1]),
    ("  x = (int)g_Table[i].value >> 31;", [1]),
    ("  // g_Level >> 0x1f\n  /* g_Level >> 0x1f */\n  x = local_4 >> 0x1f;\n  x = g_Level >> 2;", []),
])
def test_a_sign_mask_on_a_global_is_flagged(code, expected):
    assert lines_of(content.identify_signed_shift_global_idiom(code)) == expected


# --- split arrays --------------------------------------------------------------------

def test_a_struct_array_smaller_than_its_siblings_was_split():
    code = ("  SBoneState local_186c [95];\n  SBoneState local_122c [100];\n  SBoneState local_bec [100];\n"
            "  // SBoneState local_x [1];\n  char local_200 [10];\n  char local_100 [100];\n  char local_50 [100];\n"
            "  CThing *local_40 [2];\n  CThing *local_30 [8];\n  CThing *local_20 [8];\n")
    suspects = content.identify_sibling_array_undersized(code)
    assert lines_of(suspects) == [1]
    assert suspects[0]["match"] == "SBoneState local_186c[95] vs sibling SBoneState[100]"


@pytest.mark.parametrize("code", [
    "",
    # One of each size is ambiguous; a lone array has no siblings
    "  SBone local_a [95];\n  SBone local_b [100];\n",
    "  SBone local_a [95];\n  SVec local_b [100];\n",
    "  /* SBone local_a [95];\n   * SBone local_b [100];\n",
])
def test_unambiguous_array_sizes_are_fine(code):
    assert content.identify_sibling_array_undersized(code) == []


# --- pointer casts across lines ------------------------------------------------------

def test_a_pointer_cast_wrapped_onto_the_next_line_is_flagged_once():
    code = ("  x = 1;\n  *(float *)\n   ((int)pCVar1 + 0x10) = 0.0;\n"
            "  y = *(int *)((int)pCVar2 + 4);\n")
    suspects = content.identify_pointer_cast_multiline(code)
    assert lines_of(suspects) == [2] and suspects[0]["text"] == "*(float *)"
    assert content.identify_pointer_cast_multiline("") == []


# --- (int)&NAME arithmetic -----------------------------------------------------------

@pytest.mark.parametrize("line, flagged", [
    ("  iVar1 = (int)&local_ec + iVar2;", True),
    ("  iVar1 = iVar2 - (int)&local_ec.field[i + 1];", True),
    ("  iVar1 = (int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + 4;", True),
    ("  iVar1 = (int)&(((SMRGLPrimitiveQuad *)(p->vertices + -2))->base).base.type + 8 + (int)&x - 1;", True),
    ("  f((int)&local_ec);", False),
    ("  // (int)&local_ec + 4", False),
    ("   * (int)&local_ec + 4", False),
])
def test_an_address_used_in_arithmetic_is_a_byte_offset_walk(line, flagged):
    suspects = content.identify_int_address_arithmetic(line)
    assert len(suspects) == int(flagged)


def test_no_code_has_no_address_arithmetic():
    assert content.identify_int_address_arithmetic("") == []
    assert content.identify_int_address_arithmetic_multiline("") == []


@pytest.mark.parametrize("code, expected", [
    ("  iVar1 = (int)&(((SMRGLPrimitiveTriangle *)(p->vertices + -2))->base).base.\n         type + iVar2;\n", [1]),
    ("  iVar1 = (int)&(p->base).base\n         .type + iVar2;\n", [1]),
    # On one line it is the single-line pass's; in a comment it is not code
    ("  iVar1 = (int)&local_ec + iVar2;\n", []),
    ("  /* iVar1 = (int)&(p->base).base\n         .type + iVar2; */\n", []),
])
def test_an_address_walk_wrapped_across_lines_is_flagged(code, expected):
    assert lines_of(content.identify_int_address_arithmetic_multiline(code)) == expected


# --- subobject reached by offset -----------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  CMirror_ctor((CMirror *)(pCVar2[1].create_event + 0x1c));", [1]),
    ("  p = (int *)((int)records[1]->data + 0x8);", [1]),
    ("  p = (int *)(records[12].data + 0x8);\n  p = (int *)(records[1].data + i);\n"
     "  // (CMirror *)(pCVar2[1].create_event + 0x1c)", []),
])
def test_a_member_reached_through_a_phantom_element_is_flagged(code, expected):
    assert lines_of(content.identify_subobject_byte_offset_cast(code)) == expected


# --- (int)ptr + offset ---------------------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  *(int *)((int)this_ptr + 0x11ec) = 1;", [1]),
    ("  iVar1 = alpha_index * 0xc + (int)this_ptr;\n  *(int *)(iVar1 + 0x11ec) = 1;\n"
     "  *(int *)(iVar1 - 0x4) = *(int *)(iVar1 + 0x8);", [2, 3]),
    # An ordinary int base, or a comment
    ("  *(int *)(iVar3 + 0x10) = 1;\n  *(int *)((int)local_10 + 0x10) = 1;\n  // *(int *)((int)this_ptr + 0x11ec)", []),
])
def test_a_struct_field_reached_through_a_pointer_cast_to_int_is_flagged(code, expected):
    assert lines_of(content.identify_pointer_int_offset_access(code)) == expected


# --- shadow pointer walks ------------------------------------------------------------

@pytest.mark.parametrize("line, match", [
    ("pCVar1 = (CSkel *)((pCVar1->motion_list).state_names[1] + 2);", "pCVar1 = (T *)((pCVar1->FIELD).ARRAY[N] + CONST)"),
    ("pCVar1 = (CPlat *)&(pCVar1->base).surface_normal.B;", "pCVar1 = (T *)&(pCVar1->FIELD).SUBFIELD"),
    ("pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;", "pSVar5 = (T *)&pSVar5->FIELD[N].SUBFIELD"),
    ("pCVar19 = (CInventory *)&pCVar19->owner;", "pCVar19 = (T *)&pCVar19->FIELD"),
    ("pCVar19 = (CInventory *)pCVar19->lod_info;", "pCVar19 = (T *)pCVar19->ARRAY"),
    ("pCVar1 = (CFoo *)((pCVar1->base).list.items + 3);", "pCVar1 = (T *)((pCVar1->FIELD).SUBFIELD...ARRAY + CONST)"),
    ("local_24 = (CTextureList *)(local_24->texture_entries[0].texture_name + 0xc);",
     "local_24 = (T *)(local_24->FIELD[N].SUBFIELD + CONST)"),
    ("pSVar1 = (SPlat *)((int)&(pSVar1->base).orient + 4);", "pSVar1 = (T *)((int)&(pSVar1->FIELD).SUBFIELD + CONST)"),
    ("pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);", "pCVar12 = (T *)((int)(pCVar12 + N) + M)"),
    ("pCVar11 = (CFlame *)&pCVar11[0x2a].position.y;", "pCVar11 = (T *)&pCVar11[N].SUBFIELD"),
    ("this_ptr_00 = (CKFMI *)(this_ptr_00[1].part_visibility_flags + 0xe);", "this_ptr_00 = (T *)(this_ptr_00[N].FIELD + CONST)"),
])
def test_a_pointer_advanced_through_its_own_field_is_a_shadow_walk(line, match):
    suspects = content.identify_shadow_pointer_walk("  " + line)
    assert len(suspects) == 1 and suspects[0]["match"] == match and suspects[0]["type"] == "shadow_pointer_walk"


@pytest.mark.parametrize("body, expected", [
    # Advancing through one field while reading another strides an array
    ("  x = pSVar4->signals[0];\n  pSVar4 = (SMotion *)(pSVar4->motion_name + 8);\n", [2]),
    # A copy cursor only touches the field it advances through
    ("  *pSVar4->motion_name = 0;\n  pSVar4 = (SMotion *)(pSVar4->motion_name + 8);\n", []),
])
def test_a_bare_field_advance_needs_another_field_read(body, expected):
    code = "\n" * 30 + body + "\n" * 30
    assert [n - 30 for n in lines_of(content.identify_shadow_pointer_walk(code))] == expected


@pytest.mark.parametrize("code, expected", [
    ("  pCVar7 = &this_ptr->reflectors[0].position;\n  x = 1;\n  pCVar7 = pCVar7 + 8;\n", [3]),
    ("  pCVar20 = &this_ptr->vertices[0x1].velocity;\n  pCVar20 = pCVar20 + 3;\n", [2]),
    # A plain element walk, a single step, or another pointer's init
    ("  pCVar7 = &this_ptr->reflectors[0];\n  pCVar7 = pCVar7 + 8;\n", []),
    ("  pCVar7 = &this_ptr->reflectors[0].position;\n  pCVar7 = pCVar7 + 1;\n", []),
    ("  pCVar6 = &this_ptr->reflectors[0].position;\n  pCVar7 = pCVar7 + 8;\n", []),
])
def test_an_element_subfield_pointer_advanced_by_whole_elements_is_a_shadow_walk(code, expected):
    assert lines_of(content.identify_shadow_pointer_walk(code)) == expected


@pytest.mark.parametrize("line", [
    "pCVar4 = (CBoneGuy *)((local_1c->motion_list).state_names[1] + 2);",
    "pCVar4 = (CBoneGuy *)&(local_1c->base).orient;",
    "pCVar4 = (CBoneGuy *)&local_1c[2].orient;",
    "pCVar4 = (CBoneGuy *)local_1c->list;",
    "pCVar4 = (CBoneGuy *)((local_1c->base).orient_matrix.m + 1);",
])
def test_a_walk_through_a_scratch_pointer_rebound_later_is_a_shadow_walk(line):
    code = f"  {line}\n  x = 1;\n  local_1c = pCVar4;\n"
    suspects = content.identify_shadow_pointer_walk(code)
    assert lines_of(suspects) == [1] and suspects[0]["match"].endswith("local_1c = pCVar4")


def test_a_scratch_pointer_never_rebound_is_not_a_walk():
    code = "  pCVar4 = (CBoneGuy *)local_1c->list;\n" + "  x = 1;\n" * 20 + "  local_1c = pCVar4;\n"
    assert content.identify_shadow_pointer_walk(code) == []


@pytest.mark.parametrize("code", [
    "",
    "  // pCVar1 = (CInventory *)&pCVar1->owner;\n  * pCVar1 = (CInventory *)&pCVar1->owner;",
    "  pCVar1 = pCVar2->next;\n  pCVar1 = (CNode *)&pCVar2->next;",
])
def test_ordinary_pointer_updates_are_not_walks(code):
    assert content.identify_shadow_pointer_walk(code) == []
