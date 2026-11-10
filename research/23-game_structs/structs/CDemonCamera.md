# CDemonCamera

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 5320 | fields | 5320 |
| nocturne | 5320 | fields | 5320 |
| bw1 | 5320 | fields | 5320 |
| blairwitch2 | 5320 | fields | 5320 |
| bw3 | 5320 | fields | 5320 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCameraView` | 0x0 |  | 0x0 | 0x0 | 0x0 |
| `camera_name` | `char[256]` | 0x40 | 0x0 | 0x40 | 0x40 | 0x40 |
| `max_distance` | `float` | 0x140 | 0x140 | 0x140 | 0x140 | 0x140 |
| `framebuffer_width` | `int` | 0x144 | 0x144 | 0x144 | 0x144 | 0x144 |
| `framebuffer_height` | `int` | 0x148 | 0x148 | 0x148 | 0x148 | 0x148 |
| `scale_factor` | `int` | 0x14c | 0x14c | 0x14c | 0x14c | 0x14c |
| `display_width` | `int` | 0x150 | 0x150 | 0x150 | 0x150 | 0x150 |
| `display_height` | `int` | 0x154 | 0x154 | 0x154 | 0x154 | 0x154 |
| `framebuffer_aligned` | `void*` | 0x158 | 0x158 | 0x158 | 0x158 | 0x158 |
| `zbuffer_aligned` | `void*` | 0x15c | 0x15c | 0x15c | 0x15c | 0x15c |
| `framebuffer_raw` | `void*` | 0x160 | 0x160 | 0x160 | 0x160 | 0x160 |
| `zbuffer_raw` | `void*` | 0x164 | 0x164 | 0x164 | 0x164 | 0x164 |
| `skip_clear_buffer_flag` | `int` | 0x168 | 0x168 | 0x168 | 0x168 | 0x168 |
| `camera_origin` | `CVector3i` | 0x16c | 0x16c | 0x16c | 0x16c | 0x16c |
| `source_matrix` | `CMatrix3x3i` | 0x178 | 0x178 | 0x178 | 0x178 | 0x178 |
| `inverted_matrix` | `CMatrix3x3i` | 0x19c | 0x19c | 0x19c | 0x19c | 0x19c |
| `cached_projection` | `SProjectionParams` | 0x1c0 | 0x1c0 | 0x1c0 | 0x1c0 | 0x1c0 |
| `rect_array_count` | `int` | 0x1d0 | 0x1d0 | 0x1d0 | 0x1d0 | 0x1d0 |
| `rect_array` | `CRect[256]` | 0x1d4 | 0x1d4 | 0x1d4 | 0x1d4 | 0x1d4 |
| `viewport_rect` | `CRect` | 0x11d4 | 0x11d4 | 0x11d4 | 0x11d4 | 0x11d4 |
| `scene_open_flag` | `int` | 0x11e4 | 0x11e4 | 0x11e4 | 0x11e4 | 0x11e4 |
| `corona_blend_factor` | `int` | 0x11e8 | 0x11e8 | 0x11e8 | 0x11e8 | 0x11e8 |
| `alpha_translations` | `CVector3i[8]` | 0x11ec | 0x11ec | 0x11ec | 0x11ec | 0x11ec |
| `alpha_transform_matrices` | `int[18][8]` | 0x124c | 0x124c | 0x124c | 0x124c | 0x124c |
| `transform_state` | `CCameraTransformState` | 0x148c | 0x148c | 0x148c | 0x148c | 0x148c |
| `fixed_point_scale` | `float` |  | 0x100 |  |  |  |
| `position` | `CVector3f` |  | 0x104 |  |  |  |
| `rotation_matrix` | `CMatrix3x3f` |  | 0x110 |  |  |  |
| `dead` | `int` |  | 0x134 |  |  |  |
| `focal_length` | `float` |  | 0x138 |  |  |  |
| `screen_width` | `int` |  | 0x13c |  |  |  |
