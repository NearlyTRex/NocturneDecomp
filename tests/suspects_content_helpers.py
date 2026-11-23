"""Helpers shared by the suspects/content.py test files."""


def lines_of(suspects):
    """The 1-based line of each suspect, in order."""
    return [s["line"] for s in suspects]


def fld(name, offset, length, type_name):
    """One struct-layout field, as build_struct_layout_map produces it."""
    return {"name": name, "offset": offset, "len": length, "type": type_name}
