# Root Cause Analysis

## Watcom's Stack Frame Convention

Unlike MSVC or GCC which typically use EBP-relative addressing:

```asm
; MSVC/GCC style (EBP frame pointer)
push ebp
mov ebp, esp
sub esp, 0x100
mov eax, [ebp-0x10]    ; Local variable - EBP is CONSTANT throughout function
```

Watcom generates ESP-relative code to save the EBP register for other uses:

```asm
; Watcom style (no frame pointer)
sub esp, 0x214
mov eax, [esp+0x20c]   ; Local variable - ESP must be TRACKED at every instruction
```

## Why EBP-Relative is Easy

With EBP as frame pointer:
- EBP is set once at function entry
- EBP never changes during the function
- `[EBP - 0x10]` always means the same local variable
- Decompiler can trivially map all stack accesses

## Why ESP-Relative is Hard

With ESP-relative addressing:
- ESP changes with every PUSH, POP, CALL, and SUB/ADD ESP
- `[ESP + 0x20c]` means different things at different instructions
- Decompiler must track ESP value at every single instruction

### ESP Tracking Example

```asm
sub esp, 0x100        ; ESP = original - 0x100
push eax              ; ESP = original - 0x104
push ebx              ; ESP = original - 0x108
call foo              ; ESP = original - 0x10c (return address pushed)
                      ; After call: ESP = original - 0x108 (if cdecl)
                      ; Or: ESP = original - 0x100 (if stdcall cleaned 8 bytes)
mov ecx, [esp+0x50]   ; Which local is this?? Depends on ESP value HERE
```

## Where Ghidra Fails

Ghidra's decompiler tracks ESP correctly when:
- All calls are to known functions with defined calling conventions
- Control flow is straightforward
- ESP adjustments are constant and predictable

It fails when encountering:

### 1. Indirect Calls (Primary Problem)

```asm
mov edx, [eax]           ; Load vtable pointer
call dword ptr [edx+4]   ; Call virtual function
                         ; What does this do to ESP? Ghidra doesn't know!
```

The decompiler sees `call dword ptr [edx+4]` but has no idea:
- How many arguments the callee expects
- Whether callee or caller cleans the stack
- How many bytes to adjust ESP after the call

### 2. Complex Control Flow

```asm
    cmp eax, 0
    je .path_a
    push ebx           ; ESP -= 4 on this path only
.path_a:
    mov ecx, [esp+0x10] ; What's ESP here? Different on each path!
```

### 3. Dynamic Stack Allocations

```asm
sub esp, ecx           ; Allocate variable amount
; All subsequent [esp+X] references are now uncertain
```

## The Tracking Failure Cascade

When Ghidra loses ESP tracking at one point, the damage cascades:

1. **Initial failure**: Indirect call with unknown stack effect
2. **Wrong ESP assumption**: Decompiler guesses or gives up
3. **Wrong offset computation**: `[ESP + 0x20c]` computed with wrong ESP base
4. **Wrong variable mapping**: Stack offset maps to wrong local or becomes `in_stack_*`
5. **Argument misattribution**: PUSHes before calls get associated with wrong parameters
6. **Complete model collapse**: Multiple variables for same location, missing args, etc.

## Stack Frame vs ESP Tracking

Important distinction:

### Stack Frame Definition (Correct in Ghidra)
```
Stack frame: -0x224 to 0x0 (548 bytes)
Variables defined:
  local_224 at -0x224
  local_24  at -0x24
  local_14  at -0x14
```

### ESP Tracking (Broken)
Even though the frame is correctly defined, at certain instructions Ghidra computes:
- ESP = some wrong value
- `[ESP + 0x20c]` → positive offset (in parameters area)
- Creates `in_stack_00000028` instead of recognizing `local_1dc`

**The frame metadata is correct. The runtime ESP tracking is broken.**

## Why Callfixup Doesn't Help

Callfixup adjusts ESP **after** a call:
```xml
<callfixup name="cleanup">
  <pcode>ESP = ESP + 8;</pcode>
</callfixup>
```

But the problem is **before** the call:
```asm
lea eax, [esp+0x110]  ; ← Ghidra needs correct ESP HERE
push eax
call sprintf          ; ← Callfixup would adjust ESP here (TOO LATE)
```

The LEA instruction computes the wrong address because ESP is already wrong at that point.
