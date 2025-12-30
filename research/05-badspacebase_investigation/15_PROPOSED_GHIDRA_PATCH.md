# Proposed Ghidra Patch: EBP-Derived Spacebase Recognition

## Overview

This document details a proposed modification to Ghidra's decompiler source code that would enable recognition of EBP-relative stack access patterns in functions that use EBP as a frame pointer.

## Problem Statement

Ghidra's spacebase resolution mechanism only recognizes stack accesses via:
1. Direct spacebase (ESP) input
2. `ESP_input + constant`

For Watcom 11 EBP-frame functions, stack parameters are accessed via `EBP + offset` where EBP is derived from ESP. This pattern is not recognized, causing:
- `stackoffset` to remain `offset_unknown`
- Trial registration to be skipped in `heritage.cc`
- Variadic function parameters to not be detected

## Impact Assessment

### Overall Codebase Frame Type Distribution

| Category | Count | Percentage |
|----------|-------|------------|
| Total functions | 7,154 | 100% |
| EBP-frame functions | 926 | 12.9% |
| ESP-frame functions | 6,228 | 87.1% |

The vast majority (87%) of Watcom 11 functions use ESP-frame convention.

### badspacebase Impact

| Category | Count | Percentage |
|----------|-------|------------|
| Total badspacebase functions | 1,629 | 100% |
| EBP-frame (fixable by this patch) | 520 | 31.9% |
| ESP-frame (not fixable by this patch) | 1,109 | 68.1% |

**This patch would fix 520 functions (32% of badspacebase issues).**

The remaining 1,109 ESP-frame functions require a different solution (see "ESP-Frame Functions" section below).

## Files to Modify

### 1. ruleaction.cc

**Location**: `Ghidra/Features/Decompiler/src/decompile/cpp/ruleaction.cc`

#### A. Add new helper function after line ~4227

```cpp
/// \brief Check if Varnode is derived from a spacebase through operations
///
/// Traces back through COPY and INT_ADD/INT_SUB operations to find if vn
/// ultimately derives from a spacebase input. Returns the cumulative offset.
/// This handles EBP-frame patterns like: EBP = ESP; access via [EBP + offset]
///
/// \param glb is the address space manager
/// \param vn is the Varnode to trace
/// \param spc is the space being loaded from
/// \param offset receives the cumulative offset from spacebase
/// \return the associated space or NULL
AddrSpace *RuleLoadVarnode::checkDerivedSpacebase(Architecture *glb, Varnode *vn,
                                                   AddrSpace *spc, uintb &offset)
{
  offset = 0;
  int4 maxDepth = 8;  // Limit recursion to prevent infinite loops

  while (maxDepth > 0) {
    // Check if we've reached a spacebase input
    AddrSpace *retspace = correctSpacebase(glb, vn, spc);
    if (retspace != (AddrSpace *)0)
      return retspace;

    // Must be a written varnode to trace further
    if (!vn->isWritten())
      return (AddrSpace *)0;

    PcodeOp *defop = vn->getDef();
    OpCode opc = defop->code();

    if (opc == CPUI_COPY) {
      // Direct copy - continue tracing through
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
        return (AddrSpace *)0;  // Non-constant addition, can't trace
      }
    }
    else if (opc == CPUI_INT_SUB) {
      // Subtraction - second operand must be constant
      Varnode *in1 = defop->getIn(1);
      if (in1->isConstant()) {
        offset -= in1->getOffset();
        vn = defop->getIn(0);
      }
      else {
        return (AddrSpace *)0;  // Non-constant subtraction
      }
    }
    else {
      return (AddrSpace *)0;  // Unrecognized operation in chain
    }

    maxDepth--;
  }

  return (AddrSpace *)0;  // Max depth exceeded
}
```

#### B. Modify vnSpacebase() to use the new helper

**Current code** (lines 4194-4227):
```cpp
AddrSpace *RuleLoadVarnode::vnSpacebase(Architecture *glb,Varnode *vn,uintb &val,AddrSpace *spc)
{
  PcodeOp *op;
  Varnode *vn1,*vn2;
  AddrSpace *retspace;

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
  retspace = correctSpacebase(glb,vn2,spc);
  if (retspace != (AddrSpace *)0) {
    if (vn1->isConstant()) {
      val = vn1->getOffset();
      return retspace;
    }
  }
  return (AddrSpace *)0;
}
```

**Modified code** - add before final `return (AddrSpace *)0;`:
```cpp
AddrSpace *RuleLoadVarnode::vnSpacebase(Architecture *glb,Varnode *vn,uintb &val,AddrSpace *spc)
{
  PcodeOp *op;
  Varnode *vn1,*vn2;
  AddrSpace *retspace;

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
  retspace = correctSpacebase(glb,vn2,spc);
  if (retspace != (AddrSpace *)0) {
    if (vn1->isConstant()) {
      val = vn1->getOffset();
      return retspace;
    }
  }

  // NEW: Check for derived spacebase pattern (e.g., EBP-frame)
  // Pattern: vn = (register derived from spacebase) + constant
  uintb derivedOffset;
  if (vn2->isConstant()) {
    retspace = checkDerivedSpacebase(glb, vn1, spc, derivedOffset);
    if (retspace != (AddrSpace *)0) {
      val = vn2->getOffset() + derivedOffset;
      return retspace;
    }
  }
  if (vn1->isConstant()) {
    retspace = checkDerivedSpacebase(glb, vn2, spc, derivedOffset);
    if (retspace != (AddrSpace *)0) {
      val = vn1->getOffset() + derivedOffset;
      return retspace;
    }
  }

  return (AddrSpace *)0;
}
```

### 2. ruleaction.hh

**Location**: `Ghidra/Features/Decompiler/src/decompile/cpp/ruleaction.hh`

Add function declaration in `RuleLoadVarnode` class (around line ~1185):

```cpp
class RuleLoadVarnode : public Rule {
  static AddrSpace *correctSpacebase(Architecture *glb,Varnode *vn,AddrSpace *spc);
  static AddrSpace *vnSpacebase(Architecture *glb,Varnode *vn,uintb &val,AddrSpace *spc);
  static AddrSpace *checkDerivedSpacebase(Architecture *glb,Varnode *vn,AddrSpace *spc,uintb &offset);  // NEW
public:
  // ... rest of class
};
```

## How It Works

### Before (Current Ghidra)

```
EBP-frame function:
  PUSH EBP
  MOV EBP, ESP        ; EBP = ESP_input
  ...
  MOV EAX, [EBP+8]    ; Load parameter
  PUSH EAX
  CALL variadic_func  ; ESP uncertain here

vnSpacebase() sees:
  LOAD from [EBP + 8]
  - EBP is NOT a spacebase input (it's written by COPY from ESP)
  - Pattern not recognized
  - Returns NULL

Result: stackoffset = offset_unknown, parameters not detected
```

### After (With Patch)

```
vnSpacebase() sees:
  LOAD from [EBP + 8]
  - EBP is NOT a direct spacebase input
  - Calls checkDerivedSpacebase(EBP)
    - Traces: EBP <- COPY <- ESP_input
    - ESP_input IS a spacebase input!
    - derivedOffset = 0 (no offset in the copy chain)
  - Returns stack space with val = 8 + 0 = 8

Result: stackoffset computed correctly, parameters detected
```

## Patterns Handled

| Pattern | Handled | Example |
|---------|---------|---------|
| Direct ESP + const | Already works | `[ESP + 4]` |
| EBP = ESP; [EBP + const] | **NEW** | Watcom standard prologue |
| EBP = ESP - 4; [EBP + const] | **NEW** | Prologue with local allocation |
| EBP = ESP; EBX = EBP; [EBX + const] | **NEW** | Multi-level copy (up to depth 8) |
| [ESI + const] where ESI from ESP | **NEW** | Any register derived from ESP |

## Risks and Mitigations

### Risk 1: Performance Impact
- **Risk**: Deeper tracing adds CPU cycles
- **Mitigation**: Max depth of 8 limits worst case; early exit on unrecognized patterns

### Risk 2: False Positives
- **Risk**: Could match unintended patterns on other architectures
- **Mitigation**: Only triggers after existing patterns fail; requires valid spacebase at chain end

### Risk 3: Offset Wrapping
- **Risk**: Stack address space may need offset wrapping for negative values
- **Mitigation**: Could add `spc->wrapOffset(val)` if needed

### Risk 4: Interaction with Other Rules
- **Risk**: May interact unexpectedly with other decompiler transformations
- **Mitigation**: Extensive testing required across different binaries

## Testing Plan

1. **Unit Tests**:
   - Test `checkDerivedSpacebase()` with various patterns
   - Verify offset accumulation is correct

2. **Watcom Binary Tests**:
   - Re-analyze nocedit.exe after patch
   - Compare badspacebase count before/after
   - Verify variadic parameters are now detected

3. **Regression Tests**:
   - Run Ghidra's existing test suite
   - Test against non-Watcom binaries (MSVC, GCC) to ensure no regressions

4. **Edge Cases**:
   - Functions with multiple frame pointer copies
   - Nested function calls
   - Recursive functions

## Build Instructions

```bash
cd ~/Repositories/Ghidra

# Apply patch to ruleaction.cc and ruleaction.hh
# (manual edits or patch file)

# Rebuild decompiler
cd Ghidra/Features/Decompiler/src/decompile/cpp
make

# Or rebuild entire Ghidra
cd ~/Repositories/Ghidra
gradle buildGhidra
```

## Alternative: Minimal Patch

If the full tracing approach is too risky, a minimal single-level check:

```cpp
// Only check ONE level: base register written by COPY from spacebase
if (vn1->isWritten() && vn1->getDef()->code() == CPUI_COPY) {
  Varnode *copySrc = vn1->getDef()->getIn(0);
  retspace = correctSpacebase(glb, copySrc, spc);
  if (retspace != (AddrSpace *)0 && vn2->isConstant()) {
    val = vn2->getOffset();
    return retspace;
  }
}
// Symmetric check for vn2...
```

This is ~20 lines and handles the most common `MOV EBP, ESP` case without the complexity of multi-level tracing.

## ESP-Frame Functions (Not Fixed by This Patch)

Investigation of the 1,109 badspacebase functions without `is_ebp_frame: true` confirmed they are true **ESP-frame functions** with a fundamentally different prologue:

### ESP-frame Prologue Pattern

```asm
; Example: rotateBitmap_FUN_00434870
PUSH EBX                            ; Save callee-saved
PUSH ESI
PUSH EDI
PUSH EBP                            ; Save EBP (NOT as frame pointer!)
SUB ESP, 0x68                       ; Allocate locals
MOV EBP, dword ptr [ESP + 0x88]     ; EBP repurposed as general variable
```

Key characteristics:
- **No `MOV EBP, ESP`** - EBP is not set up as frame pointer
- EBP is just saved as a callee-saved register, then repurposed
- All stack access uses `[ESP + offset]`
- When ESP becomes uncertain, there's NO stable anchor

### Why This Patch Cannot Help ESP-Frame Functions

The proposed patch traces back through COPY/ADD operations looking for an ESP input. For ESP-frame functions:

1. There's no EBP <- ESP relationship to trace
2. Stack accesses go directly through ESP (e.g., `[ESP + 0x88]`)
3. When ESP is uncertain (`~` marker), there's no alternative reference
4. The fundamental problem remains: ESP has multiple possible values

### Comparison of Prologue Styles

| Aspect | EBP-Frame | ESP-Frame |
|--------|-----------|-----------|
| First instruction | `PUSH EBP` | `PUSH EBX/ESI/EDI` |
| Frame setup | `MOV EBP, ESP` | None |
| EBP usage | Frame pointer | General purpose variable |
| Locals allocation | Before/after saves | `SUB ESP, N` |
| Stack access | `[EBP + offset]` | `[ESP + offset]` |
| Stable anchor | EBP | None |
| This patch helps? | **Yes** | **No** |

### Possible Solutions for ESP-Frame Functions

1. **P-code override with ESP tracking**: For simple cases, inject ESP anchors at specific points where ESP is known
2. **Function-level transformation**: Rewrite the function's p-code to compute a synthetic frame pointer
3. **Heuristic parameter detection**: Use call site analysis and format string parsing to infer parameters
4. **Manual annotation**: Mark known parameter locations in the JSON files

The ESP-frame issue is fundamentally harder because there's no stable reference point. This may require a different approach than the EBP-frame fix.

## Conclusion

This patch is a **targeted, moderate-complexity change** that:
- Modifies 1 source file + 1 header
- Adds ~60-80 lines of code
- Fixes 32% of badspacebase issues (520 EBP-frame functions)
- Has manageable risk with proper testing

The change extends Ghidra's existing pattern matching rather than replacing core infrastructure, making it relatively safe to implement and test.

### Summary of badspacebase Solutions

| Function Type | Count | Solution | Complexity |
|---------------|-------|----------|------------|
| EBP-frame | 520 (32%) | This Ghidra patch | Moderate |
| ESP-frame | 1,109 (68%) | Requires different approach | High |

For ESP-frame functions, the lack of a stable stack anchor means parameter detection will likely require:
- Per-function ESP tracking via p-code overrides (already partially implemented)
- Format string parsing to infer argument counts
- Call site analysis and manual annotation

The two-pronged approach (Ghidra patch for EBP-frame + p-code overrides for ESP-frame) may be the most practical path forward.
