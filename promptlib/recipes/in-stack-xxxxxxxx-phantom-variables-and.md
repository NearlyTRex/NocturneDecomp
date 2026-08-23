---
id: in-stack-xxxxxxxx-phantom-variables-and
kind: recipe
title: "`in_stack_XXXXXXXX` phantom variables and `stack0xXXXXXXXX` references"
legacy_section: 14
requires: []
triggers: [text_in_stack_phantom]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** When the decompiler loses track of the stack frame (often due to indirect calls, vtable dispatch, or complex calling conventions), it invents `in_stack_XXXXXXXX` variables as pseudo-parameters or creates raw `stack0xXXXXXXXX` references for stack locations it can't map to declared locals.

**Symptoms:**
- `in_stack_fffffc88`, `in_stack_fffffc8c`, etc. declared as `char *`, `CGore *`, or other pointer types
- These variables are assigned code addresses (e.g., `= (char *)0x4e6aec`) — these are return address tracking artifacts and are dead stores
- The same variable holds completely different types across code paths (pointer, float, integer, string literal)
- `&stack0xfffffe10` used as a buffer for `_sprintf` — Ghidra couldn't map this stack location to any declared variable
- `(float)in_stack_fffffc94` — a pointer variable used as a float argument

**Fix:**
- **Remove all dead stores** — assignments of code addresses (hex values that look like function addresses, e.g., `0x4e6aec`), intermediate values that are overwritten before being read, and return-address tracking artifacts
- **Replace live uses with inline expressions:**
  - Vtable calls: use the actual object pointer directly (e.g., `pCVar3` instead of `(CCharacter *)in_stack_fffffc88`)
  - PathMap results: assign to an existing `CPathMap *` variable like `pCVar11`
  - Motion controller: inline as `&(...).motion_controller`
  - SDamageInfo pointers: inline as `&local_2d8`
- **`&stack0xXXXXXXXX` sprintf buffers:** add a `char acStack_sprintf[64]` local (or use an existing char array if one is declared) and replace all `&stack0x...` references with it
- **`(float)in_stack_...` in function args:** check the assembly to find the actual float value being passed and use that directly
- **Remove the `in_stack_` declarations** once all references are replaced
- Remove any other variables that become unused after cleanup

**How to identify dead stores:** Assignments to code addresses like `= (char *)0x4e6aec` or `= (CGore *)0x4e6b5b` where the hex value falls within the function's address range are always dead — these are the decompiler tracking return addresses pushed by CALL instructions.
