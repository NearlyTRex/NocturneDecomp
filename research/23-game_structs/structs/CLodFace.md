# CLodFace

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 140 | fields | — |
| nocturne | 140 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `attribute_indices` | `int[3]` | 0x0 | 0x0 |
| `submesh_id` | `int` | 0xc | 0xc |
| `vertex_idx_0` | `int` | 0x10 | 0x10 |
| `vertex_idx_1` | `int` | 0x14 | 0x14 |
| `vertex_idx_2` | `int` | 0x18 | 0x18 |
| `uv_coords` | `float[3][2]` | 0x1c | 0x1c |
| `edge_idx_0` | `int` | 0x34 | 0x34 |
| `edge_idx_1` | `int` | 0x38 | 0x38 |
| `edge_idx_2` | `int` | 0x3c | 0x3c |
| `processed_flag` | `int` | 0x40 | 0x40 |
| `normal` | `CVector3f` | 0x44 | 0x44 |
| `plane_distance` | `float` | 0x50 | 0x50 |
| `edge_perpendiculars` | `CVector3f[3]` | 0x54 | 0x54 |
| `edge_dot_products` | `float[3]` | 0x78 | 0x78 |
| `visited_stamp` | `int` | 0x84 | 0x84 |
| `affected_by_edge_stamp` | `int` | 0x88 | 0x88 |
