# Callfixup support for decompilation
# Replaces calls to specific functions with custom pcode at decompile time

"""
Callfixups allow replacing calls to specific functions with custom P-code
during decompilation. This matches Ghidra's cspec callfixup mechanism:
the entire CALL instruction is replaced with the specified P-code.

This is useful for:
- Replacing calls to compiler intrinsics (e.g., __alloca_probe, _chkstk)
- Modeling the net effect of functions that don't need to actually execute
- Fixing stack adjustments that confuse the decompiler

================================================================================
GLOBAL CALLFIXUPS FILE
================================================================================

Location:
    annotations/<program>/pseudocode/callfixups.json

This file contains callfixups that apply to ALL functions in the program.
The callfixups are registered in memory only - the program database is not modified.

JSON Format (matching cspec structure):
    [
        {
            "name": "<identifier>",
            "targets": ["<func_name1>", "<func_name2>", ...],
            "pcode": {
                "body": [
                    "<sleigh_statement_1>",
                    "<sleigh_statement_2>",
                    ...
                ],
                "paramshift": 0
            },
            "description": "optional description of what this fixes"
        }
    ]

Fields:
    - name: Identifier for this callfixup (used for logging/reference)
    - targets: Array of exact function names to match
    - pcode: P-code injection specification
        - body: Array of SLEIGH statements (e.g., "ESP = ESP - EAX;")
        - paramshift: (optional) Number of parameters to remove from front
    - description: Optional human-readable description

Example (callfixups.json):
    [
        {
            "name": "stack_probe",
            "targets": ["_chkstk", "__alloca_probe", "__alloca_probe_16"],
            "pcode": {
                "body": [
                    "ESP = ESP - EAX;"
                ]
            },
            "description": "Replace stack probe with ESP = ESP - EAX"
        },
        {
            "name": "get_pc_thunk_bx",
            "targets": ["__i686.get_pc_thunk.bx"],
            "pcode": {
                "body": [
                    "EBX = * ESP;",
                    "ESP = ESP + 4;"
                ]
            },
            "description": "Pop return address into EBX"
        }
    ]

================================================================================
SLEIGH SYNTAX
================================================================================

The body uses SLEIGH semantic syntax - the same language used in .slaspec files.
Register names are interpreted from the processor specification.

Common patterns:
    ESP = ESP - EAX;           # Subtract EAX from ESP
    EBX = * ESP;               # Load from memory at ESP into EBX
    ESP = ESP + 4;             # Add 4 to ESP
    EAX = 0;                   # Set EAX to zero
    * ESP = EAX;               # Store EAX to memory at ESP

================================================================================
USAGE
================================================================================

    from ghidra_annotations.annotations.pseudocode.callfixups import register_callfixups

    # Call after pyghidra.start() but before decompilation
    register_callfixups(callfixups_json_path)
"""

import os
import json
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager


# Filename for the callfixups JSON file
CALLFIXUPS_FILENAME = "callfixups.json"

# Cache manager for callfixups (global only, root-level array, no per-function files)
callfixups_cache = JsonCacheManager('callfixups', json_key=None,
                                     default_factory=list, type_check=list)


def generate_callfixups_file(pseudocode_dir):
    """Generate the callfixups.json file in the pseudocode directory.

    Preserves any previously cached user-defined callfixups.

    Call callfixups_cache.preload_global() before cleanup to cache existing modifications.

    Args:
        pseudocode_dir: The pseudocode directory (e.g., annotations/nocedit.exe/pseudocode)

    Returns:
        Path to the generated file
    """
    callfixups_path = os.path.join(pseudocode_dir, CALLFIXUPS_FILENAME)

    # Use cached callfixups (preloaded before cleanup)
    callfixups = callfixups_cache.get_global_cache()

    # Write the callfixups file as a top-level array
    try:
        with open(callfixups_path, 'w') as f:
            json.dump(callfixups, f, indent=2)
            f.write("\n")
        log_info("Generated %s with %d callfixups" % (callfixups_path, len(callfixups)))
    except Exception as e:
        log_info("Failed to write callfixups.json: %s" % str(e))

    return callfixups_path


def load_callfixups_json(json_path):
    """Load callfixups from the callfixups.json file.

    Args:
        json_path: Path to callfixups.json

    Returns:
        List of callfixup definitions, or empty list if not found
    """
    if not json_path or not os.path.exists(json_path):
        return []

    try:
        with open(json_path, 'r') as f:
            return json.load(f)
    except Exception:
        return []


def register_callfixups(callfixups_json_path=None):
    """Register callfixups with Ghidra's DecompileCallback.

    Callfixups are registered in memory only - the program database is not modified.

    This must be called after pyghidra.start() but before any decompilation.

    Args:
        callfixups_json_path: Path to callfixups.json file

    Returns:
        Number of callfixups registered
    """
    from ghidra.app.decompiler import DecompileCallback
    from java.util import Arrays

    # Clear any existing callfixups
    DecompileCallback.clearCallFixups()

    # Load callfixups from JSON file
    if callfixups_json_path and os.path.exists(callfixups_json_path):
        callfixups = load_callfixups_json(callfixups_json_path)
        log_info("Loading callfixups from %s" % callfixups_json_path)
    else:
        callfixups = []
        log_info("No callfixups.json found")

    if not callfixups:
        log_info("No callfixups to register")
        return 0

    registered_count = 0

    # Register each callfixup
    for fixup in callfixups:
        name = fixup.get("name", "unnamed")
        targets = fixup.get("targets", [])
        pcode_spec = fixup.get("pcode", {})
        body = pcode_spec.get("body", [])
        paramshift = pcode_spec.get("paramshift", 0)

        if not targets or not body:
            log_info("Skipping callfixup '%s': missing targets or body" % name)
            continue

        # Convert body array to Java list
        body_list = Arrays.asList(body)
        targets_list = Arrays.asList(targets)

        # Register with Ghidra (pass the name so it shows in warnings)
        shift_info = " (paramshift=%d)" % paramshift if paramshift > 0 else ""
        DecompileCallback.registerCallFixupTargets(name, targets_list, body_list, paramshift)
        registered_count += len(targets)
        log_info("Registered callfixup '%s': %s%s" % (name, targets, shift_info))

    log_info("Registered %d callfixups" % registered_count)
    return registered_count


def clear_callfixups():
    """Clear all registered callfixups."""
    from ghidra.app.decompiler import DecompileCallback
    DecompileCallback.clearCallFixups()
