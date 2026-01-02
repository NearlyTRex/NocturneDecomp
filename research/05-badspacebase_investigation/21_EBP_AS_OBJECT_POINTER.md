# Analysis: EBP Usage Patterns in Watcom Code

## Date: 2024-12-31

## IMPORTANT CLARIFICATION

This document initially analyzed the wrong type of function. The example below
(`CDemonCamera_screenToWorldWithAlpha`) is an **ESP-frame function** that happens
to use EBP as a general-purpose register - it is NOT marked as `is_ebp_frame: true`
in the JSON annotations.

**Actual EBP-frame functions** (with `PUSH EBP; MOV EBP, ESP` pattern) appear to
decompile correctly. See `optimizedMemcpy_FUN_00431528` which has `is_ebp_frame: true`
and decompiles without BADSPACEBASE issues.

## Two Distinct Patterns

### Pattern 1: True EBP Frames (Working)
Functions marked `is_ebp_frame: true` with classic prologue:
```asm
PUSH EBP
MOV EBP, ESP        ; <-- EBP = ESP (frame pointer)
...
MOV EDI, [EBP+0x8]  ; Access parameters via EBP
```
These decompile correctly - Ghidra recognizes the frame pointer pattern.

### Pattern 2: EBP as General-Purpose Register (Problematic)
ESP-frame functions that reuse EBP for other purposes:
```asm
PUSH EBP                            ; Save EBP (callee-save)
SUB ESP, 0x1c                       ; Allocate locals
MOV EBP, [ESP + 0x2c]               ; EBP = this_ptr (LOAD FROM PARAM!)
...
LEA EDI, [EBP + 0x19c]              ; Access object member via EBP
```
These cause issues because Ghidra doesn't understand EBP holds an object pointer.

## Example of Pattern 2: CDemonCamera_screenToWorldWithAlpha_FUN_0044d600

**NOTE: This function is NOT marked as `is_ebp_frame` - it's an ESP-frame function.**

### Assembly Prologue
```asm
PUSH EBX                            ; 0044d600
PUSH EDI                            ; 0044d601
PUSH EBP                            ; 0044d602  <-- Save old EBP (callee-save)
SUB ESP,0x1c                        ; 0044d603  <-- Allocate locals (ESP-frame!)
MOV EBP,dword ptr [ESP + 0x2c]      ; 0044d606  <-- EBP = this_ptr (LOAD FROM PARAM!)
```

### What Goes Wrong
- Ghidra sees `[EBP + 0x19c]` and doesn't know what EBP contains
- Creates `unaff_EBP` variable (thinks EBP is unaffected/callee-saved)
- Some accesses generate BADSPACEBASE or garbage output

### Decompiler Output Issues
```cpp
CVector3i *unaff_EBP;       // Ghidra thinks EBP is "unaffected"
...
puVar5 = (uint *)((int)unaff_EBP + (uint)bVar6 * -8 + 4);  // Garbage
```

## Why ActionEBPFrameDetect Didn't Help

The action looked for `COPY` operations from ESP to EBP, but Pattern 2 functions
don't have that - they load EBP from a stack parameter via LOAD, not COPY.

Descendants of ESP observed:
- `INT_ADD` (code 19) - 428,639 occurrences
- `PTRADD` (code 66) - 100,908 occurrences
- `INT_SUB` (code 20) - 7,078 occurrences
- No `COPY` to registers

## Open Questions

1. Do the functions marked `is_ebp_frame: true` actually have BADSPACEBASE issues?
2. If true EBP-frame functions work, what's causing BADSPACEBASE in the 22.7% of functions?
3. Is the issue Pattern 2 (EBP as GPR) or something else entirely?

## Next Steps

1. Find functions that are BOTH `is_ebp_frame: true` AND have BADSPACEBASE
2. If none exist, the BADSPACEBASE issue may be unrelated to EBP frames
3. Investigate other causes of BADSPACEBASE in ESP-frame functions
