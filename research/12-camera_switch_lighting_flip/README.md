# Camera-switch / alt-tab lighting flip

Two bugs shared one symptom report: "ambient lighting sometimes goes much lower or
brighter when the static camera angle changes". Bug 1 is fixed. Bug 2 is open.

> **Provenance.** The original notes for this chapter were never committed — the directory
> existed but was empty and untracked, and `research/13-accel_per_pixel_lighting` referred
> to a `research/12-` write-up that did not exist on disk. What follows is reconstructed
> from the surviving summary plus fresh measurement. Items marked *(recalled)* come from
> the summary and were **not** re-verified; everything else was measured or read from code
> directly and is safe to rely on.

## Bug 1 — camera ping-pong on focus regain. FIXED.

`CDemonSet::setCameraView` unconditionally set `previous_best_camera_index =
selected_camera_index`. `CGame::runGameSession` re-applies the *current* camera on focus
regain, so the current camera became its own previous-best, the virtual director scored it
`3.0 * 0.2 = 0.6`, and a neighbouring camera stole the view.

Faithful to the binary, so both arms are kept behind `NOCTURNE_AUTHENTIC_WINDOWS`, in two
places (verified in the current sources):

```c
// CDemonSet::setCameraView
#if NOCTURNE_AUTHENTIC_WINDOWS
  this_ptr->previous_best_camera_timer = 3.0;
#else
  if (index != this_ptr->selected_camera_index) { this_ptr->previous_best_camera_timer = 3.0; }
#endif
  ... same shape again for previous_best_camera_index ...

// CGame::runGameSession, focus regain
#if NOCTURNE_AUTHENTIC_WINDOWS
  setCameraView(g_CDemonSetPtr, g_CDemonSetPtr->selected_camera_index);
#else
  saved_pb_index = ...; saved_pb_timer = ...;
  setCameraView(g_CDemonSetPtr, g_CDemonSetPtr->selected_camera_index);
  g_CDemonSetPtr->previous_best_camera_index = saved_pb_index;
  g_CDemonSetPtr->previous_best_camera_timer = saved_pb_timer;
#endif
```

*(recalled)* Cameras 24/25 in town also legitimately differ by one baked light (`cell`
@ 0.50). That is authored content, not a bug.

## Bug 2 — lighting flips on alt-tab. OPEN.

### Symptom, as refined at the repro

Castle mission at the start, the window high in the chapel tower.

- The window's lighting **changes while the game window is unfocused**. This is *itself* a
  bug, not expected dimming — an earlier framing that treated it as normal was wrong.
- It **sometimes stays changed** after focus is regained.
- Some castle wall lighting **flickers** with it.
- Not all surfaces — specific ones. A chapel window, a body on the ground.
- Reported across every environment; far more noticeable with two game instances open for
  netplay testing, because that means constant focus changes.
- *(recalled)* Measured as bistable, mean 14.139 against 21.067.

### Why our build can show this at all

`NOCTURNE_AUTHENTIC_WINDOWS = 0` removes the shipped behaviour on focus loss. The
as-shipped pump blocks:

```c
while (true) {
    while (PeekMessageA(...)) { TranslateMessage(...); DispatchMessageA(...); }
#if NOCTURNE_AUTHENTIC_WINDOWS
    if (g_WindowActive != 0 || g_InputDisabled != 0 || g_ForceMessagePump == 0) break;
    Sleep(0x14);
#else
    break;
#endif
}
```

The same flag also disables the thread-priority drop, the video restore/minimise, and
`swapBuffers`' `g_WindowActive` present gate. So the shipped game **froze** while
unfocused; ours keeps simulating, animating and presenting. That deviation is deliberate —
it is what makes two-window netplay testing possible — but it means anything time- or
frame-dependent keeps running while you are not looking at it. Any fix here has to respect
that this is a supported configuration.

### Eliminated — measured, do not re-chase

Each of these was tested against the live repro in the castle scene.

1. **State at camera-apply time.** Across 14 consecutive applies, every one byte-identical:
   `g_ProjectionScale`, `g_TransformMatrix` columns 0 and 1, `lighting_quality_mode`,
   `mirror_lighting_cached`, `disable_directional_lighting`,
   `directional_light_ratio_enabled`. Probe: `altfocus_lighting_probe.gdb`.
2. **Per-frame lighting state.** 14 `nocturne_dump_lighting_state` dumps differed **only**
   in their timestamp line — `g_AmbientLightLevel`, `g_DynamicLightCount`,
   `g_SpotLightCount`, `g_StaticColorVector` and the entire vertex-colour gradient
   constant. Probe: `altfocus_lighting_dump.gdb`. *Caveat:* taken at `renderScene` entry,
   where `g_VertexCount` is 0, so the vertex-normal sample and magnitude histogram sections
   were empty. Those two sections remain unmeasured.
3. **Animated light filters.** `C3DSLight` carries a gobo animation
   (`filter_count` `0x11ec`, `filter_durations[32]` `0x16f4`,
   `current_filter_frame` `0x1890`, `filter_frame_elapsed` `0x1894`), and
   `setCameraView` bakes each spot light into the backdrop once per apply, so a frozen
   filter phase looked like a strong candidate. **Dead: no light in this scene has
   `filter_count > 0`** — 20 applies produced zero matching lights out of 124.
   Probe: `altfocus_filter_phase_probe.gdb`.
4. **A missed or duplicated restore.** One alt-tab produces **exactly one** apply, from
   `CGame::runGameSession`'s focus-regain block (`runGameSession.keep.cpp:374`, the
   `#else` arm). The restore is not being skipped and not running twice.
5. **`CDemonCamera::precomputeLight`'s partial struct copy.** The mirror research flagged
   an uninitialised `CVector3i` here (`.z` never written), which would have been an ideal
   source of intermittency. Already fixed: the `.keep` carries the full
   `local_64 = local_70;`.

### Eliminated — *(recalled)*, not re-verified

Ambient scalars; gamma / LUT; colour correction; buffer parity; delta-time spike; the pool
allocator. Also *(recalled)*: 22 globals proven identical in both lighting states, and a
key negative — 6 manual camera re-applies produced no flip. That last one is consistent
with what is measured above: a re-apply while focused starts from the settled state.

Separately, `research/13-accel_per_pixel_lighting` C30 suspected this bug of contaminating
its renderer A/B, then withdrew it in C31: the SW1/SW2 variation there is idle breathing
animation, not a lighting-state flip. The renderer A/B is **not** a trigger for this bug.

### Where that leaves it

The inputs to the rebuild are identical, the rebuild fires exactly once per regain, and the
output visibly differs. So the difference is either nondeterminism inside the bake —
uninitialised memory or timing — or state that none of the five probes above sampled.

Next moves, roughly in order of cost:

- Close the gap left by (2): dump lighting state at a point where `g_VertexCount != 0`, so
  the vertex-normal sample and magnitude histogram are actually populated. Breaking at
  `renderScene` entry was the wrong anchor.
- Capture the **baked backdrop itself** either side of a regain (`nocturne_dump_frontbuffer`,
  frame-synced) and difference the images to locate *which* surfaces change, rather than
  inferring from description.
- Only then go looking for the state that drives those surfaces.

## Probes in this directory

| file | what it captures |
|---|---|
| `altfocus_lighting_probe.gdb` | projection + `CDemonSet` lighting gates, per apply and per lighting precompute |
| `altfocus_lighting_dump.gdb` | automatic `nocturne_dump_lighting_state` five frames after each apply, numbered |
| `altfocus_restore_probe.gdb` | focus transitions against camera applies |
| `altfocus_filter_phase_probe.gdb` | per-light animated-filter phase at each apply |

The dump probe exists to solve an observer problem worth remembering: to report which
lighting state you are in, you have to alt-tab away, which changes the state. Anything
interactive has to be captured automatically and correlated afterwards.

### Probe hygiene — two traps, each cost a full iteration

- **Never name a gdb convenience variable `$bl`, `$bh`, `$bx`, `$bp`, `$sp`, `$si`, `$di`
  or `$ps`.** On x86 those are *registers*. `set $bl = X` inside a breakpoint command
  writes the running program's BL register on every hit — the comparison never holds and
  the inferior is being corrupted while it runs.
- **No `\` line continuations inside an `if` nested in a `commands` block.** The block
  nesting breaks and the body executes unconditionally. Keep each `printf` on one line.
