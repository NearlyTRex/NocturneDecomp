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
            "0x00402500",
            "0x00405a00"
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
            "multiequal_stack_trace"
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

# Fix flag constants - must match DecompilerFixFlags in decompiler_fixes.hh
DFIX_NONE = 0
DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0

# Mapping from JSON key names to flag values
FIX_NAME_TO_FLAG = {
    "multiequal_stack_trace": DFIX_MULTIEQUAL_STACK_TRACE,
}

# Cache of loaded fixes configuration (global file)
_fixes_cache = {}

# Cache for per-function decompiler_fixes loaded from JSON files
_per_function_fixes_cache = {}
_per_function_fixes_cache_dir = None


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
        # Convert to Java long array
        addr_array = [long(addr) for addr in addresses]

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
    global _per_function_fixes_cache, _per_function_fixes_cache_dir, _fixes_cache
    _per_function_fixes_cache = {}
    _per_function_fixes_cache_dir = base_dir

    if not base_dir or not os.path.exists(base_dir):
        return

    # Recursively scan for all .json files and load their decompiler_fixes
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
                                _per_function_fixes_cache[json_path] = decompiler_fixes

                                # Also merge into _fixes_cache for registration
                                # Get function address from the JSON
                                func_addr_str = data.get('function', {}).get('address', '')
                                if func_addr_str:
                                    if func_addr_str.startswith('0x') or func_addr_str.startswith('0X'):
                                        func_addr = int(func_addr_str, 16)
                                    else:
                                        func_addr = int(func_addr_str)

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


def load_decompiler_fixes_for_function(json_path):
    """Load decompiler_fixes from an existing function JSON file.

    Looks for a 'decompiler_fixes' key in the JSON that contains a list
    of fix names (e.g., ["multiequal_stack_trace"]).

    Uses cache if preload_per_function_decompiler_fixes was called.

    Args:
        json_path: Path to the function's JSON file

    Returns:
        List of fix names, or empty list if none found
    """
    global _per_function_fixes_cache

    if not json_path:
        return []

    # Use cache if available
    if json_path in _per_function_fixes_cache:
        return _per_function_fixes_cache[json_path]

    # Fallback to file I/O (handles cache misses and path mismatches)
    if not os.path.exists(json_path):
        return []

    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
            decompiler_fixes = data.get('decompiler_fixes')
            if decompiler_fixes and isinstance(decompiler_fixes, list):
                return decompiler_fixes
    except Exception:
        pass

    return []


def set_decompiler_fixes_cache(json_path, decompiler_fixes):
    """Set a decompiler_fixes entry in the cache.

    Called by preload to populate cache while loading from JSON.

    Args:
        json_path: Path to the JSON file
        decompiler_fixes: List of fix names
    """
    global _per_function_fixes_cache
    _per_function_fixes_cache[json_path] = decompiler_fixes
