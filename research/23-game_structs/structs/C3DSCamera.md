# C3DSCamera

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 420 | fields | 420 |
| nocturne | 416 | fields | 416 |
| bw1 | 420 | placeholder | 420 |
| blairwitch2 | 420 | placeholder | 420 |
| bw3 | 420 | placeholder | 420 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `name` | `char[256]` | 0x0 | 0x0 |  |  |  |
| `position` | `CVector3f` | 0x100 | 0x100 |  |  |  |
| `orientation` | `CVector3f` | 0x10c | 0x10c |  |  |  |
| `rotation_matrix` | `CMatrix3x3f` | 0x118 | 0x118 |  |  |  |
| `dead` | `int` | 0x13c | 0x13c |  |  |  |
| `is_panning` | `int` | 0x140 |  |  |  |  |
| `projection_scale` | `float` | 0x144 | 0x140 |  |  |  |
| `ambient_value` | `float` | 0x148 | 0x144 |  |  |  |
| `camera_group` | `int` | 0x14c | 0x148 |  |  |  |
| `use_global_fog` | `int` | 0x150 | 0x14c |  |  |  |
| `fog` | `SFog` | 0x154 | 0x150 |  |  |  |
| `reverb_preset` | `int` | 0x178 | 0x174 |  |  |  |
| `box` | `CBoundingBox3D` | 0x17c | 0x178 |  |  |  |
| `pvs_count` | `int` | 0x194 | 0x190 |  |  |  |
| `pvs_list` | `int*` | 0x198 | 0x194 |  |  |  |
| `vdir_zone` | `int` | 0x19c | 0x198 |  |  |  |
| `enabled` | `int` | 0x1a0 | 0x19c |  |  |  |
