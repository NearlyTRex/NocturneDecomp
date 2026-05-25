# Post-static-analysis: synthesize suspects from static-analysis diagnostics.
#
# After run_static_analysis_after_export() has populated each function JSON's
# `static_analysis.<tool>_<mode>.diagnostics` array, this module walks the
# JSONs and converts whitelisted findings into suspect entries appended to
# `data['suspects']`.
#
# Synthesized suspects use a `static_` type prefix (e.g. `static_uninitvar`)
# so they sort distinctly from the existing pattern-based detectors in
# suspects.py and are easy to filter or strip downstream.
#
# Idempotent: on each run, all suspects whose `type` starts with
# SUSPECT_TYPE_PREFIX are dropped and replaced with the current findings.

import json
import os

try:
    # When invoked inside the Ghidra/pyghidra runtime, this routes through the
    # project's central logger so output ends up in the exporter's log file.
    from ghidra_annotations.util.log import log_info
except ImportError:
    # When invoked standalone (e.g. backfilling an existing export from the
    # CLI), the parent package eagerly imports Ghidra-only modules, so we
    # fall back to plain stdout.
    def log_info(msg):
        print(msg)


# Suspects with this type prefix are managed by this module.
SUSPECT_TYPE_PREFIX = 'static_'


# Whitelist of (tool, check_id) -> suspect spec.
#
# Only whitelisted check IDs become suspects. Unmapped findings stay in
# `data['static_analysis']` but are NOT promoted to `data['suspects']`.
#
# To enable a new check ID, add an entry here. The suspect's `type` is what
# downstream consumers (test_suspects.sh, reports) see; pick a stable name.
WHITELIST = {
    # Uninitialized locals — high signal, drove the flashlight investigation.
    ('cppcheck', 'uninitvar'): {
        'type': 'static_uninitvar',
        'match': 'Cppcheck: uninitialized variable',
        'severity': 'major',
    },
    ('cppcheck', 'legacyUninitvar'): {
        'type': 'static_legacy_uninitvar',
        'match': 'Cppcheck: uninitialized variable (legacy detector)',
        'severity': 'major',
    },

    # Null-pointer issues.
    ('cppcheck', 'nullPointer'): {
        'type': 'static_null_pointer',
        'match': 'Cppcheck: null pointer dereference',
        'severity': 'major',
    },
    ('cppcheck', 'nullPointerArithmetic'): {
        'type': 'static_null_pointer_arithmetic',
        'match': 'Cppcheck: null pointer arithmetic',
        'severity': 'major',
    },

    # Out-of-bounds indexing.
    ('cppcheck', 'arrayIndexOutOfBounds'): {
        'type': 'static_array_oob',
        'match': 'Cppcheck: array index out of bounds',
        'severity': 'major',
    },
    ('cppcheck', 'arrayIndexOutOfBoundsCond'): {
        'type': 'static_array_oob_cond',
        'match': 'Cppcheck: array index OOB depending on condition',
        'severity': 'moderate',
    },
    ('cppcheck', 'objectIndex'): {
        'type': 'static_object_index',
        'match': 'Cppcheck: pointer-to-object indexed past bounds',
        'severity': 'moderate',
    },

    # Type-system smells worth surfacing.
    ('cppcheck', 'invalidPointerCast'): {
        'type': 'static_invalid_pointer_cast',
        'match': 'Cppcheck: invalid pointer cast',
        'severity': 'moderate',
    },
}


# Sanctioned float<->int bit-cast helpers: the fast (inverse-)sqrt magic-number
# approximations (see fix_compilation.md §21). Their `*(int *)&x` / `*(float *)&b`
# reinterpret casts are intentional and bit-exact, so cppcheck's invalidPointerCast
# on them is a false positive and is NOT promoted to a suspect. These globals
# uniquely identify the helper bodies (inline occurrences elsewhere are still
# surfaced by the `fast_sqrt_inline` / `fast_inv_sqrt_inline` detectors).
_SANCTIONED_BITCAST_GLOBALS = ('g_FastSqrtMagic', 'g_FastInvSqrtMagic')


def _resolve_cpp_path(json_path, analyzed_file):
    """Resolve the analyzed source file's full path from the JSON's metadata.

    `analyzed_file` is stored as a basename sibling to the JSON.
    Returns None if the file can't be found.
    """
    if not analyzed_file:
        return None
    candidate = os.path.join(os.path.dirname(json_path), analyzed_file)
    return candidate if os.path.exists(candidate) else None


def _read_line(cpp_path, line_no):
    """Return the source-line text at line_no (1-based), or '' on failure."""
    if not cpp_path or line_no <= 0:
        return ''
    try:
        with open(cpp_path, 'r', errors='replace') as f:
            lines = f.readlines()
    except OSError:
        return ''
    if line_no > len(lines):
        return ''
    return lines[line_no - 1].rstrip('\n').strip()


def _is_sanctioned_bitcast_helper(cpp_path):
    """True if the analyzed source is a sanctioned fast-(inv-)sqrt bit-cast helper.

    Identified by use of the fast-sqrt magic globals; their float<->int
    reinterpret casts are intentional, so cppcheck's invalidPointerCast on
    those lines should not be promoted to a suspect. Returns False if the
    source can't be read.
    """
    if not cpp_path:
        return False
    try:
        with open(cpp_path, 'r', errors='replace') as f:
            src = f.read()
    except OSError:
        return False
    return any(tok in src for tok in _SANCTIONED_BITCAST_GLOBALS)


def _tool_from_key(sa_key):
    """Extract the tool name from a static_analysis subkey.

    Subkey format is `<tool>_<mode>` (e.g. `cppcheck_quick`, `clang_tidy_deep`).
    Returns the tool name without the trailing mode.
    """
    # Strip the trailing _quick / _deep, keeping anything else (clang_tidy stays whole).
    for mode in ('_quick', '_deep'):
        if sa_key.endswith(mode):
            return sa_key[: -len(mode)]
    return sa_key


def synthesize_suspect(tool, diag, cpp_path):
    """Convert a single static-analysis diagnostic into a suspect entry.

    Returns None if the (tool, check_id) is not whitelisted.
    """
    check_id = diag.get('check_id', '')
    spec = WHITELIST.get((tool, check_id))
    if not spec:
        return None
    line_no = diag.get('line', 0) or 0
    return {
        'type': spec['type'],
        'match': spec['match'],
        'description': diag.get('message', '') or '',
        'line': line_no,
        'severity': spec['severity'],
        'text': _read_line(cpp_path, line_no),
    }


def apply_to_json(json_path):
    """Synthesize static-analysis suspects for one function JSON.

    Drops any existing suspects with the `static_` prefix and replaces them
    with synthesized ones from the current static_analysis findings.

    Returns a (synthesized_count, was_rewritten) tuple, or (-1, False) on
    read/parse/write error.
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (OSError, ValueError):
        return (-1, False)

    sa = data.get('static_analysis') or {}
    cpp_path = _resolve_cpp_path(json_path, sa.get('analyzed_file'))

    existing = data.get('suspects') or []
    if not isinstance(existing, list):
        existing = []

    # Drop previously synthesized static_* suspects.
    kept = [
        s for s in existing
        if not (
            isinstance(s, dict)
            and isinstance(s.get('type'), str)
            and s['type'].startswith(SUSPECT_TYPE_PREFIX)
        )
    ]

    # Synthesize fresh ones from current diagnostics.
    suppress_bitcast = None  # lazily computed on first invalidPointerCast diag
    synthesized = []
    for sa_key, sa_val in sa.items():
        if not isinstance(sa_val, dict):
            continue
        diags = sa_val.get('diagnostics')
        if not isinstance(diags, list):
            continue
        tool = _tool_from_key(sa_key)
        for diag in diags:
            if not isinstance(diag, dict):
                continue
            # Don't promote invalidPointerCast on the sanctioned fast-(inv-)sqrt
            # bit-cast helpers — their reinterpret casts are intentional (§21).
            if tool == 'cppcheck' and diag.get('check_id') == 'invalidPointerCast':
                if suppress_bitcast is None:
                    suppress_bitcast = _is_sanctioned_bitcast_helper(cpp_path)
                if suppress_bitcast:
                    continue
            suspect = synthesize_suspect(tool, diag, cpp_path)
            if suspect:
                synthesized.append(suspect)

    new_suspects = kept + synthesized

    # Only write if changed (avoid touching mtime needlessly).
    rewritten = False
    if new_suspects != existing:
        if new_suspects:
            data['suspects'] = new_suspects
        elif 'suspects' in data:
            # Preserve an empty list rather than deleting; some downstream
            # tooling distinguishes absent vs. empty.
            data['suspects'] = []
        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2, sort_keys=True)
            rewritten = True
        except OSError:
            return (-1, False)

    return (len(synthesized), rewritten)


def apply_to_all_json(src_dir, skip_dirs=None):
    """Walk every function JSON under src_dir and apply static-analysis suspects.

    Returns a dict with counters.
    """
    skip_dirs = set(skip_dirs or ())
    total_files = 0
    files_with_static_suspects = 0
    files_rewritten = 0
    total_static_suspects = 0
    errors = 0

    for root, dirs, files in os.walk(src_dir):
        # Honor skip_dirs by pruning the walk.
        dirs[:] = [d for d in dirs if d not in skip_dirs]
        for fname in files:
            if not fname.endswith('.json'):
                continue
            json_path = os.path.join(root, fname)
            total_files += 1
            count, rewritten = apply_to_json(json_path)
            if count < 0:
                errors += 1
                continue
            if count > 0:
                files_with_static_suspects += 1
                total_static_suspects += count
            if rewritten:
                files_rewritten += 1

    return {
        'total_files': total_files,
        'files_with_static_suspects': files_with_static_suspects,
        'files_rewritten': files_rewritten,
        'total_static_suspects': total_static_suspects,
        'errors': errors,
    }


def run_after_static_analysis(pseudocode_dir, skip_dirs=None):
    """Exporter integration point: run after run_static_analysis_after_export().

    Args:
        pseudocode_dir: Base pseudocode directory (must contain src/).
        skip_dirs: Optional directory names to skip while walking src/.
    """
    src_dir = os.path.join(pseudocode_dir, 'src')
    if not os.path.isdir(src_dir):
        log_info(
            'Static-analysis suspects: src directory not found at %s' % src_dir
        )
        return None

    log_info('Synthesizing suspects from static-analysis findings...')
    stats = apply_to_all_json(src_dir, skip_dirs=skip_dirs)
    log_info(
        'Static-analysis suspects: %d files scanned, %d with static suspects '
        '(%d total), %d JSONs rewritten%s'
        % (
            stats['total_files'],
            stats['files_with_static_suspects'],
            stats['total_static_suspects'],
            stats['files_rewritten'],
            ', %d errors' % stats['errors'] if stats['errors'] else '',
        )
    )
    return stats


# -----------------------------------------------------------------------------
# CLI entry point — useful for re-running this pass without a full re-export.
# -----------------------------------------------------------------------------

if __name__ == '__main__':
    import argparse

    parser = argparse.ArgumentParser(
        description=(
            'Synthesize suspects from static-analysis diagnostics already '
            'stored in function JSONs.'
        )
    )
    parser.add_argument(
        '--pseudocode-dir',
        required=True,
        help=(
            'Path to the pseudocode directory '
            '(e.g. annotations/nocedit.exe/pseudocode)'
        ),
    )
    parser.add_argument(
        '--skip-dirs',
        nargs='*',
        default=['globals', 'crt', 'entry'],
        help='Directory names under src/ to skip.',
    )
    args = parser.parse_args()

    result = run_after_static_analysis(
        args.pseudocode_dir, skip_dirs=args.skip_dirs
    )
    if result is None:
        raise SystemExit(1)
