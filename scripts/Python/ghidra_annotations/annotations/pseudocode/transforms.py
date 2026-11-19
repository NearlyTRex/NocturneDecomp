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

import re

from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager
from ghidra_annotations.annotations.pseudocode.render_flags_transform import transform_render_state_flags
from ghidra_annotations.annotations.pseudocode.adjacency_sentinel_transform import (
    transform_adjacency_sentinels,
)


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


# =============================================================================
# CRT FUNCTION TRANSFORMS
# =============================================================================
#
# Maps CRT wrapper function calls to clean names.
# Pattern: crt_{category}_c_{funcname}_FUN_{addr} -> {funcname}
# The clean names are declared by the prototypes/crt/*.h headers.


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
    # Match _FUN_HEXADDR suffix, or bare _HEXADDR (8 hex digits) for thunks/imports.
    # The (?<!FUN) lookbehind prevents matching _HEXADDR when the captured name is "FUN",
    # which would incorrectly strip the address from unnamed functions like FUN_0060fa90.
    pattern = r'\bcrt_[a-z0-9]+_c_([a-zA-Z_][a-zA-Z0-9_]*?)(?:_FUN_[0-9a-fA-F]+|(?<!FUN)_[0-9a-fA-F]{8})?\b'
    return re.sub(pattern, lambda match: match.group(1), code)


# =============================================================================
# VARIADIC FUNCTION TRANSFORM
# =============================================================================
#
# Ghidra decompiles variadic functions with uncompilable va_list_t patterns:
#   va_list_t local_XX;
#   local_XX.value[0] = (char * [1])&stack0xXXXXXXXX;    <- undeclared identifier
#   _vsprintf(buf, fmt, (va_list_t)&local_XX);            <- invalid cast
#   local_XX.value[0] = (char * [1])(char *)0x0;          <- invalid cast
#
# This transform converts them to compilable equivalents using VA_START_T/VA_END_T
# macros defined in system/stdarg.h:
#   va_list_t local_XX;
#   VA_START_T(local_XX, format);
#   _vsprintf(buf, fmt, local_XX);
#   VA_END_T(local_XX);

# Pattern: local_XX.value[0] = (char * [1])&stack0xXXXXXXXX;
# Also matches: local_XX.value[0] = (char * [1])&format;  (AND ESP variant)
_VA_START_PATTERN = re.compile(
    r'(\w+)\.value\[0\]\s*=\s*\(char\s*\*\s*\[1\]\)\s*&(?:stack0x[0-9a-fA-F]+|\w+)\s*;'
)

# Pattern: (va_list_t)&local_XX
_VA_LIST_CAST_PATTERN = re.compile(
    r'\(va_list_t\)\s*&(\w+)'
)

# Pattern: local_XX.value[0] = (char * [1])(char *)0x0;
_VA_END_PATTERN = re.compile(
    r'(\w+)\.value\[0\]\s*=\s*\(char\s*\*\s*\[1\]\)\s*\(char\s*\*\)\s*0x0\s*;'
)


def _find_last_named_param(code):
    """Extract the last named parameter before '...' from a variadic function signature.

    The signature is the first line with '...', '(' and ')'; the parameter
    before the '...' gives its last word, with any '*' dropped ("char *format",
    "char*format" and "char * format" all give "format").

    Args:
        code: Decompiled code string containing the function signature

    Returns:
        The name of the last named parameter, or None if not found
    """
    line = next((ln for ln in code.split('\n') if '...' in ln and '(' in ln and ')' in ln), None)
    if line is None:
        return None
    params = [p.strip() for p in line[line.rfind('(') + 1:line.rfind(')')].split(',')]
    at = next((i for i, p in enumerate(params) if p.startswith('...')), 0)
    names = re.findall(r'\w+', params[at - 1]) if at > 0 else []
    return names[-1] if names else None


def transform_variadic_functions(code):
    """Transform Ghidra va_list_t patterns to compilable equivalents.

    Converts uncompilable Ghidra patterns in variadic functions to use
    VA_START_T/VA_END_T macros from system/stdarg.h.

    Only applies to functions whose signature contains '...'.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with compilable va_list_t usage
    """
    # Only apply to variadic functions
    if '...' not in code:
        return code

    # Check for the actual broken patterns
    if '.value[0]' not in code and '(va_list_t)&' not in code:
        return code

    last_param = _find_last_named_param(code)
    if last_param is None:
        return code

    # Collect va_list_t variable names from VA_START pattern matches
    va_list_vars = {m.group(1) for m in _VA_START_PATTERN.finditer(code)}
    if not va_list_vars:
        return code

    # 1. local_XX.value[0] = (char * [1])&stack0x...;  ->  VA_START_T(local_XX, last_param);
    code = _VA_START_PATTERN.sub(lambda m: 'VA_START_T(%s, %s);' % (m.group(1), last_param), code)

    # 2. local_XX.value[0] = (char * [1])(char *)0x0;  ->  VA_END_T(local_XX);
    code = _VA_END_PATTERN.sub(
        lambda m: 'VA_END_T(%s);' % m.group(1) if m.group(1) in va_list_vars else m.group(0), code)

    # 3. (va_list_t)&local_XX  ->  local_XX
    return _VA_LIST_CAST_PATTERN.sub(
        lambda m: m.group(1) if m.group(1) in va_list_vars else m.group(0), code)


# =============================================================================
# VOID POINTER CAST TRANSFORM
# =============================================================================
#
# C++ requires explicit casts from void* to typed pointers, but C doesn't.
# The decompiler output (targeting C++) omits these casts since the original
# code was C. This transform inserts C-style casts for known void*-returning
# functions (allocators and castToClassHash).

# Regex for allocator functions that return void*
_ALLOCATOR_FUNC_RE = re.compile(
    r'(?:shape_memdbg_cpp_debug(?:Alloc(?:Tracked\d*)?|Malloc|Calloc|Realloc)_FUN_[0-9a-f]+'
    r'|crt_memory_c_(?:malloc|calloc|realloc)_FUN_[0-9a-f]+'
    r'|(?:_?(?:malloc|calloc|realloc))\b'
    r'|__(?:arrfini|arrinit|vec_new)'
    r')'
)

# Regex for castToClassHash calls
_CAST_TO_CLASS_HASH_RE = re.compile(
    r'(core_actor_cpp_castToClassHash_FUN_[0-9a-f]+)\s*\('
)

# Regex to extract class name from g_C<ClassName>ClassInfo
_CLASS_INFO_ARG_RE = re.compile(r'g_(C\w+?)ClassInfo\b')

# A local pointer declaration: `  TypeName *pVar1;`, `  unsigned int **ppVar2;`.
# The type may hold spaces but not a line break, so a statement on the line
# above can never become part of it.
_POINTER_DECL_RE = re.compile(
    r'^[ \t]+'                 # leading whitespace (indented = inside function body)
    r'([\w:][\w: \t]*?)'      # type name (may include spaces for "unsigned int" etc.)
    r'[ \t]*'
    r'(\*{1,3})'              # pointer stars (1-3)
    r'[ \t]*'
    r'(\w+)'                  # variable name
    r'[ \t]*;',               # semicolon
    re.MULTILINE
)

# Statements that read like `T *name;` but declare nothing: `return *p;`.
_STATEMENT_KEYWORDS = {'return', 'goto', 'case', 'else', 'do', 'sizeof'}


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
    for m in _POINTER_DECL_RE.finditer(code):
        type_name = m.group(1).strip()
        if type_name.split()[0] in _STATEMENT_KEYWORDS:
            continue
        # Store as "TypeName *" or "TypeName **"
        var_types[m.group(3)] = type_name + ' ' + m.group(2)
    return var_types


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
    return '\n'.join(_transform_void_cast_line(line, var_types) for line in code.split('\n'))


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
    assign_match = re.match(r'^(\s*(\w+)\s*=\s*)', line)
    if not assign_match:
        return line
    prefix = assign_match.group(1)
    rest = line[len(prefix):]
    if _CAST_TO_CLASS_HASH_RE.search(line):
        class_info_match = _CLASS_INFO_ARG_RE.search(line)
        if class_info_match:
            return prefix + '(%s *)' % class_info_match.group(1) + rest

    # Try allocator functions
    if _ALLOCATOR_FUNC_RE.search(line):
        var_type = var_types.get(assign_match.group(2))
        if var_type and var_type != 'void *':
            return prefix + '(%s)' % var_type + rest

    return line


# Stdio functions that the project shims behind a leading-underscore name
# (mostly FILE*-taking, plus the sprintf/vsprintf printf-family entries
# whose shim bridges the Watcom va_list_t → glibc va_list layout, and
# remove/rename, whose shims resolve the path as fopen's does).
_STDIO_SHIM_FUNCS = (
    'fread', 'fwrite', 'fgets', 'fputs', 'fputc', 'fgetc', 'ungetc',
    'fopen', 'freopen', 'fclose', 'ftell', 'fflush', 'feof', 'ferror', 'rewind',
    'remove', 'rename',
    'fprintf', 'fscanf', 'fseek', 'fsetpos', 'fgetpos', 'setvbuf', 'setbuf',
    'sprintf', 'vsprintf',
)

# A call to one of them by its plain name: not `_fread(` already, and not a
# member of the same name (`list->remove(`, `obj.rename(`), which is not the CRT's.
_STDIO_CALL_RE = re.compile(r'(?<!_)(?<!->)(?<!\.)\b(%s)\s*\(' % '|'.join(_STDIO_SHIM_FUNCS))


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
    return _STDIO_CALL_RE.sub(lambda m: '_%s(' % m.group(1), code)


def transform_adjusted_pointer_types(code):
    """Fix ADJ(var). to ADJ(var)-> for adjusted pointer variables.

    Ghidra sometimes emits dot-access on adjusted pointer variables
    (e.g., ADJ(pCVar2).base.vtable) when it should use arrow-access.
    This is a Ghidra bug where the decompiler uses '.' on a pointer type.

    The _ptr_N types are defined as structs with operator overloads that
    handle declarations, assignments, and type conversions automatically.
    This transform only needs to fix the dot-access pattern.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with ADJ dot-access fixed to arrow-access
    """
    # Find _ptr_N typed variable declarations to identify which vars need fixing
    decl_pattern = re.compile(r'^\s+\w+_ptr_\d+\s+(\w+)\s*;', re.MULTILINE)
    result = code
    for m in decl_pattern.finditer(code):
        var_name = m.group(1)
        result = result.replace('ADJ(' + var_name + ').', 'ADJ(' + var_name + ')->')
    return result


# =============================================================================
# FUNCTION POINTER ASSIGNMENT CASTS
# =============================================================================
#
# When a function pointer global (e.g. g_ScanlineRenderFunc) is typed as
# accepting void* parameters but gets assigned a function that uses concrete
# typed parameters (e.g. SEdgeData*), C requires an explicit cast.
#
# This maps known function pointer globals to their typedef names so the
# transform can insert the cast automatically.

_FUNCPTR_GLOBAL_TYPES = {
    'g_ScanlineRenderFunc': 'MainScanlineFunc',
}

# Matches: g_GlobalName = optional_whitespace function_name_FUN_ADDR ;
# Handles multi-line case where function name wraps to next line.
_FUNCPTR_ASSIGN_RE = re.compile(
    r'(\b(' + '|'.join(re.escape(g) for g in _FUNCPTR_GLOBAL_TYPES) +
    r')\s*=\s*)'            # group 1: "g_Global = ", group 2: global name
    r'(\w+_FUN_[0-9a-f]+)'  # group 3: function reference
    r'\s*;'
)


def transform_funcptr_assignments(code):
    """Insert casts for function pointer global assignments.

    When a function with typed parameters (e.g. SEdgeData*) is assigned to a
    global declared with a typedef using void* parameters, C requires an
    explicit cast. This transform inserts the cast automatically.

    Example:
        g_ScanlineRenderFunc = renderDepthOnly_FUN_0049072f;
        ->
        g_ScanlineRenderFunc = (MainScanlineFunc *)renderDepthOnly_FUN_0049072f;

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with function pointer casts inserted
    """
    return _FUNCPTR_ASSIGN_RE.sub(
        lambda m: '%s(%s *)%s;' % (m.group(1), _FUNCPTR_GLOBAL_TYPES[m.group(2)], m.group(3)), code)


def _find_balanced_paren_end(code, start):
    """Find the index after the closing paren that balances the open paren at start.

    Args:
        code: Full code string
        start: Index of the opening '('

    Returns:
        Index one past the matching ')' or -1 if not found
    """
    depth = 0
    for i in range(start, len(code)):
        if code[i] == '(':
            depth += 1
        elif code[i] == ')':
            depth -= 1
            if depth == 0:
                return i + 1
    return -1


def transform_float_concat_bitcast(code):
    """Replace (double)CONCATxx(...) with __BITCAST_DOUBLE(CONCATxx(...)).

    Ghidra splits x87 FSTP operations into two stack writes, then reconstructs
    them as (double)CONCAT44(hi, lo). A C (double) cast does numeric conversion,
    not bit reinterpretation. This transform wraps the CONCAT in a bitcast
    helper that uses memcpy for correct semantics.

    Handles:
        (double)CONCAT44(...)  -> __BITCAST_DOUBLE(CONCAT44(...))
        (double)CONCAT26(...)  -> __BITCAST_DOUBLE(CONCAT26(...))
        (float)CONCAT22(...)   -> __BITCAST_FLOAT(CONCAT22(...))

    Uses balanced-paren matching to correctly handle nested expressions.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with float/double CONCAT casts replaced by bitcast helpers
    """
    # Pattern: (double) or (float) followed by CONCATxx(
    pattern = re.compile(r'\((double|float)\)\s*(CONCAT\d+)\s*\(')

    result = []
    pos = 0
    for match in pattern.finditer(code):
        if match.start() < pos:
            continue  # inside a CONCAT already rewritten
        # The '(' captured by the pattern opens the CONCAT call
        open_paren = match.end() - 1
        close_paren_end = _find_balanced_paren_end(code, open_paren)
        if close_paren_end == -1:
            continue  # Unbalanced parens - leave unchanged
        result.append(code[pos:match.start()])
        helper = '__BITCAST_DOUBLE' if match.group(1) == 'double' else '__BITCAST_FLOAT'
        result.append('%s(%s%s)' % (helper, match.group(2), code[open_paren:close_paren_end]))
        pos = close_paren_end
    result.append(code[pos:])
    return ''.join(result)


# A floating-point local or parameter declaration: `  double dStack_5c;`.
_FLOAT_DECL_RE = re.compile(r'(?:^[ \t]+|[(,][ \t]*)(double|float)[ \t]+(\w+)[ \t]*(?=[;,)])', re.MULTILINE)


def _first_arg_bitcast(first_arg, float_vars):
    """'__BITCAST_UINT64' / '__BITCAST_UINT32' for a double / float SUB argument, else None.

    A double is Ghidra's dVarN name, any name declared `double` in the function
    (dStack_5c, dLocal_10, a parameter), or an argument with a (double) cast in
    it; a float is a name declared `float` or an argument that starts with a
    (float) cast.
    """
    arg = first_arg.strip()
    if re.match(r'^dVar\d+$', arg) or float_vars.get(arg) == 'double' or '(double)' in arg:
        return '__BITCAST_UINT64'
    if float_vars.get(arg) == 'float' or arg.startswith('(float)'):
        return '__BITCAST_UINT32'
    return None


def _split_first_arg(args_str):
    """The text before the first top-level comma, or None if there is none."""
    depth = 0
    for i, ch in enumerate(args_str):
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
        elif ch == ',' and depth == 0:
            return args_str[:i]
    return None


def transform_sub_float_bitcast(code):
    """Wrap double/float arguments to SUBxx() calls in bitcast helpers.

    Ghidra emits SUB84(dVar, 0) to extract the low 32 bits of a double's bit
    pattern, but the SUB macro uses >> which is invalid on floating-point types.
    This transform wraps the first argument in __BITCAST_UINT64 (for doubles)
    or __BITCAST_UINT32 (for floats) so the shift operates on an integer.

    See _first_arg_bitcast for what counts as a double or a float.

    Examples:
        SUB84(dVar6, 0)              -> SUB84(__BITCAST_UINT64(dVar6), 0)
        SUB84(dStack_5c, 0)          -> SUB84(__BITCAST_UINT64(dStack_5c), 0)   (double dStack_5c;)
        SUB82((double)fVar2, 0)      -> SUB82(__BITCAST_UINT64((double)fVar2), 0)
        SUB84((float)x, 0)           -> SUB84(__BITCAST_UINT32((float)x), 0)
    """
    float_vars = {m.group(2): m.group(1) for m in _FLOAT_DECL_RE.finditer(code)}
    return _sub_bitcast(code, float_vars)


_SUB_CALL_RE = re.compile(r'\bSUB(\d+)\(')


def _sub_bitcast(code, float_vars):
    """transform_sub_float_bitcast's rewrite, with the declared float_vars."""
    result = []
    pos = 0
    for match in _SUB_CALL_RE.finditer(code):
        if match.start() < pos:
            continue  # inside a SUB call already rewritten
        open_paren = match.end() - 1
        close_paren_end = _find_balanced_paren_end(code, open_paren)
        if close_paren_end == -1:
            continue  # Unbalanced parens - leave unchanged
        args_str = code[open_paren + 1:close_paren_end - 1]
        first_arg = _split_first_arg(args_str)
        helper = _first_arg_bitcast(first_arg, float_vars) if first_arg is not None else None
        if helper is None:
            continue  # single-argument SUB, or not a float/double argument
        result.append(code[pos:match.start()])
        # The arguments are rewritten too, for a SUB nested inside this one
        result.append('SUB%s(%s(%s)%s)' % (match.group(1), helper, _sub_bitcast(first_arg, float_vars),
                                          _sub_bitcast(args_str[len(first_arg):], float_vars)))
        pos = close_paren_end
    result.append(code[pos:])
    return ''.join(result)


# A `g_CurrentLineNumber = 0xNN;` assignment (the global set before a
# displayErrorAndQuit / logging call). The RHS is unambiguously a source line.
_LINE_NUM_GLOBAL_RE = re.compile(r'(g_CurrentLineNumber\s*=\s*)0x([0-9a-fA-F]+)')
# The __LINE__ argument immediately after a "...\file.cpp" path literal in the
# debug-heap / error helpers (e.g. `debugMalloc(sizeof(T), "..\core\a.cpp", 0x1e)`).
# The string alternation puts `cpp` first so `.cpp"` matches fully, not `.c`.
_LINE_NUM_AFTER_FILE_RE = re.compile(
    r'("(?:[^"\\]|\\.)*\.(?:cpp|c|h)"\s*,\s*)0x([0-9a-fA-F]+)\b')


def transform_decimalize_line_numbers(code):
    """Render source line numbers as decimal instead of Ghidra's hex.

    Two faithful (bit-identical) rewrites make line numbers read as line numbers
    and pull them out of the hex-constant population that struct-size searches
    (alloc_magic_size, manual greps for `0xNN` sizes) have to sift through:
      1. `g_CurrentLineNumber = 0xd72;`            -> `g_CurrentLineNumber = 3442;`
      2. the __LINE__ arg after a source-file path ->
         `debugMalloc(sizeof(T), "..\\core\\ammo.cpp", 0x1e)`
                                    -> `..., "..\\core\\ammo.cpp", 30)`

    Both operands are unambiguously line numbers (the global's name; the arg
    position right after a "...file.cpp" literal), so decimalizing is safe and
    changes no compiled output. Notably, a hex line number can collide with a
    struct size (line 40 == 0x28 == sizeof(CBitmap)); decimalizing removes that
    ambiguity from size searches.
    """
    code = _LINE_NUM_GLOBAL_RE.sub(
        lambda m: m.group(1) + str(int(m.group(2), 16)), code)
    code = _LINE_NUM_AFTER_FILE_RE.sub(
        lambda m: m.group(1) + str(int(m.group(2), 16)), code)
    return code


def apply_all_transforms(code, transforms=None, func_name=None):
    """Apply all or specified transforms to decompiled code.

    Args:
        code: Decompiled code string
        transforms: Optional list of transform names to apply.
                   If None, applies all safe transforms.
        func_name: Optional function name, used by transforms that log
                  per-function audit info (adjacency_sentinels).

    Returns:
        Transformed code
    """
    # Default transforms that are safe to apply automatically
    default_transforms = [
        ('undefined_ptr_cast', transform_undefined_pointer_casts),
        ('undefined_type', transform_undefined_types),
        ('float_concat_bitcast', transform_float_concat_bitcast),
        ('sub_float_bitcast', transform_sub_float_bitcast),
        ('crt_functions', transform_crt_functions),
        ('variadic_functions', transform_variadic_functions),
        ('file_pointer_casts', transform_file_pointer_casts),
        ('void_pointer_casts', transform_void_pointer_casts),
        ('funcptr_assignments', transform_funcptr_assignments),
        ('adjusted_pointer_types', transform_adjusted_pointer_types),
        ('render_state_flags', transform_render_state_flags),
        ('adjacency_sentinels', lambda c: transform_adjacency_sentinels(c, func_name=func_name)),
        ('decimalize_line_numbers', transform_decimalize_line_numbers),
    ]

    result = code
    for name, transform_func in default_transforms:
        if transforms is None or name in transforms:
            result = transform_func(result)
    return result


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
    result = code
    for repl in replacements or ():
        find_text = repl.get('find', '')
        if not find_text:
            continue
        replace_text = repl.get('replace', '')
        if repl.get('regex', False):
            result = re.sub(find_text, replace_text, result)
        else:
            result = result.replace(find_text, replace_text)
    return result


# Cache managers for per-function configuration
replacements_cache = JsonCacheManager('replacements', json_key='replacements',
                                       default_factory=list, type_check=list)
pcode_overrides_cache = JsonCacheManager('pcode_overrides', json_key='pcode_overrides',
                                          default_factory=dict, type_check=dict)
