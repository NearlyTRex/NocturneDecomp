---
id: de-pun-prefer-named-fields-and-intermediate
kind: rule
title: "De-pun: Prefer Named Fields and Intermediate Typed Pointers Over Inline Reinterpret Casts"
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When a `.keep` body contains **type-pun pointer casting** — `*(T *)(expr)`, `(T *)(IDENT + N)`, `((T *)FIELD)[i]`, or any cast that reinterprets bytes as a different type — **prioritize removing it whenever doing so is feasible and bit-exact.** A reinterpret cast is a decompiler artifact: it means Ghidra lost the type at that point. Naming the type makes the code self-documenting and exposes the *next* bug (wrong field, off-by-one stride) that a raw cast hides. This applies whenever you are already editing a `.keep` for any reason — treat a removable pun like a flagged suspect.

**Feasibility gate.** Only de-pun when the real type/field is *known* and the rewrite is *exactly* equivalent at the byte level — from a corrected struct, an existing struct that matches the layout, or the `.asm`. If the target type is unknown or the data shape implies a struct that doesn't exist, that is a Ghidra-fix signal (a byte-buffer local that should be a struct) — STOP and tell the user what to create, do **not** invent a `.keep`-level reinterpretation.

**Priority order — pick the highest that applies:**
1. **Named struct field.** If the (possibly just-corrected) struct has a real field at that offset, use it and drop the cast entirely. After a Ghidra struct fix this is usually the answer: `(CVector3i *)(kf + 1)` → `kf->vertices`; `*(int *)(base + 0x10)` → `base->vertex_header.count`; `*(int *)(p->actor_name + 8)` on a `CWeapon` reached through a `CDemonActor *` → `((CWeapon *)p)->ammo_count` (one cast at the type boundary, then named fields).
2. **Retype the local (a byte-buffer local that should be a struct, or a reused stack slot).** If a local is a primitive walker (`int *` / `uint *`) striding a typed struct array, retype it to the element type and replace `*p` / `p[1]` / `p[2]` with `p->x` / `p->y` / `p->z` and the `p += 3` stride with `p += 1`. Drop any interleaved Ghidra index-shuffle temps (`piVar1 = p + 2; p += 3;`) — they exist only because of the primitive stride.
3. **One intermediate typed pointer.** When the *same* bytes are reinterpreted at several sites and no field/retype fits (a genuinely packed/punned region), introduce a single typed pointer **assigned where the base is stable** (per the declarations-at-top rule, declare at top, assign at the point of use), then index it: eight `((int *)rec.texture_name)[i]` reads → `uv = (int *)rec.texture_name;` once, then `uv[0..3]`.

**When to leave one explicit cast — do NOT over-engineer:** a *single, localized* reinterpret that marks a real **format boundary** or **polymorphic dispatch** is the honest representation; keep it (optionally via one named intermediate). Examples: a vertex array that is immediately followed by a primitive-block chain (`zbp_block = (SMRGLHeaderExtended *)out_vert;` then `zbp_block + 1` for the first primitive — names the boundary and turns `+3 ints` into struct stride); a base-class walker downcast at the dispatch site (`(SMRGLPrimitiveTriangleIndex *)prim` for the indexed-triangle case); a header upcast for a size query (`(SMRGLHeaderExtended *)prim` into `getMRGLSize`). Don't multiply intermediates to chase a pun that is genuinely one reinterpretation.

**Renaming is allowed when it is part of a retype.** The no-rename-for-style rule above still holds for cosmetic churn, but when a retype makes the existing name wrong — a `pi`/`pc`/`pu` Hungarian prefix that no longer matches the type, or a misnomer like `texture` for a primitive-block walker — rename it to match what it now is (`piVar9` → `vert`, `texture` → `primitive_list`, `texture` → `glowTexture`). The new name is part of expressing the corrected type, not gratuitous styling.

Every de-pun must stay bit-exact and faithful to the asm; verify the offset/stride before rewriting, and show each change as its own reviewable diff with the equivalence rationale (same rules as suspect cleanup).
