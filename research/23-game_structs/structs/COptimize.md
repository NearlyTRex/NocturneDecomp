# COptimize

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 68 | fields | 68 |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|
| `base` | `CObj` | 0x0 |  |  |  |
| `weld_threshold` | `double` | 0x1c |  |  |  |
| `coplanar_angle_threshold` | `double` | 0x24 |  |  |  |
| `coplanar_distance_threshold` | `double` | 0x2c |  |  |  |
| `max_polygon_sides` | `int` | 0x34 |  |  |  |
| `complex_polygon_count` | `int` | 0x38 |  |  |  |
| `complex_polygons` | `CComplexPolygon**` | 0x3c |  |  |  |
| `vtable` | `COptimize_vtable*` | 0x40 |  |  |  |
