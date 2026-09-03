# Actor reflections invisible in the mirror glass — **ROOT CAUSE FOUND**

## ✅ ROOT CAUSE: nocedit.exe tests actor visibility against the *background* camera

`CDemonCamera::testVisibility` (`core/dcamera.cpp`, `0x4544f0`) swaps the renderer's
camera before it rasterises the bounding box:

```c
getCameraAndViewportState(g_CDemonRendererPtr2, &g_SavedCameraState);
setupCameraAndViewport (g_CDemonRendererPtr2, &g_BackgroundSavedCameraState);  // <<<
... transformPoint the 8 corners, rasterise the 6 box faces via renderSinglePrimitive ...
setupCameraAndViewport (g_CDemonRendererPtr2, &g_SavedCameraState);
```

Verified in the asm at `0x45450f`: `PUSH 0x151be98 | g_BackgroundSavedCameraState`. The
`.keep` is faithful — **this is not a decompilation bug.**

During a mirror pass the renderer is holding the *mirrored* camera that
`setupMirrorRendering` → `setupMirrorReflection` → `setupMirrorCamera` installed. This
swap throws it away and tests the reflected actor's box against the **main scene**
camera, where the reflection's virtual position (behind the mirror plane, inside the
wall) is not visible. `testVisibility` returns 0 → `CBoundingBox3D::isVisibleWithCamera`
returns 0 → `CCharacter::renderOpaque` culls → **no reflected model.**

**Retail nocturne.exe does not have this function at all.** It inlines the same
bounding-box rasterisation test directly into `CBoundingBox3D::isVisibleWithCamera`
(`0x41d050`, 1023 B vs the editor's 447 B) — and that inlined copy performs **no camera
save/swap/restore**: its complete call set is `getCorner`, `transformAndProjectPoint`,
`isVisiblePlane`, `renderSinglePrimitive`, `enableFaceCapture`,
`setPlaneCullingEnabled`. So retail tests against whatever camera is current, which
during a mirror pass is the mirror camera — the correct answer.

The swap is a no-op outside a mirror pass (current camera ≈ background camera), which is
why the difference only ever shows up in mirrors.

**This explains the exact symptom.** Static room geometry reflects (it never goes through
`isVisibleWithCamera`); the character's corona/flare reflects (a different `renderScene`
sub-loop); only the opaque model is culled.

It also joins up with the previously-fixed bug: `getCameraRotationAsRadians` corrupting
`g_BackgroundSavedCameraState` broke *all* actors in the mirror room, via this same
global and this same function.

### Fix shape (a deliberate deviation, not a reconstruction)

Our build is a faithful nocedit.exe reconstruction, so matching retail here means
*changing* behaviour. Minimal targeted form: in the `testVisibility` `.keep`, skip the
camera swap while a mirror pass is active (`g_CDemonSetPtr->active_mirror != 0`, or
`g_CDemonRendererPtr2->advanced_culling_enabled != 0`), behind a
`NOCTURNE_AUTHENTIC_*` flag in `shims/shim_config_authentic.h` with both paths kept in
the file, per the project convention. Porting retail's whole inlined
`isVisibleWithCamera` is the heavier alternative.

### How this was missed for several sessions

`make_sibling_anchors.py` only pairs base names unique on **both** sides, so every
function still unnamed in `annotations/nocturne.exe/` was silently skipped — about 1900
of them, including `CDemonSet::renderScene` (d=0.449) and
`CBoundingBox3D::isVisibleWithCamera` (d=0.738). Neither was ever compared, which is how
a 447 B vs 1023 B difference in the actor cull gate survived several sessions of "the
mirror path is byte-identical".

`scripts/Python/tu_anchor.py` closes the hole. Watcom emits functions in source order
within one object file, so per-TU address-sorted lists correspond; existing anchors are
fixed points and the runs between them resolve positionally (equal length) or by a byte
size that is unique on each side of the run. Every candidate is then corroborated
against **raw PE bytes** by `diff_functions.py` — independent evidence, since the
conjecture came from layout alone.

```bash
python3 scripts/Python/make_sibling_anchors.py --out /tmp/anchors.json
python3 scripts/Python/tu_anchor.py --anchors /tmp/anchors.json --out-dir /tmp/tu
python3 scripts/Python/diff_functions.py nocedit.exe nocturne.exe \
    /tmp/tu/candidates_anchors.json \
    --funcs-a annotations/nocedit.exe/functions \
    --funcs-b annotations/nocturne.exe/functions --json /tmp/tu/diff.json --show all
python3 scripts/Python/tu_anchor.py --anchors /tmp/anchors.json --out-dir /tmp/tu \
    --diff /tmp/tu/diff.json          # merges into sibling_manual_pairs.json
```

Result: 188 candidates → **160 accepted** (123 byte-corroborated, 36 same-function
source drift, 1 hand-adjudicated), 158 of them new, taking
`annotations/nocturne.exe/sibling_manual_pairs.json` from 274 to 432 pairs. 28 held for
review (15 of those CRT interior, which `wall_off_crt.py` leaves anonymous anyway).

Held pairs are adjudicated in `annotations/nocturne.exe/tu_anchor_reviewed.json`
(`accept`/`reject` + the reasoning), so a verdict reached by reading two bodies is
recorded rather than re-derived. `isVisibleWithCamera` also needs an `approve` row in
`name_transfer_ledger.json` because its `shape=size_mismatch` is a weak shape the
applier would otherwise skip — and here the size gap *is* the finding.

**Applied to the Ghidra DB 2026-09-02** (snapshot
`projects/NocturneEdit_2026_09_02_pre-tu-anchor-transfer.gar` first): 134 nocturne
functions changed — 112 name+signature, 13 signature-only, 8 name-only, 1 name+conv.
`CDemonSet::renderScene`, `renderGogglesView`, `renderEnvMapTriangles`,
`setupMirrorRendering` and `CBoundingBox3D::isVisibleWithCamera` all carry real names
now, verified by reading the saved program back.

That needed one new opt-in flag on `apply_sibling_annotations.py`:
`--upgrade-class-only`. 153 of the 208 `SKIP_NAMED` rows were not name disagreements at
all — nocturne held a bare **class** with no method (`core_set.cpp_CDemonSet_FUN_...`)
from an earlier transfer that could only recover the class, and nocedit offered that
same class *plus* a method. Extending `CDemonSet` to `CDemonSet_renderScene` strictly
adds information and cannot rename anything. The flag is opt-in so the default gate is
unchanged, and it only fires on an exact `<class>_` extension: the other 55 rows (39 a
different class, 16 a method already present) still skip.

**Independently validated:** `validate_sibling_mapping.py` scores the regenerated
mapping (5209 pairs) against `__FILE__`/`__LINE__` pins, which neither the matcher nor
`diff_functions.py` ever looks at: **515 scoreable, 0 conflicts**. Restricted to the 158
new pairs: 11 pinned, 11 agree, 0 conflicts.

---


## Background: the mirror *pipeline* is not where the difference lives

`core/mirror.cpp` and the `core/set.cpp` mirror driver are byte-identical
(reloc-masked, cave-excluded) between the two binaries — so the difference is NOT in the
mirror pipeline itself. It is in the actor **visibility gate**, one level up (see the
root cause above). Confirmed on screen: nocedit.exe under Wine reflects the room and the
character's flare in the same mirror, but not the opaque model; retail reflects all three.

Reproduce:

```
python3 scripts/Python/make_sibling_anchors.py --out /tmp/anchors.json
python3 scripts/Python/diff_functions.py nocedit.exe nocturne.exe /tmp/anchors.json \
    --funcs-a annotations/nocedit.exe/functions \
    --funcs-b annotations/nocturne.exe/functions --json /tmp/sibdiff.json
```

`core/mirror.cpp` — every function `identical` except one:

| function | class | d |
|---|---|---|
| `setupMirrorReflection` (3632 B) | identical | 0.000 |
| `setupMirrorCamera`, `applyMirrorTransform`, `setupCorners` | identical | 0.000 |
| `renderMirrorQuad`, `renderMirrorQuadDepth`, `renderMirroredPrimitive` | identical | 0.000 |
| `clipPolygonAgainstPlane`, `computePlaneFromTriangle`, `computePlaneIntersection` | identical | 0.000 |
| `transformMirrorVertex`, `transformMirrorEdgeToIntegerSpace` | identical | 0.000 |
| `clipAndRenderReflectedPrimitive`, `renderReflectedPrimitive` | identical | 0.000 |
| `reflectAndClipPrimitive` | logic-change | 0.122 |

`clipAndRenderReflectedPrimitive` / `renderReflectedPrimitive` are unnamed in the
nocturne export (`CMirror_FUN_004d76e0` / `CMirror_FUN_004d7720`); pair them manually.
The `_FUN_` names in `annotations/nocturne.exe/` are transferred, and most globals are
still `DAT_`, so **never diff the pseudocode** — `diff_functions.py` reads raw PE bytes,
which is the only trustworthy oracle here.

`core/set.cpp` mirror driver:

| function | class | d | note |
|---|---|---|---|
| `renderOpaqueActors`, `renderTransparentActors`, `renderStaticLights` | layout-drift | 0.000 | struct offsets only |
| `restoreCameraAfterMirror`, `markMirrorCameraDirty`, `renderSinglePrimitive` | layout-drift | 0.000 | |
| `cacheMirrorLighting` | layout-drift | 0.000 | |
| `setupMirrorRendering` | logic-change | 0.019 | see below |
| `buildMirrorList` | logic-change | 0.036 | see below |
| `renderPrimitiveList` / `renderTexturedPrimitiveListVariant` | logic-change | 0.105 | see below |

### Every non-zero diff on the path, explained — all benign

* **`setupMirrorRendering`** (272 B both): nocedit dispatches `saveAlphaTransform`
  through the camera vtable (`call [edx+0x10]`), retail calls it directly
  (`call 0x4477f0`). Editor virtualises `CDemonCamera`; same call.
* **`buildMirrorList`** (236 vs 240 B): retail's `getBoundingBox` vtable slot takes a
  third argument (`push 0`). Signature drift between versions.
* **`renderPrimitiveList` / `...Variant`** (124 vs 159 B): retail adds a tail
  `if (g_something) call 0x532b30;` after both loops. Retail-only hook, not a gate —
  both loops are identical.
* **`engine/clipper.c clipAndRasterize`** (73 vs 2716 B — looks alarming in the report):
  **inlining only.** nocedit's is a 28-insn dispatcher that *calls*
  `clipPolygonToViewFrustum`; retail inlined that whole function into it and *also*
  keeps the standalone copy at `0x432210`. Same semantics. DON'T RE-CHASE.
* **`reflectAndClipPrimitive`** (591 vs 575 B, d=0.122): the largest genuine drift in
  `mirror.cpp`; not yet decoded, but it only serves the *static-geometry* reflection
  path (see below), which already works.

**Conclusion: the defect is in our reconstruction, not in a build flag.**

## Architecture: actors and static geometry reflect by two DIFFERENT mechanisms

This is the key structural fact for the hunt, and it matches the symptom exactly
(room/env reflects, actors do not).

**Static/primitive geometry — uses the `CMirror` clipper.** Only three functions ever
call into `CMirror`, all in `core/set.cpp`, all gated on
`g_CDemonRendererPtr2->advanced_culling_enabled`:

```
renderPrimitiveList              -> CMirror::clipAndRenderReflectedPrimitive
renderTexturedPrimitiveListVariant -> CMirror::renderMirroredPrimitive
renderSinglePrimitive            -> CMirror::renderReflectedPrimitive
                                      \-> all three funnel into reflectAndClipPrimitive
```

**Character actors — never touch `CMirror` at all.** `renderOpaqueActors` re-renders the
actor with the mirrored camera installed:

```
renderOpaqueActors
  enableFaceCapture(1)                       ; g_VertexProcessingEnabled = 1
  for i in 0..mirror_glass_actor_count-1:
      setupMirrorRendering(this, i, 0)       ; saves camera, installs mirror reflection,
                                             ; enableAdvancedCulling(1), setAlphaMask(i+1)
      actor->renderOpaque()                  ; <-- second full render, mirrored camera
      enableFaceCapture(1)
      restoreCameraAfterMirror(this)
```

and inside that second render the geometry goes:

```
CCharacter::renderOpaque
  -> CBoundingBox3D::isVisible          <-- CULL GATE (returns early if false)
  -> renderCharacter -> CDeformableModelInstance::renderWithOptions
     -> renderPolygons -> CDeformableModel::renderParts
        -> CDemonSet::renderFaceListOrEnvMap
           -> CDemonRenderer::renderFaceList
              (face_capture_enabled != 0)  -> renderTexturedFace  (per face)
                 -> clipAndFillPoly
                    (face_capture_enabled != 0) -> clipAndRasterize
                       (g_VertexProcessingEnabled != 0)
                          -> clipPolygonToViewFrustum -> renderPolygonSoftware
```

So a reflected actor is confined to the mirror **by the camera + frustum that
`setupMirrorReflection` installs**, not by `CMirror`'s polygon clipper. Anything that
breaks the mirror camera/frustum kills actor reflections while leaving the static
reflection (which carries its own explicit `CMirror` clip planes) looking fine.

## Reconstruction liability on the actor path

18 of the 24 functions on that chain are `.keep` reconstructions:

```
KEEP  set.cpp        renderOpaqueActors, setupMirrorRendering, buildMirrorList,
                     renderPrimitiveList
KEEP  mirror.cpp     setupMirrorReflection, reflectAndClipPrimitive,
                     renderMirroredPrimitive, clipPolygonAgainstPlane,
                     transformMirrorVertex, transformMirrorEdgeToIntegerSpace
KEEP  drender.cpp    renderFaceList, renderTexturedFace
KEEP  clipper.c      clipPolygonToViewFrustum, clipPolygonToViewport
KEEP  skeleton.cpp   renderParts
KEEP  box.cpp        CBoundingBox3D::isVisible
 --   set.cpp        restoreCameraAfterMirror, renderFaceListOrEnvMap,
                     renderTexturedPrimitiveListVariant, renderSinglePrimitive
 --   mirror.cpp     clipAndRenderReflectedPrimitive, renderReflectedPrimitive
 --   drender.cpp    clipAndFillPoly
 --   clipper.c      clipAndRasterize
```

## Already verified against asm — DON'T RE-CHASE

* **`setupMirrorReflection`'s 4-matrix chain.** The `.keep` reconstructs a §20 dropped
  cave-copy chain that Ghidra emitted with uninitialised locals. Hand-traced
  `0x52188c..0x5219a2` with an esp tracker; the four `rep movsd` (12 dwords = one
  `CMatrix3x4f`) copies are `local_234=local_264`, `local_3b4=local_204`,
  `local_1d4=local_2f4`, `local_474=local_414`, `local_384=local_444`, and the
  `__stack2_esi` argument order (arg1 = caller `[esp+0]`, arg2 = `[esp+4]`,
  out = `ESI`) yields exactly:

  ```
  multiply(local_3e4, local_2c4, local_2f4);
  multiply(local_2f4, local_354, local_414);
  multiply(local_414, local_204, local_444);
  multiply(local_444, local_264, local_294);   // -> mirror_transform_matrix
  ```

  i.e. `A·B·F·B⁻¹·A⁻¹`. **The `.keep` is correct.**
* **`local_354.m[2].y = -1.0f` is correct**, not a field-order slip. The store is at
  frame offset +0x28 from the identity matrix's base; `CQuaternion4f` is
  `{w,x,y,z}` at `{0,4,8,c}`, so `0x28 = row 2 (0x20) + 8 = .y`. Confirmed against
  `0x521893 mov edi,0xbf800000` / `0x5218a0 mov [esp+0x1a8],edi`.

### Audited against asm and CLEARED (round 2)

All five come back **faithful**, and `test_suspects.sh` reports `clean` on every one.
DON'T RE-CHASE these.

* **`CBoundingBox3D::isVisible`** (`0x4204f0`) — the cull gate in `CCharacter::renderOpaque`.
  Traced the whole x87 sequence at `0x420523..0x420666`. Verified: the min/max midpoint
  computation and its FXCH/FMUL ordering, the `local_20 += local_14/10/c` fold at
  `0x4205f9..0x420623`, `transformAndProjectPoint(out=local_74, in=local_44)`, the
  `CMP ESI,0xfde8 / JLE` reject (`65000 < g_PerspectiveReciprocal`), and the
  face_count!=0 → `isVisibleWithShadow` branch. The `.keep`'s two edits — a §23 dead
  self-copy guard removal and `(int)g_CurrentSceneCamera` → `0` inside
  `if (g_CurrentSceneCamera == 0)` (§27) — are both exactly equivalent
  (`MOV [g_PerspectiveReciprocal], ECX` with `ECX == 0`).
  *Quirk, faithful, not a bug:* the null test is on `g_CurrentSceneCamera` but the call
  passes `&g_CDemonCameraInstance` (`PUSH 0x32758e4` at `0x420633`). That is what the
  binary does.
* **`CBoundingBox3D::isVisibleWithCamera`** (`0x420680`) — the first gate.
  `MOV DL,[EAX+0x13] / TEST DL,0x80` is bit 31 of the dword at `+0x10`, and
  `SProjectedVertex.screen_x` is at `0x10` — so the `.keep`'s
  `0 <= ...projected_vertex.screen_x` is exact. `AND EBP,[EAX+0x10]` with `EBP` seeded
  `0xff`, both paths falling through `INC ESI` at `LAB_00420703`, `CMP ESI,0x180`
  (8 × `sizeof(SRenderVertex)`) — all match. The two-index → one-index merge in the
  second loop is lockstep (`0x30` and `0xc` per iteration).
* **`clipPolygonToViewFrustum`** (`0x4366e0`) — the actor path's only clipper.
  - Trivial-reject head: `TEST CL,0xff` at `0x436762` confirms `cVar10 = (char)uVar11`
    (low byte of the accumulated outcode AND). ✓
  - **`g_ClipperCullingPointers` off-by-one is handled correctly.** The store is
    `MOV [EAX*4 + 0x825424],ECX` with `EAX` post-incremented, and the base symbol really
    is `0x825428` (`PUSH 0x825428` into `drawPolygon2` at `0x436875`; reads at
    `0x82542c`/`0x825430`). So `[iVar7 - 1]` is right — a §15 Watcom 1-based index,
    resolved properly.
  - **The `uStack_d0` / `local_cc` split is resolved correctly.** Frame layout is
    `auStack_150[32]` at `-0x150`, `uStack_d0` at `-0xd0`, `local_cc[32]` at `-0xcc`, so
    `(&uStack_d0)[i] == local_cc[i-1]`, and every use site has `i >= 1` — no negative
    index. The four clip passes ping-pong `auStack_150` (1-based) ↔ `local_cc` (0-based)
    consistently: left `z<=x`, right `x<=-z`, bottom `z<=y`, top `y<=-z`.
  - The deleted `pSVar11 = auStack_150[vertex_count]` is compensated by assigning
    `pSVar11` inside the fill loop, so the wrap-around "previous vertex" is still the
    last one. Equivalent.
  - Every collapsed unrolled copy is the right length: `sizeof(SRenderVertex)` = `0x30`
    matches the `iVar7 = 0x30` countdowns, and `count * sizeof(...)` matches
    `count*0x30 - 4` plus the separately-copied leading dword. All four buffers
    (`g_ClippedVertexBuffer`, `g_SecondaryClipVertexBuffer`, `g_ClipperTempBuffer`,
    `g_RenderVertexBuffer`) are `SRenderVertex`, so the sizes are right.
* **`renderPolygonSoftware`** (`0x552510`) — the rasterizer entry for every reflected
  actor triangle, and where software back-face culling actually happens
  (`if (g_CullingMode != 0)` → `calculateTriangleWindingOrder`; the culling test inside
  `clipPolygonToViewFrustum` is only on the *external-renderer* branch).
  The `.keep` rebuilt a scanline loop that Ghidra had fused a counter and a pointer into
  (§13). Checked against `0x552925..0x552a2c`: `EBP` = `edge_ptr`, `[ESP+0x10]` =
  `local_14`, `[ESP+0xc]` = the `y` counter; `renderScanline(EDI,ESI,EBX)` = `(local_14,
  edge_ptr, y)`; **both** edge-refresh tests are present; and the six raw
  `*(int*)(base+N) += *(int*)(base+N+4)` writes map onto
  `{8:x, 0x10:red, 0x18:u, 0x20:v, 0x28:depth, 0x30:alpha}` — the same six fields the
  `.keep` names, per `SHardwareEdge`. Statement order differs but the writes are
  independent.
* **`calculateTriangleWindingOrder`** (`0x552150`) — handles culling mode 2 (the mirror
  mode) by swapping which edge pair forms the cross product. The `.keep`'s collapse of
  the `SBORROW4` chain into a plain 64-bit `<` is the documented `sign_compare_idiom`
  reduction and is exact.

## Next candidates (untested)

1. The **alpha-mask round trip**. `setupMirrorRendering` calls
   `saveAlphaTransform(i+1)` with **no matching restore**, and sets
   `alpha_mask = (i+1) << 24`. `CCharacter::renderOpaque` reads `getAlphaMask()` to
   decide `was_rendered_opaque`. Whatever consumes that mask downstream (the scanline
   renderers / the mirror composite) is unaudited, and it is the one piece of state that
   is *only* set during a mirror pass.
2. `restoreCameraAfterMirror` (no `.keep`) and `CMirrorReflection::setupMirrorCamera` —
   what the mirror camera actually installs into `g_TransformMatrix` /
   `g_InverseMatrix` / `g_CameraOrigin*`, which is what the actor pass renders through.
3. `renderParts` / `renderFaceList` / `renderTexturedFace` `.keep`s.
4. `CMirror::reflectAndClipPrimitive` — the one genuine cross-exe drift in
   `mirror.cpp` (d=0.122). Only serves the static path, so lower priority.

## Prior state (superseded hypotheses)

See memory `mirror-room-actors-invisible-wip`. The larger bug — *every* actor in the
mirror room invisible — was fixed 2026-06-28 in
`CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800.keep.cpp`. What remains is only
the reflection in the glass.
