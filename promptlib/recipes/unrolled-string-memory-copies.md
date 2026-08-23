---
id: unrolled-string-memory-copies
kind: recipe
title: Unrolled string/memory copies
legacy_section: 17
requires: [magic-numbers-with-obvious-symbolic-equivalents]
triggers: [unrolled_memcpy, unrolled_memset, unrolled_strcat, unrolled_strchr, unrolled_strcpy, unrolled_strlen]
provides: []
---

**Cause:** Watcom frequently unrolled `strcpy`, `memcpy`, and struct copies into sequences of byte/word/dword moves. The decompiler reproduces these as chains of individual assignments instead of recognizing the higher-level operation.

**Symptoms:**
- A sequence of byte-by-byte or word-by-word assignments copying from one buffer to another
- A `do/while` loop copying two bytes at a time with an early-exit check on null terminator (unrolled `strcpy`)
- Field-by-field struct copies like `dst[0] = src.field_a; dst[1] = src.field_b; ...` across all fields
- A countdown `for`-loop with `*(uint *)dst = *(uint *)src; src += ...; dst += ...;` and the `(uint)bVar * -8 + 4` direction idiom — Watcom's `REP MOVSD` lowering. **The `unrolled_memcpy` suspect detector misses this shape when the store LHS/RHS has an arrow or index** (e.g. `*(uint *)pSVar9->data = *(uint *)pcVar8;`), so it reaches you flagged only as `pointer_cast` on the `pX = (T *)((int)pX + (uint)bVar * -8 + 4);` line. If you see `pointer_cast` inside a countdown loop with that direction idiom, it's this pattern — collapse per this recipe regardless of the suspect label.
- A countdown `for`-loop writing a single constant (often `0`) to one element per iteration with a unit pointer increment — `for (; iVar != 0; iVar = iVar + -1) { *p = 0; p = p + 1; }`. Watcom's `REP STOS{B,W,D}` lowering. The `unrolled_memset` suspect (asm-anchored on `STOS{B,W,D}.REP`) flags these; the suspect's `line` is in the `.asm`, not the `.cpp`, since the source-side fingerprint is too generic to anchor reliably. Find the matching countdown loop in the function body and replace with `memset(dst, value, count * stride)`. The B/W/D variant tells you the stride (1/2/4 bytes per element).

**Multi-local span / ASan trap:** When the copy size exceeds the declared size of the source local (e.g. `REP MOVSD` of 0x89 dwords out of a `char[60]`), the original binary had **multiple adjacent stack locals** laid out contiguously and the copy walked all of them as one blob. Under ASan each local gets redzones — the read trips `stack-buffer-overflow` one byte past the first local's end. Fix by issuing **one `memcpy` per source local**, each sized to that local, targeting the matching offset in the destination struct. Cross-reference the `.asm` `LEA` offsets to determine which locals the original `REP MOVSD` was spanning and in what order.

**Fix:** When the pattern is clearly a string or memory copy, replace with the appropriate standard library call:
```cpp promptc:noverify
// BROKEN (unrolled strcpy — 2-byte-at-a-time copy loop):
pcVar4 = dest;
do {
    cVar2 = *src;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = src[1];
    src = src + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
} while (cVar2 != '\0');

// FIXED:
strcpy(dest, src);

// BROKEN (field-by-field struct copy into int array):
g_Scratch[0] = g_Buffer[i].field_a;
g_Scratch[1] = g_Buffer[i].field_b;
// ... all 12 fields ...
g_Scratch[11] = g_Buffer[i].field_l;

// FIXED (if types match):
g_Scratch = g_Buffer[i];
// Or if raw memory:
memcpy(g_Scratch, &g_Buffer[i], sizeof(g_Buffer[i]));

// BROKEN (unrolled memset — REP STOSD in asm, countdown for-loop in .cpp):
for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
}

// FIXED (stride matches the STOS variant: STOSB → 1, STOSW → 2, STOSD → 4):
memset(puVar5, 0, count * 4);
```

**Prefer `sizeof` over a magic byte count.** When you emit a `memcpy`/`memset` whose size is a raw constant (or `count * 0xNN`), check whether that constant is the `Ghidra size:` of a struct in play — the element type of the dest/src array, or a struct declared/used nearby. If it matches, write `sizeof(T)` (or `count * sizeof(T)`) instead of the hex. The asm-anchored REP MOVS/STOS detectors hand you the byte count verbatim, so this comes up constantly:

```cpp
// BROKEN (Watcom REP MOVSD lowering, byte count rendered as `count * size`):
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * 0x14);     // SVertexData is 0x14
memcpy(g_BackupPolygons, g_ModelPolygonData, g_PolygonCount * 0x184); // SShapeEditorPolygon is 0x184

// FIXED (the stride is the element size — make it self-documenting):
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * sizeof(SVertexData));
memcpy(g_BackupPolygons, g_ModelPolygonData, g_PolygonCount * sizeof(SShapeEditorPolygon));
```

Confirm the match the same way as {{ref:magic-numbers-with-obvious-symbolic-equivalents}}: the struct's `Ghidra size: 0x<N>` annotation must equal the constant exactly. If the dest/src is a typed array (`SVertexData g_BackupVertices[...]`), the element type is the `sizeof` to use. If the constant is *not* a clean struct size (a packed sub-range, a hardcoded buffer length, a fixed-point scale), leave the hex — a forced `sizeof` that doesn't actually equal the type size silently changes the copy length. This applies to any size argument, not just collapsed copies (e.g. a `debugMalloc(count * 0x14, ...)` for an `SVertexData` array is `count * sizeof(SVertexData)`).

**When to suggest:** Only when the pattern is unambiguous — the copy is complete (all bytes/fields), contiguous, and the source/destination types are compatible. Don't collapse partial copies or copies with interleaved logic.
