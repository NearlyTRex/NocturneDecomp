# Prototype override support for decompilation
# Registers function signatures at specific call sites for XML injection

"""
Proto overrides allow specifying exact function signatures at call sites
during decompilation. This tells the decompiler exactly what parameters
a variadic or ambiguous call has, bypassing the parameter inference.

This is useful for:
- Fixing variadic function calls (printf, sprintf, etc.) where the decompiler
  can't determine argument count
- Specifying exact parameter types for indirect calls through function pointers
- Correcting parameter types when the decompiler makes incorrect inferences

This works like callfixups - overrides are registered and injected as XML
during decompilation, without modifying the database.

================================================================================
GLOBAL PROTO_OVERRIDES FILE
================================================================================

Location:
    annotations/<program>/pseudocode/proto_overrides.json

This file contains prototype overrides that apply to ALL functions in the
program. The file is regenerated during export, but user modifications are
preserved.

JSON Format:
    [
        {
            "address": "<call_site_address>",
            "signature": "<C-style function signature>"
        }
    ]

Fields:
    - address: The address of the CALL instruction (not the target function)
    - signature: C-style function signature with return type, name, and parameters

Example (global proto_overrides.json):
    [
        {
            "address": "0x40acc3",
            "signature": "void displayErrorAndQuit(char *fmt, char *file, int line)"
        },
        {
            "address": "0x401234",
            "signature": "int sprintf(char *buffer, char *format, int value1, int value2)"
        },
        {
            "address": "0x405678",
            "signature": "void __cdecl callback(void *ctx, int event, void *data)"
        }
    ]

================================================================================
PER-FUNCTION PROTO_OVERRIDES (in function JSON files)
================================================================================

Location:
    annotations/<program>/pseudocode/src/<function_name>.json

Per-function proto overrides allow defining overrides that are specific to
call sites within a particular function. These are stored in the function's
JSON file and are preserved across exports.

JSON Format (inside function JSON):
    {
        "function": { ... },
        "proto_overrides": [
            {
                "address": "<call_site_address>",
                "signature": "<C-style function signature>"
            }
        ],
        ...other function data...
    }

Example (FUN_00401000.json):
    {
        "function": {
            "name": "FUN_00401000",
            "address": "0x00401000"
        },
        "proto_overrides": [
            {
                "address": "0x00401050",
                "signature": "void printf(char *fmt, int arg1, char *arg2)"
            },
            {
                "address": "0x00401080",
                "signature": "int sscanf(char *str, char *fmt, int *out1, int *out2)"
            }
        ]
    }

================================================================================
ALTERNATIVE FORMAT (explicit parameters)
================================================================================

Instead of a signature string, you can specify parameters explicitly:

    [
        {
            "address": "0x401234",
            "return_type": "int",
            "params": [
                {"name": "buffer", "type": "char *"},
                {"name": "format", "type": "char *"},
                {"name": "value", "type": "int"}
            ],
            "calling_convention": "__cdecl",
            "varargs": false
        }
    ]

Fields for explicit format:
    - return_type: Return type string (default: "void")
    - params: List of parameter objects with "name" and "type"
    - calling_convention: Calling convention (default: "__cdecl")
    - varargs: Whether function takes variable arguments (default: false)

================================================================================
USAGE
================================================================================

    from ghidra_annotations.annotations.pseudocode.proto import (
        register_proto_overrides, apply_proto_overrides
    )

    # Load overrides (call after pyghidra.start())
    register_proto_overrides(proto_overrides_json_path)

    # Apply to program (call inside program context)
    apply_proto_overrides(currentProgram)
"""

import os
import json
from ghidra_annotations.util.log import log_info, log_warning
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager


# Filename for proto overrides JSON
PROTO_OVERRIDES_FILENAME = "proto_overrides.json"

# ============================================================================
# Cache manager for proto overrides
# ============================================================================

# Cache manager for proto overrides (global file is root-level array,
# per-function files have data under 'proto_overrides' key)
proto_cache = JsonCacheManager('proto_overrides', json_key='proto_overrides',
                                default_factory=list, type_check=list)

# Pending overrides loaded by register_proto_overrides(), applied by apply_proto_overrides()
_pending_proto_overrides = []


# ============================================================================
# File generation
# ============================================================================

def generate_proto_overrides_file(pseudocode_dir):
    """Generate the proto_overrides.json file in the pseudocode directory.

    This merges any previously cached user-defined proto overrides,
    preserving user modifications.

    Call proto_cache.preload_global() before cleanup to cache existing modifications.

    Args:
        pseudocode_dir: The pseudocode directory (e.g., annotations/nocedit.exe/pseudocode)

    Returns:
        Path to the generated file
    """
    proto_overrides_path = os.path.join(pseudocode_dir, PROTO_OVERRIDES_FILENAME)
    proto_overrides = list(proto_cache.get_global_cache())

    # Write the cached proto overrides as a plain array
    with open(proto_overrides_path, 'w') as f:
        json.dump(proto_overrides, f, indent=2)
        f.write("\n")
    log_info("Generated %s with %d proto overrides" % (proto_overrides_path, len(proto_overrides)))
    return proto_overrides_path


# ============================================================================
# JSON loading
# ============================================================================

def load_proto_overrides_json(json_path):
    """Load proto overrides from a JSON file.

    Args:
        json_path: Path to proto_overrides.json

    Returns:
        List of override definitions; empty, with a warning, when the file cannot be read
        or is not a list
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (OSError, ValueError) as e:
        log_warning("Could not read proto_overrides from %s: %s" % (json_path, e))
        return []
    if not isinstance(data, list):
        log_warning("%s is not a list of proto overrides" % json_path)
        return []
    return data


def parse_signature_with_cparser(sig_str, dtm):
    """Parse a signature string using Ghidra's CParser.

    Args:
        sig_str: C-style signature like "void foo(int x, char *y)"
        dtm: DataTypeManager

    Returns:
        FunctionDefinitionDataType or None
    """
    from ghidra.app.util.cparser.C import CParser
    from ghidra.program.model.data import FunctionDefinitionDataType
    try:
        # CParser expects a declaration, add semicolon
        full_decl = sig_str.strip()
        if not full_decl.endswith(';'):
            full_decl += ';'

        # Parse the declaration
        parser = CParser(dtm)
        parsed_type = parser.parse(full_decl)
        if parsed_type and isinstance(parsed_type, FunctionDefinitionDataType):
            return parsed_type
        log_info("CParser returned non-function type for: %s" % sig_str)
        return None
    except Exception as e:
        log_info("CParser failed for '%s': %s" % (sig_str, str(e)))
        return None


def resolve_type(type_str, dtm):
    """Resolve a type string to a DataType.

    Args:
        type_str: Type string like "int", "char *", "void"
        dtm: DataTypeManager

    Returns:
        DataType or None
    """
    from ghidra.program.model.data import (
        PointerDataType, VoidDataType, IntegerDataType,
        CharDataType, UnsignedIntegerDataType, FloatDataType,
        DoubleDataType, LongDataType, ShortDataType
    )

    type_str = type_str.strip()

    # Handle pointers
    if type_str.endswith('*'):
        return PointerDataType(resolve_type(type_str[:-1], dtm))

    # Basic types
    type_map = {
        'void': VoidDataType.dataType,
        'int': IntegerDataType.dataType,
        'char': CharDataType.dataType,
        'unsigned int': UnsignedIntegerDataType.dataType,
        'unsigned': UnsignedIntegerDataType.dataType,
        'float': FloatDataType.dataType,
        'double': DoubleDataType.dataType,
        'long': LongDataType.dataType,
        'short': ShortDataType.dataType,
    }

    if type_str.lower() in type_map:
        return type_map[type_str.lower()]

    found = dtm.getDataType("/" + type_str)
    if found:
        return found
    log_warning("Could not resolve proto override type %r; using int" % type_str)
    return IntegerDataType.dataType


def build_function_signature(override_def, dtm):
    """Build a FunctionSignature from an override definition.

    Args:
        override_def: Dict with either 'signature' or explicit param fields
        dtm: DataTypeManager

    Returns:
        FunctionDefinitionDataType or None on failure
    """
    from ghidra.program.model.data import (
        FunctionDefinitionDataType, ParameterDefinitionImpl
    )
    from ghidra.util.exception import InvalidInputException

    if 'signature' in override_def:
        return parse_signature_with_cparser(override_def['signature'], dtm)

    # Build from explicit fields
    func_def = FunctionDefinitionDataType("override_sig")
    func_def.setReturnType(resolve_type(override_def.get('return_type', 'void'), dtm))
    func_def.setArguments([
        ParameterDefinitionImpl(param.get('name', 'param_%d' % i), resolve_type(param.get('type', 'int'), dtm), None)
        for i, param in enumerate(override_def.get('params', []))])
    func_def.setVarArgs(override_def.get('varargs', False))
    calling_conv = override_def.get('calling_convention', '__cdecl')
    try:
        func_def.setCallingConvention(calling_conv)
    except InvalidInputException:
        log_warning("Unknown calling convention %r in a proto override; keeping the default" % calling_conv)
    return func_def


def register_proto_overrides(annotations_dir=None, function_overrides=()):
    """Load and cache proto overrides for later application.

    This must be called after pyghidra.start() but before any decompilation.
    Call apply_proto_overrides(program) inside program context to actually register.

    Args:
        annotations_dir: Directory containing proto_overrides.json, or direct path to JSON file
        function_overrides: Overrides from the per-function JSONs, registered with the global ones

    Returns:
        Number of proto overrides loaded
    """
    global _pending_proto_overrides

    _pending_proto_overrides = []

    # Find proto_overrides.json - accept either directory or direct path
    json_path = annotations_dir
    if json_path and not json_path.endswith('.json'):
        json_path = os.path.join(json_path, PROTO_OVERRIDES_FILENAME)
    overrides_list = []
    if json_path and os.path.exists(json_path):
        overrides_list = load_proto_overrides_json(json_path)
        log_info("Loading proto overrides from %s" % json_path)
    else:
        log_info("No proto_overrides.json found at %s" % json_path)
    overrides_list = list(overrides_list) + list(function_overrides)
    if not overrides_list:
        return 0

    # Validate and cache overrides: a signature string, or the explicit
    # return_type/params form the module docstring describes
    for override_def in overrides_list:
        if not isinstance(override_def, dict) or not override_def.get('address'):
            log_warning("Proto override without an 'address': %r" % (override_def,))
            continue
        if not (override_def.get('signature') or 'params' in override_def or 'return_type' in override_def):
            log_warning("Proto override at %s has neither a 'signature' nor 'return_type'/'params'"
                        % override_def['address'])
            continue
        _pending_proto_overrides.append(override_def)

    log_info("Loaded %d proto overrides (call apply_proto_overrides to register)" % len(_pending_proto_overrides))
    return len(_pending_proto_overrides)


def apply_proto_overrides(program):
    """Apply cached proto overrides to the program.

    Must be called inside program context after register_proto_overrides().

    Args:
        program: The Ghidra Program

    Returns:
        Number of proto overrides registered
    """
    from ghidra.program.model.pcode import HighFunction

    # Clear any existing registered overrides
    HighFunction.clearProtoOverrides()

    if not _pending_proto_overrides:
        return 0

    dtm = program.getDataTypeManager()
    addr_factory = program.getAddressFactory()

    registered_count = 0

    for override_def in _pending_proto_overrides:
        addr_str = override_def['address']

        # Hex, with or without 0x
        try:
            call_addr = addr_factory.getDefaultAddressSpace().getAddress(int(addr_str, 16))
        except (TypeError, ValueError) as e:
            log_warning("Invalid proto override address %r: %s" % (addr_str, e))
            continue

        # Build signature
        signature = build_function_signature(override_def, dtm)
        if not signature:
            log_info("Could not build signature for override at %s" % addr_str)
            continue

        # Register
        try:
            HighFunction.registerProtoOverride(call_addr, signature)
            log_info("Registered proto override: %s" % addr_str)
            registered_count += 1
        except Exception as e:
            log_info("Failed to register proto override at %s: %s" % (addr_str, str(e)))

    log_info("Registered %d proto overrides" % registered_count)
    return registered_count
