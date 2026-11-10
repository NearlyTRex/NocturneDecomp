# CLightningBolt

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 44 | fields | 44 |
| nocturne | 44 | fields | 44 |
| bw1 | 44 | fields | 44 |
| blairwitch2 | 44 | fields | 44 |
| bw3 | 48 | fields | 48 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `mode` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `start_position` | `CVector3f` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `start_width` | `float` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `lifetime` | `float` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `end_width` | `float` | 0x18 | 0x18 | 0x18 | 0x18 |  |
| `end_position` | `CVector3f` | 0x1c | 0x1c | 0x1c | 0x1c |  |
| `end_spread` | `float` | 0x28 | 0x28 | 0x28 | 0x28 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x18+0x18
