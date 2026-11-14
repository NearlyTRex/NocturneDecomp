# Imports
import json

# Local imports
from pe_helpers import section_va
import sibling_match

# Puts synthetic programs where sibling_match.Image looks for them: each one's
# PE on disk and its exported functions under a temporary annotations tree, so
# Image(name) loads them as it would a real build.


# The address `offset` bytes into the first section of an image at the usual base
def code_at(offset, image_base = 0x400000):
    return section_va(image_base, 0) + offset


# Writes `doc` as JSON at `path` and returns the path as a string, for an argv
def write_json(path, doc):
    path.write_text(json.dumps(doc))
    return str(path)


# A `this_ptr` parameter of type `kind`, as an exported function record lists it
def this_param(kind):
    return {"name": "this_ptr", "type": kind}


# One exported function record, `size` bytes long
def function(addr, name, size = 0x10, **extra):
    return {"addr": f"{addr:08x}", "name": name,
            "body": [{"start": f"{addr:08x}", "end": f"{addr + size - 1:08x}"}], **extra}


# `programs` is {name: (pe bytes, [function records])}; returns the annotations root
def install_programs(monkeypatch, tmp_path, programs):
    annotations = tmp_path / "annotations"
    exes = {}
    for name, (pe, functions) in programs.items():
        exe = tmp_path / "bin" / name
        exe.parent.mkdir(parents = True, exist_ok = True)
        exe.write_bytes(pe)
        exes[name] = str(exe)
        folder = annotations / name / "functions"
        folder.mkdir(parents = True)
        (folder / "functions_bucket_00.json").write_text(json.dumps(functions))
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(annotations))
    monkeypatch.setattr(sibling_match, "find_program_exe", exes.__getitem__)
    return annotations


# Writes annotations/<program>/<kind>/<kind>_bucket_00.json
def write_bucket(annotations, program, kind, records):
    folder = annotations / program / kind
    folder.mkdir(parents = True, exist_ok = True)
    (folder / f"{kind}_bucket_00.json").write_text(json.dumps(records))
