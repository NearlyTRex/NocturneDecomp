---
id: split-contiguous-watcom-stack-block-via-field
kind: recipe
title: Split contiguous Watcom stack block via field-pun (ASan stack-buffer-overflow)
legacy_section: 26
requires: []
triggers: [subfield_vector_pun]
provides: []
---

**Cause:** Watcom often packs related values into a single contiguous stack region — a 12-byte `CVector3f`, a 24-byte `position+velocity` pair, an N-vertex billboard buffer. The asm passes a pointer to the start of that region to a downstream call that reads `N` bytes from it. Ghidra cannot always recover the region as one local; it splits the bytes across several adjacent locals (e.g. `CVector3f CStack_X; float fStack_Y;` plus `local_Z.x` reuse) and emits the downstream call as `(CVector3i *)&CStack_X.y` — a sub-field address that *happens* to land at the right Watcom offset.

Under Watcom's compact stack layout the field-pun pointer can validly span across the synthetic boundary into the next local. Under LLVM with ASan, every local is wrapped in a redzone, so the 4–8 bytes that the call would have read past the end of `CStack_X` now land in poisoned bytes — instant `stack-buffer-overflow`. Even without ASan the pun is fragile: Ghidra frequently drops one of the field writes (the byte that fell in the unnamed inter-local gap) entirely, so the call reads uninitialized data.

**Symptoms:**
- ASan reports `stack-buffer-overflow on address ... at offset N` where `N` is exactly one-past-end of a Ghidra-emitted local (e.g. `[144, 156)` with the access at byte 156).
- The crash stack shows the receiving function (`processCameraRelativeVertex`, `transformAndProjectPoint`, `CDeformableModelInstance_rayIntersect`, etc.) reading `world_position->x/.y/.z` at the call site.
- Tracing back to the caller's `.cpp`, the call argument is a sub-field cast: `(CVector3f *)&CStack_X.y`, `(CVector3i *)&local_Z.y`, `(CVector3f *)&local_W.max.y`, etc. — a pointer obviously aimed past the declared field's start.
- In the same caller, you find two or more adjacent locals whose `.y`/`.z` and the next local's `.x` are assigned in sequence (the three components of one logical vector).
- A field write that *should* exist (e.g. the third float of a position vector) is missing from the `.cpp` — Ghidra dropped it because the byte fell into an unnamed slot.

**Verification via asm:** find the call site in the `.asm` file. The push immediately before the call gives the Watcom-side stack offset. Trace the writes to that offset and the next two slots: they should be three same-typed values (3 floats, 3 ints) coming from the same source struct (position, velocity, vertex). Confirm the cpp's split locals correspond to those exact slots — sometimes the cpp drops one of the three writes; the asm always has all three.

**Fix (caller-side `.keep`):** introduce a real, contiguous local of the correct type at the top of the function (per the declaration-placement rule above), rewrite the three field writes to use the real local, and pass `&real_local` to the call. Drop the synthetic split locals from the declarations afterwards. Do *not* try to rescue the split locals by retyping one to be bigger (16-byte struct hack) — that breaks downstream code that legitimately uses the adjacent locals.

**Canonical example (`CSpark_render`, four billboard-quad vertices):**
```cpp promptc:noverify
// BROKEN — four CVector3i vertex stores split across adjacent locals, each
// downstream call reads 4 bytes past the local's end and trips ASan:
CVector3i CStack_58;            // .y, .z written…
CVector3i local_4c;              // …and .x of the next local provides the 3rd int
...
CStack_58.y = (int)ROUND(fVar4 * 256.0f);
CStack_58.z = (int)ROUND(fVar4 * 256.0f);
local_4c.x  = (int)ROUND(256.0f * 0.0);
transformAndProjectPoint(&vb->projected_vertex, (CVector3i *)&CStack_58.y);

// FIXED — proper CVector3i locals, declared at function top:
CVector3i quad_v0;   // declared with the other locals at the function head
...
quad_v0.x = (int)ROUND(fVar4 * 256.0f);
quad_v0.y = (int)ROUND(fVar4 * 256.0f);
quad_v0.z = 0;
transformAndProjectPoint(&vb->projected_vertex, &quad_v0);
```

**Canonical example (`CDemonActor_rayIntersect`, ray origin/direction):**
```cpp promptc:noverify
// BROKEN — Ghidra's `and esp, 0xfffffff8` confusion picked sub-field addresses
// of bounding-box locals for the local-space ray. Reading 12 bytes from
// &local_84.max.y walks off the bbox into the redzone:
CBoundingBox3D local_84;
CVector3f local_54;
CVector3f local_3c;
...
CDeformableModelInstance_rayIntersect(model, (CVector3f *)&local_6c.max.y,
                                              (CVector3f *)&local_84.max.y);
// (and a field-pun normal copy: local_54.y = ...; local_54.z = ...; local_48.x = ...;)

// FIXED — the asm `[esp+0x7C]` / `[esp+0x64]` decode to &local_3c / &local_54,
// the local-space ray that worldToLocal*/inverseTransform* already produced.
// The normal output is &local_30:
CDeformableModelInstance_rayIntersect(model, &local_3c, &local_54);
local_30 = g_DeformableModelRayHitNormal;
```

**Eligibility:** `.keep`-layer fix. The trigger is either an ASan `stack-buffer-overflow` at a sub-field pointer, or a manual audit that finds `(T *)&local_X.y`-style call arguments. Always confirm the corrected source via asm before rewriting — guessing the axis/field mapping silently produces wrong gameplay (mismatched gravity axis, scrambled vertex positions, etc.).
