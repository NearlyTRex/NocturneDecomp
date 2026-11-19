# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


def fld(name, offset, length, type_name, n = None, is_ptr = False):
    return {"name": name, "offset": offset, "len": length, "type": type_name, "n": n, "is_ptr": is_ptr}


# --- fast (inverse) sqrt -------------------------------------------------------------

@pytest.mark.parametrize("code, kind, known", [
    ("  fVar1 = (float)(((int)local_5c >> 1) + g_FastSqrtMagic);", "fast_sqrt_inline", True),
    ("  fVar1 = (float)(g_FastInvSqrtMagic - ((int)(a * a + b * b) >> 1));", "fast_inv_sqrt_inline", True),
    ("  *(int *)&fVar2 = (*(int *)&fVar1 >> 1) + 0x1fbd1df5;", "fast_sqrt_inline", False),
    ("  *(int *)&fVar2 = g_FlyModeDepthBias - (*(int *)&fVar1 >> 1);", "fast_inv_sqrt_inline", True),
    # Wrapped across lines
    ("  fVar1 = (float)(((int)(local_30 * local_30 + local_38 * local_38) >> 1) +\n     g_FastSqrtMagic);",
     "fast_sqrt_inline", True),
])
def test_an_inlined_sqrt_bit_trick_names_its_helper(code, kind, known):
    suspects = content.identify_fast_sqrt_inline(code)
    assert len(suspects) == 1 and suspects[0]["type"] == kind and suspects[0]["line"] == 1
    assert ("Replace with `" in suspects[0]["description"]) == known


def test_plain_halving_is_not_a_sqrt():
    assert content.identify_fast_sqrt_inline("  x = (int)y >> 1;") == []
    assert content.identify_fast_sqrt_inline("") == []


# --- inline exp ----------------------------------------------------------------------

@pytest.mark.parametrize("code, severities", [
    ("  fVar2 = f2xm1(fVar1 - (fVar1 / fVar3) * fVar3);", ["major"]),
    ("  fVar2 = fscale(fVar4 + 1, fVar1);", ["moderate"]),
    ("// Name: crt_math.c_exp_FUN_00600000\n  fVar2 = fscale(fVar4, fVar1);\n"
     "  fVar2 = f2xm1(fVar1 - (fVar1 / fVar3) * fVar3);", ["major"]),
    ("  // fscale(a, b)\n   * f2xm1(a - (a / b) * b)\n  x = exp(a);", []),
    ("// Name: crt_math.c_exp_FUN_00600000\n  x = exp(a);", []),
    ("", []),
])
def test_an_inline_exp_with_a_dropped_fprem_is_flagged(code, severities):
    assert [s["severity"] for s in content.identify_inline_exp_idiom(code)] == severities


# --- float bits compared as ints -----------------------------------------------------

@pytest.mark.parametrize("line, value", [
    ("  if (0x41a00000 < (int)this_ptr->anim_frame) {", "20f"),
    ("  while ((int)x >= 0x3f800000) {", "1f"),
])
def test_a_float_threshold_compared_through_an_int_cast_is_flagged(line, value):
    suspects = content.identify_bit_int_float_compare(line)
    assert len(suspects) == 1 and suspects[0]["description"].endswith(f"against {value}.")


@pytest.mark.parametrize("code", ["", "\n", "  // if (0x41a00000 < (int)x)", "  if (0x00401000 < (int)x) {",
                                  "  if ((int)x < 0x7f800000) {"])
def test_int_shaped_constants_are_not_float_thresholds(code):
    assert content.identify_bit_int_float_compare(code) == []


# --- pointer masks -------------------------------------------------------------------

@pytest.mark.parametrize("line, shown", [
    ("  p = (void *)(((uintptr_t)p + 0x10U) & ~0xFu);", "~0xFu"),
    ("  p = (void *)((uintptr_t)p & 0xfffffff8);", "0xfffffff8"),
])
def test_a_32_bit_alignment_mask_on_a_pointer_truncates_it(line, shown):
    suspects = content.identify_truncating_pointer_mask(line)
    assert [s["match"] for s in suspects] == [f"(uintptr_t) ... & {shown}"]


@pytest.mark.parametrize("code", [
    "", "  p = (void *)((uintptr_t)p & ~(uintptr_t)0xF);", "  p = (void *)((uintptr_t)p & ~0xFULL);",
    "  p = (void *)((uintptr_t)p & ~0x10000);", "  x = (uintptr_t)p & 0xff;", "  x = y & 0xfffffff8;",
    "  // (uintptr_t)p & 0xfffffff8", "  q = (uintptr_t)p & ~0u;",
])
def test_pointer_width_masks_are_fine(code):
    assert content.identify_truncating_pointer_mask(code) == []


# --- struct reinterpreted as an int array --------------------------------------------

REINTERPRET = "// Signature: void f(CPickList *this_ptr,void *data)\n  piVar1 = (int *)this_ptr;\n  x = piVar1[4];\n"


@pytest.mark.parametrize("code, sizes, expected", [
    (REINTERPRET, {"CPickList": 0x40}, [2]),
    (REINTERPRET, None, []),
    ("", {"CPickList": 0x40}, []),
    (REINTERPRET.replace("piVar1[4]", "*piVar1"), {"CPickList": 0x40}, []),
    (REINTERPRET.replace("(int *)this_ptr", "(int *)data"), {"CPickList": 0x40}, []),
])
def test_a_struct_walked_as_an_int_array_is_flagged(code, sizes, expected):
    assert lines_of(content.identify_struct_reinterpret_walk(code, sizes)) == expected


# --- allocation sizes ----------------------------------------------------------------

SIZES = {"SVertexData": 0x14, "SFace": 0x20}


@pytest.mark.parametrize("code, matches", [
    ("  pv = (SVertexData *)debugMalloc(count * 0x14);", ["(SVertexData*) alloc stride 0x14"]),
    ("  pp = (CComplexPolygon **)realloc(old, (n + 1) * 4);", ["(CComplexPolygon**) alloc stride 4"]),
    ("  pf = (SFace *)calloc(n << 5);", ["(SFace*) alloc stride 0x20"]),
    ("  pf = (SFace *)calloc(1, 32);", ["(SFace*) alloc stride 0x20"]),
    # Wrapped onto the next line
    ("  pv = (SVertexData *)realloc\n      (old, n * 20);", ["(SVertexData*) alloc stride 0x14"]),
    # Other sizes, no constant, unknown types, comments, or a call cut off
    ("  pv = (SVertexData *)debugMalloc(count * 0x18);", []),
    ("  pp = (CPoly **)realloc(old, n * 8);", []),
    ("  pv = (SVertexData *)debugMalloc(size);", []),
    ("  pv = (CThing *)debugMalloc(count * 0x14);", []),
    ("  // pv = (SVertexData *)debugMalloc(count * 0x14);", []),
    ("  pv = (SVertexData *)debugMalloc(count * 0x14", []),
    # Array-new: the stride is in the alloc that fed it
    ("  mem = debugAlloc(count * 0x14 + 4);\n  pv = (SVertexData *)__vec_new(mem, count, ti);", ["(SVertexData *) array-new alloc stride 0x14"]),
    ("  mem = debugAlloc(count * 0x18 + 4);\n  pv = (SVertexData *)__vec_new(mem, count, ti);", []),
    ("  pv = (SVertexData *)__vec_new(mem, count, ti);", []),
    ("  mem = debugAlloc(count * 0x14 + 4);\n  pv = (CThing *)__arrinit(mem, count, ti);", []),
    ("  mem = debugAlloc(count * 0x14", []),
    ("  pv = (SVertexData *)__vec_new(mem, count, ti);\n  mem = debugAlloc(count * 0x14", []),
])
def test_an_allocation_baking_in_a_struct_size_is_flagged(code, matches):
    assert [s["match"] for s in content.identify_alloc_magic_size(code, SIZES)] == matches


def test_without_sizes_allocations_are_not_checked():
    assert content.identify_alloc_magic_size("  pv = (SVertexData *)debugMalloc(count * 0x14);") == []


def test_an_array_new_whose_alloc_is_cut_off_is_skipped():
    code = "  mem = debugAlloc(count * 0x14\n  pv = (SVertexData *)__vec_new(mem, count, ti);"
    assert content.identify_alloc_magic_size(code, SIZES) == []


# --- struct field overruns -----------------------------------------------------------

OVERRUN_LAYOUT = {
    "CThing": [fld("items", 0, 16, "int", 4), fld("count", 16, 4, "int"), fld("buf", 20, 100, "char", 100),
               fld("pair", 120, 8, "int", 2), fld("next", 128, 4, "int"), fld("tail", 132, 4, "int", 1)],
    "CEmpty": [],
}
SIG = "// Signature: void f(CThing *this_ptr,CEmpty *e,CMissing *m)\n"


@pytest.mark.parametrize("line, matches", [
    ("  x = this_ptr->items[4] + this_ptr->items[4];", ["this_ptr->items[4]"]),
    ("  this_ptr->buf[i + 99] = 0;", ["this_ptr->buf[i + 99]"]),
    ("  x = this_ptr->items[g_Idx[2] + 4];", ["this_ptr->items[g_Idx[2] + 4]"]),
    # In range, a small array, a flexible tail, a scalar, a split index, or unknown types
    ("  x = this_ptr->items[3] + this_ptr->buf[i + 98] + this_ptr->pair[i + 1];", []),
    ("  x = this_ptr->tail[3];", []),
    ("  x = this_ptr->count[2];", []),
    ("  x = this_ptr->items[i +", []),
    ("  x = e->items[9] + m->items[9] + q->items[9] + this_ptr->missing[9];", []),
    ("  // this_ptr->items[4]\n   * this_ptr->items[4]", []),
])
def test_an_array_field_index_past_its_end_is_an_overrun(line, matches):
    suspects = content.identify_struct_field_overrun(SIG + line, OVERRUN_LAYOUT)
    assert [s["match"] for s in suspects] == matches


def test_an_overrun_names_where_it_lands():
    suspects = content.identify_struct_field_overrun(SIG + "  x = this_ptr->items[4];\n  y = this_ptr->buf[i + 99];", OVERRUN_LAYOUT)
    assert "overruns into count (offset 0x10)" in suspects[0]["description"]
    assert "Watcom 1-based base-shift" in suspects[1]["description"]
    layout = {"CEnd": [fld("count", 0, 4, "int"), fld("items", 4, 16, "int", 4)]}
    tail = content.identify_struct_field_overrun("  CEnd *p;\n  x = p->items[5];", layout)
    assert "overruns past the end of CEnd" in tail[0]["description"]


@pytest.mark.parametrize("code, layout", [("", OVERRUN_LAYOUT), (SIG, None), ("  x = 1;", OVERRUN_LAYOUT)])
def test_the_overrun_check_needs_code_types_and_a_layout(code, layout):
    assert content.identify_struct_field_overrun(code, layout) == []


# --- stale 64-bit struct offsets -----------------------------------------------------

XREF = {
    "SScriptXRef": [fld("name", 0, 0x104, "char", 0x104), fld("actor", 0x104, 4, "CDemonActor", None, True),
                    fld("flags", 0x108, 4, "int")],
    "SInner": [fld("id", 0, 4, "int"), fld("owner", 4, 4, "SScriptXRef", None, True)],
    "SOuter": [fld("tag", 0, 8, "char", 8), fld("inner", 8, 8, "SInner"), fld("score", 16, 4, "int")],
    "SFlat": [fld("a", 0, 8, "char", 8), fld("b", 8, 4, "int")],
    "SMixed": [fld("a", 0, 4, "char", 4), fld("b", 4, 4, "int"), fld("p", 8, 4, "void", None, True)],
}
XSIG = "// Signature: void f(SScriptXRef *xref,SOuter *outer,SFlat *flat,SMixed *mixed)\n"


@pytest.mark.parametrize("body, matches", [
    ("  *(CDemonActor **)(xref->name + 0x104) = 0;", ["*(...)(xref->name + 0x104)"]),
    ("  pcVar8 = xref->name + i;\n  x = *(int *)(pcVar8 + 0x108) + *(int *)(pcVar8 + 0x108);", ["*(...)(pcVar8 + 0x108)"]),
    ("  x = *(int *)(outer->tag + 0xc);", ["*(...)(outer->tag + 0xc)"]),
    ("  x = *(int *)((char *)(xref->name) + 0x108);", ["*(...)((char *)(xref->name) + 0x108)"]),
    # Out of the base field but still before the first pointer
    ("  x = *(int *)(mixed->a + 4);", []),
    # Before the first pointer, inside the base field, a stable struct, past the struct, or a value field
    ("  x = *(int *)(outer->tag + 0x4);", []),
    ("  x = *(char *)(xref->name + 0xfe);", []),
    ("  x = *(int *)(flat->a + 8);", []),
    ("  x = *(int *)(xref->name + 0x200);", []),
    ("  x = *(int *)(xref->actor + 0x108);", []),
    ("  x = *(int *)(xref->name);", []),
    ("  x = *(int *)(a + b);", []),
    ("  x = *(int *)(somewhere->name + 0x108);", []),
    ("  x = *(int *)(xref->name + 0x108", []),
    ("  // *(int *)(xref->name + 0x108)\n  /* *(int *)(xref->name + 0x108) */", []),
    ("  pcVar8 = f(a);\n  // pcVar8 = xref->name;\n  x = *(int *)(pcVar8 + 0x108);", []),
])
def test_a_baked_offset_past_a_pointer_field_goes_stale_at_64_bit(body, matches):
    suspects = content.identify_stale_struct_offset_64bit(XSIG + body, XREF)
    assert [s["match"] for s in suspects] == matches


def test_a_pointer_typed_stale_access_says_what_to_recover():
    suspects = content.identify_stale_struct_offset_64bit(XSIG + "  *(CDemonActor **)(xref->name + 0x104) = 0;", XREF)
    assert "actor" in suspects[0]["description"]


@pytest.mark.parametrize("code, layout", [
    ("", XREF), (XSIG, None), (XSIG + "  x = *(int *)(flat->a + 8);", {"SFlat": XREF["SFlat"]}), ("  x = 1;", XREF),
])
def test_the_stale_offset_check_needs_unstable_types(code, layout):
    assert content.identify_stale_struct_offset_64bit(code, layout) == []
