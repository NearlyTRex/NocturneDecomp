# CBloodSplat

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 68 | fields | 68 |
| nocturne | 68 | fields | 68 |
| bw1 | 68 | fields | 68 |
| blairwitch2 | 68 | fields | 68 |
| bw3 | 72 | fields | 72 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `expired` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `position` | `CVector3f` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `is_wall_splat` | `int` | 0x10 | 0x10 | 0x10 | 0x10 | 0x14 |
| `blood_type` | `EBloodType` | 0x14 | 0x14 | 0x14 | 0x14 | 0x18 |
| `rotation` | `CVector3f` | 0x18 | 0x18 | 0x18 | 0x18 | 0x1c |
| `age` | `float` | 0x24 | 0x24 | 0x24 | 0x24 | 0x28 |
| `texture_variant` | `int` | 0x28 | 0x28 | 0x28 | 0x28 | 0x2c |
| `position_fixed` | `CVector3i` | 0x2c | 0x2c | 0x2c | 0x2c | 0x30 |
| `normal_fixed` | `CVector3i` | 0x38 | 0x38 | 0x38 | 0x38 | 0x3c |
| `area_id` | `int` |  |  |  |  | 0x10 |
