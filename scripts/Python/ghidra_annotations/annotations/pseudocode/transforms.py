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
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager


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


# =============================================================================
# CRT FUNCTION TRANSFORMS
# =============================================================================
#
# Maps CRT wrapper function calls to their standard C library equivalents.
# Pattern: crt_{category}_c_{funcname}_FUN_{addr} -> {funcname}
#
# Only well-known standard library functions are transformed.
# Internal CRT implementation functions are left as-is.

# Standard library functions to transform (by category)
CRT_STANDARD_FUNCTIONS = {
    # stdio.h
    'stdio': {
        'fread', 'fwrite', 'fopen', 'fclose', 'fseek', 'ftell', 'fflush', 'rewind',
        'fprintf', 'printf', 'sprintf', 'snprintf', 'vsprintf', 'vfprintf', 'vsnprintf',
        'fgetc', 'fputc', 'fgets', 'fputs', 'getc', 'putc', 'getchar', 'putchar',
        'scanf', 'sscanf', 'fscanf', 'vfscanf', 'vsscanf',
        'remove', 'rename', 'tmpfile', 'tmpnam',
        'setvbuf', 'setbuf', 'ungetc', 'feof', 'ferror', 'clearerr', 'perror',
    },
    # string.h
    'string': {
        'strlen', 'strcpy', 'strncpy', 'strcat', 'strncat',
        'strcmp', 'strncmp', 'stricmp', 'strnicmp', '_stricmp', '_strnicmp',
        'strchr', 'strrchr', 'strstr', 'strpbrk', 'strspn', 'strcspn', 'strtok',
        'memcpy', 'memset', 'memmove', 'memcmp', 'memchr',
        'strdup', '_strdup', 'strlwr', 'strupr', '_strlwr', '_strupr',
    },
    # stdlib.h
    'stdlib': {
        'malloc', 'free', 'realloc', 'calloc',
        'atoi', 'atol', 'atof', 'strtol', 'strtoul', 'strtod',
        'abs', 'labs', 'div', 'ldiv',
        'rand', 'srand',
        'exit', 'atexit', 'abort', 'getenv', 'system',
        'qsort', 'bsearch',
    },
    # math.h
    'math': {
        'sin', 'cos', 'tan', 'asin', 'acos', 'atan', 'atan2',
        'sinh', 'cosh', 'tanh',
        'sqrt', 'pow', 'exp', 'log', 'log10',
        'ceil', 'floor', 'round', 'fabs', 'fmod',
        'ldexp', 'frexp', 'modf',
    },
    # ctype.h
    'ctype': {
        'isalpha', 'isdigit', 'isalnum', 'isspace', 'isupper', 'islower',
        'isprint', 'isgraph', 'iscntrl', 'ispunct', 'isxdigit',
        'toupper', 'tolower',
    },
    # memory.h (often same as string.h but some compilers separate)
    'memory': {
        'memcpy', 'memset', 'memmove', 'memcmp', 'memchr',
    },
    # time.h
    'time': {
        'time', 'clock', 'difftime', 'mktime',
        'localtime', 'gmtime', 'asctime', 'ctime', 'strftime',
    },
    # io.h / unistd.h
    'io': {
        'open', 'close', 'read', 'write', 'lseek',
        'access', 'chmod', 'unlink', 'dup', 'dup2',
        'isatty', 'filelength', 'tell', 'eof',
    },
}

# Build a flat set of all standard function names for quick lookup
_ALL_CRT_STANDARD_FUNCTIONS = set()
for funcs in CRT_STANDARD_FUNCTIONS.values():
    _ALL_CRT_STANDARD_FUNCTIONS.update(funcs)


def transform_crt_functions(code):
    """Transform CRT wrapper function calls to clean function names.

    Converts patterns like:
        crt_stdio_c_fread_FUN_005fd990(buffer, size, count, file)
    To:
        fread(buffer, size, count, file)

    Transforms ALL CRT function calls, removing the crt_{category}_c_ prefix
    and _FUN_{addr} suffix to produce clean, readable function names.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with CRT wrappers replaced by clean names
    """
    # Pattern matches: crt_{category}_c_{funcname}_FUN_{hexaddr}
    # Captures the function name to use as replacement
    pattern = r'\bcrt_[a-z]+_c_([a-zA-Z_][a-zA-Z0-9_]*)_FUN_[0-9a-fA-F]+\b'

    def replace_crt_call(match):
        func_name = match.group(1)
        return func_name

    return re.sub(pattern, replace_crt_call, code)


def transform_file_pointer_casts(code):
    """Transform stdio function calls to use _FILE* wrapper functions.

    Ghidra exports the Watcom _FILE struct, but standard library functions
    expect FILE*. Instead of adding casts everywhere, we rename the function
    calls to use wrapper functions defined in crt.h that handle the conversion.

    Transforms:
        fread(...) -> _fread(...)
        fclose(...) -> _fclose(...)
        etc.

    The wrapper functions in crt.h take _FILE* and internally convert to FILE*.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with stdio functions renamed to wrapper versions
    """
    # All stdio functions that take FILE* arguments
    file_funcs = [
        'fread', 'fwrite', 'fgets', 'fputs', 'fputc', 'fgetc', 'ungetc',
        'fclose', 'ftell', 'fflush', 'feof', 'ferror', 'rewind',
        'fprintf', 'fscanf', 'fseek', 'fsetpos', 'fgetpos', 'setvbuf', 'setbuf',
    ]

    result = code

    # Rename each function call: func( -> _func(
    # Use word boundary to avoid matching partial names or already-prefixed functions
    for func in file_funcs:
        # Match function name followed by ( but not already prefixed with _
        # Negative lookbehind ensures we don't match _fread, etc.
        pattern = r'(?<!_)\b' + func + r'\s*\('
        replacement = '_' + func + '('
        result = re.sub(pattern, replacement, result)

    return result


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
        ('crt_functions', transform_crt_functions),
        ('file_pointer_casts', transform_file_pointer_casts),
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


# Cache managers for per-function configuration
replacements_cache = JsonCacheManager('replacements', json_key='replacements',
                                       default_factory=list, type_check=list)
pcode_overrides_cache = JsonCacheManager('pcode_overrides', json_key='pcode_overrides',
                                          default_factory=dict, type_check=dict)
