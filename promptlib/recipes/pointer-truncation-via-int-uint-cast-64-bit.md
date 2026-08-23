---
id: pointer-truncation-via-int-uint-cast-64-bit
kind: recipe
title: "Pointer truncation via `(int)`/`(uint)` cast (64-bit build blocker)"
legacy_section: 27
requires: []
triggers: [pointer_truncation]
provides: []
---

**Cause:** Watcom freely cast pointers to `int`/`uint` for pointer differences, alignment masks, address printing, hashing, and storing pointers in int-typed globals/fields. On the 32-bit matching build these are bit-exact, but at 64-bit they are hard errors (`cast from pointer to smaller type loses information`) — the chief obstacle to a multilib-free build. Ghidra reproduces the cast verbatim; the 64-bit compiler is the exhaustive oracle, and the `pointer_truncation` suspect surfaces the same sites in the annotation/review pipeline.

**Symptoms (all from real flags):**
- Pointer difference: `iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];`
- Alignment mask: `if (((uint)p_output & 2) != 0) { ... }`
- Address print: `displayErrorAndQuit("ptr = %08X", (uint)this_ptr, ...);`
- Pointer stored in an int global: `g_PerspectiveReciprocal = (int)g_CurrentSceneCamera;`
- Pointer-as-offset arithmetic with a separately-cast base: `(char *)base + (int)q->field`

Pointer-ness is decided from **declared types** (signature params, local decls, global types, struct field layout), not Hungarian naming — so a genuinely mistyped operand like `(int)frame_index` (declared a pointer despite the name) is caught, while integer locals that merely look pointerish are not.

**Fix:** Replace the narrowing cast with the width-preserving portable form (per the Fidelity Requirements "64-bit-portable forms" rule), keeping the value's role. On `-m32` these are bit-identical; on 64-bit only the wide form survives:
- `(uintptr_t)ptr` for unsigned uses — alignment masks, address prints, hashes
- `(intptr_t)ptr` for signed pointer-difference math

```cpp promptc:noverify
// BROKEN (truncates at 64-bit):
iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
if (((uint)p_output & 2) != 0) { ... }

// FIXED (width-preserving, bit-identical on the 32-bit build):
iVar4 = (intptr_t)g_ScreenBufferArray[1] - (intptr_t)g_ScreenBufferArray[0];
if (((uintptr_t)p_output & 2) != 0) { ... }
```

**When it's a Ghidra fix instead — STOP and tell the user:** if the "pointer" operand is actually a **mistyped field/local that holds an integer offset**, the cast is a symptom of the wrong type, not a real pointer truncation. The canonical case is `void** row_pointers` used as `(char *)packed_data + (int)row_pointers[i]` — the slots hold byte offsets into `packed_data`, not addresses. Retype the field in Ghidra (`int *row_pointers`); after re-export the cast becomes `(int)int` and the flag disappears. Do **not** paper over it with `intptr_t` in a `.keep` — that buries a real type bug.

**Not a truncation — a dereference (the detector skips these):** `(uint)(&agg.field)[i]` subscripts the address, reading a **scalar element** — Watcom's parallel-array idiom over sibling `uchar`/`ushort` fields (e.g. `(uint)(&g_Palette.colors[0].b)[i]` reading the blue plane). The cast widens a byte/short, not a pointer, so it is not flagged — unless the subscripted field is itself pointer-typed (`(int)(&this_ptr->actor_ptr)[i]`), which is a real truncation and stays flagged.

**Eligibility:** `.keep`-layer fix for the portability rewrite; Ghidra-side retype when the operand is a mistyped offset field/local. The `pointer_truncation` suspect (moderate) flags every narrowing `(int)`/`(uint)` cast of a declared-pointer operand.
