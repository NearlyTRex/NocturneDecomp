# CExplosion

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | 28 |
| nocturne | 28 | fields | 28 |
| bw1 | 28 | fields | 28 |
| blairwitch2 | 28 | fields | 28 |
| bw3 | 32 | fields | 32 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `position` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `lifetime` | `float` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `scale` | `float` | 0x10 | 0x10 | 0x10 | 0x10 |  |
| `gore_multiplier` | `float` | 0x14 | 0x14 | 0x14 | 0x14 |  |
| `flip_flag` | `int` | 0x18 | 0x18 | 0x18 | 0x18 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x10+0x10
