# CFootstep

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 64 | fields | 64 |
| nocturne | 64 | fields | 64 |
| bw1 | 64 | fields | 64 |
| blairwitch2 | 64 | fields | 64 |
| bw3 | 68 | placeholder | 68 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `expired` | `int` | 0x0 | 0x0 | 0x0 | 0x0 |  |
| `blood_type` | `EBloodType` | 0x4 | 0x4 | 0x4 | 0x4 |  |
| `corners` | `CVector3f[4]` | 0x8 | 0x8 | 0x8 | 0x8 |  |
| `alpha` | `int` | 0x38 | 0x38 | 0x38 | 0x38 |  |
| `is_bloody` | `int` | 0x3c | 0x3c | 0x3c | 0x3c |  |
