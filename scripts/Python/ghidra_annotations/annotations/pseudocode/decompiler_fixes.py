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

from ghidra_annotations.util.log import log_info, log_warning
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

FIXES_FILENAME = "decompiler_fixes.json"

# Fixes from the global file: {function address: flags}. Only these are
# written back to it, so a fix given in a function's JSON stays there.
_fixes_cache = {}

# Fixes from the function JSONs: {function address: flags}
_per_function_flags = {}

# Cache manager for per-function decompiler_fixes (list of fix names)
per_function_fixes_cache = JsonCacheManager('decompiler_fixes', json_key='decompiler_fixes',
                                             default_factory=list, type_check=list)


def _add_flag(flags_by_addr, addr, flag):
    flags_by_addr[addr] = flags_by_addr.get(addr, 0) | flag


def preload_decompiler_fixes(pseudocode_dir):
    """Pre-load decompiler fixes configuration from JSON file.

    An entry that cannot be read is warned about and left out; the others load.

    Args:
        pseudocode_dir: Path to the pseudocode directory containing decompiler_fixes.json
    """
    _fixes_cache.clear()

    fixes_path = os.path.join(pseudocode_dir, FIXES_FILENAME)
    if not os.path.exists(fixes_path):
        return
    try:
        with open(fixes_path, 'r') as f:
            data = json.load(f)
    except (OSError, ValueError) as e:
        log_warning("Could not read %s: %s" % (fixes_path, e))
        return
    if not isinstance(data, dict):
        log_warning("%s is not an object of fix names" % fixes_path)
        return

    # {"fix_name": ["0xaddr1", "0xaddr2", ...]}; an address without 0x is decimal
    for fix_name, addresses in data.items():
        if fix_name not in FIX_NAME_TO_FLAG:
            log_warning("Unknown decompiler fix '%s' in %s" % (fix_name, FIXES_FILENAME))
            continue
        for addr_str in addresses:
            try:
                addr = int(addr_str, 16) if addr_str.lower().startswith("0x") else int(addr_str)
            except (AttributeError, ValueError):
                log_warning("Bad address %r for decompiler fix '%s'" % (addr_str, fix_name))
                continue
            _add_flag(_fixes_cache, addr, FIX_NAME_TO_FLAG[fix_name])

    if _fixes_cache:
        log_info("Loaded decompiler fixes for %d functions" % len(_fixes_cache))


def generate_decompiler_fixes_file(pseudocode_dir):
    """Generate the decompiler_fixes.json file from the global file's cached fixes.

    Args:
        pseudocode_dir: Path to the pseudocode directory

    Returns:
        Path to the generated file
    """
    output = {}
    for addr in sorted(_fixes_cache):
        for fix_name, flag_value in FIX_NAME_TO_FLAG.items():
            if _fixes_cache[addr] & flag_value:
                output.setdefault(fix_name, []).append("0x%x" % addr)

    fixes_path = os.path.join(pseudocode_dir, FIXES_FILENAME)
    with open(fixes_path, 'w') as f:
        json.dump(output, f, indent=2)
        f.write("\n")
    return fixes_path


def register_decompiler_fixes(decompiler_interface):
    """Register all cached decompiler fixes, global and per-function, with the decompiler process.

    This must be called AFTER a DecompInterface has been opened with a program,
    and BEFORE decompilation begins.

    Args:
        decompiler_interface: An open DecompInterface instance

    Returns:
        Number of functions registered
    """
    merged = dict(_fixes_cache)
    for addr, flags in _per_function_flags.items():
        _add_flag(merged, addr, flags)

    # Group addresses by flag combination
    by_flags = {}
    for addr, flags in merged.items():
        by_flags.setdefault(flags, []).append(addr)

    total_registered = 0
    for flags, addresses in by_flags.items():
        try:
            success = decompiler_interface.setDecompilerFixes(flags, addresses)
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


# ============================================================================
# Per-function decompiler_fixes support (from function JSON files)
# ============================================================================

def preload_per_function_decompiler_fixes(base_dir):
    """Pre-load all decompiler_fixes from function JSON files in a directory.

    Call this once before processing functions to cache all per-function fixes,
    both for preserving them in the function's new JSON and for registering
    them with the decompiler. Recursively scans all subdirectories. A JSON that
    cannot be read is warned about: cleanup deletes it next, fixes and all.

    Args:
        base_dir: Directory containing function JSON files
    """
    per_function_fixes_cache.clear()
    _per_function_flags.clear()
    if not base_dir or not os.path.exists(base_dir):
        return

    loaded_count = 0
    for root, _dirs, files in os.walk(base_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue
            json_path = os.path.join(root, filename)
            try:
                with open(json_path, 'r') as f:
                    data = json.load(f)
            except (OSError, ValueError) as e:
                log_warning("Could not read decompiler_fixes from %s: %s" % (json_path, e))
                continue
            decompiler_fixes = data.get('decompiler_fixes')
            if not decompiler_fixes or not isinstance(decompiler_fixes, list):
                continue
            per_function_fixes_cache.set_cache(json_path, decompiler_fixes)
            # The exported address is bare hex: "0040b870"
            func_addr = int(data['function']['address'], 16)
            for fix_name in decompiler_fixes:
                if fix_name in FIX_NAME_TO_FLAG:
                    _add_flag(_per_function_flags, func_addr, FIX_NAME_TO_FLAG[fix_name])
                else:
                    log_warning("Unknown decompiler fix '%s' in %s" % (fix_name, json_path))
            loaded_count += 1
            log_info("Preloaded decompiler_fixes from %s: %s" % (json_path, decompiler_fixes))

    if loaded_count > 0:
        log_info("Preloaded decompiler_fixes from %d function JSON files" % loaded_count)


