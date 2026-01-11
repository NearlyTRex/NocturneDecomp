# Ghidra Source Code Reference for Per-Function Helpers

This document provides detailed source code references for implementing per-function
decompiler helpers. All paths are relative to `~/Repositories/Ghidra/`.

## Table of Contents

1. [Architecture & Global Options](#architecture--global-options)
2. [FunctionPrototype Properties](#functionprototype-properties)
3. [DecompileCallback Integration Points](#decompilecallback-integration-points)
4. [C++ Override System](#c-override-system)
5. [Action System](#action-system)
6. [Decompiler Fix Flags](#decompiler-fix-flags)

---

## Architecture & Global Options

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/architecture.cc`

Global decompiler configuration defaults (lines 1425-1433):

```cpp
infer_pointers = true;
analyze_for_loops = true;
readonlypropagate = false;
nan_ignore_all = false;
nan_ignore_compare = true;
alias_block_level = 2;
split_datatype_config = OptionSplitDatatypes::option_struct
                      | OptionSplitDatatypes::option_array
                      | OptionSplitDatatypes::option_pointer;
max_jumptable_size = 1024;
```

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/options.hh`

Option element IDs (lines 29-68):

| Element | ID | Purpose |
|---------|-----|---------|
| `ELEM_INFERCONSTPTR` | 190 | Constant pointer inference |
| `ELEM_INLINE` | 191 | Function inlining |
| `ELEM_NORETURN` | 192 | Non-returning functions |
| `ELEM_ALIASBLOCK` | 193 | Alias blocking level |
| `ELEM_ANALYZEFORLOOPS` | 194 | For-loop recovery |
| `ELEM_JUMPTABLEMAX` | 195 | Jump table size limit |
| `ELEM_NANIGNORE` | 196 | NaN handling |
| `ELEM_TOGGLERULE` | 197 | Rule enable/disable |

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/options.cc`

Key option implementations:

#### OptionInferConstPtr (lines 276-296)
```cpp
/// Toggle whether the decompiler attempts to infer constant pointers
string OptionInferConstPtr::apply(Architecture *glb,const string &p1,...) const
{
  bool val = onOrOff(p1);
  if (val) {
    glb->infer_pointers = true;
  } else {
    glb->infer_pointers = false;
  }
  ...
}
```

#### OptionForLoops (lines 298-311)
```cpp
/// Toggle for-loop variable recovery
string OptionForLoops::apply(...) const
{
  glb->analyze_for_loops = onOrOff(p1);
  ...
}
```

#### OptionAliasBlock (lines 469-497)
```cpp
/// Set aliasing strategy
/// Levels: 0=none, 1=structs, 2=structs+arrays, 3=all
string OptionAliasBlock::apply(...) const
{
  glb->alias_block_level = level;
  ...
}
```

---

## FunctionPrototype Properties

### File: `Ghidra/Framework/SoftwareModeling/src/main/java/ghidra/program/model/pcode/FunctionPrototype.java`

#### Property Fields (lines 45-50)

```java
private boolean dotdotdot;      // varargs
private boolean isinline;       // inline hint
private boolean noreturn;       // never returns
private boolean customstorage;  // custom var storage
private String modelname;       // calling convention
```

#### grabFromFunction() Method (lines 150-180)

This is the key interception point for property overrides:

```java
public void grabFromFunction(Function f) {
    // Line 158 - VarArgs
    dotdotdot = func.hasVarArgs();

    // Line 159 - Inline
    isinline = func.isInline();

    // Line 160 - NoReturn
    noreturn = func.hasNoReturn() | isNoReturnInjection(f, injectname);

    // Line 161 - Custom Storage
    customstorage = func.hasCustomVariableStorage();

    // Lines 129-136 - Calling Convention
    modelname = f.getCallingConventionName();
    if (modelname == null) {
        modelname = Function.DEFAULT_CALLING_CONVENTION_STRING;
    }

    // Lines 168-180 - Extrapop
    if (overrideExtrapop != HighFunction.UNKNOWN_STACK_DEPTH_CHANGE) {
        extrapop = overrideExtrapop;
    } else {
        extrapop = f.getStackPurgeSize();
    }
}
```

To add a registry check for each property:

```java
// Example: Inline override
public void grabFromFunction(Function f) {
    long funcAddr = f.getEntryPoint().getOffset();

    // Check registry before database
    if (DecompileCallback.hasInlineOverride(funcAddr)) {
        isinline = DecompileCallback.getInlineOverride(funcAddr);
    } else {
        isinline = func.isInline();
    }
    ...
}
```

---

## DecompileCallback Integration Points

### File: `Ghidra/Features/Decompiler/src/main/java/ghidra/app/decompiler/DecompileCallback.java`

#### Existing Registry Examples

**Call Fixups (lines 63-109):**
```java
// Static registries
private static Map<String, java.util.List<String>> registeredCallFixups = new HashMap<>();
private static Map<String, java.util.List<String>> registeredCallFixupPatterns = new HashMap<>();

// Registration methods
public static void registerCallFixup(String funcName, java.util.List<String> pcode) {
    registeredCallFixups.put(funcName, pcode);
}

public static void registerCallFixupPattern(String pattern, java.util.List<String> pcode) {
    registeredCallFixupPatterns.put(pattern, pcode);
}

public static void clearCallFixups() {
    registeredCallFixups.clear();
    registeredCallFixupPatterns.clear();
}
```

**P-code Overrides (lines 63-65):**
```java
private static Map<Long, java.util.List<String>> registeredPcodeOverrides = new HashMap<>();
```

#### Key Methods for Interception

**getComments() (lines 515-526):**
```java
public byte[] getComments(long addrlong, int flags) {
    // Could add comment injection here
    ...
}
```

**getMappedSymbols() (lines 1118-1142):**
```java
private void getMappedSymbols(Address addr, Function func, Namespace namespc) {
    // Symbol name injection point
    ...
}
```

**getExtraPopOverride() (lines 1400-1431):**
```java
private int getExtraPopOverride(Function func, Address callAddr) {
    // Already has override infrastructure via CallDepthChangeInfo
    ...
}
```

**getPcode() (lines 545-596):**
```java
public byte[] getPcode(long addrlong) {
    // P-code override check happens here
    if (!registeredPcodeOverrides.isEmpty()) {
        java.util.List<String> override = registeredPcodeOverrides.get(addrlong);
        if (override != null) {
            return buildPcodeOverridePayload(override, addrlong);
        }
    }
    ...
}
```

---

## C++ Override System

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/override.hh`

The decompiler has a built-in override system (lines 59-65):

```cpp
class Override {
    map<Address,Address> forcegoto;      // Force branch destinations
    vector<int4> deadcodedelay;          // Dead code elimination timing
    map<Address,Address> indirectover;   // Indirect call resolution
    vector<Address> multistagejump;      // Jump table targets
    ...
};
```

These are already supported - just need Java registry plumbing.

### Override Usage in Funcdata

The `Funcdata` class contains an `Override` object that's consulted during decompilation.
These overrides can be injected via XML from the Java side.

---

## Action System

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/action.hh`

#### Action Flags (lines 55-61)
```cpp
enum ruleflags {
    rule_repeatapply = 4,    // Apply repeatedly until no change
    rule_onceperfunc = 8,    // Apply once per function
    rule_oneactperfunc = 16, // Make one change per function
    rule_debug = 32,         // Print debug messages
    rule_warnings_on = 64,   // Issue warnings on change
    rule_warnings_given = 128
};
```

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/coreaction.hh`

Key Actions that could be controlled per-function:

| Action Class | Line | Purpose |
|-------------|------|---------|
| `ActionConstantPtr` | 188 | Constant pointer inference |
| `ActionDeadCode` | 552 | Dead code elimination |
| `ActionInferTypes` | 960 | Type propagation |
| `ActionSpacebase` | 270 | Stack/frame pointer handling |
| `ActionHeritage` | 282 | SSA construction |
| `ActionSwitchNorm` | 607 | Switch statement normalization |
| `ActionForceGoto` | 141 | Forced branch targets |

### ActionConstantPtr Details (coreaction.cc)

This is the action that handles `infer_pointers`:

```cpp
// Line 1037-1053: Checks infer_pointers setting
bool ActionConstantPtr::checkCopy(PcodeOp *op, Funcdata &data)
{
    ...
    return data.getArch()->infer_pointers;  // Global check
}

// Line 1100, 1115, 1127: Other checks of infer_pointers
if (!glb->infer_pointers)
    return (SymbolEntry *)0;
```

To make per-function, check `DecompilerFixes::hasFix(addr, DFIX_DISABLE_POINTER_INFERENCE)`.

---

## Decompiler Fix Flags

### File: `Ghidra/Features/Decompiler/src/decompile/cpp/decompiler_fixes.hh`

Current flag definitions (lines 27-33):

```cpp
enum DecompilerFixFlags {
    DFIX_NONE = 0,
    DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0,  // Currently implemented
    // Future fixes can be added here:
    // DFIX_DISABLE_POINTER_INFERENCE = 1 << 1,
    // DFIX_DISABLE_FOR_LOOPS = 1 << 2,
    // DFIX_STRICT_ALIAS = 1 << 3,
    // etc.
};
```

### Registry Implementation (decompiler_fixes.cc)

```cpp
class DecompilerFixes {
    static map<uint8, uint4> fixRegistry;

public:
    static void registerFixes(uint8 addr, uint4 flags);
    static void addFixes(uint8 addr, uint4 flags);
    static void clearAll();
    static void clearAddress(uint8 addr);
    static uint4 getFixes(uint8 addr);
    static bool hasFix(uint8 addr, DecompilerFixFlags flag);
    static bool hasRegisteredAddresses();
};
```

### Java Integration

**DecompInterface.java (lines 86-91, 1140-1153):**

```java
// Flag constants mirror C++ values
public static final int DFIX_NONE = 0;
public static final int DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0;

// Registration method
public boolean setDecompilerFixes(int flags, long[] addresses) {
    // Sends to decompiler process
    return decompProcess.sendSetDecompilerFixes(flags, addresses);
}

public boolean clearDecompilerFixes() {
    return decompProcess.sendClearDecompilerFixes();
}
```

---

## Adding a New Decompiler Fix Flag

### Step 1: C++ Header (decompiler_fixes.hh)

```cpp
enum DecompilerFixFlags {
    DFIX_NONE = 0,
    DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0,
    DFIX_DISABLE_POINTER_INFERENCE = 1 << 1,  // NEW
};
```

### Step 2: Java Constants (DecompInterface.java)

```java
public static final int DFIX_MULTIEQUAL_STACK_TRACE = 1 << 0;
public static final int DFIX_DISABLE_POINTER_INFERENCE = 1 << 1;  // NEW
```

### Step 3: C++ Usage Point

In the relevant action (e.g., `ActionConstantPtr::checkCopy`):

```cpp
bool ActionConstantPtr::checkCopy(PcodeOp *op, Funcdata &data)
{
    // Check per-function fix flag first
    uint8 funcAddr = data.getAddress().getOffset();
    if (DecompilerFixes::hasFix(funcAddr, DFIX_DISABLE_POINTER_INFERENCE)) {
        return false;  // Skip pointer inference for this function
    }

    // Original logic
    return data.getArch()->infer_pointers;
}
```

### Step 4: Python Integration

```python
FIX_NAME_TO_FLAG = {
    "multiequal_stack_trace": DFIX_MULTIEQUAL_STACK_TRACE,
    "disable_pointer_inference": DFIX_DISABLE_POINTER_INFERENCE,  # NEW
}
```

---

## Quick Reference: File Locations

| Component | Path |
|-----------|------|
| DecompileCallback.java | `Ghidra/Features/Decompiler/src/main/java/ghidra/app/decompiler/DecompileCallback.java` |
| DecompInterface.java | `Ghidra/Features/Decompiler/src/main/java/ghidra/app/decompiler/DecompInterface.java` |
| HighFunction.java | `Ghidra/Framework/SoftwareModeling/src/main/java/ghidra/program/model/pcode/HighFunction.java` |
| FunctionPrototype.java | `Ghidra/Framework/SoftwareModeling/src/main/java/ghidra/program/model/pcode/FunctionPrototype.java` |
| decompiler_fixes.hh | `Ghidra/Features/Decompiler/src/decompile/cpp/decompiler_fixes.hh` |
| decompiler_fixes.cc | `Ghidra/Features/Decompiler/src/decompile/cpp/decompiler_fixes.cc` |
| override.hh | `Ghidra/Features/Decompiler/src/decompile/cpp/override.hh` |
| coreaction.cc | `Ghidra/Features/Decompiler/src/decompile/cpp/coreaction.cc` |
| options.hh | `Ghidra/Features/Decompiler/src/decompile/cpp/options.hh` |
| options.cc | `Ghidra/Features/Decompiler/src/decompile/cpp/options.cc` |
| architecture.cc | `Ghidra/Features/Decompiler/src/decompile/cpp/architecture.cc` |
