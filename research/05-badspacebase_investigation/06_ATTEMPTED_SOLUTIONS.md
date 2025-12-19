# Attempted Solutions

This document catalogs all solutions attempted for the BADSPACEBASE problem and explains why each was insufficient.

## Summary Table

| Solution | Implemented? | Result | Verdict |
|----------|--------------|--------|---------|
| JSON Post-Processing | Yes | Cosmetic only | Partial |
| Custom cspec | Yes | Helps direct calls | Partial |
| SLEIGH Patch | Yes | Minimal impact | Failed |
| Callfixup | Investigated | Wrong problem | Failed |
| Function Signatures | Yes | Doesn't help indirect | Partial |
| Clear & Re-analyze | Tried | Same failure | Failed |
| Custom Stack Frame | Investigated | Frame is correct | N/A |
| P-code Override | Investigated | Impractical | Failed |

---

## 1. JSON Post-Processing Replacements

### Approach
Export pseudocode with JSON sidecar files containing string replacements.

### Implementation
Each `.cpp` file has a corresponding `.json`:
```json
{
  "replacements": [
    {
      "old": "char *BADSPACEBASE_ESP = (char *)&stack0x00000000;",
      "new": "char stack_buffer_fffffdf0[532];"
    }
  ]
}
```

### Results
- Successfully removes BADSPACEBASE declaration line
- Cannot fix missing arguments
- Cannot fix wrong variable references
- Cannot fix structural decompilation errors

### Why It's Insufficient
```c
// Can fix this:
char *BADSPACEBASE_ESP = ...;  →  (removed)

// Cannot fix this:
sprintf(acStack_d8, "%d,%d,%x");  // Missing 3 arguments!
drawText(wrong_buffer, 0, 0);     // Using wrong variable!
```

### Verdict
**Cosmetic only.** Useful for "mild" BADSPACEBASE (just the declaration), useless for "severe" cases (structural damage).

---

## 2. Custom Compiler Specification (cspec)

### Approach
Define Watcom calling conventions so Ghidra understands function signatures.

### Implementation
Created `x86watcom.cspec` with:
- `__watcallRegister`: EAX, EDX, EBX, ECX parameter order
- `__watcallStack`: Stack-only parameters
- Various FPU conventions

### Results
- Ghidra correctly identifies register parameters
- Return values properly modeled (EAX, EDX:EAX, ST0)
- Direct calls to known functions work better

### Why It's Insufficient
```asm
call dword ptr [edx+4]   ; Indirect call
```
The cspec can't tell Ghidra what an **indirect call** does to the stack. The calling convention is known, but the target function is not.

### Verdict
**Necessary but not sufficient.** Helps direct calls, doesn't solve indirect call problem.

---

## 3. SLEIGH Instruction Patch

### Approach
Modify x86 instruction semantics to better track ESP through stack alignment.

### Implementation
Patch to `ia.sinc`:
```
# Express AND ESP, mask as subtraction for tracking
:AND Rmr32,usimm8_32 is ... & r32=4 ... {
    local alignDelta:4 = Rmr32 & ~usimm8_32;
    Rmr32 = Rmr32 - alignDelta;
}
```

### Results
- Stack alignment (`AND ESP, 0xFFFFFFF8`) now modeled as subtraction
- Decompiler can track that ESP decreased by 0-7 bytes

### Why It's Insufficient
Stack alignment is a **minor** contributor to BADSPACEBASE. The primary cause is indirect calls, which this patch doesn't address.

### Verdict
**Minimal impact.** Correctly fixes one minor pattern, doesn't address root cause.

---

## 4. Callfixup

### Approach
Inject P-code after indirect calls to adjust ESP.

### Concept
```xml
<callfixup name="vtable_cleanup">
  <pcode>
    <body><![CDATA[ ESP = ESP + 8; ]]></body>
  </pcode>
</callfixup>
```

### Why We Didn't Implement
Callfixup adjusts ESP **after** the call. But the problem is **before**:

```asm
lea eax, [esp+0x110]  ; ← Wrong ESP value HERE
push eax
call sprintf          ; ← Callfixup would act here (TOO LATE)
```

The `LEA` instruction computes the wrong buffer address because ESP is already wrong.

### Verdict
**Addresses wrong part of the problem.** Would fix post-call tracking, but BADSPACEBASE happens before the call.

---

## 5. Fixing Function Signatures

### Approach
Ensure all functions have correct signatures so Ghidra knows stack effects.

### Implementation
- Applied FID signatures
- Manually corrected many function definitions
- Set calling conventions per function

### Results
- Direct calls work better
- Known library functions properly modeled

### Why It's Insufficient
```asm
mov edx, [eax]           ; Load vtable
call dword ptr [edx+4]   ; Which function is this?
```
Ghidra can't know which function will be called at runtime. The signature is determined by the vtable contents, not the code.

### Verdict
**Helps direct calls only.** Indirect/virtual calls remain unresolved.

---

## 6. Clear Flow and Re-analyze

### Approach
Reset function analysis and let Ghidra try again.

### Implementation
Right-click function → Clear Flow and Repair

### Results
- Sometimes fixes minor glitches
- BADSPACEBASE functions remain BADSPACEBASE

### Why It Fails
The same ESP tracking algorithm runs again. It hits the same indirect call, loses tracking the same way, produces the same BADSPACEBASE output.

### Verdict
**Does not address root cause.** Useful for other issues, not this one.

---

## 7. Custom Stack Frame Definition

### Approach
Manually define the stack frame layout so Ghidra knows all variables.

### Investigation
Examined stack frame metadata:
```
Stack frame: -0x224 to 0x0 (548 bytes)
Variables:
  local_224 at offset -0x224
  local_24  at offset -0x24
  local_14  at offset -0x14
```

### Finding
**The frame definition is correct!** Ghidra knows the frame spans -0x224 to 0x0.

### Why It Doesn't Help
The problem isn't frame metadata. It's **runtime ESP tracking**:
- Frame says local_24 is at -0x24
- But at instruction X, Ghidra thinks ESP = wrong_value
- So `[ESP + 0x20c]` computes to positive offset
- Ghidra creates `in_stack_00000028` instead of recognizing `local_1fc`

### Verdict
**Frame is already correct.** Problem is dynamic tracking, not static metadata.

---

## 8. P-code Override

### Approach
Inject custom P-code at specific addresses to force correct ESP values.

### Concept
```java
// At address 0x00510650, force ESP = entry_ESP - 0x220
injectPcode(0x00510650, "ESP = ESP_entry - 0x220;");
```

### Why It's Impractical
- Must know exact ESP value at every problem point
- Different for each function
- Requires manual reverse engineering of each affected function
- 1,621 functions affected - not scalable

### Verdict
**Theoretically possible but impractical.** Would require manual analysis of every function.

---

## What We Learned

### The Core Insight

All solutions that work at the **interface level** (cspec, signatures, callfixup) fail because the problem is in the **algorithm level** (how Ghidra tracks ESP through code).

### What Would Actually Work

1. **Decompiler C++ changes** - Modify ESP tracking algorithm
2. **Binary patching** - Convert ESP-relative to EBP-relative code
3. **Alternative decompiler** - Use one with better ESP tracking

### Classification

Functions fall into categories:

| Category | Symptoms | Fix |
|----------|----------|-----|
| Mild | Just BADSPACEBASE declaration | JSON replacement |
| Moderate | Some in_stack_*, core logic OK | JSON + manual edits |
| Severe | Missing args, wrong variables | Manual rewrite |
| Critical | Completely unusable | Assembly only |
