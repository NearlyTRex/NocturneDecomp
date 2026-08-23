---
id: when-to-add-a-defensive-guard-vs-fix-upstream
kind: rule
title: When to add a defensive guard vs. fix upstream
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

If a function hangs or SEGVs on degenerate input that *can't* be cheaply fixed upstream right now (e.g. an actor's bone position came back NaN, hanging `getGroundHeight` in an integer loop because `ROUND(NaN) = INT_MIN`), add a minimal NaN-bail at function entry so frames keep ticking and downstream investigation can proceed. Use the standard NaN-self-compare — no headers needed:

```cpp promptc:noverify
if (pos->x != pos->x || pos->y != pos->y || pos->z != pos->z) {
    if (hit_flag != (int *)0x0)         { *hit_flag = 0; }
    if (normal_out != (CVector3f *)0x0) { normal_out->x = 0.0f;
                                          normal_out->y = 1.0f;
                                          normal_out->z = 0.0f; }
    return 0.0f;
}
```

Mark these clearly as defensive in the comment ("Defensive guard: …") so a later pass — once the upstream NaN source is found and fixed — can rip them out. A defensive guard is **not** a fix; it's scaffolding that keeps the larger investigation alive.
