# BADSPACEBASE Cause Taxonomy

This document categorizes the different root causes of BADSPACEBASE errors and which fixes apply to each.

## Overview

BADSPACEBASE errors occur when Ghidra's decompiler cannot resolve a stack-relative reference to a concrete stack variable. The symptom is always the same (`BADSPACEBASE *in_ESP`), but the underlying causes vary significantly.

**Key insight**: A single fix approach cannot solve all BADSPACEBASE cases. Each cause requires a different intervention point in the decompiler pipeline.

## Cause Categories

### Category A: Missing Spacebase Input

**Symptom**: The spacebase varnode (ESP input) was never created or recognized.

**Detection**: `findSpacebaseInput()` returns NULL

**Root cause**: The calling convention didn't mark ESP as a function input, or the function entry point wasn't properly analyzed.

**Fixes that apply**:
- `DFIX_FORCE_SPACEBASE` - Forces construction of spacebase input during type inference
- `DFIX_ALIAS_RECOVERY` - Constructs spacebase for alias analysis

**Test**: Debug log shows `tryForceSpacebaseConstruction: existingVn=null`

---

### Category B: MULTIEQUAL Loses Stack Offset

**Symptom**: ESP tracking is lost at control flow merge points (PHI nodes).

**Detection**: MULTIEQUAL operation on stack pointer path with inputs at different offsets.

**Root cause**: In functions with complex control flow (loops, conditionals), the decompiler creates MULTIEQUAL (PHI) operations to merge values. If the stack pointer has different offsets on different paths, the decompiler marks it as "uncertain" and loses precise tracking.

**Example scenarios**:
- EBP frame + stack alignment (`AND ESP, -16`)
- EBP frame + call anchor pattern (ESP uncertain after calls)
- Multiple return paths with different stack states

**Fixes that apply**:
- `DFIX_MULTIEQUAL_STACK_TRACE` - Traces MULTIEQUAL inputs backward to verify they all have the same ESP offset

**Test**: Debug log shows `checkMultiequalStackOffsets` being called

---

### Category C: ESP Copied to Another Register

**Symptom**: ESP is copied to a general-purpose register (e.g., `MOV EAX, ESP`), and subsequent uses of that register lose the spacebase typing.

**Detection**: COPY operation from ESP to another register.

**Root cause**: The decompiler's type propagation doesn't carry the spacebase flag through COPY operations by default.

**Example scenarios**:
- Passing stack pointer as function argument
- Using a register as a frame pointer alternative
- Stack buffer address computation

**Fixes that apply**:
- `DFIX_SPACEBASE_PROPAGATION` - `RuleSpacebaseCopy` propagates spacebase flag on COPY

**Test**: Debug log shows `hasFix(addr, 0x10)` checks in COPY operations

---

### Category D: Stack Probe Corrupts ESP Tracking

**Symptom**: Call to `_chkstk` or `__alloca_probe` before frame setup.

**Detection**: Call to stack probe function in prologue.

**Root cause**: Stack probe functions modify ESP in ways the decompiler can't model. If this happens before `MOV EBP, ESP`, the frame setup inherits uncertain ESP.

**Example scenarios**:
- Large local variable allocation (>4KB)
- `alloca()` usage

**Fixes that apply**:
- **Callfixup**: Replace probe call with `ESP = ESP - EAX;`

**Test**: Check for `_chkstk`, `__alloca_probe` in function calls

---

### Category E: NON-EBP Frame with Register Parameter Confusion

**Symptom**: `BADSPACEBASE *in_ESP` is declared as if ESP were a function parameter.

**Detection**:
- Function has no EBP frame (pure ESP-relative)
- `in_ESP` appears in decompiled output but is never used
- Debug shows spacebase EXISTS (`existingVn=non-null`)
- No MULTIEQUAL on stack pointer path
- No ESP→register COPY

**Root cause**: **UNKNOWN** - The decompiler incorrectly infers that ESP is a register parameter at function entry. This appears to happen in the parameter detection or type inference phase, not in stack tracking.

**Example function**: `applyActPalette_FUN_004319b0` (address 0x4319b0)

**Fixes that DON'T apply**:
- `DFIX_FORCE_SPACEBASE` - Spacebase already exists
- `DFIX_ALIAS_RECOVERY` - Spacebase already exists
- `DFIX_MULTIEQUAL_STACK_TRACE` - No MULTIEQUAL on ESP path
- `DFIX_SPACEBASE_PROPAGATION` - No ESP COPY
- Callfixup - Removing call made output worse

**Test indicators**:
```
[DFIX] tryForceSpacebaseConstruction called for func 0x4319b0, existingVn=non-null
[DFIX] tryRecoverSpacebaseForAlias called for func 0x4319b0, existingVn=non-null
[DFIX] discoverIndexedStackPointers for func 0x4319b0, spc=stack, numSpacebase=1
[DFIX] spacebase 0: spInput=found
```
All checks pass - spacebase exists and is found, yet BADSPACEBASE still appears.

**Investigation needed**: Why does the decompiler create `in_ESP` as a parameter?

**ROOT CAUSE FOUND (2026-01-14)**:

The issue is in `HighVariable::hasName()` (variable.cc:737-744):
```cpp
if (isUnaffected()) {
  if (!isInput()) return false;
  if (indirectonly) return false;
  Varnode *vn = getInputVarnode();
  if (!vn->isIllegalInput()) {
    if (vn->isSpacebase())   // Skip naming for spacebase
      return false;
  }
}
```

The spacebase check only applies when `isUnaffected()` is true. In `x86watcom.cspec`,
ESP is NOT listed in `<unaffected>` (unlike `x86gcc.cspec` which includes it).

Since ESP isn't marked as unaffected:
1. `isUnaffected()` returns false
2. The spacebase check is skipped entirely
3. `hasName()` returns true
4. A symbol is created for ESP → `in_ESP`

**FIX**: Add `<register name="ESP"/>` to all `<unaffected>` sections in `x86watcom.cspec`.

---

## Category E Deep Dive: `applyActPalette_FUN_004319b0`

### Function Characteristics

| Property | Value |
|----------|-------|
| Address | 0x004319b0 |
| Frame type | NON-EBP (ESP-relative) |
| Parameters | 4 (`__cdecl`) |
| Local size | 4 bytes |
| Calls | 1 (`loadACTToIndexedPalette`) |
| Control flow | Simple (4 CBRANCHs, 1 loop) |

### Suspects from Annotation

```json
{
  "type": "badspacebase",
  "text": "BADSPACEBASE *in_ESP;",
  "line": 9
},
{
  "type": "register_param",
  "match": "in_ESP",
  "description": "Inferred register parameter"
},
{
  "type": "call_esp_preserve",
  "call_address": "004319c9",
  "target_address": "0x431a30",
  "add_esp_value": 8
}
```

### Debug Log Analysis

1. **Spacebase exists**: `existingVn=non-null` for all fix checks
2. **No MULTIEQUAL**: `checkMultiequalStackOffsets` never called
3. **Stack pointer found**: `spacebase 0: spInput=found`
4. **RuleSpacebaseCopy runs**: 77 `hasFix(0x4319b0, 0x10)` checks, but no propagation happens

### Decompiled Output

```c
void __cdecl applyActPalette(char *filename, void *bitmap_buffer,
                              int bitmap_size, int palette_index)
{
  byte *pbVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;           // <-- Declared but never used
  byte bStack00000014;
  char acStack_104 [4];
  byte abStack_100 [252];

  loadACTToIndexedPalette(filename, acStack_104);
  // ... rest of function works correctly
}
```

### Hypothesis

The `in_ESP` variable suggests the decompiler's **parameter inference** phase incorrectly identifies ESP as an input register. This could be caused by:

1. **Type inference seeing ESP used as a value** - Some instruction reads ESP and uses it in a way that looks like parameter usage
2. **Heritage analysis creating spurious input** - The SSA construction phase creates an input varnode for ESP that shouldn't exist
3. **Calling convention mismatch** - The `__cdecl` convention might not properly exclude ESP from input parameters in some edge case

### Next Investigation Steps

1. Add debug logging to `ActionFuncLink` or `ActionParamDouble` to see when `in_ESP` is created
2. Check if ESP is read (not just written) in the function body in a non-stack-relative way
3. Look for patterns in other Category E functions to find commonalities
4. Examine the P-code for the function entry to see how ESP is used

---

## Fix Applicability Matrix

| Cause Category | Force Spacebase | Alias Recovery | Multiequal Trace | Spacebase Propagation | Callfixup | Cspec Fix |
|----------------|-----------------|----------------|------------------|----------------------|-----------|-----------|
| A: Missing Spacebase | ✓ | ✓ | - | - | - | - |
| B: MULTIEQUAL Loss | - | - | ✓ | - | - | - |
| C: ESP Copied | - | - | - | ✓ | - | - |
| D: Stack Probe | - | - | - | - | ✓ | - |
| E: Register Param | ✗ | ✗ | ✗ | ✗ | ✗ | ✓ |

Legend:
- ✓ = Fix applies
- ✗ = Fix does not apply (tested and confirmed)
- `-` = Fix not applicable to this category
- Cspec Fix = Add ESP to `<unaffected>` in cspec

---

## Scenario Mapping

From `test_decompile_scenarios.py`:

| Scenario | Cause Category | Expected Fix |
|----------|---------------|--------------|
| scenario1_ebp_stack_align | B | MULTIEQUAL trace |
| scenario2_ebp_call_anchor | B | MULTIEQUAL trace |
| scenario3_stack_probe_before_frame | D | Callfixup |
| scenario4_ebp_variadic | B + variadic | MULTIEQUAL + proto override |
| scenario5_non_ebp_badspacebase | **E** (some) | **Cspec fix** (add ESP to unaffected) |
| scenario6_ebp_variadic_errors | variadic only | Proto override |

---

## References

- Document 11: Suspect Types Taxonomy
- Document 17: Ghidra Stack Analysis Deep Dive
- Document 23: Heritage MULTIEQUAL Fix Results
- `decomp_fixes.py`: Fix flag definitions
- `decomp_fixes_spacebase.cc`: Spacebase fix implementations
- `decomp_fixes_multiequal.cc`: MULTIEQUAL tracing implementation
