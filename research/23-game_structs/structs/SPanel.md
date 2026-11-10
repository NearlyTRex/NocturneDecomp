# SPanel

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 100 | fields | 100 |
| nocturne | 100 | fields | 100 |
| bw1 | 100 | fields | 100 |
| blairwitch2 | 100 | placeholder | 100 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `exists` | `int` | 0x0 | 0x0 | 0x0 |  |
| `anim_progress` | `float` | 0x4 | 0x4 | 0x4 |  |
| `anim_speed` | `float` | 0x8 | 0x8 | 0x8 |  |
| `local_position` | `CVector3f` | 0xc | 0xc | 0xc |  |
| `rotation` | `CVector3f` | 0x18 | 0x18 | 0x18 |  |
| `rotation_matrix` | `CMatrix3x3f` | 0x24 | 0x24 | 0x24 |  |
| `dead` | `int` | 0x48 | 0x48 | 0x48 |  |
| `color` | `CColor3i` | 0x4c | 0x4c | 0x4c |  |
| `world_position` | `CVector3f` | 0x58 | 0x58 | 0x58 |  |
