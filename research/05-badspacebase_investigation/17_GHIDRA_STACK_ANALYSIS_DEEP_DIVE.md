# Ghidra Stack Analysis Deep Dive

## Overview

This document records a comprehensive analysis of Ghidra's decompiler source code to understand why EBP-frame functions from Watcom 11 cause BADSPACEBASE errors and missing variadic arguments.

**Key Finding**: The previous patch attempt (document 16) failed because `RuleLoadVarnode` runs too late in the pipeline. This analysis identifies **`resolveSpacebaseRelative()`** as the correct intervention point - it runs BEFORE heritage analysis makes parameter detection decisions.

---

## The Complete Failure Chain

### Visual Overview

```
┌─────────────────────────────────────────────────────────────────────┐
│                    GHIDRA DECOMPILER PIPELINE                       │
├─────────────────────────────────────────────────────────────────────┤
│                                                                     │
│  1. ActionFuncLink::funcLinkInput (coreaction.cc:1474)              │
│     └─ Creates SpacebasePlaceholder to track ESP at CALL            │
│     └─ Calls fc->createPlaceholder() if needed                      │
│                           │                                         │
│                           ▼                                         │
│  2. RuleLoadVarnode::applyOp (ruleaction.cc:4519)                   │
│     └─ Detects SpacebasePlaceholder varnode                         │
│     └─ Calls checkSpacebase() to resolve                            │
│     └─ FOR EBP-FRAME: Returns NULL ← FAILURE POINT #1               │
│                           │                                         │
│                           ▼                                         │
│  3. FuncCallSpecs::resolveSpacebaseRelative (fspec.cc:4870)         │
│     └─ Should set stackoffset from resolved placeholder             │
│     └─ FOR EBP-FRAME: Never called OR gets wrong space              │
│     └─ stackoffset stays as 0xBADBEEF (offset_unknown)              │
│                           │                                         │
│                           ▼                                         │
│  4. Heritage::guardCalls (heritage.cc:1434)                         │
│     └─ Checks: stackoffset != offset_unknown?                       │
│     └─ FOR EBP-FRAME: FALSE → tryregister = false ← GATE            │
│     └─ Parameter trials NEVER registered                            │
│                           │                                         │
│                           ▼                                         │
│  5. ParamActive::buildTrialMap (fspec.cc:849)                       │
│     └─ No trials to match → no parameters detected                  │
│     └─ Variadic arguments LOST                                      │
│                                                                     │
└─────────────────────────────────────────────────────────────────────┘
```

### Stage 1: Placeholder Creation

**File**: `coreaction.cc`
**Function**: `ActionFuncLink::funcLinkInput()`
**Lines**: 1474-1513

```cpp
void ActionFuncLink::funcLinkInput(FuncCallSpecs *fc,Funcdata &data)
{
  bool inputlocked = fc->isInputLocked();
  bool varargs = fc->isDotdotdot();
  AddrSpace *spacebase = fc->getSpacebase();  // Get stack space for this calling convention
  // ...

  if (spacebase != (AddrSpace *)0)  // If we need stack tracking
    fc->createPlaceholder(data, spacebase);  // Create placeholder to track ESP
}
```

**What it does**: Creates a "SpacebasePlaceholder" varnode that will be used to determine where ESP is at the time of the CALL.

**File**: `fspec.cc`
**Function**: `FuncCallSpecs::createPlaceholder()`
**Lines**: 4849-4857

```cpp
void FuncCallSpecs::createPlaceholder(Funcdata &data,AddrSpace *spacebase)
{
  int4 slot = op->numInput();
  Varnode *loadval = data.opStackLoad(spacebase,0,1,op,(Varnode *)0,false);
  data.opInsertInput(op,loadval,slot);
  setStackPlaceholderSlot(slot);
  loadval->setSpacebasePlaceholder();  // Mark as placeholder for later resolution
}
```

---

### Stage 2: Placeholder Resolution Attempt

**File**: `ruleaction.cc`
**Function**: `RuleLoadVarnode::applyOp()`
**Lines**: 4519-4547

```cpp
int4 RuleLoadVarnode::applyOp(PcodeOp *op,Funcdata &data)
{
  // ... resolve LOAD to stack location ...

  Varnode *refvn = op->getOut();
  if (refvn->isSpacebasePlaceholder()) {
    refvn->clearSpacebasePlaceholder();
    PcodeOp *placeOp = refvn->loneDescend();
    if (placeOp != (PcodeOp *)0) {
      FuncCallSpecs *fc = data.getCallSpecs(placeOp);
      if (fc != (FuncCallSpecs *)0)
        fc->resolveSpacebaseRelative(data,refvn);  // ← TRIGGER POINT
    }
  }
  return 1;
}
```

**What it does**: When a LOAD operation produces a SpacebasePlaceholder varnode, and that LOAD is successfully resolved to a stack location, it triggers `resolveSpacebaseRelative()`.

**Problem for EBP-frame**: The `checkSpacebase()` call (line 4527) returns NULL because EBP is not recognized as a spacebase. The placeholder is never properly resolved.

---

### Stage 3: Stack Offset Computation

**File**: `fspec.cc`
**Function**: `FuncCallSpecs::resolveSpacebaseRelative()`
**Lines**: 4870-4904

```cpp
void FuncCallSpecs::resolveSpacebaseRelative(Funcdata &data,Varnode *phvn)
{
  Varnode *refvn = phvn->getDef()->getIn(0);
  AddrSpace *spacebase = refvn->getSpace();

  if (spacebase->getType() != IPTR_SPACEBASE) {
    data.warningHeader("This function may have set the stack pointer");
  }

  stackoffset = refvn->getOffset();  // ← SET THE CRITICAL VALUE

  // ... handle locked parameters ...
}
```

**What it does**: Sets `stackoffset` to the resolved stack offset at the CALL site. This value is used later by heritage analysis.

**Problem for EBP-frame**:
- If `resolveSpacebaseRelative()` is never called: `stackoffset` stays as `offset_unknown` (0xBADBEEF)
- If called but `refvn` is EBP-derived: The space type check fails, warning is emitted, but offset may be wrong

**File**: `fspec.cc`
**Line**: 4928 (constructor)

```cpp
FuncCallSpecs::FuncCallSpecs(PcodeOp *call_op)
  : FuncProto(), activeinput(true), activeoutput(true)
{
  // ...
  stackoffset = offset_unknown;  // ← DEFAULT VALUE: 0xBADBEEF
  // ...
}
```

---

### Stage 4: The Critical Gate

**File**: `heritage.cc`
**Function**: `Heritage::guardCalls()`
**Lines**: 1460-1466

```cpp
bool tryregister = true;
if (spc->getType() == IPTR_SPACEBASE) {
  if (fc->getSpacebaseOffset() != FuncCallSpecs::offset_unknown)
    off = spc->wrapOffset(off - fc->getSpacebaseOffset());
  else
    tryregister = false;  // ← THE GATE: Blocks all trial registration!
}
```

**What it does**: If `stackoffset` is unknown, the function sets `tryregister = false`, which prevents ALL parameter trial registration for stack-based parameters.

**The Gate Effect**: When `tryregister = false`:

```cpp
// Lines 1496-1506 - Trial registration
if (fc->isInputActive() && tryregister) {  // ← tryregister is FALSE!
  int4 inputCharacter = fc->characterizeAsInputParam(transAddr,size);
  if (inputCharacter == ParamEntry::contains_justified) {
    ParamActive *active = fc->getActiveInput();
    if (active->whichTrial(transAddr,size)<0) {
      active->registerTrial(transAddr,size);  // ← NEVER REACHED
      // ...
    }
  }
}
```

---

### Stage 5: Parameter Loss

**File**: `fspec.cc`
**Function**: `ParamListStandard::buildTrialMap()`
**Lines**: 849-937

```cpp
void ParamListStandard::buildTrialMap(ParamActive *active) const
{
  for(int4 i=0;i<active->getNumTrials();++i) {
    ParamTrial &paramtrial(active->getTrial(i));
    const ParamEntry *entrySlot = findEntry(paramtrial.getAddress(),
                                            paramtrial.getSize(),true);
    if (entrySlot == (const ParamEntry *)0)
      paramtrial.markNoUse();  // No matching entry → trial eliminated
    // ...
  }
}
```

**File**: `fspec.cc`
**Function**: `ParamActive::deleteUnusedTrials()`
**Lines**: 2013-2028

```cpp
void ParamActive::deleteUnusedTrials(void)
{
  vector<ParamTrial> newtrials;
  for(int4 i=0;i<trial.size();++i) {
    ParamTrial &curtrial(trial[i]);
    if (curtrial.isUsed()) {
      // Keep it
      newtrials.push_back(curtrial);
    }
    // Otherwise: DELETED
  }
  trial = newtrials;
}
```

**Result**: With no trials registered, variadic arguments are completely lost.

---

## Why Document 16's Patch Failed

### The Timing Problem

Our previous patch added `checkDerivedSpacebase()` to `RuleLoadVarnode::vnSpacebase()`. The problem:

| Stage | What Our Patch Did | Why It Failed |
|-------|-------------------|---------------|
| Heritage Analysis | Already ran | Stack references already transformed to `stack:offset` |
| `vnSpacebase()` | Found `stack:0x4` varnode | This is ALREADY RESOLVED |
| Return Value | Returned `(stack, computed_offset)` | Created DUPLICATE stack reference |
| Result | Conflicts with existing analysis | Phantom parameters, crashes |

The `stack:0x4` varnodes we found were **already-resolved** symbolic stack locations. By returning them as new spacebase results, we were double-counting and creating conflicts.

### The Correct Intervention Point

`resolveSpacebaseRelative()` runs **BEFORE** heritage analysis makes its decisions:

```
1. funcLinkInput() creates placeholder     ← EARLY
2. resolveSpacebaseRelative() sets stackoffset  ← FIX HERE
3. Heritage analysis uses stackoffset      ← USES OUR VALUE
4. Trial registration happens              ← WORKS CORRECTLY
5. RuleLoadVarnode runs                    ← TOO LATE (doc 16)
```

---

## The Proposed Fix

### Location

**File**: `fspec.cc`
**Function**: `FuncCallSpecs::resolveSpacebaseRelative()`
**Lines**: 4870-4904

### Current Code (Problem)

```cpp
void FuncCallSpecs::resolveSpacebaseRelative(Funcdata &data,Varnode *phvn)
{
  Varnode *refvn = phvn->getDef()->getIn(0);
  AddrSpace *spacebase = refvn->getSpace();

  if (spacebase->getType() != IPTR_SPACEBASE) {
    // Just warn and continue with potentially wrong offset
    data.warningHeader("This function may have set the stack pointer");
  }

  stackoffset = refvn->getOffset();
  // ...
}
```

### Proposed Enhancement

```cpp
void FuncCallSpecs::resolveSpacebaseRelative(Funcdata &data,Varnode *phvn)
{
  Varnode *refvn = phvn->getDef()->getIn(0);
  AddrSpace *spacebase = refvn->getSpace();

  if (spacebase->getType() != IPTR_SPACEBASE) {
    // NEW: Try to trace back through COPY/INT_ADD to find spacebase derivation
    uintb derivedOffset = 0;
    AddrSpace *derivedSpace = traceToSpacebase(refvn, derivedOffset);

    if (derivedSpace != (AddrSpace *)0) {
      // Found EBP-frame pattern: EBP derived from ESP
      stackoffset = derivedSpace->wrapOffset(refvn->getOffset() + derivedOffset);
      return;
    }

    data.warningHeader("This function may have set the stack pointer");
  }

  stackoffset = refvn->getOffset();
  // ...
}

// NEW: Helper function to trace through EBP derivation
AddrSpace *FuncCallSpecs::traceToSpacebase(Varnode *vn, uintb &offset)
{
  offset = 0;
  int4 maxDepth = 8;

  while (maxDepth > 0) {
    // Check if this varnode is in stack space (already resolved by earlier analysis)
    if (vn->getSpace()->getType() == IPTR_SPACEBASE) {
      offset += vn->getOffset();
      return vn->getSpace();
    }

    // Check if this is a spacebase input
    if (vn->isSpacebase() && vn->isInput()) {
      return /* associated space */;
    }

    if (!vn->isWritten())
      return (AddrSpace *)0;

    PcodeOp *defop = vn->getDef();
    OpCode opc = defop->code();

    if (opc == CPUI_COPY) {
      vn = defop->getIn(0);
    }
    else if (opc == CPUI_INT_ADD) {
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

  return (AddrSpace *)0;
}
```

### Why This Should Work

1. **Correct Timing**: Runs before heritage analysis
2. **Sets stackoffset**: The critical value that gates trial registration
3. **No Conflicts**: We're computing the offset, not creating new varnodes
4. **Same Pattern**: Uses the same COPY/INT_ADD tracing we developed before

---

## Additional Discovery: killedbycall Interaction

### The Problem

Even with correct `stackoffset`, there's another gate:

**File**: `heritage.cc`
**Lines**: 1474-1475

```cpp
if (effecttype != EffectRecord::killedbycall && fc->isAutoKilledByCall())
  effecttype = EffectRecord::killedbycall;
```

If a stack range is marked `killedbycall` BEFORE trial registration:

```cpp
// Lines 1522-1526
else if (effecttype == EffectRecord::killedbycall) {
  indop = fd->newIndirectCreation(fc->getOp(),addr,size,possibleoutput);
  // ... trial registration path is SKIPPED ...
}
```

### Watcom Calling Convention Impact

The x86watcom.cspec defines:

```xml
<output killedbycall="true">
  <pentry minsize="1" maxsize="4"><register name="EAX" /></pentry>
</output>
```

This `killedbycall="true"` on output can trigger the auto-kill behavior, potentially blocking stack parameter detection.

### Potential Mitigation

Consider whether the Watcom calling conventions need adjustment to prevent premature `killedbycall` marking for stack parameters.

---

## Key Data Structures

### FuncCallSpecs

**File**: `fspec.hh`, Lines 1670-1690

```cpp
class FuncCallSpecs : public FuncProto {
  enum { offset_unknown = 0xBADBEEF };  // Magic value for unknown offset

  uintb stackoffset;           // Stack offset at call site
  int4 stackPlaceholderSlot;   // Slot containing placeholder varnode

  uintb getSpacebaseOffset(void) const { return stackoffset; }
  // ...
};
```

### ParamTrial

**File**: `fspec.hh`

Trials are candidate parameter storage locations registered during heritage analysis. They're later matched to actual parameters or deleted if unused.

### AddrSpace Types

```cpp
IPTR_SPACEBASE  // Stack-like space with base register (e.g., stack space)
IPTR_CONSTANT   // Constant values
IPTR_INTERNAL   // Internal/temporary varnodes
```

---

## Summary

| Issue | Root Cause | Fix Location |
|-------|-----------|--------------|
| stackoffset stays unknown | `resolveSpacebaseRelative()` not called or fails | fspec.cc:4870 |
| Trials not registered | `tryregister = false` when stackoffset unknown | heritage.cc:1462-1465 |
| EBP not recognized | Only ESP configured as spacebase | Trace through COPY chain |
| Previous patch failed | Ran after heritage analysis | Wrong stage in pipeline |

### Recommended Fix Order

1. **Primary**: Modify `resolveSpacebaseRelative()` to trace EBP derivation
2. **Secondary**: May need cspec adjustments for killedbycall behavior
3. **Validation**: Test on EBP-frame functions to verify trial registration works

---

## Files Reference

| File | Key Functions | Purpose |
|------|---------------|---------|
| `coreaction.cc` | `funcLinkInput()` | Creates placeholder for stack tracking |
| `fspec.cc` | `resolveSpacebaseRelative()` | **FIX TARGET** - Sets stackoffset |
| `fspec.cc` | `buildTrialMap()`, `deleteUnusedTrials()` | Parameter matching |
| `heritage.cc` | `guardCalls()` | Gates trial registration on stackoffset |
| `ruleaction.cc` | `RuleLoadVarnode::applyOp()` | Triggers placeholder resolution |
| `x86watcom.cspec` | Calling conventions | May need killedbycall adjustment |
