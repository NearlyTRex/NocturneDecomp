---
id: partial-struct-copy-partial-struct-copy
kind: recipe
title: "Partial struct copy (`partial_struct_copy`) — uninitialised bytes, compiles cleanly"
legacy_section: 31
requires: [missing-cave-block-struct-memcpy-uninit-struct]
triggers: [partial_struct_copy]
provides: []
---

**Cause:** Watcom copied a whole struct between two stack slots (or, more often, kept *one* stack object that Ghidra split into two locals). The decompile keeps only some of the field assignments, so the destination is left with a byte **gap** that nothing ever writes. It then gets passed by address to a call that reads the whole struct, and those bytes are whatever the stack happened to hold.

This is {{ref:missing-cave-block-struct-memcpy-uninit-struct}}'s failure mode without {{ref:missing-cave-block-struct-memcpy-uninit-struct}}'s fingerprint: the destination *is* assigned and *is* used, so the `missing_cave_copy` dead-local passes are blind to it, and the surviving assignments look like ordinary code.

**Symptoms:**
- A short run of `dst.f = src.f;` where `dst` and `src` are the same struct type, covering only part of the struct.
- The uncopied field(s) are never assigned anywhere else in the function.
- `&dst` is later passed to a call whose parameter is the full struct type.
- Downstream symptoms are geometric nonsense rather than a crash — objects at garbage world positions, lights projected off-screen, audio listeners placed at random coordinates.

**Confirmed instances (all three the same shape — an uninitialised `CVector3i`):**
```cpp promptc:noverify
// CDemonCamera::precomputeNormals — .x/.y never written (killed env lighting):
local_60.z = local_84.z;
...
precomputeLight(this_ptr, &local_60, ...);      // reads .x/.y = garbage

// CDemonCamera::precomputeLight — .z never written:
worldToScreenWithFrustumCull(&light_source->base, input_ptr, &local_70);
local_64.x = local_70.x;
local_64.y = local_70.y;
projectLightAndMarkVisibility(light_source, &local_64, ...);

// updateListeners — .x/.y never written:
screenToWorldCoord(&g_CDemonCameraInstance, sx, sy, &local_3c);
local_e4.z = local_3c.z;
screenToWorldTransform(&g_CDemonCameraInstance, &local_e4, &local_54);
```

**Verification via asm — check whether the two locals are really one object.** In `updateListeners` the asm shows a single buffer: `screenToWorldCoord` is called with `EDI = ESP+0x8c`, the `.z` slot at `[ESP+0x94]` is then adjusted **in place** (`LEA ECX,[EDX-0x300]; MOV [ESP+0x94],ECX`), and `LEA EAX,[ESP+0x8c]` — the *same* address — is pushed into `screenToWorldTransform`. There was never a copy at all; Ghidra invented a second local.

**Fix:** if the asm shows one object, collapse the two locals into one (pass `&src` everywhere and drop the dead `dst` declaration) — that is the faithful reconstruction. If the asm shows a real block move, restore the full copy `dst = src;` before the modifications. Do **not** simply add the missing field assignments one at a time; the whole-struct form is what the binary did and it stays correct if the struct grows.

**Eligibility:** `.keep`-layer fix. The `partial_struct_copy` suspect is source-side and type-aware (byte coverage from `data_types.json`), so it runs in `test_suspects.sh`. Two gates keep it precise, and both are worth knowing because they mark the **non**-bugs: a destination filled by a ctor/init call *before* the copy (`SLaserInfo_ctor(&dst)`, `initIntersectionCylinder(&dst, ...)`) is already initialised, and a destination whose address is taken into anything other than a plain call argument may be written through an alias (`*(uint *)((int)&dst + 4) = ...`) the field scan cannot see.

**Related detector caveat:** `unrolled_memcpy`'s field-copy form recommends collapsing a run into `dst = src;`. That is only equivalent when the run — plus any sibling runs for the same pair — covers **every** byte. Collapsing a genuinely partial run widens the copy and changes behaviour.
