# Per-Function Decompiler Helpers: Research & Opportunities

This document consolidates research into Ghidra decompiler features that can be controlled
on a per-function basis without modifying the program database. The goal is to identify
"easy wins" where existing infrastructure can be extended with minimal changes.

## Table of Contents

1. [Already Implemented](#already-implemented)
2. [Tier 1: Trivial Wins (FunctionPrototype Properties)](#tier-1-trivial-wins)
3. [Tier 2: Easy Wins (Existing Override Infrastructure)](#tier-2-easy-wins)
4. [Tier 3: Moderate Effort (New C++ Integration)](#tier-3-moderate-effort)
5. [Tier 4: Speculative Decompiler Fix Flags](#tier-4-speculative-decompiler-fix-flags)
6. [Implementation Patterns](#implementation-patterns)
7. [Key Source Files](#key-source-files)

---

## Already Implemented

These four mechanisms are already working in the NocturneDecomp annotation system:

### 1. Call Fixups (`callfixups.py`)

**Purpose:** Completely replace calls to specific functions with custom P-code at decompile time.
The original call is NOT executed - the pcode entirely replaces it.

**Ghidra Integration:**
- `DecompileCallback.registerCallFixup(String name, List<String> pcode)`
- `DecompileCallback.registerCallFixupPattern(String pattern, List<String> pcode)`
- `DecompileCallback.clearCallFixups()`

**Use Cases:**
- Replace `_chkstk` / `__alloca_probe` with stack adjustment (function doesn't need to run)
- Model the net effect of helper functions without actually calling them
- Fix stack adjustments from non-standard calling conventions

**Note:** If you need the original call to execute with additional pcode around it,
use P-code Overrides instead.

**JSON Format:**
```json
{
  "callfixups": {
    "_chkstk": {
      "type": "exact",
      "pcode": ["INT_SUB (register,0x10,4) = (register,0x10,4), (register,0x0,4)"],
      "description": "Replace stack probe with ESP = ESP - EAX"
    }
  }
}
```

### 2. Decompiler Fixes (`decompiler_fixes.py`)

**Purpose:** Enable per-function experimental decompiler behavior via flags.

**Ghidra Integration:**
- `DecompInterface.setDecompilerFixes(int flags, long[] addresses)`
- `DecompInterface.clearDecompilerFixes()`

**Available Flags:**
- `DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0` - Enhanced MULTIEQUAL tracing for stack variables

**C++ Location:** `decompiler_fixes.hh:27-33`

**JSON Format:**
```json
{
  "multiequal_stack_trace": ["0x00401000", "0x00402500"]
}
```

### 3. Proto Overrides (`proto.py`)

**Purpose:** Specify exact function signatures at call sites without modifying database.

**Ghidra Integration:**
- `HighFunction.registerProtoOverride(Address callAddr, FunctionDefinitionDataType sig)`
- `HighFunction.clearProtoOverrides()`

**Use Cases:**
- Fix variadic function calls (printf, sprintf, etc.)
- Specify indirect call signatures
- Correct parameter inference errors

**JSON Format:**
```json
{
  "proto_overrides": [
    {
      "address": "0x40acc3",
      "signature": "void displayErrorAndQuit(char *fmt, char *file, int line)"
    }
  ]
}
```

### 4. P-code Overrides (`transforms.py`)

**Purpose:** Replace P-code generated for specific instructions.

**Ghidra Integration:**
- `DecompileCallback.registerPcodeOverride(Address addr, List<String> pcode)`
- Registered per-instruction within a function

**Use Cases:**
- Fix BADSPACEBASE by correcting stack pointer adjustments
- Work around decompiler bugs for specific instructions
- Correct ESP tracking after non-standard calls

**JSON Format:**
```json
{
  "pcode_overrides": {
    "0x005a20b7": [
      "COPY (register,0x200,1) = (const,0x0,1)",
      "INT_SUB (register,0x10,4) = (register,0x10,4), (const,0x4,4)"
    ]
  }
}
```

---

## Tier 1: Trivial Wins

These follow the exact same pattern as existing implementations. Each requires ~10 lines
of Java to add a static registry and intercept the property lookup.

### 1.1 Per-Function Inline Control

**What it controls:** Whether a function should be inlined at call sites.

**Current Implementation:**
- `FunctionPrototype.java:48` - `isinline` field
- `FunctionPrototype.grabFromFunction()` line 159: `isinline = func.isInline()`
- Database stores via `Function.setInline(boolean)`

**To Expose as Registry:**
```java
// In DecompileCallback or HighFunction
private static Map<Long, Boolean> inlineOverrides = new HashMap<>();

public static void registerFunctionInline(long funcAddr, boolean shouldInline) {
    inlineOverrides.put(funcAddr, shouldInline);
}
```

**Intercept in:** `FunctionPrototype.grabFromFunction()` - check registry before `func.isInline()`

**JSON Format:**
```json
{
  "function_properties": {
    "inline": true
  }
}
```

### 1.2 Per-Function NoReturn Control

**What it controls:** Whether a function is marked as non-returning (affects control flow).

**Current Implementation:**
- `FunctionPrototype.java:49` - `noreturn` field
- `FunctionPrototype.grabFromFunction()` line 160: `noreturn = func.hasNoReturn() | isNoReturnInjection(...)`

**Use Cases:**
- Mark error/exit handlers as noreturn without database changes
- Fix control flow analysis for functions that don't return

**JSON Format:**
```json
{
  "function_properties": {
    "noreturn": true
  }
}
```

### 1.3 Per-Function VarArgs Control

**What it controls:** Whether a function takes variable arguments.

**Current Implementation:**
- `FunctionPrototype.java:46` - `dotdotdot` field
- `FunctionPrototype.grabFromFunction()` line 158: `dotdotdot = func.hasVarArgs()`

**Use Cases:**
- Mark custom printf-like functions as varargs
- Fix parameter recovery for varargs functions

**JSON Format:**
```json
{
  "function_properties": {
    "varargs": true
  }
}
```

### 1.4 Per-Function Custom Variable Storage Control

**What it controls:** Whether function uses custom (non-standard) variable storage.

**Current Implementation:**
- `FunctionPrototype.java:50` - `customstorage` field
- `FunctionPrototype.grabFromFunction()` line 161: `customstorage = func.hasCustomVariableStorage()`

**Use Cases:**
- Override automatic parameter detection
- Handle functions with unusual register usage

**JSON Format:**
```json
{
  "function_properties": {
    "custom_storage": true
  }
}
```

### 1.5 Per-Function Calling Convention Override

**What it controls:** The calling convention used for the function.

**Current Implementation:**
- `FunctionPrototype.java:65-66` - `modelname` field
- `FunctionPrototype.grabFromFunction()` lines 129-136

**Use Cases:**
- Override calling convention for specific functions
- Handle mixed-convention code without database changes

**Available Conventions:** `__cdecl`, `__stdcall`, `__fastcall`, `__thiscall`, etc.

**JSON Format:**
```json
{
  "function_properties": {
    "calling_convention": "__thiscall"
  }
}
```

---

## Tier 2: Easy Wins

These require slightly more work but have existing infrastructure to build on.

### 2.1 Per-Function Extrapop/Stack Purge Override

**What it controls:** How much the function adjusts the stack on return.

**Current Implementation:**
- `FunctionPrototype.grabFromFunction()` lines 168-180
- `DecompileCallback.getExtraPopOverride()` lines 1400-1431
- `CallDepthChangeInfo` already has `overrideMap` infrastructure

**Use Cases:**
- Fix functions with non-standard stack cleanup
- Handle variable stack adjustment patterns

**JSON Format:**
```json
{
  "function_properties": {
    "extrapop": 8
  }
}
```

### 2.2 Per-Instruction Flow Override

**What it controls:** How control flow is interpreted for specific instructions.

**Current Implementation:**
- `FlowOverride.java` enum with: `BRANCH`, `CALL`, `CALL_RETURN`, `RETURN`
- Used in instruction processing to override computed flow

**Use Cases:**
- Force a CALL to be treated as BRANCH (tail call)
- Force an indirect jump to be treated as RETURN
- Fix misidentified control flow

**JSON Format:**
```json
{
  "flow_overrides": {
    "0x00401234": "CALL_RETURN"
  }
}
```

### 2.3 Per-Function Indirect Call Override

**What it controls:** Resolves indirect calls to specific known targets.

**C++ Infrastructure:**
- `override.hh:63` - `map<Address,Address> indirectover`
- Already supported in decompiler override system

**Use Cases:**
- Resolve vtable calls to known implementations
- Fix indirect call targets that the decompiler can't determine

**JSON Format:**
```json
{
  "indirect_call_overrides": {
    "0x00401234": "0x00405000"
  }
}
```

### 2.4 Per-Function Forced GOTO

**What it controls:** Forces branch destinations regardless of computed flow.

**C++ Infrastructure:**
- `override.hh:61` - `map<Address,Address> forcegoto`
- Already supported in decompiler override system

**Use Cases:**
- Fix miscomputed jump targets
- Override branch destinations in obfuscated code

**JSON Format:**
```json
{
  "forced_gotos": {
    "0x00401234": "0x00401300"
  }
}
```

### 2.5 Per-Function Dead Code Delay

**What it controls:** How many passes before dead code elimination runs.

**C++ Infrastructure:**
- `override.hh:62` - `vector<int4> deadcodedelay`
- Controls timing of dead code elimination

**Use Cases:**
- Preserve code that's being incorrectly eliminated
- Debug decompilation issues

**JSON Format:**
```json
{
  "dead_code_delay": 3
}
```

### 2.6 Per-Function Jump Table Override

**What it controls:** Custom jump table definitions.

**Current Implementation:**
- `HighFunction.grabOverrides()` lines 228-269
- Jump tables stored in symbol namespace with prefix "jmp_"
- `override.hh:65` - `vector<Address> multistagejump`

**Use Cases:**
- Define custom jump tables for switch statements
- Fix incorrect jump table recovery

**JSON Format:**
```json
{
  "jump_table_overrides": {
    "0x00401234": {
      "targets": ["0x00401300", "0x00401350", "0x004013a0"],
      "default": "0x00401400"
    }
  }
}
```

---

## Tier 3: Moderate Effort

These require new C++/Java bridge work but provide significant value.

### 3.1 Per-Function Comment Injection

**What it controls:** Inject comments into decompiled output without database changes.

**Current Implementation:**
- `DecompileCallback.getComments()` lines 515-526
- `DecompileCallback.encodeComments()` lines 1087-1107

**To Implement:**
- Add registry for function-level comments
- Check registry in `getComments()` before database lookup

**JSON Format:**
```json
{
  "comments": {
    "header": "This function handles player movement",
    "0x00401234": "Check collision here"
  }
}
```

### 3.2 Per-Function Symbol Name Injection

**What it controls:** Override local variable/parameter names.

**Current Implementation:**
- `DecompileCallback.getMappedSymbols()` lines 1118-1142
- Symbol names read from database

**Use Cases:**
- Apply better names without database commits
- Test naming changes before making permanent

---

## Tier 4: Speculative Decompiler Fix Flags

These flags don't exist but could be added using the existing `DecompilerFixes` infrastructure.
Each would require C++ changes in addition to the Java/Python integration.

### 4.1 `DFIX_DISABLE_POINTER_INFERENCE`

**What it would control:** The `infer_pointers` Architecture flag on a per-function basis.

**Current Global Setting:**
- `architecture.cc:1425` - `infer_pointers = true` (default)
- `OptionInferConstPtr` in `options.cc:276-296`
- Controls `ActionConstantPtr` behavior

**How it Works Now:**
```cpp
// In coreaction.cc:1053
return data.getArch()->infer_pointers;
```

**Why Per-Function Would Help:**
- Some functions have constants that look like valid addresses but aren't (magic numbers)
- Disabling for specific functions would prevent incorrect pointer type inference
- Currently must disable globally which affects all decompilation

**Implementation:**
1. Add `DFIX_DISABLE_POINTER_INFERENCE = 1 << 1` to `decompiler_fixes.hh`
2. In `ActionConstantPtr::checkCopy()` and related, check if flag is set for current function
3. If set, return false to skip pointer inference

**JSON Format:**
```json
{
  "decompiler_fixes": ["disable_pointer_inference"]
}
```

### 4.2 `DFIX_DISABLE_FOR_LOOP_RECOVERY`

**What it would control:** The `analyze_for_loops` Architecture flag per-function.

**Current Global Setting:**
- `architecture.cc:1426` - `analyze_for_loops = true`
- `OptionForLoops` in `options.cc:298-311`

**Why Per-Function Would Help:**
- Some loops are incorrectly converted to for-loops
- The "recovered" loop variable may be wrong
- Disabling per-function preserves original while-loop structure

**JSON Format:**
```json
{
  "decompiler_fixes": ["disable_for_loop_recovery"]
}
```

### 4.3 `DFIX_STRICT_ALIAS_ANALYSIS`

**What it would control:** The `alias_block_level` Architecture setting per-function.

**Current Global Setting:**
- `architecture.cc:1430` - `alias_block_level = 2`
- `OptionAliasBlock` in `options.cc:469-497`
- Levels: 0=none, 1=structs, 2=structs+arrays, 3=all

**Why Per-Function Would Help:**
- Some functions need stricter alias analysis
- Others work better with more relaxed aliasing
- Global setting forces compromise

**JSON Format:**
```json
{
  "decompiler_fixes": ["strict_alias_analysis"]
}
```

### 4.4 `DFIX_NAN_IGNORE`

**What it would control:** NaN handling in floating-point operations per-function.

**Current Global Setting:**
- `architecture.cc:1428-1429` - `nan_ignore_all`, `nan_ignore_compare`
- `OptionNanIgnore` in `options.cc`

**Why Per-Function Would Help:**
- Some functions legitimately use NaN checks
- Others have spurious NaN comparisons from optimization

**JSON Format:**
```json
{
  "decompiler_fixes": ["nan_ignore_all"]
}
```

### 4.5 `DFIX_AGGRESSIVE_TYPE_PROPAGATION`

**What it would control:** How aggressively `ActionInferTypes` propagates types.

**Current Implementation:**
- `ActionInferTypes` in `coreaction.cc:960`
- Makes multiple passes (controlled by `localcount`)
- Propagates types through SSA graph

**Potential Per-Function Control:**
- Increase/decrease pass count
- Enable/disable specific propagation rules
- Lock certain types from being modified

**JSON Format:**
```json
{
  "decompiler_fixes": ["aggressive_type_propagation"]
}
```

---

## Implementation Patterns

All registry-based overrides follow the same pattern:

### Java Side (DecompileCallback.java or HighFunction.java)

```java
// Static registry map
private static Map<Long, ValueType> featureRegistry = new HashMap<>();

// Registration method
public static void registerFeature(long addr, ValueType value) {
    featureRegistry.put(addr, value);
}

// Clear method
public static void clearFeatures() {
    featureRegistry.clear();
}

// Check method (optional)
public static boolean hasFeature(long addr) {
    return featureRegistry.containsKey(addr);
}

// Get method
public static ValueType getFeature(long addr) {
    return featureRegistry.get(addr);
}
```

### Interception Point

In the relevant getter/lookup method, check registry before database:

```java
// Original
boolean inline = func.isInline();

// With registry
boolean inline;
if (inlineRegistry.containsKey(funcAddr)) {
    inline = inlineRegistry.get(funcAddr);
} else {
    inline = func.isInline();
}
```

### Python Side

```python
# Cache to survive cleanup
_feature_cache = {}

def preload_features(base_dir):
    """Load features from JSON files before cleanup."""
    global _feature_cache
    # Scan directories and load from JSON

def register_features(annotations_dir):
    """Register features with Ghidra after pyghidra.start()."""
    from ghidra.app.decompiler import DecompileCallback
    DecompileCallback.clearFeatures()
    for addr, value in _feature_cache.items():
        DecompileCallback.registerFeature(addr, value)
```

---

## Key Source Files

### Java Integration Points

| File | Lines | Purpose |
|------|-------|---------|
| `DecompileCallback.java` | 1670 | Main callback for decompiler queries |
| `HighFunction.java` | 800 | High-level function representation |
| `FunctionPrototype.java` | 600 | Function signature/properties |
| `DecompInterface.java` | 1173 | Decompiler process interface |
| `DecompileProcess.java` | 700 | Communication with decompiler process |

### C++ Decompiler Core

| File | Purpose |
|------|---------|
| `decompiler_fixes.hh` | Per-function fix flag definitions |
| `decompiler_fixes.cc` | Fix registry implementation |
| `override.hh` | Override system (forcegoto, indirectover, etc.) |
| `coreaction.cc` | Action implementations (type recovery, dead code, etc.) |
| `options.hh` | Architecture option definitions |
| `options.cc` | Option implementations |
| `action.hh` | Action/Rule system |
| `architecture.hh` | Global architecture settings |

### Ghidra Repository Paths

All files are relative to: `~/Repositories/Ghidra/Ghidra/`

- Java: `Features/Decompiler/src/main/java/ghidra/app/decompiler/`
- Java: `Framework/SoftwareModeling/src/main/java/ghidra/program/model/pcode/`
- C++: `Features/Decompiler/src/decompile/cpp/`

---

## Priority Recommendations

### Immediate (Same Day)

1. **Inline control** - Trivial, high value for inlining helpers
2. **NoReturn control** - Trivial, fixes control flow issues
3. **VarArgs control** - Trivial, helps with printf-like functions
4. **Calling convention override** - Easy, handles mixed conventions

### Short Term (Week)

5. **Extrapop override** - Infrastructure exists, just needs registry
6. **Flow overrides** - Useful for fixing misidentified branches
7. **Indirect call overrides** - Helps with vtable resolution

### Medium Term (Month)

8. **DFIX_DISABLE_POINTER_INFERENCE** - Requires C++ changes but high value
9. **Jump table overrides** - Complex but useful for switch statements
10. **Comment injection** - Nice to have for annotations

---

## Related Documentation

- `research/05-badspacebase_investigation/` - Investigation that led to these helpers
- `scripts/Python/ghidra_annotations/annotations/pseudocode/` - Implementation files
- `annotations/nocedit.exe/pseudocode/` - Example JSON configuration files
