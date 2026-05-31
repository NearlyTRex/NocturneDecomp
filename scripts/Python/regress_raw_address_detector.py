#!/usr/bin/env python3
# Regression harness for identify_raw_address_constant_suspects.
#
# Builds the real address interval map from the Ghidra DB (globals + constants),
# runs the raw_address_constant detector over every original pseudocode .c/.cpp,
# and saves the (file, line, match) hit set. Run once before a detector edit
# ('baseline') and once after ('compare') to set-diff lost/gained hits.
#
# Usage:
#   pyghidra run regress_raw_address_detector.py ./projects NocturneEdit nocedit.exe baseline
#   pyghidra run regress_raw_address_detector.py ./projects NocturneEdit nocedit.exe compare
# (or invoke via the project's usual pyghidra wrapper)

import os
import sys
import glob
import json

script_dir = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, os.path.join(script_dir, 'ghidra_annotations'))

SNAPSHOT = "/tmp/rawaddr_hits.json"


def find_repo_root():
    r = script_dir
    while r and r != '/':
        if os.path.exists(os.path.join(r, 'annotations')):
            return r
        r = os.path.dirname(r)
    return script_dir


def iter_source_files(ann_dir):
    pat = os.path.join(ann_dir, 'pseudocode', 'src', '**', '*.c')
    pat2 = os.path.join(ann_dir, 'pseudocode', 'src', '**', '*.cpp')
    for f in sorted(glob.glob(pat, recursive=True) + glob.glob(pat2, recursive=True)):
        if any(s in f for s in ('.keep.', '.mmx.', '.byval.', '.chunked.')):
            continue
        yield f


def main():
    if len(sys.argv) < 5:
        print("usage: <project_path> <project_name> <program_name> <baseline|compare>")
        sys.exit(2)
    project_path = os.path.abspath(sys.argv[1])
    project_name = sys.argv[2]
    program_name = sys.argv[3]
    mode = sys.argv[4]

    import pyghidra
    pyghidra.start()

    from ghidra_annotations.util.log import setup_logging
    setup_logging("regress_raw_address")

    from ghidra_annotations.annotations.pseudocode.globals import extract_globals_and_constants
    from ghidra_annotations.annotations.pseudocode.suspects import (
        build_global_interval_map, identify_raw_address_constant_suspects,
    )

    repo_root = find_repo_root()
    ann_dir = os.path.join(repo_root, 'annotations', program_name)

    project = pyghidra.open_project(project_path, project_name)
    hits = {}
    try:
        with pyghidra.program_context(project, "/" + program_name) as currentProgram:
            globals_list, constants_list = extract_globals_and_constants(currentProgram)
            amap = build_global_interval_map(list(globals_list) + list(constants_list))
            print("interval map entries: %d" % len(amap))
            nfiles = 0
            for f in iter_source_files(ann_dir):
                nfiles += 1
                try:
                    code = open(f, encoding='utf-8', errors='replace').read()
                except OSError:
                    continue
                rel = os.path.relpath(f, ann_dir)
                for s in identify_raw_address_constant_suspects(code, amap):
                    hits['%s\t%d\t%s' % (rel, s['line'], s['match'])] = s['text'][:120]
            print("scanned %d files, %d hits" % (nfiles, len(hits)))
        project.close()
    except Exception as e:
        import traceback
        traceback.print_exc()
        os._exit(1)

    if mode == 'baseline':
        json.dump(hits, open(SNAPSHOT, 'w'), indent=0, sort_keys=True)
        print("BASELINE saved: %d hits -> %s" % (len(hits), SNAPSHOT))
    else:
        old = json.load(open(SNAPSHOT))
        oldk, newk = set(old), set(hits)
        lost, gained = oldk - newk, newk - oldk
        print("OLD=%d NEW=%d LOST=%d GAINED=%d" % (len(oldk), len(newk), len(lost), len(gained)))
        if lost:
            print("\n=== LOST (REGRESSION) ===")
            for k in sorted(lost):
                print("  %s :: %s" % (k, old[k]))
        if gained:
            print("\n=== GAINED (verify each is genuine) ===")
            for k in sorted(gained):
                print("  %s :: %s" % (k, hits[k]))
    os._exit(0)


if __name__ == "__main__":
    main()
