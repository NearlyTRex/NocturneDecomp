# Late-Stage Tracing Limitations for BADSPACEBASE Fix

## Date: 2026-01-01

## Overview

This document records experiments with late-stage spacebase tracing in Ghidra's decompiler and explains why this approach cannot fix BADSPACEBASE issues for Watcom-compiled binaries.

---

## Experiment Setup

### Targeted Testing Infrastructure

To avoid regressions while iterating, we implemented a targeted testing system:

**spacebase_debug.hh changes:**
```cpp
// Target function for isolated testing
#define SPACEBASE_TARGET_FUNC 0x004319b0

// Check if function matches target (0 = apply to all)
#define SPACEBASE_IS_TARGET_FUNC(addr) \
  (SPACEBASE_TARGET_FUNC == 0 || (addr) == SPACEBASE_TARGET_FUNC)

// Thread-local flag for static helper functions
#define SPACEBASE_SET_TARGET(addr) (spacebaseIsCurrentTarget() = SPACEBASE_IS_TARGET_FUNC(addr))
#define SPACEBASE_IS_CURRENT_TARGET() (spacebaseIsCurrentTarget())
```

This allows testing patches on a single function before enabling globally.

### Test Script

Created `test_decompile_function.py` that:
- Uses pyghidra to decompile a specific function
- Auto-detects baseline from existing annotations
- Compares old vs new decompilation
- Shows debug log output
- Detects BADSPACEBASE, in_stack_, unaff_, etc.

---

## Test Functions

### Function 1: CDemonActor_doCheckForInvalidPointers (0x0040ac80)

**Issues in baseline:** `call_esp_anchor|format_string_mismatch|pointer_cast|variadic_anchor`

**Note:** This function does NOT have `badspacebase` in its suspect list - wrong test case for spacebase fixes.

**Problems observed:**
- Missing variadic arguments to printf-like functions
- Weird pointer arithmetic with `bVar9` (always 0)
- Wrong code in while loops

### Function 2: applyActPalette (0x004319b0)

**Issues in baseline:** `badspacebase|call_esp_preserve|register_param`

**Baseline code shows clear BADSPACEBASE:**
```c
BADSPACEBASE *in_ESP;
byte bStack00000014;
// ...
pbVar1 = (byte *)bitmap_size;  // Wrong - should be bitmap_buffer
```

This is a proper test case for BADSPACEBASE fixes.

---

## Tracing Attempts

### Attempt 1: Recognize stack:0x4 Inputs as Spacebase

**Theory:** When trace reaches `stack:0x4` (first parameter or saved EBP), treat it as a valid spacebase derivation.

**Implementation:**
```cpp
if (vnSpace->getType() == IPTR_SPACEBASE && vnSpace->getContain() == spc) {
  if (stackOffset <= 0x20) {
    offset += (intb)stackOffset;
    return vnSpace;  // SUCCESS
  }
}
```

**Result:** REGRESSION - Created 16 `in_stack_XXXXX` variables and heritage warnings.

**Why it failed:** As documented in research file 19:
> `stack:0x4` means a VALUE was read FROM stack offset 0x4, not a reference to it.
> Loading through that pointer is an INDIRECT access, not a stack access.

The fix incorrectly treated values loaded from stack as spacebase offsets.

### Attempt 2: Handle MULTIEQUAL (Phi Nodes)

**Observation:** Trace was failing at depth 0 with `unsupported opcode=60` (MULTIEQUAL).

**Theory:** Values come from control flow merges (phi nodes). Follow through them to find spacebase.

**Implementation:**
```cpp
else if (opc == CPUI_MULTIEQUAL) {
  if (defop->numInput() > 0) {
    vn = defop->getIn(0);  // Follow first input
  }
}
```

**Result:** Trace now follows through phi nodes but hits cycles:
```
following MULTIEQUAL input 0 of 2 -> register:0x0
cycle detected at depth=2
```

**Analysis:** The trace goes to `register:0x0` (EAX), not ESP. The value doesn't derive from ESP at all - it derives from EAX which is in a phi-node cycle.

### Attempt 3: Cycle Detection + Increased Depth

**Implementation:**
```cpp
set<SeqNum> visited;  // Cycle detection
// ...
if (visited.find(seq) != visited.end()) {
  return (AddrSpace *)0;  // Cycle detected
}
visited.insert(seq);
```

**Result:** Correctly detects cycles, but the fundamental issue remains - values don't trace back to ESP.

---

## Debug Log Analysis

### ActionEBPFrameDetect Output
```
ActionEBPFrameDetect: found ESP input, marking derived spacebases
markDerivedSpacebases: checking descendants of register:10
  descendant op code=66  (PTRADD)
  descendant op code=66
  descendant op code=66
markDerivedSpacebases: checked 3 descendants
```

ESP is found, but its descendants are PTRADD operations (code 66), not COPY operations. Watcom doesn't use `MOV EBP, ESP` pattern, so nothing gets marked as derived spacebase.

### traceSpacebaseDerivation Output
```
traceDerivation: following MULTIEQUAL input 0 of 2 -> register:0x0
traceDerivation: cycle detected at depth=2
checkSpacebase FAIL: loadspace=ram offvn.isWritten=1 offvn.isInput=0 offvn.isSpacebase=0
  defop code=60
```

The trace follows phi nodes to EAX (register:0x0), which is:
- Not a spacebase register
- Involved in a cycle (loop variable)
- Has no connection to ESP by this point

---

## Root Cause Analysis

### Why Late-Stage Tracing Fails

```
Ghidra Pipeline:

1. P-code Generation        <- ESP relationship exists
2. Heritage Analysis        <- ESP tracking happens, may FAIL here
3. SSA Construction         <- Phi nodes created
4. RuleLoadVarnode          <- WE ARE HERE (too late!)
5. Type Propagation
6. Decompilation Output
```

By the time `RuleLoadVarnode` runs:
1. Heritage analysis has already decided what is/isn't stack-relative
2. ESP tracking may have failed during heritage (after indirect calls)
3. Values are now in SSA form with phi nodes
4. The connection between stack accesses and ESP is lost
5. Tracing back through phi nodes leads to unrelated registers (EAX, etc.)

### The Phi Node Problem

When Ghidra builds SSA form, loop variables and values from multiple paths become MULTIEQUAL (phi) nodes:

```
Original:
  ESP = ESP - 0x100
  [loop]
    EAX = something
    if (cond) goto loop

SSA Form:
  EAX_merged = MULTIEQUAL(EAX_init, EAX_loop)
```

The phi node `EAX_merged` has inputs from:
1. Initial value (may trace to ESP)
2. Loop iteration (traces back to itself = cycle)

Following input 0 may work sometimes, but:
- It's arbitrary which input we pick
- Cycles are common in loops
- The value may genuinely not derive from ESP

---

## What Cannot Be Fixed with Late-Stage Tracing

1. **ESP tracking failures after indirect calls** - Heritage analysis loses ESP state
2. **Loop variables** - Become phi nodes with cycles
3. **Complex control flow** - Multiple paths with different ESP states
4. **Dynamic stack allocations** - Watcom's alloca-like patterns

---

## What Might Work

### Already Implemented (Limited Success)
- **P-code overrides** - Manual per-function, works but doesn't scale
- **Custom cspec for Watcom** - Helps with calling conventions, not ESP tracking

### Requires Earlier Pipeline Changes
- **Modify heritage.cc** - Fix ESP tracking at the source
- **ActionEBPFrameDetect before heritage** - Mark patterns early (but Watcom doesn't have MOV EBP,ESP)
- **Enhanced stack analysis** - Track ESP through indirect calls

### Architectural Limitations
The core issue is that Ghidra's stack analysis assumes either:
1. Stable EBP-frame (`[EBP + offset]` throughout)
2. Predictable ESP changes (only push/pop/call)

Watcom violates both assumptions:
- Uses ESP-relative throughout (`[ESP + offset]`)
- Modifies ESP dynamically
- No stable frame pointer

---

## Files Modified (Current State)

### ruleaction.cc
- `traceSpacebaseDerivation()` - Added MULTIEQUAL handling, cycle detection, increased depth
- `vnSpacebase()` - Guarded with `SPACEBASE_IS_CURRENT_TARGET()`
- `checkSpacebase()` - Guarded logging
- `RuleLoadVarnode::applyOp()` - Sets target flag
- `RuleStoreVarnode::applyOp()` - Sets target flag

### fspec.cc
- `traceToSpacebase()` - Added MULTIEQUAL handling
- `resolveSpacebaseRelative()` - Guarded with target check

### coreaction.cc
- `ActionEBPFrameDetect::apply()` - Guarded with target check

### funcdata.cc
- `spacebase()` - Guarded `markDerivedSpacebases()` call

### spacebase_debug.hh
- Target function filtering macros
- Thread-local flag for static functions

---

## Conclusions

1. **Late-stage tracing cannot fix BADSPACEBASE** for Watcom binaries because the ESP relationship is lost before RuleLoadVarnode runs.

2. **Stack inputs (stack:0x4) are values, not offsets** - Treating them as spacebases causes regressions.

3. **Phi nodes indicate complex control flow** - Values often don't trace back to ESP, or hit cycles.

4. **The fix must be earlier in the pipeline** - During or before heritage analysis.

5. **Targeted testing infrastructure is valuable** - Allows safe iteration on patches.

---

## Recommendations

1. **Document current patches as neutral** - They add logging but don't fix/break anything

2. **Focus on P-code overrides for critical functions** - Known to work, just manual

3. **Investigate heritage.cc modifications** - This is where ESP tracking actually happens

4. **Consider per-function ESP hints** - Annotations that tell Ghidra the expected ESP state at key points

5. **Accept some limitations** - Not all BADSPACEBASE functions can be automatically fixed

---

## Test Script Location

```
scripts/Python/test_decompile_function.py
```

Usage:
```bash
~/.venv/bin/python test_decompile_function.py 0x004319b0 -c
```
