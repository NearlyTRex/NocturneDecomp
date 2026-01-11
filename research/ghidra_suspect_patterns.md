# Ghidra Decompiler Suspect Patterns Guide

This document explains common "suspect patterns" that appear in Ghidra's decompiled output and how to fix them within Ghidra.

## Table of Contents

1. [BADSPACEBASE](#1-badspacebase---stack-frame-resolution-failure)
2. [in_stack_XXXX](#2-in_stack_xxxx---unresolved-stack-parameters)
3. [in_EAX, in_ECX (Register Parameters)](#3-in_eax-in_ecx---inferred-register-parameters)
4. [CONCAT44, CONCAT22](#4-concat44-concat22---value-concatenation-artifacts)
5. [SUB84, SUB42](#5-sub84-sub42---value-extraction-artifacts)
6. [SBORROW](#6-sborrow---signed-borrow-detection)
7. [Other Patterns](#7-other-patterns)
8. [Appendix: Ghidra Specification Files](#appendix-ghidra-specification-files)

---

## 1. BADSPACEBASE - Stack Frame Resolution Failure

### What it means

The decompiler couldn't properly resolve stack-relative addresses. The decompiler "pukes BADSPACEBASE everywhere" when there is a difference in instruction context during disassembly.

### Common causes

- Image base was changed after import
- Wrong processor architecture selected
- Incorrect function signatures (wrong return type or parameters)
- Skip instruction context issues (for custom processor modules)
- Corrupted or unusual stack frame setup

### How to fix in Ghidra

1. **Re-import the binary** if you've changed the image base after initial import. "It is best to re-import the binary with a new image base. Setting the image base, especially after analysis can cause issues."

2. **Verify the correct processor architecture** - Try loading "the file in various architectures that seem most likely, then seeing how many functions Ghidra is able to sniff out and how many errors Ghidra mentions."

3. **Fix function signatures**:
   - Right-click on function name → **Edit Function** (or press **F**)
   - Ensure return type is correct (check assembly for actual return behavior)
   - Ensure parameter types and count are correct

4. **Clear and re-analyze the function**:
   - Right-click → **Clear Flow and Repair**
   - Let Ghidra re-analyze

5. **For custom compilers**: Check the `.cspec` file for proper stack pointer and calling convention configurations. The `<stackpointer>` element defines which register is the stack pointer. Note: `.pspec` files do NOT configure stack pointer or spacebase - those are exclusively in `.cspec`.

6. **For Watcom-compiled code**: BADSPACEBASE often occurs due to:
   - ESP-relative stack access without frame pointer (Watcom optimization)
   - Ghidra losing ESP tracking at indirect calls (vtable calls)
   - Stack probing functions (`_chkstk`, `__alloca_probe`) confusing analysis
   - See the detailed investigation in `05-badspacebase_investigation/`

### Sources

- [Skip instruction implementation · GitHub Discussion #4241](https://github.com/NationalSecurityAgency/ghidra/discussions/4241)
- [Fixing ghidra decompilation - RE Stack Exchange](https://reverseengineering.stackexchange.com/questions/24829/fixing-ghidra-decompilation)
- [Different decompiler output after relocating image · Issue #3899](https://github.com/NationalSecurityAgency/ghidra/issues/3899)

---

## 2. in_stack_XXXX - Unresolved Stack Parameters

### What it means

Variables like `in_stack_0000000c` appear when Ghidra detects stack usage that looks like a parameter but couldn't properly identify it. This differs from the normal `local_XX` format for local variables.

In the Listing View, you may see operations using `Stack[0xc]` which correspond to these variables.

### Common causes

- The calling convention doesn't match how the function actually uses the stack
- Function parameters weren't properly defined
- Non-standard or embedded code that doesn't follow common calling conventions

### How to fix in Ghidra

1. **Function → Analyze Stack** - This option attempts to better analyze the stack frame

2. **Edit the function signature**:
   - Right-click on the function → **Edit Function Signature**
   - Manually define the correct parameters with proper types

3. **Check the calling convention**:
   - Ensure the correct calling convention is set (`__cdecl`, `__stdcall`, `__fastcall`, etc.)
   - For Watcom code, you may need `__watcall` or a custom convention

4. **For non-standard code**: You may need to modify the `.cspec` (compiler specification) file in `ghidra/processors/<arch>/data/languages/`

### Sources

- [Ghidra 11.0 - What does Function > Analyze Stack option do? - RE Stack Exchange](https://reverseengineering.stackexchange.com/questions/32727/ghidra-11-0-what-does-function-analyze-stack-option-do)

---

## 3. in_EAX, in_ECX - Inferred Register Parameters

### What it means

When you see variables like `in_EAX` or `in_ECX`, it indicates that Ghidra detected the function uses register-based parameter passing that doesn't match the standard calling convention.

This is common with:
- **Watcom compiler** - Uses a register-based calling convention
- **Delphi/Borland fastcall** - Different register order than Microsoft fastcall
- **Optimized leaf functions** - Compilers often use custom conventions for small functions
- **Thiscall methods** - `this` pointer passed in ECX

### How to fix in Ghidra

1. **Edit Function Signature**:
   - Right-click on function → **Edit Function Signature** (or press **F**)
   - Set the correct calling convention from the dropdown

2. **Use Custom Storage** (for non-standard conventions):
   - In Edit Function dialog, check **"Use Custom Storage"**
   - Manually assign register storage for each parameter
   - Example: Set param_1 storage to `EAX`, param_2 to `EDX`, etc.

3. **Commit Local Names**:
   - Right-click in the decompiler window → **Commit Local Names**
   - This helps Ghidra recognize local variable usage

4. **For Watcom code specifically**:
   - Watcom uses EAX, EDX, EBX, ECX for the first 4 integer parameters
   - You may need to define a custom calling convention in the `.cspec` file

### Calling Convention Quick Reference

| Convention | Param 1 | Param 2 | Param 3 | Param 4 | Stack Cleanup |
|------------|---------|---------|---------|---------|---------------|
| `__cdecl` | Stack | Stack | Stack | Stack | Caller |
| `__stdcall` | Stack | Stack | Stack | Stack | Callee |
| `__fastcall` (MS) | ECX | EDX | Stack | Stack | Callee |
| `__thiscall` | ECX (this) | Stack | Stack | Stack | Callee |
| `__watcall` | EAX | EDX | EBX | ECX | Callee |

### Sources

- [Moving in_EAX to function operands · GitHub Discussion #3056](https://github.com/NationalSecurityAgency/ghidra/discussions/3056)
- [Ghidra renaming EAX - RE Stack Exchange](https://reverseengineering.stackexchange.com/questions/24708/ghidra-renaming-eax)
- [Parameter Passing - Ghidra Docs](https://spinsel.dev/assets/2020-06-17-ghidra-brainfuck-processor-1/ghidra_docs/compiler_spec/cspec_parampass.html)

---

## 4. CONCAT44, CONCAT22 - Value Concatenation Artifacts

### What it means

CONCAT operations are internal decompiler functions used to express things not easily represented in C. They concatenate bytes from two values into a larger value.

### How CONCAT works

The digits indicate byte sizes:
- `CONCAT44(x, y)` - Concatenates two 4-byte values into 8 bytes
- `CONCAT22(x, y)` - Concatenates two 2-byte values into 4 bytes
- `CONCAT31(x, y)` - Concatenates a 3-byte and 1-byte value into 4 bytes

The first operand becomes the **most significant bytes**, the second becomes the **least significant bytes**.

**Equivalent C code:**
```c
// CONCAT44(high, low) is equivalent to:
((uint64_t)high << 32) | (uint64_t)low
```

### Common causes

- Function returns a `double` or `long long` but Ghidra thinks it returns `void` or `int`
- Struct fields have incorrect sizes
- Register pairs are in the wrong order for return values

### How to fix in Ghidra

1. **Check function return types**:
   - If the function returns a `double`, set the return type to `double`
   - If it returns a 64-bit integer, set return type to `longlong` or `ulonglong`

2. **Fix struct definitions**:
   - Ensure struct field sizes match the actual data layout
   - Check for padding issues

3. **Check register ordering**:
   - For 64-bit returns on x86, EDX:EAX is the typical order (EDX high, EAX low)
   - If CONCAT appears backwards, the calling convention may have reversed registers

### Sources

- [concat22 in ghidra decompiler - RE Stack Exchange](https://reverseengineering.stackexchange.com/questions/22274/concat22-in-ghidra-decompiler)
- [CONCAT, SUB, ZEXT · Issue #2916](https://github.com/NationalSecurityAgency/ghidra/issues/2916)
- [What does CONCAT15 and CONCAT412 mean in ghidra? - Stack Overflow](https://stackoverflow.com/questions/69430800/what-does-concat15-and-concat412-mean-in-ghidra)

---

## 5. SUB84, SUB42 - Value Extraction Artifacts

### What it means

SUB operations (SUBPIECE in p-code) extract a subset of bytes from a larger value. They're the opposite of CONCAT.

### How SUB works

Format: `SUBxy(value, offset)`
- `x` = size of input value in bytes
- `y` = size of output value in bytes
- `offset` = number of least significant bytes to skip

**Examples:**
```c
SUB41(x, 0)  // Truncate 4-byte to 1-byte (low byte)
             // Equivalent to: (uint8_t)(x & 0xFF)

SUB42(x, 0)  // Truncate 4-byte to 2-byte (low 2 bytes)
             // Equivalent to: (uint16_t)(x & 0xFFFF)

SUB84(x, 4)  // Extract high 4 bytes from 8-byte value
             // Equivalent to: (uint32_t)(x >> 32)

SUB42(0xAABBCCDD, 1)  // Returns 0xBBCC
                       // Skips 1 byte, takes 2 bytes
```

### Common causes

- Ghidra doesn't understand the data types being manipulated
- Floating-point operations where Ghidra can't infer the type
- 64-bit integer operations on 32-bit code

### How to fix in Ghidra

1. **Apply proper data types**:
   - Right-click on variables → **Retype Variable**
   - Set the correct type (e.g., `double`, `longlong`, `float`)

2. **Define struct types correctly**:
   - If accessing struct fields, ensure the struct definition is correct
   - Create proper union types for type-punning

3. **Check for float/double misidentification**:
   - If you see SUB operations around floating-point code, the variable types may be wrong

### Sources

- [Ghidra DecompilerConcepts Documentation](https://fossies.org/linux/ghidra/Ghidra/Features/Decompiler/src/main/help/help/topics/DecompilePlugin/DecompilerConcepts.html)

---

## 6. SBORROW - Signed Borrow Detection

### What it means

SBORROW is a p-code operation that detects signed overflow/borrow in subtraction. It returns true (1) if the subtraction `a - b` results in signed overflow.

```c
// SBORROW(a, b) returns 1 if:
// - a is positive, b is negative, and a-b overflows to negative
// - a is negative, b is positive, and a-b overflows to positive
```

### Common causes

This typically appears when the compiler implements:
- Signed comparison with overflow checking
- Safe arithmetic operations
- Compiler-generated range checks

### How to fix in Ghidra

SBORROW is usually **semantically correct** but looks ugly. In most cases:

1. **Leave it as-is** if the logic is correct
2. **Check the context** - it's often part of a signed comparison pattern
3. The transforms in the exporter add a clarifying comment: `SBORROW /* signed borrow */`

---

## 7. Other Patterns

### undefined types (`undefined4 local_var`)

**Cause:** Ghidra couldn't determine the variable's type.

**Fix:**
- Right-click on variable → **Retype Variable**
- Infer type from how the variable is used
- `undefined4` is typically `int` or `uint`
- `undefined1` is typically `char` or `byte`

### &stack0xXXXX (Direct stack references)

**Cause:** Direct address reference to stack location, usually from incorrect pointer arithmetic.

**Fix:**
- Check function parameters
- Verify struct pointer types
- May indicate a variable that should be a pointer

### extraout_* (Extra output parameters)

**Cause:** Ghidra inferred the function modifies an output parameter that wasn't declared.

**Fix:**
- Edit function signature to include output parameters
- Check if the function should return a value in a register pair

### unaff_* (Unaffected registers)

**Cause:** A register value that persists across function calls unexpectedly.

**Fix:**
- Usually indicates incorrect calling convention
- Check which registers the calling convention preserves

### Negative array indexing (`pVar[-10].field`)

**Cause:** Wrong base type for a pointer, causing negative offsets.

**Fix:**
- The pointer is likely pointing to the middle of a struct
- Retype the variable to the correct struct type
- Check if the base address is offset from the actual struct start

---

## General Fixing Workflow

1. **Start with function signature** - Press **F** on the function name
   - Set correct return type
   - Set correct parameter types and count
   - Set correct calling convention

2. **Commit local names** - Right-click in decompiler → **Commit Local Names**

3. **Retype variables** - Right-click on variables with wrong types

4. **Define data types** - Create proper struct/union definitions in Data Type Manager

5. **Use custom storage** - For non-standard parameter passing

6. **Re-analyze** - Right-click → **Clear Flow and Repair** if changes don't take effect

---

## Watcom-Specific Notes

The NocturneDecomp project uses Watcom compiler, which has a non-standard calling convention:

- **Register parameters**: EAX, EDX, EBX, ECX (in that order)
- **Stack cleanup**: Callee cleans up
- **Return values**: EAX for 32-bit, EDX:EAX for 64-bit

Many `in_EAX`, `in_EDX` patterns are simply Watcom's normal parameter passing. Consider defining a custom `__watcall` calling convention in Ghidra's `.cspec` file for the x86 processor.

---

## Appendix: Ghidra Specification Files

### .pspec (Processor Specification)

Configures **processor-level** settings. Does NOT configure stack or calling conventions.

| Element | Purpose |
|---------|---------|
| `properties` | Key-value language properties |
| `programcounter` | Which register is the PC |
| `data_space` | Default data address space |
| `context_data` | Register context settings |
| `volatile` | Volatile memory regions |
| `register_data` | Register metadata (groups, aliases, hidden) |
| `default_symbols` | Predefined symbol labels |
| `default_memory_blocks` | Default memory blocks |
| `incidentalcopy` | Registers freely copied (FPU regs) |
| `jumpassist` | Jump table assist definitions |

### .cspec (Compiler Specification)

Configures **compiler-level** settings including stack and calling conventions.

| Element | Purpose |
|---------|---------|
| `stackpointer` | **Stack pointer register** (e.g., ESP) |
| `data_organization` | Type sizes, alignment |
| `prototype` | Calling conventions with extrapop, params |
| `global` | Global memory ranges |
| `callfixup` | Call fixup definitions |
| `returnaddress` | Where return address is stored |

### Key Point

**Stack pointer and spacebase are configured in `.cspec`, NOT `.pspec`.**

Example from `x86watcom.cspec`:
```xml
<stackpointer register="ESP" space="ram" />
```

The `.pspec` file configures processor features like the program counter register and register groupings, but has no control over stack frame analysis or calling conventions.
