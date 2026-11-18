# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import _structtypes as st


def field(name, offset, length, type_name):
    return {"name": name, "offset": offset, "len": length, "type": type_name}


DATA_TYPES = {
    "structs": [
        {"name": "CBox", "len": 28, "fields": [
            field("name", 0, 8, "char[8]"), field("hp", 8, 4, "int"), field("mp", 12, 4, "int"),
            field("inner", 16, 8, "struct CInner"), field("ptr", 24, 4, "CInner *"),
            {"name": "blank", "offset": 28, "len": 0, "type": None},
            {"name": "lenless", "offset": 4}]},
        {"name": "CInner", "len": 8, "fields": [field("a", 0, 4, "int"), field("b", 4, 4, "int")]},
        {"name": "CNoFields", "len": 4},
        {"len": 4, "fields": [field("x", 0, 4, "int")]},
        {"name": "CEmpty", "len": 0, "fields": []},
        {"name": "CStrLen", "len": "8"},
    ],
    "unions": [
        {"name": "UThing", "len": 8, "fields": [
            field("bytes", 0, 2, "char[2]"), field("whole", 0, 4, "int"), field("next", 4, 4, "union UThing *")]},
    ],
    "enums": [
        {"name": "EMode", "values": [{"name": "MODE_A", "val": 1}, {"name": None, "val": 2},
                                     {"name": "MODE_B", "val": "x"}]},
        {"name": "ENone", "values": None},
        {"name": None, "values": [{"name": "C", "val": 3}]},
    ],
}


@pytest.fixture(name = "data_types")
def fixture_data_types(tmp_path):
    path = tmp_path / "data_types.json"
    path.write_text(json.dumps(DATA_TYPES), encoding = "utf-8")
    return str(path)


@pytest.fixture(name = "layout")
def fixture_layout(data_types):
    return st.build_struct_layout_map(data_types)


VAR_TYPES = {"box": "CBox", "thing": "UThing"}


# --- data_types.json maps ------------------------------------------------------------------------

def test_the_layout_map_keeps_each_complete_field_with_its_base_type(layout):
    assert sorted(layout) == ["CBox", "CInner", "UThing"]
    box = {fl["name"]: fl for fl in layout["CBox"]}
    assert "lenless" not in box and [fl["name"] for fl in layout["CBox"]][0] == "name"
    assert box["name"] == {"name": "name", "offset": 0, "len": 8, "n": 8, "type": "char", "stars": 0, "is_ptr": False}
    assert (box["inner"]["type"], box["ptr"]["type"], box["ptr"]["is_ptr"]) == ("CInner", "CInner", True)
    assert box["blank"]["type"] == ""
    assert layout["UThing"][2]["type"] == "UThing"


def test_the_size_map_keeps_positive_integer_sizes(data_types):
    assert st.build_struct_size_map(data_types) == {"CBox": 28, "CInner": 8, "CNoFields": 4, "UThing": 8}


def test_the_enum_map_keeps_named_integer_values(data_types):
    assert st.build_enum_value_map(data_types) == {"EMode": {"MODE_A": 1}}


@pytest.mark.parametrize("build", [st.build_struct_layout_map, st.build_struct_size_map, st.build_enum_value_map])
def test_a_missing_or_unreadable_data_types_file_gives_an_empty_map(tmp_path, build):
    bad = tmp_path / "bad.json"
    bad.write_text("{", encoding = "utf-8")
    assert build(str(tmp_path / "none.json")) == {} and build(str(bad)) == {}


@pytest.mark.parametrize("getter, cache", [
    (st.get_struct_layout_map, "_struct_layout_cache"),
    (st.get_struct_size_map, "_struct_size_cache"),
    (st.get_enum_value_map, "_enum_value_cache"),
])
def test_the_maps_are_found_beside_the_pseudocode_tree_and_cached(tmp_path, monkeypatch, getter, cache):
    monkeypatch.setattr(st, cache, {})
    (tmp_path / "data_types").mkdir()
    (tmp_path / "data_types" / "data_types.json").write_text(json.dumps(DATA_TYPES), encoding = "utf-8")
    src = str(tmp_path / "pseudocode" / "src" / "core")
    first = getter(src)
    assert first and getter(src) is first
    # Outside a pseudocode/ tree: absolute paths stop at the root, relative ones run out
    assert getter(str(tmp_path / "elsewhere")) == {} and getter("src") == {}


# --- variable types -----------------------------------------------------------------------------

def test_variable_types_come_from_the_signature_comment_and_the_declarations():
    code = ("// Signature: void f(CBox *box, int n, void (*cb)(int))\n"
            "void f(CBox *box, int n, void (*cb)(int))\n{\n  CInner *p;\n  CInner v;\n  return box;\n}\n")
    assert st._sfo_resolve_var_types(code) == {"box": "CBox", "n": "int", "p": "CInner", "v": "CInner"}


@pytest.mark.parametrize("code, params", [
    ("void __thiscall f(CBox *box,\n    int n)\n{\n}", "CBox *box, int n"),
    ('// Name: f\n#include "nocturne.h"\nvoid f(CBox *box)\n{\n}', "CBox *box"),
    ("int x;", None),
    ("{\n}", None),
])
def test_the_decompiled_text_without_a_header_gives_its_parameters_from_the_definition(code, params):
    assert st._sfo_param_list(code) == params


def test_the_export_scans_text_without_a_header_and_still_types_its_parameters():
    assert st._sfo_resolve_var_types("void f(CBox *this_ptr)\n{\n  x = 1;\n}\n") == {"this_ptr": "CBox"}
    assert st._sfo_resolve_var_types("x = 1;") == {}


# --- access paths --------------------------------------------------------------------------------

@pytest.mark.parametrize("path, want", [
    ("box->inner.a", "int"), ("&box->name[2]", "char"), ("box->name[i[1]]", "char"), ("box->ptr->b", "int"),
    ("box", "CBox"),
    ("box->name[2", None), ("(box)->name", None), ("box*", None), ("box->nope", None),
    ("box->blank", None), ("box->", None), ("zz->a", None), ("box->hp->x", None), ("", None),
])
def test_an_access_path_resolves_to_the_type_at_its_end(layout, path, want):
    assert st.resolve_access_path_type(path, VAR_TYPES, layout) == want


def test_an_access_path_needs_a_layout(layout):
    assert st.resolve_access_path_type("box->hp", VAR_TYPES, {}) is None


@pytest.mark.parametrize("path, want", [
    ("box->inner.b", ("CBox", 20, 4, False)), ("&box->hp", ("CBox", 8, 4, True)),
    ("(char *)box->name", ("CBox", 0, 8, True)), ("(box->inner).a", ("CBox", 16, 4, False)),
    # past a pointer the field is in another object, at no offset in the root
    ("box->ptr->a", None),
    ("box", None), ("box[1]", None), ("box->nope", None), ("(box->hp + 1)", None), ("1box", None),
    ("zz->a", None), ("", None),
])
def test_a_field_extent_is_its_offset_and_size_in_the_root_struct(layout, path, want):
    assert st._sfo_field_extent(path, VAR_TYPES, layout) == want


@pytest.mark.parametrize("path, want", [
    ("box->ptr->b", ("CInner", 4, 4, False, False)), ("box->name[1]", ("CBox", 0, 8, True, False)),
    ("box->ptr", ("CBox", 24, 4, False, True)),
    ("box[0]", None), ("box->name[1", None), ("box->x", None), ("box*", None), ("", None),
])
def test_a_field_owner_is_the_struct_holding_the_last_field(layout, path, want):
    assert st._sfo_field_owner_offset(path, VAR_TYPES, layout) == want


def test_the_field_at_an_offset_is_the_smallest_holding_it(layout):
    assert st._sfo_field_at_offset(layout, "UThing", 1)["name"] == "bytes"
    assert st._sfo_field_at_offset(layout, "UThing", 3)["name"] == "whole"
    assert st._sfo_field_at_offset(layout, "UThing", 99) is None
    assert st._sfo_field_at_offset(layout, "CMissing", 0) is None


# --- expression terms ----------------------------------------------------------------------------

def test_terms_split_at_the_top_level_and_never_inside_an_arrow():
    assert st._sfo_top_terms("a->b + (c - d) - e[f + g]") == ["a->b", "(c - d)", "e[f + g]"]
    assert st._sfo_index_const("1 + i + 0x10 + (2) + 05") == (22, True)
    assert st._sfo_index_const("3") == (3, False)
    assert st._sfo_split_ptr_const("(char *)p->q + 0x10 + 4") == ("(char *)p->q", 20)
    assert st._sfo_split_ptr_const("a + b") is None
    assert st._sfo_strip_cast(" (unsigned char *) p ") == "p"


@pytest.mark.parametrize("expr, terms", [
    ("a + -4 - 8", [(1, "a"), (-1, "4"), (-1, "8")]),
    ("- 4 + a->b", [(-1, "4"), (1, "a->b")]),
    ("i * -4 + (a - b)", [(1, "i * -4"), (1, "(a - b)")]),
    ("a +", [(1, "a")]),
])
def test_signed_terms_carry_their_sign(expr, terms):
    assert st._sfo_signed_terms(expr) == terms


def test_a_local_records_the_field_each_assignment_derives_it_from(layout):
    code = ("// p = box->name;\n"
            "p = box->name + i * 4 + -4;\n"
            "p = p + 4;\n"
            "q = i + &box->hp;\n"
            "r = 8 - box->name;\n"
            "x += 1;\n")
    bases = st._sfo_local_field_bases(code, VAR_TYPES, layout)
    assert bases == {"p": [(2, (("CBox", 0, 8, True), -4))], "q": [(4, (("CBox", 8, 4, True), 0))],
                     "r": [(5, None)]}
    assert st._sfo_local_base_at(bases, "p", 2) is None and st._sfo_local_base_at(bases, "p", 3)[1] == -4
    assert st._sfo_local_base_at(bases, "zz", 9) is None


@pytest.mark.parametrize("line, start, inner", [("*(int *)(a + (b))", 9, "a + (b)"), ("*(int *)(a + 4", 9, None)])
def test_a_deref_operand_ends_at_its_matching_paren(line, start, inner):
    assert st._sfo_deref_inner(line, start) == inner


# --- base-shift derefs ---------------------------------------------------------------------------

def overruns(code, layout, seen = None):
    return st._sfo_field_base_deref_overruns(code, VAR_TYPES, layout, set() if seen is None else seen)


def test_a_deref_past_its_base_field_into_a_sibling_is_an_overrun(layout):
    found = overruns("  x = *(int *)((char *)box->name + 0x10);\n", layout)
    assert found == [{
        "line": 1, "type": "struct_field_overrun", "match": "*(...)((char *)box->name + 0x10)",
        "text": "x = *(int *)((char *)box->name + 0x10);",
        "description": ("*(...)((char *)box->name + 0x10): the pointer is based on a field at offset 0x0 "
                        "(size 8 in CBox) but the +0x10 byte offset lands in field inner (offset 0x10). "
                        "Ghidra anchored on the wrong field — rewrite as direct access to inner (#15 "
                        "base-shift; forms an out-of-array pointer, trips UBSan)."),
        "severity": "moderate"}]
    assert [s["match"] for s in overruns("y = *(int *)(&box->hp + 0x10);\n", layout)] == ["*(...)(&box->hp + 0x10)"]


def test_a_local_carries_its_assignment_offset_and_follows_reassignment(layout):
    code = ("p = box->name + i * 4 + -4;\n"
            "x = *(int *)(p + 0x10);\n"
            "p = p + 4;\n"
            "y = *(int *)(p + 0x10);\n"
            "p = other;\n"
            "z = *(int *)(p + 0x10);\n")
    found = overruns(code, layout)
    # 0x10 past name - 4 is 0xc, in mp; the walk keeps the base; after `p = other` p is unknown
    assert [(s["line"], s["description"].split(" lands in field ")[1][:2]) for s in found] == [(2, "mp"), (4, "mp")]
    assert "+0xc byte offset" in found[0]["description"]


@pytest.mark.parametrize("code", [
    "// x = *(int *)(box->name + 0x10);",
    "x = *(int *)(box->name + 0x10;",       # unbalanced
    "x = *(int *)(a + b);",                 # no single base
    "x = *(int *)(box->name);",             # no offset
    "x = *(int *)(zz->name + 0x10);",       # unknown root
    "x = *(int *)(box->hp + 0x10);",        # a scalar's value, not the struct
    "x = *(int *)(box->name + 4);",         # inside the base field
    "x = *(int *)(box->name + 0x100);",     # past every field
    "x = *(int *)(thing->bytes + 2);",      # lands in a field at the base's own offset
])
def test_derefs_that_are_not_a_base_shift_are_left(layout, code):
    assert not overruns(code, layout)


def test_an_overrun_is_reported_once_and_needs_a_layout(layout):
    seen = set()
    line = "*(int *)(box->name + 0xc) = *(int *)(box->name + 0xc);\n"
    assert len(overruns(line, layout, seen)) == 1 and not overruns(line, layout, seen)
    assert not overruns(line, {})
