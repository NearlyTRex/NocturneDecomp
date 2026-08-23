---
id: inline-fast-inverse-sqrt-bit-trick
kind: recipe
title: Inline fast-(inverse-)sqrt bit-trick
legacy_section: 21
requires: []
triggers: [fast_inv_sqrt_inline, fast_sqrt_inline]
provides: []
---

**Cause:** The Watcom binary inlines two bit-pattern math approximations across many call sites — a fast `sqrt` and a fast inverse `sqrt`. The asm reinterprets the float's 4 bytes as `int`, manipulates them, and reinterprets them back as `float`:

```
FSTP [tmp]              ; store float
MOV EAX, [tmp]          ; load same bytes as int (bit-cast)
SAR EAX, 1
ADD EAX, [g_FastSqrtMagic]      ; or SUB g_FastInvSqrtMagic - bits
MOV [out], EAX
FLD [out]               ; reload as float (bit-cast back)
```

Ghidra emits these as `(float)(((int)x >> 1) + g_FastSqrtMagic)` — a **numeric** float→int conversion, not a bit-cast. For NaN / Inf inputs `(int)NaN` is UB, which UBSan flags. For finite inputs the value is also wrong (numeric `(int)100.0f = 100` vs. bit-cast `0x42C80000 = 1120403456`).

**Symptoms:**
- UBSan: `nan is outside the range of representable values of type 'int'` inside lines that look like `(float)(((int)X >> 1) + INT_<something>)` or `(float)(<MAGIC> - ((int)X >> 1))`.
- After re-export with `g_FastSqrtMagic` / `g_FastInvSqrtMagic` properly named in Ghidra, those magic identifiers are the giveaway.
- The bit-cast form sometimes appears in older keeps (`*(int *)&dst = (*(int *)&src >> 1) + g_FastSqrtMagic;`) — semantically correct but obscure; same fix as below.

**Fix:** Replace the inline trick with a call to the binary's own helper. The two helpers exist as standalone functions:

| Form | Helper |
|---|---|
| `(bits >> 1) + g_FastSqrtMagic`        | `fastSqrt_FUN_00431350(x)` |
| `g_FastInvSqrtMagic - (bits >> 1)`     | `fastInvSqrt_FUN_0043e2a0(x)` |

```cpp promptc:noverify
// BROKEN (Ghidra numeric cast — UB on NaN/Inf):
local_24 = (float)(((int)local_5c >> 1) + g_FastSqrtMagic);
local_44 = (float)(g_FastInvSqrtMagic - ((int)local_48 >> 1));

// FIXED (call the helpers — bit-exact match to original):
local_24 = core_chain_cpp_fastSqrt_FUN_00431350(local_5c);
local_44 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(local_48);
```

**Why call the helper instead of `sqrt()` / `1/sqrt()`:** The bit-trick is **not** bit-exact with libc `sqrt()` — typical relative error a few percent. The original game's physics, cloth, and lighting are tuned around these specific approximations, so swapping in `sqrt()` would shift behavior. The helpers preserve original behavior exactly.

**Eligibility:** `.keep`-layer fix. The `fast_sqrt_inline` / `fast_inv_sqrt_inline` suspect types (see "Reducing Flagged Suspects") flag every inline occurrence. Both magics — `g_FastSqrtMagic` (≈ `0x1FC00000`) and `g_FastInvSqrtMagic` (≈ `0x5F400000`) — are project globals; if you see them in a function, the pattern is unambiguous.
