# Problem Description

## What BADSPACEBASE Looks Like

When Ghidra encounters ESP tracking failure, the decompiled output contains:

```c
// Declaration artifact - pointer to invalid stack address
char *BADSPACEBASE_ESP = (char *)&stack0x00000000;

// Incorrect stack references using positive offsets (should be negative locals)
in_stack_00000028  // Should be a local variable like local_1d8
in_stack_00000054  // Should be a local variable like local_1ac

// Wrong variable usage in function calls
sprintf(acStack_d8, "%d,%d,%x");  // Missing varargs!
engine_2d_c_drawText(&pCStack_20c, 0, 0);  // Wrong buffer variable
```

## Symptoms

### 1. BADSPACEBASE Declaration
A pointer declared to stack address 0x00000000:
```c
char *BADSPACEBASE_ESP = (char *)&stack0x00000000;
```

### 2. in_stack_XXXX Variables
Variables with positive stack offsets, incorrectly interpreted as incoming parameters rather than local variables:
```c
// These positive offsets are in the "parameters area" above the return address
// but should actually be local variables below ESP
in_stack_00000028
in_stack_00000054
```

### 3. Missing Function Arguments
Varargs to printf/sprintf are dropped entirely:
```c
// Assembly pushes: g_JoyButtons, g_JoyYPos, g_JoyXPos, format, buffer
// Ghidra shows:
sprintf(acStack_d8, "%d,%d,%x");  // Where are the 3 integer arguments?!
```

### 4. Wrong Variable References
Buffer passed to sprintf differs from buffer passed to the function that uses it:
```c
sprintf(bufferA, "text");
drawText(bufferB, 0, 0);  // Should be bufferA!
```

### 5. Multiple Variables for Same Location
The same stack offset appears as different variables in different parts of the function:
```c
// At one point:
acStack_d8[0] = 'x';
// Later:
acStack_d4[0] = 'y';  // Actually the same memory!
```

## Scale of the Problem

From `analysis_report.txt`:

| Metric | Value |
|--------|-------|
| Total functions | 7,154 |
| Functions with BADSPACEBASE | 1,621 |
| Percentage affected | 22.7% |

### Correlation with Other Patterns

BADSPACEBASE strongly correlates with:
- `in_stack_*` (37,707 occurrences) - Unresolved stack parameters
- `stack_ref` (4,063 occurrences) - Direct stack references
- `unaffected_reg` (2,776 occurrences) - Register preservation issues

Functions with indirect calls (vtable dispatches) are most affected.

## Example: calibrateGamepad_FUN_005104d0

This function demonstrates severe BADSPACEBASE damage:

### What Assembly Shows
```asm
; First sprintf - works correctly
lea eax, [esp+0x10]
push 0x6365e8              ; format string
push eax                   ; buffer
call sprintf

; ... vtable call ...
mov edx, [ebx]
call dword ptr [edx+0x3c]  ; ESP tracking lost here!

; Second sprintf - Ghidra loses track
push dword ptr [0x2d05208] ; g_JoyButtons
push dword ptr [0x2d051fc] ; g_JoyYPos
push dword ptr [0x2d051f8] ; g_JoyXPos
push 0x6365f8              ; format "%d,%d,%x"
lea eax, [esp+0x110]       ; buffer (wrong offset computed!)
push eax
call sprintf
```

### What Ghidra Shows
```c
// First sprintf - OK
sprintf(stack_buffer, "Joystick: %s");

// Second sprintf - BROKEN
sprintf(acStack_d8, "%d,%d,%x");  // Missing 3 arguments!

// drawText - WRONG VARIABLE
engine_2d_c_drawText(acStack_d4, 0, 0);  // Should use sprintf's buffer!
```

### Impact
- Function logic is fundamentally misrepresented
- Cannot understand what the function actually does from pseudocode
- Manual assembly analysis required
