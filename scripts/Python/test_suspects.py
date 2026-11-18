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
# Also (by default, when cppcheck is on $PATH) runs cppcheck in quick mode
# and prints any diagnostics — these come from the same detector set the
# full export uses, so they surface cppcheck-sourced suspects that the
# regex pass can't see (e.g. uninitialized-variable reads).
#
# Usage: test_suspects.py [--no-cppcheck] <file.cpp> [file2.cpp ...]

from __future__ import annotations

import argparse
import glob
import importlib.util
import os
import re
import subprocess
import sys
import types

REPO_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
ANNOTATIONS = os.path.join(REPO_ROOT, 'annotations')
# The program an ad-hoc file outside annotations/<exe>/ is checked against
DEFAULT_PROGRAM = 'nocedit.exe'
PSEUDOCODE_DIR = os.path.join(
    REPO_ROOT, 'scripts', 'Python', 'ghidra_annotations',
    'annotations', 'pseudocode',
)


def _load_suspects_module():
    """Load the suspects package without triggering the parent's Ghidra-dep init.

    `suspects` is a package (suspects/__init__.py re-exports its theme
    submodules — _common, _structtypes, content, assembly, stack). Its
    submodules import `...pseudocode.pass_by_value` (pure Python) and each
    other via relative imports. We stub the parent package modules, load
    pass_by_value by path, then load the suspects package with its
    submodule_search_locations set so the relative `from ._common import …`
    imports resolve to the files in suspects/.
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

    susp_dir = os.path.join(PSEUDOCODE_DIR, 'suspects')
    susp_spec = importlib.util.spec_from_file_location(
        'ghidra_annotations.annotations.pseudocode.suspects',
        os.path.join(susp_dir, '__init__.py'),
        submodule_search_locations=[susp_dir],
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


# An `extern TYPE name[opt];` declaration in include/globals/*.h. The trailing
# `;` anchor forces `name` to be the last identifier, so multi-word and
# pointer types (`unsigned int`, `void*`, `char*`) land wholly in group 1.
_GLOBAL_EXTERN_RE = re.compile(
    r'^\s*extern\s+(.*?)\s*([A-Za-z_]\w*)\s*(\[[^;]*\])?\s*;\s*$')


def build_global_ptr_intervals(program):
    """Parse one program's include/globals/*.h into (0, 0, name, gtype) tuples.

    The full export gets global types from Ghidra and feeds them to the
    pointer_truncation detector via build_global_interval_map(); outside the
    pipeline the committed extern declarations are the source of truth. This
    mirrors that map's (start, end, name, type) shape — start/end are unused by
    identify_pointer_truncation_suspects, which decides pointer-ness from
    `'*' in gtype` / `'[' in gtype`. Without this, bare pointer-typed globals
    (`(int)g_SomeVoidPtr`) slip past the source-text harness.

    Only the program's own headers count: the siblings type the same global
    names differently (a vtable struct in one, `void*[6]` in another).
    """
    intervals = []
    seen = set()
    pattern = os.path.join(ANNOTATIONS, program, 'pseudocode', 'include', 'globals', '*.h')
    for hdr in sorted(glob.glob(pattern)):
        with open(hdr, 'r') as f:
            lines = f.read().split('\n')
        for line in lines:
            m = _GLOBAL_EXTERN_RE.match(line)
            if not m:
                continue
            name = m.group(2)
            if name in seen:
                continue
            seen.add(name)
            gtype = (m.group(1) + (m.group(3) or '')).strip()
            intervals.append((0, 0, name, gtype))
    return intervals


def _sibling_asm(path):
    """Read the .asm that sits beside a .cpp/.c/.keep.cpp, or '' if absent.

    Most asm-side detectors are decompiler-state-dependent and deliberately
    excluded here, but dropped_fyl2x and missing_cave_copy are not: each uses
    the asm only as a gate ("does this function compute FYL2X", "does it hold a
    cave block of this size"), and what it flags is fixable in the keep.
    Reading the committed .asm makes them usable during keep work instead of
    only at export time.
    """
    base = path
    for suffix in ('.keep.cpp', '.keep.c', '.cpp', '.c'):
        if base.endswith(suffix):
            base = base[:-len(suffix)]
            break
    try:
        with open(base + '.asm', 'r') as f:
            return f.read()
    except OSError:
        return ''


def _regenerated_cpp(path):
    """Read the exported .cpp beside a .keep, or '' when `path` is not a keep.

    The regenerated .cpp is the one artifact guaranteed to agree with the
    current Ghidra database, which is what stale_enum_name compares the keep
    against.
    """
    for suffix in ('.keep.cpp', '.keep.c'):
        if path.endswith(suffix):
            sibling = path[:-len(suffix)] + suffix[len('.keep'):]
            try:
                with open(sibling, 'r') as f:
                    return f.read()
            except OSError:
                return ''
    return ''


def run_detectors(susp, code, struct_layout_map=None,
                  global_interval_map=None, struct_size_map=None,
                  asm_code=None, enum_value_map=None, cpp_code=None):
    """Run the source-text-only content detectors on `code`.

    Mirrors detect_content_suspects() (a test keeps the two lists in step) but
    with no func_globals / func_calls —
    those require Ghidra-extracted state that isn't available outside the
    export pipeline. `global_interval_map`, when supplied (built from the
    committed globals headers by build_global_ptr_intervals), gives the
    pointer_truncation detector the global pointer types it needs to flag
    `(int)g_SomePtr` truncations; the address-based detectors still run
    map-free and skip the rules that need real addresses.
    """
    found = []
    found.extend(susp.identify_suspect_lines(code))
    found.extend(susp.identify_wrong_global_suspects(code))
    found.extend(susp.identify_suspicious_cast_suspects(code))
    found.extend(susp.identify_pointer_truncation_suspects(
        code, None, global_interval_map, struct_layout_map))
    found.extend(susp.identify_raw_address_constant_suspects(code))
    found.extend(susp.identify_raw_address_in_local(code))
    found.extend(susp.identify_format_string_mismatch(code))
    found.extend(susp.identify_unrolled_strcpy_loops(code))
    found.extend(susp.identify_unrolled_memcpy_loops(code))
    found.extend(susp.identify_memcpy_oversized_source(code))
    found.extend(susp.identify_dropped_loop_counter(code))
    found.extend(susp.identify_unrolled_memcpy_dword_byte_split(code))
    found.extend(susp.identify_unrolled_memcpy_dword_cast_loop(code))
    found.extend(susp.identify_unrolled_memcpy_index_form(code))
    found.extend(susp.identify_unrolled_field_copy(code, struct_layout_map))
    found.extend(susp.identify_partial_struct_copy(code, struct_layout_map))
    found.extend(susp.identify_unrolled_offset_copy(code))
    found.extend(susp.identify_cascade_constant_fill(code))
    found.extend(susp.identify_self_copy_guard(code))
    found.extend(susp.identify_dropped_self_copy(code))
    found.extend(susp.identify_tautological_addr_guard(code))
    found.extend(susp.identify_signed_shift_global_idiom(code))
    found.extend(susp.identify_concat_reconstruction(code))
    found.extend(susp.identify_sibling_array_undersized(code))
    found.extend(susp.identify_pointer_cast_multiline(code))
    found.extend(susp.identify_int_address_arithmetic(code))
    found.extend(susp.identify_int_address_arithmetic_multiline(code))
    found.extend(susp.identify_subobject_byte_offset_cast(code))
    found.extend(susp.identify_pointer_int_offset_access(code))
    found.extend(susp.identify_shadow_pointer_walk(code))
    found.extend(susp.identify_subfield_vector_pun(
        code, struct_layout_map, struct_size_map))
    found.extend(susp.identify_vector_type_pun(code))
    found.extend(susp.identify_baked_self_address(code))
    found.extend(susp.identify_unrolled_strlen_loops(code))
    found.extend(susp.identify_unrolled_strcat_loops(code))
    found.extend(susp.identify_unrolled_strchr_loops(code))
    found.extend(susp.identify_preinc_loop_idiom(code))
    found.extend(susp.identify_loop_clobbered_constant(code))
    found.extend(susp.identify_fast_sqrt_inline(code))
    found.extend(susp.identify_inline_exp_idiom(code))
    found.extend(susp.identify_bit_int_float_compare(code))
    found.extend(susp.identify_struct_field_overrun(code, struct_layout_map))
    found.extend(susp.identify_alloc_magic_size(code, struct_size_map))
    found.extend(susp.identify_truncating_pointer_mask(code))
    found.extend(susp.identify_struct_reinterpret_walk(code, struct_size_map))
    found.extend(susp.identify_mem_magic_size(
        code, struct_layout_map, struct_size_map))
    found.extend(susp.identify_pointer_stride_bytecount(code))
    found.extend(susp.identify_null_member_upcast(code))
    found.extend(susp.identify_stale_struct_offset_64bit(
        code, struct_layout_map))
    found.extend(susp.identify_derived_field_index_pun(
        code, struct_layout_map, struct_size_map))
    found.extend(susp.identify_flattened_array_index(code))
    if asm_code:
        found.extend(susp.identify_dropped_fyl2x(code, asm_code))
        found.extend(susp.identify_missing_cave_copy(code, asm_code))
    if cpp_code:
        found.extend(susp.identify_stale_enum_name(
            code, cpp_code, enum_value_map))
    return found


# Quick-mode cppcheck args mirror static_analysis.run_cppcheck() with deep=False:
# no -I (header parse with -I dominates wall time at ~40s/file; quick mode is ~5s).
_CPPCHECK_ARGS = [
    '--enable=warning,performance,portability',
    '--std=c++11',
    '--quiet',
    '--template={file}:{line}:{column}: {severity}: {message} [{id}]',
    '--suppress=missingIncludeSystem',
    '--suppress=missingInclude',
    '--suppress=unknownMacro',
    '--suppress=syntaxError',
    '--suppress=preprocessorErrorDirective',
    '--suppress=unmatchedSuppression',
]

def _load_config_defines_module():
    spec = importlib.util.spec_from_file_location(
        '_config_defines', os.path.join(PSEUDOCODE_DIR, 'config_defines.py'))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


_config_defines = _load_config_defines_module()

# Matches the template above. Same shape as parse_cppcheck_output() in
# static_analysis.py — duplicated here so we don't import that module
# (it pulls in Ghidra-side dependencies).
_CPPCHECK_LINE_RE = re.compile(
    r'^([^:]+):(\d+):(\d+):\s*(\w+):\s*(.*?)\s*\[(\w+)\]\s*$',
    re.MULTILINE,
)


def run_cppcheck_quick(cpp_path, timeout=60):
    """Run cppcheck quick mode on one file. Returns (diagnostics, error_str).

    Each diagnostic is {line, column, severity, message, check_id}. On
    failure (timeout, missing binary, no output), returns ([], error_msg).
    Caller silently skips when cppcheck isn't installed.
    """
    pseudocode_dir = _config_defines.pseudocode_dir_for(cpp_path)
    defines = (_config_defines.config_define_flags(pseudocode_dir)
               if pseudocode_dir else [])
    try:
        proc = subprocess.run(
            ['cppcheck'] + _CPPCHECK_ARGS + defines + [cpp_path],
            capture_output=True, text=True, timeout=timeout,
        )
    except FileNotFoundError:
        return ([], 'cppcheck-missing')
    except subprocess.TimeoutExpired:
        return ([], 'cppcheck timed out after %ds' % timeout)

    diagnostics = []
    for m in _CPPCHECK_LINE_RE.finditer(proc.stderr or ''):
        diagnostics.append({
            'line': int(m.group(2)),
            'column': int(m.group(3)),
            'severity': m.group(4),
            'message': m.group(5).strip(),
            'check_id': m.group(6),
        })
    return (diagnostics, None)


def format_cppcheck_diag(d):
    return "    L%-4s [%s/cppcheck:%s] %s" % (
        d.get('line', '?'), d.get('severity', '?'),
        d.get('check_id', '?'), d.get('message', ''),
    )


def format_suspect(s):
    line = s.get('line', '?')
    stype = s.get('type', '?')
    sev = s.get('severity', '?')
    match = s.get('match', '') or ''
    desc = s.get('description', '') or ''
    if match and match != desc:
        return "    L%-4s [%s/%s] %s — %s" % (line, sev, stype, match, desc)
    return "    L%-4s [%s/%s] %s" % (line, sev, stype, desc or match)


def report_file(path, suspects, cppcheck_diags, show_omitted):
    visible = [s for s in suspects if s.get('type') not in OMIT_SUSPECT_TYPES]
    omitted = [s for s in suspects if s.get('type') in OMIT_SUSPECT_TYPES]

    total_visible = len(visible) + len(cppcheck_diags)
    if total_visible:
        parts = []
        if visible:
            parts.append("%d suspect(s)" % len(visible))
        if cppcheck_diags:
            parts.append("%d cppcheck" % len(cppcheck_diags))
        print("  %s  %s" % (', '.join(parts), path))
    else:
        print("  clean         %s" % path)

    visible.sort(key=lambda s: (s.get('line', 0), s.get('type', '')))
    for s in visible:
        print(format_suspect(s))

    for d in sorted(cppcheck_diags, key=lambda d: (d.get('line', 0), d.get('check_id', ''))):
        print(format_cppcheck_diag(d))

    if show_omitted and omitted:
        print("  (omitted: %d filtered by OMIT_SUSPECT_TYPES)" % len(omitted))

    return total_visible


def program_of(path):
    """The program whose types and globals a file is checked against.

    A file under annotations/<exe>/ belongs to <exe>; anything else, or an
    <exe> with no data types, is checked against DEFAULT_PROGRAM, the shipping
    decomp, rather than whichever program a glob happens to return first.
    """
    relative = os.path.relpath(os.path.abspath(path), ANNOTATIONS)
    program = relative.split(os.sep)[0]
    if relative.startswith(os.pardir) or not os.path.isfile(_data_types_path(program)):
        return DEFAULT_PROGRAM
    return program


def _data_types_path(program):
    return os.path.join(ANNOTATIONS, program, 'data_types', 'data_types.json')


def program_maps(susp, program):
    """(struct layout, struct size, enum value, global interval) maps for one program.

    These must NOT be shared across binaries. The siblings reuse struct and
    global names with different layouts and types, and tridx7 doesn't define
    the game types at all, so taking whichever path glob happened to return
    first silently checked nocedit sources against tridx7's type universe —
    every type-aware detector (struct_field_overrun, mem_magic_size,
    alloc_magic_size, stale_struct_offset_64bit, unrolled_field_copy,
    pointer_truncation, subfield_vector_pun, partial_struct_copy) then found
    no matching struct and reported nothing.
    """
    data_types = _data_types_path(program)
    if not os.path.isfile(data_types):
        return {}, {}, {}, build_global_ptr_intervals(program)
    return (susp.build_struct_layout_map(data_types), susp.build_struct_size_map(data_types),
            susp.build_enum_value_map(data_types), build_global_ptr_intervals(program))


def main(argv=None):
    p = argparse.ArgumentParser(
        description='Run source-text suspect detectors on a .cpp file.')
    p.add_argument('files', nargs='+', help='.cpp / .keep.cpp / .c / .keep.c')
    p.add_argument('--show-omitted', action='store_true',
                   help='Also report suspect types normally filtered by the '
                        'exporter (decompiler_intrinsic, mmx_assembly, etc.).')
    p.add_argument('--no-cppcheck', action='store_true',
                   help='Skip the cppcheck quick-mode pass. By default '
                        'cppcheck runs when the binary is on $PATH '
                        '(adds ~5s per file).')
    args = p.parse_args(argv)

    susp = _load_suspects_module()
    maps = {}

    def maps_for(path):
        program = program_of(path)
        if program not in maps:
            maps[program] = program_maps(susp, program)
        return maps[program]

    cppcheck_warned_missing = False
    total_visible = 0
    missing = 0
    for path in args.files:
        if not os.path.isfile(path):
            print("  ERROR         %s — not found" % path)
            missing += 1
            continue
        with open(path, 'r') as f:
            code = f.read()
        struct_layout_map, struct_size_map, enum_value_map, global_interval_map = maps_for(path)
        suspects = run_detectors(susp, code, struct_layout_map,
                                 global_interval_map, struct_size_map,
                                 _sibling_asm(path), enum_value_map,
                                 _regenerated_cpp(path))

        cppcheck_diags = []
        if not args.no_cppcheck:
            cppcheck_diags, err = run_cppcheck_quick(path)
            if err == 'cppcheck-missing':
                if not cppcheck_warned_missing:
                    print("  (cppcheck not on $PATH — skipping; pass "
                          "--no-cppcheck to silence)")
                    cppcheck_warned_missing = True
            elif err:
                print("  (cppcheck error: %s)" % err)

        total_visible += report_file(path, suspects, cppcheck_diags,
                                     args.show_omitted)

    if len(args.files) > 1:
        print("\nTotal: %d finding(s) across %d file(s)" % (
            total_visible, len(args.files) - missing))
    return 1 if missing else 0


if __name__ == '__main__':
    sys.exit(main())
