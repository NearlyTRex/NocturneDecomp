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

**The resolution list is one table.** Gated by `NOCTURNE_AUTHENTIC_MENU` (formerly `NOCTURNE_AUTHENTIC_RESOLUTION_LIST`);
`shims/gl/resolution.{h,cpp}` drives both the label and the stepping so they cannot disagree.
Seventeen modes by width then height: the shipped six, 1600x1200, a reachable 400x300, the 16:9
modes 1280x720, 1600x900, 1920x1080, 2560x1440 and 3840x2160, which the label marks "(wide)",
and 1200x900, 1440x1080, 1920x1440 and 2880x2160, the 4:3 modes at the 16:9 heights. Accelerated only: the
acceleration gate is a correctness requirement and is
**not** part of that flag.

**The HUD and the goggles scale with the framebuffer.** `nocturne_ui_scale()` and the goggles'
own per-axis scale, gated by `NOCTURNE_AUTHENTIC_HUD_SCALE`. Text inside a box — the inventory
description, the subtitles — takes its box's stretch truncated to a whole number instead, and is
clipped to the box; see *The two coordinate spaces → text inside a box*.

**The scanline and span ceilings are raised to 3840x2160.** The binary overruns a fixed array
above 1200 lines or 1598 pixels wide; the port sizes them by equates emitted at 2160 and 3842.
See *The two ceilings*.

**Widescreen is a reframe of the scene, not wider backdrops.** 16:9 and 16:10 modes are in the
table; a Graphic Options line picks Stretch, Pillarbox or Pan & scan (`shims/gl/widescreen.h`,
gated by `NOCTURNE_AUTHENTIC_MENU`). True widescreen is still not possible from the shipped
backdrops; see *Aspect ratio*.

### Pick up here

1. **Lift the lighting-grid clamp** if per-pixel lighting at native resolution is wanted. This
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
- **Text in a box takes the box's exact stretch, not the whole HUD scale.** A position mapped
  through the HUD scale lands off the panel, and a size rounded up grows the block out of it.
  See *The two coordinate spaces → text inside a box*.
- **The font ladder does not close the 1x gap at 800x600 and 1024x768.** Matching the container
  with a larger engine font at a whole scale was measured and works arithmetically, but it
  changes typeface between resolutions and looks worse than the smaller text.
- **Fractional glyph scaling by pixel repetition is not an option; area filtering is.** Two of
  the five fonts are 1-bit, and repeating their pixels at a ratio just above 1 takes stems off
  letters. `nocturne_ui_draw_text_f` blends each screen pixel by the glyph area under it
  instead.
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

**The port raises both to 3840x2160.** Ghidra equates name the bounds at their instruction
sites — `GAME_SCREEN_MAX_HEIGHT` (`0x4b0`) and `GAME_RECIPROCAL_TABLE_SIZE` (`0x640`) — at the
binary's 1200 and 1600. The generator emits them at 2160 and 3842 (`EQUATE_VALUE_OVERRIDES`,
`pseudocode/headers.py`), marked in `defines.h` with the binary's value, and sizes the six tables
by those names (`GLOBAL_TYPE_OVERRIDES`, `pseudocode/globals.py`).
`tests/shims/core/test_screen_limits.cpp` holds the tables to the bounds. The sites:

| Site | Use of `0x4b0` / `0x640` |
|---|---|
| `mapFrameBuffer` | the "ySize too big!" fatal |
| `setMaxViewportScanline1200` | the software clip's last scanline |
| `rasterizeTriangle`, `rasterizePolygonCustom` | `g_RasterizerMinY` starts above every row |
| `renderScanlinePolygon`, `renderIndexedPolygonAdvanced` | `g_MinScanline`, the same |
| `renderPolygonSoftware`, `renderIndexedPolygonSoftware` | `g_SoftwareMinScanline`, the same |
| `renderTriangleTextured`, `renderTriangleSimple` | `g_RenderTriangleMinScanlineY`, the same |
| `initGraphicsSystem` | the reciprocal fill's bound (`0x640`) |

Five stack arrays carry the same height with no equate to hold it — the bound is the frame size
alone (`SUB ESP,0x12c0`, 1200 pointers) — so their keeps size them by `GAME_SCREEN_MAX_HEIGHT`:
`CEditorTools::backupScreen`, `restoreScreen` and `restoreWindowAndCleanup` each copy
`g_WindowHeight` scanline pointers into one, and `renderBackdropImage` saves both scanline
tables into two. `renderMMXPerspectiveScanline16` clamps its reciprocal index to the table's last
entry, by the same name.

The rasterisers' edge arrays (`g_RasterizerEdgeArray`, `g_SoftwareEdgeTable`,
`g_SoftwareEdgeBuffer`, `g_EdgeInterpolationArray`) are `[16]`, one slot per polygon edge, not
per scanline, and no global or keep sizes a row buffer to a screen width.

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

Its readers are the software span renderers in `core/dstrender.cpp` and `engine/special.cpp`.

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
guard is unconditional and deliberately not tied to `NOCTURNE_AUTHENTIC_MENU`: it is
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
panel is where that bites: the shipped panel is positioned in window pixels and lands off-screen
above 640x480, and the description text on it is `CBitFont` output and therefore native.
`NOCTURNE_AUTHENTIC_HUD = 0` draws the panel in camera space laid onto the HUD's frame and
places the text in the same box (*Aspect ratio → how the scene is reframed*).

### Text inside a box

Two blocks of text live inside a container that grows by a fractional factor, and they are the
only places where the integer HUD scale is the wrong number:

| Block | Container | Container's stretch |
|---|---|---|
| inventory description | the icon panel, camera-space geometry | `g_WindowWidth / framebuffer_width` |
| subtitles | the letterbox bar | `(g_WindowHeight - g_WindowWidth * 100 / 185) / 2`, i.e. `0.1396 * H` at 4:3 |

**Position and size both take the container's exact stretch.** A position mapped through
anything but the panel's own stretch lands off the panel — offsetting by
`g_InventoryWidth * nocturne_ui_scale()` against a panel scaled by `W / framebuffer_width` agrees
only where the stretch is a whole number. The size is `H / 480` (`nocturne_ui_text_scale`), the
same factor the HUD frame lays the camera's space on with, so the block keeps its 640x480
proportion to the box and wraps to the same lines at every mode.

That size is fractional, and `CBitFont` draws glyph bitmaps. Repeating glyph pixels at a ratio
just above 1 duplicates some rows and columns and not others, which on `fnte_pfd` and `micro` —
1-bit art, no coverage ramp — reads as stems of uneven thickness. `nocturne_ui_draw_text_f`
area-filters instead: each screen pixel takes the glyph pixels under it weighted by the area
each covers and is blended by that coverage, so the 1-bit fonts gain an even anti-aliased edge
and the ramped ones keep their ramp. A whole scale goes to the repetition path, so 640x480 and
its multiples are pixel-identical to before.

Measured with `g_InventoryWidth = 240`, `g_InventoryHeight = 96` (`DATA/INVSIZE.TXT`, which
overrides the compiled-in `0xD0 x 0x60`):

| Mode | panel, screen px | panel scale | text scale |
|---|---|---|---|
| 320x240 | 240x96 | 1 | 1 |
| 512x384 | 240x96 | 1 | 1 |
| 640x480 | 240x96 | 1 | 1 |
| 800x600 | 300x120 | 1.25 | 1 |
| 1024x768 | 384x154 | 1.60 | 1.60 |
| 1280x720 | 360x144 | 1.50 | 1.50 |
| 1280x1024 | 512x205 | 2.13 | 2.13 |
| 1600x1200 | 600x240 | 2.50 | 2.50 |

800x600 is the one exception: at 1.25 the filter softens `fnte_pfd` and `micro` more than the
extra size is worth, and side by side the whole-pixel 1x reads better. Text scales under 1.5
stay whole; the block is then smaller than its panel, which it fits by the truncation argument.

The panel is laid on at the frame's height over 480 (`corner_space`), not at the renderer's
`W / framebuffer_width`, which is why 1280x1024 and the wide modes match the text. Below 480
lines the camera framebuffer is not clamped, so the panel and the screen share one space; the
game takes smaller fonts there instead, and the scale stays 1.

The whole-number answer this replaced truncated the size to the stretch's floor, which kept the
block in its box but drew 800x600 and 1024x768 at 1x. The engine's five bitmap fonts were
measured as a way to close that (`micro`/`fnte_pfd` 1-bit, `nocsmall`/`nocfont`/`menufont` with
a coverage ramp, pitches 7/11/13/16/20 px) — every resolution can be matched to within 10% by
some font at a whole scale, but the typeface then changes between resolutions and the result
reads worse than the smaller text. **Do not re-chase the font ladder.**

Both blocks are also clipped to their box. The clip never fires on the layouts above; it is
there for a box that shrinks under the text, which the letterbox bar does every time it animates
in or out. A full bar is never shorter than three subtitle lines with half a line of room above
and below them, and the block is never nearer the screen's bottom than that half line; a block
of four lines or more rises over the shot and the clip falls back to the screen, since there is
no box to stay inside. `CScript::renderSubtitles` reads `g_ClipTop` into a stack slot at `0x00559bf2` and
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

`NOCTURNE_AUTHENTIC_MENU = 0` replaces both the label and the stepping with one
ordered table in `shims/gl/resolution.cpp`:

```
320x240  400x300  512x384  640x480  800x600  1024x768  1200x900  1280x720  1280x1024
1440x1080  1600x900  1600x1200  1920x1080  1920x1440  2560x1440  2880x2160  3840x2160
```

Every mode the shipped labels already knew about, plus 1600x1200, plus the common 16:9 modes up
to the port's raised ceilings (*The two ceilings*: 3840 px, 2160 lines), in width then height
order. Past 1024 pixels wide each 16:9 height has a 4:3 mode too; 1280x720's would be 960x720,
under that. Every width is a multiple of 16, which `clearScreen`'s 32-byte rows need.
16:10 and uncommon sizes (1280x800, 1024x576, 1152x864, 1360x768) are deliberately left out: they
crowd the selector for no one. `g_ResolutionTable`'s 320x200 and 320x400 are deliberately **not** carried over:
`CDemonCamera::init` derives its width as `height * 4 / 3` regardless of the screen, so a non-4:3
mode renders with a camera whose aspect disagrees with the framebuffer. Above 480 lines the
widescreen reframe corrects that for a wider screen (*Aspect ratio*); below it nothing does, so
those two stay out. 1280x1024 is 5:4 and gets away with it because it is close enough that
nobody noticed in 1999.

An off-table current mode snaps to the nearest by height, then width, rather than collapsing to the smallest,
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
| **Stretch** | none — the renderer's own fill | distorted |
| **Pillarbox** | a reframe of the scene target | correct framing, bars at the sides |
| **Pan & scan** (Vert−) | the same reframe, and a crop that moves | fills the screen; at 16:9 a quarter of the shot's height is out of view at any moment |
| **Re-render backdrops wider** | content project | true widescreen |

The first three are the Widescreen line on Graphic Options. The fourth is the only real
widescreen. The rooms do exist as 3D geometry — `renderSceneGeometry` uses it for collision,
lighting and mirrors — and nocedit carries a backdrop pipeline (`CDemonCamera::saveBackdrop`, the
camera editor, `CDemonSet::importS3D`). So regenerating backdrops at a wider FOV is conceivable.
**UNVERIFIED:** whether the shipped PODs contain the room geometry at backdrop quality. Confirm
that before anyone plans around it.

### How the scene is reframed

**At the frame lock, in the scene target.** The order `research/20-overlay_accumulation`
measured — hold-buffer upload, every geometry flush, then the lock, then all 2D — means the
target holds the finished scene and none of the 2D at the moment the lock reads it back. On a
frame that uploaded the hold buffer, `nocturne_trigl_device_lock_frame` redraws a region of the
target over itself (`nocturne_gl_scene_reframe`, two framebuffer blits through a same-size copy)
before the read-back — or earlier, when the HUD's overlay pass opens first (below). Backdrop,
actors and effects move together because they are already one image; the HUD, subtitles and
menus are drawn afterwards and stay put. Nothing in the engine's projection changes, so the
actors stay locked to the backdrop's camera.

**The crop follows the script's focus actor** — the one the virtual director frames. Once a
scene, before `lockAndRenderToBuffer`, `CDemonSet::renderScene` projects the middle of its
bounding box as the iris fade does. A camera change snaps the crop to it; while the camera holds,
the crop eases toward it past a 16-row dead band; while the letterbox is up the crop centres, so
a cutscene keeps the middle of its shot, the band it was composed around.

**The letterbox is measured over the 4:3 picture.** The shipped bars are
`(H - W * 100 / 185) / 2`; at 1280x720 that is 14 pixels, too thin for a subtitle, which then
runs out over the shot. `NOCTURNE_AUTHENTIC_HUD = 0` takes the width as the picture's,
`min(W, H * 4 / 3)`, which is the shipped figure at 4:3 and 5:4 and keeps the shipped proportion
of the screen on a wider one: 101 pixels at 720. The bars then cover more of a panned shot than
the 1.85:1 band, in exchange for subtitles that fit. Neither that nor the band panning leaves is
allowed under four subtitle lines — three and half a line of room on each side.

**The HUD is laid out in the picture, and its 3D is drawn after the crop.** `game/hud`'s frame is
the scene's picture — the 4:3 column when pillarboxed, the screen otherwise — and every element
is a box placed in it (`core/hud_layout`). The inventory panels are camera-space geometry, so
`nocturne_hud_inventory_panels` opens an overlay pass (`nocturne_trigl_device_begin_overlay`):
the scene is reframed at that moment if it has not been, its depth is set aside behind a cleared
buffer, and the panels are drawn at their shipped camera-space coordinates with that space laid
onto the frame's bottom-right corner at one scale. They are never cropped or resampled by the
reframe, so a moving crop does not make them shimmer, and the text, ammo and counts are placed
in the same boxes, so they sit on them at any size. The pass puts the depth back when it closes,
so the engine's own depth restore next frame finds what it left.

**The front end is widened, not reframed.** It runs in its own mode — `initializeGameSystems`
sets 640x480 at startup and `CGame::setScreenResolutionAndDisplayFangs` sets it again for
Options from the pause menu and at a session's end — and the presenter fits that 4:3 frame into
the window, so no in-game setting reaches it. Under `NOCTURNE_AUTHENTIC_MENU = 0` both set the
picked resolution's aspect at 480 lines instead (`nocturne_menu_width`: 848x480 for 1600x900),
with acceleration, since the widening below needs the renderer. The width is rounded to 16
pixels: `clearScreen` fills a row 32 bytes at a time, every shipped mode is a multiple of 16
pixels, and an 852-pixel row overruns into the next and, on the last, off the buffer. The 640-wide layout — logo,
lists, trademark, the fangs — is centred (`nocturne_menu_left`); the copyright keeps to the
screen's corner; the cloud layer runs the full width. The moon and bats are real 3D, so they get
a wider view rather than a stretch: `CMoon::render` projects them into a 640x480 viewport with
the field of view widened by the screen's ratio, inside an overlay pass that stretches the 640
columns back across the screen. `buildRotationMatrix` already scales the vertical by
`(hh / hw) * 3W / (4H)` using the window's width, which at a 640x480 viewport on an 848-wide
window is the ratio the field of view was widened by, so the two cancel and the scene keeps
its proportions.

The iris fade's centre is projected in scene space and mapped to the screen, and
`calculateIrisFadeCenter` maps it through the crop (`nocturne_widescreen_scene_to_screen`).
`CGame::beginFadeOut` keeps its own inline copy of that centre with the plain 640x480 mapping;
the closing iris recomputes the centre every frame through `calculateIrisFadeCenter`, so the copy
lasts one frame at most.

Nothing is reframed at 480 lines or fewer, where the scene and the screen are one space, or at
4:3 and narrower, so 1280x1024 is unchanged. `CDemonCamera::init`'s
`g_CameraScreenWidth = (screen_height * 4) / 3` is untouched: under
`NOCTURNE_AUTHENTIC_WINDOWS = 0` its only reader takes the camera framebuffer instead.

## Flags

| Flag | 0 (default) | 1 (shipped) |
|---|---|---|
| `NOCTURNE_AUTHENTIC_MENU` | one table, 17 modes by width, and left from 1280x1024 steps to 1280x720; a picked resolution resizes the window at once; a scene on a screen wider than 4:3 is stretched, pillarboxed or panned and scanned as the Widescreen line says | hardcoded chain, 6 modes, and left from 1280x1024 snaps to 320x240; the selector only edits `game_pixx`/`game_pixy`, and nothing applies them until a mission loads |
| `NOCTURNE_AUTHENTIC_HUD_SCALE` | HUD and goggles scale with the framebuffer; boxed text takes its box's stretch and is clipped to it | one screen pixel per art pixel |
| `NOCTURNE_AUTHENTIC_HUD` | the HUD laid out in the scene's picture; the panels drawn after the reframe in camera space on the frame's corner, their text in the same boxes; the letterbox measured over the 4:3 picture | the shipped routines; panels in native pixels, invisible above 640x480; the letterbox measured over the window |

The shipped left-step gap is part of `NOCTURNE_AUTHENTIC_MENU`; it does not have a
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
