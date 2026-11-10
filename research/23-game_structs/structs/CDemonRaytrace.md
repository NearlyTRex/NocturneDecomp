# CDemonRaytrace

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 108 | fields | 108 |
| nocturne | 108 | fields | 108 |
| bw1 | 108 | fields | 108 |
| blairwitch2 | 108 | fields | 108 |
| bw3 | 108 | fields | 108 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `rendering_mode` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `triangle_count` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `triangle_list` | `CDemonTriangle*` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `triangle_flags` | `uchar*` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `bbox_min` | `CVector3f` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `bbox_max` | `CVector3f` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `cell_size` | `CVector3f` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `adjusted_size` | `CVector3f` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
| `grid_coord` | `CVector3i` | 0x40 | 0x40 | 0x40 | 0x40 | 0x40 |
| `cube_list` | `SVoxelCubeMetadata*` | 0x4c | 0x4c | 0x4c | 0x4c | 0x4c |
| `cube_data` | `CDemonCube*` | 0x50 | 0x50 | 0x50 | 0x50 | 0x50 |
| `grid_bounds_min` | `CVector3i` | 0x54 | 0x54 | 0x54 | 0x54 | 0x54 |
| `grid_bounds_max` | `CVector3i` | 0x60 | 0x60 | 0x60 | 0x60 | 0x60 |
