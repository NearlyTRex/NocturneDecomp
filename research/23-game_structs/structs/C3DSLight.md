# C3DSLight

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 6296 | fields | 6296 |
| nocturne | 6296 | fields | 6296 |
| bw1 | 6296 | placeholder | 6296 |
| blairwitch2 | 6296 | placeholder | 6296 |
| bw3 | 6296 | placeholder | 6296 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `light_type` | `int` | 0x0 | 0x0 |  |  |  |
| `name` | `char[256]` | 0x4 | 0x4 |  |  |  |
| `pos` | `CVector3f` | 0x104 | 0x104 |  |  |  |
| `orient` | `CVector3f` | 0x110 | 0x110 |  |  |  |
| `fov` | `float` | 0x11c | 0x11c |  |  |  |
| `aspect` | `float` | 0x120 | 0x120 |  |  |  |
| `intensity` | `float` | 0x124 | 0x124 |  |  |  |
| `visible_flags` | `char[250]` | 0x128 | 0x128 |  |  |  |
| `dead` | `short` | 0x222 | 0x222 |  |  |  |
| `camera_light_bounds` | `CRect[250]` | 0x224 | 0x224 |  |  |  |
| `color` | `CColor3f` | 0x11c4 | 0x11c4 |  |  |  |
| `atten_start` | `float` | 0x11d0 | 0x11d0 |  |  |  |
| `atten_end` | `float` | 0x11d4 | 0x11d4 |  |  |  |
| `atten_end_squared` | `float` | 0x11d8 | 0x11d8 |  |  |  |
| `atten_end_reciprocal` | `float` | 0x11dc | 0x11dc |  |  |  |
| `on_time` | `float` | 0x11e0 | 0x11e0 |  |  |  |
| `cycle_time` | `float` | 0x11e4 | 0x11e4 |  |  |  |
| `cycle_elapsed` | `float` | 0x11e8 | 0x11e8 |  |  |  |
| `filter_count` | `int` | 0x11ec | 0x11ec |  |  |  |
| `blend_filter` | `int` | 0x11f0 | 0x11f0 |  |  |  |
| `filter_names` | `char[32][40]` | 0x11f4 | 0x11f4 |  |  |  |
| `filter_durations` | `float[32]` | 0x16f4 | 0x16f4 |  |  |  |
| `filter_indices` | `int[32]` | 0x1774 | 0x1774 |  |  |  |
| `move_filter` | `int` | 0x17f4 | 0x17f4 |  |  |  |
| `filter_vel` | `CVector2i` | 0x17f8 | 0x17f8 |  |  |  |
| `filter_pos` | `CVector2i` | 0x1800 | 0x1800 |  |  |  |
| `size` | `CVector2i` | 0x1808 | 0x1808 |  |  |  |
| `filters` | `CDemonFilter*[32]` | 0x1810 | 0x1810 |  |  |  |
| `current_filter_frame` | `int` | 0x1890 | 0x1890 |  |  |  |
| `filter_frame_elapsed` | `float` | 0x1894 | 0x1894 |  |  |  |
