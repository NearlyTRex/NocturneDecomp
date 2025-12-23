# P-code Override Progress Report

**Date**: 2024-12-23 (Updated)
**Test Function**: `CSlew_processInput_FUN_005a20b0`
**Location**: `annotations/nocedit.exe/pseudocode/src/core/slew.cpp/`

---

## Summary

**SOLVED!** Successfully eliminated all 33 stack-related suspects using p-code overrides on the `ADD ESP, 0x8` instructions after each CALLIND. The key insight: CALLIND makes ESP uncertain, but we can anchor it back to a known EBP-relative value after each call.

**Final Results**:
- Suspects: 33 → **0**
- Pseudocode lines: 131 → **99**
- Complexity score: 471 → **99**
- All `in_stack_XXXX` variables resolved to proper locals

---

## The Problem

### Root Cause: CALLIND breaks ESP tracking

The function has 17 indirect calls (vtable calls):
```asm
PUSH key_code           ; ESP -= 4
PUSH g_CKeysPtr         ; ESP -= 4
CALL dword ptr [EDX]    ; CALLIND
ADD ESP, 0x8            ; cleanup
```

In the p-code, `CALLIND` is opaque - Ghidra doesn't know:
1. Whether the callee preserves ESP
2. What stack effect the callee has

So after CALLIND, ESP becomes "uncertain". Even though `ADD ESP, 0x8` follows, it computes `uncertain + 8 = still uncertain`.

All subsequent `[ESP + offset]` accesses become `in_stack_XXXX` because ESP is unknown.

### Why AND ESP wasn't the main issue

The `AND ESP, 0xfffffff8` stack alignment was a red herring. While it does make ESP variable (0-7 byte uncertainty), the real problem was CALLIND. Proof: removing the AND override still gives 0 suspects.

---

## The Solution

### Override ADD ESP, 0x8 to anchor ESP to EBP

Instead of `ESP = ESP + 8` (relative to uncertain value), set `ESP = EBP - 0x24` (absolute from known EBP).

**Original p-code for `ADD ESP, 0x8`** (9 ops):
```
INT_CARRY (register,0x200,1) = (register,0x10,4), (const,0x8,4)
INT_SCARRY (register,0x20b,1) = (register,0x10,4), (const,0x8,4)
INT_ADD (register,0x10,4) = (register,0x10,4), (const,0x8,4)      ; ESP += 8
INT_SLESS (register,0x207,1) = (register,0x10,4), (const,0x0,4)
INT_EQUAL (register,0x206,1) = (register,0x10,4), (const,0x0,4)
INT_AND (unique,0x24c00,4) = (register,0x10,4), (const,0xff,4)
POPCOUNT (unique,0x24c80,1) = (unique,0x24c00,4)
INT_AND (unique,0x24d00,1) = (unique,0x24c80,1), (const,0x1,1)
INT_EQUAL (register,0x202,1) = (unique,0x24d00,1), (const,0x0,1)
```

**Override** (1 op):
```
INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)  ; ESP = EBP - 0x24
```

Note: `0xffffffdc` = `-0x24` in 32-bit two's complement.

### Why this works

After the function prologue:
```asm
PUSH EBX              ; ESP -= 4
PUSH EBP              ; ESP -= 4
MOV EBP, ESP          ; EBP = ESP (frame pointer established)
SUB ESP, 0x24         ; ESP = EBP - 0x24
AND ESP, 0xfffffff8   ; align (doesn't matter for our fix)
```

Each call sequence is stack-neutral:
- PUSH arg1: ESP -= 4
- PUSH arg2: ESP -= 4
- CALL (push ret): ESP -= 4, then RET restores
- ADD ESP, 0x8: ESP += 8

Net effect: 0. So after each call, ESP should be back at `EBP - 0x24`.

By forcing `ESP = EBP - 0x24` after each CALLIND, we give Ghidra a known reference point.

---

## Final Override Configuration

```json
"pcode_overrides": {
  "005a20dc": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a212d": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a214a": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2167": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a21a6": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a21e5": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2235": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2285": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a22a1": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a22bd": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a22da": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a22f7": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2314": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2331": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a234e": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a236b": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"],
  "005a2383": ["INT_ADD (register,0x10,4) = (register,0x14,4), (const,0xffffffdc,4)"]
}
```

---

## Approaches Tried

### 1. AND ESP NOP (Partial Success)
- **Override**: Replace AND with `COPY ESP = ESP` (no-op)
- **Result**: Reduced suspects 37 → 33, removed `unaff_EBX`
- **Verdict**: Helped but didn't solve CALLIND issue

### 2. CALLIND with removed return address push (Failed)
- **Override**: Remove INT_SUB/STORE from CALL p-code, keep only LOAD + CALLIND
- **Result**: Broke argument passing - decompiler saw `(CKeys*)0x38` instead of proper args
- **Reason**: ESP at CALLIND time determines argument offsets; changing it breaks arg resolution

### 3. CALLIND with INT_ADD after (Partial)
- **Override**: Original CALL p-code + `INT_ADD ESP, 4` after CALLIND (simulate RET)
- **Result**: Fixed arguments but still had stack issues, added return address artifacts
- **Verdict**: Close but not clean

### 4. ADD ESP anchor to EBP (SUCCESS)
- **Override**: Replace `ADD ESP, 0x8` with `ESP = EBP - 0x24`
- **Result**: 0 suspects, clean output
- **Verdict**: This is the solution

---

## Notes on Flag Preservation

The ADD ESP override discards flag computations (CF, OF, SF, ZF, PF). This is safe because every `ADD ESP, 0x8` is immediately followed by `TEST EAX, EAX` which overwrites all flags:

```asm
005a20dc: ADD ESP, 0x8     ; our override
005a20df: TEST EAX, EAX    ; clobbers all flags
005a20e1: JZ ...
```

---

## P-code Format Reference

### Register Offsets (x86 32-bit)
```
EAX = 0x0    ECX = 0x4    EDX = 0x8    EBX = 0xc
ESP = 0x10   EBP = 0x14   ESI = 0x18   EDI = 0x1c
```

### P-code Operation Format
```
OPCODE (output_space,offset,size) = (input1_space,offset,size), ...
```

### Two's Complement for Negative Offsets
- `-0x24` = `0xffffffdc` (32-bit)
- `-0x28` = `0xffffffd8`
- etc.

---

## Applicability to Other Functions

This pattern can fix any function with:
1. CALLIND (indirect calls) that break ESP tracking
2. Known stack frame layout (EBP-based)
3. cdecl calling convention (caller cleans up)

To apply:
1. Identify all `ADD ESP, N` instructions after CALLINDs
2. Calculate the correct `EBP - offset` value for each
3. Override with `INT_ADD (register,0x10,4) = (register,0x14,4), (const,OFFSET,4)`

---

## Files Modified

- `CSlew_processInput_FUN_005a20b0.json` - Contains the working p-code overrides
- `DecompileCallback.java` - P-code override mechanism in Ghidra
