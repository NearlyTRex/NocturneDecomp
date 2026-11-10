# CBloodPool

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | 40 |
| nocturne | 40 | fields | 40 |
| bw1 | 40 | fields | 40 |
| blairwitch2 | 40 | fields | 40 |
| bw3 | 44 | fields | 44 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `expired` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `position` | `CVector3f` | 0x4 | 0x4 | 0x4 | 0x4 |  |
| `blood_type` | `EBloodType` | 0x10 | 0x10 | 0x10 | 0x10 |  |
| `texture_variant` | `int` | 0x14 | 0x14 | 0x14 | 0x14 |  |
| `age` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x1c |
| `position_fixed` | `CVector3i` | 0x1c | 0x1c | 0x1c | 0x1c | 0x20 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x4+0x18
