# Imports
import json

# Local imports
import compare_sibling_struct_sizes

# Two builds' class sizes as their RTTI records them, and the source build's layouts:
#
#   CBase       4 bytes of its own removed                    (a root)
#   CDerived    grows only through its CBase base             (explained)
#   SfxSample   renamed CSfxSample in Ghidra; holds CBase[2]
#               but lost 4 bytes of its own                   (a root, aliased)
#   CNoLayout   differs, but the source has no layout          (undecomposable)
#   CWrong      the source's layout disagrees with its RTTI    (suspect)
#   COnlyTo     RTTI only in the target; sized by layout       (a root, assumed)
#   CHolder     no RTTI; holds a TBase, consistent with CHolderSub
#   CHolder2    no RTTI; contradicted by CHolder2Sub
#   CLonely     no RTTI and no subclass to check it against
#   CCycA/B     hold each other
#   CGhost      RTTI only in the target, and no layout anywhere
FROM_SIZES = {"CBase": 16, "CDerived": 24, "SfxSample": 40, "CNoLayout": 8, "CSame": 12, "CWrong": 20,
              "CHolderSub": 36, "CHolder2Sub": 40}
TO_SIZES = {"CBase": 12, "CDerived": 20, "SfxSample": 36, "CNoLayout": 4, "CSame": 12, "CWrong": 20, "COnlyTo": 8,
            "CHolderSub": 32, "CHolder2Sub": 32, "CGhost": 4}


def field(name, type_, offset = 0, length = 4):
    return {"name": name, "type": type_, "offset": offset, "len": length}


LAYOUTS = [
    {"name": "CBase", "len": 16, "fields": [field("a", "int")]},
    {"name": "CDerived", "len": 24, "fields": [field("base", "CBase", 0, 16), field("b", "int", 16)]},
    {"name": "CSfxSample", "len": 40, "fields": [field("parts", "CBase[2]", 0, 32)]},
    {"name": "CSame", "len": 12, "fields": [field("x", "int")]},
    {"name": "CWrong", "len": 24, "fields": [field("x", "int")]},
    {"name": "COnlyTo", "len": 10, "fields": [field("x", "int")]},
    {"name": "CHolder", "len": 32, "fields": [field("m", "TBase", 0, 16), field("p", "CBase *", 16)]},
    {"name": "CHolderSub", "len": 36, "fields": [field("base", "CHolder", 0, 32)]},
    {"name": "CHolder2", "len": 32, "fields": [field("m", "CBase", 0, 16)]},
    {"name": "CHolder2Sub", "len": 40, "fields": [field("base", "CHolder2", 0, 32)]},
    {"name": "CLonely", "len": 48, "fields": [field("q", "CBase[3]", 0, 48)]},
    {"name": "CCycA", "len": 8, "fields": [field("b", "CCycB")]},
    {"name": "CSelf", "len": 8, "fields": [field("me", "CSelf"), field("u", "Unknown")]},
]
UNIONS = [{"name": "UOnly", "len": 4, "fields": []}, {"name": "CBase", "len": 99, "fields": []}]
TYPEDEFS = [{"name": "TBase", "base": "TBase2"}, {"name": "TBase2", "type": "CBase"},
            {"name": "TLoop", "base": "TLoop2"}, {"name": "TLoop2", "base": "TLoop"}]
STRUCTS = LAYOUTS + [{"name": "CCycB", "len": 8, "fields": [field("a", "CCycA")]}]


def write(folder, name, doc):
    folder.mkdir(parents = True, exist_ok = True)
    (folder / name).write_text(json.dumps(doc))


def install_struct_types(monkeypatch, tmp_path):
    """Writes the two builds' type info and the source's layouts; returns the annotations root."""
    for program, sizes in (("from.exe", FROM_SIZES), ("to.exe", TO_SIZES)):
        write(tmp_path / program / "type_info", "type_info.json",
              {"type_info": [{"name": n, "typeinfo_size": s} for n, s in sizes.items()] + [{"name": "CNoSize"}]})
    write(tmp_path / "from.exe" / "data_types", "data_types.json",
          {"structs": STRUCTS, "unions": UNIONS, "typedefs": TYPEDEFS})
    monkeypatch.setattr(compare_sibling_struct_sizes, "ANNOTATIONS", str(tmp_path))
    return tmp_path
