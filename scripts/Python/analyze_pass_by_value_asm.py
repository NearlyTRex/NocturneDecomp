#!/usr/bin/env python3
"""
Detect pass-by-value struct arguments from assembly.

Scans .asm files for the pattern where structs are bulk-copied onto the stack
(via REP MOVSD with MOV EDI,ESP) before a CALL instruction, indicating the
callee takes the struct by value rather than by reference.

Report is grouped by callee function (the actionable target for signature fixes).

Usage:
    python3 analyze_pass_by_value_asm.py <asm_dir>
    python3 analyze_pass_by_value_asm.py <asm_dir> -f <caller_name>
    python3 analyze_pass_by_value_asm.py <asm_dir> --callee <callee_name>
    python3 analyze_pass_by_value_asm.py <asm_dir> --json
"""

import argparse
import importlib.util
import json
import os
import sys

# Direct module loading to avoid Ghidra-dependent imports in package __init__
this_dir = os.path.dirname(os.path.abspath(__file__))

def load_module_direct(module_name, file_path):
    """Load a Python module directly from file path."""
    spec = importlib.util.spec_from_file_location(module_name, file_path)
    module = importlib.util.module_from_spec(spec)
    sys.modules[module_name] = module
    spec.loader.exec_module(module)
    return module

# Load pass_by_value module
pbv_path = os.path.join(this_dir, 'ghidra_annotations', 'annotations', 'pseudocode', 'pass_by_value.py')
pbv = load_module_direct('ghidra_annotations.annotations.pseudocode.pass_by_value', pbv_path)


def main():
    parser = argparse.ArgumentParser(description='Detect pass-by-value struct arguments from assembly')
    parser.add_argument('asm_dir', help='Directory containing .asm files')
    parser.add_argument('-f', '--caller', help='Show only call sites within a specific caller')
    parser.add_argument('--callee', help='Show only a specific callee\'s details')
    parser.add_argument('--json', action='store_true', help='Output as JSON')
    args = parser.parse_args()

    call_sites, total_movsd, pbv_count = pbv.analyze_asm_directory(args.asm_dir)

    if args.json:
        print(json.dumps(pbv.to_json(call_sites, total_movsd, pbv_count), indent=2))
    elif args.caller:
        print(pbv.format_caller_detail(call_sites, args.caller))
    elif args.callee:
        print(pbv.format_callee_detail(call_sites, args.callee))
    else:
        print(pbv.format_report(call_sites, total_movsd, pbv_count))


if __name__ == '__main__':
    main()
