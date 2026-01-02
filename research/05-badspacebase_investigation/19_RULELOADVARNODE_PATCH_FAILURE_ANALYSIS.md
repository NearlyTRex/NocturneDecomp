# RuleLoadVarnode Patch Failure Analysis

## Overview

This document records the failed attempt to fix BADSPACEBASE issues via `RuleLoadVarnode::traceSpacebaseDerivation()` in `ruleaction.cc`, and the fundamental architectural reasons why this approach cannot work.

## Experiment Summary

### What We Tried

Extended `RuleLoadVarnode::traceSpacebaseDerivation()` to handle additional opcodes and trace back through the definition chain to find spacebase derivation:

1. **Added PTRADD handling**: `ptr + (index * size)` - trace through input 0
2. **Added PTRSUB handling**: `ptr + offset` - trace through input 0
3. **Added IPTR_SPACEBASE space detection**: Check if varnode is already in stack space

### Results

| Approach | Successes | Regressions |
|----------|-----------|-------------|
| PTRADD/PTRSUB only | 0 | 0 |
| + IPTR_SPACEBASE check | 53,710 | 224 decompilation failures |
| Reverted IPTR_SPACEBASE | 0 | 0 |

The IPTR_SPACEBASE check caused massive regressions because it incorrectly matched indirect accesses.

---

## Root Cause Analysis

### What We Discovered via Logging

When tracing back through the definition chain, we consistently hit one of these terminal conditions:

| Terminal Condition | Count | Description |
|-------------------|-------|-------------|
| `stack:0x4` input | 138k | Value read FROM stack (not ESP offset) |
| `register:0x18` input | ~1k | CPU register (EBX) not marked as spacebase |
| MULTIEQUAL (opcode 60) | 160k | Phi nodes from control flow merges |
| LOAD (opcode 2) | 71k | Pointer dereference |
| INT_ADD no const | 27k | Dynamic offset calculation |

### The Fundamental Problem

The `isSpacebase()` flag is **only set on ESP itself**. When code does:

```asm
push ebp
mov ebp, esp        ; EBP = ESP
sub esp, 0x20       ; allocate locals
...
mov eax, [ebp+8]    ; access parameter
```

At analysis time:
- ESP is marked as spacebase
- EBP is NOT marked as spacebase (it's just a general register)
- `[ebp+8]` traces back to EBP, which is an input but not a spacebase
- We cannot determine that EBP == ESP at function entry

### Why `stack:0x4` Matching Failed

When we traced to `stack:0x4`, we thought: "This is in the stack space, so it's a stack-relative access!"

**Wrong.** `stack:0x4` means:
- A value was read FROM stack offset 0x4
- That value is now being used as a pointer
- Loading through that pointer is an INDIRECT access, not a stack access

Example:
```c
int *ptr = *(int**)(ESP+4);  // ptr = stack:0x4 (the VALUE at stack offset 4)
int val = ptr[2];             // This loads from RAM at address (ptr+8)
```

The second load is NOT `stack:0xC` - it's loading from wherever `ptr` points in RAM.

---

## Pipeline Timing Issue

```
Analysis Pipeline:

1. Pcode Generation          <- ESP/EBP relationship visible
2. Heritage Analysis         <- Spacebase properties set
3. RuleLoadVarnode           <- WE ARE HERE (too late!)
4. Type Propagation
5. Decompilation Output
```

By the time `RuleLoadVarnode` runs:
- Heritage analysis has already decided what is/isn't stack-relative
- The `isSpacebase()` flag is already set (only on ESP)
- EBP's relationship to ESP is no longer visible in the pcode

---

## Why resolveSpacebaseRelative() Also Didn't Help

From document 18, we expected `resolveSpacebaseRelative()` to be the right fix location. However:

1. **It IS called** - we saw 104,042 calls with correct `spacebase=stack type=2`
2. **The spacebase is already correct** when it's called
3. **The problem is elsewhere** - BADSPACEBASE functions fail BEFORE this point

The functions that have BADSPACEBASE issues likely fail at `checkSpacebase()` returning NULL, which prevents the normal stack analysis path entirely.

---

## Architectural Limitation

The core issue is that Ghidra's spacebase tracking is designed for:
- Direct ESP-relative access: `[ESP + offset]`
- Simple frame pointer: `[EBP + offset]` where EBP is set once at function entry

It does NOT handle:
- Dynamic ESP modifications mid-function (Watcom's approach)
- ESP saved to arbitrary locations then restored
- Complex control flow where ESP state varies by path

### Watcom-Specific Issues

Watcom C/C++ 11 generates code that:
1. Uses ESP-relative addressing throughout (not EBP frames)
2. Modifies ESP dynamically for alloca-like operations
3. Saves/restores ESP in complex patterns

This confuses Ghidra's heritage analysis, which expects either:
- Consistent EBP-frame (ESP modified at entry, stable thereafter)
- Consistent ESP-relative (ESP only modified for push/pop/call)

---

## Conclusions

1. **RuleLoadVarnode is too late** - spacebase decisions are already made
2. **resolveSpacebaseRelative works correctly** - but for functions that already have correct spacebase
3. **The fix must be earlier** - during heritage analysis or pcode generation
4. **Pcode overrides remain the practical solution** - inject correct stack info before analysis

---

## Key Architectural Finding: Funcdata::spacebase()

The spacebase flag is set in `funcdata.cc:230` (`Funcdata::spacebase()`):

```cpp
void Funcdata::spacebase(void)
{
  for(j=0;j<glb->numSpaces();++j) {
    spc = glb->getSpace(j);
    numspace = spc->numSpacebase();
    for(i=0;i<numspace;++i) {
      const VarnodeData &point(spc->getSpacebase(i));  // ESP location
      // Find varnodes at this specific location
      iter = vbank.beginLoc(point.size,Address(point.space,point.offset));
      while(iter != enditer) {
        vn = *iter++;
        vn->setFlags(Varnode::spacebase);  // Mark as spacebase
      }
    }
  }
}
```

**The problem**: Only varnodes at the EXACT spacebase register address (ESP = register:0x10) get marked. EBP (register:0x14) is never marked, even when `EBP = COPY(ESP)`.

### Why EBP Appears as INPUT

By the time RuleLoadVarnode runs (in actprop2), heritage analysis has already:
1. Built SSA form
2. Merged Phi nodes (MULTIEQUAL)
3. Potentially absorbed the `MOV EBP, ESP` into control flow

The EBP varnode we see is an INPUT because its definition is "outside" the current SSA scope - either merged via Phi or considered a function input.

### Potential Fix Locations

1. **Funcdata::spacebase()** - Also mark varnodes that are COPY from the spacebase register
2. **New early action** - Run before heritage to identify EBP = ESP patterns
3. **Processor specification** - Mark EBP as a secondary spacebase (but this is wrong for ESP-frame functions)

---

## Next Steps

1. Consider patching `Funcdata::spacebase()` to trace COPY operations from ESP
2. Investigate if marking derived spacebases would cause other issues
3. Continue using pcode overrides for practical decompilation fixes
4. Document that this is a Ghidra architectural limitation requiring source changes

---

## Files Modified (Now Reverted to Neutral)

The patch file at `JoyBox/Scripts/lib/tools/files/ghidra/ebp_frame_spacebase.patch` still contains:
- PTRADD/PTRSUB handling in `traceSpacebaseDerivation()` (harmless, no effect)
- Logging infrastructure for debugging
- fspec.cc changes from document 18

The patch is now **neutral** - no improvements, no regressions.

---

## Changelog

- 2025-12-31: Attempted IPTR_SPACEBASE check - caused 224 regressions
- 2025-12-31: Reverted to neutral patch
- 2025-12-31: Documented fundamental architectural limitations
