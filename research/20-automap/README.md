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

**`ground_type_memory` is one `EGroundType` byte per triangle.** `allocGeometryMemory` mallocs
exactly `triangle_count` bytes for it, load and save move that many, and `rayIntersectTriangles`
returns entry `[t]` as the hit material. So every triangle carries its material, and each wall
line is drawn in its own. See *Material colour*.

**OPEN — terrain noise.** Cliff meshes are wall-like and can dominate. Now that the material
channel is understood it is the obvious filter, but whether cliffs actually need filtering has not
been tested in play.

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

## Material colour

Each wall line draws in the colour of its own material.

The material comes from `CDemonCube::ground_type_memory` — a `uchar[triangle_count]`, indexed by
the triangle's own index within its cube, holding the enum (`CONCRETE`, `DIRT`, `GRASS`, `METAL`,
`WATER`, `WOOD`, `MARBLE`, `MUD`, `CARPET`, `BLOOD`, `GLASS`, `GRAVEL`). `allocGeometryMemory`
mallocs exactly `triangle_count` bytes for it, load and save move that many, and
`rayIntersectTriangles` hands entry `[t]` back as the hit material. It is one byte read beside the
triangle the edge came from, stored on the segment at extraction time.

**Colour the lines, not the cells.** A per-cell fill beneath the line work reads as a second layer
to look through rather than as information about the drawing. Colouring the existing lines says
the same thing and adds nothing to look past.

**Keep the line colours close in value.** These are bright lines over a dimmed scene, and the
material is a hint on top of a drawing that already works. A palette that varies wildly in
brightness reads as a map where some walls matter more than others. `DEFAULT` is the ordinary wall
colour, since most of a level is untyped and that case has to look like the map's normal line.

**Resolve the palette once per frame, not per segment.** `pick_color` scans all 256 entries, and
there are thousands of segments in a frame.

## Actors

Doors, other heroes, and characters, drawn over the lines and under the player marker.

**Doors follow the fog; characters follow line of sight.** A door that has been seen is a fact
about the level and is worth remembering — that is the point of colouring the locked ones, since
it is a note to come back with a key. A character moves, so remembering where one was seen would
draw an x-ray of the level's population rather than a map of the place. Characters therefore get
one `testLineOcclusion` call each per frame, from the player's eye to chest height on the target,
and are never recorded.

**A door has TWO locks, and `key_mask` is the rarer one.** Colouring by `key_mask` alone leaves
most genuinely locked doors reading as open.
`CHero::tryOpenNearbyDoor` calls `CDoor::getMoveType` first, and that refuses outright when the
player stands on a side `allowed_sides` does not permit — "The door is locked from the other
side." `allowed_sides` of 0 permits neither side. Only a door that clears that gate ever reaches
the key test in `CHero::tryOpenDoor`.

**`getMoveType` cannot be called to find out** — it plays the locked sound and puts a message on
screen. Its side gate has to be reproduced: `worldToLocalPoint(door, &out, &hero_position)`, then
bit 2 of `allowed_sides` when `out.z <= 0` and bit 1 otherwise. The key test, by contrast, is the
real call: `checkHasMatchingKey(&hero->inventory, door->key_mask, 0)` returns 1 immediately when
`key_mask` is 0, and `show_message` 0 makes it pure — no "You used a key.", no unlock sound.

| Door state | Colour |
| --- | --- |
| `DOOR_STATE_CLOSED`, side allowed and key held | green |
| `DOOR_STATE_CLOSED`, wrong side or no matching key | red |
| opening / open / closing | dim grey-green |

The side test uses the player's current position, so a door can change colour as he walks around
it. That is honest: it is answering "can I get through this from here", which is the question.

**The sight ray must stop short of its target.** `testLineOcclusion` is `rayVoxelGridTest` and
then `raycastAgainstActors` over the whole set, so a ray aimed at a character's own chest is
occluded *by that character* and the answer is always no. Pulling the end back along the ray by
~3.5 units clears the collision box while keeping everything in between, closed doors included,
blocking as it should. The reveal pass makes the same correction for cells, for the same reason.

**"Hero" is a class, not the party — and skipping the class loses characters.** `CMoloch`,
`CHaystack`, `CSvetlana` and the rest derive from `CHero` and are placed in levels as ordinary
actors. The actor-list pass must not skip `CHero` on the grounds that `g_HeroActors` covers it:
that array holds the party, so every other hero-class actor in the level would go undrawn — a room
holding a Moloch, a Haystack and one ordinary NPC would draw only the NPC. Anything the engine
calls a hero gets the hero marker, from the actor list.

**`g_HeroActors` is then a top-up, not the source.** `CDemonMission::buildSetActorList` fills
`g_CDemonSetPtr->actors` from the mission's linked list filtered by
`location.area_id == current_set_index`, and a party hero is not guaranteed to carry a matching
one — `createOneHero`'s placeholder fallback sets `area_id = -1` outright. So the four-entry array
is swept afterwards for any slot the list pass did not already draw, tracked by pointer identity.

**Colour alone does not separate a hero from a character.** At map scale both are a few pixels of
flat fill and the eye reads them as the same kind of thing. Heroes carry the shape too — a dark halo ring with the hero colour inside, the player marker's own
construction one size down. Sizes are load-bearing: NPC 3 flat, hero 4 ringed to 6, player 7/5/2
with a pale core, so the player stays the most prominent thing on his own map.

**Characters get one colour between them.** There is no friend/foe field anywhere on `CCharacter`
— the engine has no such concept — so heroes are separated from everything else and no further
claim is made. A class list splitting hostages from mobsters would be our fiction, not the game's,
and would need upkeep as classes are identified. Dead characters (`hit_points <= 0`) are skipped.

## It is a screen, not an overlay

The map is a screen of its own, not a HUD element drawn over the game. A dimmed scene behind the
line work is most of what makes it read as the latter.

**Black, not dimmed.** The frame underneath is still rendered and then painted out. Skipping
`renderScene` would be cheaper but reaches into renderer state the map has no business touching,
and the saving is irrelevant on a screen where nothing is animating.

**One mode, not two.** While the map is up it owns every control, so there is nothing to toggle
into. `nocturne_automap_owns_controls` is simply "is it open", and
`CGame::processKeyboardControls` zeroes the frame's player input on the strength of it. The map
does not follow the player either — he cannot move, so there is nothing to follow. It opens centred
on him and stays where it is put.

**Left stick pans, right stick zooms**, read as analogue through `nocturne_gamepad_axes` so a
gentle push pans slowly — see *One binding* below for which bindings each borrows and why they
cannot overlap. Pan is divided by the zoom, so a push moves the same distance on screen at any
scale; zoom is multiplicative, so each step is the same proportion of the current scale.

**The world stops — except in a network game.** `CGame::process` is skipped while the map is open,
which is the "pause" half of being a screen. That cannot apply to netplay: the simulation is
lockstep, every machine steps together, and one player opening his map would desync the session
rather than pause it. `nocturne_automap_freezes_world` is therefore *not* the same test as
`nocturne_automap_active`, and the difference is the whole reason it is a separate entry point.
`CSound::process` keeps running either way, or the music cuts out.

**Exclusive with the in-mission menu.** Escape belongs to the map while the map is up:
`CGame::runGameSession` offers the press to `nocturne_automap_handle_cancel` before it builds the
pick list, and a press the map takes is spent there. One press, one screen — the menu is never
constructed over the map, and a second press opens it. Leaving it to the `g_ModalDialogActive`
test in `nocturne_automap_update` is not enough on its own: that runs a frame later, so the menu
would be raised in the same press that dismissed the map. The gamepad reaches this for free, since
Start already synthesises `DIK_ESCAPE`.

**Do not reuse `CGame::is_paused` for this.** Despite the name it is the developer slew flag: the
`else` branch of the same test drives the hero from `CSlew::processInput`, so setting it would fly
the player around with the stick that is supposed to be panning the map.

**One binding, and the rest are borrowed and labelled.** Opening the map is the only row the map
adds to Customize Keys. Pan and zoom take over movement bindings the player already has, and the
map screen prints which, in the names he actually bound — `getKeyDisplayName` renders pad codes as
well as keys, so a controller reads "Left Stick Up" rather than a number. Virtual "map zoom in /
out" entries are the wrong shape for this: an entry in Customize Keys that only means anything on
one screen is worse than a line on that screen saying what your existing controls do there. It
also keeps the table from overflowing — `g_CustomKeyNames` is `[30][40]` and
`configureCustomKeyBindings` refuses a 31st, so the map has exactly one row to spend.

**The split follows the sticks, and nothing serves both.**

| | Pad | Bindings read |
| --- | --- | --- |
| Pan | left stick | `key_walk` / `key_backup`, `key_strafe_left` / `key_strafe_right` |
| Zoom | right stick | `key_point_up` / `key_point_down` |

That mapping is forced by what the pad defaults are: the left stick is walk/backup *and* strafe,
the right stick is turn *and* look. So the two halves of the left stick are pan and look is zoom.
`key_left` / `key_right` are deliberately unread — they are the right stick's other axis, and
reading them for pan would put one stick on both jobs.

**The text decides the layout, not the other way round.** The map screen has no letterbox bars of
its own — it blacks the whole framebuffer and insets the map — so what reads as a bar is simply
that inset, and it has to be tall enough for the text that sits in it.

Both overlay lines are therefore built and measured *before* the map window is computed, and the
top and bottom insets are `text height + 2 × padding` (floored at the 24px side margin). Each line
is then centred in its own band. The map scales into whatever is left, which is correct: it is the
map that should give way to the text, since the text is fixed-size and the map is not.

Three things this rules out, each of which puts text off screen or on top of the map: a fixed
offset outside the map window, since the margin is a constant and the text is not; a
"do not intrude on the map" clamp such as `if (help_y < y1) help_y = y1;`, which undoes the
measurement it sits beside and pushes a tall line off the bottom edge — a clamp that can move text
further off screen is not a clamp; and correct placement against a fixed inset the text is taller
than.

`nocturne_ui_text_height` and `nocturne_ui_text_width` give the real figures and already account
for whether scaling is honoured at the current bit depth, so what they report is what will be
drawn. The help line also falls back through two shorter forms when the full one is wider than the
screen, which a pad makes likely — six names reading "Left Stick Up" and the like.

**Analogue wins where it exists.** The digital bindings are only consulted when the corresponding
stick axis reads zero. Blending them would let any push past the pad's own digital-synthesis
threshold count as a full-speed one, throwing away the analogue response that is the reason for
reading the stick as an axis at all.

## Reveal

**Per 3D cell.** Cells within a radius of the player become known; a wall draws once the cell
containing its midpoint is known. Cell granularity is the grid's own, so rooms appear as you
enter them rather than a circular window sliding over a finished drawing.

Three dimensions, not two: with a height band that follows the player, a known footprint says
nothing about *which storey* was seen there, and a tower walked at the top would otherwise
uncover the hall beneath it. One bit per cube is 46,139 bits — **5.6 KB** for a whole level.

**Only the player's own storey draws.** Drawing other floors dimmed underneath is clutter at a
castle's density rather than context — enough grey boxes to read as part of the room you are
standing in. What is off your level stays remembered and stays hidden until you are on it.

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

**Shape.** Logic in `shims/game/automap.{h,cpp}`; each keep carries a guard and one call. Gated on
`NOCTURNE_AUTHENTIC_AUTOMAP`, default 0, category `addition` — neither shipped binary had a map.
See `docs/authenticity-flags.md`. Six keeps touch it: `CDemonSet::load` (reset),
`CGame::processFrame` (update, render, and the world-freeze guard),
`CGame::processKeyboardControls` (controls), `CGame::runGameSession` (the Escape hand-off),
`configureCustomKeyBindings` (bindings), and the two `inivar.cpp` halves (persistence).

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
3. **`ground_type_memory`** as the terrain filter, if cliff meshes prove noisy in play. The
   channel itself is understood now (see *Floor fill*); what is untested is whether cliffs need
   filtering at all.
4. **`area_id`** — `0` at every sample taken so far. Worth one check somewhere it is populated,
   since a real room id beats a height band outright.
5. **Open ground draws nothing** where there is no relief. Correct, and the same as Doom. If it
   ever reads as broken, the answer is something sparse — a dotted floor edge rather than a filled
   cell, which would be the second layer *Material colour* rules out.
