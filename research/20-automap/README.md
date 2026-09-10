# Automap

A Doom-style line map that fills in as the player walks. Design, measured numbers, and the
extraction rules — including the ones that look right and are not.

## STATE — read this first

**FEASIBLE. A Nocturne level reads as a floorplan.** Measured against `CASTLE.geo`: curtain
walls, towers, courtyards, the colonnade and interior rooms are all legible from directly above
with no authoring work. This was the risk worth checking first, because the game was composed as
fixed camera views over pre-rendered backdrops and nothing guaranteed it would survive a
projection it was never designed for. It does.

**The geometry is in `cube_data`, NOT `triangle_list` and NOT `cube_list`.** `CDemonRaytrace`
carries two adjacent cube pointers and the names mislead. See *Where the geometry is* — getting
this wrong reads as "the level has no collision in it", which is wrong and costs an afternoon.

**`dominant_axis` separates walls from floors for free.** No dot products at runtime.

**Band EDGES by their own height. Do not band triangles.** Both obvious alternatives are wrong
in opposite directions, and each produces a specific visible defect. See *Banding* — this is the
single rule the whole feature's readability rests on.

**One storey, not two.** ~13 world units total for `CASTLE.geo`. A band twice that lights the
floor above as though you were standing on it.

**Reveal per 3D cell, 5.6 KB for a whole level.** Not per XZ footprint — see *Reveal*.

**The reveal saves, additively, and old builds are unaffected.** A block appended after the
save's last section is never reached by a reader that does not know about it: parsing is
sequential and bounded, the final section is fixed-length, and the version gate is a minimum with
no upper bound. No version bump needed. See *Saving the reveal*.

**Past a completion threshold the fog lifts and the whole map shows.** Measured against cubes
that hold geometry (4,579 of 46,139 on `CASTLE.geo`) — a percentage of *all* cubes would never
fire. See *Completion reveal*.

**OPEN — the band height is tuned to one level by eye.** `--below 2 --above 11` suits
`CASTLE.geo`. It is content-dependent and wants a second level, ideally a dungeon, before it is
written into game code. It should also anchor to the floor under the player rather than to his
feet; see *Open questions*.

**OPEN — terrain noise.** Cliff meshes are wall-like and can dominate. `ground_type_memory` on
each cube is the likely filter and has not been examined.

**OPEN — `area_id` is useless as a floor key.** It read `0` at every sample taken. If it is
populated elsewhere it would be a better floor key than a height band.

### Pick up here

Capture a dungeon, run the preview, and check whether the one-storey band holds. If it does, the
design below is buildable as written.

## Where the geometry is

`CDemonSet::load` fills one global per mission, `g_CDemonRaytraceInstance`. A mission references
exactly one `.SET` (true of every shipped `.MSN`), so a level is a single contiguous coordinate
space — no stitching, no per-room atlases.

`CDemonRaytrace` has two cube pointers, and only one of them is live:

| Field | Type | Reality |
| --- | --- | --- |
| `cube_list` | `SVoxelCubeMetadata*` | the `.GEO` **import** path, written by `allocCubeList`/`loadBinary`. **NULL in a running level.** |
| `cube_data` | `CDemonCube*` | what `getCubeAt` indexes, and therefore what every collision query reads. **This is the geometry.** |

`triangle_list`/`triangle_count` at the top level are the build/save path and are likewise null
and zero at runtime. A `CDemonCube` owns its own vertices:

```c
CVector3f*            vertex_buffer;    int vertex_count;
CDemonCubeTriangle*   triangle_buffer;  int triangle_count;
SVoxelGrid           *voxel_buffer1, *voxel_buffer2;   /* 8x8x8 occupancy */
void*                 ground_type_memory;
CVector3f             min_bounds, max_bounds;
```

and a triangle holds **pointers**, not a vertex triple:

```c
typedef struct CDemonCubeTriangle {
    STriangleRef triangle;      /* CVector3f *vertices[3]; CVector3f normal; float plane_distance */
    uint         dominant_axis;
} CDemonCubeTriangle;
```

So a triangle is read by dereferencing into its own cube's buffer. A triangle that straddles a
cube boundary is stored in every cube it touches, so any whole-level pass must dedupe.

Measured on `CASTLE.geo`:

```
grid_coord      29 x 43 x 37 = 46,139 cubes   (4,579 hold geometry)
cell_size       9.72 x 9.87 x 9.80
bbox            (-126.2, -239.6, -198.5) .. (155.8, 184.8, 164.0)
triangles       209,664 resident (with per-cube duplication)
dominant_axis   0: 72,348   1: 64,322   2: 72,994      floors = 31%
wall-like       135,116 (64.4%)
```

## Turning it into line art

**Wall test.** `dominant_axis != 1`, optionally tightened with `|normal.y| <= 0.5`. The even
thirds above are what real architecture should give, and the engine's own classification is
accurate enough to use directly.

**Outline versus mesh.** Keeping only edges used by exactly one wall triangle collapses the
whole level from 151,222 segments to 8,503 and turns a wireframe into a floorplan: a quad's
diagonal is shared by both its triangles and vanishes, as does the seam between coplanar quads.
Drawing every edge instead ("mesh") keeps the hatching and the interior detail, costs roughly
4x, and is the preferred look. Both are worth keeping — mesh when zoomed in, outline when zoomed
out far enough that hatching turns to mush.

Snap endpoints to a 0.5-unit grid before matching shared edges; adjacent triangles do not agree
to the last float bit, and an edge that fails to match its twin survives as a stray diagonal.
Snapping at a full unit is too coarse and starts destroying real structure.

### Banding

**The rule: filter EDGES by their own height.** A floorplan is the set of lines that exist at
your level — not the set of surfaces centred there, and not everything that passes through.

Both alternatives fail, each with its own signature defect, and both look reasonable until
rendered:

| Rule | Defect |
| --- | --- |
| Triangle **overlaps** the band | Drags whole storeys in through stair shafts and tower walls. Phantom rooms appear inside the room you are standing in. |
| Triangle **centre** in the band | Discards the cliff you are standing on top of. A 91-unit drop has its centre 45 units below your feet, so the edge that stops you walking off the map disappears. |

Per-edge gets both right: a cliff's top lip is an edge at your level and is kept, its face is
edges far below and is dropped; a wall rising from the storey below shows where its top meets
your floor, without bringing the room below with it.

**The band is asymmetric** — the player's position is at his feet, so almost nothing below the
floor belongs on the map while a storey's height above it does. `--below 2 --above 11` for
`CASTLE.geo`. A band of two storeys' height reaches the interior floor at `y 14` while the player
stands outside at `y 0` and lights it as current-floor, and reaches equally far down into
cellars.

## Reveal

**Per 3D cell.** Cells within a radius of the player become known; a wall draws once the cell
containing its midpoint is known. Cell granularity is the grid's own, so rooms appear as you
enter them rather than a circular window sliding over a finished drawing.

Three dimensions, not two: with a height band that follows the player, a known footprint says
nothing about *which storey* was seen there, and a tower walked at the top would otherwise
uncover the hall beneath it. One bit per cube is 46,139 bits — **5.6 KB** for a whole level.

**Explored geometry on other storeys is drawn dimmed**, with the current floor bright over it,
so the picture is kept as context instead of vanishing when the player changes level. Doom never
needed this because Doom was single-storey.

**The player marker draws last**, with a dark halo, and the view extent must cover the player's
position and not merely the geometry — a player standing somewhere with no walls near him (open
ground, the top of a drop) otherwise falls outside the frame and the marker silently disappears.

### Completion reveal

Past a threshold of the level explored, the fog is dropped and the whole map is shown. It is the
reward for having mapped most of a place: the last unexplored corners stop being a chore, and a
player who has genuinely learned a level gets to see it whole.

**The denominator must be cubes that contain wall geometry, not all cubes.** On `CASTLE.geo`
that is 4,579 of 46,139 — the other 41,560 are empty air and open ground, and no player will ever
"explore" them. A percentage against the full grid would sit near zero forever and the threshold
would never fire.

**Latch it, and store the latch.** Once crossed it must not un-cross: the count only grows, so it
cannot in practice, but the latch is what makes the state cheap to answer for the HUD and
survives being loaded into a build with a different threshold. Per level, and part of the saved
block below.

Revealing everything does **not** mean showing every storey at once. The band still applies, so
the map remains the current floor bright over the rest dimmed — the fog is what lifts, not the
floor separation. Suggested threshold ~75%, tunable, and worth an on-screen percentage somewhere
so the player can see it approaching.

## What it costs

| | |
| --- | --- |
| Extraction | once per level load, not per frame |
| Reveal state | 5.6 KB, 1 bit per cube |
| Drawn per frame | 1,100–3,800 segments observed on a real walk, mesh style |
| Whole level, mesh, one band | ~20,000 segments |
| Whole level, outline, all heights | 8,503 segments |

Only revealed cells intersected with the map viewport are drawn, so the per-frame figure is far
below the whole-level one. A cap is still wanted; it should drop detail (mesh to outline) rather
than clip the map.

## Rendering it in-game

Everything needed exists.

- **`drawLine(x1,y1,x2,y2)`** and **`clipAndDrawLine(..., xmin,ymin,xmax,ymax)`** in
  `engine/2d.c`, bottoming out in `plotPixel` → `g_ScreenBufferArray`, colour from
  `g_ActiveRenderColor`. No depth involvement.
- **Hook: `CGame::processFrame`**, which already has a `.keep`. The HUD sequence runs inside the
  `lockFrame` → present window: `renderAllItems`, `drawScreenBorder`, then the `drawText`
  overlays. The map belongs in that sequence, and it is the same path subtitles and HUD text
  already use in accelerated mode.
- **`nocturne_ui_scale()`** for resolutions above 640x480.
- **Persistence**: see *Saving the reveal* below.

**Shape.** Logic in a new `shims/game/automap.{h,cpp}`; the keep carries a guard and one call.
Gated on a new `NOCTURNE_AUTHENTIC_AUTOMAP`, default 0, category `addition` — neither shipped
binary had a map. See `docs/authenticity-flags.md`.

## Saving the reveal

What has been explored belongs in the save. A map that resets every load is worse than no map,
because the player stops trusting it.

**Append it, and append it last.** The `.NOC` save is plain text with labelled sections, and
three facts make a purely additive block safe — all three checked in `CGame::loadGame`:

1. **Parsing is sequential and bounded.** Every section is read with `fgets`/`fscanf` against a
   count it already knows. Nothing scans to EOF.
2. **The last section is fixed-length.** `saveGame` ends with `Game stats` and one
   `%f,%f,%d,%d` line; `loadGame` reads exactly that and returns.
3. **The version gate is a MINIMUM, not an equality** — `if (version < 3) reject`. There is no
   upper bound.

So a block written after `Game stats` is never reached by a reader that does not know about it.
An older build loads the save, restores everything it understands, stops at `Game stats`, and is
unaffected by the trailing bytes. A new build reads its own block if present and treats EOF as
"no map data" — which is also what happens loading a save written before the feature existed.
Both directions work, with no version bump needed; bumping is harmless given (3) but buys
nothing, and equality checks in any external tooling would be needlessly broken by it.

**Contents** — per level, keyed by the set's `geometry_filename` so a save carrying several
visited levels keeps them apart:

| | |
| --- | --- |
| Grid dimensions | so a changed `.GEO` invalidates cleanly rather than smearing |
| Reveal bits | 1 per cube, 5.6 KB raw for `CASTLE.geo` |
| Completion latch | whether the threshold has been crossed |

Raw bits are unreadable in a plain-text save and inflate it. Run-length encoding them as
hex-per-run costs a few lines and keeps the file diffable, which is worth having while
`NOCTURNE_AUTHENTIC_SAVE` is 0 and saves are being inspected by hand.

**This interacts with LZW.** At `NOCTURNE_AUTHENTIC_SAVE=1` the text is compressed into the real
`.noc` behind an `EFD` magic. That is a whole-file wrapper, so the appended block compresses with
everything else and the additive property is unaffected — but the block must be written by
`saveGame` before the compression step, not bolted on after it.

## Tools

**`nocturne_dump_geometry(path)`** — `shims/debug/dump.cpp`, gated by `NOCTURNE_DUMP_TOOLS`.
Writes the grid header, every resident triangle in world space with its normal, `dominant_axis`
and owning `cube_index`, and the player's position and `area_id`. Does no classification or
projection on purpose, so extraction rules can be re-decided offline against one capture instead
of by rebuilding the game. ~23 MB for `CASTLE.geo`.

```
call (int)nocturne_dump_geometry("/tmp/geo.txt")
```

**`scripts/Python/automap_preview.py`** — renders a capture as PNG, no dependencies. Prints the
statistics that settle design questions: triangle count, `dominant_axis` split, wall percentage,
grid dimensions, exact reveal-bitmap size, and a height histogram. Warns `!! MARKER OFF-IMAGE`
when the player marker falls outside the frame.

```sh
python3 scripts/Python/automap_preview.py /tmp/geo.txt --out /tmp/map --mesh
python3 scripts/Python/automap_preview.py /tmp/geo.txt --out /tmp/map --mesh \
        --path /tmp/path.txt --frames 6 --reveal-radius 22
```

**Path recording** — a gdb probe on `CGame::processFrame` sampling the player position every 6th
frame gives a real track to replay the fill-in against; per-frame is visibly slow and a walking
player does not cross a 9.7-unit cell in one frame. Extract with
`grep '^PATH ' /tmp/nocturne_dbg.log | awk '{print $2,$3,$4}'`.

Note the walk must be given the **unbanded** segment set. Handing it a set already filtered to
one band lets each frame only subtract from that storey, and everything at another height —
a cliff lip at the player's feet, the floor below — is gone before the walk starts.

## Open questions

1. **Band height on a second level.** A dungeon with lower ceilings is the useful test. If ~13
   units does not generalise, derive it rather than hardcode it.
2. **Anchor the band to the floor, not the feet.** `getGroundHeight` beneath the player would
   make the band track the surface he is standing on, which is what it is really trying to
   follow; his `y` is only a proxy and drifts on slopes and stairs.
3. **`ground_type_memory`** as the terrain filter, if cliff meshes prove noisy in play.
4. **`area_id`** — `0` at every sample taken so far. Worth one check somewhere it is populated,
   since a real room id beats a height band outright.
5. **Open ground draws nothing** where there is no relief. Correct, and the same as Doom, but if
   it reads as broken then a coarse terrain silhouette as a third dim layer is the answer.
