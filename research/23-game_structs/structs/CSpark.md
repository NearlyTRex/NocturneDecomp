# CSpark

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 76 | fields | 76 |
| nocturne | 76 | fields | 76 |
| bw1 | 84 | fields | 84 |
| blairwitch2 | 84 | fields | 84 |
| bw3 | 84 | fields | 84 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CParticle` | 0x0 | 0x0 |  |  |  |
| `intensity_current` | `int` | 0x38 | 0x38 | 0x40 | 0x40 | 0x40 |
| `intensity_target` | `int` | 0x3c | 0x3c | 0x44 | 0x44 | 0x44 |
| `first_update_flag` | `int` | 0x40 | 0x40 | 0x48 | 0x48 | 0x48 |
| `spark_type` | `int` | 0x44 | 0x44 | 0x4c | 0x4c | 0x4c |
| `fade_rate` | `int` | 0x48 | 0x48 | 0x50 | 0x50 | 0x50 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x0+0x40
- **blairwitch2**: 0x0+0x40
- **bw3**: 0x0+0x40
