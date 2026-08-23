---
id: 18a-array-bounds-and-capacity-guards-always
kind: rule
title: 18a. Array bounds and capacity guards — ALWAYS derive them from the array
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

**Any constant that is really "how many elements are in array X" must be written as an expression over X, never as a literal — even when the literal is correct and even when you recovered it from the asm.** This is the single most common de-magic-number case and it is not optional.

The idiom (there is no `ARRAY_COUNT`/`_countof` macro in this project; do not invent one in a `.keep` — that would need a generator change):

```cpp promptc:noverify
(int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0]))          // element count
(int)(sizeof(g_Grid[0]) / sizeof(g_Grid[0][0]))                          // inner dimension of [R][C]
(int)(sizeof(g_Grid)    / sizeof(g_Grid[0]))                             // outer dimension of [R][C]
```

Cast to `int` when comparing against a signed loop counter, to avoid a signed/unsigned warning.

**Why this is a hard rule, not a style preference.** These arrays get **resized** — most often to support larger video resolutions, bigger texture caches, or more actors. A literal silently decouples from the declaration the moment that happens:
- A **loop bound** left as a literal under-iterates (leaks/misses elements) or over-iterates (walks off the end) after a resize.
- A **capacity guard** left as a literal is worse: it is the check that *prevents* the overflow. `if (0x1000 < g_TextureCount) fatalError("Too many textures")` keeps rejecting at 4096 after you grow `g_TextureSurfaces[]`, or stops protecting you if you shrink it.

Both forms appeared in `tridx7!releaseAllTextures` / `tridx7!createTexture` guarding the *same* `g_TextureSurfaces[4096]`, and both were literals.

**Applies to (non-exhaustive):**
- Adjacency-sentinel rewrites — the replacement bound is an array count, so write it as one.
- Countdown-loop bounds recovered from the asm (`for (i = 0x772; ...)`), when the count is `sizeof(T)/4` or an element count.
- `memset`/`memcpy` sizes — use `sizeof(array)` for a whole array, `count * sizeof(T)` for a prefix.
- Capacity/limit guards comparing a running count against the array's size.
- Loop bounds over a fixed global grid (`[4][8]` staging tables, per-adapter tables, pool arrays).

**Verify before substituting** — the expression must evaluate to exactly the constant it replaces. A compile-time check is cheap and worth doing when the value came from asm:

```cpp promptc:noverify
int _chk[(int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0])) == 4096 ? 1 : -1];
```

**The one exception:** if the asm bound provably does **not** equal the array's element count, that mismatch is the finding — the array declaration is probably wrong (a byte-buffer local that should be a struct, or sibling-array sizing) or the loop really is a partial pass. Say so; do not paper over a real disagreement by making the numbers agree by construction.
