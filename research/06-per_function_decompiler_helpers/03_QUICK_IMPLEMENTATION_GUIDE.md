# Quick Implementation Guide

This guide provides copy-paste code snippets for implementing the easiest per-function
helpers. Start with Tier 1 items as they require the least modification.

## Unified JSON Schema

Extend function JSON files with a `function_properties` section:

```json
{
  "function": {
    "name": "FUN_00401000",
    "address": "0x00401000"
  },
  "function_properties": {
    "inline": false,
    "noreturn": true,
    "varargs": false,
    "custom_storage": false,
    "calling_convention": "__thiscall",
    "extrapop": 8
  },
  "callfixups": { ... },
  "proto_overrides": [ ... ],
  "pcode_overrides": { ... },
  "decompiler_fixes": [ ... ]
}
```

---

## Java Changes (DecompileCallback.java)

Add these static registries near the existing ones (around line 63):

```java
// ============================================================================
// Per-function property overrides
// ============================================================================

// Function inline override
private static Map<Long, Boolean> inlineOverrides = new HashMap<>();

public static void registerInlineOverride(long funcAddr, boolean inline) {
    inlineOverrides.put(funcAddr, inline);
}

public static boolean hasInlineOverride(long funcAddr) {
    return inlineOverrides.containsKey(funcAddr);
}

public static boolean getInlineOverride(long funcAddr) {
    return inlineOverrides.get(funcAddr);
}

// Function noreturn override
private static Map<Long, Boolean> noReturnOverrides = new HashMap<>();

public static void registerNoReturnOverride(long funcAddr, boolean noReturn) {
    noReturnOverrides.put(funcAddr, noReturn);
}

public static boolean hasNoReturnOverride(long funcAddr) {
    return noReturnOverrides.containsKey(funcAddr);
}

public static boolean getNoReturnOverride(long funcAddr) {
    return noReturnOverrides.get(funcAddr);
}

// Function varargs override
private static Map<Long, Boolean> varArgsOverrides = new HashMap<>();

public static void registerVarArgsOverride(long funcAddr, boolean varArgs) {
    varArgsOverrides.put(funcAddr, varArgs);
}

public static boolean hasVarArgsOverride(long funcAddr) {
    return varArgsOverrides.containsKey(funcAddr);
}

public static boolean getVarArgsOverride(long funcAddr) {
    return varArgsOverrides.get(funcAddr);
}

// Function calling convention override
private static Map<Long, String> callingConventionOverrides = new HashMap<>();

public static void registerCallingConventionOverride(long funcAddr, String cc) {
    callingConventionOverrides.put(funcAddr, cc);
}

public static boolean hasCallingConventionOverride(long funcAddr) {
    return callingConventionOverrides.containsKey(funcAddr);
}

public static String getCallingConventionOverride(long funcAddr) {
    return callingConventionOverrides.get(funcAddr);
}

// Function extrapop override
private static Map<Long, Integer> extrapopOverrides = new HashMap<>();

public static void registerExtrapopOverride(long funcAddr, int extrapop) {
    extrapopOverrides.put(funcAddr, extrapop);
}

public static boolean hasExtrapopOverride(long funcAddr) {
    return extrapopOverrides.containsKey(funcAddr);
}

public static int getExtrapopOverride(long funcAddr) {
    return extrapopOverrides.get(funcAddr);
}

// Clear all property overrides
public static void clearPropertyOverrides() {
    inlineOverrides.clear();
    noReturnOverrides.clear();
    varArgsOverrides.clear();
    callingConventionOverrides.clear();
    extrapopOverrides.clear();
}
```

---

## Java Changes (FunctionPrototype.java)

Modify `grabFromFunction()` to check registries (around line 150):

```java
public void grabFromFunction(Function f) {
    long funcAddr = f.getEntryPoint().getOffset();

    // VarArgs - check registry first
    if (DecompileCallback.hasVarArgsOverride(funcAddr)) {
        dotdotdot = DecompileCallback.getVarArgsOverride(funcAddr);
    } else {
        dotdotdot = func.hasVarArgs();
    }

    // Inline - check registry first
    if (DecompileCallback.hasInlineOverride(funcAddr)) {
        isinline = DecompileCallback.getInlineOverride(funcAddr);
    } else {
        isinline = func.isInline();
    }

    // NoReturn - check registry first
    if (DecompileCallback.hasNoReturnOverride(funcAddr)) {
        noreturn = DecompileCallback.getNoReturnOverride(funcAddr);
    } else {
        noreturn = func.hasNoReturn() | isNoReturnInjection(f, injectname);
    }

    // Custom storage (no override for now)
    customstorage = func.hasCustomVariableStorage();

    // Calling convention - check registry first
    if (DecompileCallback.hasCallingConventionOverride(funcAddr)) {
        modelname = DecompileCallback.getCallingConventionOverride(funcAddr);
    } else {
        modelname = f.getCallingConventionName();
        if (modelname == null) {
            modelname = Function.DEFAULT_CALLING_CONVENTION_STRING;
        }
    }

    // Extrapop - check registry first, then existing override, then database
    if (DecompileCallback.hasExtrapopOverride(funcAddr)) {
        extrapop = DecompileCallback.getExtrapopOverride(funcAddr);
    } else if (overrideExtrapop != HighFunction.UNKNOWN_STACK_DEPTH_CHANGE) {
        extrapop = overrideExtrapop;
    } else {
        extrapop = f.getStackPurgeSize();
    }

    // ... rest of method unchanged
}
```

---

## Python Module: function_properties.py

Create a new file: `scripts/Python/ghidra_annotations/annotations/pseudocode/function_properties.py`

```python
"""
Per-function property overrides for decompilation.

Allows overriding function properties like inline, noreturn, varargs,
calling convention, and extrapop without modifying the program database.

================================================================================
JSON FORMAT
================================================================================

In function JSON files (annotations/<program>/pseudocode/src/<function>.json):

{
    "function": { ... },
    "function_properties": {
        "inline": true,
        "noreturn": false,
        "varargs": true,
        "calling_convention": "__thiscall",
        "extrapop": 8
    }
}

All fields are optional. Only specified properties are overridden.

================================================================================
USAGE
================================================================================

    from ghidra_annotations.annotations.pseudocode.function_properties import (
        preload_function_properties, register_function_properties
    )

    # Call before cleanup to cache existing properties
    preload_function_properties(pseudocode_src_dir)

    # Call after pyghidra.start() to register with decompiler
    register_function_properties()
"""

import os
import json
from ghidra_annotations.util.log import log_info


# Cache for function properties loaded from JSON files
_properties_cache = {}
_properties_cache_dir = None


def preload_function_properties(base_dir):
    """Pre-load all function properties from JSON files.

    Call this once before processing functions to cache all properties.
    Recursively scans all subdirectories.

    Args:
        base_dir: Directory containing function JSON files
    """
    global _properties_cache, _properties_cache_dir
    _properties_cache = {}
    _properties_cache_dir = base_dir

    if not base_dir or not os.path.exists(base_dir):
        return

    try:
        for root, dirs, files in os.walk(base_dir):
            for filename in files:
                if filename.endswith('.json'):
                    json_path = os.path.join(root, filename)
                    try:
                        with open(json_path, 'r') as f:
                            data = json.load(f)

                        func_props = data.get('function_properties')
                        if func_props and isinstance(func_props, dict):
                            # Get function address
                            func_data = data.get('function', {})
                            addr_str = func_data.get('address', '')
                            if addr_str:
                                if addr_str.startswith('0x') or addr_str.startswith('0X'):
                                    addr = int(addr_str, 16)
                                else:
                                    addr = int(addr_str)

                                _properties_cache[addr] = func_props
                                log_info("Preloaded function properties for 0x%x from %s" % (
                                    addr, json_path))
                    except Exception:
                        pass
    except Exception:
        pass

    if _properties_cache:
        log_info("Preloaded function properties for %d functions" % len(_properties_cache))


def register_function_properties():
    """Register cached function properties with Ghidra.

    Must be called after pyghidra.start() but before decompilation.

    Returns:
        Number of functions registered
    """
    global _properties_cache

    if not _properties_cache:
        return 0

    from ghidra.app.decompiler import DecompileCallback

    # Clear any existing overrides
    DecompileCallback.clearPropertyOverrides()

    registered_count = 0

    for addr, props in _properties_cache.items():
        # Register each property that's specified
        if 'inline' in props:
            DecompileCallback.registerInlineOverride(long(addr), bool(props['inline']))
            log_info("Registered inline override for 0x%x: %s" % (addr, props['inline']))

        if 'noreturn' in props:
            DecompileCallback.registerNoReturnOverride(long(addr), bool(props['noreturn']))
            log_info("Registered noreturn override for 0x%x: %s" % (addr, props['noreturn']))

        if 'varargs' in props:
            DecompileCallback.registerVarArgsOverride(long(addr), bool(props['varargs']))
            log_info("Registered varargs override for 0x%x: %s" % (addr, props['varargs']))

        if 'calling_convention' in props:
            DecompileCallback.registerCallingConventionOverride(long(addr), props['calling_convention'])
            log_info("Registered calling convention override for 0x%x: %s" % (
                addr, props['calling_convention']))

        if 'extrapop' in props:
            DecompileCallback.registerExtrapopOverride(long(addr), int(props['extrapop']))
            log_info("Registered extrapop override for 0x%x: %d" % (addr, props['extrapop']))

        registered_count += 1

    log_info("Registered function properties for %d functions" % registered_count)
    return registered_count


def load_function_properties(json_path):
    """Load function properties from an existing function JSON file.

    Args:
        json_path: Path to the function's JSON file

    Returns:
        Dict of properties, or empty dict if none found
    """
    global _properties_cache

    if not json_path:
        return {}

    # Try cache first (by looking up address from file)
    if not os.path.exists(json_path):
        return {}

    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
        return data.get('function_properties', {})
    except Exception:
        return {}


def clear_function_properties():
    """Clear all registered function properties and the cache."""
    global _properties_cache
    from ghidra.app.decompiler import DecompileCallback
    DecompileCallback.clearPropertyOverrides()
    _properties_cache = {}
```

---

## Integration in exporter.py

Add to the preload phase (before cleanup):

```python
from ghidra_annotations.annotations.pseudocode.function_properties import (
    preload_function_properties
)

# In the preload phase, before cleanup
preload_function_properties(pseudocode_src_dir)
```

Add to the registration phase (after pyghidra.start()):

```python
from ghidra_annotations.annotations.pseudocode.function_properties import (
    register_function_properties
)

# After pyghidra.start() but before decompilation
register_function_properties()
```

---

## Testing

Create a test function JSON with properties:

```json
{
  "function": {
    "name": "TestFunction",
    "address": "0x00401000"
  },
  "function_properties": {
    "noreturn": true,
    "calling_convention": "__fastcall"
  }
}
```

Expected behavior:
- Function should be treated as non-returning (affects control flow)
- Function should use __fastcall convention (affects parameter assignment)
- These changes should NOT modify the Ghidra database

---

## Verification

Check that overrides are applied:

1. Decompile with overrides registered
2. Check that function signature shows correct convention
3. Check that control flow analysis respects noreturn
4. Verify database is unchanged (export without overrides should differ)

---

## Common Issues

### Override Not Applied

1. Check that `preload_function_properties()` is called before cleanup
2. Check that `register_function_properties()` is called after `pyghidra.start()`
3. Verify function address matches exactly (hex format)

### Wrong Calling Convention

Valid conventions depend on the architecture. For x86:
- `__cdecl`
- `__stdcall`
- `__fastcall`
- `__thiscall`
- `__vectorcall`

### Extrapop Value

Extrapop is the number of bytes popped from the stack on return:
- `__cdecl`: 0 (caller cleans)
- `__stdcall`: N (callee cleans, N = param bytes)
- Typical 32-bit: 4 bytes per parameter
