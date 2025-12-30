# Ghidra Spacebase Architecture Analysis

## Overview

This document details findings from a deep investigation into Ghidra's decompiler source code to understand why p-code overrides fail to fix the `format_string_mismatch` suspects for variadic function calls in Watcom 11-compiled code.

## The Core Problem

When a function uses EBP as the frame pointer (common in Watcom 11), and ESP becomes uncertain at call sites due to control flow variations (different numbers of pushes on different paths), Ghidra cannot determine which stack locations correspond to variadic function parameters.

## Ghidra Source Code Findings

### 1. Trial Registration Gate (heritage.cc:1461-1467)

```cpp
if (spc->getType() == IPTR_SPACEBASE) {
  if (fc->getSpacebaseOffset() != FuncCallSpecs::offset_unknown)
    off = spc->wrapOffset(off - fc->getSpacebaseOffset());
  else
    tryregister = false; // Do not attempt to register this stack loc as a trial
}
```

**Impact**: When `stackoffset == offset_unknown`, `tryregister` is set to `false`, and at line 1496:
```cpp
if (fc->isInputActive() && tryregister) {
  // Register trials for potential parameters
}
```
The trial registration is completely skipped. No stack parameters are detected.

### 2. Stack Offset Resolution (fspec.cc:4870-4878)

```cpp
void FuncCallSpecs::resolveSpacebaseRelative(Funcdata &data,Varnode *phvn)
{
  Varnode *refvn = phvn->getDef()->getIn(0);
  AddrSpace *spacebase = refvn->getSpace();
  if (spacebase->getType() != IPTR_SPACEBASE) {
    data.warningHeader("This function may have set the stack pointer");
  }
  stackoffset = refvn->getOffset();
  // ...
}
```

This function sets `stackoffset` from a placeholder varnode. It's called from `RuleLoadVarnode::applyOp()` when a LOAD operation is converted to a COPY.

### 3. The Critical Input Check (ruleaction.cc:4173-4183)

```cpp
AddrSpace *RuleLoadVarnode::correctSpacebase(Architecture *glb,Varnode *vn,AddrSpace *spc)
{
  if (!vn->isSpacebase()) return (AddrSpace *)0;
  if (vn->isConstant())
    return spc;
  if (!vn->isInput()) return (AddrSpace *)0;  // <-- THE KEY CHECK
  AddrSpace *assoc = glb->getSpaceBySpacebase(vn->getAddr(),vn->getSize());
  if (assoc->getContain() != spc)
    return (AddrSpace *)0;
  return assoc;
}
```

**Critical Finding**: The spacebase register must be an **input** varnode (line 4179). A computed value will not be recognized.

### 4. Spacebase Pattern Matching (ruleaction.cc:4194-4227)

```cpp
AddrSpace *RuleLoadVarnode::vnSpacebase(Architecture *glb,Varnode *vn,uintb &val,AddrSpace *spc)
{
  retspace = correctSpacebase(glb,vn,spc);
  if (retspace != (AddrSpace *)0) {
    val = 0;
    return retspace;
  }
  if (!vn->isWritten()) return (AddrSpace *)0;
  op = vn->getDef();
  if (op->code() != CPUI_INT_ADD) return (AddrSpace *)0;
  vn1 = op->getIn(0);
  vn2 = op->getIn(1);
  retspace = correctSpacebase(glb,vn1,spc);
  if (retspace != (AddrSpace *)0) {
    if (vn2->isConstant()) {
      val = vn2->getOffset();
      return retspace;
    }
    return (AddrSpace *)0;
  }
  // ... symmetric check for vn2
  return (AddrSpace *)0;
}
```

Recognizes patterns:
1. Direct spacebase input
2. `spacebase_input + constant`

Does NOT recognize:
- `computed_value + constant` (even if computed_value is derived from an input)
- EBP-relative patterns when EBP is not marked as a spacebase

## Why P-code Overrides Fail

When we add a p-code override like:
```
INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffec,4)
// ESP = EBP + 0xffffffec (EBP - 20)
```

The flow breaks down:

1. **ESP varnode is written, not input**: The override creates an INT_ADD that writes to ESP. The resulting ESP varnode has `isInput() == false`.

2. **correctSpacebase() fails**: At line 4179, `if (!vn->isInput()) return NULL;`

3. **vnSpacebase() returns NULL**: No pattern is recognized.

4. **RuleLoadVarnode::applyOp() returns 0**: The LOAD is not converted to a COPY.

5. **resolveSpacebaseRelative() never called**: The placeholder mechanism never fires.

6. **stackoffset remains offset_unknown**: Initialized to `offset_unknown` in constructor (fspec.cc:4928).

7. **Trial registration skipped**: In heritage.cc, `tryregister = false`.

## Watcom 11 vs Ghidra Assumptions

| Aspect | Ghidra Expects | Watcom 11 Does |
|--------|---------------|----------------|
| Stable reference | ESP (spacebase input) | EBP (frame pointer) |
| Stack access via | ESP + constant | EBP + constant |
| ESP at call sites | Deterministic from input | Varies by control flow |
| Registered spacebase | ESP | ESP (but uses EBP) |

### Frame Type Distribution in nocedit.exe

| Category | Count | Percentage |
|----------|-------|------------|
| Total functions | 7,154 | 100% |
| EBP-frame functions | 926 | 12.9% |
| ESP-frame functions | 6,228 | 87.1% |

Only 12.9% of functions use the traditional `MOV EBP, ESP` frame pointer setup. The vast majority (87.1%) use ESP-frame convention where EBP is just another general-purpose register.

### badspacebase Distribution by Frame Type

| Category | Count | Percentage |
|----------|-------|------------|
| Total badspacebase functions | 1,629 | 100% |
| EBP-frame (has stable anchor) | 520 | 31.9% |
| ESP-frame (no stable anchor) | 1,109 | 68.1% |

EBP-frame functions are over-represented in badspacebase issues (32% vs 13% of codebase), likely because these functions tend to be more complex with deeper call stacks.

### The Fundamental Mismatch

**Ghidra's model**: The stack pointer (ESP) is the authoritative reference for all stack access. It must be traceable back to a function **input** varnode at every instruction.

**Watcom 11's model**: EBP is the stable reference. ESP is a "working register" that changes dynamically (pushes for calls). Parameter/local access uses `EBP + offset`.

These are conceptually inverted. Ghidra's entire parameter detection pipeline is built around ESP being the "source of truth," while Watcom treats EBP as the source of truth.

## The `~` Markers Explained

When Ghidra shows ESP with `~` markers in p-code (e.g., `[ESP~:0x...]`), this indicates "cfg_resolved" uncertainty - different control flow paths result in different ESP values at that point.

This is exactly when:
- EBP-frame conventions work well (EBP is stable regardless of path)
- Ghidra's spacebase mechanism breaks down (ESP is not deterministic)

## Architectural Layers

```
+------------------+     P-code overrides operate HERE
| P-code Level     |     (instruction-level modifications)
+------------------+
        |
        v
+------------------+     Pattern recognition expects ESP INPUT
| Rule Application |     (RuleLoadVarnode, vnSpacebase)
+------------------+
        |
        v
+------------------+     resolveSpacebaseRelative sets stackoffset
| Spacebase        |     (only if pattern matched above)
| Resolution       |
+------------------+
        |
        v
+------------------+     Trial registration checks stackoffset
| Heritage/Trial   |     (skipped if offset_unknown)
| Registration     |
+------------------+
        |
        v
+------------------+
| Parameter        |     Never sees the parameters
| Detection        |
+------------------+
```

P-code overrides operate at the lowest level but cannot influence the pattern recognition layer because they create **computed** varnodes, not **input** varnodes.

## Potential Solutions

### 1. Processor Specification Modification
Add EBP as a secondary spacebase for the stack space. This would require modifying the x86 SLASPEC or using Ghidra's spacebase extension mechanism.

### 2. Ghidra Source Patch
Modify `correctSpacebase()` or `vnSpacebase()` to recognize EBP-relative patterns even when EBP is not marked as a spacebase. Would need to track EBP back to its definition and verify it's set from ESP.

### 3. Alternative Approach
Instead of trying to fix ESP, directly inject parameter values into the CALL operation's input slots at a higher level than p-code overrides.

### 4. Custom Decompiler Build
Build a modified decompiler that:
- Recognizes the pattern `LOAD [EBP + offset]` for stack parameters
- Computes stack offsets relative to EBP instead of ESP
- Has special handling for functions marked as EBP-frame

## Key Source Files

| File | Key Functions | Purpose |
|------|--------------|---------|
| `heritage.cc` | Lines 1461-1467, 1496 | Trial registration gate |
| `fspec.cc` | `resolveSpacebaseRelative()` (4870) | Sets stackoffset |
| `fspec.cc` | Constructor (4928) | Initializes stackoffset to unknown |
| `ruleaction.cc` | `correctSpacebase()` (4173) | Validates spacebase input |
| `ruleaction.cc` | `vnSpacebase()` (4194) | Pattern matching |
| `ruleaction.cc` | `RuleLoadVarnode::applyOp()` (4277) | Triggers resolution |
| `architecture.cc` | `getSpaceBySpacebase()` (264) | Maps register to space |

## Conclusion

The p-code override mechanism operates at a level too low to influence Ghidra's spacebase resolution. The fundamental issue is that Ghidra's architecture requires the spacebase register (ESP) to be an **input** varnode, while Watcom 11's EBP-frame convention means ESP is computed from EBP. This architectural mismatch cannot be resolved through p-code overrides alone - it requires either modifications to the processor specification, Ghidra source code changes, or an entirely different approach to parameter detection for these functions.
