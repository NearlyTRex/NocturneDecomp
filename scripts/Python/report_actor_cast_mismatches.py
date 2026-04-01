#!/usr/bin/env python3
"""
Detect actor pointer type mismatches from class-aware resolution functions.

Standalone wrapper that imports just the report module directly (without
pulling in the full ghidra_annotations package which requires Ghidra).

Usage:
    python3 report_actor_cast_mismatches.py
"""

import os
import sys
import importlib.util

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(SCRIPT_DIR))
ANNOTATIONS_DIR = os.path.join(REPO_ROOT, 'annotations', 'nocedit.exe')
PSEUDOCODE_DIR = os.path.join(ANNOTATIONS_DIR, 'pseudocode')
REPORTS_DIR = os.path.join(ANNOTATIONS_DIR, 'reports')

# Load just the report module directly to avoid Ghidra dependencies.
# First, create a minimal stub for the log dependency.
import types
log_mod = types.ModuleType('ghidra_annotations.util.log')
log_mod.log_info = print
sys.modules['ghidra_annotations'] = types.ModuleType('ghidra_annotations')
sys.modules['ghidra_annotations.util'] = types.ModuleType('ghidra_annotations.util')
sys.modules['ghidra_annotations.util.log'] = log_mod

spec = importlib.util.spec_from_file_location(
    'actor_cast_report',
    os.path.join(SCRIPT_DIR, 'ghidra_annotations', 'annotations', 'pseudocode', 'actor_cast_report.py'))
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

if __name__ == '__main__':
    os.makedirs(REPORTS_DIR, exist_ok=True)
    pseudocode_src_dir = os.path.join(PSEUDOCODE_DIR, 'src')
    mod.generate_actor_cast_report(pseudocode_src_dir, REPORTS_DIR)
