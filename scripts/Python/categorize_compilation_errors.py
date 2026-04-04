#!/usr/bin/env python3
"""
Categorize compilation errors from compilation_by_function.txt into:
  - FIXABLE: errors that can be resolved with a .keep.cpp file edit
  - HARD: mixed errors, might be fixable with effort
  - JUNK: decompilation is too mangled to fix without Ghidra-side changes

Heuristics:
  JUNK indicators:
    - float<->pointer cast errors (stack slot reuse, unfixable in C++)
    - function-type-to-data-pointer assignments (decompiler confused variables)
    - 'code' undeclared + syntax errors (decompiler emitted garbage tokens)
    - high error count (>=10) with diverse error types

  FIXABLE indicators:
    - only format_error (printf format string mismatches)
    - only 1-2 undeclared_identifier with stack vars (single missing decl)
    - only simple type_error or incompatible_types (cast fixable)
    - low error count with single error category

  HARD: everything else
"""

import re
import sys
from collections import Counter
from pathlib import Path


def parse_report(report_path):
    """Parse compilation_by_function.txt into per-function error lists."""
    functions = {}
    current_func = None
    current_errors = []

    with open(report_path) as f:
        for line in f:
            line = line.rstrip()

            # Match function header: name (N errors)
            m = re.match(r'^(\S+)\s+\((\d+)\s+errors?\)', line)
            if m:
                if current_func:
                    functions[current_func] = current_errors
                current_func = m.group(1)
                current_errors = []
                continue

            # Match error line
            m = re.match(r'^\s+Line\s+(\d+)\s+\[(\w+)\]:\s+(.*)', line)
            if m:
                current_errors.append({
                    'line': int(m.group(1)),
                    'type': m.group(2),
                    'message': m.group(3),
                })

    if current_func:
        functions[current_func] = current_errors

    return functions


# Patterns that indicate junk decompilation
FLOAT_PTR_CAST = re.compile(
    r"cast from type 'float' to pointer type"
    r"|C-style cast from '.*\*' to 'float'"
    r"|C-style cast from 'float' to '(?!int|uint|double|long|short|char\b|unsigned)"  # float to non-numeric
    r"|C-style cast from '.*' to 'float' is not allowed"
)

FUNC_TYPE_ASSIGN = re.compile(
    r"from incompatible type 'float \(.*\)'"
    r"|from incompatible type '.*\(.*\)\s*\*?'"
)

GARBAGE_TOKEN = re.compile(
    r"use of undeclared identifier 'code'"
)


def categorize(func_name, errors):
    """Categorize a function's errors. Returns (category, reasons)."""
    error_types = Counter(e['type'] for e in errors)
    n_errors = len(errors)
    n_types = len(error_types)
    reasons = []

    # --- JUNK checks ---

    # Float<->pointer casts (stack slot reuse)
    float_ptr_casts = [e for e in errors if FLOAT_PTR_CAST.search(e['message'])]
    if float_ptr_casts:
        reasons.append(f"float<->pointer cast errors ({len(float_ptr_casts)}x) - stack slot reuse")

    # Function type assigned to data pointer
    func_assigns = [e for e in errors if FUNC_TYPE_ASSIGN.search(e['message'])]
    if func_assigns:
        reasons.append(f"function-type-to-data assignment ({len(func_assigns)}x)")

    # Garbage tokens from decompiler
    garbage = [e for e in errors if GARBAGE_TOKEN.search(e['message'])]
    if garbage:
        reasons.append("decompiler emitted garbage tokens ('code' identifier)")

    # High error count with diverse types
    if n_errors >= 10 and n_types >= 3:
        reasons.append(f"high error count ({n_errors}) with {n_types} different error types")

    if reasons:
        return 'JUNK', reasons

    # --- FIXABLE checks ---

    # Only format errors
    if n_types == 1 and 'format_error' in error_types:
        return 'FIXABLE', ['only format string errors']

    # Only 1-2 stack undeclared identifiers
    stack_undecl = [e for e in errors if e['type'] == 'undeclared_identifier'
                    and 'stack0x' in e['message']]
    if n_types == 1 and error_types.get('undeclared_identifier', 0) <= 3 and len(stack_undecl) == n_errors:
        return 'FIXABLE', [f'only {n_errors} stack variable declaration(s) needed']

    # Single simple error
    if n_errors == 1:
        etype = errors[0]['type']
        if etype in ('format_error', 'type_error', 'pointer_type', 'pointer_precision',
                      'argument_error', 'missing_member'):
            return 'FIXABLE', [f'single {etype}']
        if etype == 'undeclared_identifier' and 'stack0x' in errors[0]['message']:
            return 'FIXABLE', ['single stack variable declaration needed']
        if etype == 'undeclared_identifier':
            return 'HARD', [f"undeclared identifier: {errors[0]['message']}"]
        if etype == 'incompatible_types':
            return 'HARD', [f"single incompatible_types: {errors[0]['message']}"]

    # Only format_error + a few others that are simple
    if all(e['type'] in ('format_error', 'pointer_type', 'pointer_precision') for e in errors):
        return 'FIXABLE', ['only format/pointer-width errors']

    # Low error count, single type
    if n_errors <= 3 and n_types == 1:
        etype = list(error_types.keys())[0]
        if etype == 'format_error':
            return 'FIXABLE', [f'{n_errors} format errors']
        if etype in ('type_error', 'incompatible_types'):
            return 'HARD', [f'{n_errors} {etype} errors']

    # --- HARD: everything else ---
    type_summary = ', '.join(f'{t}:{c}' for t, c in error_types.most_common())
    return 'HARD', [f'{n_errors} errors ({type_summary})']


def main():
    report_path = Path(__file__).resolve().parents[2] / \
        'annotations/nocedit.exe/reports/compilation_by_function.txt'

    if len(sys.argv) > 1:
        report_path = Path(sys.argv[1])

    functions = parse_report(report_path)

    # Categorize all
    results = {}
    for func, errors in functions.items():
        cat, reasons = categorize(func, errors)
        results[func] = (cat, reasons, len(errors))

    # Count by category
    cats = Counter(cat for cat, _, _ in results.values())

    # Output
    print("=" * 100)
    print("FUNCTION COMPILATION ERROR CATEGORIES")
    print("=" * 100)
    print()
    print("SUMMARY")
    print("-" * 50)
    print(f"Total failing functions: {len(results)}")
    for cat in ('FIXABLE', 'HARD', 'JUNK'):
        count = cats.get(cat, 0)
        pct = 100 * count / len(results) if results else 0
        print(f"  {cat:8s}: {count:4d} ({pct:.1f}%)")
    print()

    # Print each category
    for cat in ('FIXABLE', 'HARD', 'JUNK'):
        funcs_in_cat = [(f, r, n) for f, (c, r, n) in sorted(results.items()) if c == cat]
        print("=" * 100)
        print(f"{cat} ({len(funcs_in_cat)} functions)")
        print("=" * 100)
        for func, reasons, n_errors in funcs_in_cat:
            print(f"  {func} ({n_errors} errors)")
            for r in reasons:
                print(f"    -> {r}")
        print()

    # Write machine-readable output
    out_path = report_path.parent / 'compilation_categories.txt'
    with open(out_path, 'w') as f:
        f.write("# Function compilation error categories\n")
        f.write(f"# Generated from: {report_path.name}\n")
        f.write(f"# Total: {len(results)} failing | "
                f"FIXABLE: {cats.get('FIXABLE',0)} | "
                f"HARD: {cats.get('HARD',0)} | "
                f"JUNK: {cats.get('JUNK',0)}\n")
        f.write("#\n")
        f.write("# Format: CATEGORY | error_count | function_name | reasons\n")
        f.write("#\n")
        for cat in ('FIXABLE', 'HARD', 'JUNK'):
            for func, (c, reasons, n) in sorted(results.items()):
                if c == cat:
                    f.write(f"{cat} | {n:3d} | {func} | {'; '.join(reasons)}\n")

    print(f"Machine-readable output written to: {out_path}")


if __name__ == '__main__':
    main()
