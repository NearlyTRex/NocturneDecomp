---
id: swapped-mistyped-call-arguments-static-swapped
kind: recipe
title: "Swapped / mistyped call arguments (`static_swapped_arguments`)"
legacy_section: 28
requires: [magic-numbers-with-obvious-symbolic-equivalents]
triggers: [static_swapped_arguments]
provides: []
---

**Cause:** clang-tidy's `bugprone-swapped-arguments` fires when a call passes one argument that implicitly converts `double`→`int` next to one that converts `int`→`float` (or the reverse). The "swapped" framing is a heuristic; in Ghidra output the real cause is almost always that the **decompiler emitted a raw float bit-pattern as an integer literal** into a `float` parameter, and a neighbouring `0.0` double literal landed in an `int` parameter.

**Symptoms:**
- A call with adjacent `..., 0.0, 0xNNNNNNNN, ...` arguments where the callee's signature has an `int` then a `float` param (or vice-versa).
- The integer literal is a recognizable float bit-pattern: `0x40000000` = `2.0f`, `0x3f800000` = `1.0f`, `0x40490fdb` = `pi`.

**Canonical example (`CFlame::process` → `CCharacter::igniteBone`):**
```cpp promptc:noverify
// Signature: void igniteBone(CCharacter *, CVector3f *, int fire_type, int flame_type, float flame_scale, int include_hero)

// BROKEN — 0.0 into the int flame_type (harmless 0), but 0x40000000 (the bits
// of 2.0f) converts numerically to 1073741824.0f in the float flame_scale:
igniteBone(&this_ptr_02->base, &pCVar2->position, 0, 0.0, 0x40000000, 1);

// FIXED — decode the float bits ({{ref:magic-numbers-with-obvious-symbolic-equivalents}}) and pass the real literal:
igniteBone(&this_ptr_02->base, &pCVar2->position, 0, 0, 2.0f, 1);
```

**Triage:**
- If the integer literal decodes to a clean float (see {{ref:magic-numbers-with-obvious-symbolic-equivalents}} — `python3 -c "import struct; print(struct.unpack('<f', struct.pack('<I', 0xN))[0])"`) and the callee param is `float`, replace it with the float literal in the `.keep`. The adjacent `0.0`→`int` is usually a benign `0`; write it as `0`.
- If the arguments are genuinely passed in the wrong **order or types** versus what the asm pushes, the callee **signature is wrong** — **STOP** and tell the user to fix it in Ghidra (§"Prefer Ghidra Fixes"). Do not reorder args in the `.keep` to chase the flag.
