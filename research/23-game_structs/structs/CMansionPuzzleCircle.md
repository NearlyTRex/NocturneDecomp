# CMansionPuzzleCircle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 5396 | fields | 5396 |
| nocturne | 5388 | fields | 5388 |
| bw1 | 5396 | fields | 5396 |
| blairwitch2 | 5744 | fields | 5744 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 |
| `panel_model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 |
| `gem_model` | `CKeyFramedModelInstance` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 |
| `reflector_model` | `CKeyFramedModelInstance` | 0x450 | 0x448 | 0x450 | 0x5ac |
| `gem_pos` | `CVector3f` | 0x5cc | 0x5c4 | 0x5cc | 0x728 |
| `gem_orient` | `UOrientationVector` | 0x5d8 | 0x5d0 | 0x5d8 | 0x734 |
| `emitter_pos` | `UVector3` | 0x5e4 | 0x5dc | 0x5e4 | 0x740 |
| `panels` | `SPanel[12]` | 0x5f0 | 0x5e8 | 0x5f0 | 0x74c |
| `gems` | `SGem[12]` | 0xaa0 | 0xa98 | 0xaa0 | 0xbfc |
| `reflectors` | `SReflector[2]` | 0x1340 | 0x1338 | 0x1340 | 0x149c |
| `laser_color_r` | `int[12]` | 0x1400 | 0x13f8 | 0x1400 | 0x155c |
| `laser_color_g` | `int[12]` | 0x1430 | 0x1428 | 0x1430 | 0x158c |
| `laser_color_b` | `int[12]` | 0x1460 | 0x1458 | 0x1460 | 0x15bc |
| `laser_intensity` | `int[12]` | 0x1490 | 0x1488 | 0x1490 | 0x15ec |
| `light_texture` | `SMRGLTextureModel` | 0x14c0 | 0x14b8 | 0x14c0 | 0x161c |
| `bbox_extent` | `float` | 0x1508 | 0x1500 | 0x1508 | 0x1664 |
| `panel_radius` | `float` | 0x150c | 0x1504 | 0x150c | 0x1668 |
| `bbox_height` | `float` | 0x1510 | 0x1508 | 0x1510 | 0x166c |
