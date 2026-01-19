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
from ghidra_annotations.util.log import log_info, log_error
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager


# Default proto overrides - define in annotations/<program>/pseudocode/proto_overrides.json
DEFAULT_PROTO_OVERRIDES = []

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

    # Start with defaults, then merge cached overrides
    proto_overrides = list(DEFAULT_PROTO_OVERRIDES)
    cached = proto_cache.get_global_cache()
    if cached:
        proto_overrides.extend(cached)

    # Write the merged proto overrides as a plain array
    try:
        with open(proto_overrides_path, 'w') as f:
            json.dump(proto_overrides, f, indent=2)
            f.write("\n")
        log_info("Generated %s with %d proto overrides" % (proto_overrides_path, len(proto_overrides)))
    except Exception as e:
        log_info("Failed to write proto_overrides.json: %s" % str(e))
    return proto_overrides_path


# ============================================================================
# JSON loading
# ============================================================================

def load_proto_overrides_json(json_path):
    """Load proto overrides from a JSON file.

    Args:
        json_path: Path to proto_overrides.json

    Returns:
        List of override definitions, or empty list if not found
    """
    if not json_path or not os.path.exists(json_path):
        return []
    try:
        with open(json_path, 'r') as f:
            return json.load(f)
    except Exception as e:
        log_info("Failed to load proto_overrides from %s: %s" % (json_path, str(e)))
    return []


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
        base_type_str = type_str[:-1].strip()
        base_type = resolve_type(base_type_str, dtm)
        if base_type:
            return PointerDataType(base_type)
        return PointerDataType()  # void*

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

    # Try to find in DataTypeManager
    try:
        found = dtm.getDataType("/" + type_str)
        if found:
            return found
    except Exception:
        pass

    log_info("Could not resolve type: %s" % type_str)
    return IntegerDataType.dataType  # Fallback


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

    try:
        if 'signature' in override_def:
            # Parse signature string using CParser
            sig_str = override_def['signature']
            return parse_signature_with_cparser(sig_str, dtm)
        else:
            # Build from explicit fields
            return_type_str = override_def.get('return_type', 'void')
            params = override_def.get('params', [])
            calling_conv = override_def.get('calling_convention', '__cdecl')
            varargs = override_def.get('varargs', False)

            # Create function definition
            func_def = FunctionDefinitionDataType("override_sig")

            # Set return type
            ret_type = resolve_type(return_type_str, dtm)
            if ret_type:
                func_def.setReturnType(ret_type)

            # Build parameter list
            param_defs = []
            for i, param in enumerate(params):
                param_type_str = param.get('type', 'int')
                param_name = param.get('name', 'param_%d' % i)
                param_type = resolve_type(param_type_str, dtm)
                if param_type:
                    param_defs.append(ParameterDefinitionImpl(param_name, param_type, None))

            func_def.setArguments(param_defs)
            func_def.setVarArgs(varargs)

            # Set calling convention
            if calling_conv:
                try:
                    func_def.setCallingConvention(calling_conv)
                except Exception:
                    pass  # Use default if convention not recognized
            return func_def
    except Exception as e:
        log_info("Failed to build function signature: %s" % str(e))
        return None


def register_proto_overrides(annotations_dir=None):
    """Load and cache proto overrides for later application.

    This must be called after pyghidra.start() but before any decompilation.
    Call apply_proto_overrides(program) inside program context to actually register.

    Args:
        annotations_dir: Directory containing proto_overrides.json, or direct path to JSON file

    Returns:
        Number of proto overrides loaded
    """
    global _pending_proto_overrides

    _pending_proto_overrides = []

    # Find proto_overrides.json - accept either directory or direct path
    if annotations_dir:
        if annotations_dir.endswith('.json'):
            json_path = annotations_dir
        else:
            json_path = os.path.join(annotations_dir, PROTO_OVERRIDES_FILENAME)
    else:
        json_path = None

    if not json_path or not os.path.exists(json_path):
        log_info("No proto_overrides.json found at %s" % json_path)
        return 0

    overrides_list = load_proto_overrides_json(json_path)
    if not overrides_list:
        return 0

    log_info("Loading proto overrides from %s" % json_path)

    # Validate and cache overrides
    for override_def in overrides_list:
        addr_str = override_def.get('address')
        if not addr_str:
            log_info("Proto override missing 'address' field")
            continue

        sig_str = override_def.get('signature')
        if not sig_str:
            log_info("Proto override at %s missing 'signature' field" % addr_str)
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
    global _pending_proto_overrides
    from ghidra.program.model.pcode import HighFunction

    # Clear any existing registered overrides
    HighFunction.clearProtoOverrides()

    if not _pending_proto_overrides:
        return 0

    dtm = program.getDataTypeManager()
    addr_factory = program.getAddressFactory()

    registered_count = 0

    for override_def in _pending_proto_overrides:
        addr_str = override_def.get('address')
        sig_str = override_def.get('signature')

        # Parse address
        try:
            if addr_str.startswith('0x'):
                addr_str_clean = addr_str[2:]
            else:
                addr_str_clean = addr_str
            call_addr = addr_factory.getDefaultAddressSpace().getAddress(int(addr_str_clean, 16))
        except Exception as e:
            log_info("Invalid address '%s': %s" % (addr_str, str(e)))
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


def clear_proto_overrides():
    """Clear all registered proto overrides and the cache."""
    from ghidra.program.model.pcode import HighFunction
    HighFunction.clearProtoOverrides()
    proto_cache.clear()
