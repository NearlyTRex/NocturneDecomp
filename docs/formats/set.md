# The `.SET` file format

A `.SET` file in `models\` describes one game set: its geometry file, fog, water, sky, lights,
cameras, reverb rooms, virtual director boxes and each camera's visibility list. This is the
format as the C++ recreation reads it, in `CDemonSet::load` (`recreation/core/set/demonset_load.cpp`),
`C3DSLight::load` (`recreation/core/setutil/3dslight.cpp`), `C3DSCamera::load` and `loadPVS`
(`recreation/core/setutil/3dscamera.cpp`) and `loadCameraFog` (`recreation/core/dcamera/dcamera.cpp`).

## Conventions

- **Plain text.** CR LF line ends are read as LF. A set file is read whole from `models\`; a
  missing file is fatal (`CDemonSet::Unable to open <name>`).
- **Value lines** hold one field, or several separated by commas with no spaces, and are parsed
  with scanf-style formats: `%d` an integer, `%f` a float, `%s` one whitespace-free word. The
  formats below are the code's own. The newline at the end of each format skips *any* run of
  whitespace, blank lines included, before the next read.
- **Label lines** are read and thrown away, so their text is free. Some sections have one in
  every version; the per-field labels of lights and cameras, and the labels before the light and
  camera counts, exist from version 11 (`kLabelledSetFileVersion`). A label that follows a value
  line must not be blank: the value's trailing newline would swallow the blank line and the
  label skip would then eat the next real line.
- **Versions** run from 0 to 26. Every check is "from version N" or "before version N", so a
  higher version reads as 26. (nocedit also reads a version 27 camera line for panning; the
  recreation, like retail, does not.)
- **Missing values.** When a conversion fails, the scan stops there and the fields it did not
  reach keep the value they had. For set-level fields that is the value from the previously
  loaded set (loading frees only the enviro model and the terrain); counts keep the list's
  current length; each camera is reset to its defaults before it is read. Because the scan stops
  at the failure, the rest of that line is left for the next read, which usually throws the
  reads after it out of step. Give every value.
- **Angles** are radians. Lights, cameras, rooms and boxes give their three angles in the file
  order **x, z, y**.

In the tables, *label* means a skipped line, and the version column gives the versions that hold
the line.

## 1. Header

| Line | Format | Field | Versions |
|---|---|---|---|
| 1 | `%d` | set file version | all |
| 2 | `%f` | set scale factor | all |
| 3 | `%s` | a name nothing reads | all |
| 4 | `%s` | geometry file name (`.geo`); also keys the legacy rules below | all |
| 5 | `%f` | least ambient value, given to every camera as its ambient light | all |
| 6-8 | label | three extra lines | 0 only |

After loading, the thumbs file is the geometry name up to its first `.` plus `.zth`. A geometry
file that will not load shows "Warning!  No .GEO file.  Press any key".

## 2. Set fog

Versions 0 to 16:

| Line | Format | Fields |
|---|---|---|
| 1 | label | |
| 2 | `%d,%d,%d,%d` | an index nothing reads, fog colour r, g, b |
| 3 | label | |
| 4 | `%f,%f,%f` | scroll (drift) x, y, z |
| 5 | `%f,%f,%f,%f` | height threshold, density multiplier, two values nothing reads |

The temperature is 50 (`SFog::kDefaultTemperature`).

From version 17 (`kCameraFogVersion` in the set reader) the set's fog has the camera fog layout:

### Fog block (`loadCameraFog`)

| Line | Format | Fields | Versions |
|---|---|---|---|
| 1 | label | | 17+ |
| 2 | `%d,%d,%d` | fog colour r, g, b | 17+ |
| 3 | label | | 17+ |
| 4 | `%f,%f,%f` | scroll x, y, z | 17+ |
| 5 | `%f,%f` | height threshold, density multiplier | 17+ |
| 6 | `%f` | temperature in Fahrenheit; below freezing shows characters' breath | 26+ |

Before 26 the temperature is 50.

## 3. Environment

| Line | Format | Fields | Versions |
|---|---|---|---|
| 1 | label | | all |
| 2 | `%f,%f` | water level y, water tile size | all |
| 3 | label | | all |
| 4 | `%d,%s` | use the enviro model (0/1), enviro model name | all |
| 5 | label | | 5+ |
| 6 | `%d` | wave animation (0/1) | 5+ |

Before 5 the wave flag comes from the geometry name (see [Legacy rules](#legacy-rules)).

## 4. Sky, world geometry, weather

| Line | Format | Fields | Versions | Before |
|---|---|---|---|---|
| 1 | label | | 6+ | |
| 2 | `%d` | has a sky (0/1) | 6+ | sky on |
| 3 | `%d,%s` | sky brightness (`0x4000` = 16384 is full), sky texture | 12+ | 16384, `NITESKY.RAW` |
| 4 | label | | 13+ | |
| 5 | `%d,%s` | use world geometry (0/1), world geometry name | 13+ | 0, `none` |
| 6 | label | | 25+ | |
| 7 | `%d` | weather: 0 none, 1 rain, any other number snow | 25+ | none |

The sky texture line has no label of its own.

## 5. Lights and cameras

| Line | Format | Fields | Versions |
|---|---|---|---|
| | label | | 11+ |
| | `%d` | light count (a negative count is 0) | all |
| | light block | one per light | all |
| | label | | 11+ |
| | `%d` | camera count (a negative count is 0) | all |
| | camera block | one per camera | all |

### Light block (`C3DSLight::load`)

In the *Label* column, *11+* is a label line before the value from version 11, and *yes* a
label line in every version that holds the value.

| Label | Format | Fields | Versions |
|---|---|---|---|
| 11+ | `%[^\n]` | name: the whole line, spaces included | all |
| 11+ | `%f,%f,%f` | position x, y, z | all |
| 11+ | `%f,%f,%f` | orientation, file order x, z, y | all |
| 11+ | `%f` | field of view (focal length) | all |
| yes | `%f` | aspect (held 16.16 in the light) | 21+ (before: 1) |
| yes | `%f` | volumetric intensity | 22+ (before: 1) |
| 11+ | `%d` | light type; 0 is a spotlight, the type master lights are made for | all |
| 11+ | `%f,%f,%f,%f,%f` | colour r, g, b, attenuation start, attenuation end | all |
| 11+ | `%d,%d` | light size x, y (the master light's width and height; default 256, 256) | all |
| 11+ | `%d` | filter count | all |
| 11+ | `%d` | blend filter flag | 9+ (before: 1) |
| | filter lines | one per filter (below) | all |
| 11+ | `%d` | current filter frame | all |
| yes | `%d,%d,%d,%d,%d` | move filter, filter velocity x, y, filter position x, y | 19+ (before: all 0) |
| 11+ | `%f,%f` | on time, cycle time, in seconds | all |
| yes | visibility list | (below) | all |

The label before the blend flag exists from 11 like the others; versions 9 and 10 have the flag
without it.

Filter lines:

| Format | Fields | Versions |
|---|---|---|
| `%f,%s` | duration in seconds, filter name; the index is 0 | 0-15 |
| `%f,%d,%s` | duration in seconds, filter index, filter name | 16+ |

A negative filter count means no filters (the original took it as having some). A light with no
filters gets a circular shadow; one with filters uses its blend flag. A filter frame whose
duration is above 0 steps to the next after that many seconds. A light whose on time is below 1
flickers: in each cycle of `cycle time` seconds it is on for the first `on time` seconds. A light
with a non-zero move filter drifts its filter position by its velocity.

Visibility list, which says which cameras show the light and where in their view:

| Versions | Layout |
|---|---|
| 0-1 | 100 lines `%d`: visible flag for cameras 0-99; the bounds are the whole view, x 1-318, y 1-238 |
| 2-6 | 100 lines `%d,%d,%d,%d,%d`: visible flag, x min, x max, y min, y max |
| 7-10 | 200 lines of the same, for cameras 0-199 |
| 11+ | `%d` count, then that many lines `%d,%d,%d,%d,%d`: camera number, x min, x max, y min, y max |

Before 11 each flag is kept as its number's low byte. From 11 the listed cameras are visible and
every other camera is not; a camera number outside 0-249 is fatal ("Invalid camera number in
visiblilty list!").

### Camera block (`C3DSCamera::load`)

Each camera starts from its defaults: projection scale 28, box x and y -300 to 300 and z 0 to
300, reverb preset 0, its own fog.

| Label | Format | Fields | Versions |
|---|---|---|---|
| 11+ | `%s` | name: the first word of the line | all |
| 11+ | `%f,%f,%f` | position x, y, z | all |
| 11+ | `%f,%f,%f` | orientation, file order x, z, y | all |
| 11+ | `%f` | projection scale | all |
| yes | `%f,%f,%f` ×3 | rotation matrix, one row per line | all |
| | `%d` | use the set's fog (0/1) | 18+ |
| | fog block | the camera's own fog, only when the flag is 0 | 18+ |
| yes | `%f,%f,%f` | box min x, y, z, in the camera's frame | 23+ |
| | `%f,%f,%f` | box max x, y, z | 23+ |
| yes | `%d` | reverb preset | 23+ |

Before 18 every camera uses the set's fog. The camera's fog block is the [fog block](#fog-block-loadcamerafog)
above, so from 26 it holds a temperature too. The box decides whether a sphere is in the
camera's view.

## 6. Rooms, ground type, master reverb

| Line | Format | Fields | Versions | Before |
|---|---|---|---|---|
| | label | | 1+ | |
| | `%d` | default room size | 1+ | by geometry name |
| | `%d` | room count | 1+ | no rooms |
| | box + `%d` | per room: a box (below), then its reverb size | 1+ | |
| | label | | 3+ | |
| | `%d` | default ground type | 3+ | by geometry name |
| | label | | 24+ | |
| | `%d` | default master reverb | 24+ | 0 |

### Box

Rooms and virtual director boxes are turned boxes in world units, three lines:

| Format | Fields |
|---|---|
| `%f,%f,%f` | centre x, y, z |
| `%f,%f,%f` | extents x, y, z: half the box's size on each axis |
| `%f,%f,%f` | angles, file order x, z, y |

## 7. Old virtual director data

Versions 4 to 9 only. Nothing reads it; the reader skips it.

```
<label>
<director count>            %d
"<name>", <line count>      "%[^"]", %d   (per director)
<line count lines>          skipped
```

## 8. Virtual director boxes

| Line | Format | Fields | Versions |
|---|---|---|---|
| | label | | 5+ |
| | `%d` | box count | 5+ |
| | box | per box | 5+ |

Boxes that touch, either reaching into the other, are joined into one group. Before 5 the set
has none.

## 9. Stray lines

Version 14 alone has two more skipped lines here.

## 10. Visibility lists (PVS)

From version 20:

| Line | Format | Fields |
|---|---|---|
| | label | |
| | per camera, in camera order: `%d` count, then that many lines `\t%d` | the raytrace cubes the camera can see |

The tab is whitespace in the format, so any indentation, or none, reads. A negative count is an
empty list; a count above `0x1fffffff` is fatal ("Out of memory for pvsList - N"). The original
game stops reading here.

## Legacy rules

These key behaviour to the geometry file's name (line 4 of the header), matched as a prefix,
ignoring case. They exist so the original sets load as they did.

**Default room size, before version 1:**

| Prefix | `mauso` | `h109` | `smill` | `pier59` | `ndun` | other |
|---|---|---|---|---|---|---|
| Room size | 2 | 0 | 3 | 0 | 3 | 0 |

**Default ground type, before version 3:**

| Prefix | `mauso` | `h109` | `smill` | `pier59` | `castle` | `ndun` | other |
|---|---|---|---|---|---|---|---|
| Ground type | 8 | 3 | 2 | 7 | 2 | 8 | 2 |

**Wave animation, before version 5:** on only when the name starts `ndun`.

**Wind and water, every version:** without the `wind` block, a name starting `castle` blows the
wind; without the `water` block, a name starting `ndun` laps the water (both below).

**Moving vehicle, every version:** a geometry name starting `train` puts the set aboard a moving
vehicle, as Nocturne's train is (the original's `player_on_train`): its rails are heard with the
fog's drift, and it has a moving ground with the default terrain settings unless the file gives
its own (below).

## Recreation extensions

Blocks for the recreation go after the visibility lists (after the last line the file's version
reads), where the original game stops reading, so the original's own tools still load such files.

- Any lines may follow the last section.
- A line that is a known block label, compared ignoring case and with spaces and tabs around it
  ignored, starts a block; the next line holds its values.
- Any other line is ignored.
- A block's values are comma-separated, with spaces and tabs around each ignored. Any value left
  out, empty or invalid takes its default; a label with no line after it takes all defaults.
- A block given more than once keeps its last.

Every value a block can give defaults to what Nocturne did, so a set without blocks plays as it
did in the original.

### `terrain`

A moving ground: a heightfield drawn under the set, scrolling along z, as Nocturne's train runs
over the junk ground.

```
terrain
<ground>,<speed>,<width>,<height>,<origin x>,<origin z>
```

| Value | Meaning | Default |
|---|---|---|
| `ground` | The ground file name. Its heights (`.raw`), colours (`.clr`) and texture list (`.tex`) are the files in `data\` that share its name before the first `.`, so the name needs a `.`. | `junk.jnk` |
| `speed` | Scroll speed along z in world units per second; negative scrolls the other way. | 98.4375 (Nocturne's `0x6270` in 24.8) |
| `width`, `height` | The grid's cells across and along, each a power of two, as the ground wraps by masking; any other number takes the default. The `.raw` holds a byte per cell and the `.clr` two. | 256, 256 |
| `origin x`, `origin z` | The ground's point, in world units, the camera is drawn over, at the ground's height there. | 1032, 0 (Nocturne's `0x40800`, 0 in 24.8) |

Numbers must be plain decimals filling their value (no `+` sign, no hex, nothing after them), or
they take the default. Distances and speeds are held in 24.8, rounded to the nearest 1/256.

A set with the block has a moving ground whatever its geometry is called. A set without it has
one only if its geometry's name starts `train` (Nocturne's own train sets), with the defaults:
`junk.jnk,98.4375,256,256,1032,0`.

### `ambient`

The sound the set plays all the while, which the mission script's start makes the set's ambient
sound (a script's `setAmbientSound` can change it later).

```
ambient
<sound>,<volume>
```

| Value | Meaning | Default |
|---|---|---|
| `sound` | The sound's name, as a script names one. | The geometry's name before its extension, with `.wav` |
| `volume` | Its volume, a number 0 or more, as a sound name's `@` modifier: 1 is as recorded. | As recorded, or 0.85 for the geometries below |

The values line `off`, in any case, gives the set no ambient sound.

A value the block leaves out, or a volume that is not a number 0 or more, is what the set plays
without the block. Without it, the sound is the geometry's own, and a geometry named `smill` or
`town` (Nocturne's mill and town, in any case) plays it at 0.85, as the original did.

### `wind`

A wind that blows louder the more open the camera's view is, as Nocturne's castle's does.

```
wind
<sound>
```

| Value | Meaning | Default |
|---|---|---|
| `sound` | The looping sound the wind plays. | `wind-ctl.wav` |

The values line `off`, in any case, gives the set no wind. Without the block, a set whose
geometry's name starts `castle`, in any case, has the wind with its default sound, as the
original did; any other has none.

How loud the wind is comes from 16 by 16 points across the camera's view, worked out whenever the
camera moves:

- Sky counts fully, as does a point more than 50 units off or under ground more than 60 units
  higher.
- The volume moves toward that at most half its range a second.

### `water`

Water that laps louder the more of the set's water surface shows, as Nocturne's dungeon's does.

```
water
<sound>,<loudest>
```

| Value | Meaning | Default |
|---|---|---|
| `sound` | The looping sound the water plays. | `water-2.wav` |
| `loudest` | The highest it gets, a number 0 or more. | 0.7 |

The volume is 0.2 and a 36th of the square root of the square feet of water showing, up to
`loudest`. It moves toward that at most half its range a second, and is silent while no water
shows.

The values line `off`, in any case, gives the set no water sound. A value the block leaves out,
or a `loudest` that is not a number 0 or more, takes its default. Without the block, a set whose
geometry's name starts `ndun`, in any case, laps with the defaults, as the original did; any
other is silent.

### Planned

`vehicle` (the moving vehicle's noises, volumes and the inside/outside test, on or off for any
set) will come with the sound code that plays it; its syntax is not settled. It will take `off`,
as the other blocks do; a block always wins over the geometry-name fallbacks, which apply only to
files without it.

## Example

A minimal version 26 file: no lights, one camera that uses the set's fog, no rooms, no boxes, an
empty visibility list. The label texts are free.

```
26
1.0
pier
pier.geo
0.25
fog colour
0,0,0
fog scroll
0,0,0
0,0
50
water level, tile size
0,16
enviro model
0,none
wave animation
0
sky
1
16384,NITESKY.RAW
world geometry
0,none
weather
0
lights
0
cameras
1
name
cam01
position
0,100,-500
orientation
0,0,0
projection scale
28
rotation matrix
1,0,0
0,1,0
0,0,1
1
box
-300,-300,0
300,300,300
reverb preset
0
rooms
0
0
ground type
2
master reverb
0
vdir boxes
0
pvs
0
```

Adding a moving ground of the default ground at half speed backwards:

```
terrain
junk.jnk,-49.21875
```
