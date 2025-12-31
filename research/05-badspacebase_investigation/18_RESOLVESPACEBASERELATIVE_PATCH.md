# resolveSpacebaseRelative() Patch Implementation

## Overview

This document records the implementation of the EBP-frame spacebase fix identified in document 17. The fix adds EBP derivation tracing to `resolveSpacebaseRelative()` in `fspec.cc`.

## Implementation Summary

### Files Modified

| File | Change |
|------|--------|
| `fspec.cc` | Added `traceToSpacebase()` helper, modified `resolveSpacebaseRelative()` |
| `ruleaction.cc` | Cleaned up (removed old failed patch code) |
| `ruleaction.hh` | Cleaned up (removed `checkDerivedSpacebase` declaration) |

### New Helper Function: traceToSpacebase()

Added a static helper function that traces back through varnode definition chains to find spacebase derivation:

```cpp
static AddrSpace *traceToSpacebase(Architecture *glb, Varnode *vn, uintb &offset)
{
  offset = 0;
  int4 maxDepth = 8;  // Limit tracing to prevent infinite loops

  while (maxDepth > 0) {
    // Check if varnode is in a spacebase address space
    AddrSpace *vnSpace = vn->getSpace();
    if (vnSpace->getType() == IPTR_SPACEBASE) {
      offset += vn->getOffset();
      return vnSpace;
    }

    // Check if this is a spacebase input register (e.g., ESP input)
    if (vn->isSpacebase() && vn->isInput()) {
      AddrSpace *assoc = glb->getSpaceBySpacebase(vn->getAddr(), vn->getSize());
      if (assoc != (AddrSpace *)0)
        return assoc;
    }

    // Must be a written varnode to trace further
    if (!vn->isWritten())
      return (AddrSpace *)0;

    PcodeOp *defop = vn->getDef();
    OpCode opc = defop->code();

    // Trace through COPY, INT_ADD, INT_SUB with constant operands
    if (opc == CPUI_COPY) {
      vn = defop->getIn(0);
    }
    else if (opc == CPUI_INT_ADD) {
      // Addition - one operand must be constant
      Varnode *in0 = defop->getIn(0);
      Varnode *in1 = defop->getIn(1);
      if (in1->isConstant()) {
        offset += in1->getOffset();
        vn = in0;
      }
      else if (in0->isConstant()) {
        offset += in0->getOffset();
        vn = in1;
      }
      else {
        return (AddrSpace *)0;
      }
    }
    else if (opc == CPUI_INT_SUB) {
      Varnode *in1 = defop->getIn(1);
      if (in1->isConstant()) {
        offset -= in1->getOffset();
        vn = defop->getIn(0);
      }
      else {
        return (AddrSpace *)0;
      }
    }
    else {
      return (AddrSpace *)0;
    }

    maxDepth--;
  }

  return (AddrSpace *)0;  // Max depth exceeded
}
```

### Modified Function: resolveSpacebaseRelative()

The original function simply emitted a warning when the space was not IPTR_SPACEBASE. The modified version:

1. **Attempts EBP-frame tracing**: When `refvn->getSpace()` is not IPTR_SPACEBASE, call `traceToSpacebase()` to find if it derives from a spacebase
2. **Computes derived offset**: If tracing succeeds, compute `stackoffset` from the derived values
3. **Falls back to warning**: Only emit the warning if tracing fails

```cpp
void FuncCallSpecs::resolveSpacebaseRelative(Funcdata &data,Varnode *phvn)
{
  Varnode *refvn = phvn->getDef()->getIn(0);
  AddrSpace *spacebase = refvn->getSpace();
  if (spacebase->getType() != IPTR_SPACEBASE) {
    // Try to trace back through EBP-frame pattern
    uintb derivedOffset = 0;
    AddrSpace *derivedSpace = traceToSpacebase(data.getArch(), refvn, derivedOffset);
    if (derivedSpace != (AddrSpace *)0 && derivedSpace->getType() == IPTR_SPACEBASE) {
      // Successfully traced EBP back to stack space
      stackoffset = derivedSpace->wrapOffset(refvn->getOffset() + derivedOffset);
      spacebase = derivedSpace;
    }
    else {
      data.warningHeader("This function may have set the stack pointer");
    }
  }
  else {
    stackoffset = refvn->getOffset();
  }
  // ... rest of function unchanged ...
}
```

---

## Why Previous Patch Failed (Document 16)

The previous patch attempted to add EBP-frame tracing to `RuleLoadVarnode::vnSpacebase()` in `ruleaction.cc`. This failed because:

1. **Wrong timing**: `RuleLoadVarnode` runs AFTER heritage analysis has already transformed references
2. **Stack space conflict**: By the time vnSpacebase() runs, stack references are already `stack:offset` varnodes
3. **Double counting**: Returning these already-resolved varnodes as new spacebase results caused conflicts

The cleanup removed:
- `checkDerivedSpacebase()` function
- All debug logging infrastructure (EBP_LOG_SAFE, mutex, atomic counters)
- Calls to `checkDerivedSpacebase()` from `vnSpacebase()`

---

## Why This Location is Correct

From document 17's pipeline analysis:

```
1. funcLinkInput() creates placeholder     <- EARLY
2. resolveSpacebaseRelative() sets stackoffset  <- FIX HERE (before heritage)
3. Heritage analysis uses stackoffset      <- USES OUR VALUE
4. Trial registration happens              <- WORKS CORRECTLY
5. RuleLoadVarnode runs                    <- TOO LATE (doc 16)
```

`resolveSpacebaseRelative()` runs:
- AFTER RuleLoadVarnode transforms the placeholder LOAD
- BEFORE heritage analysis makes parameter trial decisions
- Before the critical `stackoffset` gate check in `heritage.cc:1462`

---

## Expected Impact

### What This Fixes

When `resolveSpacebaseRelative()` is called with an EBP-derived varnode, this patch will:

1. Trace back through `MOV EBP, ESP` pattern
2. Find the underlying stack space derivation
3. Compute correct `stackoffset` value
4. Enable proper trial registration in heritage analysis

### Limitations

This fix only helps when `resolveSpacebaseRelative()` is actually called. If `RuleLoadVarnode::checkSpacebase()` returns NULL for EBP-frame loads (preventing the placeholder from being resolved), this function won't be invoked.

The placeholder LOAD itself uses ESP (the actual spacebase), so it should still be processed correctly. The issue is with other loads in the function that use EBP-relative addressing.

---

## Patch File Location

```
JoyBox/Scripts/lib/tools/files/ghidra/ebp_frame_spacebase.patch
```

To apply:
```bash
cd /path/to/Ghidra
git apply /path/to/ebp_frame_spacebase.patch
```

---

## Testing Required

After applying this patch and rebuilding Ghidra:

1. Re-analyze nocedit.exe (or clear analysis and re-run)
2. Check functions known to have BADSPACEBASE errors
3. Verify variadic calls (printf, etc.) now show correct parameter counts
4. Monitor for any new crashes or phantom parameters

---

## Changelog

- 2025-12-30: Implemented `traceToSpacebase()` in fspec.cc
- 2025-12-30: Modified `resolveSpacebaseRelative()` to use EBP tracing
- 2025-12-30: Cleaned up old failed patch from ruleaction.cc/ruleaction.hh
- 2025-12-30: Updated patch file
