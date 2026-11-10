# SCurtainVertex

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 116 | fields | 116 |
| nocturne | 116 | fields | 116 |
| bw1 | 116 | fields | 116 |
| bw3 | 116 | fields | 116 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | bw3 |
|---|---|---:|---:|---:|---:|
| `local_position` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 |
| `initial_position` | `CVector3f` | 0xc | 0xc | 0xc | 0xc |
| `texture_u` | `int` | 0x18 | 0x18 | 0x18 | 0x18 |
| `texture_v` | `int` | 0x1c | 0x1c | 0x1c | 0x1c |
| `world_position` | `CVector3f` | 0x20 | 0x20 | 0x20 | 0x20 |
| `velocity` | `CVector3f` | 0x2c | 0x2c | 0x2c | 0x2c |
| `last_world_position` | `CVector3f` | 0x38 | 0x38 | 0x38 | 0x38 |
| `neighbor_count` | `int` | 0x44 | 0x44 | 0x44 | 0x44 |
| `neighbor_indices` | `int[4]` | 0x48 | 0x48 | 0x48 | 0x48 |
| `rest_distances` | `float[4]` | 0x58 | 0x58 | 0x58 | 0x58 |
| `is_pinned` | `int` | 0x68 | 0x68 | 0x68 | 0x68 |
| `has_collision` | `int` | 0x6c | 0x6c | 0x6c | 0x6c |
| `is_corner` | `int` | 0x70 | 0x70 | 0x70 | 0x70 |
