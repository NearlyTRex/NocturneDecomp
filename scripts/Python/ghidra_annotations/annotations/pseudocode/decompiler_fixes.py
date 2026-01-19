# Decompiler fixes registry
# Allows per-function enabling of experimental decompiler fixes
#
# This module integrates with the custom Ghidra decompiler fixes system
# to enable fixes like the MULTIEQUAL stack trace fix on a per-function basis.

"""
Decompiler fixes allow enabling experimental or specialized decompiler
behavior on a per-function basis. These fixes modify how the decompiler
processes specific functions, typically to work around edge cases or
enable special handling.

Available fixes:
- multiequal_stack_trace: Enables enhanced MULTIEQUAL tracing for stack
  variables, which can help resolve BADSPACEBASE issues in functions with
  complex control flow.

================================================================================
GLOBAL DECOMPILER_FIXES FILE
================================================================================

Location:
    annotations/<program>/pseudocode/decompiler_fixes.json

This file contains decompiler fixes that apply to specific functions.
The file is regenerated during export, but user modifications are preserved.

JSON Format:
    {
        "<fix_name>": [
            "<function_address_1>",
            "<function_address_2>",
            ...
        ]
    }

Fields:
    - fix_name: Name of the fix to enable (e.g., "multiequal_stack_trace")
    - function_addresses: List of function entry addresses (hex format)

Example (global decompiler_fixes.json):
    {
        "multiequal_stack_trace": [
            "0x00401000",
            "0x00402500"
        ],
        "force_spacebase": [
            "0x00401000",
            "0x00405a00"
        ],
        "alias_recovery": [
            "0x00401000"
        ],
        "spacebase_propagation": [
            "0x004319b0"
        ]
    }

================================================================================
PER-FUNCTION DECOMPILER_FIXES (in function JSON files)
================================================================================

Location:
    annotations/<program>/pseudocode/src/<function_name>.json

Per-function decompiler fixes allow specifying which fixes should be enabled
for a specific function. These are stored in the function's JSON file and are
preserved across exports.

JSON Format (inside function JSON):
    {
        "function": { ... },
        "decompiler_fixes": [
            "<fix_name_1>",
            "<fix_name_2>",
            ...
        ],
        ...other function data...
    }

Fields:
    - decompiler_fixes: List of fix names to enable for this function

Example (FUN_00401000.json):
    {
        "function": {
            "name": "FUN_00401000",
            "address": "0x00401000"
        },
        "decompiler_fixes": [
            "multiequal_stack_trace",
            "force_spacebase",
            "alias_recovery"
        ]
    }

================================================================================
AVAILABLE FIXES
================================================================================

multiequal_stack_trace (DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0)
    Enables enhanced MULTIEQUAL tracing for stack variables. This helps the
    decompiler track stack pointer changes through complex control flow paths,
    particularly in functions with multiple branches that modify the stack.

    Use when:
    - Function has BADSPACEBASE errors
    - Function has complex control flow (loops, switches, multiple returns)
    - Standard decompilation produces incorrect stack variable references

force_spacebase (DFIX_FORCE_SPACEBASE = 1 << 1)
    Forces construction of the spacebase input varnode during type inference
    if it doesn't already exist. This is applied in ActionInferTypes::apply
    (coreaction.cc) and enables type propagation for stack-relative accesses
    even when the stack pointer wasn't initially recognized as a function input.

    Use when:
    - Function has BADSPACEBASE errors
    - Stack pointer (ESP) wasn't marked as function input by calling convention
    - Type inference fails to propagate types to stack variables

    Location: coreaction.cc (ActionInferTypes::apply)

stack_symbol_lookup (DFIX_STACK_SYMBOL_LOOKUP = 1 << 2)
    Improves variable recognition by trying harder to find containing symbols
    when a direct symbol lookup fails. Instead of immediately returning a 1-byte
    TYPE_UNKNOWN, this fix:
    1. Queries with a larger size to find containing symbols
    2. Calculates offset within containing symbol and gets subtype
    3. Falls back to pointer-sized TYPE_UNKNOWN instead of 1-byte

    Use when:
    - Function shows TYPE_UNKNOWN for stack variables that should have types
    - Local variables weren't fully enumerated but context suggests types
    - Decompiled output has many 1-byte unknown references

    Location: type.cc (TypeSpacebase::getSubType)

alias_recovery (DFIX_ALIAS_RECOVERY = 1 << 3)
    Attempts to construct the spacebase input varnode in the alias checker
    before bailing out. Without this fix, AliasChecker::gatherInternal returns
    early if no spacebase input exists, skipping alias analysis entirely.
    This fix tries to construct the spacebase so alias analysis can proceed.

    Use when:
    - Function has BADSPACEBASE errors
    - Alias analysis appears to be missing (incorrect pointer aliasing)
    - Stack pointer wasn't recognized as input during initial analysis

    Location: varmap.cc (AliasChecker::gatherInternal)

spacebase_propagation (DFIX_SPACEBASE_PROPAGATION = 1 << 4)
    Adds a new rule (RuleSpacebaseCopy) that propagates the spacebase flag
    when the stack pointer is copied to another register. This handles the
    common pattern:
        MOV EAX, ESP    ; Copy stack pointer to general register
        PUSH EAX        ; Pass as argument

    Without this fix, the copy loses spacebase typing and subsequent uses
    of EAX aren't recognized as stack references.

    Use when:
    - Function copies ESP to another register before use
    - Stack pointer is passed as an argument to another function
    - Decompiler loses track of stack references after MOV ESP pattern

    Location: ruleaction.cc/hh (RuleSpacebaseCopy), coreaction.cc (rule registration)

================================================================================
USAGE
================================================================================

    from ghidra_annotations.annotations.pseudocode.decompiler_fixes import (
        preload_decompiler_fixes, register_decompiler_fixes,
        preload_per_function_decompiler_fixes
    )

    # Load from global file
    preload_decompiler_fixes(pseudocode_dir)

    # Load from per-function JSON files
    preload_per_function_decompiler_fixes(pseudocode_src_dir)

    # Register with decompiler (call after opening DecompInterface)
    register_decompiler_fixes(decompiler_interface)

================================================================================
HOW IT WORKS
================================================================================

1. Fixes are loaded from both global and per-function JSON files
2. Per-function fixes are merged with global fixes (union)
3. All fixes are registered with the decompiler before decompilation begins
4. The decompiler applies the specified fixes when processing each function
5. After decompilation, fixes are cleared from the registry
"""

import os
import json
from ghidra.app.decompiler import DecompInterface

from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager

# Fix flag constants - must match DecompilerFixFlags in decompiler_fixes.hh
DFIX_NONE = 0
DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0
DFIX_FORCE_SPACEBASE = 1 << 1
DFIX_STACK_SYMBOL_LOOKUP = 1 << 2
DFIX_ALIAS_RECOVERY = 1 << 3
DFIX_SPACEBASE_PROPAGATION = 1 << 4

# Mapping from JSON key names to flag values
FIX_NAME_TO_FLAG = {
    "multiequal_stack_trace": DFIX_MULTIEQUAL_STACK_TRACE,
    "force_spacebase": DFIX_FORCE_SPACEBASE,
    "stack_symbol_lookup": DFIX_STACK_SYMBOL_LOOKUP,
    "alias_recovery": DFIX_ALIAS_RECOVERY,
    "spacebase_propagation": DFIX_SPACEBASE_PROPAGATION,
}

# Cache of loaded fixes configuration (global file - bitmask per address)
_fixes_cache = {}

# Cache manager for per-function decompiler_fixes (list of fix names)
per_function_fixes_cache = JsonCacheManager('decompiler_fixes', json_key='decompiler_fixes',
                                             default_factory=list, type_check=list)


def preload_decompiler_fixes(pseudocode_dir):
    """Pre-load decompiler fixes configuration from JSON file.

    Args:
        pseudocode_dir: Path to the pseudocode directory containing decompiler_fixes.json
    """
    global _fixes_cache
    _fixes_cache = {}

    fixes_path = os.path.join(pseudocode_dir, "decompiler_fixes.json")
    if not os.path.exists(fixes_path):
        return

    try:
        with open(fixes_path, 'r') as f:
            data = json.load(f)

        # Parse the JSON - format is {"fix_name": ["0xaddr1", "0xaddr2", ...]}
        for fix_name, addresses in data.items():
            if fix_name not in FIX_NAME_TO_FLAG:
                log_info("Warning: Unknown decompiler fix '%s' in decompiler_fixes.json" % fix_name)
                continue

            flag = FIX_NAME_TO_FLAG[fix_name]
            for addr_str in addresses:
                # Parse address (supports "0x..." or just decimal)
                if addr_str.startswith("0x") or addr_str.startswith("0X"):
                    addr = int(addr_str, 16)
                else:
                    addr = int(addr_str)

                if addr not in _fixes_cache:
                    _fixes_cache[addr] = 0
                _fixes_cache[addr] |= flag

        if _fixes_cache:
            log_info("Loaded decompiler fixes for %d functions" % len(_fixes_cache))
    except Exception as e:
        log_info("Error loading decompiler_fixes.json: %s" % str(e))


def generate_decompiler_fixes_file(pseudocode_dir):
    """Generate the decompiler_fixes.json file from cached data.

    Args:
        pseudocode_dir: Path to the pseudocode directory

    Returns:
        Path to the generated file
    """
    global _fixes_cache

    fixes_path = os.path.join(pseudocode_dir, "decompiler_fixes.json")

    # Convert cache back to JSON format
    output = {}
    for addr, flags in _fixes_cache.items():
        for fix_name, flag_value in FIX_NAME_TO_FLAG.items():
            if flags & flag_value:
                if fix_name not in output:
                    output[fix_name] = []
                output[fix_name].append("0x%x" % addr)

    # Sort addresses for consistent output
    for fix_name in output:
        output[fix_name].sort(key=lambda x: int(x, 16))

    try:
        with open(fixes_path, 'w') as f:
            json.dump(output, f, indent=2)
            f.write("\n")
    except Exception as e:
        log_info("Error writing decompiler_fixes.json: %s" % str(e))

    return fixes_path


def register_decompiler_fixes(decompiler_interface):
    """Register all cached decompiler fixes with the decompiler process.

    This must be called AFTER a DecompInterface has been opened with a program,
    and BEFORE decompilation begins.

    Args:
        decompiler_interface: An open DecompInterface instance

    Returns:
        Number of functions registered
    """
    global _fixes_cache
    if not _fixes_cache:
        return 0

    # Group addresses by flag combination
    by_flags = {}
    for addr, flags in _fixes_cache.items():
        if flags not in by_flags:
            by_flags[flags] = []
        by_flags[flags].append(addr)

    total_registered = 0
    for flags, addresses in by_flags.items():
        addr_array = [int(addr) for addr in addresses]
        try:
            success = decompiler_interface.setDecompilerFixes(flags, addr_array)
            if success:
                total_registered += len(addresses)
                log_info("Registered %d functions with decompiler fix flags 0x%x" % (len(addresses), flags))
            else:
                log_info("Failed to register decompiler fixes with flags 0x%x" % flags)
        except Exception as e:
            log_info("Error registering decompiler fixes: %s" % str(e))
    return total_registered


def clear_decompiler_fixes(decompiler_interface):
    """Clear all registered decompiler fixes.

    Args:
        decompiler_interface: An open DecompInterface instance

    Returns:
        True if successful
    """
    try:
        success = decompiler_interface.clearDecompilerFixes()
        if success:
            log_info("Cleared decompiler fixes registry")
        return success
    except Exception as e:
        log_info("Error clearing decompiler fixes: %s" % str(e))
        return False


def add_function_fix(func_addr, fix_name):
    """Add a decompiler fix for a specific function (updates cache).

    Args:
        func_addr: Function entry address (int)
        fix_name: Name of the fix (e.g., "multiequal_stack_trace")
    """
    global _fixes_cache

    if fix_name not in FIX_NAME_TO_FLAG:
        log_info("Warning: Unknown decompiler fix '%s'" % fix_name)
        return

    flag = FIX_NAME_TO_FLAG[fix_name]
    if func_addr not in _fixes_cache:
        _fixes_cache[func_addr] = 0
    _fixes_cache[func_addr] |= flag


def get_function_fixes(func_addr):
    """Get the fix flags for a specific function.

    Args:
        func_addr: Function entry address (int)

    Returns:
        Bitmask of fix flags, or 0 if none
    """
    global _fixes_cache
    return _fixes_cache.get(func_addr, 0)


def has_fix(func_addr, fix_name):
    """Check if a specific fix is enabled for a function.

    Args:
        func_addr: Function entry address (int)
        fix_name: Name of the fix

    Returns:
        True if the fix is enabled
    """
    if fix_name not in FIX_NAME_TO_FLAG:
        return False

    flag = FIX_NAME_TO_FLAG[fix_name]
    return (get_function_fixes(func_addr) & flag) != 0


# ============================================================================
# Per-function decompiler_fixes support (from function JSON files)
# ============================================================================

def preload_per_function_decompiler_fixes(base_dir):
    """Pre-load all decompiler_fixes from function JSON files in a directory.

    Call this once before processing functions to cache all per-function fixes.
    Also merges them into _fixes_cache so they're registered with the decompiler.
    Recursively scans all subdirectories.

    Args:
        base_dir: Directory containing function JSON files
    """
    global _fixes_cache

    # Clear the per-function cache
    per_function_fixes_cache.clear()

    if not base_dir or not os.path.exists(base_dir):
        return

    # Recursively scan for all .json files and load their decompiler_fixes
    # We do this manually because we also need to extract the function address
    # from the same JSON file to merge into the bitmask cache
    loaded_count = 0
    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if filename.endswith('.json'):
                    json_path = os.path.join(root, filename)
                    try:
                        with open(json_path, 'r') as f:
                            data = json.load(f)
                            decompiler_fixes = data.get('decompiler_fixes')
                            if decompiler_fixes and isinstance(decompiler_fixes, list):
                                # Cache for preservation in output JSON
                                per_function_fixes_cache.set_cache(json_path, decompiler_fixes)

                                # Also merge into _fixes_cache for registration
                                # Get function address from the JSON
                                func_addr_str = data.get('function', {}).get('address', '')
                                if func_addr_str:
                                    if func_addr_str.startswith('0x') or func_addr_str.startswith('0X'):
                                        func_addr = int(func_addr_str, 16)
                                    else:
                                        func_addr = int(func_addr_str, 16)

                                    # Add each fix name to the cache
                                    for fix_name in decompiler_fixes:
                                        if fix_name in FIX_NAME_TO_FLAG:
                                            flag = FIX_NAME_TO_FLAG[fix_name]
                                            if func_addr not in _fixes_cache:
                                                _fixes_cache[func_addr] = 0
                                            _fixes_cache[func_addr] |= flag

                                loaded_count += 1
                                log_info("Preloaded decompiler_fixes from %s: %s" % (
                                    json_path, decompiler_fixes))
                    except Exception:
                        pass
    except Exception:
        pass

    if loaded_count > 0:
        log_info("Preloaded decompiler_fixes from %d function JSON files" % loaded_count)


