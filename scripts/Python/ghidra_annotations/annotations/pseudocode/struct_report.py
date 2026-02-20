# Struct quality report generation
# Analyzes struct definitions from data_types.json and reports on:
# - Fields with unknown/padding/reserved/default names
# - Structs not referenced in source, globals, constants, prototypes, or system headers
# - Per-struct completeness percentages

import os
import re
import json
from ghidra_annotations.util.log import log_info


def load_struct_definitions(data_types_path):
    """Load struct definitions from data_types.json.

    Args:
        data_types_path: Path to data_types.json

    Returns:
        List of struct dicts from the 'structs' key
    """
    with open(data_types_path, 'r') as f:
        data = json.load(f)
    return data.get('structs', [])


_DEFAULT_FIELD_RE = re.compile(r'^field_\d+$')


def classify_field(field_name):
    """Classify a field name as problematic or clean.

    Returns:
        'unknown' for unk*, 'padding' for pad*, 'reserved' for reserved*,
        'default' for field_<number> (Ghidra defaults), or None if clean
    """
    lower = field_name.lower()
    if lower.startswith('unk'):
        return 'unknown'
    if lower.startswith('pad'):
        return 'padding'
    if lower.startswith('reserved'):
        return 'reserved'
    if _DEFAULT_FIELD_RE.match(field_name):
        return 'default'
    return None


def analyze_struct_fields(structs):
    """Analyze field quality for each struct.

    Returns:
        List of dicts with keys: name, total_fields, clean_fields, completeness,
        unknown_count, padding_count, reserved_count, default_count, problematic_fields
    """
    results = []
    for s in structs:
        fields = s.get('fields', [])
        total = len(fields)
        if total == 0:
            results.append({
                'name': s['name'],
                'category': s.get('cat', ''),
                'total_fields': 0,
                'clean_fields': 0,
                'completeness': 100.0,
                'unknown_count': 0,
                'padding_count': 0,
                'reserved_count': 0,
                'default_count': 0,
                'problematic_fields': [],
            })
            continue

        unknown_count = 0
        padding_count = 0
        reserved_count = 0
        default_count = 0
        problematic = []

        for field in fields:
            cat = classify_field(field['name'])
            if cat == 'unknown':
                unknown_count += 1
                problematic.append(field['name'])
            elif cat == 'padding':
                padding_count += 1
                problematic.append(field['name'])
            elif cat == 'reserved':
                reserved_count += 1
                problematic.append(field['name'])
            elif cat == 'default':
                default_count += 1
                problematic.append(field['name'])

        clean = total - unknown_count - padding_count - reserved_count - default_count
        completeness = (clean / total) * 100.0

        results.append({
            'name': s['name'],
            'category': s.get('cat', ''),
            'total_fields': total,
            'clean_fields': clean,
            'completeness': completeness,
            'unknown_count': unknown_count,
            'padding_count': padding_count,
            'reserved_count': reserved_count,
            'default_count': default_count,
            'problematic_fields': problematic,
        })

    return results


def _collect_file_text(directories, extensions):
    """Read all files matching given extensions from multiple directories.

    Args:
        directories: List of directory paths to walk
        extensions: Tuple of file extensions to include (e.g. ('.cpp', '.h'))

    Returns:
        Combined text of all matching files
    """
    all_text = []
    for scan_dir in directories:
        if not os.path.isdir(scan_dir):
            continue
        for root, dirs, files in os.walk(scan_dir):
            for fname in files:
                if fname.endswith(extensions):
                    filepath = os.path.join(root, fname)
                    with open(filepath, 'r') as f:
                        all_text.append(f.read())
    return '\n'.join(all_text)


def find_struct_cross_references(structs, struct_names):
    """Find structs referenced as field types in other structs.

    Args:
        structs: List of struct dicts from data_types.json
        struct_names: Set of all struct names

    Returns:
        Set of struct names that appear as a field type in another struct
    """
    referenced = set()
    for s in structs:
        owner = s['name']
        for field in s.get('fields', []):
            field_type = field.get('type', '')
            # Extract word tokens from the type string and check against struct names
            for token in re.findall(r'\b\w+\b', field_type):
                if token != owner and token in struct_names:
                    referenced.add(token)
    return referenced


def find_referenced_structs(src_dir, struct_names, extra_dirs=None):
    """Find which struct names appear in source or header files.

    Scans .cpp files in src_dir plus .h files in additional directories
    (globals, constants, prototypes, system).

    Args:
        src_dir: Directory to scan for .cpp files
        struct_names: Set of struct names to look for
        extra_dirs: Additional directories to scan for .h files (optional)

    Returns:
        Set of struct names that were found in at least one file
    """
    if not struct_names:
        return set()

    scan_dirs = [src_dir]
    if extra_dirs:
        scan_dirs.extend(extra_dirs)

    combined = _collect_file_text(scan_dirs, ('.cpp', '.h'))
    referenced = set()
    for name in struct_names:
        # Word boundary match to avoid partial matches
        if re.search(r'\b' + re.escape(name) + r'\b', combined):
            referenced.add(name)

    return referenced


def generate_struct_report(data_types_path, src_dir, output_path):
    """Generate the struct quality report.

    Args:
        data_types_path: Path to data_types.json
        src_dir: Path to pseudocode src/ directory
        output_path: Directory to write the report to
    """
    log_info("Loading struct definitions from %s" % data_types_path)
    all_structs = load_struct_definitions(data_types_path)
    structs = [s for s in all_structs if s.get('cat', '').endswith('/Game')]
    log_info("Found %d game structs (skipped %d non-game)" % (len(structs), len(all_structs) - len(structs)))

    analysis = analyze_struct_fields(structs)

    # Derive additional scan directories by walking up to the pseudocode/ parent
    # Scan include subdirs except types/ (which just contains the struct definitions)
    pseudocode_dir = src_dir
    while pseudocode_dir and os.path.basename(pseudocode_dir) != 'pseudocode':
        pseudocode_dir = os.path.dirname(pseudocode_dir)
    extra_dirs = []
    if pseudocode_dir:
        include_dir = os.path.join(pseudocode_dir, 'include')
        for subdir in ('globals', 'constants', 'prototypes', 'system'):
            candidate = os.path.join(include_dir, subdir)
            if os.path.isdir(candidate):
                extra_dirs.append(candidate)

    struct_names = set(s['name'] for s in structs)
    log_info("Scanning source and header files for struct references...")
    referenced = find_referenced_structs(src_dir, struct_names, extra_dirs)
    log_info("Checking struct field type cross-references...")
    referenced |= find_struct_cross_references(structs, struct_names)
    unreferenced = struct_names - referenced
    log_info("Found %d referenced, %d unreferenced structs" % (len(referenced), len(unreferenced)))

    # Partition results
    structs_with_issues = [a for a in analysis if a['completeness'] < 100.0]
    structs_clean = [a for a in analysis if a['completeness'] == 100.0]
    structs_with_issues.sort(key=lambda a: a['completeness'])

    total_fields = sum(a['total_fields'] for a in analysis)
    total_unknown = sum(a['unknown_count'] for a in analysis)
    total_padding = sum(a['padding_count'] for a in analysis)
    total_reserved = sum(a['reserved_count'] for a in analysis)
    total_default = sum(a['default_count'] for a in analysis)
    total_problematic = total_unknown + total_padding + total_reserved + total_default
    total_clean_fields = total_fields - total_problematic

    # Build report
    lines = []
    lines.append('=' * 70)
    lines.append('STRUCT QUALITY REPORT')
    lines.append('=' * 70)
    lines.append('')

    # Summary
    lines.append('SUMMARY')
    lines.append('-' * 70)
    lines.append('Total structs:              %d' % len(structs))
    lines.append('Fully clean structs:        %d' % len(structs_clean))
    lines.append('Structs with issues:        %d' % len(structs_with_issues))
    lines.append('Unreferenced structs:       %d' % len(unreferenced))
    lines.append('')
    lines.append('Total fields:               %d' % total_fields)
    lines.append('Clean fields:               %d' % total_clean_fields)
    lines.append('Unknown (unk*) fields:      %d' % total_unknown)
    lines.append('Padding (pad*) fields:      %d' % total_padding)
    lines.append('Reserved (reserved*) fields:%d' % total_reserved)
    lines.append('Default (field_*) fields:   %d' % total_default)
    lines.append('Overall field quality:      %.1f%%' % (total_clean_fields * 100.0 / total_fields if total_fields else 100.0))
    lines.append('')

    # Unreferenced structs
    lines.append('=' * 70)
    lines.append('UNREFERENCED STRUCTS (%d)' % len(unreferenced))
    lines.append('-' * 70)
    lines.append('These structs are not referenced in any source or header file.')
    lines.append('')
    for name in sorted(unreferenced):
        # Find its category
        cat = ''
        for a in analysis:
            if a['name'] == name:
                cat = a['category']
                break
        lines.append('  %-40s  %s' % (name, cat))
    lines.append('')

    # Structs with issues (sorted worst first)
    lines.append('=' * 70)
    lines.append('STRUCTS WITH PROBLEMATIC FIELDS (%d)' % len(structs_with_issues))
    lines.append('-' * 70)
    lines.append('')
    for a in structs_with_issues:
        ref_marker = '' if a['name'] in referenced else ' [unreferenced]'
        lines.append('%-40s  %5.1f%% complete  (%d/%d fields clean)%s' % (
            a['name'], a['completeness'], a['clean_fields'], a['total_fields'], ref_marker))
        parts = []
        if a['unknown_count']:
            parts.append('%d unknown' % a['unknown_count'])
        if a['padding_count']:
            parts.append('%d padding' % a['padding_count'])
        if a['reserved_count']:
            parts.append('%d reserved' % a['reserved_count'])
        if a['default_count']:
            parts.append('%d default' % a['default_count'])
        lines.append('  Issues: %s' % ', '.join(parts))
        lines.append('  Fields: %s' % ', '.join(a['problematic_fields']))
        lines.append('')

    # Clean structs
    lines.append('=' * 70)
    lines.append('FULLY CLEAN STRUCTS (%d)' % len(structs_clean))
    lines.append('-' * 70)
    for a in sorted(structs_clean, key=lambda x: x['name']):
        lines.append('  %s' % a['name'])
    lines.append('')

    report_text = '\n'.join(lines)
    report_file = os.path.join(output_path, 'struct_quality.txt')
    with open(report_file, 'w') as f:
        f.write(report_text)
    log_info("Wrote struct quality report to %s" % report_file)
