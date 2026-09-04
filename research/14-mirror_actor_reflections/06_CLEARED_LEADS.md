# Cleared leads and open questions

Everything here was examined against the assembly and found faithful. Re-examining any of
it is wasted effort unless new evidence contradicts the reasoning recorded with it.

## Reconstruction liability on the actor path

For orientation: 18 of the 24 functions on the reflected-actor chain are `.keep`
reconstructions, which is why so much of this investigation was spent auditing them.

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

## Cleared — mirror pipeline

* **`CMirror::reflectAndClipPrimitive`'s `d=0.122` drift is benign.** Long carried as "the
  largest genuine drift in `mirror.cpp`, not yet decoded". Decoded by diffing normalised
  instruction streams (591 B at `0x522310` against retail's 575 B at `0x4d74a0`):
  register allocation; one strength reduction (`LEA`/`SUB`/`SHL` for `index * 0x30` where
  retail uses `IMUL`); retail loading the count from a global where the editor keeps it in
  `EDI` (5 load/store pairs against 4 plus a register store); NOP padding. **Semantically
  identical.**
* **The 5 mirror clip planes are written to the correct offsets.**
  `setupMirrorReflection` builds them through field-puns off `this_ptr[1]` — a
  `CMirrorReflection *` stepped one whole struct past itself. Resolved:
  `sizeof(CMirrorReflection)` = `0x94`, and the five path offsets
  `{0x04, 0x14, 0x24, 0x34, 0x44}` give `{0x98, 0xA8, 0xB8, 0xC8, 0xD8}` — exactly
  `CMirror::clip_planes[0..4]` (base `0x98`, stride `0x10`). Correct, merely unreadable;
  since de-punned to `&mirror->clip_planes[i]`.
* **`setupMirrorReflection`'s 4-matrix chain.** The `.keep` reconstructs a dropped
  cave-copy chain that the decompiler emitted with uninitialised locals. Hand-traced
  `0x52188c..0x5219a2` with an esp tracker; the `rep movsd` copies (12 dwords = one
  `CMatrix3x4f`) are `local_234=local_264`, `local_3b4=local_204`, `local_1d4=local_2f4`,
  `local_474=local_414`, `local_384=local_444`, and the `__stack2_esi` argument order
  (arg1 = caller `[esp+0]`, arg2 = `[esp+4]`, out = `ESI`) yields exactly:

  ```
  multiply(local_3e4, local_2c4, local_2f4);
  multiply(local_2f4, local_354, local_414);
  multiply(local_414, local_204, local_444);
  multiply(local_444, local_264, local_294);   // -> mirror_transform_matrix
  ```

  i.e. `A·B·F·B⁻¹·A⁻¹`. The `.keep` is correct.
* **`local_354.m[2].y = -1.0f` is correct**, not a field-order slip. The store is at frame
  offset `+0x28` from the identity matrix's base; `CQuaternion4f` is `{w,x,y,z}` at
  `{0,4,8,c}`, so `0x28` = row 2 (`0x20`) + 8 = `.y`. Confirmed against
  `0x521893 mov edi,0xbf800000` / `0x5218a0 mov [esp+0x1a8],edi`.

## Cleared — the cull and raster path

All of the following report `clean` from `test_suspects.sh` and are faithful to the
assembly.

* **`CBoundingBox3D::isVisible`** (`0x4204f0`) — the cull gate in
  `CCharacter::renderOpaque`. The whole x87 sequence at `0x420523..0x420666` was traced:
  the min/max midpoint computation and its `FXCH`/`FMUL` ordering, the
  `local_20 += local_14/10/c` fold at `0x4205f9..0x420623`,
  `transformAndProjectPoint(out=local_74, in=local_44)`, the `CMP ESI,0xfde8 / JLE` reject
  (`65000 < g_PerspectiveReciprocal`), and the `face_count != 0` → `isVisibleWithShadow`
  branch. The `.keep`'s two edits — a dead self-copy guard removal and
  `(int)g_CurrentSceneCamera` → `0` inside `if (g_CurrentSceneCamera == 0)` — are both
  exactly equivalent (`MOV [g_PerspectiveReciprocal], ECX` with `ECX == 0`).
  *Quirk, faithful, not a bug:* the null test is on `g_CurrentSceneCamera` but the call
  passes `&g_CDemonCameraInstance` (`PUSH 0x32758e4` at `0x420633`). That is what the
  binary does.
* **`CBoundingBox3D::isVisibleWithCamera`** (`0x420680`) — the first gate.
  `MOV DL,[EAX+0x13] / TEST DL,0x80` is bit 31 of the dword at `+0x10`, and
  `SProjectedVertex.screen_x` is at `0x10`, so the `.keep`'s
  `0 <= ...projected_vertex.screen_x` is exact. `AND EBP,[EAX+0x10]` with `EBP` seeded
  `0xff`, both paths falling through `INC ESI` at `LAB_00420703`, `CMP ESI,0x180`
  (8 × `sizeof(SRenderVertex)`) — all match. The two-index → one-index merge in the second
  loop is lockstep (`0x30` and `0xc` per iteration).
* **`clipPolygonToViewFrustum`** (`0x4366e0`) — the actor path's only clipper.
  - Trivial-reject head: `TEST CL,0xff` at `0x436762` confirms `cVar10 = (char)uVar11`
    (low byte of the accumulated outcode AND).
  - `g_ClipperCullingPointers` off-by-one is handled correctly. The store is
    `MOV [EAX*4 + 0x825424],ECX` with `EAX` post-incremented, and the base symbol really is
    `0x825428` (`PUSH 0x825428` into `drawPolygon2` at `0x436875`; reads at
    `0x82542c`/`0x825430`). So `[iVar7 - 1]` is right — a Watcom 1-based index, resolved
    properly.
  - The `uStack_d0` / `local_cc` split is resolved correctly. Frame layout is
    `auStack_150[32]` at `-0x150`, `uStack_d0` at `-0xd0`, `local_cc[32]` at `-0xcc`, so
    `(&uStack_d0)[i] == local_cc[i-1]`, and every use site has `i >= 1` — no negative
    index. The four clip passes ping-pong `auStack_150` (1-based) against `local_cc`
    (0-based) consistently: left `z<=x`, right `x<=-z`, bottom `z<=y`, top `y<=-z`.
  - The deleted `pSVar11 = auStack_150[vertex_count]` is compensated by assigning
    `pSVar11` inside the fill loop, so the wrap-around "previous vertex" is still the last
    one.
  - Every collapsed unrolled copy is the right length: `sizeof(SRenderVertex)` = `0x30`
    matches the `iVar7 = 0x30` countdowns, and `count * sizeof(...)` matches
    `count*0x30 - 4` plus the separately-copied leading dword. All four buffers
    (`g_ClippedVertexBuffer`, `g_SecondaryClipVertexBuffer`, `g_ClipperTempBuffer`,
    `g_RenderVertexBuffer`) are `SRenderVertex`.
* **`renderPolygonSoftware`** (`0x552510`) — the rasterizer entry for every reflected actor
  triangle, and where software back-face culling actually happens
  (`if (g_CullingMode != 0)` → `calculateTriangleWindingOrder`; the culling test inside
  `clipPolygonToViewFrustum` is only on the external-renderer branch). The `.keep` rebuilt
  a scanline loop in which the decompiler had fused a counter and a pointer. Checked
  against `0x552925..0x552a2c`: `EBP` = `edge_ptr`, `[ESP+0x10]` = `local_14`, `[ESP+0xc]`
  = the `y` counter; `renderScanline(EDI,ESI,EBX)` = `(local_14, edge_ptr, y)`; both
  edge-refresh tests are present; and the six raw
  `*(int*)(base+N) += *(int*)(base+N+4)` writes map onto
  `{8:x, 0x10:red, 0x18:u, 0x20:v, 0x28:depth, 0x30:alpha}` — the same six fields the
  `.keep` names, per `SHardwareEdge`. Statement order differs but the writes are
  independent.
* **`calculateTriangleWindingOrder`** (`0x552150`) — handles culling mode 2 (the mirror
  mode) by swapping which edge pair forms the cross product. The `.keep`'s collapse of the
  `SBORROW4` chain into a plain 64-bit `<` is the documented sign-compare reduction and is
  exact.

## Cleared — renderer state during the box test

`setRenderingState(renderer, 1)`, which `testVisibility` calls before rasterising the
faces, already handles the mirror case:

```c
if (state_flag == 0)                             culling_mode = 0;
else if (this_ptr->advanced_culling_enabled == 0) culling_mode = 1;
else                                              culling_mode = 2;   // mirror winding
setCullingMode(culling_mode);
setPlaneCullingEnabled(this_ptr, (state_flag == 0));
```

During a mirror pass `advanced_culling_enabled` is 1, so culling mode becomes 2 (the
reversed-winding mirror mode) and plane culling is disabled — matching retail's explicit
`setPlaneCullingEnabled(0)`. Culling mode was therefore never the problem.

## Cleared — how retail tolerates the pushed actor transform

**It does not have to. The question was the wrong shape: the two builds do the box test in
different *spaces*.**

`g_InverseMatrix` is a **camera-only** inverse. It has exactly one writer,
`invertTransformMatrix` (`0x50c640`), reached only from `buildRotationMatrix` (`0x50c920`)
and `setupCameraAndProjection` (`0x48c200`) — both camera setup.
`matrixPushAndTransform` (`0x50cee0`), the actor push, writes `g_TransformMatrix`,
`g_Relative*` and `g_LightDirection*` and **never** the inverse.

That is what makes nocedit's un-projection exact, and it is deliberate rather than
accidental:

```
R_cam⁻¹ · ( R_cam · (R_actor·v + p − c) ) + c  =  R_actor·v + p     ← true world corner
```

The camera-only inverse cancels the camera and leaves the actor transform baked in, so the
corners handed to `testVisibility` are genuine world coordinates whatever is on the matrix
stack.

| | `nocedit` `0x420680` | retail `0x41d050` |
|---|---|---|
| 1 | project 8 model-local corners with the actor-pushed matrix | same |
| 2 | **un-project to world** via camera-only `g_InverseMatrix` + `g_CameraOrigin` | — |
| 3 | `testVisibility` re-projects the world corners, which **requires** a pure camera matrix in `g_TransformMatrix` | rasterise the six face quads straight from the step-1 vertices |

Retail rasterises quads `{0,4,6,2}`, `{1,3,7,5}`, … by index out of `vertex_buffer[0..7]` —
the identical face topology `testVisibility` builds. It never leaves the actor-pushed
space, so it never needs a clean matrix, so it has no swap to make. The pushed actor
transform is not something retail tolerates; it is the correct transform for model-local
corners and retail uses it end to end. The swap exists **only** to service nocedit's
world-space round trip.

**Consequence for the fix's status.** `R_cam_mirror` applied to true world corners and
`mirror_cam · R_actor` applied to model-local corners are the same points. Installing the
clean **mirror** camera state is therefore not merely "the variant that works" — it is the
unique choice that puts nocedit's re-projected vertices where retail's already are, up to
16.16 round-trip rounding. The residual deviation is structural (a captured state versus
never leaving the space), not numerical.

Established statically from the sources above; the forward half of the transform was
already confirmed numerically in `05_MEASUREMENT_AND_SOLUTION.md`.

## Open questions

1. **Do not reorder `setupRenderState` against the cull gate** — retail calls the same pair
   in the same order.
2. **The alpha-mask round trip is unaudited.** `setupMirrorRendering` calls
   `saveAlphaTransform(i+1)` with no matching restore and sets
   `alpha_mask = (i+1) << 24`. `CCharacter::renderOpaque` reads `getAlphaMask()` to decide
   `was_rendered_opaque`. Whatever consumes that mask downstream — the scanline renderers,
   the mirror composite — has never been checked, and it is the one piece of state set
   *only* during a mirror pass.
3. **The 0.5% residual**: two pairs of frames where all six faces clear all five clip
   planes but `renderSinglePrimitive` still returns 0. Consistent with correct occlusion;
   never investigated.
4. **Horizontal geometry displacement in mirror rooms under hardware acceleration.** A
   separate, still-open defect. See `07_ACCEL_DISPLACEMENT.md`.
