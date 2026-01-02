# Ghidra C++ Fix Options for EBP-Frame Spacebase

## Overview

This document outlines three concrete approaches to fix the EBP-frame spacebase issue in Ghidra's decompiler C++ code.

---

## Option 1: Extend Funcdata::spacebase() to Mark Derived Spacebases

### Location
`funcdata.cc:230` - `Funcdata::spacebase()`

### Current Behavior
Only marks varnodes at the EXACT spacebase register address (ESP = register:0x10).

### Proposed Change
After marking direct spacebase varnodes, trace through COPY operations to mark derived spacebases.

```cpp
void Funcdata::spacebase(void)
{
  VarnodeLocSet::const_iterator iter,enditer;
  int4 i,j,numspace;
  Varnode *vn;
  AddrSpace *spc;

  for(j=0;j<glb->numSpaces();++j) {
    spc = glb->getSpace(j);
    if (spc == (AddrSpace *)0) continue;
    numspace = spc->numSpacebase();
    for(i=0;i<numspace;++i) {
      const VarnodeData &point(spc->getSpacebase(i));
      Datatype *ct = glb->types->getTypeSpacebase(spc,getAddress());
      Datatype *ptr = glb->types->getTypePointer(point.size,ct,spc->getWordSize());

      iter = vbank.beginLoc(point.size,Address(point.space,point.offset));
      enditer = vbank.endLoc(point.size,Address(point.space,point.offset));
      while(iter != enditer) {
        vn = *iter++;
        if (vn->isFree()) continue;
        if (vn->isSpacebase()) {
          PcodeOp *op = vn->getDef();
          if ((op != (PcodeOp *)0)&&(op->code() == CPUI_INT_ADD))
            splitUses(vn);
        }
        else {
          vn->setFlags(Varnode::spacebase);
          if (vn->isInput())
            vn->updateType(ptr,true,true);

          // NEW: Mark varnodes that COPY from this spacebase
          markDerivedSpacebases(vn);
        }
      }
    }
  }
}

/// Mark varnodes that are direct COPYs from a spacebase register
void Funcdata::markDerivedSpacebases(Varnode *spacebaseVn)
{
  list<PcodeOp *>::const_iterator iter;
  for(iter = spacebaseVn->beginDescend(); iter != spacebaseVn->endDescend(); ++iter) {
    PcodeOp *op = *iter;
    if (op->code() == CPUI_COPY) {
      Varnode *out = op->getOut();
      if (out != (Varnode *)0 && !out->isSpacebase()) {
        out->setFlags(Varnode::spacebase);
        // Recursively mark further copies (e.g., if EBP is copied again)
        markDerivedSpacebases(out);
      }
    }
  }
}
```

### Pros
- Minimal change, focused on spacebase marking
- Follows existing code patterns
- Works at the right abstraction level

### Cons
- Only handles COPY, not INT_ADD/INT_SUB derived values
- May mark too many things if COPY chains are long
- Needs cycle detection for safety

### Risk Level: LOW-MEDIUM

---

## Option 2: New Early Action Before Heritage

### Location
New action class in `coreaction.cc`, registered before `ActionHeritage`

### Concept
Create an action that runs BEFORE heritage analysis to identify EBP-frame patterns and either:
1. Mark EBP as a derived spacebase
2. Transform EBP-relative accesses to ESP-relative

```cpp
// In coreaction.hh
class ActionEBPFrameDetect : public Action {
public:
  ActionEBPFrameDetect(const string &g) : Action(0,"ebpframe",g) {}
  virtual Action *clone(const ActionGroupList &grouplist) const {
    if (!grouplist.contains(getGroup())) return (Action *)0;
    return new ActionEBPFrameDetect(getGroup());
  }
  virtual int4 apply(Funcdata &data);
};

// In coreaction.cc
int4 ActionEBPFrameDetect::apply(Funcdata &data)
{
  // Find ESP input varnode
  AddrSpace *stackspace = data.getArch()->getStackSpace();
  if (stackspace == (AddrSpace *)0) return 0;

  Varnode *espInput = data.findSpacebaseInput(stackspace);
  if (espInput == (Varnode *)0) return 0;

  // Look for pattern: COPY EBP = ESP at function entry
  list<PcodeOp *>::const_iterator iter;
  for(iter = espInput->beginDescend(); iter != espInput->endDescend(); ++iter) {
    PcodeOp *op = *iter;
    if (op->code() != CPUI_COPY) continue;

    Varnode *out = op->getOut();
    if (out == (Varnode *)0) continue;

    // Check if this looks like frame pointer setup (early in function)
    // and the output register is commonly used as frame pointer (EBP)
    Address outAddr = out->getAddr();
    if (outAddr.getSpace()->getName() == "register" &&
        outAddr.getOffset() == 0x14) {  // EBP on x86

      // Mark this as a derived spacebase
      out->setFlags(Varnode::spacebase);

      // Also mark all COPYs of this derived spacebase
      markCopyChain(out);
    }
  }

  return 0;
}

// Register in buildDefaultGroups():
actmainloop->addAction( new ActionEBPFrameDetect("base") );  // Before ActionHeritage
actmainloop->addAction( new ActionHeritage("base") );
```

### Pros
- Clean separation of concerns
- Runs at the right time (before heritage)
- Can be made architecture-aware (x86 EBP, ARM FP, etc.)

### Cons
- New action class to maintain
- Hard-coded register offsets (0x14 for EBP)
- May need configuration per-architecture

### Risk Level: MEDIUM

---

## Option 3: Transform Patterns to ESP-Relative

### Location
New action or rule that transforms EBP-relative patterns to ESP-relative

### Concept
When we see the pattern:
```
COPY EBP = ESP           ; at function entry
SUB ESP = ESP, const     ; stack allocation
...
LOAD [EBP + offset]      ; access via EBP
```

Transform the LOAD to:
```
LOAD [ESP_input + offset]  ; direct spacebase access
```

```cpp
int4 ActionTransformEBPtoESP::apply(Funcdata &data)
{
  // Find ESP input and EBP = COPY(ESP) pattern
  AddrSpace *stackspace = data.getArch()->getStackSpace();
  Varnode *espInput = data.findSpacebaseInput(stackspace);
  if (espInput == (Varnode *)0) return 0;

  // Find EBP = COPY(ESP)
  Varnode *ebpFrame = findFramePointerCopy(espInput);
  if (ebpFrame == (Varnode *)0) return 0;

  // For each use of EBP in INT_ADD with constant
  list<PcodeOp *>::const_iterator iter;
  for(iter = ebpFrame->beginDescend(); iter != ebpFrame->endDescend(); ++iter) {
    PcodeOp *op = *iter;
    if (op->code() != CPUI_INT_ADD) continue;

    Varnode *constVn = op->getIn(1);
    if (!constVn->isConstant()) continue;

    // Check if result is used as LOAD/STORE address
    Varnode *addrVn = op->getOut();
    if (!isUsedAsAddress(addrVn)) continue;

    // Transform: replace EBP with ESP_input in the INT_ADD
    // This makes it: ESP_input + offset (recognized by spacebase logic)
    data.opSetInput(op, espInput, 0);  // Replace EBP with ESP
  }

  return 1;  // Indicate changes made
}
```

### Pros
- Transforms to patterns Ghidra already handles
- No new spacebase marking logic needed
- Addresses root cause

### Cons
- More invasive - actually modifies pcode
- Must run very early (before SSA)
- Risk of breaking other analysis

### Risk Level: MEDIUM-HIGH

---

## Option 4: Extend correctSpacebase() to Trace Derived

### Location
`ruleaction.cc:4173` - `RuleLoadVarnode::correctSpacebase()`

### Concept
Instead of requiring the varnode to be a spacebase INPUT, trace through COPY to find if it derives from one.

```cpp
AddrSpace *RuleLoadVarnode::correctSpacebase(Architecture *glb,Varnode *vn,AddrSpace *spc)
{
  // Original direct check
  if (vn->isSpacebase()) {
    if (vn->isConstant())
      return spc;
    if (vn->isInput()) {
      AddrSpace *assoc = glb->getSpaceBySpacebase(vn->getAddr(),vn->getSize());
      if (assoc->getContain() != spc)
        return (AddrSpace *)0;
      return assoc;
    }
  }

  // NEW: Check if this is a COPY from a spacebase input
  if (vn->isWritten()) {
    PcodeOp *def = vn->getDef();
    if (def->code() == CPUI_COPY) {
      Varnode *src = def->getIn(0);
      // Recursively check the source
      return correctSpacebase(glb, src, spc);
    }
  }

  return (AddrSpace *)0;
}
```

### Pros
- Simple recursive change
- No new infrastructure needed

### Cons
- We already tried this approach - fails because by the time RuleLoadVarnode runs, the COPY relationship is lost (EBP appears as INPUT)
- Too late in pipeline

### Risk Level: LOW (but known not to work)

---

## Recommendation

**Option 1 (Funcdata::spacebase)** combined with **Option 2 (Early Action)** is the safest approach:

1. **First**: Add `ActionEBPFrameDetect` before `ActionHeritage` to identify and mark EBP-frame patterns early
2. **Second**: Extend `Funcdata::spacebase()` to propagate spacebase marks through COPY chains

This gives us:
- Early detection before SSA transformations obscure relationships
- Proper marking that downstream code will recognize
- Minimal risk of breaking existing analysis

### Implementation Order

1. Start with Option 2 (ActionEBPFrameDetect) alone
2. Test on known EBP-frame BADSPACEBASE functions
3. If needed, add Option 1 (Funcdata::spacebase extension)
4. Validate no regressions on ESP-frame functions

---

## Testing Strategy

1. Identify 5-10 known EBP-frame BADSPACEBASE functions from nocedit.exe
2. Verify they have `MOV EBP, ESP` at entry
3. Apply fix and verify:
   - Stack parameters are now recognized
   - Variadic call arguments appear correctly
   - No regressions in other functions
