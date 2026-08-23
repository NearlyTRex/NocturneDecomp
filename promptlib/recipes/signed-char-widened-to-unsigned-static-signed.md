---
id: signed-char-widened-to-unsigned-static-signed
kind: recipe
title: "Signed char widened to unsigned (`static_signed_char_misuse`)"
legacy_section: 29
requires: []
triggers: [static_signed_char_misuse]
provides: []
---

**Cause:** A `signed char` value (a `char` deref, a `char` field/local) is widened directly to `uint`/`int`, so the sign bit propagates: a byte `>= 0x80` becomes `0xFFFFFFxx` instead of `0x00xx`. clang-tidy flags it as `bugprone-signed-char-misuse` (aliased `cert-str34-c`). It's a **data-model signedness** smell — the byte was almost certainly meant to be unsigned (a glyph index, a palette entry, a raw byte).

**Symptoms:**
- `uint bVar; ... bVar = *text;` where `text` is `char *` — the assignment sign-extends.
- A range test that only makes sense for an unsigned byte right after: `if ((0x1f < bVar) && (bVar < 0x100))` — the `< 0x100` guard is the tell that the author expected `0..255`, but a sign-extended high byte fails it and the character silently drops.

**Triage via the asm load:**
- `MOVZX EAX, byte ptr [...]`, or `MOV AL, [...]` whose upper bits are then masked / the value only ever compared as a byte → the value is **unsigned**. Fix the data model: retype the local/field to `uchar` in Ghidra, or — if it's a `.keep`-local read — cast at the load: `bVar = (uchar)*text;`. Both make the high bytes survive the range test.
- `MOVSX EAX, byte ptr [...]` → the binary genuinely sign-extends; the behaviour is **faithful**, leave it and note it (exempt).

```cpp promptc:noverify
// BROKEN (uint bVar2; signed-char deref sign-extends; chars >= 0x80 fail the < 0x100 test):
bVar2 = *text;
if ((0x1f < bVar2) && (bVar2 < 0x100)) { ... }

// FIXED (asm masks to a byte — treat as unsigned so the full 0x20..0xFF range passes):
bVar2 = (uchar)*text;
if ((0x1f < bVar2) && (bVar2 < 0x100)) { ... }
```
