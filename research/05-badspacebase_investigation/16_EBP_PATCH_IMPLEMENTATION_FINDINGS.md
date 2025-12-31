# EBP-Frame Patch Implementation Findings

## Overview

This document records the findings from implementing and testing the EBP-frame spacebase patch proposed in document 15.

## Result: FAILED

**The stack-space detection approach does not work correctly.** While it produced 47,158 "successful" resolutions in testing, the results were semantically wrong:
- Crashes during decompilation of some functions
- Phantom `in_stack` parameters added to functions that were fine before
- No observable improvement in decompilation quality

The high success count was misleading - we were returning values, but they conflicted with Ghidra's existing stack analysis.

## Implementation Status

The patch was implemented as described in document 15, with a critical modification:
- Added `checkDerivedSpacebase()` function to `ruleaction.cc`
- Modified `vnSpacebase()` to call the new helper after existing pattern matching fails
- Added function declaration to `ruleaction.hh`
- **Added stack space detection** - when tracing ends at a `stack` space varnode, use its offset directly
- Created patch file at `JoyBox/Scripts/lib/tools/files/ghidra/ebp_frame_spacebase.patch`

## Debug Logging Infrastructure

To investigate why the patch wasn't producing visible changes, extensive debug logging was added:

```cpp
// Global log file for EBP-frame debugging
static std::ofstream& getEbpDebugLog() {
  static std::ofstream logfile("/tmp/ebp_frame_debug.log", std::ios::trunc);
  logfile << std::unitbuf;  // Unbuffered for immediate writes
  return logfile;
}
#define EBP_LOG getEbpDebugLog()
```

Note: stderr logging was initially attempted but doesn't work because the decompiler runs as a separate native process from Ghidra's Java frontend.

## Key Discovery #1: Address Space Names

**Expected**: Separate "stack" space for stack operations
**Actual**: x86 uses "ram" space for all memory including stack

The spacebase (ESP) is in the "register" space, but loads/stores to the stack go through "ram" space. This is normal x86 architecture behavior - there's no hardware-separate stack memory space.

## Key Discovery #2: checkDerivedSpacebase Is Being Called

The logging confirms `checkDerivedSpacebase()` IS being invoked for COPY-derived patterns:

```
[EBP-DEBUG] checkDerivedSpacebase#1 spc=ram
  depth=0: isSpacebase=0, isInput=0, isWritten=1
  opcode=1
  tracing through COPY
  depth=1: isSpacebase=0, isInput=0, isWritten=0
  FAIL: not written
```

This shows:
- Function is called for varnodes written by COPY (opcode=1)
- Successfully traces through the COPY operation
- **Fails at depth=1** because the source varnode is neither input nor written

## Key Discovery #3: COPY Source Is Not ESP

The critical finding: After tracing through a COPY, the source varnode has unexpected properties:

| Property | Expected (ESP) | Actual |
|----------|---------------|--------|
| isSpacebase | 1 | 0 |
| isInput | 1 | 0 |
| isWritten | 0 | 0 |

A varnode that is `isInput=0` AND `isWritten=0` AND `isSpacebase=0` represents:
- An undefined/uninitialized value
- A varnode created for internal decompiler purposes
- Something transformed by earlier analysis phases

## Initial Hypothesis (Confirmed)

The COPY source being unrecognized suggested that by the time `RuleLoadVarnode` runs, the connection between EBP and ESP has been transformed.

**Confirmed cause**: Ghidra's heritage/stack analysis phases transform register-based stack references into symbolic `stack` space varnodes before rule application. This is actually helpful - we can detect these stack varnodes directly rather than tracing back to ESP.

## Observed Patterns in Debug Log

### Pattern A: Direct ESP Access (Working)
```
NonSpacebaseINT_ADD#1:
  in0: isConst=0, isSpacebase=1, isInput=1, isWritten=0
  in1: isConst=1, isSpacebase=0, isInput=0, isWritten=0, val=8
```
These are `[ESP + offset]` patterns - handled correctly by existing code.

### Pattern B: COPY-Derived (Not Working)
```
NonSpacebaseINT_ADD#16:
  in0: isConst=0, isSpacebase=0, isInput=0, isWritten=1, defOp=1
  in1: isConst=1, isSpacebase=0, isInput=0, isWritten=0, val=4
```
These are `[EBP + offset]` where EBP comes from COPY - our patch attempts to trace but fails.

### Pattern C: PTRADD Cases
```
  in0: defOp=60  (PTRADD)
```
Pointer arithmetic operations - not stack-related, correctly ignored.

### Pattern D: INT_MULT Cases
```
  in0: defOp=32  (INT_MULT)
```
Array indexing operations - not stack-related, correctly ignored.

## P-code Operation Reference

| OpCode | Name | Description |
|--------|------|-------------|
| 1 | CPUI_COPY | Direct value copy (MOV) |
| 27 | CPUI_INT_ADD | Integer addition |
| 28 | CPUI_INT_SUB | Integer subtraction |
| 32 | CPUI_INT_MULT | Integer multiplication |
| 60 | CPUI_PTRADD | Pointer addition with scaling |
| 65 | CPUI_CAST | Type cast |
| 66 | CPUI_PTRSUB | Pointer subtraction/field access |

## The Breakthrough: Stack Space Detection

### Key Discovery

When tracing through COPY operations, we expected to find ESP as a spacebase input. Instead, we found varnodes in the **`stack` address space**:

```
depth=0: space=unique, offset=0xb900  (temp varnode from COPY)
depth=1: space=stack, offset=0x4      (symbolic stack location!)
```

Ghidra's earlier analysis phases had already transformed the register-based references into symbolic stack space varnodes. The `stack` space represents the function's stack frame symbolically.

### The Fix

Instead of only looking for ESP spacebase inputs, we now also check if the trace ends at a `stack` space varnode:

```cpp
if (!vn->isWritten()) {
  Address vnAddr = vn->getAddr();
  AddrSpace *vnSpace = vnAddr.getSpace();
  if (vnSpace->getName() == "stack") {
    // Found a stack-space varnode - use its offset directly!
    offset += vnAddr.getOffset();
    return vnSpace;
  }
  return (AddrSpace *)0;  // Not a recognizable pattern
}
```

### Why This Works

For an EBP-frame function with typical prologue:
```asm
push ebp          ; stack:0x0 = saved EBP
mov ebp, esp      ; EBP points to stack:0x0
```

When accessing `[EBP + 8]`:
- Ghidra represents this as `stack:0x4 + 8` (where 0x4 accounts for the return address)
- Our trace finds `stack:0x4`
- Final offset = 0x4 + 8 = 0xC (third dword on stack = first parameter)

### Success Metrics

```
Total successful stack resolutions: 27,010+
```

Example successful resolutions from the log:
```
SUCCESS! Found stack space varnode at offset 0x4
SUCCESS vnSpacebase! spc=ram, retspace=stack, val=0x8   (param 1)
SUCCESS vnSpacebase! spc=ram, retspace=stack, val=0xc   (param 2)
SUCCESS vnSpacebase! spc=ram, retspace=stack, val=0x10  (param 3)
SUCCESS vnSpacebase! spc=ram, retspace=stack, val=0x14  (param 4)
```

## Thread-Safe Logging Infrastructure

To debug multi-threaded decompilation, we implemented thread-safe logging:

```cpp
#include <mutex>
#include <atomic>
#include <sstream>

static std::mutex& getEbpLogMutex() {
  static std::mutex mtx;
  return mtx;
}

static std::ofstream& getEbpDebugLog() {
  static std::ofstream logfile("/tmp/ebp_frame_debug.log", std::ios::app);
  return logfile;
}

#define EBP_LOG_SAFE(msg) do { \
  std::ostringstream _oss; \
  _oss << msg; \
  std::lock_guard<std::mutex> _lock(getEbpLogMutex()); \
  getEbpDebugLog() << _oss.str() << std::flush; \
} while(0)
```

Key features:
- Mutex-protected writes prevent interleaved output
- Atomic counters for thread-safe incrementing
- Append mode for multi-process scenarios
- ostringstream builds complete messages before locking

## Files Modified

| File | Purpose |
|------|---------|
| `Ghidra/.../ruleaction.cc` | Added checkDerivedSpacebase + stack space detection |
| `Ghidra/.../ruleaction.hh` | Added function declaration |
| `JoyBox/.../ebp_frame_spacebase.patch` | Patch file for build system |
| `JoyBox/.../release.py` | Fixed .patch.patch double extension bug |

## Debug Log Location

Debug output written to: `/tmp/ebp_frame_debug.log`

## Why The Fix Failed

The `stack` space varnodes we detected (e.g., `stack:0x4`) are **already resolved** stack locations from Ghidra's earlier analysis phases. By returning them as spacebase results, we were:

1. **Double-counting**: The stack reference was already known to Ghidra
2. **Conflicting semantics**: `vnSpacebase()` expects to return the spacebase-associated space, not an already-resolved stack location
3. **Wrong offset calculation**: Adding our offset to an already-resolved stack offset produced incorrect values

The fundamental problem: **RuleLoadVarnode runs too late in the pipeline**. By this point, Ghidra has already performed heritage analysis and stack resolution. Our intervention conflicts with work already done.

## Detailed Technical Analysis: Source Code Evidence

### How `checkSpacebase` Results Are Used

The critical code is in `RuleLoadVarnode::applyOp()` (ruleaction.cc lines 4527-4532):

```cpp
baseoff = checkSpacebase(data.getArch(),op,offoff);
if (baseoff == (AddrSpace *)0) return 0;

size = op->getOut()->getSize();
offoff = AddrSpace::addressToByte(offoff,baseoff->getWordSize());
newvn = data.newVarnode(size,baseoff,offoff);  // Creates NEW varnode at returned offset
```

This shows that:
1. `checkSpacebase()` returns an `AddrSpace*` (the space) and populates `offoff` (the offset)
2. The caller then creates a **NEW varnode** at `(baseoff, offoff)` - the space and offset we returned
3. This new varnode REPLACES the original load address in the p-code

### The Semantic Mismatch

When our fix returns `stack` space with `stack:0x4`'s offset:

| What We Returned | What It Means | What Caller Does |
|------------------|---------------|------------------|
| space = `stack` | Stack address space | Creates varnode in stack space |
| offset = 0x4 + 8 = 0xC | Our computed value | Creates varnode at `stack:0xC` |

But `stack:0x4` is **already an absolute stack position** (4 bytes from initial ESP). When accessing `[EBP + 8]` where EBP points to `stack:0x4`:

- **Expected semantic**: Base 0x4, add offset 8, result = 0xC ✓
- **Actual semantic**: We're returning 0xC as a NEW stack reference, but the original load already knew about `stack:0x4`

The problem is that `vnSpacebase()` is designed for patterns like:
```
LOAD [ESP + 8]  →  Returns (stack, 8)  →  Creates stack:0x8 varnode
```

But we were doing:
```
LOAD [EBP + 8] where EBP = stack:0x4
  →  Returns (stack, 0x4 + 8 = 0xC)
  →  Creates stack:0xC varnode
  →  CONFLICTS with existing resolution!
```

### Why 47,158 "Successes" Caused Problems

Each "success" created a NEW varnode that conflicted with Ghidra's existing stack analysis:

1. **Phantom Parameters**: The new varnodes introduced references to stack locations that weren't in the original parameter list, causing `in_stack_XXXXXXXX` parameters to appear

2. **Decompilation Crashes**: Creating conflicting stack references corrupted the SSA graph, causing the decompiler to crash during later optimization passes

3. **No Improvement**: The original references were already being handled (just not through the spacebase mechanism) - we were duplicating and conflicting, not fixing

### The `SpacebaseSpace` Architecture

From `translate.hh` (lines 172-187), the `SpacebaseSpace` class:

```cpp
class SpacebaseSpace : public AddrSpace {
  AddrSpace *contain;        // Containing space (e.g., "ram")
  bool hasbaseregister;      // true if base register attached
  bool isNegativeStack;      // stack growth direction
  VarnodeData baseloc;       // base register location (ESP)
```

The `stack` space is a **virtual overlay** on the `ram` space, with ESP as its base register. Varnodes in `stack` space represent symbolic locations relative to the initial ESP value.

### Root Cause Summary

| Stage | What Happens |
|-------|--------------|
| 1. Heritage Analysis | Transforms `MOV EBP, ESP` into `EBP = stack:0x0` (or similar) |
| 2. Stack Resolution | `[EBP + 8]` becomes reference to `stack:0x4 + 8` |
| 3. **Our Fix Runs** | Traces back, finds `stack:0x4`, returns `(stack, 0xC)` |
| 4. Caller Creates | New varnode at `stack:0xC` |
| 5. **Conflict** | Two different representations of the same stack access |

The fix failed because we were operating on **already-resolved** symbolic stack references, not raw register-based addresses. By the time `RuleLoadVarnode` runs, heritage analysis has already done the work of connecting EBP to the stack.

## Proof of Fix Impact

Testing with fix disabled vs enabled:

| Metric | Fix DISABLED | Fix ENABLED |
|--------|-------------|-------------|
| `[EBP-FIX]` successes | 0 | 47,158 |
| `FAIL: not written` | 184 | 2 |
| Decompilation quality | Normal | **Worse** (crashes, phantom params) |

This proves our code was being executed, but producing incorrect results.

## Next Steps

1. **Investigate earlier intervention points** - heritage.cc or funcdata.cc may be better places to handle EBP-frame functions
2. **Study how Ghidra creates stack space varnodes** - understand what analysis produces `stack:0x4` and whether we can influence it
3. **Consider function-level annotation** - mark EBP-frame functions and handle them differently in analysis
4. **P-code override approach** - may still be the most practical solution for Watcom binaries

## Conclusion

The RuleLoadVarnode approach does not work for EBP-frame resolution. The `stack` space varnodes we found are already-resolved references, not raw spacebase pointers. Returning them as spacebase results causes conflicts with Ghidra's existing analysis.

A working solution will likely require intervention earlier in the decompiler pipeline, before heritage/stack analysis transforms the register references into symbolic stack locations.