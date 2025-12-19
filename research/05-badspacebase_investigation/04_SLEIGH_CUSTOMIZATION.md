# SLEIGH Customization Attempt

## Overview

We attempted to modify Ghidra's SLEIGH specification (ia.sinc) to improve ESP tracking for Watcom-style stack alignment operations.

## File Location

```
spec/Ghidra/Processors/x86/data/languages/ia.sinc.patch
```

This is a patch against Ghidra's `ia.sinc` file which defines x86 instruction semantics.

## The Problem We Tried to Solve

Watcom often aligns the stack pointer with AND:

```asm
and esp, 0xFFFFFFF8   ; Align ESP to 8-byte boundary
```

The standard SLEIGH semantics for AND don't communicate to the decompiler that this is a stack adjustment. The decompiler sees it as a logical operation that could produce any value.

## The Patch

```diff
--- a/Ghidra/Processors/x86/data/languages/ia.sinc
+++ b/Ghidra/Processors/x86/data/languages/ia.sinc
@@ -2604,6 +2604,17 @@
 :AND Rmr16,usimm8_16  is vexMode=0 & opsize=0 & byte=0x83; mod=3 & Rmr16 & reg_opcode=4; usimm8_16 { ... }
+
+# Watcom stack alignment fix: AND ESP, negative_mask (e.g., AND ESP, 0xFFFFFFF8)
+# Expresses AND as subtraction to preserve stack pointer tracking in decompiler.
+:AND Rmr32,usimm8_32  is vexMode=0 & opsize=1 & byte=0x83; mod=3 & Rmr32 & r32=4 & check_Rmr32_dest & reg_opcode=4; usimm8_32 & imm8_7=1 {
+    logicalflags();
+    local notMask:4 = ~usimm8_32;
+    local alignDelta:4 = Rmr32 & notMask;
+    Rmr32 = Rmr32 - alignDelta;
+    build check_Rmr32_dest;
+    resultflags(Rmr32);
+}
+
 :AND Rmr32,usimm8_32  is vexMode=0 & opsize=1 & byte=0x83; mod=3 & Rmr32 & check_Rmr32_dest & reg_opcode=4; usimm8_32 { ... }
```

## How It Works

### Original SLEIGH Semantics
```
ESP = ESP & 0xFFFFFFF8
```
Decompiler sees: "ESP could be anything after this AND"

### Modified Semantics
```
notMask = ~0xFFFFFFF8 = 0x7
alignDelta = ESP & 0x7       ; How many bytes to subtract (0-7)
ESP = ESP - alignDelta       ; Subtract to align
```
Decompiler sees: "ESP decreases by 0-7 bytes" - better for tracking!

## Pattern Matching

The patch only applies when:
- `r32=4` - Register is ESP (register 4)
- `imm8_7=1` - High bit of immediate is set (negative value like 0xF8)

This ensures normal AND operations aren't affected.

## Why It Had Minimal Impact

### What It Fixes
- Stack alignment operations like `AND ESP, 0xFFFFFFF8`
- Helps the decompiler understand ESP decreased by a small bounded amount

### What It Doesn't Fix
- **Indirect calls** - The primary source of ESP tracking loss
- **PUSH/POP sequences** - Already handled correctly
- **Complex control flow** - Unrelated to this pattern

### The Core Problem Remains

Stack alignment is a minor contributor to BADSPACEBASE. The real problem is:
```asm
call dword ptr [edx+4]   ; Unknown stack effect - NOT affected by this patch
```

## Building with the Patch

Since we use Ghidra 12.1 built from source:

1. Apply the patch to Ghidra source:
   ```bash
   cd ghidra-source/
   patch -p1 < /path/to/ia.sinc.patch
   ```

2. Rebuild the SLEIGH compiler and processor:
   ```bash
   gradle buildGhidra
   # Or specifically:
   gradle sleighCompile
   ```

3. The new semantics take effect on re-analysis

## Verdict

**Minimal impact.** The patch correctly handles stack alignment, but this is not the primary cause of BADSPACEBASE. Indirect calls remain the main problem.

## Future SLEIGH Ideas

Other SLEIGH modifications that might help (not implemented):

### 1. Custom semantics for indirect calls
```
# Hypothetical: Model indirect call as "unknown stack decrease"
:CALL Mem32 is ... {
    ESP = ESP - 0x10;  # Assume some stack usage
    call Mem32;
}
```
Problem: Would be wrong for many indirect calls.

### 2. ESP uncertainty annotation
```
# Mark ESP as "uncertain" after indirect call
:CALL Mem32 is ... {
    call Mem32;
    ESP = ESP;  # No-op but maybe triggers uncertainty?
}
```
Problem: SLEIGH doesn't have uncertainty concepts.

## Related Files

The SLEIGH modification works with:
- `x86watcom.cspec` - Calling conventions
- `x86watcom.ldefs` - Language definition

All must be consistent for proper analysis.
