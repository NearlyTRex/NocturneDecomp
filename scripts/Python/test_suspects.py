#!/usr/bin/env python3
# Run source-text suspect detectors on .cpp/.keep.cpp files.
#
# Reuses the regex detectors in
# ghidra_annotations.annotations.pseudocode.suspects without dragging in
# the Ghidra-only parts of the package (the package's __init__.py imports
# jpype-loaded Ghidra modules). We load suspects.py and pass_by_value.py
# directly via importlib and stub the parent package modules so the
# `from ghidra_annotations...` import inside suspects.py resolves.
#
# Usage: test_suspects.py <file.cpp> [file2.cpp ...]

from __future__ import annotations

import argparse
import importlib.util
import os
import sys
import types

REPO_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
PSEUDOCODE_DIR = os.path.join(
    REPO_ROOT, 'scripts', 'Python', 'ghidra_annotations',
    'annotations', 'pseudocode',
)


def _load_suspects_module():
    """Load suspects.py without triggering the package's Ghidra-dep init.

    suspects.py itself imports from
    `ghidra_annotations.annotations.pseudocode.pass_by_value`, which is
    pure Python. We stub the parent package modules and load both files
    by path so the dotted import resolves.
    """
    for pkg_name in (
        'ghidra_annotations',
        'ghidra_annotations.annotations',
        'ghidra_annotations.annotations.pseudocode',
    ):
        if pkg_name not in sys.modules:
            sys.modules[pkg_name] = types.ModuleType(pkg_name)

    pbv_spec = importlib.util.spec_from_file_location(
        'ghidra_annotations.annotations.pseudocode.pass_by_value',
        os.path.join(PSEUDOCODE_DIR, 'pass_by_value.py'),
    )
    pbv_mod = importlib.util.module_from_spec(pbv_spec)
    sys.modules[pbv_spec.name] = pbv_mod
    pbv_spec.loader.exec_module(pbv_mod)

    susp_spec = importlib.util.spec_from_file_location(
        'ghidra_annotations.annotations.pseudocode.suspects',
        os.path.join(PSEUDOCODE_DIR, 'suspects.py'),
    )
    susp_mod = importlib.util.module_from_spec(susp_spec)
    sys.modules[susp_spec.name] = susp_mod
    susp_spec.loader.exec_module(susp_mod)
    return susp_mod


# The same set the exporter strips before writing per-function JSON.
# Keep this in sync with OMIT_SUSPECT_TYPES in exporter.py.
OMIT_SUSPECT_TYPES = {
    'call_esp_preserve', 'call_esp_anchor',
    'callind_preserve', 'callind_preserve_lost', 'callind_anchor',
    'variadic_preserve', 'variadic_preserve_ebp', 'variadic_anchor',
    'stack_align_anchor', 'lea_esp_stack_addr',
    'unnamed_local',
    'decompiler_intrinsic',
    'special_entry_point', 'special_math_intrinsic',
    'special_crt_function', 'special_cpu_detection',
    'cpuid_assembly',
    'mmx_assembly', 'byvalue_struct_passing',
}


def run_detectors(susp, code):
    """Run the source-text-only content detectors on `code`.

    Mirrors detect_content_suspects() but with no func_globals / interval
    map / func_calls — those require Ghidra-extracted state that isn't
    available outside the export pipeline. The detectors that take those
    as optional arguments still run and produce best-effort output (they
    silently skip the rules that need the missing context).
    """
    found = []
    found.extend(susp.identify_suspect_lines(code))
    found.extend(susp.identify_wrong_global_suspects(code))
    found.extend(susp.identify_suspicious_cast_suspects(code))
    found.extend(susp.identify_raw_address_constant_suspects(code))
    found.extend(susp.identify_format_string_mismatch(code))
    found.extend(susp.identify_unrolled_strcpy_loops(code))
    found.extend(susp.identify_unrolled_memcpy_loops(code))
    found.extend(susp.identify_memcpy_oversized_source(code))
    found.extend(susp.identify_dropped_loop_counter(code))
    found.extend(susp.identify_unrolled_memcpy_dword_byte_split(code))
    found.extend(susp.identify_unrolled_field_copy(code))
    found.extend(susp.identify_cascade_constant_fill(code))
    found.extend(susp.identify_self_copy_guard(code))
    found.extend(susp.identify_pointer_cast_multiline(code))
    found.extend(susp.identify_int_address_arithmetic(code))
    found.extend(susp.identify_shadow_pointer_walk(code))
    found.extend(susp.identify_unrolled_strlen_loops(code))
    found.extend(susp.identify_unrolled_strcat_loops(code))
    found.extend(susp.identify_unrolled_strchr_loops(code))
    found.extend(susp.identify_preinc_loop_idiom(code))
    found.extend(susp.identify_fast_sqrt_inline(code))
    return found


def format_suspect(s):
    line = s.get('line', '?')
    stype = s.get('type', '?')
    sev = s.get('severity', '?')
    match = s.get('match', '') or ''
    desc = s.get('description', '') or ''
    if match and match != desc:
        return "    L%-4s [%s/%s] %s — %s" % (line, sev, stype, match, desc)
    return "    L%-4s [%s/%s] %s" % (line, sev, stype, desc or match)


def report_file(path, suspects, show_omitted):
    visible = [s for s in suspects if s.get('type') not in OMIT_SUSPECT_TYPES]
    omitted = [s for s in suspects if s.get('type') in OMIT_SUSPECT_TYPES]

    if visible:
        print("  %d suspect(s)  %s" % (len(visible), path))
    else:
        print("  clean         %s" % path)

    visible.sort(key=lambda s: (s.get('line', 0), s.get('type', '')))
    for s in visible:
        print(format_suspect(s))

    if show_omitted and omitted:
        print("  (omitted: %d filtered by OMIT_SUSPECT_TYPES)" % len(omitted))

    return len(visible)


def main(argv=None):
    p = argparse.ArgumentParser(
        description='Run source-text suspect detectors on a .cpp file.')
    p.add_argument('files', nargs='+', help='.cpp / .keep.cpp / .c / .keep.c')
    p.add_argument('--show-omitted', action='store_true',
                   help='Also report suspect types normally filtered by the '
                        'exporter (decompiler_intrinsic, mmx_assembly, etc.).')
    args = p.parse_args(argv)

    susp = _load_suspects_module()

    total_visible = 0
    for path in args.files:
        if not os.path.isfile(path):
            print("  ERROR         %s — not found" % path)
            continue
        with open(path, 'r') as f:
            code = f.read()
        suspects = run_detectors(susp, code)
        total_visible += report_file(path, suspects, args.show_omitted)

    if len(args.files) > 1:
        print("\nTotal: %d suspect(s) across %d file(s)" % (
            total_visible, len(args.files)))


if __name__ == '__main__':
    main()
