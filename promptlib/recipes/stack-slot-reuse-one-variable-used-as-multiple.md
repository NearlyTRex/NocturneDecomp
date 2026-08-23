---
id: stack-slot-reuse-one-variable-used-as-multiple
kind: recipe
title: "Stack slot reuse — one variable used as multiple types (`(float)pCVar`, `(CVector3f *)float_expr`)"
legacy_section: 13
requires: []
triggers: [pointer_cast, static_float_loop_induction]
provides: []
---

**Cause:** The Watcom compiler aggressively reuses stack slots across different code paths. One 4-byte stack slot might hold a `float` in one branch and a `CVector3f *` in another. Ghidra assigns a single type to each variable, so it picks one type and inserts invalid casts for the other uses. Common symptoms:
- `(float)pSomePointer` or `(CVector3f *)some_float_expr` — pointer↔float casts that don't compile
- `(CVector3f *)(this_ptr->base).base.turn_speed` — a float struct field stored in a pointer variable
- `(CVector3f *)normalizeAngleToPi(...)` — a float return value stored in a pointer variable
- Variables that appear as both function pointer arguments and float arithmetic operands

**Diagnosis:** Grep all uses of the variable. Group them by code path. If the uses split cleanly into "pointer in paths A/B" and "float in paths C/D" with no overlap, it's stack slot reuse.

**Fix:** Split the variable into separate declarations matching each actual type:
- Change the declaration to the most-used type (usually `float`)
- For the other type's uses, either:
  - **Inline the expression** if it's simple (e.g., replace `local_18 = &orient; cloth_process(..., local_18, ...)` with `cloth_process(..., &orient, ...)`)
  - **Add a new variable** with a descriptive name if it's used multiple times (e.g., `float turn_speed` and `float clamped_angle` instead of reusing `pCVar22`/`pCVar23`)
- Remove all the now-unnecessary `(float)` and `(CVector3f *)` casts
- Remove `(CVector3f *)(uint)(bool_expr)` patterns — just use the bool/float expression directly

This is distinct from the byte buffer pattern (#12) — here the variables have proper types, they're just the *wrong* type for some uses.
