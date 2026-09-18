# Resolution and aspect ratio

What the engine can be pushed to, where the ceilings actually are, and why widescreen is a
content problem rather than a code one.

## STATE — read this first

**The software *rasteriser* has no resolution limit; software *mode* does.** The rasteriser
writes its scanlines straight into `g_ScreenBufferArray[scanline_y]` at the native resolution
(`renderPerspectiveCorrectScanline32` and the rest of `engine/special.cpp`), and
`CDemonCamera::init`'s 640x480 clamp sizes the lighting grid rather than the colour output.
Neither is a limit on the picture. What does limit software is two renderer-owned pieces past
480 lines — see *What actually caps software*. Software above 640x480 is not viable.

**The resolution list is one table.** Gated by `NOCTURNE_AUTHENTIC_RESOLUTION_LIST`;
`shims/game/resolution.{h,cpp}` drives both the label and the stepping so they cannot disagree.
Eight modes, including 1600x1200 and a reachable 400x300. Accelerated only: the acceleration
gate is a correctness requirement and is **not** part of that flag.

**The HUD and the goggles scale with the framebuffer.** `nocturne_ui_scale()` and the goggles'
own per-axis scale, gated by `NOCTURNE_AUTHENTIC_HUD_SCALE`. Text inside a box — the inventory
description, the subtitles — takes its box's stretch truncated to a whole number instead, and is
clipped to the box; see *The two coordinate spaces → text inside a box*.

**OPEN — anything above 1200 lines or 1598 pixels wide overruns a fixed array.** Two of them,
both unguarded. Neither is hit by any mode currently offered. See *The two ceilings*.

**OPEN — widescreen.** Pillarboxing is a contained change in the presenter we own. True
widescreen is not possible from the shipped backdrops; see *Aspect ratio*.

### Pick up here

1. **Pillarbox at present time** — the highest value per unit of risk, and it needs no engine
   change. See *Aspect ratio → what pillarboxing would touch*.
2. **Raise the two ceilings** if 1920-wide is wanted — mechanical, but the arrays are
   Ghidra-side data and want a spec before anyone edits generated globals.
3. **Lift the lighting-grid clamp** if per-pixel lighting at native resolution is wanted. This
   is the one with ripple: the same 640x480 virtual space is what the inventory panel and
   `buildTLVertex` key off.

### DON'T RE-CHASE

- **`g_ResolutionTable[9]` is not the Options list.** Its only reader is
  `engine/2d.c initGraphicsSystem`, indexed by `g_RenderingMode`, for the 8bpp mode the external
  SETUP program chose. Do not "fix" the menu by wiring it to this table; the menu's list is a
  deliberate curation and the table contains modes the camera cannot render squarely.
- **`CDemonCamera::init`'s 640x480 clamp is not what caps software.** It sizes
  `framebuffer_aligned` / `zbuffer_aligned` — the lighting grid read by
  `compositeLightmapToFramebuffer` and the `blendLightmapPixel` pair. Lifting it does not make
  the picture bigger; the picture is already native. The cap is the hold buffer and the
  composite's 1:1 row mapping — *What actually caps software*.
- **The software acceleration gate needs the lightmap composite scaled before it can go.**
  "The rasteriser is native" is true and is not sufficient: without the gate, 1600x1200 in
  software quits on `lockHoldBuffer` at `dcamera.cpp:3639`, and removing that fatal still leaves
  the lighting in a 640x480 corner.
- **Text in a box takes the box's stretch, not the HUD scale, and truncates it.** Both halves
  matter and they are separate bugs: a position mapped through the HUD scale lands off the
  panel, and a size rounded up grows the block out of it. See *The two coordinate spaces → text
  inside a box*.
- **The font ladder does not close the 1x gap at 800x600 and 1024x768.** Matching the container
  with a larger engine font at a whole scale was measured and works arithmetically, but it
  changes typeface between resolutions and looks worse than the smaller text.
- **Fractional glyph scaling is not an option.** Two of the five fonts are 1-bit, and resampling
  them at a ratio just above 1 takes stems off letters. Whole scales only.
- **400x300 is not a missing label.** It has a label and a step case in both directions in the
  shipped chain; what it never has is anything assigning `game_pixy = 300`.

## The two ceilings

Both are fixed-size globals with no bound check at the fill site.

| Limit | Symbol | Ceiling | Where it bites |
|---|---|---|---|
| Height | `g_ScreenBufferArray[1200]` | 1200 lines | one pointer per scanline |
| Height | `g_SavedScreenBufferArray[1200]` | 1200 lines | saved-screen copies |
| Height | `g_BackgroundSavedScreenBufferArray[1200]` | 1200 lines | background save/restore |
| Height | `g_ZBufferScanlineArray[1200]` | 1200 lines | filled in the same loop as the above |
| Height | `g_ZBufferScanlineArrayBackup[1200]` | 1200 lines | its save/restore partner |
| Span width | `g_ReciprocalLookupTable[1600]` | ~1598 px | software span rasterisers |

All five height tables are `[1200]`, so they move together — raising one alone buys nothing.

`setScreenResolution` fills the scanline tables straight off `g_WindowHeight` with nothing
comparing against 1200:

```c
do {
  g_ScreenBufferArray[iVar5] = (char *)pvVar2 + g_WindowWidth * iVar5 * (g_BitsPerPixel / 8);
  g_ZBufferScanlineArray[iVar5] = (uint *)((char *)g_SoftwareZBuffer + iVar7);
  iVar5 = iVar5 + 1;
  iVar7 = iVar7 + iStack_14;
} while (iVar5 < iVar8);          /* iVar8 = g_WindowHeight */
```

Note `g_ZBufferScanlineArray` is filled from the same counter in that loop, so the depth
scanline table has to be raised in step with the colour one.

The reciprocal table is indexed by a triangle scanline's **pixel span**, not by a coordinate:

```c
iVar7 = (uVar6 >> 0x10) - uVar5;              /* span width in pixels */
uVar1 = g_ReciprocalLookupTable[iVar7 + 1];
```

so a triangle covering the full width of a 1920-wide screen reads index 1921. It is filled at
init by `initGraphicsSystem` (`for i in 1..0x640: table[i] = 0xffffffff / i`), so raising it is
a resize plus the matching fill bound.

**For 1920x1080 specifically:** the height is fine (1080 < 1200); the width is not. And the
reciprocal table lives only in `core/dstrender.cpp`, the software span renderers — the
accelerated path never touches it, so 1920-wide may already work under acceleration and break
only in software.

## What actually caps software

Two renderer-owned pieces sit in the path past 480 lines. Neither is about the rasteriser.

**1. The hold buffer — fatal.** `CDemonCamera::lockAndRenderToBuffer` picks its lock purely on
height:

```c
if (g_WindowHeight < 0x1e1) { lockFrame(); }
else {
  if (lockHoldBuffer() == 0) {
    displayErrorAndQuit("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
  }
}
```

and `lockHoldBuffer` is a null check on a renderer export:

```c
if (g_APIDLL_lockHoldBuffer == NULL) { return 0; }
return (*g_APIDLL_lockHoldBuffer)();
```

With no renderer DLL loaded there is no hold buffer, so the guard trips and the game quits. The
height test is safe only because the menu never lets software past 480. `trigl` exports
`APIDLLlockHoldBuffer`, so the accelerated path is unaffected at any size.

Note `lockFrame` also returns 0 in software — but the `< 0x1e1` branch ignores its return value,
so the composite simply proceeds writing to `g_ScreenBufferArray` directly. The lock exists only
to obtain the external renderer's surface.

**2. The lightmap composite — visually wrong even without the fatal.**
`compositeLightmapToFramebuffer` walks the grid and the screen with **one shared index**:

```c
while ((int)uVar9 < this_ptr->framebuffer_height + -1) {
  puVar6 = (ulonglong *)((int)g_ScreenBufferArray[uVar9 - g_CameraShakeOffsetY] + ...);
  puVar7 = (ulonglong *)((int)this_ptr->framebuffer_aligned
                         + this_ptr->framebuffer_width * uVar9 * 4);
```

`framebuffer_height` is the clamped 480, and grid row *n* goes to screen row *n*. On a larger
screen the per-pixel lighting and fog would cover only a 640x480 corner — and in software this
pass **is** the lighting, not an enhancement.

So making software work above 640x480 means scaling that composite, not removing a guard. The
guard is unconditional and deliberately not tied to `NOCTURNE_AUTHENTIC_RESOLUTION_LIST`: it is
a correctness requirement, not an authenticity choice.

## The two coordinate spaces

This is the thing that makes resolution work confusing, and it is worth internalising before
touching anything here.

`CDemonCamera::init` keeps the true screen size in globals but clamps the camera's own
framebuffer:

```c
g_CameraScreenWidth  = (screen_height * 4) / 3;   /* native */
g_CameraScreenHeight = screen_height;             /* native */
if (0x1e0 < screen_height) { screen_height = 0x1e0; }
this_ptr->framebuffer_height = screen_height;     /* clamped: 480 */
this_ptr->framebuffer_width  = (screen_height * 4) / 3;  /* clamped: 640 */
```

So above 480 lines there are two spaces at once:

| Space | Extent | What lives in it |
|---|---|---|
| Native | `g_WindowWidth` x `g_WindowHeight` | software rasteriser output, all `CBitFont` text, HUD alpha bitmaps, the CPU 2D layer |
| Camera virtual | `framebuffer_width` x `framebuffer_height` (640x480) | lighting/effect grid, the inventory icon panel, anything submitted as 3D geometry |

Geometry in the virtual space is stretched to the screen by the renderer. Anything drawn by the
CPU is not. **Two elements that must line up have to be in the same space**, and the inventory
panel is where that bites: `NOCTURNE_AUTHENTIC_HUD_ICON_SPACE` puts the icon panel in camera
space so it does not land off-screen above 640x480, while the description text on it is
`CBitFont` output and therefore native.

### Text inside a box

Two blocks of text live inside a container that grows by a fractional factor, and they are the
only places where the integer HUD scale is the wrong number:

| Block | Container | Container's stretch |
|---|---|---|
| inventory description | the icon panel, camera-space geometry | `g_WindowWidth / framebuffer_width` |
| subtitles | the letterbox bar | `(g_WindowHeight - g_WindowWidth * 100 / 185) / 2`, i.e. `0.1396 * H` at 4:3 |

**Position takes the container's exact stretch; size takes its floor.** Those are different
numbers and both are needed. A position mapped through anything but the panel's own stretch
lands off the panel — offsetting by `g_InventoryWidth * nocturne_ui_scale()` against a panel
scaled by `W / framebuffer_width` agrees only where the stretch is a whole number. A *size*
cannot be fractional at all: `CBitFont` draws glyph bitmaps, and resampling them at a ratio just
above 1 duplicates some rows and columns and not others, which on `fnte_pfd` — 1-bit art, no
coverage ramp — reads as stems of uneven thickness rather than as scaling.

Truncating the size is what keeps the block in its box. At a scale no larger than the
container's stretch, the block is no larger *relative to the box* than it was at 640x480, where
it fits; so it fits everywhere. Rounding to nearest does not: it returns 2 at 1024x768 (stretch
1.6) and 3 at 1600x1200 (2.5), and the inflated scale also divides the wrap width, so the block
gains lines as it gains height.

Measured with `g_InventoryWidth = 240`, `g_InventoryHeight = 96` (`DATA/INVSIZE.TXT`, which
overrides the compiled-in `0xD0 x 0x60`):

| Mode | panel, screen px | panel stretch | text scale |
|---|---|---|---|
| 320x240 | 240x96 | 1.00 | 1 |
| 512x384 | 240x96 | 1.00 | 1 |
| 640x480 | 240x96 | 1.00 | 1 |
| 800x600 | 300x120 | 1.25 | 1 |
| 1024x768 | 384x153 | 1.60 | 1 |
| 1280x1024 | 480x204 | 2.00 | 2 |
| 1600x1200 | 600x240 | 2.50 | 2 |

Below 480 lines the camera framebuffer is not clamped, so the panel and the screen share one
space and the stretch is 1.

Replayed over the shipped text — all 94 rows of `ITEMLIST.TXT` and all 1082 subtitle lines in
`ENGLISH.POD`'s `WORLD/*.TXT` — no block leaves its box at any of those modes, and the line
count is the same at every one, because the layout is the 640x480 layout scaled.

The cost is that 800x600 and 1024x768 draw at 1x, the size the game ships at, rather than
filling the larger panel. The engine's five bitmap fonts were measured as a way to close that
(`micro`/`fnte_pfd` 1-bit, `nocsmall`/`nocfont`/`menufont` with a coverage ramp, pitches 7/11/
13/16/20 px) — every resolution can be matched to within 10% by some font at a whole scale, but
the typeface then changes between resolutions and the result reads worse than the smaller text.
**Do not re-chase the font ladder.**

Both blocks are also clipped to their box. The clip never fires on the layouts above; it is
there for a box that shrinks under the text, which the letterbox bar does every time it animates
in or out. Where the bar is too small to hold the block at all — 16:9, where the 1.85:1 target
leaves a strip 14–21 px tall — the clip falls back to the screen, since there is no box to stay
inside. `CScript::renderSubtitles` reads `g_ClipTop` into a stack slot at `0x00559bf2` and
writes it back at `0x00559d34` without ever modifying it, so the shipped build clipped here too
and lost the body of it.

## The resolution list

The shipped selector is a hardcoded chain of `game_pixy` comparisons in
`configureGraphicsOptions` — no table, no loop — reaching six modes: 320x240, 512x384, 640x480,
800x600, 1024x768, 1280x1024. Two consequences are visible to a player:

- **1600x1200 is in `g_ResolutionTable` but unreachable**, because the menu never reads that
  table.
- **400x300 is a phantom** — a display label *and* a step case in both directions, with nothing
  anywhere assigning `game_pixy = 300`. Reachable only by editing the INI, and one keypress
  leaves it for good.

A third property of the chain is correct and stays: everything above 640x480 is gated on
acceleration, and the menu clamps back to 640x480 while acceleration is off. That gate is load
bearing — see *What actually caps software*.

There is also a shipped stepping bug, covered by the same flag rather than one of its own: left
from 1280x1024 falls through the chain's default and snaps to 320x240, making the top of the
list a two-entry loop. Both shipped binaries do this — in `nocedit.exe` it is the missing
`CMP EDI,0x300` case, so the `JNZ` at `0x0051151b` takes the default.

`NOCTURNE_AUTHENTIC_RESOLUTION_LIST = 0` replaces both the label and the stepping with one
ordered table in `shims/game/resolution.cpp`:

```
320x240  400x300  512x384  640x480  800x600  1024x768  1280x1024  1600x1200
```

Every mode the shipped labels already knew about, plus 1600x1200. `g_ResolutionTable`'s 320x200
and 320x400 are deliberately **not** carried over: `CDemonCamera::init` derives its width as
`height * 4 / 3` regardless of the screen, so a non-4:3 mode renders with a camera whose aspect
disagrees with the framebuffer. 1280x1024 is 5:4 and gets away with it because it is close
enough that nobody noticed in 1999.

An off-table current mode snaps to the nearest by height rather than collapsing to the smallest,
which is what the shipped default case does.

The list is what the selector can *offer*; the acceleration gate still decides what is reachable
without a renderer, so in software the usable set ends at 640x480.

## The goggles

Separate scale from the HUD's, and per axis. The shipped blit is 1:1 up to 320x240 and doubles
past it, testing **width against 320 and height against 240 in different places**. That is not
academic: `g_ResolutionTable` contains 320x400, the one mode where the two disagree — 1:1 across,
doubled down. Collapsing them into a single factor regresses that mode.

The scanline look is deliberate: the blit lights one row and leaves the next as cleared
background. Holding that ratio as `(scale_y + 1) / 2` keeps it at higher scales instead of
thinning to one lit row in four; at scale 1 and 2 it is the shipped pattern exactly.

Verified by modelling both versions' pixel coverage across all nine table modes: the authentic
path reproduces the shipped blit exactly, 320x400 included, and the scaled path holds the
goggles between 0.94x and 1.25x of their 640x480 screen fraction at every mode. Unscaled, the
same image is 0.40x of that fraction at 1600x1200.

The shipped blit carries **no right-edge clip** — safe only because a 1x/2x image always fits.
Any wider scale needs one, since it can reach past the end of the row.

## Aspect ratio

**The world is 4:3 raster.** Backdrops are 640x480 8-bit paletted — `.RAW` at 307200 bytes,
`.ACT` palette, `.FOG` depth/fog — read at a literal fixed size:

```c
_fread(g_CameraIndexedImageData, 0x280 /*640*/, 0x1e0 /*480*/, p_Var3);
```

There is no image data outside that frame. Seeing *more* at the sides needs pixels that do not
exist.

**The engine stretches to fill.** `CDemonCamera::loadImage` resamples the backdrop with
independent X and Y fixed-point accumulators — `local_2c += 0x28000` (640<<8) per output column,
`local_28 += 0x1e000` (480<<8) per row — plus a 1:1 fast path when `framebuffer_height == 0x1e0`.
Aspect is not considered anywhere in that path.

Because the camera framebuffer is clamped to 640x480, the backdrop is effectively always
resampled to 640x480 and the stretch to the real screen happens **later, at present time — in
the GL layer we own**. That is the useful part: pillarboxing needs no engine change.

### The options

| Option | Cost | Result |
|---|---|---|
| **Pillarbox** | small, presenter-only | correct framing, bars at the sides |
| **Vertical crop (Hor+)** | small, presenter-only | fills the screen, loses a third of a deliberately composed shot |
| **Stretch** | none — this is today's behaviour at 16:9 | distorted |
| **Re-render backdrops wider** | content project | true widescreen |

The fourth is the only real widescreen. The rooms do exist as 3D geometry — `renderSceneGeometry`
uses it for collision, lighting and mirrors — and nocedit carries a backdrop pipeline
(`CDemonCamera::saveBackdrop`, the camera editor, `CDemonSet::importS3D`). So regenerating
backdrops at a wider FOV is conceivable. **UNVERIFIED:** whether the shipped PODs contain the
room geometry at backdrop quality. Confirm that before anyone plans around it.

### What pillarboxing would touch

- The presenter, which is ours.
- `CDemonCamera::init`'s `g_CameraScreenWidth = (screen_height * 4) / 3` would have to stop
  assuming 4:3.
- **The actor projection must stay locked to the backdrop's camera.** That alignment is the
  whole illusion of the fixed-camera presentation and is the thing to be most careful with — a
  wider FOV for the 3D without matching backdrops puts actors in the wrong place on the
  background, which is worse than bars.

## Flags

| Flag | 0 (default) | 1 (shipped) |
|---|---|---|
| `NOCTURNE_AUTHENTIC_RESOLUTION_LIST` | one table, 8 modes, and left from 1280x1024 steps to 1024x768 | hardcoded chain, 6 modes, and left from 1280x1024 snaps to 320x240 |
| `NOCTURNE_AUTHENTIC_MENU_RESOLUTION` | a picked resolution resizes the window at once | the selector only edits `game_pixx`/`game_pixy`; nothing applies them until a mission loads |
| `NOCTURNE_AUTHENTIC_HUD_SCALE` | HUD and goggles scale with the framebuffer; boxed text takes its box's stretch and is clipped to it | one screen pixel per art pixel |
| `NOCTURNE_AUTHENTIC_HUD_ICON_SPACE` | icon panel *and its text* in camera space | both in native pixels; icons invisible above 640x480 |

The shipped left-step gap is part of `NOCTURNE_AUTHENTIC_RESOLUTION_LIST`; it does not have a
flag of its own.

## Key symbols

| Symbol | Role |
|---|---|
| `g_WindowWidth` / `g_WindowHeight` | the real framebuffer — native space |
| `g_CameraScreenWidth` / `g_CameraScreenHeight` | native, but derived as `height * 4 / 3` |
| `CDemonCamera::framebuffer_width` / `_height` | camera virtual space, clamped to 640x480 |
| `CGame::game_pixx` / `game_pixy` | the mode the Options screen edits |
| `g_RenderingMode` | index into `g_ResolutionTable`, startup 8bpp mode only |
| `g_InventoryWidth` / `g_InventoryHeight` | icon panel extent, from `data/invsize.txt` |
