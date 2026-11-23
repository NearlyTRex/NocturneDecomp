# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


def fld(name, offset, length, type_name, n = None, is_ptr = False, stars = 0):
    return {"name": name, "offset": offset, "len": length, "type": type_name, "n": n, "is_ptr": is_ptr, "stars": stars}


# --- derived-class field reached by indexing a base pointer --------------------------

DERIVED = {
    "CCharacter": [fld("actor_name", 0, 0x20, "char", 0x20), fld("health", 0x20, 4, "int")],
    "CEnemy": [fld("base", 0, 0x24, "CCharacter"), fld("pad", 0x24, 0x18, "char"), fld("victim", 0x3c, 4, "CHero", None, True)],
    "CBoss": [fld("base", 0, 0x24, "CCharacter"), fld("armor", 0x3c, 4, "int")],
    "CLamp": [fld("base", 0, 0x24, "CCharacter"), fld("clips", 0x30, 0x20, "SClipPlane", 2)],
    "COdd": [fld("base", 4, 4, "CCharacter")],
    "CEmpty": [],
    "CLeaf": [fld("kind", 0, 4, "int")],
}
DSIZES = {"CCharacter": 0x24, "CEnemy": 0x40, "CBoss": 0x40, "CLamp": 0x50, "CLeaf": 4}
DSIG = "// Signature: void f(CCharacter *pc,CBoss *pb,CLeaf *pl,CEnemy *pe)\n"


def puns(code, sizes = None):
    """The derived-field puns in `code`, over DERIVED with DSIZES unless other sizes are given."""
    return content.identify_derived_field_index_pun(code, DERIVED, sizes or DSIZES)


@pytest.mark.parametrize("header, owner, ambiguous", [
    ("// Signature: void f(CCharacter *pc,CEnemy *this_ptr)\n", "((CEnemy *)pc)->victim", False),
    ("// Name: core_boss.cpp_CBoss_process_FUN_00401000\n" + DSIG, "((CBoss *)pc)->armor", False),
    (DSIG, "((CEnemy *)pc)->victim", True),
])
def test_a_base_index_landing_on_a_derived_field_is_named(header, owner, ambiguous):
    suspects = puns(header + "  x = *(CHero **)(pc[1].actor_name + 0x18);")
    assert len(suspects) == 1 and owner in suspects[0]["description"]
    assert ("Ambiguous: CBoss::armor" in suspects[0]["description"]) == ambiguous


@pytest.mark.parametrize("line, named", [
    # An element boundary of an array field, and the address form
    ("  x = *(int *)(pc[1].actor_name + 0x1c);", "((CLamp *)pc)->clips[1]"),
    ("  f((SClipPlane *)&pc[1].actor_name[12]);", "((CLamp *)pc)->clips "),
    # Index 0 reaching a neighbour through the named field
    ("  x = *(int *)(pc[0].actor_name + 0x20);", "((CCharacter *)pc)->health"),
])
def test_other_landings_name_their_field(line, named):
    suspects = puns(DSIG + line)
    assert len(suspects) == 1 and named in suspects[0]["description"]


@pytest.mark.parametrize("line", [
    # Inside the named field, mid-field, no derived class, a redundant cast, or unresolved parts
    "  x = *(int *)(pc[0].actor_name + 4);",
    "  x = *(int *)(pc[1].actor_name + 4);",
    "  x = *(int *)(pb[1].armor + 4);",
    "  f((int *)&pc[1].health);",
    "  f((CCharacter *)&pc[1].health);",
    "  x = *(int *)(pc[1].health[1] + 4);",
    "  x = *(int *)(pc[1].missing + 4);",
    "  x = *(int *)(pc[1].actor_name.x + 4);",
    "  x = *(int *)(pl[1].kind + 4);",
    "  x = *(int *)(pz[1].kind + 4);",
    "  x = *(int *)(pe[1].base.health + 4);",
    "  // *(CHero **)(pc[1].actor_name + 0x18)",
])
def test_ordinary_indexing_is_not_a_pun(line):
    assert puns(DSIG + line) == []


def test_a_base_without_a_size_cannot_be_measured():
    assert puns(DSIG + "  x = *(CHero **)(pc[1].actor_name + 0x18);", sizes = {"CLeaf": 4}) == []


@pytest.mark.parametrize("code, layout, sizes", [
    ("", DERIVED, DSIZES), (DSIG, None, DSIZES), (DSIG, DERIVED, None), ("  x = 1;", DERIVED, DSIZES),
])
def test_the_pun_check_needs_code_types_and_both_maps(code, layout, sizes):
    assert content.identify_derived_field_index_pun(code, layout, sizes) == []


# --- flattened multi-dimensional indexes ---------------------------------------------

@pytest.mark.parametrize("code, phrase", [
    ("  iVar4 = iVar9 * 0x140 + iVar11;\n  iVar4 = iVar4 + 0x12c00;\n"
     "  g_CameraImageDecompressBuffer[0].pixels[0][iVar4] = cVar2;\n  x = g_Buf.pixels[0][iVar4];",
     "multiplied by 0x140 and stepped by 0x12c00"),
    ("  iVar4 += 0x200;\n  x = m[0][iVar4];", "stepped by 0x200"),
    ("  iVar5 = 0;\n  iVar2 = iVar5;\n  iVar2 = iVar2 + 1;\n  iVar5 = iVar5 + 0x140;\n  iVar5 += 2;\n  m[0][iVar2] = 0;",
     "copied from iVar5, which is stepped by 0x2, 0x140"),
])
def test_a_flattened_row_major_index_on_element_zero_is_flagged(code, phrase):
    suspects = content.identify_flattened_array_index(code)
    assert suspects and phrase in suspects[0]["description"]
    assert len(suspects) == code.count("[0][")


@pytest.mark.parametrize("code", [
    "",
    "  i = i + 1;\n  m[0][i] = 0;",
    # A copied cursor whose source is reused, steps by one, or is itself
    "  iVar5 = f();\n  iVar2 = iVar5;\n  iVar2 = iVar2 + 1;\n  iVar5 = iVar5 + 0x140;\n  m[0][iVar2] = 0;",
    "  iVar2 = iVar5;\n  iVar2 = iVar2 + 1;\n  iVar5 = iVar5 + 1;\n  m[0][iVar2] = 0;",
    "  iVar2 = iVar2;\n  iVar2 = iVar2 + 1;\n  m[0][iVar2] = 0;",
    "  iVar4 = iVar9 * 1;\n  iVar4 = iVar4 + 2;\n  iVar4 += 3;\n  m[0][iVar4] = 0;",
    "  // m[0][iVar4]\n  iVar4 = iVar9 * 0x140;",
])
def test_ordinary_element_zero_indexes_are_fine(code):
    assert content.identify_flattened_array_index(code) == []


# --- mem* sizes baking in an unstable sizeof -----------------------------------------

MEM_LAYOUT = {
    "SNetPlayer": [fld("name", 0, 0x74, "char", 0x74), fld("actor", 0x74, 4, "CDemonActor", None, True, 1)],
    "SVertex": [fld("x", 0, 4, "float"), fld("y", 4, 4, "float")],
    "CBoneGuy": [fld("pad", 0, 48956, "char", 48956), fld("slots", 48956, 0x20, "CDemonActor", 8, True, 1),
                 fld("players", 48988, 0xf0, "SNetPlayer", 2), fld("verts", 49228, 0x20, "SVertex", 4)],
    "SLoose": [fld("p", 0, 4, "void", None, True)],
}
MEM_SIZES = {"SNetPlayer": 0x78, "SVertex": 8}
MEM_DECLS = ("  SNetPlayer *this_ptr;\n  SNetPlayer *other;\n  SVertex *v;\n  CBoneGuy *g;\n"
             "  CBoneGuy_ptr_48956 dest;\n  CBoneGuy_ptr_4 bad;\n  SLoose *l;\n")


@pytest.mark.parametrize("line, matches", [
    ("  memcpy(this_ptr, other, 0x78);", ["memcpy(dest) size 0x78 == sizeof(SNetPlayer)"]),
    ("  memmove(v, other, n * 0x78);", ["memmove(src) size 0x78 == sizeof(SNetPlayer)"]),
    ("  memset(g->slots, 0, 0x20);", ["memset(dest) size 0x20 == sizeof(CDemonActor *[8])"]),
    ("  memset(&g->players, 0, 0xf0);", ["memset(dest) size 0xf0 == sizeof(SNetPlayer[2])"]),
    ("  memset(dest, 0, 0x20);", ["memset(dest) size 0x20 == sizeof(CDemonActor *[8])"]),
    ("  memcpy(other, f(a,b[1]), (n + 1) * 0x78);", ["memcpy(dest) size 0x78 == sizeof(SNetPlayer)"]),
    ("  memset();", []),
    # Width-stable types, a different count, no count, too few args, or unresolved operands
    ("  memcpy(v, v, 8);", []),
    ("  memset(g->verts, 0, 0x20);", []),
    ("  memcpy(this_ptr, other, 0x70);", []),
    ("  memcpy(this_ptr, other, size);", []),
    ("  memcpy(this_ptr, other);", []),
    ("  memset(bad, 0, 0x20);\n  memset(g->missing, 0, 0x20);\n  memset(q->slots, 0, 0x20);\n  memset(*g, 0, 0x20);", []),
    ("  memset(l, 0, 4);", []),
    ("  // memcpy(this_ptr, other, 0x78);", []),
    ("  memcpy(this_ptr, other, 0x78", []),
])
def test_a_mem_call_sized_by_an_unstable_struct_is_flagged(line, matches):
    suspects = content.identify_mem_magic_size(MEM_DECLS + line, MEM_LAYOUT, MEM_SIZES)
    assert [s["match"] for s in suspects] == matches


@pytest.mark.parametrize("code, layout, sizes", [
    ("", MEM_LAYOUT, MEM_SIZES), (MEM_DECLS, None, MEM_SIZES), (MEM_DECLS, MEM_LAYOUT, None),
    ("  SVertex *v;\n  memcpy(v, v, 8);", {"SVertex": MEM_LAYOUT["SVertex"]}, MEM_SIZES),
])
def test_the_mem_check_needs_both_maps_and_an_unstable_type(code, layout, sizes):
    assert content.identify_mem_magic_size(code, layout, sizes) == []


# --- literal element strides ---------------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  memmove(dst, src, count * 4);", [1]),
    ("  memcpy(dst, src, count << 3);", [1]),
    ("  n = count * 0x20;\n  memmove(dst,\n          src, n);", [2]),
    ("  memset(a, 0, n * 4); memset(b, 0, m * 8);", [1]),
    # A bits-per-pixel ladder over one byte count is not a stride
    ("  memset(p, 0, iVar1);\n  memset(p, 0, iVar1 * 2);\n  memset(p, 0, iVar1 * 4);", []),
    ("  memcpy(dst, src, count * 2);\n  memcpy(dst, src, count + 4);\n  memcpy(dst, src);\n  memcpy(dst, src, n * 4", []),
    # A literal sort width
    ("  _qsort(ptrs, n, 4, cmp);\n  bsearch(&key, base, n, 0x14, cmp);", [1, 2]),
    ("  qsort(ptrs, n, sizeof(void *), cmp);\n  qsort(ptrs, n);\n  qsort(ptrs, n, 4", []),
    ("  memcpy(dst, src, count * 4); qsort(p, n, 4, cmp);", [1]),
])
def test_a_hardcoded_element_stride_in_a_byte_count_is_flagged(code, expected):
    assert lines_of(content.identify_pointer_stride_bytecount(code)) == expected


# --- member upcasts of a possibly-null pointer ---------------------------------------

CAST = "core_actor_cpp_castToClassHash_FUN_0040c790"


@pytest.mark.parametrize("before, arg", [
    ("", "&pCVar2->base"),
    ("", "&(pCVar2)->base"),
    ("", "&((pCVar2)->base)"),
    # Tested only inside a closed block, or dereferenced only for its address
    ("  if (a) {\n    if (pCVar2 != (CFoo *)0x0) { x = 1; }\n  }\n", "&pCVar2->base"),
    ("  p = &pCVar2->field;\n", "&pCVar2->base"),
])
def test_a_member_upcast_of_a_maybe_null_pointer_is_flagged(before, arg):
    code = before + f"  pCVar1 = {CAST}({arg}, g_Hash);\n"
    suspects = content.identify_null_member_upcast(code)
    assert [s["match"] for s in suspects] == ["pCVar2"]
    assert suspects[0]["line"] == code.count("\n")


@pytest.mark.parametrize("before, arg", [
    ("", "&this_ptr->base"),
    ("", "pCVar2"),
    ("", "&pCVar2->other"),
    ("  if (pCVar2 == (CFoo *)0x0) {\n    return;\n  }\n", "&pCVar2->base"),
    ("  if (0 != pCVar2) {\n", "&pCVar2->base"),
    ("  x = pCVar2->health;\n", "&pCVar2->base"),
    ("  pCVar3 = (CBar *)pCVar2;\n  y = (pCVar3)->health;\n", "&pCVar2->base"),
    ("  if (pCVar2 == (CFoo *)0x0) {\n    x = 1;\n  }\n  else {\n", "&pCVar2->base"),
])
def test_a_known_non_null_or_plain_pointer_is_fine(before, arg):
    code = before + f"  pCVar1 = {CAST}({arg}, g_Hash);\n"
    assert content.identify_null_member_upcast(code) == []


@pytest.mark.parametrize("code, match", [
    # A cast operand, a one-argument call, and a brace in a string before the call
    (f"  pCVar1 = {CAST}(&((CEnemy *)(pCVar2))->base, g_Hash);\n", "(CEnemy *)(pCVar2)"),
    (f"  pCVar1 = {CAST}(&pCVar2->base);\n", "pCVar2"),
    ("  f(\"}\");\n  pCVar1 = %s(&pCVar2->base, g_Hash);\n" % CAST, "pCVar2"),
])
def test_other_upcast_spellings_are_found(code, match):
    assert [s["match"] for s in content.identify_null_member_upcast(code)] == [match]


def test_a_call_cut_off_has_no_argument():
    assert content.identify_null_member_upcast(f"  x = {CAST}(&pCVar2->base") == []
    assert content.identify_null_member_upcast("") == []


# --- the aggregator ------------------------------------------------------------------

def test_every_content_detector_runs_over_the_code():
    found = content.detect_content_suspects("  x = in_EAX;\n  lVar1 = CONCAT44(a,b);\n")
    assert {"register_param", "concat_reconstruction"} <= {s["type"] for s in found}
    assert content.detect_content_suspects("") == []


# --- format strings ------------------------------------------------------------------

CALLS = [{"name": "crt_stdio.c_sprintf_FUN_005fdbd0", "is_variadic": True},
         {"addr": "005fe6d0", "is_variadic": True}, {"name": "f_FUN_00401000"}]


@pytest.mark.parametrize("line, expected, actual", [
    ("  crt_stdio_c_sprintf_FUN_005fdbd0(buf,\"%d %s\",a);", 2, 1),
    ("  crt_stdio_c_fprintf_FUN_005fe6d0(file,\"%d\",a,b);", 1, 2),
])
def test_a_variadic_call_with_the_wrong_argument_count_is_flagged(line, expected, actual):
    suspects = content.identify_format_string_mismatch(line, CALLS)
    assert len(suspects) == 1 and (suspects[0]["expected_args"], suspects[0]["actual_args"]) == (expected, actual)


@pytest.mark.parametrize("code, calls", [
    ("", CALLS),
    ("  sprintf_FUN_005fdbd0(buf,\"%d\",a);", None),
    ("  sprintf_FUN_005fdbd0(buf,\"%d\",a);", [{"name": "f", "is_variadic": False}]),
    ("  sprintf_FUN_005fdbd0(buf,\"%d\",a);\n  f_FUN_00401000(\"%d\");\n  g(\"%d\");\n"
     "  sprintf_FUN_005fdbd0();\n  sprintf_FUN_005fdbd0(buf,\"x\");\n  sprintf_FUN_005fdbd0(buf,\"%d\"", CALLS),
    ("  sprintf_FUN_005fdbd0(buf,\"%d\",a);", [{"name": "", "addr": "", "is_variadic": True}]),
])
def test_matching_or_unknown_calls_are_fine(code, calls):
    assert content.identify_format_string_mismatch(code, calls) == []


# --- stale enumerators ---------------------------------------------------------------

ENUMS = {"EDamageType": {"FALL_APART": 4, "SHATTER": 5}, "EKind": {"BOTH": 1}, "EOther": {"BOTH": 2, "LONE": 3}}


def test_a_keep_naming_an_enumerator_the_export_swapped_out_is_stale():
    keep = "/* SHATTER in prose */\n  if (type == SHATTER) {\n  // SHATTER\n\n  x = SHATTER + BOTH;"
    suspects = content.identify_stale_enum_name(keep, "  if (type == FALL_APART) {", ENUMS)
    assert lines_of(suspects) == [2, 5]
    assert "`FALL_APART` = 4" in suspects[0]["description"]


@pytest.mark.parametrize("keep, cpp, enums", [
    ("", "x", ENUMS), ("x", "", ENUMS), ("x", "x", None),
    # Only ambiguous names, no names at all, or a one-sided difference
    ("  x = BOTH;", "  x = 1;", {"EKind": {"BOTH": 1}, "EOther": {"BOTH": 2}}),
    ("  x = 1;", "  x = SHATTER;", ENUMS),
    ("  x = SHATTER;", "  x = 5;", ENUMS),
    ("  x = SHATTER;", "  x = SHATTER;", ENUMS),
    ("  x = LONE;", "  x = 3;", ENUMS),
])
def test_one_sided_or_matching_enumerators_are_fine(keep, cpp, enums):
    assert content.identify_stale_enum_name(keep, cpp, enums) == []


def test_a_name_shared_with_one_value_is_kept():
    assert content._enum_reverse_index({"A": {"X": 1}, "B": {"X": 1}}) == {"X": ("A", 1)}
