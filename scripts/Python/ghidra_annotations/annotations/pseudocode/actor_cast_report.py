# Actor pointer cast mismatch report
# Detects mismatches between the class specified by ClassInfo arguments
# to actor resolution functions and the type the result is cast to.

import os
import re
import glob
from collections import defaultdict
from ghidra_annotations.util.log import log_info


# Resolution functions identified by their unique FUN_ address suffix.
# Using addresses avoids false positives from substring matches
# (e.g. 'getActor' matching 'getActorType').
#
# hash_based: expected class determined by g_C*ClassInfo in argument window
# string_based: expected class determined by string literal argument (e.g. "CWerewolf")
HASH_BASED_FUNCTIONS = {
    'castToClassHash_FUN_0040c790': 'castToClassHash',
    'resolveActorByName_FUN_004aa400': 'resolveActorByName',
    'getActor_FUN_005594e0': 'getActor',
}

STRING_BASED_FUNCTIONS = {
    'createActorByName_FUN_0040c430': 'createActorByName',
}


def _build_class_hierarchy(headers_dir):
    """Parse struct definitions to find inheritance via 'base' member at offset 0x0."""
    hierarchy = {}
    for h in glob.glob(os.path.join(headers_dir, '*.h')):
        basename = os.path.basename(h)
        if '_vtable' in basename or '_full_vtable' in basename:
            continue

        with open(h) as f:
            content = f.read()

        m_struct = re.search(r'typedef struct (C\w+)\s*\{', content)
        if not m_struct:
            continue
        class_name = m_struct.group(1)

        m_base = re.search(r'^\s+(C\w+)\s+base;\s*//\s*0x0', content, re.MULTILINE)
        if m_base:
            hierarchy[class_name] = m_base.group(1)

    return hierarchy


def _get_ancestor_chain(class_name, hierarchy):
    """Return list from class up to root."""
    chain = []
    current = class_name
    while current:
        chain.append(current)
        current = hierarchy.get(current)
    return chain


def _is_compatible_type(cast_type, expected_type, hierarchy):
    """Check if cast_type is compatible with expected_type.

    Compatible means cast_type IS expected_type, or cast_type is a
    descendant of expected_type (downcast to a more specific subclass).
    Upcasts (e.g. CDemonActor when CCharacter is expected) are flagged
    because they lose type info and cause bad field access downstream.
    """
    if cast_type == expected_type:
        return True

    # Downcast: cast_type is more specific than expected_type (ok)
    cast_chain = _get_ancestor_chain(cast_type, hierarchy)
    if expected_type in cast_chain:
        return True

    return False


def _build_classinfo_map(globals_dir):
    """Build mapping from ClassInfo global names to their class types."""
    classinfo_map = {}
    for h in glob.glob(os.path.join(globals_dir, '*.h')):
        with open(h) as f:
            for line in f:
                m = re.search(r'extern\s+CDemonActorType\s+(g_C(\w+)ClassInfo)\s*;', line)
                if m:
                    global_name = m.group(1)
                    class_name = 'C' + m.group(2)
                    classinfo_map[global_name] = class_name

    return classinfo_map


def _find_expected_class_hash_based(lines, line_no, classinfo_map):
    """Determine expected class from ClassInfo global closest to the call line."""
    window_start = max(0, line_no - 4)
    window_end = min(len(lines), line_no + 5)

    # Search outward from the call line to find the closest ClassInfo match
    best_class = None
    best_distance = None
    for i in range(window_start, window_end):
        for global_name, class_name in classinfo_map.items():
            if global_name in lines[i]:
                distance = abs(i - (line_no - 1))  # line_no is 1-indexed
                if best_distance is None or distance < best_distance:
                    best_distance = distance
                    best_class = class_name
    return best_class


def _find_expected_class_string_based(lines, line_no):
    """Determine expected class from string literal argument like '"CWerewolf"'."""
    # Check the call line and surrounding lines for a string literal class name
    window_start = max(0, line_no - 2)
    window_end = min(len(lines), line_no + 3)
    window = '\n'.join(lines[window_start:window_end])

    m = re.search(r'"(C\w+)"', window)
    if m:
        return m.group(1)
    return None


def _find_resolution_calls(filepath, classinfo_map):
    """Find all calls to actor resolution functions and extract cast info."""
    with open(filepath) as f:
        content = f.read()

    results = []
    lines = content.split('\n')

    # Combine both function sets with their detection method
    all_functions = []
    for func_id, func_name in HASH_BASED_FUNCTIONS.items():
        all_functions.append((func_id, func_name, 'hash'))
    for func_id, func_name in STRING_BASED_FUNCTIONS.items():
        all_functions.append((func_id, func_name, 'string'))

    for func_id, func_name, method in all_functions:
        for line_no, line in enumerate(lines, 1):
            if func_id not in line:
                continue

            # Skip the function's own definition/signature
            if line.lstrip().startswith('//') or line.lstrip().startswith('#'):
                continue
            # Skip if this is the function definition (signature line)
            if func_id in os.path.basename(filepath):
                sig_match = re.match(r'\s*\w[\w\s\*]*' + re.escape(func_id) + r'\s*\(', line)
                if sig_match:
                    continue

            if method == 'hash':
                expected_class = _find_expected_class_hash_based(lines, line_no, classinfo_map)
            else:
                expected_class = _find_expected_class_string_based(lines, line_no)

            if not expected_class:
                # Record as unresolved for the report
                window_start = max(0, line_no - 3)
                window_end = min(len(lines), line_no + 3)
                window_lines = []
                for w in range(window_start, window_end):
                    window_lines.append("    %d: %s" % (w + 1, lines[w].rstrip()))
                results.append({
                    'file': filepath,
                    'line_no': line_no,
                    'line': line.strip(),
                    'function': func_name,
                    'expected_class': None,
                    'cast_type': None,
                    'window': '\n'.join(window_lines),
                })
                continue

            cast_type = None

            # Search backward from the call line for the assignment context.
            # The assignment is typically on the call line itself or 1-2 lines before.
            pre_start = max(0, line_no - 4)
            pre_lines = lines[pre_start:line_no]

            # Search lines in reverse order to find the assignment closest to the call.
            # Look for assignment cast "= (CType *)" first, which is more reliable
            # than a bare "(CType *)" that could be an argument cast.
            for pre_line in reversed(pre_lines):
                # Assignment with explicit cast: var = (CType *)
                assign_cast_m = re.search(r'=\s*\(\s*(C\w+)\s*\*\s*\)', pre_line)
                if assign_cast_m:
                    cast_type = assign_cast_m.group(1)
                    break

                # Assignment without cast: var = func(...)
                # Look up the variable's declared type
                assign_m = re.search(r'(\w+)\s*=\s*', pre_line)
                if assign_m:
                    var_name = assign_m.group(1)
                    decl_m = re.search(
                        r'^\s+(C\w+)\s+\*\s*' + re.escape(var_name) + r'\s*[;=]',
                        content, re.MULTILINE)
                    if decl_m:
                        cast_type = decl_m.group(1)
                        break

            if not cast_type:
                cast_type = '(unknown)'

            results.append({
                'file': filepath,
                'line_no': line_no,
                'line': line.strip(),
                'function': func_name,
                'expected_class': expected_class,
                'cast_type': cast_type,
            })

    return results


def generate_actor_cast_report(pseudocode_src_dir, reports_dir):
    """Generate actor pointer cast mismatch report.

    Args:
        pseudocode_src_dir: Path to pseudocode/src directory
        reports_dir: Path to output reports directory
    """
    pseudocode_dir = os.path.dirname(pseudocode_src_dir)
    headers_dir = os.path.join(pseudocode_dir, 'include', 'types', 'classes')
    globals_dir = os.path.join(pseudocode_dir, 'include', 'globals')

    hierarchy = _build_class_hierarchy(headers_dir)
    log_info("Actor cast report: %d classes in hierarchy" % len(hierarchy))

    classinfo_map = _build_classinfo_map(globals_dir)
    log_info("Actor cast report: %d ClassInfo globals" % len(classinfo_map))

    # Scan all pseudocode .cpp files (include .keep.cpp)
    cpp_files = []
    for ext in ('*.cpp', '*.keep.cpp'):
        cpp_files.extend(glob.glob(
            os.path.join(pseudocode_src_dir, '**', ext), recursive=True))
    # Deduplicate and prefer .keep files
    file_map = {}
    for f in cpp_files:
        base = f.replace('.keep.cpp', '.cpp')
        if base not in file_map or f.endswith('.keep.cpp'):
            file_map[base] = f
    cpp_files = sorted(f for f in file_map.values() if os.path.isfile(f))

    all_calls = []
    mismatches = []
    unresolved = []
    for filepath in cpp_files:
        calls = _find_resolution_calls(filepath, classinfo_map)
        for call in calls:
            if call['expected_class'] is None:
                unresolved.append(call)
                continue
            all_calls.append(call)
            if call['cast_type'] == '(unknown)':
                continue
            if not _is_compatible_type(call['cast_type'], call['expected_class'], hierarchy):
                mismatches.append(call)

    # Build report
    lines = []
    lines.append("=" * 100)
    lines.append("ACTOR POINTER CAST MISMATCH REPORT")
    lines.append("=" * 100)
    lines.append("")
    lines.append("This report identifies locations where actor resolution functions")
    lines.append("(castToClassHash, resolveActorByName, getActor) return a pointer")
    lines.append("that is cast to a type incompatible with the class specified by")
    lines.append("the ClassInfo argument. The ClassInfo tells us what class the actor")
    lines.append("actually is; when the cast doesn't match, all downstream field")
    lines.append("accesses and vtable calls will be wrong.")
    lines.append("")

    # Summary
    lines.append("-" * 100)
    lines.append("SUMMARY")
    lines.append("-" * 100)
    lines.append("")
    lines.append("  Total resolution calls found:  %d" % len(all_calls))
    lines.append("  Type mismatches found:         %d" % len(mismatches))
    lines.append("  Unresolved (indirect variable): %d" % len(unresolved))
    lines.append("")

    if all_calls:
        by_func = defaultdict(int)
        for call in all_calls:
            by_func[call['function']] += 1
        lines.append("  Calls by function:")
        for func in sorted(by_func):
            lines.append("    %-30s %d calls" % (func, by_func[func]))
        lines.append("")

    if mismatches:
        by_expected = defaultdict(list)
        for m in mismatches:
            by_expected[m['expected_class']].append(m)

        lines.append("  Mismatches by expected class:")
        for cls in sorted(by_expected, key=lambda c: -len(by_expected[c])):
            lines.append("    %-25s %d mismatches" % (cls, len(by_expected[cls])))
        lines.append("")

        by_cast = defaultdict(list)
        for m in mismatches:
            by_cast[m['cast_type']].append(m)

        lines.append("  Mismatches by actual cast type:")
        for cls in sorted(by_cast, key=lambda c: -len(by_cast[c])):
            lines.append("    %-25s %d times (should be: %s)" % (
                cls, len(by_cast[cls]),
                ', '.join(sorted(set(m['expected_class'] for m in by_cast[cls])))))
        lines.append("")

        # Detailed findings
        lines.append("=" * 100)
        lines.append("DETAILED FINDINGS")
        lines.append("=" * 100)
        lines.append("")

        by_file = defaultdict(list)
        for m in mismatches:
            rel = os.path.relpath(m['file'], pseudocode_src_dir)
            by_file[rel].append(m)

        for rel_path in sorted(by_file):
            file_mismatches = by_file[rel_path]
            lines.append("-" * 80)
            lines.append("  %s" % rel_path)
            lines.append("-" * 80)
            for m in file_mismatches:
                expected_chain = ' -> '.join(
                    _get_ancestor_chain(m['expected_class'], hierarchy))
                cast_chain = ' -> '.join(
                    _get_ancestor_chain(m['cast_type'], hierarchy))
                lines.append("")
                lines.append("  Line %d: %s()" % (m['line_no'], m['function']))
                lines.append("    Expected class: %-20s (%s)" % (
                    m['expected_class'], expected_chain))
                lines.append("    Actual cast:    %-20s (%s)" % (
                    m['cast_type'], cast_chain))
            lines.append("")

    # Unresolved calls (class passed via intermediate variable)
    if unresolved:
        lines.append("=" * 100)
        lines.append("UNRESOLVED CALLS (class identity passed via variable)")
        lines.append("=" * 100)
        lines.append("")
        lines.append("These calls pass the class hash or name through an intermediate variable")
        lines.append("rather than directly from a ClassInfo global or string literal.")
        lines.append("Manual inspection is needed to determine the expected class.")
        lines.append("")

        by_file = defaultdict(list)
        for u in unresolved:
            rel = os.path.relpath(u['file'], pseudocode_src_dir)
            by_file[rel].append(u)

        for rel_path in sorted(by_file):
            file_unresolved = by_file[rel_path]
            lines.append("-" * 80)
            lines.append("  %s" % rel_path)
            lines.append("-" * 80)
            for u in file_unresolved:
                lines.append("")
                lines.append("  Line %d: %s()" % (u['line_no'], u['function']))
                lines.append(u['window'])
            lines.append("")

    # Summary line including unresolved count
    summary_parts = ["%d calls" % len(all_calls), "%d mismatches" % len(mismatches)]
    if unresolved:
        summary_parts.append("%d unresolved" % len(unresolved))

    report_text = '\n'.join(lines)
    output_path = os.path.join(reports_dir, 'actor_cast_mismatches.txt')
    with open(output_path, 'w') as f:
        f.write(report_text)

    log_info("Actor cast report: %s -> %s" % (', '.join(summary_parts), output_path))
