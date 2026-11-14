# CRing

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 484 | fields | 484 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `ring_type` | `int` | 0x0 |
| `center` | `CVector3f` | 0x4 |
| `lifetime` | `float` | 0x14 |
| `owner` | `CCharacter*` | 0x2c |
| `points` | `CVector3f[16]` | 0x30 |
| `directions` | `CVector3f[16]` | 0xf0 |
| `segment_timer` | `float` | 0x1b0 |
| `radius` | `float` | 0x1b4 |
| `hit_actors` | `CCharacter*[10]` | 0x1b8 |
| `hit_count` | `int` | 0x1e0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x10+0x4, 0x18+0x14
