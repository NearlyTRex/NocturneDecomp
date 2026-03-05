#!/usr/bin/env python3
"""
Detect wrong vtable union member accesses in CDemonActor hierarchy pseudocode.

Scans all .cpp pseudocode files for vtable method calls that use a union member
(e.g. _uc, _uw, _ue, _uh) incompatible with the type of the object whose vtable
is being accessed. For example, accessing vtable._uc (CCharacter) on a CWeapon
object would show CCharacter method names at offsets where CWeapon methods actually
live, producing misleading pseudocode.

The report cross-references:
  - The union member used in the vtable access
  - The declared type of the variable whose vtable is accessed
  - The method name shown (which comes from the wrong vtable struct)
  - The method that SHOULD appear based on the correct vtable for that type

Usage:
    python3 report_vtable_union_mismatches.py [-v]
"""

import re
import os
import glob
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(SCRIPT_DIR))
ANNOTATIONS_DIR = os.path.join(REPO_ROOT, 'annotations', 'nocedit.exe')
PSEUDOCODE_DIR = os.path.join(ANNOTATIONS_DIR, 'pseudocode')
HEADERS_DIR = os.path.join(PSEUDOCODE_DIR, 'include', 'types', 'classes')
REPORTS_DIR = os.path.join(ANNOTATIONS_DIR, 'reports')


# ---------------------------------------------------------------------------
# 1. Build class hierarchy from header files
# ---------------------------------------------------------------------------

def build_class_hierarchy():
    """Parse struct definitions to find inheritance via 'base' member at offset 0x0.

    Returns dict mapping class_name -> direct_parent_class_name.
    """
    hierarchy = {}
    for h in glob.glob(os.path.join(HEADERS_DIR, '*.h')):
        # Skip vtable/full_vtable headers
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


def get_ancestor_chain(class_name, hierarchy):
    """Return list from class up to root, e.g. ['CGhoul', 'CEnemy', 'CCharacter', 'CDemonActor']."""
    chain = []
    current = class_name
    while current:
        chain.append(current)
        current = hierarchy.get(current)
    return chain


def get_valid_union_members(class_name, hierarchy):
    """Determine which UActorVTable union members are valid for a class.

    _ub is always valid (CDemonActor_vtable, shared by all full vtables).
    _uc valid if CCharacter is an ancestor.
    _ue valid if CEnemy is an ancestor.
    _uh valid if CHero is an ancestor.
    _uw valid if CWeapon is an ancestor.
    """
    chain = set(get_ancestor_chain(class_name, hierarchy))
    valid = {'_ub'}
    if 'CCharacter' in chain:
        valid.add('_uc')
    if 'CEnemy' in chain:
        valid.add('_ue')
    if 'CHero' in chain:
        valid.add('_uh')
    if 'CWeapon' in chain:
        valid.add('_uw')
    return valid


# ---------------------------------------------------------------------------
# 2. Parse vtable headers to build method-name-to-offset maps
# ---------------------------------------------------------------------------

def parse_vtable_methods(vtable_header_path):
    """Parse a _vtable.h file to extract method names and their offsets.

    Returns list of (offset, method_name) tuples.
    """
    methods = []
    with open(vtable_header_path) as f:
        for line in f:
            m = re.match(r'\s+\w+\*?\s+(\w+);\s*//\s*(0x[0-9a-fA-F]+)', line)
            if m:
                methods.append((int(m.group(2), 16), m.group(1)))
    return methods


def build_vtable_method_maps():
    """Build method maps for each sub-vtable section.

    Returns dict: union_member -> {relative_offset: method_name}
    Also returns absolute offset for each sub-vtable (0xec for all extended vtables).
    """
    vtable_files = {
        '_ub': os.path.join(HEADERS_DIR, 'CDemonActor_vtable.h'),
        '_uc': os.path.join(HEADERS_DIR, 'CCharacter_vtable.h'),
        '_ue': os.path.join(HEADERS_DIR, 'CEnemy_vtable.h'),
        '_uh': os.path.join(HEADERS_DIR, 'CHero_vtable.h'),
        '_uw': os.path.join(HEADERS_DIR, 'CWeapon_vtable.h'),
    }

    # Base offset where each sub-vtable starts in the full vtable
    sub_vtable_base = {
        '_ub': 0x00,
        '_uc': 0xec,
        '_ue': 0x154,
        '_uh': 0x154,
        '_uw': 0xec,
    }

    method_maps = {}  # union_member -> {relative_offset: method_name}
    absolute_maps = {}  # absolute_offset -> {union_member: method_name}

    for member, path in vtable_files.items():
        if not os.path.exists(path):
            continue
        methods = parse_vtable_methods(path)
        method_maps[member] = {}
        base = sub_vtable_base[member]
        for rel_offset, name in methods:
            method_maps[member][rel_offset] = name
            abs_offset = base + rel_offset
            if abs_offset not in absolute_maps:
                absolute_maps[abs_offset] = {}
            absolute_maps[abs_offset][member] = name

    return method_maps, absolute_maps


# ---------------------------------------------------------------------------
# 3. Parse pseudocode for variable types and vtable accesses
# ---------------------------------------------------------------------------

def extract_function_class(filepath):
    """Extract the class name from the pseudocode file path/name.

    e.g. CGhoul_process_FUN_004e6600.cpp -> CGhoul
    """
    basename = os.path.basename(filepath)
    m = re.match(r'(C[A-Za-z0-9]+)_', basename)
    if m:
        return m.group(1)
    return None


def extract_this_ptr_type(content):
    """Extract the type of this_ptr from the function signature."""
    m = re.search(r'\((\w+)\s+\*\s*this_ptr\b', content)
    if m:
        return m.group(1)
    return None


def extract_variable_types(content):
    """Build a map of variable_name -> declared_type from local declarations.

    Handles patterns like:
      CCharacter *pCVar3;
      CGhoul *this_ptr_00 = ...;
    """
    types = {}
    # Type *var; or Type *var = expr;
    for m in re.finditer(r'^\s+(C\w+)\s+\*\s*(\w+)\s*[;=]', content, re.MULTILINE):
        types[m.group(2)] = m.group(1)
    return types


def find_vtable_accesses(content):
    """Find all vtable union member accesses in pseudocode content.

    Extracts:
      - variable name whose .vtable is accessed
      - outer union member (_ub, _uc, _ue, _uh, _uw)
      - inner sub-vtable member (if present, e.g. ->_uc in ->_uc).method)
      - method name called
      - line number
      - the first argument passed to the virtual call (often a cast showing expected type)

    Returns list of dicts.
    """
    accesses = []
    lines = content.split('\n')

    # Pattern for vtable access:
    # (VARNAME(->base)*).vtable._uX  where X is b,c,e,h,w
    # The variable name might be complex: this_ptr, pCVar3, etc.
    # Access chains: this_ptr->base, this_ptr->base.base.base, pCVar3->base, etc.

    # Regex to find .vtable._uX and capture the variable name.
    # The access chain can look like:
    #   (this_ptr->base).vtable._uc              (1 level)
    #   (this_ptr->base).base.vtable._uc         (2 levels, paren then .base)
    #   (this_ptr->base).base.base.vtable._uc    (3 levels)
    #   (pCVar3->base).vtable._uc                (other variable)
    # We search backward from .vtable._uX to find the variable name.
    vtable_access_re = re.compile(
        r'(\w+)'                                    # variable name
        r'((?:->base|\.base|\)\.base|\))*)'         # chain: ->base, .base, ).base, )
        r'\.vtable\._u([bcehw])'                    # .vtable._uX
    )

    for line_no, line in enumerate(lines, 1):
        if '.vtable._u' not in line:
            continue

        # Skip constructor patterns (vtable assignment, not a call)
        if re.search(r'vtable\._u\w\s*=\s*&', line):
            continue
        # Skip plain pointer reads (no method call)
        if re.search(r'=\s*.*vtable\._u\w\s*;', line):
            continue

        for m in vtable_access_re.finditer(line):
            var_name = m.group(1)
            base_chain = m.group(2)
            union_member = '_u' + m.group(3)

            # Skip false positives: 'base' as variable name, or 'ADJ'
            if var_name in ('base', 'ADJ', 'struct'):
                continue

            access = {
                'var_name': var_name,
                'base_chain': base_chain,
                'union_member': union_member,
                'line_no': line_no,
                'line': line.strip(),
            }

            # Try to extract the inner sub-vtable member and method name
            # Pattern after _uX: )->methodName  (base vtable)
            # Or: )->_uY).methodName  (sub-vtable)
            rest = line[m.end():]
            sm2 = re.match(r'\)->_u([bcehw])\)\.(\w+)\)', rest)
            if sm2:
                access['inner_member'] = '_u' + sm2.group(1)
                access['method'] = sm2.group(2)
            else:
                sm = re.match(r'\)->(\w+)\)', rest)
                if sm:
                    access['inner_member'] = None
                    access['method'] = sm.group(1)

            # Try to extract the first argument (the 'this' passed to the virtual call)
            call_m = re.search(r'\)\.\w+\)\s*\(([^,\)]*)', line[m.start():])
            if not call_m:
                call_m = re.search(r'->\w+\)\s*\(([^,\)]*)', line[m.start():])
            if call_m:
                access['first_arg'] = call_m.group(1).strip()
                cast_m = re.search(r'\((\w+)\s*\*\)', access['first_arg'])
                if cast_m:
                    access['arg_cast_type'] = cast_m.group(1)

            accesses.append(access)

    return accesses


# ---------------------------------------------------------------------------
# 4. Check compatibility and generate report
# ---------------------------------------------------------------------------

UNION_MEMBER_NAMES = {
    '_ub': 'CDemonActor_vtable (base)',
    '_uc': 'CCharacter_vtable',
    '_ue': 'CEnemy_vtable',
    '_uh': 'CHero_vtable',
    '_uw': 'CWeapon_vtable',
}

UNION_MEMBER_TO_HIERARCHY = {
    '_uc': 'CCharacter',
    '_ue': 'CEnemy',
    '_uh': 'CHero',
    '_uw': 'CWeapon',
}


def suggest_correct_member(var_type, hierarchy):
    """Suggest the correct union member for a given variable type."""
    valid = get_valid_union_members(var_type, hierarchy)
    # Return the most specific valid member (prefer _ue over _uc over _ub)
    for pref in ['_ue', '_uh', '_uc', '_uw']:
        if pref in valid:
            return pref
    return '_ub'


def find_correct_method(method_name, used_member, correct_member, method_maps):
    """Given a method accessed through the wrong union member, find what it should be.

    The method_name was resolved from used_member's vtable at some relative offset.
    Find that same offset in correct_member's vtable to get the correct name.
    """
    # Find the relative offset of method_name in used_member's vtable
    used_methods = method_maps.get(used_member, {})
    rel_offset = None
    for off, name in used_methods.items():
        if name == method_name:
            rel_offset = off
            break

    if rel_offset is None:
        return None

    # Look up same relative offset in correct_member's vtable
    correct_methods = method_maps.get(correct_member, {})
    return correct_methods.get(rel_offset)


def analyze_file(filepath, hierarchy, method_maps):
    """Analyze a single .cpp pseudocode file for vtable union mismatches.

    Returns list of issue dicts.
    """
    with open(filepath) as f:
        content = f.read()

    # Get variable types
    this_type = extract_this_ptr_type(content)
    var_types = extract_variable_types(content)
    if this_type:
        var_types['this_ptr'] = this_type

    # Find vtable accesses
    accesses = find_vtable_accesses(content)
    if not accesses:
        return []

    issues = []
    for access in accesses:
        union_member = access['union_member']

        # Skip _ub - always valid
        if union_member == '_ub':
            continue

        var_name = access['var_name']
        var_type = var_types.get(var_name)

        if not var_type:
            continue

        # Check if this type is a CDemonActor descendant
        chain = get_ancestor_chain(var_type, hierarchy)
        if 'CDemonActor' not in chain:
            continue

        # Check compatibility
        valid_members = get_valid_union_members(var_type, hierarchy)
        if union_member in valid_members:
            continue

        # Mismatch found!
        correct = suggest_correct_member(var_type, hierarchy)
        method_name = access.get('method')
        correct_method = None
        if method_name:
            correct_method = find_correct_method(
                method_name, union_member, correct, method_maps
            )

        issue = {
            'file': filepath,
            'line_no': access['line_no'],
            'line': access['line'],
            'var_name': var_name,
            'var_type': var_type,
            'union_used': union_member,
            'union_valid': sorted(valid_members),
            'correct_member': correct,
            'method_shown': method_name,
            'method_correct': correct_method,
            'hierarchy_chain': ' -> '.join(chain),
        }
        issues.append(issue)

    return issues


def main():
    import argparse
    parser = argparse.ArgumentParser(
        description='Detect wrong vtable union member accesses in pseudocode')
    parser.add_argument('--verbose', '-v', action='store_true')
    args = parser.parse_args()

    os.makedirs(REPORTS_DIR, exist_ok=True)

    # Build class hierarchy
    hierarchy = build_class_hierarchy()
    print("Class hierarchy: %d classes" % len(hierarchy))

    # Build vtable method maps
    method_maps, absolute_maps = build_vtable_method_maps()
    for member, methods in sorted(method_maps.items()):
        print("  %s: %d methods" % (member, len(methods)))

    # Scan all pseudocode .cpp files
    cpp_files = [f for f in glob.glob(
        os.path.join(PSEUDOCODE_DIR, 'src', '**', '*.cpp'), recursive=True
    ) if os.path.isfile(f)]
    print("Scanning %d .cpp files..." % len(cpp_files))

    all_issues = []
    for filepath in sorted(cpp_files):
        issues = analyze_file(filepath, hierarchy, method_maps)
        all_issues.extend(issues)

    # ---------------------------------------------------------------------------
    # Generate report
    # ---------------------------------------------------------------------------
    lines = []
    lines.append("=" * 100)
    lines.append("VTABLE UNION MEMBER MISMATCH REPORT")
    lines.append("=" * 100)
    lines.append("")
    lines.append("This report identifies pseudocode locations where a UActorVTable union member")
    lines.append("is incompatible with the declared type of the object whose vtable is accessed.")
    lines.append("When Ghidra picks the wrong union member, method names at overlapping offsets")
    lines.append("are resolved from the wrong vtable struct, producing misleading pseudocode.")
    lines.append("")

    # Summary
    lines.append("-" * 100)
    lines.append("SUMMARY")
    lines.append("-" * 100)
    lines.append("")
    lines.append("  Total mismatches found: %d" % len(all_issues))
    lines.append("")

    if not all_issues:
        lines.append("  No mismatches detected.")
    else:
        # Group by union member used
        by_member = defaultdict(list)
        for issue in all_issues:
            by_member[issue['union_used']].append(issue)

        lines.append("  By union member used:")
        for member in sorted(by_member):
            lines.append("    %s (%s): %d" % (
                member, UNION_MEMBER_NAMES.get(member, '?'), len(by_member[member])))
        lines.append("")

        # Group by source file directory (virtual file)
        by_vfile = defaultdict(list)
        for issue in all_issues:
            # Extract virtual file from path
            rel = os.path.relpath(issue['file'], os.path.join(PSEUDOCODE_DIR, 'src'))
            vfile = os.path.dirname(rel)
            by_vfile[vfile].append(issue)

        lines.append("  By source file:")
        for vfile in sorted(by_vfile, key=lambda v: -len(by_vfile[v])):
            lines.append("    %-40s %d mismatches" % (vfile, len(by_vfile[vfile])))
        lines.append("")

        # Group by variable type (the wrongly-typed object)
        by_type = defaultdict(list)
        for issue in all_issues:
            by_type[issue['var_type']].append(issue)

        lines.append("  By object type:")
        for vtype in sorted(by_type, key=lambda t: -len(by_type[t])):
            chain = all_issues[0]['hierarchy_chain']
            for i in by_type[vtype]:
                chain = i['hierarchy_chain']
                break
            lines.append("    %-25s %d mismatches  (%s)" % (
                vtype, len(by_type[vtype]), chain))
        lines.append("")

        # Detailed findings
        lines.append("=" * 100)
        lines.append("DETAILED FINDINGS")
        lines.append("=" * 100)
        lines.append("")

        for vfile in sorted(by_vfile, key=lambda v: -len(by_vfile[v])):
            file_issues = by_vfile[vfile]
            lines.append("-" * 80)
            lines.append("  %s (%d mismatches)" % (vfile, len(file_issues)))
            lines.append("-" * 80)

            # Sub-group by function file
            by_func = defaultdict(list)
            for issue in file_issues:
                by_func[os.path.basename(issue['file'])].append(issue)

            for func_file in sorted(by_func):
                func_issues = by_func[func_file]
                lines.append("")
                lines.append("  %s" % func_file)

                for issue in func_issues:
                    lines.append("    Line %d: %s.vtable.%s  (var type: %s)" % (
                        issue['line_no'], issue['var_name'],
                        issue['union_used'], issue['var_type']))
                    lines.append("      Used:    %s (%s)" % (
                        issue['union_used'],
                        UNION_MEMBER_NAMES.get(issue['union_used'], '?')))
                    lines.append("      Valid:   %s" % ', '.join(issue['union_valid']))
                    lines.append("      Correct: %s (%s)" % (
                        issue['correct_member'],
                        UNION_MEMBER_NAMES.get(issue['correct_member'], '?')))

                    if issue.get('method_shown') and issue.get('method_correct'):
                        lines.append("      Method shown:   %s (from %s)" % (
                            issue['method_shown'], issue['union_used']))
                        lines.append("      Method correct: %s (from %s)" % (
                            issue['method_correct'], issue['correct_member']))
                    elif issue.get('method_shown'):
                        lines.append("      Method: %s" % issue['method_shown'])

                    if args.verbose:
                        lines.append("      Code: %s" % issue['line'])
                        lines.append("      Chain: %s" % issue['hierarchy_chain'])

            lines.append("")

        # Cross-reference table: overlapping method names at same offsets
        lines.append("=" * 100)
        lines.append("OFFSET COLLISION REFERENCE")
        lines.append("=" * 100)
        lines.append("")
        lines.append("Methods at the same absolute vtable offset but in different sub-vtables.")
        lines.append("When the wrong union member is used, one method name appears in place of another.")
        lines.append("")

        # Show collisions where methods from different sub-vtables overlap
        lines.append("  %-8s  %-30s  %-30s" % ("Offset", "CCharacter (_uc)", "CWeapon (_uw)"))
        lines.append("  " + "-" * 72)
        uc_base = 0xec
        uw_base = 0xec
        uc_methods = method_maps.get('_uc', {})
        uw_methods = method_maps.get('_uw', {})
        max_slots = max(len(uc_methods), len(uw_methods))
        for i in range(max_slots):
            rel = i * 4
            abs_off = uc_base + rel
            uc_name = uc_methods.get(rel, '-')
            uw_name = uw_methods.get(rel, '-')
            if uc_name != '-' or uw_name != '-':
                marker = "  <-- COLLISION" if uc_name != '-' and uw_name != '-' else ""
                lines.append("  0x%-6x  %-30s  %-30s%s" % (
                    abs_off, uc_name, uw_name, marker))

        lines.append("")

        # Also show CEnemy vs CHero at 0x154
        lines.append("  %-8s  %-30s  %-30s" % ("Offset", "CEnemy (_ue)", "CHero (_uh)"))
        lines.append("  " + "-" * 72)
        ue_base = 0x154
        uh_base = 0x154
        ue_methods = method_maps.get('_ue', {})
        uh_methods = method_maps.get('_uh', {})
        max_slots = max(len(ue_methods), len(uh_methods))
        for i in range(max_slots):
            rel = i * 4
            abs_off = ue_base + rel
            ue_name = ue_methods.get(rel, '-')
            uh_name = uh_methods.get(rel, '-')
            if ue_name != '-' or uh_name != '-':
                marker = "  <-- COLLISION" if ue_name != '-' and uh_name != '-' else ""
                lines.append("  0x%-6x  %-30s  %-30s%s" % (
                    abs_off, ue_name, uh_name, marker))

        lines.append("")

    report_text = '\n'.join(lines)
    output_path = os.path.join(REPORTS_DIR, 'vtable_union_mismatches.txt')
    with open(output_path, 'w') as f:
        f.write(report_text)

    print(report_text)
    print("\nReport written to: %s" % output_path)


if __name__ == '__main__':
    main()
