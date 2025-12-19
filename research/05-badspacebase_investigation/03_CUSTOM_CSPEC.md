# Custom Compiler Specification (cspec)

## Overview

We created a custom compiler specification for Watcom C++ at:
```
spec/Ghidra/Processors/x86/data/languages/x86watcom.cspec
```

This defines Watcom-specific calling conventions to help Ghidra understand function signatures.

## File Locations

| File | Purpose |
|------|---------|
| `x86watcom.cspec` | Calling conventions and data organization |
| `x86watcom.ldefs` | Language definition linking to cspec |
| `patternconstraints.xml` | Maps watcomcpp compiler to pattern file |
| `x86watcomcpp_patterns.xml` | Function entry patterns (currently empty) |

## Defined Calling Conventions

### __watcallRegister (Default)

The primary Watcom calling convention using registers for the first 4 parameters:

```xml
<prototype name="__watcallRegister" extrapop="unknown" stackshift="4">
    <input>
        <pentry minsize="1" maxsize="4"><register name="EAX" /></pentry>
        <pentry minsize="1" maxsize="4"><register name="EDX" /></pentry>
        <pentry minsize="1" maxsize="4"><register name="EBX" /></pentry>
        <pentry minsize="1" maxsize="4"><register name="ECX" /></pentry>
        <pentry minsize="1" maxsize="500" align="4"><addr offset="4" space="stack" /></pentry>
    </input>
    <output killedbycall="true">
        <pentry minsize="4" maxsize="10" metatype="float" extension="float"><register name="ST0" /></pentry>
        <pentry minsize="1" maxsize="4"><register name="EAX" /></pentry>
        <pentry minsize="5" maxsize="8"><addr space="join" piece1="EDX" piece2="EAX" /></pentry>
    </output>
    <unaffected>
        <register name="EBX" />
        <register name="ESI" />
        <register name="EDI" />
        <register name="EBP" />
    </unaffected>
</prototype>
```

**Parameter order**: EAX, EDX, EBX, ECX, then stack

**Note**: `extrapop="unknown"` because callee cleanup amount varies.

### __watcallStack

For functions that only use stack parameters:

```xml
<prototype name="__watcallStack" extrapop="4" stackshift="4">
    <input>
        <pentry minsize="1" maxsize="500" align="4"><addr offset="4" space="stack" /></pentry>
    </input>
    ...
</prototype>
```

### FPU Conventions

Several conventions for floating-point operations:

| Convention | Description |
|------------|-------------|
| `__fpustack` | Parameters on FPU stack (ST0, ST1) |
| `__fpureg` | Pure FPU register: input ST0, output ST0 |
| `__fpureg_safe` | FPU with preserved EAX and ST1 |
| `__fpu_thunk` | FPU thunks using ST0-ST3 |
| `__crtmath` | CRT math: double on stack, returns EDX:EAX |
| `__softfp_double` | Software FP with split registers |

### Standard Conventions

Also defined for compatibility:
- `__stdcall` - Standard Windows calling convention
- `__cdecl` - C declaration convention
- `__syscall` - System call convention

## Data Organization

```xml
<data_organization>
    <pointer_size value="4" />
    <wchar_size value="2" />
    <short_size value="2" />
    <integer_size value="4" />
    <long_size value="4" />
    <long_long_size value="8" />
    <float_size value="4" />
    <double_size value="8" />
    <long_double_size value="12" />
</data_organization>
```

## Language Definition

`x86watcom.ldefs` registers this as a Ghidra language variant:

```xml
<language processor="x86" endian="little" size="32" variant="default"
          version="1.0" slafile="x86.sla" processorspec="x86.pspec"
          id="x86:LE:32:watcom">
    <description>Intel/AMD 32-bit x86</description>
    <compiler name="Watcom C++" spec="x86watcom.cspec" id="watcomcpp" />
</language>
```

## Impact on BADSPACEBASE

### What It Helps

- Direct calls to functions with known signatures
- Correct register parameter recognition
- Proper return value handling (EAX, EDX:EAX, ST0)

### What It Doesn't Help

- **Indirect calls** - The cspec can't tell Ghidra what `call [edx+4]` does
- **Runtime ESP tracking** - Cspec defines conventions, not runtime state
- **The core BADSPACEBASE problem** - Still occurs at indirect call sites

### Verdict

**Necessary but not sufficient.** The cspec correctly models Watcom conventions, but doesn't solve the fundamental ESP tracking problem at indirect calls.

## Installation

To use in Ghidra:

1. Copy files to Ghidra's processor directory:
   ```
   Ghidra/Processors/x86/data/languages/
   Ghidra/Processors/x86/data/patterns/
   ```

2. Rebuild Ghidra (if modifying existing install):
   ```bash
   gradle buildGhidra
   ```

3. When importing binary, select:
   - Language: `x86:LE:32:watcom`
   - Compiler: `Watcom C++`
