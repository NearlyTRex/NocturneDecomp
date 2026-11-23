# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import fld, lines_of


VEC = [fld("x", 0, 4, "float"), fld("y", 4, 4, "float"), fld("z", 8, 4, "float")]
LAYOUT = {
    "CVector3f": VEC,
    "CBoundingBox3D": [fld("min", 0, 12, "CVector3f"), fld("max", 12, 12, "CVector3f")],
    "CBig": [fld("head", 0, 4, "int"), fld("tail", 4, 60, "char")],
    "CLoose": [{"name": "a", "type": "int"}],
    "CGap": [{"name": "a", "offset": None, "len": 4, "type": "int"}],
}


# --- sub-field address puns ----------------------------------------------------------

def test_a_vector_cast_of_a_later_component_overruns_the_local():
    code = "  f((CVector3f *)&local_168.y, (CVector3i *)&local_20.z, (CVector3f *)&local_30.x);\n  // (CVector3f *)&a.y"
    suspects = content.identify_subfield_vector_pun(code)
    assert [s["match"] for s in suspects] == ["(CVector3f *)&local_168.y", "(CVector3i *)&local_20.z"]
    assert content.identify_subfield_vector_pun("") == []


DECLS = "  CBoundingBox3D local_f8;\n  CVector3f local_20;\n  CBig local_40;\n  CLoose local_50;\n  CGap local_60;\n"


@pytest.mark.parametrize("line, expected", [
    # A full box read from 16 bytes in: 8 bytes past the end
    ("  pCVar1 = (*getBoundingBox)(this_ptr,(CBoundingBox3D *)&local_f8.max.y);", ["(CBoundingBox3D *)&local_f8.max.y"]),
    # The vector form is reported once
    ("  f((CVector3f *)&local_20.y);", ["(CVector3f *)&local_20.y"]),
    # Room left, the head, a subscripted path, a comparison, or unknown types
    ("  f((CVector3f *)&local_40.tail);", []),
    ("  f((CBoundingBox3D *)&local_f8.min.x);", []),
    ("  f((CVector3f *)&local_f8.max[1].y);", []),
    ("  if (&local_f8 != (CBoundingBox3D *)&local_f8.max) {", []),
    ("  if ((CBoundingBox3D *)&local_f8.max == p) {", []),
    ("  f((CBoundingBox3D *)&local_99.max);", []),
    ("  f((CThing *)&local_f8.max);", []),
    ("  f((CBoundingBox3D *)&local_f8.missing);", []),
    ("  f((CBoundingBox3D *)&local_50.a);", []),
    ("  f((CBoundingBox3D *)&local_60.a);", []),
    ("  // f((CBoundingBox3D *)&local_f8.max.y);", []),
])
def test_a_struct_cast_of_a_field_address_is_checked_by_size(line, expected):
    suspects = content.identify_subfield_vector_pun(DECLS + line, LAYOUT, {"CBoundingBox3D": 24})
    assert [s["match"] for s in suspects] == expected


def test_a_self_typed_pun_says_so():
    code = DECLS + "  f((CBoundingBox3D *)&local_f8.max.y);"
    suspects = content.identify_subfield_vector_pun(code, LAYOUT)
    assert "(same type as the local)" in suspects[0]["description"] and "overruns `local_f8` by 16 bytes" in suspects[0]["description"]


def test_a_path_through_a_type_with_no_layout_is_unknown():
    layout = {"CBoundingBox3D": LAYOUT["CBoundingBox3D"]}
    code = DECLS + "  f((CBoundingBox3D *)&local_f8.max.y);"
    assert content.identify_subfield_vector_pun(code, layout, {"CBoundingBox3D": 24}) == []


def test_without_declarations_only_the_vector_form_is_checked():
    assert content.identify_subfield_vector_pun("  f((CBoundingBox3D *)&local_f8.max.y);", LAYOUT) == []


# --- int/float vector puns -----------------------------------------------------------

@pytest.mark.parametrize("code, expected", [
    ("", []),
    ("  x = 1;", []),
    ("  CVector3i local_44;\n  CVector3f local_30;\n  setCamera((CVector3f *)&local_44, (CVector3f *)&local_30);\n"
     "  g((CVector3f *)&local_44.y, (CVector3i *)&local_99);\n  // (CVector3f *)&local_44\n  h((CVector3f *)&local_44", [3, 6]),
])
def test_a_vector_local_read_as_the_other_element_kind_is_a_pun(code, expected):
    assert lines_of(content.identify_vector_type_pun(code)) == expected


# --- baked self addresses ------------------------------------------------------------

HEADER = "// Address Range: [[0048c750, 0048c7a0] [03fc0000, 03fc0010]]\n"


@pytest.mark.parametrize("line, match", [
    ("  output->x = 0x48c770;", "0x48c770"),
    ("  output->x = fVar1 * 4769685.0;", "4769685.0"),
])
def test_a_literal_inside_the_functions_own_range_is_a_baked_address(line, match):
    suspects = content.identify_baked_self_address(HEADER + line)
    assert [s["match"] for s in suspects] == [match] and suspects[0]["line"] == 2


@pytest.mark.parametrize("code", [
    "",
    "  output->x = 0x48c770;",
    HEADER + "  in_stack_ffffffe0 = 0x48c770;",
    HEADER + "  pCVar1 = (CGore *)0x48c770;",
    HEADER + "  // 0x48c770\n  # 0x48c770\n  /* 0x48c770 */\n   * 0x48c770\n  case 0x48c770:",
    HEADER + "  x = 0x500000 + 1234567.0;",
])
def test_literals_outside_the_range_or_dead_stores_are_not_baked(code):
    assert content.identify_baked_self_address(code) == []


# --- unrolled strlen -----------------------------------------------------------------

STRLEN = """  uVar3 = 0xffffffff;
  pcVar4 = name;
  do {{
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
{body}
  }} while ({cond});"""


@pytest.mark.parametrize("body, cond", [
    ("    cVar1 = *pcVar4;\n    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;", "cVar1 != '\\0'"),
    ("    pcVar4 = pcVar4;\n    pcVar4 = pcVar4 + 1;\n    bVar1 = *pcVar4;", "bVar1 != 0"),
    ("    pcVar4 = (char *)(pcVar4->name + 1);", "*pcVar4 != '\\0'"),
])
def test_a_counted_byte_scan_is_strlen(body, cond):
    suspects = content.identify_unrolled_strlen_loops(STRLEN.format(body = body, cond = cond))
    assert lines_of(suspects) == [3] and suspects[0]["type"] == "unrolled_strlen"


@pytest.mark.parametrize("code", [
    "",
    # Another counter, no do, no closer, no walk, no load
    STRLEN.format(body = "    cVar1 = *pcVar4;", cond = "cVar1 != '\\0'").replace("uVar3 = uVar3 - 1", "uVar2 = uVar2 - 1"),
    STRLEN.format(body = "    cVar1 = *pcVar4;\n    pcVar4 = pcVar4 + 1;", cond = "cVar1 != '\\0'").replace("do {", "x = 1;"),
    STRLEN.format(body = "    cVar1 = *pcVar4;\n    pcVar4 = pcVar4 + 1;" + "\n    x = 1;" * 12, cond = "cVar1 != '\\0'"),
    STRLEN.format(body = "    cVar1 = *pcVar4;\n    pcVar4 = pcVar4 + 1;", cond = "cVar1 != '\\0'").rsplit("\n", 1)[0] + "\n\n\n",
    STRLEN.format(body = "    cVar1 = *pcVar4;\n    x = 1;", cond = "cVar1 != '\\0'"),
    STRLEN.format(body = "    pcVar4 = pcVar4 + 1;\n    x = 1;", cond = "cVar1 != '\\0'"),
    STRLEN.format(body = "    x = 1;", cond = "*pcVar4 != '\\0'"),
    "  if (uVar3 == 0) break;\n  uVar3 = uVar3 - 1;\n  x = 1;\n  y = 2;\n  z = 3;",
])
def test_other_counted_loops_are_not_strlen(code):
    assert content.identify_unrolled_strlen_loops(code) == []


def test_the_loop_opener_is_looked_for_just_above_the_counter():
    code = "  do {\n" + "    x = 1;\n" * 5 + "    if (uVar3 == 0) break;\n    uVar3 = uVar3 - 1;\n    cVar1 = *p;\n    p = p + 1;\n  } while (cVar1 != '\\0');\n"
    assert content.identify_unrolled_strlen_loops(code) == []


# --- unrolled strcat -----------------------------------------------------------------

STRLEN_BODY = STRLEN.format(body = "    cVar1 = *pcVar4;\n    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;", cond = "cVar1 != '\\0'")
STRCPY = """  do {
    cVar1 = *src;
    *pcVar5 = cVar1;
    if (cVar1 == '\\0') break;
    cVar1 = src[1];
    src = src + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\\0');"""


@pytest.mark.parametrize("adjust", ["  pcVar5 = pcVar4 + -1;", "  pcVar5 = pacVar12[-1] + 0xff;"])
def test_a_strlen_then_a_copy_onto_the_null_is_strcat(adjust):
    code = STRLEN_BODY + "\n" + adjust + "\n" + STRCPY + "\n"
    suspects = content.identify_unrolled_strcat_loops(code)
    assert lines_of(suspects) == [3] and suspects[0]["type"] == "unrolled_strcat"


@pytest.mark.parametrize("code", [
    "",
    STRCPY,
    # No adjust, no copy after it, a copy that is not strcpy, or code that stops short
    STRLEN_BODY + "\n  x = 1;\n" + STRCPY + "\n",
    STRLEN_BODY + "\n  pcVar5 = pcVar4 + -1;\n" + "  x = 1;\n" * 6 + STRCPY + "\n",
    STRLEN_BODY + "\n  pcVar5 = pcVar4 + -1;\n  do {\n" + "    x = 1;\n" * 6 + "  } while (x != '\\0');\n",
    STRLEN_BODY + "\n  pcVar5 = pcVar4 + -1;\n  do {\n    *pcVar5 = cVar1;\n    x = 1;\n  } while (x != '\\0');\n",
    STRLEN_BODY + "\n  pcVar5 = pcVar4 + -1;\n  do {\n    *pcVar5 = cVar1;",
    STRLEN_BODY + "\n  pcVar5 = pcVar4 + -1;",
    STRLEN_BODY,
])
def test_a_strlen_without_an_append_is_not_strcat(code):
    assert content.identify_unrolled_strcat_loops(code) == []


@pytest.mark.parametrize("tail", ["", "\n" + "  x = 1;\n" * 16])
def test_a_byte_closed_strlen_has_no_strcat_closer(tail):
    code = STRLEN.format(body = "    bVar1 = *pcVar4;\n    pcVar4 = pcVar4 + 1;", cond = "bVar1 != 0") + tail
    assert content.identify_unrolled_strcat_loops(code) == []


# --- unrolled strchr -----------------------------------------------------------------

STRCHR = """  do {{
    pcVar2 = pcVar3;
    if (*pcVar3 == {lit}) goto LAB_1;
    if (*pcVar3 == {null}) break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == {lit2}) goto LAB_1;
    pcVar3 = pcVar3 + 2;
  }} while (*pcVar2 != {null});
  pcVar2 = (char *)0x0;"""


@pytest.mark.parametrize("lit, lit2, null, shown", [
    ("'.'", "'.'", "'\\0'", "'.'"),
    ("0x2e", "46", "0x0", "'.'"),
    ("'\\x2e'", "'.'", "0", "'.'"),
    ("'\\n'", "10", "'\\0'", "0xa"),
])
def test_a_two_byte_scan_for_one_character_is_strchr(lit, lit2, null, shown):
    suspects = content.identify_unrolled_strchr_loops(STRCHR.format(lit = lit, lit2 = lit2, null = null))
    assert lines_of(suspects) == [1] and f"strchr(ptr, {shown})" in suspects[0]["description"]


@pytest.mark.parametrize("lit, lit2", [
    ("'\\0'", "'\\0'"), ("'\\q'", "'\\q'"), ("'ab'", "'ab'"), ("'.'", "','"),
])
def test_a_scan_for_null_or_mismatched_characters_is_not_strchr(lit, lit2):
    assert content.identify_unrolled_strchr_loops(STRCHR.format(lit = lit, lit2 = lit2, null = "'\\0'")) == []


@pytest.mark.parametrize("old, new", [
    ("pcVar2 = pcVar3;", "x = f(a);"),
    ("if (*pcVar3 == '.') goto", "if (*pcVar9 == '.') goto"),
    ("if (*pcVar3 == '\\0') break;", "x = 1;"),
    ("pcVar2 = pcVar3 + 1;", "pcVar9 = pcVar3 + 1;"),
    ("if (*pcVar2 == '.') goto", "if (*pcVar9 == '.') goto"),
    ("pcVar3 = pcVar3 + 2;", "pcVar3 = pcVar3 + 3;"),
    ("} while (*pcVar2 != '\\0');", "} while (true);"),
])
def test_each_strchr_line_must_be_in_place(old, new):
    code = STRCHR.format(lit = "'.'", lit2 = "'.'", null = "'\\0'")
    assert old in code
    assert content.identify_unrolled_strchr_loops(code.replace(old, new)) == []


def test_a_strchr_closer_more_than_two_lines_down_is_not_its_own():
    code = STRCHR.format(lit = "'.'", lit2 = "'.'", null = "'\\0'").replace("  } while", "    x = 1;\n" * 3 + "  } while")
    assert content.identify_unrolled_strchr_loops(code) == []


def test_a_strchr_cut_off_before_its_closer_is_not_flagged():
    code = "\n".join(STRCHR.format(lit = "'.'", lit2 = "'.'", null = "'\\0'").split("\n")[:7])
    assert content.identify_unrolled_strchr_loops(code) == []
    assert content.identify_unrolled_strchr_loops("") == []
