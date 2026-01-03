# Stack Probe Callfixup Fix

**Date:** 2025-01-02
**Status:** IMPLEMENTATION COMPLETE - Awaiting Testing

## Summary

This document covers the implementation of a callfixup for Watcom's `stack_probe` function to fix BADSPACEBASE issues in functions that call `stack_probe` before setting up their frame.

## Background

Previous research (23_HERITAGE_MULTIEQUAL_FIX_RESULTS.md) identified `visualizeTextureAtlas` as having a different BADSPACEBASE cause than the scenario2 functions. Analysis showed:

```asm
PUSH 0x134                          ; Push allocation size
CALL crt_stack.c_stack_probe        ; ESP MODIFIED HERE
PUSH EBX
PUSH ESI
PUSH EDI
PUSH EBP
MOV EBP,ESP                         ; EBP = unknown ESP (BADSPACEBASE!)
```

The `stack_probe` call happens BEFORE frame setup (`MOV EBP, ESP`), making ESP uncertain when the frame is established.

## Root Cause Analysis

1. **Watcom's `__stdcall` has `extrapop="unknown"`** in x86watcom.cspec
2. When `ActionExtraPopSetup` runs, it sees `extrapop == unknown`
3. An INDIRECT is created instead of INT_ADD (which would preserve ESP tracking)
4. ESP becomes uncertain after the call
5. `MOV EBP, ESP` captures uncertain ESP
6. BADSPACEBASE results

### How stack_probe Works

```asm
; stack_probe function (at 0x005ff9f3)
XCHG dword ptr [ESP + 0x4], EAX    ; Swap stack_size with EAX
CALL check_stack_target            ; Touch pages to ensure stack committed
MOV EAX, dword ptr [ESP + 0x4]     ; Restore EAX
RET 0x4                            ; Return and pop the 4-byte argument
```

The `RET 4` pops both the return address AND the 4-byte argument, making the net ESP change:
- Before PUSH arg: ESP = X
- After PUSH arg: ESP = X - 4
- After CALL + RET 4: ESP = X (back to original)

## Solution: Callfixup

Added a callfixup to `x86watcom.cspec` that models the `RET 4` behavior:

```xml
<callfixup name="stack_probe">
    <target name="crt_stack_c_stack_probe"/>
    <target name="crt_stack.c_stack_probe"/>
    <target name="crt_stack_c_stack_probe_FUN_005ff9f3"/>
    <target name="crt_stack.c_stack_probe_FUN_005ff9f3"/>
    <target name="stack_probe"/>
    <target name="_STK"/>
    <target name="__STK"/>
    <pcode>
        <body><![CDATA[
            ESP = ESP + 4;
        ]]></body>
    </pcode>
</callfixup>
```

### How the Callfixup Works

1. The callfixup **replaces** the entire CALL operation
2. The injected pcode `ESP = ESP + 4` models the net effect
3. This cancels out the `PUSH arg` that precedes the call
4. ESP is now known (back to entry value) after the "call"
5. Subsequent frame setup (`MOV EBP, ESP`) has a known ESP
6. BADSPACEBASE is resolved!

### Why `ESP + 4`?

The original sequence:
```
PUSH 0x134        ; ESP -= 4 (arg on stack)
CALL stack_probe  ; Would do: ESP -= 4 (ret addr), then RET 4 does: ESP += 8
                  ; Net CALL effect: ESP += 4
```

So replacing CALL with `ESP = ESP + 4` correctly models the net effect.

## Files Modified

| File | Changes |
|------|---------|
| spec/.../x86watcom.cspec | Added `stack_probe` callfixup |

## Testing

Run the test scenario script to verify:
1. `visualizeTextureAtlas` BADSPACEBASE is eliminated
2. No regressions in control functions

## Expected Results

- `visualizeTextureAtlas`: BADSPACEBASE 1 → 0 (fixed!)
- All control functions: 0 delta (no regressions)

## Comparison to Other Approaches

| Approach | Pros | Cons |
|----------|------|------|
| Callfixup (chosen) | Works automatically for all callers | Requires knowing target function names |
| Lock prototype with extrapop | Precise | Requires manual prototype setup |
| C++ heritage fix | Automatic | Complex, may have side effects |

The callfixup approach was chosen because:
1. It's the standard Ghidra mechanism for this exact use case (see `alloca_probe`)
2. No C++ code changes required
3. Works for all callers of `stack_probe`
4. Easy to extend with more target names

## Next Steps

1. Test the fix on `visualizeTextureAtlas`
2. Verify no regressions
3. Consider if other CRT functions need similar treatment
