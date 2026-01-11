# Decompiler fixes registry
# Allows per-function enabling of experimental decompiler fixes
#
# This module integrates with the custom Ghidra decompiler fixes system
# to enable fixes like the MULTIEQUAL stack trace fix on a per-function basis.

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

# Cache of loaded fixes configuration
_fixes_cache = {}


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
