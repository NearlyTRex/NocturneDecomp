# Cloth motion and settling

Why character cloth keeps moving when the character stands still, and what would let it come to
rest. The collision shapes themselves are covered in
[26-cloth_body_collision](../26-cloth_body_collision/README.md).

Paths are relative to `annotations/nocedit.exe/pseudocode/src/core/cloth.cpp/` unless they name
another unit. **[V]** means read in the keep, **[M]** means measured with `settle_sim.cpp` (below),
and **[I]** means inferred and not yet checked in game.

## STATE — read this first

**Cloth that rests against the body never settles.** In the model, a coat around a leg keeps
moving forever, about 1 cm a frame on average with jumps of 7 cm **[M]**. The same cloth with a
little clearance from the body comes fully to rest **[M]**.

**Two things in the shipped step make the fight:**

1. **The springs measure with a fast square root that reads up to 6% long.** Rest lengths were
   measured with an exact square root, so at rest every edge reads as stretched and gets pulled
   shorter. Cloth that wraps the body is pulled tight against it.
2. **Collision pushes a vertex 5% *past* the bone's surface and turns that push into outward
   velocity.** The springs pull it back in, and the cycle repeats.

Remove either one and the model settles **[M]**. The cheapest fix is to push vertices out only
to the surface, which settles the model with everything else as shipped.

**Not a port bug.** `fastSqrt` and its magic constant match the asm, and the 1.05 factor is in
the original. This is how the 1999 game behaves.

## How the step moves a vertex [V]

`CCloth_step_FUN_0043abb0.keep.cpp` runs once per frame per cloth, in the character's local frame:

1. **Locked vertices** (the collar, the waistband) are placed on the skinned skeleton. Every bone
   movement, including idle breathing and sway, moves them.
2. **Forces**, then integration. `secondary_velocity *= dampen` is applied once per frame, not per
   second. The terms are:
   - gravity (`weight`, `gravity`);
   - **wind**, from the active fog's scroll vector, only when the character faces into it;
   - **body motion**, from the change in the character's position and yaw since last frame,
     scaled by `wind_area` and `mom_inert`.
3. **`applyConstraints`** on each vertex, in height order, then five more full passes:
   - **Floor:** clamps the vertex to the floor and zeroes its vertical velocity.
   - **Springs:** these connect a vertex only to neighbours at its own height or above
     (`initializeConnections`), so the cloth is a set of hanging chains. A stretched edge is
     corrected fully. A compressed edge is corrected by `spring`, which is 0.005–0.1, so cloth
     barely resists bunching.
   - **Collision:** pushes the vertex out radially to 1.05 × the bone radius
     (see [26](../26-cloth_body_collision/README.md)).
4. **Every correction is added to the velocity** as `displacement × (1/dt)`. Over a whole frame
   this works out to velocity = (final position − last position) / dt, as in position-based
   dynamics. It also means any correction that overshoots becomes real motion next frame.
5. Vertices that touched the body have their velocity scaled by `body_friction`. Vertices that
   touched the floor are scaled by `floor_friction`.

### The fast square root [V]

`chain.cpp/fastSqrt_FUN_00431350.keep.cpp` computes `bits(x) >> 1` plus `0x1fc00000`
(`g_FastSqrtMagic`, set in `flattn.cpp/staticInit`). It is exact at powers of 4 and otherwise
reads high, by up to about 6.1%. The springs use it for every edge length. The rest lengths come
from `initializeConnections:63`, which uses the exact `SQRT`. So an edge at its true rest length
reads as stretched by 0–6%, depending on the length.

### The shipped settings (all 25 `.CTH` files)

| Setting | Version 3 files (`STRCOAT`, `DOC_COAT`, dresses…) | Version 1–2 files |
|---|---|---|
| weight, gravity | 0.125–0.5, 32 | 0.25, 32 |
| dampen (per frame) | 0.9–0.95 | 0.5 in the file, **replaced by the defaults** |
| spring | 0.0025–0.1 | 0.1 in the file, replaced |
| body / floor friction | 0.5 / 0.5 | 0.75 / 0.5, replaced |
| windArea, momInert | 0.025–0.05, 0.075–0.15 | — |

A version below 3 has all eight values replaced by the defaults in `CCloth_load:49-66`: 0.125,
32, 0.9, 0.005, 0.5, 0.5, 0.05, 0.15. This matches the asm. `GABCOAT` is version 1; the
Nosferatu cloths, the dresses and `SVETHAIR` are version 2.

## The experiment [M]

`settle_sim.cpp` replicates the step for a still body: no wind, no body motion, a fixed frame
time of 1/60 s, and `STRCOAT`'s settings. The cloth is a tube, 16 vertices around and 12 down,
hanging from a locked top row around a vertical collision cylinder, like a coat around a leg.
The cloth's radius is 0.5. Each run is 100 s; the table is the last 10 s.

| Run | Mean move per vertex per frame | Largest move | Settles? |
|---|---:|---:|---|
| As shipped, cylinder radius = cloth radius | 0.032 | 0.23 | **No** |
| Exact sqrt in the springs | 0 | 0 | Yes |
| Exact sqrt in the inside test only | 0.032 | 0.23 | No |
| Push out to 1.00 × radius instead of 1.05 | 0 | 0 | Yes |
| No collision | 0.000001 | 0.00004 | Yes |
| Cylinder 10% inside the cloth (clearance) | 0.000001 | 0.00003 | Yes |
| Exact sqrt, cylinder 10% *outside* the cloth (tight) | 0.0046 | 0.032 | No |
| Exact sqrt, frame time varying ±30% | 0.0019 | 0.0095 | No |
| As shipped at 30 fps / at 100 fps | 0.036 / 0.031 | 0.23 | No |
| As shipped, `DOC_COAT` settings (dampen 0.9, spring 0.005) | 0.032 | 0.23 | No |

Units are feet: gravity is 32 ft/s². So 0.032 is about 1 cm a frame and 0.23 is about 7 cm.

**What it shows:**

- **The motion needs cloth pressed against a bone.** Hanging clear of the body, or with no
  collision, the cloth comes to rest under every setting.
- **The fast square root presses it there.** It shortens every edge by up to 6%, so a coat
  authored at the body's surface is pulled tight onto it. With an exact square root the tube
  settles, unless the bone is wider than the cloth to begin with.
- **The 1.05 push-out turns contact into a bounce.** With the push only to the surface, even the
  shipped square root settles.
- **Frame-time variation adds a small motion of its own.** Corrections become velocity through
  `1/dt`, so a frame time that changes from frame to frame turns into jitter. Real frames do
  vary.
- Damping (`dampen`, `body_friction`) and frame rate don't stop it.

**Limits of the model:**

- It's a synthetic tube, not a real `.KFM` mesh.
- No idle animation, wind or yaw.
- The collision test is a vertical circle, not the full elliptic bone with its matrix.

It shows the mechanism, not the size of the effect on a particular coat.

## Other things that keep cloth moving [I]

- **Idle animation.** Locked vertices follow the skinned bones, so breathing and weight shifts
  shake the cloth every frame. This is intended, and it is small next to the bounce.
- **Wind from the fog.** Where a level's fog scrolls, characters facing into it get a constant
  push. Per frame, the push adds `wind × windArea` to velocity, so per second it is stronger at
  higher frame rates. A steady push alone settles. Combined with a varying frame time it
  flutters.
- **The 0.01 floor on `dt`** (step line 85). Above 100 fps each frame still advances the cloth
  0.01 s, so the cloth runs faster than real time.
- **Off screen, no step.** Cloth on a character that was not drawn opaque isn't stepped
  (`charactr.cpp/CCharacter_applyGestureLookAt_FUN_0042dfc0.cpp:19-24`). When it comes back, the
  whole gap in position and yaw arrives as one frame's body motion and kicks the cloth.

## Options

All new behaviour goes behind a `NOCTURNE_AUTHENTIC_*` flag. That could be the same flag as
[26](../26-cloth_body_collision/README.md)'s, since both touch `applyConstraints` and
`CCloth_step`. Cloth is visual only **[I]**; check that against the netplay desync notes before
relying on it.

### Cheap

| # | Change | Hook | Effect |
|---|---|---|---|
| 1 | **Push out to the surface** (1.0 × radius, or a hair over), not 1.05. | `applyConstraints`, collision | Settles the model as shipped **[M]**. |
| 2 | **Don't add the collision push to velocity outward.** Remove only the velocity component *into* the bone. | `applyConstraints`, collision | Contact stops being a bounce; standard practice. |
| 3 | **Exact square root in the springs.** | `applyConstraints`, springs | Settles the model **[M]**. Cloth hangs up to 6% longer than in the original; check a few coats. |
| 4 | **Fixed cloth timestep.** Accumulate frame time and step at a fixed 1/60 s, at most a few steps a frame. | `CCloth_step` caller | Removes the frame-time jitter, the >100 fps speed-up and the wind's frame-rate dependence. |
| 5 | **Cap the return kick.** When a cloth wasn't stepped last frame, take its position and yaw as given instead of as motion. | `CCloth_step`, body-motion terms | No jolt when a character comes back on screen. |

1 or 2 alone fixes the bounce in the model. 1 + 4 is the smallest change that also removes
frame-rate effects. 3 changes how cloth hangs, so it is a look decision.

### Medium

| # | Change | Notes |
|---|---|---|
| 6 | **Damping per second.** `dampen^(dt × 60)` instead of once per frame. | Needed with 4 left out, so cloth behaves the same at every frame rate. |
| 7 | **Sleep.** When the body and its bones are still and every vertex has moved less than ε for N frames, stop stepping until a bone, the position or the wind changes. | Hides any residual flutter. Must wake reliably, or cloth freezes mid-swing. |
| 8 | **Contact friction from the normal force.** Not the flat `body_friction` scale on any vertex that touched. | Cloth would cling to the body instead of sliding; affects the look. |

### Expensive

| # | Change | Notes |
|---|---|---|
| 9 | **Replace the solver** with a standard position-based or XPBD cloth: two-sided distance constraints, bending constraints, and velocity from (x − prev)/dt with no per-correction velocity. | Settles properly and is frame-rate independent. Every `.CTH` would need retuning, because `spring`, `dampen` and the one-sided upward-only links mean something different there. |

## Open questions

- How big is the bounce on the real meshes? Running the shipped step on `STRCOAT.KFM` with
  `STRCOAT.CTH`'s bones, offline like `settle_sim.cpp`, would measure it directly.
- Does any level's active fog have a non-zero scroll, giving its characters wind?
