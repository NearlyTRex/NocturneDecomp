# SReflector

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 96 | fields | 96 |
| nocturne | 96 | fields | 96 |
| bw1 | 96 | fields | 96 |
| blairwitch2 | 96 | placeholder | 96 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `start_position` | `CVector3f` | 0x0 | 0x0 | 0x0 |  |
| `target_position` | `CVector3f` | 0xc | 0xc | 0xc |  |
| `interp_factor` | `float` | 0x18 | 0x18 | 0x18 |  |
| `position` | `CVector3f` | 0x1c | 0x1c | 0x1c |  |
| `rotation` | `CVector3f` | 0x28 | 0x28 | 0x28 |  |
| `rotation_matrix` | `CMatrix3x3f` | 0x34 | 0x34 | 0x34 |  |
| `dead` | `int` | 0x58 | 0x58 | 0x58 |  |
| `panel_index` | `int` | 0x5c | 0x5c | 0x5c |  |
