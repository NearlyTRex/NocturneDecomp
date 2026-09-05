# Svetlana's blades — black garbage on the sphere-mapped overlay

Black artefacts on Svetlana's blades, worst around the handles, tracking the lighting.
Present in retail. **Not fixed**, but the mechanism is now identified and most of the
search space is closed.

## CONFIRMED

**The blade's env-map overlay draws 18% of its triangles from two different sphere maps
at once.** `renderEnvMapTriangles` chooses each vertex's UV source independently:

```c
if ((skip_normal_normalization == 0) ||
    (1.0 <= ABS(g_VertexNormalArray[i].x)) ||
    (1.0 <= ABS(g_VertexNormalArray[i].y)) ||
    (1.0 <= ABS(g_VertexNormalArray[i].z))) {
    // A: the bone normal, already scaled to +/-0xFFFF
} else {
    // B: the normalised eye-to-vertex direction
}
```

A and B are unrelated directions, so a triangle with a mix of them interpolates across an
arbitrary span of the env map. Measured over the full face list, stable on every sampled
draw:

| all-B | all-A | mixed (1A) | mixed (2A) |
|---|---|---|---|
| 56 | 8 | 8 | 6 |

**14 of 78 triangles are mixed.** The set is bit-stable frame to frame, so the bad patch is
fixed geometry; what changes is the content its UVs sweep as the animation rotates the
normals.

**The branch is faithful to the binary.** `MOV EDX,0x33081cc; ADD EDX,ECX` is plain 0-based
`base + index*12` — no Watcom 1-based offset (§15 does not apply here despite
`g_VertexNormalArray` being that section's canonical example). The four exits are
`TEST EBX,EBX; JZ 0x5706c3` and three `FABS; FLD1; FCOMPP; JBE 0x5706c3`, matching the `||`
chain exactly.

**The vertices that take branch B are never lit — the two face lists disagree.**
`lightVerticies` memsets `vertex_count` entries and then accumulates face normals
**unconditionally** — every face adds into all 3 (or 4) of its vertices, nothing is skipped.
So a slot reads exactly 0.0 only if no face references it, or its face normals sum to zero.
Measured, on the covering call (`vertex_count=538`, `tri_count=1208`, triangles):

```
0 of its 1208 faces touch vertices 496 / 510 / 511 / 529
vertex 496 face-normal sum = (0, 0, 0)     -- trivially, there was nothing to sum
live contrast, vertex 509  = (24262.8, -53461.9, -15574.7)
```

**Not cancellation — never referenced.** And the env pass does render them:

```
[ENV faces=76] uses of dead verts: 496 x0, 510 x0, 511 x0, 529 x0
               vertex refs with NO normal: 28 of 228   (with a normal: 200)
[ENV faces=78] uses of dead verts: 496 x4, 510 x4, 511 x4, 529 x2
               vertex refs with NO normal: 18 of 234   (with a normal: 216)
```

So **8-12% of the env pass's vertex references have no normal**, because the list it renders
is not the list that was lit — the body is lit at `lod_index=2` while the env pass draws
`part_indices[0..1]`. Those vertices fall to branch B while their triangle-mates use branch
A, and that is what produces the 14 mixed triangles. The zero set changes between draws
(76-face vs 78-face) and between LOD switches, which is the flickering fringe.

An earlier reading of this proposed normal *cancellation* on a welded double-sided blade.
**Disproved** — the faces that would have cancelled do not exist in the lighting list at all.

**The env map is legitimately near-black.** `g_EnvMapTexture` is a static initialiser,
`"BACKGND.RAW"`, never written anywhere in the codebase — the env map is hardcoded to the
room's own backdrop. Decoded from the live texture cache (256x256, no opacity map):

| pure black (palette index 0) | luma < 32 | luma > 64 | mean luma | brightest texel used |
|---|---|---|---|---|
| 38.1% | 92.2% | 0.67% | 11.4 | 125.5 |

It is a coherent, correctly-loaded night scene. So a dark blade is the *correct* result of
reflecting it, and the 38.1% that are pure black hit the colorkey and punch through to the
model texture underneath. Neither of those is a defect — do not go looking for corruption
in the texture path.

## DON'T RE-CHASE — measured and dead

| lead | why it's dead |
|---|---|
| **"Software is clean, the remainder is accel-only"** | **False.** Software still shows a small oscillating artefact at the handle. Both renderers take the same emit path with the same alpha, blend mode and texture. |
| **Out-of-range vertex indices** | `idx=[495..529]` against the covering lighting pass's `vertex_count=538` — **0 of 234 indices above it**. Every index is inside the lit range. |
| **The shared scratch array being clobbered** | Nothing touches 495..529 between `lightVerticies` and the env draw. The nonzero count that leaves the lighting pass is the count the env pass reads, every frame. **Splitting `g_VertexNormalArray` would change nothing.** |
| **A float/int type pun in `lightVerticies`** | The slots hold genuine floats. The fixed-point `IMUL`/`SHRD ...,0x10` path is real in the asm but did not write them. Beware: *any* float between ~1e-3 and ~1e5 has an exponent that, read as an int over 65536, lands in 14000..18300 — "these decode to plausible 16.16 values" is circular. Check the raw hex: real floats have populated mantissas, `0x3b000000` alongside two exact zeros does not. |
| **Texture addressing / wrap mode** | 1780 emitted env vertices, **0 out of range**, u in [0, 0.9895], v in [0.068, 0.99998]. The `.keep`'s clamp runs *before* the seam fixup and makes every one of that fixup's branches unreachable, so nothing ever leaves 0..1. |
| **Mipmapping** | `mipMapFlag=0` in RENDER.INI and measured `g_MipMapFlag = g_AllowAutoMipMapping = 0`. No mip chain is built or uploaded. |
| **The hold-buffer rescale** | `buildTLVertex`'s `g_ScreenWidth/640`, `g_ScreenHeight/480` divisors are correct: the game renders 640x480 and the DLL upscales. "Worse at higher resolution" is magnification of the same defect. |
| **The DLL's UV conversion** | `out->u = (float)src->u * 5.9604645e-08` is a divide by 2^24, mapping a clamped `0..0xFFFF00` onto exactly `0..1`. Correct. |
| **The DLL texture bind** | Right texture bound for the whole draw. `captureTexture` switches `g_CurrentTextureIndex` from the part's own texture to the env map at function entry. |
| **Depth fighting between the two blade draws** | Overlay-on/overlay-off pixel diff is 97% contiguous, 3.1% isolated — not a z-fighting signature. |
| **`skip_normal_normalization` / the mixed vertex lighting** | Forcing it to 0 in both consumers leaves the artefact. |
| **`calculateSurfaceNormal`'s side effect** | Suppressing it leaves the artefact. |
| **Deciding the UV source per triangle** | Implemented, did not help, reverted. Recorded so it is not retried without new evidence. |

### Corrected: the render flags

An earlier pass concluded "render flags are not it" from a game-side reading dismissed as
stale. That was wrong in its reasoning, though the conclusion stands. The env draw really
does reach the DLL as `0x2e7`, not `0x2cd`:

| | flags | bits |
|---|---|---|
| normal draw | `0x2cd` | TEX_ENABLE, FOG_COLOR, **SOLID_ALPHA_BLEND**, DEPTH_TEST, DEPTH_WRITE, COLOR_FROM_VERTEX |
| env draw | `0x2e7` | TEX_ENABLE, **FORCE_SOLID_LOOP**, FOG_COLOR, **BLEND_READ_DEST**, DEPTH_TEST, DEPTH_WRITE, COLOR_FROM_VERTEX |

`renderDestReadBlendPoly` sets `0x2e7` explicitly; the `0x2cd` overwrite lives in
`renderAlphaBlendedPoly`, the *other* emit path. Which one runs is decided by
`alpha < 0xfde9`, and with `render_mode == 2` the alpha is `g_CurrentAlphaValue << 8`, so
the env pass always takes the dest-read path. Through `applyRenderState` this is the only
draw in the frame that enables alpha blending and the alpha test
(`ALPHAREF=0`, `ALPHAFUNC=GREATER` — the colorkey), sets `TEXTUREMAPBLEND=MODULATEALPHA`,
and turns fog off. All of that is correct for an overlay; none of it is the defect.

## Software and accelerated agree

Both take `renderDestReadBlendPoly` (measured: 11858 dest-read, 0 alpha-blended), the same
187/255 alpha, the same blend mode 0, the same 256x256 texture with no opacity map. The
software scanline's Loop A modulate-and-blend reproduces GL's `GL_MODULATE` +
`SRCALPHA`/`INVSRCALPHA` to within 1-2 LSB across the range. There is no software/accel
divergence in the blend arithmetic to look for.

## How the overlay reaches the screen

`CSvetlana::renderOpaque` draws her twice:

```c
g_CDemonSetPtr->skip_normal_normalization = 1;      // for her whole render
... CCharacter::renderOpaque(this)                  // pass 1, the normal character
if (getFaceCount() == 0 && g_PerspectiveReciprocal < 0x4000) {
    ... clear all visibility flags, set only part_indices[0] and [1] ...
    g_CGamePtr->render_mode = 2;
    setBlendMode(renderer, 0);
    setRenderAlpha(renderer, 48000);
    CCharacter::renderOpaque(this)                  // pass 2, blades only
}
g_CDemonSetPtr->skip_normal_normalization = 0;
```

`renderFaceListOrEnvMap` routes pass 2 to `renderEnvMapTriangles` — two draws per frame, 76
and 78 faces. `captureTexture` is `ensureTextureLoaded` plus capture-list bookkeeping, *not*
a framebuffer grab, and it calls `setupTexture` unconditionally, so the software path binds
the env map too.

`g_VertexNormalArray` is **shared scratch, reused by every model in the frame** and memset
per `lightVerticies` call for that model's `vertex_count` entries. Within one frame it is
written by her cloth (`vertex_count=54`, via `CCloth::render`), then a 538-vertex body pass,
then a 436-vertex one. Its two populations — accumulated +/-0xFFFF normals and memset zeros
— are what the `>= 1.0` test discriminates between.

The env-map path also runs for `CGargoyle::renderOpaque`, so this is not Svetlana-specific.
The "T2000" debug cheat renders every character env-mapped and uses the same path; it works
as designed.

## Fixed in passing

Neither is the reported artefact.

1. **Seam-fixup signedness.** The `.keep` declared the UV accumulators `uint`, making the
   first comparison of each wraparound pair unsigned. The assembly uses `JLE`/`JGE` (signed)
   at `0x570546`/`0x57055f`, and the raw decompile has `int`. With `uint`, any negative U or
   V at vertex 0 fired the fixup and added `0x10000` to another vertex. A real
   reconstruction regression; corrected to `int`.
2. **UV scale.** Both UV sources are unit directions scaled to +/-0xFFFF
   (`normalizeVector3DFloat` multiplies by 65535; a live normal measures ~64000-69000), and
   the code offset them by `0x8000` without halving, spanning about twice the texture:

   | | u | v | outside `0..0xFFFF` |
   |---|---|---|---|
   | as shipped | -34038 .. 95760 | -24285 .. 103392 | **97.0%** |
   | halved | -319 .. 65356 | 4153 .. 68123 | **1.2%** |
   | halved + clamped | 283 .. 56803 | 263 .. 15608 | **0.00%** |

   Both are behind `NOCTURNE_AUTHENTIC_ENVMAP_UV` (default 0). Note the clamp makes the seam
   fixup unreachable — that is a behaviour change worth revisiting if the fixup turns out to
   matter.

## Unrelated shim bug found and fixed

`initDefaultRenderStates` sets `D3DRENDERSTATE_TEXTUREADDRESS = 3` (CLAMP) exactly once, at
device init, before any texture exists. The GL shim dropped it (`device_SetRenderState`
returned early for state 3 with no texture bound), `setRenderStateCached` cached the pair so
it was never re-sent, and `surface_sync_texture` hardcoded `GL_REPEAT` on every texture it
created — so every texture wrapped when the DLL asked for clamping. Fixed by recording the
device-wide mode in `g_texture_wrap` and applying it on each bind, above the not-dirty
early-out. Not the cause of this artefact (no UV leaves 0..1), but wrong on its own terms.

## Remaining lead

The chain is measured end to end; what is left is *why* the two face lists differ, and what
to do about it.

**Why they differ.** The body is lit through `CDeformableModel::lightVertices(lod_index=2)`
while the env pass renders `part_indices[0..1]`. Establish whether those are different LODs
of the same mesh, and if so whether the render list or the lighting list is the one out of
step. The 76-face and 78-face draws have *different* dead sets (28 vs 18 unlit references),
so the gap is per-draw, not a single fixed omission.

**Two candidate fixes**, both of which need that answer first:

1. Light the face list the env pass actually renders, so every vertex it uses has a normal.
   Closest to intent, but it changes what `lightVerticies` is called with.
2. Give the unlit vertices a normal at the emit site instead of falling back to the eye
   direction. `renderEnvMapTriangles` already calls `calculateSurfaceNormal` on each emitted
   triangle when `skip_normal_normalization != 0` — that face normal is in the same space as
   branch A, so using it for a vertex with no accumulated normal keeps the whole blade in
   one sphere map. Cheaper and local, and it explains why the earlier per-triangle
   experiment failed: making a triangle uniformly branch-B still leaves it in the wrong
   space relative to its all-A neighbours.

Note the era context: sphere mapping driven by accumulated per-vertex normals, with a
fallback for degenerate normals, is standard 1999 practice. The `1.0 <= ABS(n)` test is a
"is this normal usable" check and the `else` is its fallback — but the fallback substitutes
an eye-to-vertex *direction* for a surface *normal*, which is a different quantity in a
different space. That mismatch is what turns an unlit vertex into a visible smear.

## Probes

| file | what it does |
|---|---|
| `blade_envmap_probe.gdb` | per-call face count, alpha, render mode, per-vertex normals and transformed positions |
| `blade_branch_probe.gdb` | counts which UV branch every vertex takes, and the largest normal component |
| `blade_uv_range_probe.gdb` | the UV range actually emitted, across **both** emit paths |
| `blade_bisect_probe.gdb` | suppresses the whole function |
| `blade_texbind_probe.gdb` | keeps `captureTexture`, suppresses only the drawing |
| `blade_flatuv_probe.gdb` | forces every emitted UV to one texel (game-side; unverified write) |
| `blade_surfnormal_probe.gdb` | suppresses `calculateSurfaceNormal` |
| `blade_lighting_probe.gdb` | forces `skip_normal_normalization = 0` in both consumers |
| `blade_overlay_diff.gdb` | alternates overlay on/off and captures frames for a pixel diff |
| `blade_index_probe.gdb` | whether the env-map faces index valid transformed vertices |
| `blade_vertexcolor_probe.gdb` | the colour, alpha and depth the emitted vertices carry |
| `blade_renderflags_probe.gdb` | the render state the accelerated draw uses (samples at entry — see the correction above) |
| `blade_forceflags_probe.gdb` | forces a textured render state for the env draw |
| `blade_texbound_probe.gdb` | which texture is bound when the env polygons are emitted |
| `blade_branch_flip_probe.gdb` | A/B split per draw — **note the sliding-window trap in Method notes** |
| `blade_stale_normal_probe.gdb` | the current face's vertex indices and their normals |
| `blade_dll_tlvertex_probe.gdb` | env vs normal draw at the DLL's `buildTLVertex` — flags, src colour, output vertex |
| `blade_dll_flatuv_probe.gdb` | flat UV forced at the DLL epilogue, with the write read back to prove it landed |
| `blade_dll_clampuv_probe.gdb` | clamps UV to 0..1 at the DLL emit (simulates CLAMP) and tallies out-of-range |
| `blade_dll_emit_probe.gdb` | the emitted vertex measured at the epilogue, where the values are real |
| `blade_sw_mode_probe.gdb` | the env pass measured in genuine software mode |
| `blade_software_envpass_probe.gdb` | forces only the env pass to software inside an accelerated process |
| `blade_software_chain_probe.gdb` | counts the software rasterisation chain poly -> clip -> scanline -> span |
| `blade_mixed_triangle_probe.gdb` | **the mixed-source triangle count** |
| `blade_fixed_index_probe.gdb` | watches fixed vertex indices across draws |
| `blade_normal_bits_probe.gdb` | the normal slots as float and as raw hex |
| `blade_normal_writer_probe.gdb` | watchpoint reporting who writes a normal slot |
| `blade_index_range_probe.gdb` | env index range vs the lighting pass's `vertex_count` |
| `blade_scratch_clobber_probe.gdb` | traces the nonzero normal population across the frame |
| `blade_zero_slots_probe.gdb` | lists which blade vertices come out of lighting unwritten |
| `blade_normal_cancel_probe.gdb` | **the faces touching the dead vertices in the covering lighting call** — one-shot, gated on those vertices being zero |
| `blade_facelist_gap_probe.gdb` | **how many of the env pass's vertex references have no normal** |
| `blade_software_pixel_probe.gdb` | **unusable as written** — per-pixel breakpoints freeze the render loop |

## Method notes

**Sample where the value is real.** Breaking at `buildTLVertex`'s *first* line reads
`out->diffuse`/`specular`/`u`/`v` left over from the previous frame's use of that
`g_VertexBuffer` slot. The values look entirely plausible and are stale. Break at the
closing brace.

**Watch the loop variable.** A breakpoint inside `renderEnvMapTriangles`' per-face loop sees
`face_data` already advanced, so `face_data[0..N]` is a sliding window. Counting over it
produces wildly varying numbers that look like temporal flicker and are purely a probe
artefact. Break at the `captureTexture` call to get the base pointer.

**`lightVerticies` computes its face normals inside itself.** The normal-computation loop
runs *before* the memset and the accumulate loop, so at function entry `surface_normal`
still holds whatever the previous user of that face buffer left — it reads as
`(0, 0, -nan)`. Sample after the accumulate loop (line 248), where the normals are computed,
the memset has run, and `g_VertexNormalArray` holds this call's result rather than the
previous call's.

**Vertex indices are per-model, so "a face touches index N" is not a model gate.** The
scratch array is shared and every model numbers its vertices from 0, so index 496 exists in
the cloth (`vertex_count=590`, quads) as much as in the body. A probe gated that way fires
on the wrong model and looks plausible. Gate on an outcome instead — the covering call is
the one that *leaves* the target vertices at zero.

**Forcing `g_UseExternalRenderer = 0` for one function is not software mode.** Bit depth,
screen buffers and palette conversion are all still accelerated, and the CPU-framebuffer
writes are discarded by the CPU/GL composite — the chain rasterises thousands of real spans
and nothing reaches the screen. Do not reason from those numbers about the software path,
and do not restore the flag unconditionally afterwards; read and restore what was there.

**Instrument every emit path.** The primitive leaves through `renderDestReadBlendPoly` or
`renderAlphaBlendedPoly` depending on `alpha`. Breaking on one of them silently reports zero
samples.

**Diff adjacent frames, not distant ones.** An overlay-on/overlay-off pair many frames apart
is dominated by the idle animation.

**Probe hygiene.** Convenience-variable names must avoid every x86 register name — `$cx` is
CX exactly as `$bl` is BL, and `set $cx = ...` writes the inferior's register instead of
creating a variable. Prefix them. No `\` line continuations inside an `if` nested in a
`commands` block. `$_old`/`$_new` do not cast to float on a watchpoint, and the failed
`printf` aborts the block before `cont`, freezing the game at the watchpoint.

**Per-pixel and per-scanline breakpoints freeze the render loop.** Instrument at function or
per-draw granularity and compute the rest offline from dumped tables.
