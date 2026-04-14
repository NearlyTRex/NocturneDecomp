# `g_VertexPreprocessMode` — Verified Semantics

**Date**: 2026-04-14
**Global**: `g_VertexPreprocessMode` (formerly `g_RenderStateFlag2` — renamed because it is an int-valued mode selector, not a flag/bitfield)
**Supersedes**: the `g_RenderStateFlag2` section of `NOCTURNE_RENDER_FLAGS_EQUATES.h` (inferred from call-site naming; several entries are wrong)
**Method**: exhaustive read- and write-site survey across all decompiled `.c` / `.cpp` files under `annotations/nocedit.exe/pseudocode/`

---

## TL;DR

`g_VertexPreprocessMode` is a single-int **vertex-preprocessing mode selector** read by four distinct dispatch sites. It is not a bitfield. Of the seven values the engine writes (0–6), **five are live** (0, 1, 2, 3, 5, 6) and **one is dead** (4 — written by two API-layer call sites but no dispatcher has a `case 4:` and no comparison reads 4).

The names in the current `NOCTURNE_RENDER_FLAGS_EQUATES.h` are **directionally right for 0/3/6**, **partly misleading for 1/5**, and **wrong for 4**.

---

## Dispatch map (ground truth)

### Reader 1 — polygon-level switch (three identical copies)

In `engine/prim.c` — `renderPolygonSoftware_FUN_00552510.c:90`, `renderScanlinePolygon_FUN_00553470.c:88`, `renderIndexedPolygonAdvanced_FUN_00553b10.c:75`:

```c
switch (g_VertexPreprocessMode) {
  case 1: prepareDepthBuffer(vertices, n);       break;   // engine/prim.c:00551fb0
  case 2: normalizeTextureCoords(vertices, n);   break;   // engine/prim.c:00552020
  case 3: adjustNearPlaneTextureCoords(v, n);    break;   // engine/prim.c:005520a0
  case 5: normalizeTextureCoords(vertices, n);   break;   // ← same fn as case 2
  case 6: replaceWWithDepth(vertices, n);        break;   // engine/prim.c:00552110
  // no case 4, no default
}
```

Takeaway: from the polygon dispatcher's view, **cases 2 and 5 call the same preprocessing function**. What differentiates them is what happens downstream at the scanline level (Reader 4).

### Reader 2 — triangle-level branch

In `engine/drender.cpp/renderTriangleSimple_FUN_004839f0.cpp:50` and `engine/3d.c/rasterizeTriangle_FUN_005fcfc0.c:69`:

```c
if (g_VertexPreprocessMode != 0) {
  if ((uint)g_VertexPreprocessMode < 2) {        // i.e. == 1
    foreach v: prepareDepthBuffer(v, 1);
  }
  else if (g_VertexPreprocessMode == 6) {
    foreach v: replaceWWithDepth(v, 1);
  }
  // values 2, 3, 4, 5 silently fall through (no preprocessing)
}
```

Takeaway: the triangle-level path only recognizes **1** and **6**. It treats 2, 3, 4, 5 as no-op at this stage — any UV normalization has to come from the polygon-level switch above.

### Reader 3 — edge-setup w-gradient selector

In `engine/prim.c/setupSoftwareEdgeWithZMode_FUN_00551d60.c:89`, `setupColoredSoftwareEdge_FUN_00553190.c:89`, `renderIndexedPolygonSoftware_FUN_00552a40.c:153`, `renderIndexedPolygonAdvanced_FUN_00553b10.c:212`:

```c
if (g_VertexPreprocessMode == 1) {
  // perspective w-gradient: use inv_z (or 2^31 - transformed_z on g_ProcessorType path)
} else {
  // affine w-gradient: straight transformed_z
}
```

Takeaway: value **1** means "use inverse-Z interpolation for w." All other values use linear Z.

### Reader 4 — scanline U/V perspective divide

In `wincore/windll.cpp` — all four scanline renderers (`renderMMXPerspectiveScanline16/32`, `renderPerspectiveCorrectScanline16/32`):

```c
if (g_VertexPreprocessMode == 5) {
  // per-span: startU = u / w; deltaU = d(u/w)/dx  (true perspective-correct texture)
} else {
  // affine u,v (no per-pixel divide)
}
```

Takeaway: value **5** is the *only* value that enables per-scanline perspective-correct U/V division. This is what actually distinguishes 5 from 2 at the pixel level — both normalize UVs upstream, but only 5 gets true perspective correction in the rasterizer.

---

## Writer map

Observed constant writes across the codebase (plus one parameter pass-through in `renderPolygonAPIAdaptivePreprocessing*`):

| Value | Writer files (count) | Notes |
|---|---|---|
| 0 | ~30 sites | "reset" after every render op |
| 1 | 9 sites in `engine/3d.c` | API-layer depth-prep / perspective-correct polygon entry points |
| 2 | 2 sites in `engine/3d.c` | `renderPolygonTextureNormalizedLit`, `renderPolygonVertexLitNormalized` |
| 3 | 2 sites | `CDemonRenderer_renderTexturedLitNearPlane`, `engine/3d.c/renderPrimitiveAdaptivePlaneMasked` |
| **4** | 2 sites in `engine/3d.c` | `renderPolygonEnginePlaneMaskedEffect`, `renderPolygonSpecialEffectsPlaneMasked` — **writes ignored by every reader** |
| 5 | 2 sites in `engine/3d.c` | Conditional paths in `renderPolygonAPIAdaptivePreprocessing[WithUV]` |
| 6 | ~30 sites | Dominant mode for all `CDemonRenderer_render*` paths |

One write that initially looked dynamic (`g_VertexPreprocessMode = iVar4` in `CDemonRenderer_renderFaceList_FUN_0048d170.cpp:93`) is a zero-write in disguise — `iVar4` is set to 0 immediately before and never reassigned in the loop body. Similarly `g_VertexPreprocessMode = g_RenderStateFlags.dword` in `CDemonRenderer_renderTriangleFacetList_FUN_0048cf00.cpp:98` runs right after `g_RenderStateFlags.dword = 0;` on the line above, so it's also effectively zero.

---

## Per-value verdict

| Value | Current equate name | Actual behavior | Verdict |
|---|---|---|---|
| **0** | `PREPROCESS_NONE` | No preprocessing; straight affine path | ✅ **Keep** |
| **1** | `PREPROCESS_DEPTH_BUFFER_PREP` | `prepareDepthBuffer` per vertex **AND** inv-Z w-gradient in edge setup | ⚠️ **Rename** — the depth-buffer-prep framing is only half the story; this is really "Z-only pass with perspective w." Suggested: `PREPROCESS_Z_PASS_INVW` or `PREPROCESS_DEPTH_PREP_INVZ` |
| **2** | `PREPROCESS_TEXTURE_COORD_NORMALIZE` | `normalizeTextureCoords` per vertex; affine rasterize | ✅ **Keep** |
| **3** | `PREPROCESS_NEAR_PLANE_CORRECT` | `adjustNearPlaneTextureCoords` per vertex | ✅ **Keep** |
| **4** | `PREPROCESS_PRIMITIVE_SPECIAL` | **Dead.** Written by 2 API-layer functions; no reader has `case 4` and no comparison checks for 4. Functionally identical to value 0 at dispatch time. | ❌ **Remove** — replace the two writer sites with `PREPROCESS_NONE` (equivalent behavior) or investigate whether those two functions are meant to use a different value (possible engine bug). Document the equate as `PREPROCESS_UNHANDLED_4 /* dead — no dispatch handles this */` if you want to preserve the literal. |
| **5** | `PREPROCESS_TEXTURE_NORMALIZE_ALT` | `normalizeTextureCoords` per vertex **AND** enables per-scanline U/W, V/W perspective-correct divide | ⚠️ **Rename** — not "alternative normalization." It's value 2 + perspective-correct scanline. Suggested: `PREPROCESS_PERSPECTIVE_TEXTURE` or `PREPROCESS_TEXNORM_PERSPCORRECT` |
| **6** | `PREPROCESS_W_DEPTH_REPLACEMENT` | `replaceWWithDepth` per vertex | ✅ **Keep**. The old doc's claim that this is "the engine's native precision mode for CDemonRenderer" is borne out by the writer map — nearly every `CDemonRenderer_render*` path sets it. |

---

## Recommended equate file changes

Minimal diff vs `NOCTURNE_RENDER_FLAGS_EQUATES.h`:

```diff
-// g_RenderStateFlag2 - Vertex Preprocessing Control
+// g_VertexPreprocessMode - Vertex Preprocessing Mode Selector (int-valued enum, not a bitfield)

-#define PREPROCESS_DEPTH_BUFFER_PREP       1
+#define PREPROCESS_Z_PASS_INVW             1  // Z-only vertex prep + inverse-Z w-gradient

-#define PREPROCESS_PRIMITIVE_SPECIAL       4
+// Value 4 is written by two API-layer functions but no dispatcher handles it.
+// Functionally equivalent to PREPROCESS_NONE. Kept as a literal for round-trip
+// fidelity; do not add new writes of this value.
+#define PREPROCESS_UNHANDLED_4             4

-#define PREPROCESS_TEXTURE_NORMALIZE_ALT   5
+#define PREPROCESS_PERSPECTIVE_TEXTURE     5  // UV normalize + perspective-correct scanline U/V divide

-#define PREPROCESS_W_DEPTH_REPLACEMENT     6
-#define PREPROCESS_CORE_ENGINE_PRECISION 6    // duplicate alias — remove
+#define PREPROCESS_W_DEPTH_REPLACEMENT     6  // replaceWWithDepth; dominant mode for CDemonRenderer paths
```

Also drop the old doc's "Vertex Preprocessing Control" section header comment about seven modes — it's six live modes and one stub. And the "AUTOMATIC ASSIGNMENT" block claiming `g_VertexPreprocessMode` is auto-set from `alpha_blend_flags` is not borne out by any write site in the current decompile; remove or rewrite after checking git blame on that doc.

---

## Global rename

The old name `g_RenderStateFlag2` was a misnomer on two axes:
1. **"Flag"** implied a bitfield — but this is an int-valued enum where 6/7 values map 1:1 to a vertex-prep function plus downstream w/scanline coupling.
2. **"State2"** implied a relationship with `g_RenderStateFlags` (the sibling bitmask) — but the two globals are independent: `g_RenderStateFlags` holds feature bits read by the scanline renderer, while this one picks a preprocessing mode before rasterization.

The new name `g_VertexPreprocessMode` matches the `PREPROCESS_*` equate prefix and correctly signals "pick one of N modes" rather than "test bits." Secondary effects on w-gradient (value 1) and scanline perspective divide (value 5) are documented on the equates themselves.

---

## Residual questions

1. **Why does value 4 exist?** Two API functions set it. They then call `clipAndRasterize`, which walks through `renderPolygonSoftware`'s switch — which has no case 4. Either (a) this is an engine bug (developer typo that should have been 1 or 3), (b) a removed feature whose dispatch was deleted but writers were not, or (c) case 4 lives in a function I haven't found. A quick Ghidra xref audit on the constant `4` loaded into `[g_VertexPreprocessMode]` would settle it. Low priority — the shipping engine behavior is "no-op."

2. **Is case 2 vs case 5 the only UV normalization distinction?** At dispatch both call `normalizeTextureCoords`. The runtime difference is entirely in the scanline renderer's `== 5` branch. If you ever retire value 2 from writers and always use 5, the only behavior change is enabling perspective-correct scanline UV — which is probably desirable. This might be worth a separate investigation.
