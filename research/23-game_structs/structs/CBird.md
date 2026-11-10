# CBird

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 129728 | fields | 129728 |
| bw3 | 132796 | fields | 132796 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `base` | `CCharacter` | 0x0 | 0x0 |
| `path_map` | `CPathMap` | 0xc1d0 | 0xcdcc |
| `shoot_me` | `int` | 0x1faac | 0x206a8 |
| `pool_me` | `int` | 0x1fab0 | 0x206ac |
| `speed` | `float` | 0x1fab4 | 0x206b0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1fab8+0x8
- **bw3**: 0x206b4+0x8
