# 2D overlay accumulation on geometry-free frames

Blended 2D drawn on a frame that submits no GL geometry lands on the previous frame's 2D
instead of on the scene. Each such frame darkens the antialiased edges further, so text thickens
until it saturates and reads as though it were drawn twice.

The death banner is the visible case because it stays on screen long enough to notice, but
nothing about it is special: any blended 2D element that survives a geometry-free frame
accumulates the same way. A fall death whose camera cuts to show the drop is a reliable trigger,
because that cut submits no geometry at all.

## Cause

`nocturne_trigl_device_unlock_hold_buffer` uploads `g_dev.hold` — a *different* buffer, stretched
from 640x480 — into the scene target, and leaves `g_dev.image` untouched. The target then holds
content the full-resolution image does not, which is exactly the condition `target_ahead` names:

> Whether the target holds anything the CPU image does not. Set by drawing and by a clear;
> cleared once the two agree again.

Leaving `target_ahead` false there breaks that invariant. `nocturne_trigl_device_lock_frame`
reads it to decide whether to read the target back, so on a frame whose only target write came
from the hold upload the lock takes its early return and the image keeps the previous frame's
composite — 2D included. The engine then draws this frame's 2D over that.

The other two upload sites send `g_dev.image` itself and do leave the pair in agreement, so
false is correct for them. This one is the exception.

Frames that submit geometry are unaffected: `nocturne_trigl_device_flush` sets `target_ahead`
after a batched draw, so the lock reads back and the image is refreshed regardless. That is why
ordinary play never shows the defect and only a geometry-free stretch does.

## Why it presents as weight rather than ghosting

`engine/font.cpp drawAlphaBlendedPixels_FUN_004ce240` mixes `text * alpha + dst * (0xff - alpha)`
with `alpha` taken from glyph coverage scaled by `g_CurrentRenderColor`. A glyph's solid interior
is full coverage and replaces identically on a second draw; its antialiased edge blends over the
edge already there. Redrawing identical text into the same pixels is therefore not idempotent —
the letterforms thicken while the cores stay put.

`CGame::renderIrisFade` zeroes `g_ScreenBufferArray` rows outside its circle, and the banner is
drawn after it within the frame, so the fade resets the accumulated weight and the next single
draw lands on a cleared buffer.

## Measured

Frame order (`frame_order_probe.gdb`), consistent across frames:

```
renderScene
UPLOAD  640x480      hold buffer, stretched onto the target
FLUSH   x40          all GL geometry
LOCK    target_ahead=1
2D-GLYPH             all 2D, after the lock
UNLOCK / UPLOAD 1280x1024
```

All geometry precedes the lock and all 2D follows it; `FLUSH` never appears after `2D-GLYPH`
within a frame. The window between the hold upload and the first flush is the point at which the
target holds the scene and no 2D.

Banner frames with `target_ahead` left false at the hold upload (`banner_frame_probe.gdb`), 248
consecutive frames, every one identical:

```
hold_upload=1  big_upload=1  geom_flushes=0  lock_target_ahead=0
```

With the invariant restored (`verify_probe.gdb`), 263 consecutive banner frames read
`lock_target_ahead=1`, and the screen backup behind the first modal still reports
`target_ahead=0` at its own lock, so it keeps the composite.

The window the correction widens — between `unlockHoldBuffer` and the next `lockFrame`, where a
readback that now happens would erase anything drawn into the image — is unused.
`hazard_probe.gdb` counts blended-text and rectangle-fill draws inside it across menus, pause,
options and play: 782 windows, 0 draws in the worst of them.

Two cases are safe by construction rather than by measurement. Below 481 lines
`CDemonCamera::lockAndRenderToBuffer` takes its `lockFrame` branch and the hold path is never
entered, so the flag is unreachable there; 640x480 software mode runs unchanged. On any frame
that submits geometry, `flush` has already set the flag, so the readback happened regardless and
the value the hold upload leaves makes no difference.

## DON'T RE-CHASE

Each was measured and is negative.

- **The banner being drawn twice per frame.** It is drawn exactly once — 278 draws across 278
  frames, `n=1` every frame, at a fixed `x=428 y=245 scale=2`. Not two positions either.
- **A skipped scene render.** `CDemonSet::renderScene` is entered on every frame of the
  sequence. It submits no geometry, which is a different thing.
- **The hold buffer as the accumulating surface.** The banner is drawn into the
  full-resolution CPU image, confirmed by pointer range (`which_buffer_probe.gdb`): the row
  pointer falls inside `g_dev.image` and outside `g_dev.hold`. This holds at 1280x1024, where
  the hold path is live and uploads on every frame.
- **Keeping a separate 3D-only snapshot to rebase the overlay from.** Unnecessary. The target
  already holds the scene alone between the hold upload and the first geometry flush; the defect
  is that the lock was told not to read it. A snapshot taken at the readback is also useless
  while the readback is being skipped, since it holds whatever the last geometry frame captured.
- **Forcing the text opaque.** The banner already draws under `setRenderAlpha(0xffff)`. Glyph
  coverage is what blends, so no render-alpha value prevents accumulation.
- **The text alpha globals.** `g_CurrentAlphaValue` / `g_CurrentRenderColor` drive a different
  defect, where text dims or flickers against a static scene. Accumulation is independent of them
  and presents as weight rather than brightness.
- **Layer separation.** Not required. It would also work, but the measured frame order shows 3D
  and 2D never share the surface in time, and the invariant repair is a one-line change at the
  site that breaks it.

## Probes

| File | What it measures |
|---|---|
| `death_banner_probe.gdb` | Banner draws per frame, position, and scene renders per frame |
| `frame_order_probe.gdb` | Ordered trace of renderScene, flushes, lock, 2D and uploads for three frames |
| `banner_frame_probe.gdb` | Per banner frame: hold and composite uploads, geometry flushes, `target_ahead` at lock |
| `which_buffer_probe.gdb` | Whether the banner lands in the CPU image or the hold buffer |
| `verify_probe.gdb` | That banner frames read back, and that the screen backup still sees the composite |
| `hazard_probe.gdb` | 2D draws inside the `unlockHoldBuffer` → `lockFrame` window, which a readback would erase |

`g_dev` is in an anonymous namespace in `trigl_device.cpp` and is not visible from a breakpoint
in another translation unit. Referencing it from one aborts the `commands` block before its
`cont`, which stops the game at that breakpoint and presents as a hang rather than a probe fault
— during level load it stalls at the modal's screen backup. A probe needing its values reads
them only at `trigl_device.cpp` breakpoints and carries them elsewhere in convenience variables.

`drawAlphaBlendedPixels` and `fillRectColor` are per-span and per-rectangle, so a breakpoint left
enabled on either stops the process thousands of times a frame and makes menus crawl at any
resolution. Capture the breakpoint number with `$bpnum` at the `break`, leave it disabled, and
enable it only across the span being measured.

`pgrep -f` on the executable path matches gdb's own command line, since the path is gdb's last
argument, and so reports a live process after the inferior has exited. `pgrep -x nocturne`
matches the inferior alone.
