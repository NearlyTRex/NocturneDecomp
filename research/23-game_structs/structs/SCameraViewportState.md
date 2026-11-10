# SCameraViewportState

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 144 | fields | — |
| nocturne | 144 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `viewport_center_x` | `int` | 0x0 | 0x0 |  |  |  |
| `viewport_center_y` | `int` | 0x4 | 0x4 |  |  |  |
| `viewport_right` | `int` | 0x8 | 0x8 |  |  |  |
| `viewport_bottom` | `int` | 0xc | 0xc |  |  |  |
| `camera_origin_x` | `int` | 0x10 | 0x10 |  |  |  |
| `camera_origin_y` | `int` | 0x14 | 0x14 |  |  |  |
| `camera_origin_z` | `int` | 0x18 | 0x18 |  |  |  |
| `camera_pitch` | `int` | 0x1c | 0x1c |  |  |  |
| `camera_yaw` | `int` | 0x20 | 0x20 |  |  |  |
| `camera_roll` | `int` | 0x24 | 0x24 |  |  |  |
| `clip_left` | `int` | 0x28 | 0x28 |  |  |  |
| `clip_right` | `int` | 0x2c | 0x2c |  |  |  |
| `clip_top` | `int` | 0x30 | 0x30 |  |  |  |
| `clip_bottom` | `int` | 0x34 | 0x34 |  |  |  |
| `relative_x` | `int` | 0x38 | 0x38 |  |  |  |
| `relative_y` | `int` | 0x3c | 0x3c |  |  |  |
| `relative_z` | `int` | 0x40 | 0x40 |  |  |  |
| `transform_matrix` | `CMatrix3x3i` | 0x44 | 0x44 |  |  |  |
| `inverse_matrix` | `CMatrix3x3i` | 0x68 | 0x68 |  |  |  |
| `projection_scale` | `int` | 0x8c | 0x8c |  |  |  |
