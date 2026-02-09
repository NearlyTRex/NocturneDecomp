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

# Suspect types that can be automatically fixed by transforms
# Used by count_auto_fixable_suspects() and get_remaining_suspects_after_transforms()
AUTO_FIXABLE_SUSPECT_TYPES = {
    'undefined_ptr_cast',
    'undefined_type',
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
    # Pattern matches: crt_{category}_c_{funcname} with optional _FUN_{hexaddr} suffix
    # Categories may contain digits (e.g., wsock32, ddraw) and the _FUN_ suffix
    # is absent on DLL import functions (wsock32, ddraw, dsound, etc.)
    # The funcname capture uses *? (non-greedy) so _FUN_ suffix is matched separately
    pattern = r'\bcrt_[a-z0-9]+_c_([a-zA-Z_][a-zA-Z0-9_]*?)(?:_FUN_[0-9a-fA-F]+)?\b'

    def replace_crt_call(match):
        func_name = match.group(1)
        return func_name

    return re.sub(pattern, replace_crt_call, code)


# =============================================================================
# VOID POINTER CAST TRANSFORM
# =============================================================================
#
# C++ requires explicit casts from void* to typed pointers, but C doesn't.
# The decompiler output (targeting C++) omits these casts since the original
# code was C. This transform inserts C-style casts for known void*-returning
# functions (allocators and castToClassHash).

# Primitive types that should NOT receive void* casts
_VOID_CAST_PRIMITIVE_TYPES = {
    'int', 'uint', 'char', 'uchar', 'short', 'ushort', 'long', 'ulong',
    'float', 'double', 'void', 'byte', 'bool',
    'undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8',
    'size_t', 'SIZE_T', 'time_t', 'wchar_t',
    'longlong', 'ulonglong',
}

# Regex for allocator functions that return void*
_ALLOCATOR_FUNC_RE = re.compile(
    r'(?:shape_memdbg_cpp_debug(?:Alloc|Malloc|Calloc|Realloc)_FUN_[0-9a-f]+'
    r'|__arrfini'
    r')\s*\('
)

# Regex for castToClassHash calls
_CAST_TO_CLASS_HASH_RE = re.compile(
    r'(core_actor_cpp_castToClassHash_FUN_[0-9a-f]+)\s*\('
)

# Regex to extract class name from g_C<ClassName>ClassInfo
_CLASS_INFO_ARG_RE = re.compile(r'g_(C\w+?)ClassInfo\b')


def _parse_variable_types(code):
    """Parse variable declarations from the function body.

    Ghidra always declares locals at the top of the function body.
    Builds a map of variable name -> base type string.

    Args:
        code: Decompiled code string (function body)

    Returns:
        Dict mapping variable names to their declared type (e.g. "CAmmo *")
    """
    var_types = {}
    # Match declarations like: TypeName *pVar1; or TypeName **ppVar2;
    # Also handles: TypeName * pVar1; (space before var name)
    # The type is everything before the last whitespace+varname;
    decl_pattern = re.compile(
        r'^\s+'                    # leading whitespace (indented = inside function body)
        r'([\w:][\w:\s]*?)'       # type name (may include spaces for "unsigned int" etc.)
        r'\s*'
        r'(\*{1,3})'              # pointer stars (1-3)
        r'\s*'
        r'(\w+)'                  # variable name
        r'\s*;',                   # semicolon
        re.MULTILINE
    )
    for m in decl_pattern.finditer(code):
        type_name = m.group(1).strip()
        stars = m.group(2)
        var_name = m.group(3)
        # Store as "TypeName *" or "TypeName **"
        var_types[var_name] = type_name + ' ' + stars
    return var_types


def _is_primitive_pointer_type(type_str):
    """Check if a type string is a pointer to a primitive type.

    Args:
        type_str: Type string like "CAmmo *" or "uint *"

    Returns:
        True if the base type is primitive
    """
    # Strip pointer stars and whitespace to get base type
    base = type_str.replace('*', '').strip()
    return base in _VOID_CAST_PRIMITIVE_TYPES


def transform_void_pointer_casts(code):
    """Insert C-style casts for void*-returning functions assigned to typed pointers.

    C++ requires explicit casts from void* to T*, but the decompiler omits them.
    This transform handles:
    1. Allocator functions (debugAlloc, debugMalloc, etc.) - cast based on LHS type
    2. castToClassHash calls - cast based on g_C<X>ClassInfo argument

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with void* casts inserted
    """
    var_types = _parse_variable_types(code)
    if not var_types:
        return code

    lines = code.split('\n')
    result = []

    for line in lines:
        new_line = _transform_void_cast_line(line, var_types)
        result.append(new_line)

    return '\n'.join(result)


def _transform_void_cast_line(line, var_types):
    """Transform a single line, inserting void* casts where needed.

    Args:
        line: A single line of code
        var_types: Dict of variable name -> type string

    Returns:
        Transformed line
    """
    # Quick check: must contain '=' assignment
    if '=' not in line:
        return line

    # Skip lines that already have a cast: = (SomeType *)func(
    if re.search(r'=\s*\([^)]+\*\)', line):
        return line

    # Try castToClassHash first (it determines cast type from args, not LHS)
    cast_match = _CAST_TO_CLASS_HASH_RE.search(line)
    if cast_match:
        # Check it's an assignment
        assign_match = re.match(r'^(\s*\w+\s*=\s*)', line)
        if assign_match:
            # Extract class name from g_CXxxClassInfo argument
            class_info_match = _CLASS_INFO_ARG_RE.search(line)
            if class_info_match:
                class_name = class_info_match.group(1)
                prefix = assign_match.group(1)
                rest = line[len(prefix):]
                return prefix + '(%s *)' % class_name + rest

    # Try allocator functions
    alloc_match = _ALLOCATOR_FUNC_RE.search(line)
    if alloc_match:
        # Must be an assignment: varName = func(...)
        assign_match = re.match(r'^(\s*(\w+)\s*=\s*)', line)
        if assign_match:
            var_name = assign_match.group(2)
            var_type = var_types.get(var_name)
            if var_type and not _is_primitive_pointer_type(var_type):
                cast = '(%s)' % var_type
                prefix = assign_match.group(1)
                rest = line[len(prefix):]
                return prefix + cast + rest

    return line


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


# =============================================================================
# PARTIAL ACCESS TRANSFORMS (split by access type)
# =============================================================================
#
# Ghidra generates patterns like variable._1_2_ when accessing a portion of a
# larger variable. The pattern ._X_Y_ means: access Y bytes starting at byte
# offset X.
#
# These transforms are split by access type to ensure valid code generation:
# - Read transforms can produce any rvalue (casts are safe)
# - Write transforms must produce lvalues (no casts on LHS)
# - Compound transforms handle read-modify-write patterns
#
# SAFETY (applies to all):
# - Skips struct member access (e.g., struct.field._0_1_)
# - Skips array variables (requires pointer arithmetic, not bit shifts)
# - If access exceeds declared size, pattern is left unchanged


def _get_partial_read_expr(var, offset, size):
    """Generate a read expression for partial variable access.

    Produces an rvalue expression - casts are safe here since this is
    only used in read contexts.

    Args:
        var: Variable name
        offset: Byte offset into the variable
        size: Access size in bytes

    Returns:
        C expression string for reading the partial value
    """
    shift = offset * 8

    # Special case: offset 0, can use simple cast
    if offset == 0:
        if size == 1:
            return '((byte)(%s))' % var
        elif size == 2:
            return '((ushort)(%s))' % var
        elif size == 4:
            return '((uint)(%s))' % var
        else:
            # Unusual size, use mask
            mask = (1 << (size * 8)) - 1
            return '((%s) & 0x%X)' % (var, mask)

    # Non-zero offset: use shift and mask
    if size == 1:
        return '(((uint)(%s) >> %d) & 0xFF)' % (var, shift)
    elif size == 2:
        return '(((uint)(%s) >> %d) & 0xFFFF)' % (var, shift)
    elif size == 4:
        return '(((uint)(%s) >> %d))' % (var, shift)
    else:
        mask = (1 << (size * 8)) - 1
        return '(((uint)(%s) >> %d) & 0x%X)' % (var, shift, mask)


def _get_partial_write_expr(var, offset, size, value_expr):
    """Generate a write expression for partial variable access.

    Uses mask-and-or pattern to preserve other bytes:
        var = (var & clear_mask) | ((value & value_mask) << shift)

    This produces valid lvalue code - the variable itself is assigned,
    not a cast expression.

    Args:
        var: Variable name
        offset: Byte offset into the variable
        size: Access size in bytes
        value_expr: The expression being assigned (the RHS value)

    Returns:
        C expression string for the RHS of the assignment
    """
    shift = offset * 8
    value_mask = (1 << (size * 8)) - 1
    clear_mask = ~(value_mask << shift) & 0xFFFFFFFF  # 32-bit assumption

    if offset == 0:
        # No shift needed for offset 0
        return '((%s) & 0x%X) | ((%s) & 0x%X)' % (var, clear_mask, value_expr, value_mask)
    else:
        return '((%s) & 0x%X) | (((%s) & 0x%X) << %d)' % (
            var, clear_mask, value_expr, value_mask, shift)


def _check_partial_access_safety(var, offset, size, var_info):
    """Check if a partial access transform is safe to apply.

    Args:
        var: Variable name
        offset: Byte offset
        size: Access size in bytes
        var_info: Optional dict mapping variable names to info dicts

    Returns:
        True if safe to transform, False if should be skipped
    """
    # Heuristic checks based on Ghidra naming conventions
    # These apply even without var_info

    # Skip array variables - Ghidra prefixes: au (auto unsigned), ac (auto char),
    # a followed by uppercase (generic array)
    # Pattern: auStack_, acStack_, aStack_, auLocal_, etc.
    if re.match(r'^a[uc]?[A-Z]', var):
        return False

    # Skip float/double variables - Ghidra prefixes: f (float), d (double)
    # Pattern: fStack_, fLocal_, dStack_, dLocal_, etc.
    if re.match(r'^[fd][A-Z]', var):
        return False

    # Sanity check: offset should be reasonable for 32-bit operations
    # Shift amounts >= 32 are undefined behavior in C for 32-bit types
    if offset >= 4:
        return False

    # Check var_info if provided
    if var_info is not None:
        info = var_info.get(var)
        if info is not None:
            # Skip array variables - bit shifting doesn't work for arrays
            if info.get('is_array'):
                return False

            # Check if access is within bounds
            declared_size = info.get('size', 0)
            access_end = offset + size
            if declared_size > 0 and access_end > declared_size:
                # Access exceeds declared size - real type mismatch
                return False

    return True


def _check_value_expr_safety(value_expr):
    """Check if a value expression is safe for bitwise operations.

    Args:
        value_expr: The expression string being assigned

    Returns:
        True if safe to use in bitwise ops, False if should be skipped
    """
    # Skip float literals (contain decimal point or scientific notation)
    if re.search(r'\d+\.\d*|\d*\.\d+|[eE][+-]?\d+', value_expr):
        return False

    # Skip float/double variable references
    # Pattern: fStack_, fLocal_, dStack_, dLocal_, fVar, dVar, etc.
    if re.search(r'\b[fd][A-Z]\w*', value_expr):
        return False

    # Skip pointer casts that suggest non-integer types
    if re.search(r'\(\s*(?:float|double|CVector|CMatrix)', value_expr):
        return False

    return True


def transform_partial_read(code, var_info=None):
    """Transform partial access READS to bit operations.

    Only transforms read contexts - expressions that are NOT on the left side
    of any assignment. Safe to produce rvalue expressions including casts.

    Examples:
        x = var._0_1_  -> x = ((byte)(var))
        x = var._1_1_  -> x = (((uint)(var) >> 8) & 0xFF)
        x = var._2_2_  -> x = (((uint)(var) >> 16) & 0xFFFF)

    Args:
        code: Decompiled code string
        var_info: Optional dict mapping variable names to info dicts

    Returns:
        Transformed code with partial reads converted to bit operations
    """
    # Pattern: var._X_Y_ NOT followed by any assignment operator
    # Negative lookbehind: not preceded by '.' (skip struct.field._X_Y_)
    # Negative lookahead: not followed by =, +=, -=, etc.
    assignment_ops = r'(?:\+|-|\*|/|%|&|\||\^|<<|>>)?'
    pattern = rf'(?<!\.)(\b\w+)\._(\d+)_(\d+)_(?!\s*{assignment_ops}=(?!=))'

    def replace_read(match):
        var = match.group(1)
        offset = int(match.group(2))
        size = int(match.group(3))

        if not _check_partial_access_safety(var, offset, size, var_info):
            return match.group(0)

        return _get_partial_read_expr(var, offset, size)

    return re.sub(pattern, replace_read, code)


def transform_partial_write(code, var_info=None):
    """Transform partial access WRITES to mask-and-or operations.

    Only transforms simple assignments: var._X_Y_ = expr
    Produces valid lvalue code - assigns to the variable, not a cast.

    Examples:
        var._0_1_ = x  -> var = ((var) & 0xFFFFFF00) | ((x) & 0xFF)
        var._1_1_ = x  -> var = ((var) & 0xFFFF00FF) | (((x) & 0xFF) << 8)

    Args:
        code: Decompiled code string
        var_info: Optional dict mapping variable names to info dicts

    Returns:
        Transformed code with partial writes converted to mask-and-or
    """
    # Pattern: var._X_Y_ = expr; (simple assignment only, not compound)
    # The (?<![+\-*/%&|^]) prevents matching += -= etc.
    # We also need to handle <<= and >>= specially
    pattern = r'(?<!\.)(\b\w+)\._(\d+)_(\d+)_\s*(?<![+\-*/%&|^<>])=(?!=)\s*([^;]+);'

    def replace_write(match):
        var = match.group(1)
        offset = int(match.group(2))
        size = int(match.group(3))
        value_expr = match.group(4).strip()

        if not _check_partial_access_safety(var, offset, size, var_info):
            return match.group(0)

        # Check if value expression is safe for bitwise operations
        if not _check_value_expr_safety(value_expr):
            return match.group(0)

        rhs = _get_partial_write_expr(var, offset, size, value_expr)
        return '%s = %s;' % (var, rhs)

    return re.sub(pattern, replace_write, code)


def transform_partial_compound(code, var_info=None):
    """Transform partial access COMPOUND assignments to read-modify-write.

    Transforms patterns like: var._X_Y_ op= expr
    Into: var = (var & clear_mask) | (((read_expr op value) & value_mask) << shift)

    Examples:
        var._0_1_ += x  -> var = ((var) & 0xFFFFFF00) | (((((byte)(var)) + x) & 0xFF))
        var._1_1_ |= x  -> var = ((var) & 0xFFFF00FF) | ((((((uint)(var) >> 8) & 0xFF) | x) & 0xFF) << 8)

    Args:
        code: Decompiled code string
        var_info: Optional dict mapping variable names to info dicts

    Returns:
        Transformed code with compound assignments converted
    """
    # Pattern: var._X_Y_ op= expr; where op is +, -, *, /, %, &, |, ^, <<, >>
    pattern = r'(?<!\.)(\b\w+)\._(\d+)_(\d+)_\s*(\+|-|\*|/|%|&|\||\^|<<|>>)=\s*([^;]+);'

    def replace_compound(match):
        var = match.group(1)
        offset = int(match.group(2))
        size = int(match.group(3))
        op = match.group(4)
        value_expr = match.group(5).strip()

        if not _check_partial_access_safety(var, offset, size, var_info):
            return match.group(0)

        # Check if value expression is safe for bitwise operations
        if not _check_value_expr_safety(value_expr):
            return match.group(0)

        shift = offset * 8
        value_mask = (1 << (size * 8)) - 1
        clear_mask = ~(value_mask << shift) & 0xFFFFFFFF

        # Read the current partial value
        read_expr = _get_partial_read_expr(var, offset, size)

        # Combine: (read_expr op value_expr), masked and shifted back
        if offset == 0:
            rhs = '((%s) & 0x%X) | (((%s %s %s) & 0x%X))' % (
                var, clear_mask, read_expr, op, value_expr, value_mask)
        else:
            rhs = '((%s) & 0x%X) | ((((%s %s %s) & 0x%X) << %d))' % (
                var, clear_mask, read_expr, op, value_expr, value_mask, shift)

        return '%s = %s;' % (var, rhs)

    return re.sub(pattern, replace_compound, code)


def transform_partial_access(code, var_info=None):
    """Transform all partial access patterns (reads, writes, compounds).

    This is the main entry point that applies all three transform types
    in the correct order: compound -> write -> read.

    The order matters because:
    - Compound (most specific) must run first to avoid write pattern matching op=
    - Write runs next to handle simple assignments
    - Read runs last for remaining (non-assignment) contexts

    Args:
        code: Decompiled code string
        var_info: Optional dict mapping variable names to info dicts with:
                  - 'size': declared size in bytes
                  - 'is_array': True if variable is an array type

    Returns:
        Transformed code with all partial accesses converted
    """
    result = transform_partial_compound(code, var_info)
    result = transform_partial_write(result, var_info)
    result = transform_partial_read(result, var_info)
    return result


def apply_all_transforms(code, transforms=None, var_info=None):
    """Apply all or specified transforms to decompiled code.

    Args:
        code: Decompiled code string
        transforms: Optional list of transform names to apply.
                   If None, applies all safe transforms.
        var_info: Optional dict mapping variable names to info dicts with
                  'size' and 'is_array' keys. Used by transform_partial_access
                  for safety checks.

    Returns:
        Transformed code
    """
    # Default transforms that are safe to apply automatically
    default_transforms = [
        ('undefined_ptr_cast', transform_undefined_pointer_casts),
        ('undefined_type', transform_undefined_types),
        ('crt_functions', transform_crt_functions),
        ('file_pointer_casts', transform_file_pointer_casts),
        ('void_pointer_casts', transform_void_pointer_casts),
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
        # Special handling for transforms that need extra context
        if name == 'partial_access':
            result = transform_func(result, var_info=var_info)
        else:
            result = transform_func(result)

    return result


def count_auto_fixable_suspects(suspects):
    """Count how many suspects can be auto-fixed by transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        Tuple of (auto_fixable_count, total_count)
    """
    auto_fixable = sum(1 for s in suspects if s.get('type') in AUTO_FIXABLE_SUSPECT_TYPES)
    return (auto_fixable, len(suspects))


def get_remaining_suspects_after_transforms(suspects):
    """Get suspects that will remain after auto-transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        List of suspects that cannot be auto-fixed
    """
    return [s for s in suspects if s.get('type') not in AUTO_FIXABLE_SUSPECT_TYPES]


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
