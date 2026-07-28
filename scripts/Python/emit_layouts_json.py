#!/usr/bin/env python3
"""Convert an exported data_types.json into the flat layout map the drift tools read.

emit_struct_drift_spec.py needs `{class: {size, components:[{name, off, type, len}]}}`
to turn a measured offset shift into "remove N bytes between these two named
fields". The annotation export writes a richer, differently-keyed structure, and
nothing bridged the two, so the spec step had no input.

Usage:
    emit_layouts_json.py -o layouts.json
    emit_layouts_json.py --program nocturne.exe -o layouts.json
"""

import argparse
import json
import os
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))
ANNOTATIONS = os.path.join(REPO, "annotations")


def build_layouts(program):
    path = os.path.join(ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path) as handle:
        data = json.load(handle)

    layouts = {}
    for entry in data["structs"] + data.get("unions", []):
        layouts[entry["name"]] = {
            "size": entry.get("len", 0),
            "components": [{
                "name": field.get("name"),
                "off": field.get("offset", 0),
                "type": field.get("type", ""),
                "len": field.get("len", 0),
            } for field in entry.get("fields", [])],
        }
    return layouts


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--program", default="nocedit.exe",
                        help="program whose layouts to emit (default: nocedit.exe)")
    parser.add_argument("-o", "--out", required=True, help="output JSON path")
    args = parser.parse_args()

    layouts = build_layouts(args.program)
    with open(args.out, "w") as handle:
        json.dump(layouts, handle, indent=1)
    fields = sum(len(v["components"]) for v in layouts.values())
    print("wrote %s (%d types, %d fields)" % (args.out, len(layouts), fields))
    return 0


if __name__ == "__main__":
    sys.exit(main())
