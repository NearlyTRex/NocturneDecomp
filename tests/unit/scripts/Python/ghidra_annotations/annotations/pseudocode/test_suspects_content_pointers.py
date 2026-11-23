# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content


def fld(name, type_name, is_ptr = False, stars = 0, n = None):
    return {"name": name, "type": type_name, "is_ptr": is_ptr, "stars": stars, "n": n}


LAYOUT = {
    "CNode": [fld("next", "CNode", True, 1), fld("count", "int"), fld("items", "CNode", True, 1, 4),
              fld("handles", "void", True, 2), fld("ints", "int", True, 1), fld("base", "CBase")],
    "CBase": [fld("owner", "CNode", True, 1)],
}

SIGNATURE = ("// Signature: int __cdecl f(CNode *this_ptr,int count,char *)\n"
             "// Signature: int __cdecl g(CNode *ignored)\n")
DECLS = ("  CNode *pCVar1;\n"
         "  int *piVar2;\n"
         "  uint uVar3;\n"
         "  CNode local_10;\n"
         "  return *pCVar1;\n"
         "  return uVar3;\n")
GLOBALS = [(0x600000, 0x600004, "g_Ptr", "CNode *"), (0x600004, 0x600014, "g_Arr", "CNode *[4]"),
           (0x600014, 0x600018, "g_Int", "int"), (0x600018, 0x60001c, "g_None", None)]


def truncations(body, layout = None):
    """The matches in `body`, with LAYOUT unless another layout is given."""
    code = SIGNATURE + DECLS + body
    return [s["match"] for s in content.identify_pointer_truncation_suspects(code, None, GLOBALS, layout or LAYOUT)]


@pytest.mark.parametrize("body, expected", [
    # Declared pointers, globals typed as pointers, and addresses
    ("  x = (int)pCVar1 - (int)this_ptr;\n", ["(int)pCVar1", "(int)this_ptr"]),
    ("  x = (uint)g_Ptr + (int)g_Arr;\n", ["(uint)g_Ptr", "(int)g_Arr"]),
    ("  x = (int)&local_10;\n", ["(int)&local_10"]),
    # Scalars and unknowns stay unflagged
    ("  x = (int)uVar3 + (int)count + (int)g_Int + (int)g_None + (int)ignored;\n", []),
    # A cast of a dereference has no operand to test
    ("  x = (int)*pCVar1;\n", []),
    # One subscript of a pointer array is a pointer; two, or a scalar pointer's element, are not
    ("  x = (int)g_Arr[i];\n", ["(int)g_Arr[i]"]),
    ("  x = (int)g_Arr[i][j] + (int)piVar2[i] + (int)g_Ptr[i];\n", []),
    # Fields: pointer-typed, array of pointers, double pointer, through a sub-struct
    ("  x = (int)this_ptr->next + (int)this_ptr->count;\n", ["(int)this_ptr->next"]),
    ("  x = (int)this_ptr->items[i] + (int)this_ptr->handles[i] + (int)this_ptr->ints[i];\n",
     ["(int)this_ptr->items[i]", "(int)this_ptr->handles[i]"]),
    ("  x = (int)(this_ptr->base).owner + (int)this_ptr->base.owner;\n", ["(int)this_ptr->base.owner"]),
    ("  x = (int)local_10.next + (int)uVar3.next + (int)this_ptr->missing;\n", ["(int)local_10.next"]),
    # Parenthesized operands: pointer arithmetic leads with the pointer
    ("  x = (int)(pCVar1 + 2) + (int)(uVar3 + 3);\n", ["(int)(pCVar1 + 2)"]),
    ("  x = (uint)(pCVar1 != 0) + (int)(-uVar3);\n", []),
    ("  x = (int)(pCVar1\n", []),
    # (&AGG.field)[i] reads a sibling element: flagged only when that element is a pointer
    ("  x = (int)(&local_10.next)[i] + (int)(&local_10.count)[i] + (int)(pCVar1)[i];\n",
     ["(int)(&local_10.next)[i]"]),
    # A subscript Ghidra wrapped onto the next line, or across lines
    ("  x = (uint)this_ptr->ints\n  [i];\n", []),
    ("  x = (uint)this_ptr->items\n  [i];\n", ["(uint)this_ptr->items[i]"]),
    ("  x = (int)piVar2[(a +\n   b)];\n", []),
    # Comments and preprocessor lines are not code
    ("  // (int)pCVar1\n  # (int)pCVar1\n  /* (int)pCVar1 */\n", []),
])
def test_a_pointer_cast_to_a_narrower_int_is_flagged(body, expected):
    assert truncations(body) == expected


def test_without_a_layout_fields_are_unknown():
    code = SIGNATURE + DECLS + "  x = (int)this_ptr->next;\n"
    assert content.identify_pointer_truncation_suspects(code, None, GLOBALS, None) == []


def test_a_truncation_says_how_to_fix_it():
    suspects = content.identify_pointer_truncation_suspects("  CNode *p;\n  x = (uint)p;\n")
    assert len(suspects) == 1
    assert suspects[0]["line"] == 2 and "rewrite the cast as `uintptr_t`" in suspects[0]["description"]
    assert content.identify_pointer_truncation_suspects("") == []


# --- raw address constants ------------------------------------------------------------

ADDRESSES = [(0x63169a, 0x6316a1, "s_Editor_0063169a", "char[7]"), (0x700000, 0x800000, "g_Pool", None)]


@pytest.mark.parametrize("value, expected", [
    ("0x63169a", "matches address of s_Editor_0063169a (type char[7])"),
    ("0x63169c", "s_Editor_0063169a (+2 bytes into) (type char[7])"),
    ("0x712345", "g_Pool (+74565 bytes into) (type unknown)"),
])
def test_a_literal_inside_a_known_global_is_a_dropped_symbol(value, expected):
    code = f"  engine_ini_cpp_CIniFile_ctor(&ini, \".\\\\system\\\\nocturne.ini\", {value});\n"
    suspects = content.identify_raw_address_constant_suspects(code, ADDRESSES)
    assert len(suspects) == 1 and suspects[0]["match"] == value and expected in suspects[0]["description"]


@pytest.mark.parametrize("line", [
    "  // f(0x63169a);", "  # 0x63169a", "  /* 0x63169a */", "   * 0x63169a", "  case 0x63169a:",
    # Outside the image, or numeric shapes: a power of two, all ones, near-rollover, repeated bytes,
    # MB-aligned, saturated channels, or no global there
    "  f(0x3fffff);", "  f(0x10000000);", "  f(0x800000);", "  f(0x7fffff);", "  f(0x7ffffe);",
    "  f(0x404040);", "  f(0x0f0f0f0f);", "  f(0x700000);", "  f(0xff00ff);", "  f(0x500001);",
])
def test_numeric_shapes_and_comments_are_not_addresses(line):
    assert content.identify_raw_address_constant_suspects(line, ADDRESSES + [(0x10000000, 0x20000000, "g_High", None)]) == []


def test_no_address_map_means_no_raw_address_check():
    assert content.identify_raw_address_constant_suspects("f(0x63169a);") == []


@pytest.mark.parametrize("line, flagged", [
    ("  iVar5 = 0x3f95dfc;", True),
    ("  iVar4 = 0x5b9c61;", True),
    ("  // iVar5 = 0x3f95dfc;", False),
    ("  this_ptr->x = 0x3f95dfc;", False),
    ("  iVar5 = 0x3f95dfc + 4;", False),
    # 16.16 fixed-point ceilings and the shared numeric shapes
    ("  iVar5 = 0xfeffff;", False),
    ("  iVar5 = 0x1000000;", False),
    ("  iVar5 = 0xffffff;", False),
    ("  iVar5 = 0x3ffffe;", False),
    ("  iVar5 = 0x7ffffe;", False),
    ("  iVar5 = 0x10000001;", False),
    ("  iVar5 = 0x7f7f7f;", False),
    ("  iVar5 = 0x0f0f0f0f;", False),
    ("  iVar5 = 0x4a00000;", False),
    ("  iVar5 = 0xff0000ff;", False),
    ("  iVar5 = 0xff00ff;", False),
])
def test_a_pointer_shaped_literal_in_a_bare_local_is_a_dropped_symbol(line, flagged):
    suspects = content.identify_raw_address_in_local(line)
    assert bool(suspects) == flagged
    if flagged:
        assert "assigned to bare local `iVar" in suspects[0]["description"]


def test_no_code_has_no_local_addresses():
    assert content.identify_raw_address_in_local("") == []
