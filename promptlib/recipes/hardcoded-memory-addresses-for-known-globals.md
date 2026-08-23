---
id: hardcoded-memory-addresses-for-known-globals
kind: recipe
title: Hardcoded memory addresses for known globals
legacy_section: 11
requires: []
triggers: [raw_address_constant]
provides: []
---

**Cause:** The decompiler sometimes emits raw absolute addresses (e.g., `0x2d82d88`) instead of expressing them relative to a known global symbol. This happens when pointer arithmetic on a global array loses its symbolic reference — the decompiler falls back to the computed address.

**Fix:** Identify which global the address belongs to by checking the `.asm` file for symbol annotations near that address. Replace the raw address with the correct symbolic expression (e.g., `0x2d82d88` → `&g_MasterLightStateSaveBuffer[1]` when the base is at `0x2d82d84`). Never leave magic address constants in a `.keep` file when the corresponding global is known.

**Not every flagged constant is an address.** The detector matches any large hex constant in the typical-pointer range, so it also catches non-address values that happen to look pointer-shaped. The most common false-positive class is **fixed-point coordinates** — UV/texture coords, screen positions, or other 16.16-style values written as raw hex by Watcom. When the assignment target is clearly not a pointer (e.g. a `.u` / `.v` / `.x` / `.y` field on a vertex or coordinate struct), the right fix is to rewrite the constant as a shift so the fixed-point structure is visible:

```cpp promptc:noverify
// BROKEN (flagged as raw_address_constant, but it's a 16.16 UV coord):
pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
pCVar2->vertex_buffer_ptr[2].u = 0xf80000;

// FIXED (shift form makes the integer part obvious — 248 in 16.16):
pCVar2->vertex_buffer_ptr[1].v = 0xf8 << 16;
pCVar2->vertex_buffer_ptr[2].u = 0xf8 << 16;
```

Use the shift form only when the upper bits are non-zero and the lower bits are zero (or otherwise cleanly decomposable) — i.e. the value really is `N << K` for a small `N`. If the constant has bits scattered across the word, leave the hex; a forced shift would obscure rather than clarify.
