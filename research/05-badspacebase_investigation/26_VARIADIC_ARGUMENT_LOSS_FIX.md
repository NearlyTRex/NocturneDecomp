# Variadic Argument Loss Fix

## Problem Summary

Functions calling variadic functions (like `printf`, `displayErrorAndQuit`) show missing arguments in decompiled output even when ESP tracking appears to be working.

**Example from CDemonActor_doCheckForInvalidPointers:**
```c
// Decompiled (WRONG - missing arguments):
core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid actor pointer %08X detected at %s, line %d");

// Assembly (CORRECT - has 4 arguments):
PUSH ECX       ; context_line
PUSH ESI       ; context_file
PUSH EBX       ; this_ptr (for %08X)
PUSH format    ; "Invalid actor pointer..."
CALL displayErrorAndQuit
ADD ESP,0x10   ; Clean up 16 bytes = 4 args
```

## Root Cause Analysis

### The Timing Problem

The variadic argument loss is caused by a **timing mismatch** in the decompiler pipeline:

1. **ActionFuncLink** creates stack placeholder for calls
2. **ActionHeritage** runs `guardCalls()` which needs `stackoffset` to register trials
3. **RuleLoadVarnode** (later) transforms placeholder and sets `stackoffset`

The problem is in step 2: `guardCalls()` checks `stackoffset` BEFORE it's set.

### Critical Code Path

**heritage.cc:guardCalls() lines 1479-1483:**
```cpp
if (spc->getType() == IPTR_SPACEBASE) {
  if (fc->getSpacebaseOffset() != FuncCallSpecs::offset_unknown)
    off = spc->wrapOffset(off - fc->getSpacebaseOffset());
  else
    tryregister = false; // Do not attempt to register this stack loc as a trial
}
```

When `stackoffset == offset_unknown`:
- `tryregister` is set to `false`
- Lines 1514-1524 (input trial registration) are **skipped**
- Variadic arguments are **never attached** to the CALL operation
- Later, when `stackoffset` IS resolved, it's **too late** - trials weren't registered

### Pipeline Order

```
ActionFuncLink::apply()
  └─> funcLinkInput()
      └─> createPlaceholder()        ← Placeholder created with ESP reference

ActionHeritage::apply()
  └─> guard()
      └─> guardCalls()               ← CHECK: stackoffset == offset_unknown → tryregister = false
          └─> registerTrial()        ← SKIPPED for variadic args!

(Rules run in actprop/actprop2)
  └─> RuleLoadVarnode::applyOp()
      └─> resolveSpacebaseRelative() ← stackoffset is set here (TOO LATE)
```

## Proposed Fix

### Approach: Early Stackoffset Resolution

Add early resolution of `stackoffset` during heritage, using the placeholder that already exists.

The placeholder has this structure:
```
LOAD(spaceId, INT_ADD(ESP_varnode, 0)) -> placeholder_output
```

The ESP_varnode at input 0 of the INT_ADD can be traced to find the stack offset.

### Implementation

**Option A: Modify guardCalls() in heritage.cc**

When `stackoffset == offset_unknown` but a placeholder exists, try to resolve it early:

```cpp
// In guardCalls(), around line 1479
if (spc->getType() == IPTR_SPACEBASE) {
  if (fc->getSpacebaseOffset() != FuncCallSpecs::offset_unknown)
    off = spc->wrapOffset(off - fc->getSpacebaseOffset());
  else {
    // NEW: Try early resolution via placeholder
    if (tryEarlySpacebaseResolve(fc, fd)) {
      off = spc->wrapOffset(off - fc->getSpacebaseOffset());
    } else {
      tryregister = false;
    }
  }
}
```

**Option B: Add method to FuncCallSpecs**

Add `tryResolveSpacebaseEarly(Funcdata &data)` to fspec.cc:

```cpp
bool FuncCallSpecs::tryResolveSpacebaseEarly(Funcdata &data)
{
  if (stackoffset != offset_unknown) return true;
  if (stackPlaceholderSlot < 0) return false;

  // Get placeholder varnode
  Varnode *placeholder = op->getIn(stackPlaceholderSlot);
  if (!placeholder->isWritten()) return false;

  PcodeOp *loadOp = placeholder->getDef();
  if (loadOp->code() != CPUI_LOAD) return false;

  // Get the address calculation (input 1 of LOAD)
  Varnode *addrCalc = loadOp->getIn(1);
  if (!addrCalc->isWritten()) return false;

  PcodeOp *addOp = addrCalc->getDef();
  if (addOp->code() != CPUI_INT_ADD) return false;

  // Input 0 should be ESP, input 1 should be constant 0
  Varnode *espVn = addOp->getIn(0);
  Varnode *offsetVn = addOp->getIn(1);

  if (!offsetVn->isConstant()) return false;

  // Trace espVn backward to find its offset from function entry ESP
  uintb espOffset;
  AddrSpace *spc = data.getArch()->getStackSpace();
  if (!traceStackOffset(espVn, spc, espOffset)) return false;

  // Success - set stackoffset
  stackoffset = spc->wrapOffset(espOffset + offsetVn->getOffset());
  return true;
}
```

### Helper Function: traceStackOffset

Similar to existing `traceStackOffsetBackward` in multiequal_trace.cc:

```cpp
static bool traceStackOffset(Varnode *vn, AddrSpace *spc, uintb &offset)
{
  offset = 0;
  int4 maxDepth = 16;
  set<Varnode *> visited;

  while (maxDepth > 0) {
    if (visited.count(vn)) return false;
    visited.insert(vn);

    // Check if in stack space
    if (vn->getSpace() == spc) {
      offset += vn->getOffset();
      return true;
    }

    // Check if spacebase input
    if (vn->isSpacebase() && vn->isInput()) {
      // This is ESP at function entry, offset = 0
      return true;
    }

    if (!vn->isWritten()) return false;

    PcodeOp *defop = vn->getDef();
    OpCode opc = defop->code();

    switch (opc) {
      case CPUI_COPY:
      case CPUI_INDIRECT:
        vn = defop->getIn(0);
        break;
      case CPUI_INT_ADD:
        if (defop->getIn(1)->isConstant()) {
          offset += defop->getIn(1)->getOffset();
          vn = defop->getIn(0);
        } else if (defop->getIn(0)->isConstant()) {
          offset += defop->getIn(0)->getOffset();
          vn = defop->getIn(1);
        } else {
          return false;
        }
        break;
      case CPUI_INT_SUB:
        if (defop->getIn(1)->isConstant()) {
          offset -= defop->getIn(1)->getOffset();
          vn = defop->getIn(0);
        } else {
          return false;
        }
        break;
      case CPUI_MULTIEQUAL:
        // Use existing checkMultiequalStackOffsets logic
        // Or conservatively return false for now
        return false;
      default:
        return false;
    }
    maxDepth--;
  }
  return false;
}
```

## Expected Impact

### Functions Fixed
- All variadic function calls where the caller has EBP frame
- All variadic function calls where ESP can be traced at call site
- CDemonActor_doCheckForInvalidPointers and similar

### Relationship to Existing MULTIEQUAL Fix

The MULTIEQUAL fix in heritage.cc handles ESP tracking through phi nodes (control flow merges).
This variadic fix handles trial registration when stackoffset hasn't been set yet.

They are complementary:
- MULTIEQUAL fix: ESP value certainty through branches
- Variadic fix: Early stackoffset resolution for trial registration

## Testing

1. Enable DECOMP_TARGET_FUNC for CDemonActor_doCheckForInvalidPointers (0x40ac80)
2. Run test_decompile_scenarios.py
3. Verify variadic arguments appear in decompiled output
4. Check format strings match argument counts

## Files to Modify

| File | Change |
|------|--------|
| `heritage.cc` | Add early resolution call in guardCalls() |
| `fspec.cc` | Add tryResolveSpacebaseEarly() method |
| `fspec.hh` | Declare tryResolveSpacebaseEarly() |

Or alternatively, add the helper directly to heritage.cc to avoid modifying fspec files.

## Changelog

- 2026-01-09: Initial investigation and root cause analysis
- 2026-01-09: Proposed fix design documented
