# Phases 3–4 — two fixes that looked correct and were not

Both attempts are recorded because each one falsified a specific belief, and the second
one narrowed the cause to a single mechanism.

Matching retail here means *changing* behaviour relative to `nocedit.exe`, so every
variant is gated by `NOCTURNE_AUTHENTIC_MIRROR_CULL` in `shims/shim_config_authentic.h`
with both paths kept in the file, per project convention.

## Attempt 1 — skip the swap unconditionally

Reasoning: retail always tests against the current camera, and the swap is a no-op
outside a mirror pass, so removing it everywhere should be inert outside mirrors and
correct inside them.

Implementation detail worth keeping: rather than skipping the calls, the swap *target*
was made conditional, because `getCameraAndViewportState` and `setupCameraAndViewport`
are exact inverses over the same 39 globals (see `01_HOW_MIRRORS_WORK.md`). Installing
the state just saved is therefore a provable no-op, and the trailing restore stays
untouched:

```c
cull_camera_state = &g_SavedCameraState;   /* instead of &g_BackgroundSavedCameraState */
setupCameraAndViewport(g_CDemonRendererPtr2, cull_camera_state);
```

**Result: the main character became invisible in the room again**, at all but a narrow
range of facings. The mirror still showed no reflection.

**What it falsified:** "the swap is a no-op outside a mirror pass". It is not.
`g_BackgroundSavedCameraState` is the *intended* target of this box test for every actor;
only during a mirror pass is it the wrong one. The swap is load-bearing everywhere.

## Attempt 2 — skip the swap only during a mirror pass

```c
cull_camera_state = &g_BackgroundSavedCameraState;
#if !NOCTURNE_AUTHENTIC_MIRROR_CULL
  if (g_CDemonSetPtr->active_mirror != (CMirror *)0x0) {
    cull_camera_state = &g_SavedCameraState;
  }
#endif
setupCameraAndViewport(g_CDemonRendererPtr2, cull_camera_state);
```

`active_mirror` is the correct predicate: it has exactly two writers —
`setupMirrorRendering` sets it, `restoreCameraAfterMirror` clears it. The looser
alternative `advanced_culling_enabled` is also driven by `CMimic::renderMirrored`.

**Result: the room render returned to normal, and the reflected model began to draw — but
only while the character faced one particular direction.** At every other facing the
reflection vanished.

**What it proved:** the camera swap is a real and necessary part of the cause, but not
the whole of it. Note that the symptom *moved with the deviation*:

| variant | angle-dependent visibility appears in |
|---|---|
| unconditional | the room |
| mirror-gated | the mirror glass |

Whatever remained was therefore downstream of "test the box against the current camera",
not a second unrelated bug. That is what made the next phase worth instrumenting rather
than guessing.

## A correction to the architecture notes

Attempt 2 also disproved a claim carried in the earlier notes: that character actors
"never touch `CMirror` at all". True of the *model* render, false of the cull gate, and
the gate is what culls them. `renderSinglePrimitive` branches on
`advanced_culling_enabled`, so during a mirror pass the box faces are clipped by
`CMirror::reflectAndClipPrimitive`. The full chain is in `01_HOW_MIRRORS_WORK.md`.

A consequence of that correction: `reflectAndClipPrimitive`'s cross-binary drift had been
filed as low priority on the grounds that it "only serves the static-geometry path". That
justification was wrong. The function was then decoded properly and found benign anyway —
see `06_CLEARED_LEADS.md` — but the reasoning that had deferred it did not hold.
