---
id: dead-self-copy-guard-if-local-a-local-b-local-a
kind: recipe
title: "Dead self-copy guard (`if (&LOCAL_A != &LOCAL_B) { LOCAL_A = LOCAL_B; ... }`)"
legacy_section: 23
requires: []
triggers: [self_copy_guard]
provides: []
---

**Cause:** The original source wrote `if (&dst != &src) dst = src;` to guard a small struct copy against self-assignment (a defense useful when `dst` and `src` are pointer parameters that callers might alias). Watcom unrolled the struct copy into N typed scalar assignments inside the guarded body. In the binary, the `dst` and `src` happen to be different stack locals at this call site, but the address-comparison guard survives in the decompile. With both sides as bare stack-local addresses, the guard is always-true at runtime — the body always executes — so the if-wrapper is pure visual noise around an unconditional struct copy.

**Symptoms:**
- An `if (&LOCAL_A != &LOCAL_B) {` line where both operands are bare `&` of simple identifiers (no casts, no pointer parameters).
- The first body line is `LOCAL_A = LOCAL_B;` (the LHS and RHS match the captured names).
- Subsequent body lines continue the field-by-field copy (`LOCAL_A_n = LOCAL_B_n;` for adjacent fields of the same logical struct).

**Canonical example (`CWerewolf::renderEyeGlow`):**
```cpp promptc:noverify
// BROKEN (decompile preserves the dead guard):
local_d0 = (eye_position->x + 0.2f) * size_scale;
local_cc = (eye_position->y + 0.2f) * size_scale;
local_c8 = eye_position->z * size_scale;
if (&local_58 != &local_d0) {       // !! always true — different stack slots
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
}

// FIXED (drop the if-wrapper, keep the body):
local_d0 = (eye_position->x + 0.2f) * size_scale;
local_cc = (eye_position->y + 0.2f) * size_scale;
local_c8 = eye_position->z * size_scale;
local_58 = local_d0;
local_54 = local_cc;
local_50 = local_c8;
```

**When to apply vs. skip:** Apply only when **both sides** of the `!=` are bare `&NAME` and `NAME` resolves to a stack local. Cast-wrapped forms (`(CLocation *)&local`) and pointer-parameter forms (`if (&local != input_ptr)`) are real defenses against caller-aliased pointers — leave those alone, even though the test detector won't flag them.

**Eligibility:** `.keep`-layer fix. The `self_copy_guard` suspect type flags the `if`-line; dropping it is a one-line edit (remove the `if` line and the matching `}`, leaving the body unindented). After cleanup, if the resulting flat body is 4+ field copies, the `unrolled_field_copy` detector may further collapse it into a single `dst = src;`.
