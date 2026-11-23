# Cloth body collision

Why character cloth (coats, capes, skirts) clips through the body wearing it, and what it would
take to stop it, cheapest option first. Why cloth never comes to rest is in
[27-cloth_motion_settling](../27-cloth_motion_settling/README.md). Any new collision shape here
should push out to the surface, not 1.05× past it, or it inherits that bounce.

Paths are relative to `annotations/nocedit.exe/pseudocode/src/core/cloth.cpp/` unless they name
another unit. **[V]** means read in the keep and checked against the asm. **[I]** means inferred
and not yet checked in game.

## STATE — read this first

**FEASIBLE.** The clipping comes from the original design, not from a decomp or 64-bit port bug.
The field offsets in `computeBoneTransform` were checked against the asm, including the code-cave
copies Ghidra dropped. The collision dot products, the 1.05 push-out factor and the fast-sqrt
constants also match. **There is no one-line fix hiding here. DON'T RE-CHASE a port bug.**

**Collision bones are elliptic cylinders with no end caps.** A vertex past either end of a bone
is never tested, so every joint has a wedge-shaped gap.

**Only vertices collide, once per frame, with no substeps.** Edges and triangles pass through
thin limbs freely.

## How it works today

### The step [V]

- `CCloth_step_FUN_0043abb0.keep.cpp` runs once per rendered character per frame. `delta_time` is
  clamped only from below, at 0.01 (line 85), so above 100 fps the cloth integrates faster than
  real time.
- The caller is `charactr.cpp/CCharacter_applyGestureLookAt_FUN_0042dfc0.cpp:25`, through
  `CClothList::process`. It applies gestures and look-at, computes the bone transforms, then
  steps the cloth. Cloth is skipped on characters that were not drawn opaque last frame, unless
  they are dying (lines 19–24).
- Integration is semi-implicit Euler. The forces are gravity, wind, and an inertial force from the
  body's change in position and yaw. Vertices are visited in height order.
- `applyConstraints` runs after each vertex integrates, then 5 more full passes (6 in total).

### applyConstraints [V]

`CCloth_applyConstraints_FUN_0043a420.keep.cpp` does three things, in this order:

1. Clamps the vertex to the floor.
2. Applies one-sided springs, which move only this vertex toward its rest lengths.
3. Collides it with each collide bone, lines 129–186:
   - Takes `axial`, the vertex's distance along the bone axis (`local_matrix` column z). The vertex
     is tested only if `0 ≤ axial ≤ child_distance`.
   - Takes the radial offsets `a` and `b`. The vertex is inside if
     `fastSqrt((a/r1)² + (b/r2)²) < 1`.
   - When it is inside, moves it to `P + M·(1.05·r1·â, 1.05·r2·b̂, axial)`. That is a purely
     radial push, never along the axis.
   - Adds the displacement × `inv_delta_time` to `secondary_velocity` and sets `body_collision`.

After all passes, `body_friction` damps the velocity of every vertex that collided. Despite its
name, `SClothVertex::collide_bone_index` is not collision: it is the editor's grab pin, which
snaps a vertex to a bone tip.

### Where the bones come from [V]

- Each `.CTH` file lists its bones by Bip01 skeleton name, with `radius1`/`radius2`, an offset,
  Euler angles and a length (`CCloth_load_FUN_00438cf0.keep.cpp`). The editor adds bones through
  `CCloth_addCollisionBone_FUN_0043c430`.
- `orientBoneToChild` points the axis at the farthest child bone, and `length > 0` overrides its
  length.
- `SClothBone` is 172 bytes; the layout is in `research/23-game_structs/structs/SClothBone.md`.

### The shipped bone sets (measured from the 25 `.CTH` files in the PODs)

| Cloth | Bones | Notes |
|---|---:|---|
| `STRCOAT` (Stranger's coat) | 13 | Thighs and calves r=0.4. Spine2 0.63/0.45. Spine1 and Spine 0.5/0.52. Pelvis 0.6/0.5, length 0.65. Head 0.25. **Upper arms and forearms r=0.1.** |
| `DOC_COAT` | 4 | Spine, Spine1 and both thighs. No pelvis, calves or arms. |
| `NB3DRS1` | legs only | |
| `Z2CLOTH` | 1 | Left thigh |
| Wing cloths | 0 | |

Most files have 1–5 bones.

## Why it clips, most likely first [I]

1. **No end caps.** Hips, knees, shoulders and the joints between spine bones have uncovered
   wedges.
2. **Few bones, and thin arm radii.** At r=0.1 the coat's arm bones are far thinner than the
   rendered sleeve.
3. **Only vertices are tested.** Coarse cloth triangles cut through thin limbs between their
   corners.
4. **No swept test.** A fast limb, or a large `dt`, carries a vertex through a cylinder in one
   step. A character that goes back on screen after being skipped gets one large inertial kick.
5. **One pass over the bones.** Pushing a vertex out of one bone can leave it inside an earlier
   bone in the list.

Ruled out: the springs pulling vertices back inside. Collision runs after the springs on each
vertex's final visit.

## Options

Every option is new behaviour and belongs behind one `NOCTURNE_AUTHENTIC_CLOTH_COLLISION` flag,
with the logic in a shim (`shims/game/cloth_collision.{h,cpp}`) and a minimal hook in the keep.
Cloth is visual only and touches no simulation state that netplay compares, so none of these
risk desyncs **[I]**. Check this against the netplay desync notes before relying on it.

### Cheap

| # | Change | Hook | Fixes | Risk |
|---|---|---|---|---|
| 1 | **Capsule end caps.** Clamp `axial` to `[0, child_distance]` and push out of the end ellipsoid (radii r1, r2, and the smaller of the two along the axis). | `applyConstraints`, the bone loop | Joint gaps (cause 1) | Low. Cloth may sit slightly further off the hips. |
| 2 | **Radius floor and inflation.** A minimum per bone (arms ≥ ~0.2) and a small global scale, applied after `inv_radius1/2` are computed. | `orientBoneToChild` / bone setup | Thin arms (cause 2) | Low. Drape gets a little stiffer; make the scale a setting. |
| 3 | **Extra collision-only passes.** One or two sweeps over every vertex against every bone, after the last constraint pass. | End of `CCloth_step` | Ordering (cause 5) | Very low. ≤800 × ≤13 tests per pass. |

These three together are one function each and need no data changes. Do them first, then judge
in game.

### Medium

| # | Change | Hook | Fixes | Notes |
|---|---|---|---|---|
| 4 | **Swept test.** Test the segment `prev_position → position` against each capsule and stop at first contact. | `applyConstraints` | Tunnelling (cause 4) | `SClothVertex::prev_position` already exists. |
| 5 | **Substeps.** Split `dt` into N steps and interpolate the bone matrices between last frame's and this frame's. | `CCloth_step` | Tunnelling, plus the >100 fps speed-up | Needs last frame's bone matrices kept per cloth. |
| 6 | **Auto bones and auto radii.** For every skeleton bone the cloth's vertices are skinned to, add a capsule if the `.CTH` lacks one, sized from the skinned body vertices' distance to the bone axis. | `CCloth_setup`, which already walks `vertex_data_ptr` | Sparse sets (cause 2) | Fixes `DOC_COAT` and friends with no hand authoring. May over-cover a loose skirt; keep a per-cloth opt-out. |

### Expensive

| # | Change | Notes |
|---|---|---|
| 7 | **Edge or triangle tests** against the capsules. | Fixes cause 3. Roughly 3× the tests, plus a response for pushing out a whole edge. |
| 8 | **Collide against the deformed body mesh.** | The most faithful option. Needs a per-frame spatial structure over the skinned body triangles, and a body that is closed and well-behaved. High cost and risk. |

### Render-only fallback

Offset each cloth vertex along its normal by a small skin thickness in `CCloth_render`. This hides
shallow clipping without changing the simulation. It pairs well with options 1–3.

## Open questions

- Does any cloth rely on hanging *inside* a body bone? Wing cloths have no bones, so they are
  safe; check the capes.
