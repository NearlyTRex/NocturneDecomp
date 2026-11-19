# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content


def field(name, offset, length, type_name, n = None):
    return {"name": name, "offset": offset, "len": length, "type": type_name, "n": n}


HEADER = [field("type", 0, 4, "int"), field("normal", 4, 8, "SPlane")]
PLANE = [field("A", 0, 4, "float"), field("B", 4, 4, "float")]


def derived(name, vertex_size, count):
    return name, [field("base", 0, 12, "SHeader"), field("vertices", 12, vertex_size * count, "SVertex", count)]


def test_every_derived_class_with_a_field_there_is_named():
    layout = {"SHeader": HEADER, "SPlane": PLANE, "SVertex": [field("index", 0, 4, "int")]}
    layout.update(derived(f"SPrim{i}", 4, i) for i in range(2, 8))
    code = ("void f(SHeader *prim)\n{\n"
            "  x = *(ushort *)&prim[1].normal.B;\n}")
    suspects = content.identify_derived_field_index_pun(code, layout, {"SHeader": 12})
    assert len(suspects) == 1
    suspect = suspects[0]
    # 1 x 0xc + 4 + 4 = 0x14, vertices[2] in every SPrim with at least 3 vertices
    assert "exactly offsetof(SPrim3, vertices[2])" in suspect["description"]
    assert suspect["description"].endswith(
        "Ambiguous: SPrim4::vertices[2], SPrim5::vertices[2], SPrim6::vertices[2], "
        "SPrim7::vertices[2] also has a field there — confirm the real class from the .asm before rewriting.")
