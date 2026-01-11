# Post-processing transforms for auto-fixable suspect patterns
# Applies automatic fixes to decompiled code before output
#
# This module also handles P-code overrides for manual decompiler fixes.

"""
================================================================================
P-CODE OVERRIDES
================================================================================

P-code overrides allow replacing the P-code generated for specific instructions
during decompilation. This is the most powerful fix mechanism, allowing you to
completely change how an instruction is interpreted by the decompiler.

This is useful for:
- Fixing BADSPACEBASE errors by providing correct stack pointer adjustments
- Correcting ESP tracking after calls with non-standard calling conventions
- Replacing problematic instructions with semantically equivalent P-code
- Working around decompiler bugs or limitations

NOTE: P-code overrides are ONLY per-function. There is no global P-code
overrides file because overrides are specific to instruction addresses within
a particular function.

================================================================================
PER-FUNCTION PCODE_OVERRIDES (in function JSON files)
================================================================================

Location:
    annotations/<program>/pseudocode/src/<function_name>.json

P-code overrides are stored in the function's JSON file and specify replacement
P-code for specific instruction addresses within that function.

JSON Format (inside function JSON):
    {
        "function": { ... },
        "pcode_overrides": {
            "<instruction_address>": [
                "<pcode_op_1>",
                "<pcode_op_2>",
                ...
            ]
        },
        ...other function data...
    }

Fields:
    - instruction_address: Hex address of the instruction to override (e.g., "0x005a20b7")
    - pcode_ops: List of P-code operations that replace the original instruction's P-code

Example (FUN_005a2000.json):
    {
        "function": {
            "name": "FUN_005a2000",
            "address": "0x005a2000"
        },
        "pcode_overrides": {
            "0x005a20b7": [
                "COPY (register,0x200,1) = (const,0x0,1)",
                "INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)"
            ],
            "0x005a20c0": [
                "INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x8,4)"
            ]
        }
    }

================================================================================
P-CODE FORMAT
================================================================================

P-code operations use the format:
    OPCODE (output_varnode) = (input1), (input2), ...

For operations without output (like STORE or BRANCH):
    OPCODE (input1), (input2), ...

Varnode format: (space, offset, size)
    - register: (register, <offset>, <size>)
        - ESP: (register, 0x10, 4)
        - EAX: (register, 0x0, 4)
        - ECX: (register, 0x4, 4)
        - EDX: (register, 0x8, 4)
        - EBX: (register, 0xc, 4)
        - EBP: (register, 0x14, 4)
    - const: (const, <value>, <size>)
        - (const, 0x4, 4) = 4-byte constant with value 4
    - unique: (unique, <offset>, <size>)
        - Temporary storage for intermediate values
    - ram: (ram, <address>, <size>)
        - Memory at specific address

Common opcodes:
    - COPY: Copy value between varnodes
    - INT_ADD: Add two integers
    - INT_SUB: Subtract two integers
    - INT_AND, INT_OR, INT_XOR: Bitwise operations
    - INT_MULT, INT_DIV: Multiplication/division
    - INT_SEXT, INT_ZEXT: Sign/zero extension
    - LOAD: Load from memory
    - STORE: Store to memory
    - BRANCH, CBRANCH: Control flow
    - CALL, RETURN: Function calls

Example - Fix ESP after a call that pops extra arguments:
    "0x00401234": [
        "INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x8,4)"
    ]
    This adds 8 to ESP after the instruction at 0x00401234.

Example - Clear a register:
    "0x00401234": [
        "COPY (register,0x0,4) = (const,0x0,4)"
    ]
    This sets EAX to 0.

================================================================================
CUSTOM TEXT REPLACEMENTS
================================================================================

Custom text replacements allow string substitutions in the decompiled output.
These are simpler than P-code overrides and work on the final text output.

JSON Format (inside function JSON):
    {
        "function": { ... },
        "replacements": [
            {
                "find": "<text to find>",
                "replace": "<replacement text>",
                "regex": false,
                "description": "optional description"
            }
        ]
    }

Fields:
    - find: The text to search for (or regex pattern if regex=true)
    - replace: The replacement text
    - regex: If true, treat "find" as a regex pattern (default: false)
    - description: Optional human-readable description

Example:
    {
        "replacements": [
            {
                "find": "CONCAT44(local_18,uStack_1c)",
                "replace": "dLocalDouble",
                "description": "Replace split double with combined variable"
            },
            {
                "find": "in_stack_00000008",
                "replace": "param_2",
                "description": "Fix missing parameter"
            }
        ]
    }
"""

import os
import json as json_module
import re

from ghidra_annotations.util.log import log_info


# Type replacement mappings for undefined types
UNDEFINED_TYPE_REPLACEMENTS = {
    'undefined1': 'byte',
    'undefined2': 'ushort',
    'undefined4': 'uint',
    'undefined8': 'ulonglong',
    'undefined': 'byte',
}

# Pointer cast replacements
UNDEFINED_PTR_CAST_REPLACEMENTS = {
    '(undefined1 *)': '(byte *)',
    '(undefined2 *)': '(ushort *)',
    '(undefined4 *)': '(uint *)',
    '(undefined8 *)': '(ulonglong *)',
    '(undefined *)': '(byte *)',
    '(undefined1*)': '(byte*)',
    '(undefined2*)': '(ushort*)',
    '(undefined4*)': '(uint*)',
    '(undefined8*)': '(ulonglong*)',
    '(undefined*)': '(byte*)',
}


def transform_undefined_pointer_casts(code):
    """Replace undefined pointer casts with proper typed casts.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with undefined casts replaced
    """
    result = code
    for old, new in UNDEFINED_PTR_CAST_REPLACEMENTS.items():
        result = result.replace(old, new)
    return result


def transform_undefined_types(code):
    """Replace undefined type declarations with proper types.

    This transforms patterns like:
        undefined4 local_var;
    To:
        uint local_var;

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with undefined types replaced
    """
    result = code
    # Use word boundary to avoid partial replacements
    for old, new in UNDEFINED_TYPE_REPLACEMENTS.items():
        # Replace type declarations (undefined4 varname)
        pattern = r'\b' + re.escape(old) + r'\b'
        result = re.sub(pattern, new, result)
    return result


def transform_concat_artifacts(code):
    """Add clarifying comments to CONCAT artifacts.

    CONCAT44, CONCAT22, etc. are Ghidra artifacts where the decompiler
    is combining two values into a larger type (like making a double from
    two ints, or a longlong from two ints).

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with CONCAT artifacts annotated
    """
    # Pattern matches CONCAT followed by digits (e.g., CONCAT44, CONCAT22)
    pattern = r'\bCONCAT(\d+)\b'

    def replace_concat(match):
        full_match = match.group(0)
        digits = match.group(1)
        # Add inline comment explaining what this is
        return '%s /* combine %d-byte values */' % (full_match, len(digits))

    result = re.sub(pattern, replace_concat, code)
    return result


def transform_sub_artifacts(code):
    """Add clarifying comments to SUB artifacts.

    SUB84, SUB42, etc. are Ghidra artifacts where the decompiler
    is extracting a smaller value from a larger type.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with SUB artifacts annotated
    """
    # Pattern matches SUB followed by digits (e.g., SUB84, SUB42)
    pattern = r'\bSUB(\d+)\b'

    def replace_sub(match):
        full_match = match.group(0)
        digits = match.group(1)
        # Add inline comment explaining what this is
        return '%s /* extract %d-byte value */' % (full_match, len(digits))

    result = re.sub(pattern, replace_sub, code)
    return result


def transform_sborrow_artifacts(code):
    """Add clarifying comments to SBORROW artifacts.

    SBORROW is a Ghidra artifact for signed borrow detection in subtraction.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with SBORROW artifacts annotated
    """
    result = code.replace('SBORROW', 'SBORROW /* signed borrow */')
    return result


def transform_register_params(code):
    """Add clarifying comments to inferred register parameters.

    Patterns like in_EAX, in_ECX indicate Ghidra inferred register parameters
    that aren't part of the standard calling convention.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with register param comments
    """
    # Pattern matches in_XX or in_XXX where XX/XXX is 2-3 uppercase letters
    pattern = r'\b(in_[A-Z]{2,3})\b'

    def replace_reg(match):
        reg_name = match.group(1)
        # Only add comment on first occurrence per line to avoid clutter
        return reg_name

    # We'll just leave these as-is for now since adding comments everywhere
    # would be too noisy. The detection still marks them as suspects.
    return code


def apply_all_transforms(code, transforms=None):
    """Apply all or specified transforms to decompiled code.

    Args:
        code: Decompiled code string
        transforms: Optional list of transform names to apply.
                   If None, applies all safe transforms.

    Returns:
        Transformed code
    """
    # Default transforms that are safe to apply automatically
    default_transforms = [
        ('undefined_ptr_cast', transform_undefined_pointer_casts),
        ('undefined_type', transform_undefined_types),
        ('concat_artifact', transform_concat_artifacts),
        ('sub_artifact', transform_sub_artifacts),
        ('sborrow_artifact', transform_sborrow_artifacts),
    ]

    if transforms is None:
        transforms_to_apply = default_transforms
    else:
        transforms_to_apply = [
            (name, func) for name, func in default_transforms
            if name in transforms
        ]

    result = code
    for name, transform_func in transforms_to_apply:
        result = transform_func(result)

    return result


def count_auto_fixable_suspects(suspects):
    """Count how many suspects can be auto-fixed by transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        Tuple of (auto_fixable_count, total_count)
    """
    auto_fixable_types = {
        'undefined_ptr_cast',
        'undefined_type',
        'concat_artifact',
        'sub_artifact',
        'sborrow_artifact',
    }

    auto_fixable = sum(1 for s in suspects if s.get('type') in auto_fixable_types)
    return (auto_fixable, len(suspects))


def get_remaining_suspects_after_transforms(suspects):
    """Get suspects that will remain after auto-transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        List of suspects that cannot be auto-fixed
    """
    auto_fixable_types = {
        'undefined_ptr_cast',
        'undefined_type',
        'concat_artifact',
        'sub_artifact',
        'sborrow_artifact',
    }

    return [s for s in suspects if s.get('type') not in auto_fixable_types]


def apply_custom_replacements(code, replacements):
    """Apply custom text replacements from JSON config.

    Custom replacements allow manual fixes for patterns that can't be
    auto-detected. The replacements list contains dicts with:
    - 'find': The exact text to find (or regex if 'regex' is True)
    - 'replace': The replacement text
    - 'regex': Optional bool, if True treats 'find' as regex pattern
    - 'description': Optional description of what this fixes

    Args:
        code: Decompiled code string
        replacements: List of replacement dicts from JSON

    Returns:
        Transformed code with custom replacements applied
    """
    if not replacements:
        return code

    result = code
    for repl in replacements:
        find_text = repl.get('find', '')
        replace_text = repl.get('replace', '')
        use_regex = repl.get('regex', False)

        if not find_text:
            continue

        if use_regex:
            result = re.sub(find_text, replace_text, result)
        else:
            result = result.replace(find_text, replace_text)

    return result


# Cache for custom replacements to avoid repeated file I/O
_replacements_cache = {}
_replacements_cache_dir = None

# Cache for pcode overrides to avoid repeated file I/O
_pcode_overrides_cache = {}
_pcode_overrides_cache_dir = None


def set_pcode_overrides_cache(json_path, overrides):
    """Set a pcode overrides entry in the cache.

    Called by register_pcode_overrides in exporter.py to populate cache
    while registering overrides with the decompiler.

    Args:
        json_path: Path to the JSON file
        overrides: Dict of pcode overrides
    """
    global _pcode_overrides_cache
    _pcode_overrides_cache[json_path] = overrides


def preload_custom_replacements(base_dir):
    """Pre-load all custom replacements from JSON files in a directory.

    Call this once before processing functions to cache all replacements.
    Recursively scans all subdirectories.

    Args:
        base_dir: Directory containing function JSON files
    """
    global _replacements_cache, _replacements_cache_dir
    _replacements_cache = {}
    _replacements_cache_dir = base_dir

    if not base_dir or not os.path.exists(base_dir):
        return

    # Recursively scan for all .json files and load their replacements
    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if filename.endswith('.json'):
                    json_path = os.path.join(root, filename)
                    try:
                        with open(json_path, 'r') as f:
                            data = json_module.load(f)
                            replacements = data.get('replacements', [])
                            if replacements:
                                log_info("Preloaded %d replacements from %s" % (len(replacements), json_path))
                                _replacements_cache[json_path] = replacements
                    except Exception:
                        pass
    except Exception:
        pass


def load_custom_replacements(json_path):
    """Load custom replacements from an existing JSON file.

    Looks for a 'replacements' key in the JSON that contains a list
    of replacement specifications.

    Uses cache if preload_custom_replacements was called.

    Args:
        json_path: Path to the function's JSON file

    Returns:
        List of replacement dicts, or empty list if none found
    """
    global _replacements_cache

    if not json_path:
        return []

    # Use cache if available
    if json_path in _replacements_cache:
        log_info("Found %d replacements in cache for %s" % (len(_replacements_cache[json_path]), json_path))
        return _replacements_cache[json_path]

    # Fallback to file I/O (handles cache misses and path mismatches)
    if not os.path.exists(json_path):
        return []

    try:
        with open(json_path, 'r') as f:
            data = json_module.load(f)
            replacements = data.get('replacements', [])
            if replacements:
                log_info("Loaded %d replacements from disk for %s" % (len(replacements), json_path))
            return replacements
    except Exception:
        return []


# Example JSON format for custom replacements:
# {
#   "replacements": [
#     {
#       "find": "CONCAT44 /* combine 2-byte values */(local_18,uStack_1c)",
#       "replace": "dLocalDouble",
#       "description": "Replace split double with combined variable"
#     },
#     {
#       "find": "in_stack_00000008",
#       "replace": "param_2",
#       "description": "Fix missing parameter"
#     },
#     {
#       "find": "extraout_EDX",
#       "replace": "/* EDX from prev call */",
#       "description": "Annotate extra output register"
#     }
#   ]
# }


def preload_pcode_overrides(base_dir):
    """Pre-load all pcode overrides from JSON files in a directory.

    Call this once before processing functions to cache all pcode overrides.
    Recursively scans all subdirectories.

    Args:
        base_dir: Directory containing function JSON files
    """
    global _pcode_overrides_cache, _pcode_overrides_cache_dir
    _pcode_overrides_cache = {}
    _pcode_overrides_cache_dir = base_dir

    if not base_dir or not os.path.exists(base_dir):
        return

    # Recursively scan for all .json files and load their pcode_overrides
    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if filename.endswith('.json'):
                    json_path = os.path.join(root, filename)
                    try:
                        with open(json_path, 'r') as f:
                            data = json_module.load(f)
                            pcode_overrides = data.get('pcode_overrides')
                            if pcode_overrides and isinstance(pcode_overrides, dict):
                                log_info("Preloaded %d pcode overrides from %s" % (len(pcode_overrides), json_path))
                                _pcode_overrides_cache[json_path] = pcode_overrides
                    except Exception:
                        pass
    except Exception:
        pass


def load_pcode_overrides(json_path):
    """Load pcode overrides from an existing JSON file.

    Looks for a 'pcode_overrides' key in the JSON that contains a dict
    mapping instruction addresses to lists of pcode operations.

    Uses cache if preload_pcode_overrides was called.

    Args:
        json_path: Path to the function's JSON file

    Returns:
        Dict of pcode overrides, or empty dict if none found
    """
    global _pcode_overrides_cache

    if not json_path:
        return {}

    # Use cache if available
    if json_path in _pcode_overrides_cache:
        log_info("Found %d pcode overrides in cache for %s" % (len(_pcode_overrides_cache[json_path]), json_path))
        return _pcode_overrides_cache[json_path]

    # Fallback to file I/O (handles cache misses and path mismatches)
    if not os.path.exists(json_path):
        return {}

    try:
        with open(json_path, 'r') as f:
            data = json_module.load(f)
            pcode_overrides = data.get('pcode_overrides')
            if pcode_overrides and isinstance(pcode_overrides, dict):
                log_info("Loaded %d pcode overrides from disk for %s" % (len(pcode_overrides), json_path))
                return pcode_overrides
            return {}
    except Exception:
        return {}


# Example JSON format for pcode overrides:
# {
#   "pcode_overrides": {
#     "0x005a20b7": [
#       "COPY (register,0x200,1) = (const,0x0,1)",
#       "INT_SUB (register,0x10,4) /* ESP */ = (register,0x10,4) /* ESP */, (const,0x4,4)"
#     ]
#   }
# }
