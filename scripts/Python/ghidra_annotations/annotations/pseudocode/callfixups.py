# Callfixup support for decompilation
# Replaces calls to specific functions with custom pcode at decompile time

"""
Callfixups allow replacing calls to specific functions with custom pcode
during decompilation. This is similar to Ghidra's cspec callfixup mechanism,
but applies at decompile time rather than analysis time.

Usage:
    from ghidra_annotations.annotations.pseudocode.callfixups import register_callfixups

    # Call after pyghidra.start() but before decompilation
    register_callfixups()

The default callfixups are stored in:
    annotations/<program>/pseudocode/callfixups.json

This file is regenerated during export, but user modifications are preserved
by merging with the defaults.

JSON format:
    {
        "callfixups": {
            "stack_probe": {
                "type": "pattern",
                "pcode": ["INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x4,4)"],
                "description": "optional description"
            }
        }
    }
"""

import os
import json
from pathlib import Path
from ghidra_annotations.util.log import log_info


# ============================================================================
# Default callfixup definitions
# ============================================================================

# These are written to callfixups.json in the annotations directory.
# The pcode format is: OPCODE (output) = (input1), (input2), ...
# Varnode format: (space, offset, size)
#   - register: (register, 0x10, 4) for ESP (x86)
#   - const: (const, 0x4, 4) for constant 4

DEFAULT_CALLFIXUPS = {
    # Stack probe functions - these use RET 4 to pop their argument
    # The net effect is ESP += 4 (cancels the PUSH before the call)
    # This fixes BADSPACEBASE in functions that call stack_probe before frame setup
    "stack_probe": {
        "type": "pattern",  # Match function names containing this pattern
        "pcode": [
            "INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x4,4)"  # ESP = ESP + 4
        ],
        "description": "Watcom stack probe - pops 4-byte argument via RET 4"
    },
    "_STK": {
        "type": "pattern",
        "pcode": [
            "INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x4,4)"
        ],
        "description": "Watcom _STK stack probe variant"
    },
}

# Filename for the callfixups JSON file
CALLFIXUPS_FILENAME = "callfixups.json"

# ============================================================================
# Cache for callfixups loaded from JSON files
# ============================================================================

# Cache for callfixups to avoid repeated file I/O and survive cleanup
_callfixups_cache = {}
_callfixups_cache_dir = None
# Path to the main callfixups.json file (set by generate_callfixups_file)
_callfixups_json_path = None


# ============================================================================
# File generation
# ============================================================================

# Cache for the global callfixups.json content (to survive cleanup)
_global_callfixups_cache = None


def preload_global_callfixups(pseudocode_dir):
    """Preload the global callfixups.json file before cleanup.

    This caches the existing callfixups so they can be merged with defaults
    after the cleanup phase deletes the file.

    Args:
        pseudocode_dir: The pseudocode directory

    Returns:
        Dict of existing callfixups, or empty dict if not found
    """
    global _global_callfixups_cache, _callfixups_json_path

    callfixups_path = os.path.join(pseudocode_dir, CALLFIXUPS_FILENAME)
    _callfixups_json_path = callfixups_path
    _global_callfixups_cache = {}

    if os.path.exists(callfixups_path):
        try:
            with open(callfixups_path, 'r') as f:
                existing_data = json.load(f)
                _global_callfixups_cache = existing_data.get('callfixups', {})
                log_info("Preloaded %d callfixups from %s" % (
                    len(_global_callfixups_cache), callfixups_path))
        except Exception as e:
            log_info("Could not preload callfixups.json: %s" % str(e))

    return _global_callfixups_cache


def generate_callfixups_file(pseudocode_dir):
    """Generate the callfixups.json file in the pseudocode directory.

    This merges the default callfixups with any previously cached user-defined ones,
    preserving user modifications while ensuring defaults are always present.

    Call preload_global_callfixups() before cleanup to cache existing modifications.

    Args:
        pseudocode_dir: The pseudocode directory (e.g., annotations/nocedit.exe/pseudocode)

    Returns:
        Path to the generated file
    """
    global _callfixups_json_path, _global_callfixups_cache

    callfixups_path = os.path.join(pseudocode_dir, CALLFIXUPS_FILENAME)
    _callfixups_json_path = callfixups_path

    # Start with defaults
    merged_callfixups = dict(DEFAULT_CALLFIXUPS)

    # Merge with cached callfixups (preloaded before cleanup)
    if _global_callfixups_cache:
        merged_callfixups.update(_global_callfixups_cache)
        log_info("Merged %d cached callfixups with %d defaults" % (
            len(_global_callfixups_cache), len(DEFAULT_CALLFIXUPS)))

    # Write the merged callfixups
    output_data = {
        "_comment": "Callfixups replace calls to specific functions with custom pcode at decompile time",
        "_format": "type: 'pattern' matches function names containing the key, 'exact' requires exact match",
        "callfixups": merged_callfixups
    }

    try:
        with open(callfixups_path, 'w') as f:
            json.dump(output_data, f, indent=2, sort_keys=True)
        log_info("Generated %s with %d callfixups" % (callfixups_path, len(merged_callfixups)))
    except Exception as e:
        log_info("Failed to write callfixups.json: %s" % str(e))

    return callfixups_path


def load_callfixups_json(json_path):
    """Load callfixups from the main callfixups.json file.

    Args:
        json_path: Path to callfixups.json

    Returns:
        Dict of callfixup definitions, or empty dict if not found
    """
    if not json_path or not os.path.exists(json_path):
        return {}

    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
            return data.get('callfixups', {})
    except Exception:
        return {}


# ============================================================================
# Cache management functions
# ============================================================================

def set_callfixups_cache(json_path, callfixups):
    """Set a callfixups entry in the cache.

    Called by preload_callfixups to populate cache while loading from JSON.

    Args:
        json_path: Path to the JSON file
        callfixups: Dict of callfixup definitions
    """
    global _callfixups_cache
    _callfixups_cache[json_path] = callfixups


def preload_callfixups(base_dir):
    """Pre-load all callfixups from JSON files in a directory.

    Call this once before processing functions to cache all callfixups.
    Recursively scans all subdirectories.

    Args:
        base_dir: Directory containing function JSON files
    """
    global _callfixups_cache, _callfixups_cache_dir
    _callfixups_cache = {}
    _callfixups_cache_dir = base_dir

    if not base_dir or not os.path.exists(base_dir):
        return

    # Recursively scan for all .json files and load their callfixups
    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if filename.endswith('.json'):
                    json_path = os.path.join(root, filename)
                    try:
                        with open(json_path, 'r') as f:
                            data = json.load(f)
                            callfixups = data.get('callfixups')
                            if callfixups and isinstance(callfixups, dict):
                                log_info("Preloaded %d callfixups from %s" % (len(callfixups), json_path))
                                _callfixups_cache[json_path] = callfixups
                    except Exception:
                        pass
    except Exception:
        pass


def load_callfixups_for_function(json_path):
    """Load callfixups from an existing function JSON file.

    Looks for a 'callfixups' key in the JSON that contains a dict
    mapping target names to fixup definitions.

    Uses cache if preload_callfixups was called.

    Args:
        json_path: Path to the function's JSON file

    Returns:
        Dict of callfixups, or empty dict if none found
    """
    global _callfixups_cache

    if not json_path:
        return {}

    # Use cache if available
    if json_path in _callfixups_cache:
        return _callfixups_cache[json_path]

    # Fallback to file I/O (handles cache misses and path mismatches)
    if not os.path.exists(json_path):
        return {}

    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
            callfixups = data.get('callfixups')
            if callfixups and isinstance(callfixups, dict):
                return callfixups
    except Exception:
        pass

    return {}


# ============================================================================
# Registration functions
# ============================================================================

def register_callfixups(callfixups_json_path=None):
    """Register callfixups with Ghidra's DecompileCallback.

    This must be called after pyghidra.start() but before any decompilation.

    If callfixups_json_path is provided, loads callfixups from that file.
    Otherwise, uses the Python DEFAULT_CALLFIXUPS as a fallback.

    Args:
        callfixups_json_path: Optional path to callfixups.json file

    Returns:
        Number of callfixups registered
    """
    from ghidra.app.decompiler import DecompileCallback
    from java.util import Arrays

    # Clear any existing callfixups
    DecompileCallback.clearCallFixups()

    # Load callfixups from JSON file or use defaults
    if callfixups_json_path and os.path.exists(callfixups_json_path):
        callfixups = load_callfixups_json(callfixups_json_path)
        log_info("Loading callfixups from %s" % callfixups_json_path)
    else:
        callfixups = DEFAULT_CALLFIXUPS
        log_info("Using built-in default callfixups")

    registered_count = 0

    # Register callfixups
    for target_name, fixup_def in callfixups.items():
        fixup_type = fixup_def.get("type", "exact")
        pcode_lines = fixup_def.get("pcode", [])

        if not pcode_lines:
            continue

        if fixup_type == "pattern":
            DecompileCallback.registerCallFixupPattern(target_name, Arrays.asList(pcode_lines))
            registered_count += 1
            log_info("Registered callfixup (pattern): *%s*" % target_name)
        else:
            DecompileCallback.registerCallFixup(target_name, Arrays.asList(pcode_lines))
            registered_count += 1
            log_info("Registered callfixup (exact): %s" % target_name)

    log_info("Registered %d callfixups" % registered_count)
    return registered_count


def register_callfixups_from_directory(base_dir):
    """Load and register callfixups from JSON files in a directory.

    Scans JSON files for 'callfixups' key which should be a dict
    mapping target names to fixup definitions.

    Also populates the cache for preserving callfixups in output JSON.

    Args:
        base_dir: Directory containing function JSON files

    Returns:
        Number of callfixups loaded and registered
    """
    from ghidra.app.decompiler import DecompileCallback
    from java.util import Arrays

    if not base_dir or not os.path.exists(base_dir):
        return 0

    loaded_count = 0

    # Recursively scan for all .json files
    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if not filename.endswith('.json'):
                    continue

                json_path = os.path.join(root, filename)
                try:
                    with open(json_path, 'r') as f:
                        data = json.load(f)

                    callfixups = data.get('callfixups')
                    if not callfixups or not isinstance(callfixups, dict):
                        continue

                    # Cache for preservation in output JSON
                    set_callfixups_cache(json_path, callfixups)

                    # Register each callfixup
                    for target_name, fixup_def in callfixups.items():
                        pcode_lines = fixup_def.get("pcode", [])
                        if not pcode_lines:
                            continue

                        fixup_type = fixup_def.get("type", "exact")

                        if fixup_type == "pattern":
                            DecompileCallback.registerCallFixupPattern(target_name, Arrays.asList(pcode_lines))
                        else:
                            DecompileCallback.registerCallFixup(target_name, Arrays.asList(pcode_lines))

                        loaded_count += 1
                        log_info("Registered callfixup from JSON: %s (%s)" % (target_name, fixup_type))

                except (json.JSONDecodeError, ValueError, IOError):
                    continue
    except Exception:
        pass

    if loaded_count > 0:
        log_info("Loaded %d callfixups from JSON files" % loaded_count)

    return loaded_count


def clear_callfixups():
    """Clear all registered callfixups and the cache."""
    global _callfixups_cache
    from ghidra.app.decompiler import DecompileCallback
    DecompileCallback.clearCallFixups()
    _callfixups_cache = {}
