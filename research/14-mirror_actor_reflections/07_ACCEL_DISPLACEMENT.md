# Horizontal geometry displacement in mirror rooms under acceleration — DIAGNOSED

A separate defect from the reflection cull, with nothing to do with
`NOCTURNE_AUTHENTIC_MIRROR_CULL`. Diagnosed live; not yet fixed.

## The symptom

- Doors and walls on the **left and right** of the screen do not line up with where the
  pre-rendered backdrop paints them. The centre of the screen is fine.
- **Collision is unaffected** — you walk "through" a painted wall because the picture is
  wrong, not the world.
- **The mirror itself looks correct.**
- **Only mirror rooms**, and within them only **some camera angles**.
- **Only with the external renderer active.**

## CONFIRMED cause

`CDemonSet::setCameraView` (`0x56ae50`) builds a camera angle. In accelerated mode it
renders the room's static geometry **twice**, and the second call inherits a projection
matrix that the first call's mirror loop destroyed:

```c
beginBackgroundScene(camera);              // forces g_UseExternalRenderer = 0
buildDisplayList(this, 0x10);
renderSceneGeometry(this, 9999.9, 1);      // PASS 1 (ext=0) — the backdrop.
                                           //   runs buildMirrorList + the mirror loop,
                                           //   whose restoreCameraAfterMirror re-bakes
                                           //   g_TransformMatrix at the DEFAULT FOV 18
...
loadImage(camera, "<name>.raw");           // the pre-rendered backdrop art
endBackgroundScene(camera, 0);             // restores g_UseExternalRenderer
if (g_UseExternalRenderer != 0) {
    renderSceneGeometry(this, 9999.9, 0);  // PASS 2 (ext=1) — accelerated geometry.
                                           //   nothing re-established the scene
                                           //   projection, so it draws through the
                                           //   clobbered FOV-18 matrix
}
```

`setupCameraAndProjection` scales `g_TransformMatrix` column 0 by
`0x100000000 / g_ProjectionScale` and column 1 by the clip aspect over the same scale;
column 2 is untouched. The room camera's scale is `49152` (FOV 24, column-0 norm
**87381**); the default is `65536` (FOV 18, norm **65535**). The ratio is exactly **4/3** —
a pure horizontal-and-vertical zoom about the screen centre, which is why the error is
invisible in the middle and grows toward the left and right edges.

`restoreCameraAfterMirror` gets it wrong because it does not restore the saved
`SCameraViewportState`. It rebuilds the camera from three loose globals, and
`g_SavedProjectionFactor` is captured by `setupMirrorRendering` as
`calculateProjectionFactor()` — a function of the **live** `g_ProjectionScale`, which
during room setup is still the default rather than the value the scene matrix was baked
with.

Because `setCameraView` runs **once per camera angle**, the wrong matrix is baked into the
accelerated static geometry permanently for that angle. It never self-corrects.

## The measurements

Live gdb, `mirror_accel_projection_probe.gdb`, in the same room and at the same camera
angles. `col0` is `(m[0].x, m[1].x, m[2].x)`.

**Accelerated — the angle where the mirror is visible (`mirrors=1`):**

```
[SCN ext=0] pscale=65536 rot=(5489,0,16261) col0=(1023, 0, -87375)   |col0| ~ 87381   correct
   [bake tag=4 ext=0] pscale=65536      <- setupMirrorRendering
   [bake tag=1 ext=0] pscale=65536      <- restoreCameraAfterMirror: the clobber
[SCN ext=1] pscale=49152 rot=(5489,0,16261) col0=( 772, 0, -65531)   |col0| ~ 65535   3/4
```

Columns 0 and 1 are uniformly `3/4` of the backdrop pass's; column 2 is byte-identical
(`56663/-32920/664` against `56664/-32918/668`), exactly as the bake's column scaling
predicts.

**Accelerated — an angle where the mirror is not visible (`mirrors=0`):**

```
[SCN ext=0] rot=(9035,0,16372) col0=(96, 0, -87382)
   (no bakes between the passes)
[SCN ext=1] rot=(9035,0,16372) col0=(96, 0, -87382)     identical -> renders correctly
```

**Software control — same room, same camera angle:**

```
[SCN ext=0] pscale=65536 rot=(5489,0,16261) col0=(1023, 0, -87375)   the ONLY pass
   [bake tag=1 ext=0] pscale=65536 -> (-668, 0, -65532)    same clobber occurs
   ...
   [bake tag=4 ext=0] pscale=49152 -> (1029, 0, -87375)    pscale converges
   [bake tag=1 ext=0] pscale=49152 -> (-891, 0, -87376)    restore now exact, stable
```

Two differences carry the whole result: software issues **one** geometry pass, not two, so
nothing inherits the clobber; and once `g_ProjectionScale` converges to `49152` the mirror
save/restore round trip is exact. The defect is a room-setup transient that only the
accel-only second pass can capture and freeze.

## Fix candidates (none applied yet)

1. **Restore the state instead of rebuilding it.** Have `setupMirrorRendering` /
   `restoreCameraAfterMirror` use `getCameraAndViewportState` / `setupCameraAndViewport`
   (all 21 fields) rather than the origin/rotation/projection-factor triple. Smallest
   conceptual change, fixes the root cause, but deviates from the shipped code.
2. **Re-establish the scene camera between the two passes** in `setCameraView`, before the
   `if (g_UseExternalRenderer != 0)` geometry pass. Most targeted; leaves the mirror code
   alone.
3. **Find why `g_ProjectionScale` is still the default at room-setup time.** The clobber is
   only harmful because the projection has not converged when `setupMirrorRendering`
   samples it. If the scene FOV is supposed to be installed before `setCameraView` reaches
   its mirror loop, that ordering is the real bug and (1)/(2) are workarounds.

Prefer (3) if the ordering turns out to be a reconstruction artefact; otherwise (2) behind
a `NOCTURNE_AUTHENTIC_*` gate per project convention.

## Established, do not re-derive

* **`projection_reciprocal` / `aspect_ratio_fixed` on `CDemonRenderer` are scratch.** They
  are written *and* read only inside `setupCameraAndProjection`. A mismatch between them
  and the live `g_ProjectionScale` is expected and harmless — do not read it as staleness.
  The state that drives rendering is `g_TransformMatrix`.
* **`buildMirrorList` is accel-gated in both binaries** (nocedit `0x56a190`, retail
  `0x50e210`: `if (g_UseExternalRenderer == 0)`) and is the only writer of
  `mirror_glass_actor_count`. `beginBackgroundScene` forces the flag to 0, which is why the
  list is nevertheless populated during pass 1. The same gate skips sky, water, terrain and
  the enviro model.
* **The camera round trip is exact where it is exact.** Origin: `getCameraOrigin` (1/256
  fixed) → float → `setCameraOriginFromScaledPoint` (×256, `ROUND`). Projection:
  `calculateProjectionFactor` / `setProjectionScale` are `(18/S)*65536` both ways, an exact
  involution — the factor is not lossy, it is merely **sampled at the wrong time**.
* **The mirror path never writes the viewport.** No `g_Clip*`, `g_Projection.*`,
  `pushViewport` or `popViewport` write exists in `core/mirror.cpp`,
  `setupMirrorRendering` or `restoreCameraAfterMirror`. The clip window is *not* the
  variable that moves; `g_ProjectionScale` is.
* **`getCameraOriginWorld` (`0x48c780`) is already fixed** in its `.keep` — the raw
  decompile has the same baked-`4769685.0` + shifted-reads artefact as
  `getCameraRotationAsRadians`, but the `.keep` restores `local_20.{x,y,z} * 0.00390625`.
* **The DLL cannot displace geometry.** `drawPolygon2` hands the external renderer vertices
  the game already projected; `buildTLVertex` (tridx7 `0x100044b0`) only scales by 1/65536.
  When `g_UseHoldBuffer != 0` it additionally rescales by `g_ScreenWidth/640` and
  `g_ScreenHeight/480` — a hardcoded 640×480 assumption, inert at the 640×480 this project
  runs at.

## Probe notes

`mirror_accel_projection_probe.gdb` alongside this file. Two traps worth remembering:

* **Never name a gdb convenience variable `$bl`, `$bh`, `$bx`, `$bp`, `$sp`, `$si`, `$di`
  or `$ps`** — on x86 those are *registers*. `set $bl = X` inside a breakpoint command
  writes the running program's BL register on every hit, so the comparison never holds and
  the inferior is being corrupted while it runs.
* **Do not use `\` line continuations inside an `if` nested in a `commands` block.** The
  block nesting breaks and the body runs unconditionally. Put the `printf` on one line.
