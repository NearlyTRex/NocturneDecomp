# Phase 1 — ruling out the mirror pipeline

## Prior state

A larger, related defect was fixed earlier: *every* actor in the mirror room was
invisible, not just its reflection. That was a decompilation bug in
`CDemonRenderer::getCameraRotationAsRadians` (`engine/drender.cpp`, `0x48c800`), where
Ghidra baked the camera X-rotation into a constant and shifted the y/z reads, producing a
scrambled euler triple. The mirror is the only code path that saves the camera rotation
through that function and restores it through `setupSceneRendering`, so the corruption
reached `g_BackgroundSavedCameraState` and culled every actor in the room.

That fix left one remaining symptom: **reflections in the glass**. The room and a
character's corona reflected; the opaque model did not.

It is worth noting that the earlier bug and the one documented here funnel through the
*same global and the same function* — `g_BackgroundSavedCameraState` consumed by
`CDemonCamera::testVisibility`. That is a strong hint in hindsight.

## The pipeline is byte-identical

The first hypothesis was a reconstruction error somewhere in the mirror code. Comparing
raw PE bytes between the two binaries (reloc-masked, code caves excluded):

```bash
python3 scripts/Python/make_sibling_anchors.py --out /tmp/anchors.json
python3 scripts/Python/diff_functions.py nocedit.exe nocturne.exe /tmp/anchors.json \
    --funcs-a annotations/nocedit.exe/functions \
    --funcs-b annotations/nocturne.exe/functions --json /tmp/sibdiff.json
```

`core/mirror.cpp` — every function identical except one:

| function | class | d |
|---|---|---|
| `setupMirrorReflection` (3632 B) | identical | 0.000 |
| `setupMirrorCamera`, `applyMirrorTransform`, `setupCorners` | identical | 0.000 |
| `renderMirrorQuad`, `renderMirrorQuadDepth`, `renderMirroredPrimitive` | identical | 0.000 |
| `clipPolygonAgainstPlane`, `computePlaneFromTriangle`, `computePlaneIntersection` | identical | 0.000 |
| `transformMirrorVertex`, `transformMirrorEdgeToIntegerSpace` | identical | 0.000 |
| `clipAndRenderReflectedPrimitive`, `renderReflectedPrimitive` | identical | 0.000 |
| `reflectAndClipPrimitive` | logic-change | 0.122 |

`core/set.cpp` mirror driver:

| function | class | d | note |
|---|---|---|---|
| `renderOpaqueActors`, `renderTransparentActors`, `renderStaticLights` | layout-drift | 0.000 | struct offsets only |
| `restoreCameraAfterMirror`, `markMirrorCameraDirty`, `renderSinglePrimitive` | layout-drift | 0.000 | |
| `cacheMirrorLighting` | layout-drift | 0.000 | |
| `setupMirrorRendering` | logic-change | 0.019 | benign, below |
| `buildMirrorList` | logic-change | 0.036 | benign, below |
| `renderPrimitiveList` / `renderTexturedPrimitiveListVariant` | logic-change | 0.105 | benign, below |

### Every non-zero diff on the path, explained — all benign

* **`setupMirrorRendering`** (272 B both): the editor dispatches `saveAlphaTransform`
  through the camera vtable (`call [edx+0x10]`), retail calls it directly
  (`call 0x4477f0`). The editor virtualises `CDemonCamera`; same call.
* **`buildMirrorList`** (236 vs 240 B): retail's `getBoundingBox` vtable slot takes a
  third argument (`push 0`). Signature drift between versions.
* **`renderPrimitiveList` / `...Variant`** (124 vs 159 B): retail adds a tail
  `if (g_something) call 0x532b30;` after both loops. A retail-only hook, not a gate —
  both loops are identical.
* **`engine/clipper.c clipAndRasterize`** (73 vs 2716 B — alarming in the report):
  **inlining only.** The editor's is a 28-instruction dispatcher that *calls*
  `clipPolygonToViewFrustum`; retail inlined that whole function into it and also keeps
  the standalone copy at `0x432210`. Same semantics.
* **`reflectAndClipPrimitive`** (591 vs 575 B, `d=0.122`): the only genuine-looking drift.
  Decoded later and found benign — see `06_CLEARED_LEADS.md`.

**Conclusion of this phase: the difference is not in the mirror pipeline.** It is in the
actor visibility gate, one level up.

Note for anyone repeating this: the `_FUN_` names in `annotations/nocturne.exe/` are
transferred rather than derived, and most globals there are still `DAT_`, so **never diff
the pseudocode** between the two binaries. `diff_functions.py` reads raw PE bytes, which
is the only trustworthy oracle.

## Why the real difference stayed hidden

Several passes concluded "the mirror path is byte-identical" while a 447 B vs 1023 B
difference sat in the actor cull gate. The cause was a gap in the pairing tool:

`make_sibling_anchors.py` only pairs base names that are unique on **both** sides, so
every function still unnamed in `annotations/nocturne.exe/` was silently skipped — about
1900 of them, including `CDemonSet::renderScene` (`d=0.449`) and
`CBoundingBox3D::isVisibleWithCamera` (`d=0.738`). Neither was ever compared.

`scripts/Python/tu_anchor.py` closes the hole. Watcom emits functions in source order
within one object file, so per-TU address-sorted lists correspond; existing anchors are
fixed points, and the runs between them resolve positionally (equal length) or by a byte
size unique on each side of the run. Every candidate is then corroborated against raw PE
bytes by `diff_functions.py` — independent evidence, since the conjecture came from
layout alone.

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

Result: 188 candidates → 160 accepted (123 byte-corroborated, 36 same-function source
drift, 1 hand-adjudicated), 158 of them new, taking
`annotations/nocturne.exe/sibling_manual_pairs.json` from 274 to 432 pairs. 28 were held
for review (15 of those CRT interior, which `wall_off_crt.py` leaves anonymous anyway).

Held pairs are adjudicated in `annotations/nocturne.exe/tu_anchor_reviewed.json`
(`accept`/`reject` plus reasoning), so a verdict reached by reading two bodies is
recorded rather than re-derived. `isVisibleWithCamera` additionally needs an `approve`
row in `name_transfer_ledger.json`, because its `shape=size_mismatch` is a weak shape the
applier would otherwise skip — and here the size gap *is* the finding.

Applying the transfer to the Ghidra database changed 134 nocturne functions (112
name+signature, 13 signature-only, 8 name-only, 1 name+convention). That required one new
opt-in flag on `apply_sibling_annotations.py`: `--upgrade-class-only`. 153 of the 208
`SKIP_NAMED` rows were not name disagreements at all — nocturne held a bare class with no
method (`core_set.cpp_CDemonSet_FUN_...`) from an earlier transfer, and nocedit offered
that same class *plus* a method. Extending `CDemonSet` to `CDemonSet_renderScene` strictly
adds information and cannot rename anything. The flag is opt-in so the default gate is
unchanged, and it fires only on an exact `<class>_` extension; the other 55 rows (39 a
different class, 16 a method already present) still skip.

Independently validated: `validate_sibling_mapping.py` scores the regenerated mapping
(5209 pairs) against `__FILE__`/`__LINE__` pins, which neither the matcher nor
`diff_functions.py` ever looks at — 515 scoreable, 0 conflicts. Restricted to the 158 new
pairs: 11 pinned, 11 agree, 0 conflicts.

**Method lesson:** run `tu_anchor.py` alongside `make_sibling_anchors.py` before
concluding "no difference" between the binaries.
